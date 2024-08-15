#include <bits/stdc++.h>

using namespace std;

int main()
{
			// DECLARAÇÃO DE VARIÁVEIS:
	int idade;
	float salario, altura;
	char genero;
	string nome;
	
			//PROCESSAMENTO DE DADOS:
	//idade = 20;
	//salario = 1400.00;
	//altura = 1.60;
	//genero = 'F';
	//nome = "Marcela Meiser";
	
	cout << fixed << setprecision(2);
	
			//SAÍDA DE DADOS:
	//cout << "IDADE = " << idade << endl;
	//cout << "SALARIO = " << salario << endl;
	//cout << "ALTURA = " << altura << endl;
	//cout << "GENERO = " << genero << endl;
	//cout << "NOME = " << nome << endl;
	//cout << "A funcionaria " << nome << ", do sexo " << genero << ", de altura " << altura << ", e idade " << idade << " tem o salario de R$" << salario;
	
			//ENTRADA DE DADOS:
	cout << "Digite o seu nome: ";
	getline(cin, nome);
	
	cout << "Digite a sua idade: ";
	cin >> idade;
	
	cout << "Digite a sua altura: ";
	cin >> altura;
	
	cout << "Digite o seu genero: ";
	cin.ignore(INT_MAX, '\n');
	cin >> genero;
	
	cout << "Digite o seu salario: ";
	cin >> salario;
	
			//SAÍDA DE DADOS:
	cout << nome << '\n' << idade << '\n' << altura << '\n' << genero << '\n' << salario;
	
	return 0;
}

