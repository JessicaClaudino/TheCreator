# The Creator - Sistema de Análise de Consumo Musical

## Descrição

"The Creator" é um sistema de análise de consumo musical desenvolvido em C++ que permite aos usuários inserir suas músicas favoritas e analisar dados como o número de gêneros, artistas e idiomas distintos, além do ritmo e tempo médio das músicas. O sistema interage com o usuário via terminal, solicitando informações sobre as músicas e exibindo os resultados. Este projeto demonstra conceitos de programação orientada a objetos e interação com o usuário.

## Diagrama UML

O diagrama UML do sistema está disponível no arquivo `_UML_diagrama_.png`. Ele mostra as seguintes classes principais:

*   **`Usuario`**: Representa um usuário do sistema, com um nome e uma lista de músicas favoritas.
*   **`Musica`**: Representa uma música, com atributos como nome, artista, gênero, ritmo (BPM), idioma e tempo.
*   **`Artista`**: Representa o artista da música.
*   **`Ritmo`**: Representa o ritmo da música em BPM.
*    **`Tempo`**: Representa o tempo de duração da música.
*   **`Idioma`**: Representa o idioma da música.
*   **`Genero`**: Representa o gênero da música.
*   **`NumeroArtistas`**: Classe responsável por calcular o número de artistas diferentes.
*   **`RitmoMedio`**: Classe responsável por calcular o ritmo médio das músicas.
*   **`TempoMedio`**: Classe responsável por calcular o tempo médio das músicas.
*   **`NumeroIdiomas`**: Classe responsável por calcular o número de idiomas diferentes.
*   **`NumeroGeneros`**: Classe responsável por calcular o número de gêneros diferentes.
*   **`InterfaceUsuario`**: Classe responsável pela interação com o usuário (exibição de menus, leitura de dados).

O diagrama também mostra as relações entre as classes, indicando como elas se associam e colaboram para realizar as funcionalidades do sistema.

![Diagrama UML](_UML_diagrama_.png)

## Como Executar o Sistema

Para executar o sistema "The Creator" no terminal, siga os passos abaixo:

### 1. Pré-requisitos

*   **Compilador C++:** Certifique-se de ter um compilador C++ instalado (como g++ ou clang++).
*   **Sistema Operacional:** O sistema foi desenvolvido e testado em ambientes Linux e Windows, mas deve funcionar em outros sistemas Unix.

### 2. Compilação

1.  Abra o terminal.
2.  Navegue até a pasta raiz do projeto.
3.  Compile o código usando o seguinte comando:
    ```bash
    g++ *.cpp -o TheCreator
    ```
    Este comando irá compilar todos os arquivos `.cpp` do diretório atual e gerar um executável chamado `TheCReator`.

### 3. Execução

1.  Após a compilação, execute o programa com o comando:
    ```bash
    ./TheCreator
    ```
    (No Windows, use `TheCreator.exe`)

### 4. Interação com o Sistema

1.  O sistema irá apresentar uma mensagem de boas-vindas e solicitar que você insira o seu nome.
2.  Em seguida, o sistema irá pedir para você inserir o nome de três músicas, uma a uma. Para cada música, você deverá fornecer:
    *   O nome da música.
    *   O nome do artista.
     *   O gênero da música.
    *   O BPM da música.
    *   O idioma da música.
    *   O tempo da música (no formato "min:seg").
3.  Após inserir as músicas, o sistema irá apresentar um menu com as seguintes opções:
    *   `1. Ver número de gêneros diferentes`
    *   `2. Ver número de artistas diferentes`
    *   `3. Ver ritmo médio das músicas`
    *  `4. Ver tempo médio das músicas`
    *  `5. Ver número de idiomas diferentes`
    *   `0. Sair`
4.  Digite o número da(s) opção(ões) desejada(s), separadas por espaço e pressione `Enter`. Você pode selecionar várias opções de uma vez. Digite `0` para sair.
5.  O sistema exibirá os resultados de acordo com as opções selecionadas, juntamente com o seu nome.
6.  Para sair do sistema, digite `0`.

## Estrutura do Projeto

O projeto está organizado da seguinte forma:

*   **Arquivos de cabeçalho (.h):**
    *   `Artista.h`: Define a classe `Artista`.
    *   `Genero.h`: Define a classe `Genero`.
    *   `Idioma.h`: Define a classe `Idioma`.
    *   `Musica.h`: Define a classe `Musica`.
    *   `NumeroArtistas.h`: Define a classe `NumeroArtistas`.
    *   `NumeroGeneros.h`: Define a classe `NumeroGeneros`.
     *   `NumeroIdiomas.h`: Define a classe `NumeroIdiomas`.
    *   `InterfaceUsuario.h`: Define a classe `InterfaceUsuario`.
     *   `Ritmo.h`: Define a classe `Ritmo`.
    *  `RitmoMedio.h`: Define a classe `RitmoMedio`.
    *   `Tempo.h`: Define a classe `Tempo`.
    *   `TempoMedio.h`: Define a classe `TempoMedio`.
    *   `Usuario.h`: Define a classe `Usuario`.

*   **Arquivos de implementação (.cpp):**
    *    `Artista.cpp`: Implementa a classe `Artista`.
    *   `Genero.cpp`: Implementa a classe `Genero`.
    *   `Idioma.cpp`: Implementa a classe `Idioma`.
    *   `Musica.cpp`: Implementa a classe `Musica`.
    *   `NumeroArtistas.cpp`: Implementa a classe `NumeroArtistas`.
    *   `NumeroGeneros.cpp`: Implementa a classe `NumeroGeneros`.
    *    `NumeroIdiomas.cpp`: Implementa a classe `NumeroIdiomas`.
    *   `InterfaceUsuario.cpp`: Implementa a classe `InterfaceUsuario`.
    *  `Ritmo.cpp`: Implementa a classe `Ritmo`.
     *  `RitmoMedio.cpp`: Implementa a classe `RitmoMedio`.
    *   `Tempo.cpp`: Implementa a classe `Tempo`.
     *  `TempoMedio.cpp`: Implementa a classe `TempoMedio`.
    *   `mainTheCreator.cpp` (ou `main.cpp`): Arquivo principal do sistema.
    *   `Usuario.cpp`: Implementa a classe `Usuario`.

## Notas Adicionais

  * Sobre o sistema "The Creator"

O sistema  foi desenvolvido com uma abordagem que priorizou a organização do código e a criação de um sistema que fosse, simultaneamente, simples e prático para o usuário final. A arquitetura do sistema foi concebida para facilitar o entendimento e a manutenção do código, utilizando princípios de programação orientada a objetos que promovem a modularidade e o reuso de componentes.

 * Simplicidade e Praticidade para o Usuário:

O foco na simplicidade resultou em uma interface de usuário minimalista e intuitiva, baseada em interações via terminal. O sistema guia o usuário através de um fluxo claro e direto, desde a inserção das músicas favoritas até a exibição dos resultados das análises. A ausência de complexidade na interação com o sistema garante que mesmo usuários sem conhecimento técnico possam utilizar o programa sem dificuldades. A praticidade foi alcançada ao apresentar apenas informações relevantes e úteis para o usuário, sem sobrecarregá-lo com detalhes desnecessários.

* Preparação para Implementações Futuras:

A estrutura do sistema permite implementações futuras sem a necessidade de grandes reformulações do código. A utilização de classes bem definidas e com responsabilidades específicas facilita a adição de novas funcionalidades e a modificação das existentes.

Memória Mais Eficiente: A arquitetura modular do sistema permite que futuramente se possa melhorar a gestão da memória. A classe Musica pode utilizar referências em vez de cópias, minimizando o uso da memória ao criar listas de músicas. Técnicas de cache podem ser implementadas nas classes de análise para evitar cálculos repetidos de forma eficiente.

Integração com APIs de Streaming: O design do sistema considera a possibilidade de integrações com APIs de serviços de streaming no futuro. Uma nova camada de abstração pode ser adicionada para lidar com a comunicação com as APIs, permitindo que o sistema obtenha dados diretamente de plataformas como Spotify ou Apple Music. Desta forma, as classes de análise poderão trabalhar com os dados fornecidos por essas APIs, enriquecendo a experiência do usuário. A classe InterfaceUsuario foi pensada para permitir a fácil adição de novos menus e opções.

* Impasses
  
Durante o desenvolvimento inicial, foi considerado o uso de arquivos JSON para persistência de dados, de forma a permitir que o sistema pudesse guardar as músicas inseridas pelo usuário. No entanto, a complexidade da manipulação de arquivos JSON e da sua integração com as classes existentes, dentro do tempo limitado para o projeto, representou um obstáculo inicial. Como o principal foco do projeto era demonstrar a interação do usuário e a análise de dados, a decisão foi adiar a implementação do JSON para uma futura versão. Apesar disso, o uso de JSON se mostrou uma opção viável e muito interessante para persistência de dados e para garantir a interoperabilidade com outras aplicações. Desta forma, será uma das principais melhorias do sistema nas futuras iterações.
## Autores

Jéssica Claudino, Sofia Braga, Kayky Braga, Helena Galego, Guilherme Vargas


