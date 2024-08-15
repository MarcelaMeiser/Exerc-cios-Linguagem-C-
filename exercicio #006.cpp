#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N = 0, i = 0, somaIdade = 0;
	float somaAltura = 0, mediaAltura = 0, mediaIdade = 0;
	
	cout << "Digite a quantidade de pessoas que serao digitadas: ";
	cin >> N;
	
	int pessoa[N];
	string nome[N];
	int idade[N];
	float altura[N];
	
	for (i = 0; i < N; i++)
	{
		cout << "\nDados da " << i + 1 << "a pessoa:\n";
		
		cout << "Nome: ";
		cin.ignore(INT_MAX, '\n');
		getline(cin, nome[i]);
		
		cout << "Idade: ";
		cin >> idade[i];
		
		if (idade[i] < 16)
		{
			somaIdade = somaIdade + 1;
		}
		
		cout << "Altura: ";
		cin >> altura[i];
		
		somaAltura = somaAltura + altura[i];
	}	
	
	mediaIdade = (somaIdade * 100) / N;
	mediaAltura = somaAltura / N;
	
	cout << fixed << setprecision(2);
	cout << "\nAltura media: " << mediaAltura << endl;
	cout << fixed << setprecision(1);
	cout << "Pessoas com menos de 16 anos: " << mediaIdade << "%" << endl;
	
	for (i = 0; i < 5; i++)
	{
		if (idade[i] < 16)
		{
			cout << nome[i] << endl;
		}
	}
	
	return 0;
}
