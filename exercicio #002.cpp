#include <bits/stdc++.h>
using namespace std;
int main()
{
	string nome1, nome2;
	int idade1, idade2;
	float mediaIdade;
	
	cout << "Digite o nome da primeira pessoa: ";
	getline(cin, nome1);
	
	cout << "Digite a idade da primeira pessoa: ";
	cin >> idade1;
	
	cout << "Digite o nome da segunda pessoa: ";
	cin.ignore(INT_MAX, '\n');
	getline(cin, nome2);
	
	cout << "Digite a idade da segunda pessoa: ";
	cin >> idade2;
	
	mediaIdade = (double) idade1 + idade2 / 2;
	
	cout << "\nNOME PRIMEIRA PESSOA: " << nome1 << endl;
	cout << "\nIDADE PRIMEIRA PESSOA: " << idade1 << " anos" << endl;
	cout << "\nNOME SEGUNDA PESSOA: " << nome2 << endl;
	cout << "\nIDADE SEGUNDA PESSOA: " << idade2 << " anos" << endl;
	
	return 0;
}
