# The Creator - Sistema de Análise de Consumo Musical

## Descrição

"The Creator" é um sistema de análise de consumo musical desenvolvido em C++ que permite aos usuários inserir suas músicas favoritas e analisar dados como o número de gêneros distintos. O sistema armazena os dados em arquivos JSON e apresenta resultados no terminal. Este projeto demonstra os conceitos de programação orientada a objetos, leitura/escrita de arquivos JSON e interação com o usuário no terminal.

## Diagrama UML

O diagrama UML do sistema está disponível no arquivo `_UML_diagrama_.png`. Ele mostra as seguintes classes principais:

*   **`Usuario`**: Representa um usuário do sistema, com um nome e uma lista de músicas favoritas.
*   **`Musica`**: Representa uma música, com atributos como nome, artista, ritmo (BPM), idioma, gênero e tempo.
*   **`Artista`**: Representa o artista da música.
*   **`Ritmo`**: Representa o ritmo da música em BPM.
*   **`Idioma`**: Representa o idioma da música.
*   **`Genero`**: Representa o gênero da música.
*   **`Tempo`**: Representa o tempo da música.
*   **`NumeroArtistas`**: Classe responsável por calcular o número de artistas diferentes.
*   **`RitmoMedio`**: Classe responsável por calcular o ritmo médio das músicas.
*   **`TempoMedio`**: Classe responsável por calcular o tempo médio das músicas.
*   **`NumeroIdiomas`**: Classe responsável por calcular o número de idiomas diferentes.
*   **`NumeroGeneros`**: Classe responsável por calcular o número de gêneros diferentes.
*   **`InterfaceUsuario`**: Classe responsável pela interação com o usuário (exibição de menus, leitura de dados).

O diagrama também mostra as relações entre as classes, indicando como elas se associam e colaboram para realizar as funcionalidades do sistema.

_Para visualizar o diagrama UML, abra o arquivo `_UML_diagram.png`._

## Como Executar o Sistema

Para executar o sistema "The Creator" no terminal, siga os passos abaixo:

### 1. Pré-requisitos

*   **Compilador C++:** Certifique-se de ter um compilador C++ instalado (como g++ ou clang++).
*   **Biblioteca JSON:** O projeto utiliza a biblioteca `nlohmann/json`. Instale a biblioteca seguindo as instruções em [https://github.com/nlohmann/json](https://github.com/nlohmann/json).
    *   Você pode baixar o header `json.hpp` do GitHub e colocar na pasta `include` ou instalar usando um gerenciador de pacotes (exemplo para apt: `sudo apt-get install nlohmann-json3-dev`).
*   **Sistema Operacional:** O sistema foi desenvolvido e testado em ambientes Linux, mas deve funcionar em outros sistemas Unix, e Windows.

### 2. Compilação

1.  Abra o terminal.
2.  Navegue até a pasta raiz do projeto.
3.  Compile o código usando o seguinte comando:
    ```bash
    g++ src/*.cpp -I include -o theCreator
    ```
    Este comando irá compilar todos os arquivos `.cpp` da pasta `src`, incluir os headers da pasta `include` e gerar um executável chamado `theCreator`.

### 3. Execução

1.  Após a compilação, execute o programa com o comando:
    ```bash
    ./theCreator
    ```

### 4. Interação com o Sistema

1.  O sistema irá pedir para você inserir o seu nome.
2.  Em seguida, o sistema irá pedir para você inserir o nome de três músicas, um a um. Para cada música, você deverá fornecer:
     - O nome da música.
     - O nome do artista.
     - O gênero da música.
     - O BPM da música.
     - O idioma da música.
     - O tempo da música.
3.  Após inserir as músicas, o sistema irá apresentar um menu com as seguintes opções:
    *   `1. Ver número de gêneros diferentes`
    *   `0. Sair`
4.  Digite o número da opção desejada e pressione `Enter`.
5.  Se escolher a opção `1`, o sistema exibirá o número de gêneros diferentes encontrados nas músicas inseridas.
6.  Para sair do sistema, digite `0`.

## Estrutura do Projeto

O projeto está organizado da seguinte forma:

*   **`include`**: Contém os arquivos de cabeçalho (`.h`) das classes.
*   **`src`**: Contém os arquivos de implementação (`.cpp`) das classes e o arquivo `main.cpp`.
*   **`data`**: Contém os arquivos JSON utilizados para persistência de dados.

## Notas Adicionais

*   Os dados das músicas são armazenados no arquivo `data/musicas.json`.
*   O sistema foi desenvolvido com foco em clareza e organização do código.
*   Para uma melhor experiência, certifique-se que não existem erros nos ficheiros JSON antes de executar o sistema.

## Autores



