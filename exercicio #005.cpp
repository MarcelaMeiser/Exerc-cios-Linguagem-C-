#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x, y, soma, i, aux;
	
	cout << "Digite dois numeros:\n";
	cin >> x >> y;
	
	if (x > y)
	{
		aux = x;
		x = y;
		y = aux;
	}
	
	for (i = x + 1; i < y; i++)
	{
		if (i % 2 != 0)
		{
			soma = soma + i;
		}
	}
	
	cout << soma;
	
	return 0;
}
