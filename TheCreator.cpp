#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
#include "InterfaceUsuario.h"
#include "Usuario.h"
#include "Musica.h"

int main() {
    InterfaceUsuario interface;

     // Mensagem de boas-vindas
    std::cout << "Seja Bem-Vindo ao sistema TheCreator, um sistema de analise de consumo musical." << std::endl;
    
    // 1. Obter o nome do usuário
    std::string nomeUsuario = interface.obterNomeUsuario();
    Usuario usuario(nomeUsuario);

     // Mensagem de solicitação das músicas favoritas
    std::cout << "Agora vamos as suas musicas favoritas." << std::endl;

    // 2. Obter músicas favoritas do usuário
    std::vector<Musica*> musicas = interface.obterMusicas(3);
    usuario.setMusicasFavoritas(musicas);


    // 3. Exibir o menu e obter as opções do usuário
    int opcao;
    std::string input;
    std::vector<int> opcoes;

    do {
        interface.exibirMenu();
        std::getline(std::cin >> std::ws, input); // Lê a linha inteira

        std::istringstream iss(input);
        opcoes.clear(); // Limpa as opções anteriores
        while (iss >> opcao) {
            opcoes.push_back(opcao);
        }

      interface.executarOpcao(opcoes, usuario);
    } while (std::find(opcoes.begin(), opcoes.end(), 0) == opcoes.end());

    // Mensagem de agradecimento
    std::cout << "Obrigado por usar o TheCreator!" << std::endl;

    // 4. Liberar a memória alocada
    for (Musica* musica : musicas) {
        delete musica->getArtista();
       delete musica->getGenero();
        delete musica->getRitmo();
       delete musica->getIdioma();
        delete musica->getTempo();
        delete musica;
    }

    return 0;
}
