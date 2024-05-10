# Jogo da Forca 💡

Este é um jogo da forca simples desenvolvido em C++. Utiliza fun

## Funcionalidades 🛠️

- Permite que o usuário insira uma palavra a ser adivinhada.
- Mostra na tela uma série de traços representando cada letra da palavra.
- O jogador pode tentar adivinhar letras.
- O jogo verifica se a letra inserida pelo jogador faz parte da palavra.
- Limita o número de tentativas (6 tentativas erradas resultam na derrota).
- Informa ao jogador se ele acertou ou errou.
- Pergunta se o jogador deseja continuar jogando após o término de cada partida.

## Como Jogar 🎮

1. Execute o programa.
2. Insira uma palavra que deseja que o seu oponente adivinhe.
3. O jogo irá exibir uma série de traços representando cada letra da palavra.
4. Tente adivinhar as letras inserindo-as pelo teclado.
5. Se acertar uma letra, ela será revelada na posição correspondente na palavra.
6. Se errar uma letra, suas tentativas restantes diminuirão.
7. Continue tentando até adivinhar a palavra ou até que suas tentativas acabem.
8. Após o término de cada partida, o jogo perguntará se você deseja jogar novamente.

## Pré-requisitos 📋

- Este jogo foi desenvolvido em C++ e requer um compilador compatível com C++ para ser executado.

## Como Compilar e Executar ▶️

1. Clone este repositório para o seu computador.
2. Navegue até o diretório onde o arquivo `JogoDaForca.cpp` está localizado.
3. Compile o arquivo utilizando um compilador C++ compatível. Por exemplo:
   ```
   g++ JogodaForca.cpp -o JogodaForca
   ```
4. Execute o programa gerado:
   ```
   ./JogodaForca
   ```

## Parte Técnica 🖥️

O código foi dividido em diferentes funções para facilitar a compreensão e manutenção:

- `iniciarJogo(string& pal)`: Esta função recebe como parâmetro uma referência para uma string representando a palavra a ser adivinhada e inicializa o jogo.
  
- `verificarLetra(string& certas, string& jogadas, string pal, int& tentativas)`: Esta função verifica se a letra jogada pelo usuário faz parte da palavra, atualiza a string `certas`, e decrementa o número de `tentativas` restantes.

- `repetirJogo(bool acertou, string certa)`: Esta função pergunta ao jogador se ele deseja continuar jogando após o término de uma partida. E informa se o jogador venceu ou perdeu.

