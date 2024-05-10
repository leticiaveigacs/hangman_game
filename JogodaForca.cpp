// JogodaForca.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <Windows.h>
#include <conio.h>

using namespace std;

// ________________  Protótipos  _____________
string iniciarJogo(string& pal);
void verificarLetra(string& certas, string& jogadas, string pal, int& tentativas);
char repetirJogo(bool acertou, string certa);

int main()
{
	// Descrição das etapas
	// declarar as variáveis necessárias
	// Loop
	//		Ler a palavra a adivinhar e colocar '-' para cada letra
	//		Loop
	//           Verificar se letra jogada é certa
	//		Enquanto não acertou e as tentativas > 0
	// 
	//      Perguntar se quer continuar a jogar
	//		Ler a resposta
	// Enquanto quiser continuar a jogar
	string palavra, letrasCertas, letrasJogadas;
	int tentativas;
	bool certa;
	char repetir;

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	do
	{
		system("cls");
		certa = false;
		tentativas = 6;
		palavra = "";
		letrasCertas = "";
		letrasJogadas = "";

		letrasCertas = iniciarJogo(palavra);

		do
		{
			verificarLetra(letrasCertas, letrasJogadas, palavra, tentativas);

			if (letrasCertas == palavra)
				certa = true;

		} while (tentativas > 0 && !certa);


		repetir = repetirJogo(certa, letrasCertas);

	} while (repetir == 's');
	cout << "\n\n\tFim do jogo" << endl;
}

// _____________  Funções do Programa   ______________________
// Le a palavra a adivinhar e retorna uma string com tantos '-' quantas as letras
// da palavra digitada
string iniciarJogo(string& pal)
{
	string aux;

	cout << "\n\tInsira a palavra a adivinhar:   ";
	cin >> pal;		// lê a palavra
	aux = pal;		// Determina o nº de carateres da string aux
	// Substituir cada letra por '-' na string onde vão ficar as letras certas
	for (int i = 0; i < pal.length(); i++)
	{
		aux[i] = '-';
		pal[i] = toupper(pal[i]);
	}
	return aux;
}


// __________________________________________________________________
// 
void verificarLetra(string& certas, string& jogadas, string pal, int& tentativas)
{
	bool acertou = false;
	bool repetida = false;
	char letra;


	system("cls");
	cout << "\n\t " << certas << endl;
	cout << "\n\tLetras Jogadas:   ";
	// Mostrar as letras jogadas
	for (char c : jogadas)				// for range - aplicado a coleções de elementos
	{
		cout << c << " ";
	}

	cout << "\n\tRestam " << tentativas << " tentativas" << endl;

	// Verificar se a letra digitada faz parte da palavra
	cout << "\n\tDigite uma letra:   ";
	letra = toupper(_getche());

	// Verifica se a letra já foi jogada
	for (int i = 0; i < jogadas.length(); i++)
	{
		if (letra == jogadas[i]) {
			cout << "\n\tLetra repetida...." << endl;
			repetida = true;
			break;
		}
	}

	// Vai substituir a letra na palavras certas se ainda não foi jogada e se faz parte da palavra
	if (!repetida) {
		jogadas += letra;
		for (int i = 0; i < pal.length(); i++)
		{
			if (letra == pal[i]) {
				certas[i] = letra;
				acertou = true;
			}
		}
	}
	if (!acertou)
		tentativas--;
}

// _________________________________________________
//
char repetirJogo(bool acertou, string certa)
{
	char letra;
	system("cls");
	if (acertou) {
		cout << "\n\tParabéns! Acertou..." << endl;
		cout << "\n\tPalavra certa:   " << certa << endl;
	}
	else {
		cout << "\n\tPerdeu!..." << endl;
	}
	cout << "\n\tContinuar a jogar (s/n)?    ";
	letra = tolower(_getche());
	return letra;
}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
