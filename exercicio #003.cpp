#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a, b, c, aux;
	
	cout << "Digite o primeiro numero: ";
	cin >> a;
	cout << "Digite o segundo numero: ";
	cin >> b;
	cout << "Digite o terceiro numero: ";
	cin >> c;
	
	if (a < b && a < c)
	{
		aux = a;
	}
	else if (b < c)
	{
		aux = b;
	}
	else
	{
		aux = c;
	}
	
	cout << "MENOR NUMERO: " << aux;	
	
	return 0;
}
