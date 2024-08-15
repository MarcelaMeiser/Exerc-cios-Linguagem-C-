#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, i, j, soma = 0;
	
	cout << "Digite a ordem da matriz: ";
	cin >> n;
	
	int vet[n][n];
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cout << "\nElemento [" << i << "," << j << "]:";
			cin >> vet[i][j];
			if (vet[i][j] < 0)
			{
				soma = soma + 1;
			}
		}
	}
	cout << "\nDIAGONAL PRINCIPAL:\n";
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == j)
			{
				cout << vet[i][j] << " ";
			}
		}
	}
	cout << "\nQUANTIDADE DE NEGATIVOS: " << soma;
	
	return 0;
}
