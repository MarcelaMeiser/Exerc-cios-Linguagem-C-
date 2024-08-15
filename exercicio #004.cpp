#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x, y;
	
	while (x != y)
	{
		cout << "Digite dois numeros:\n";
		cin >> x >> y;
		
		if (x > y)
		{
			cout << "DECRESCENTE\n\n";
		}
		if (y > x)
		{
			cout << "CRESCENTE\n\n"; 
		}
	}
	
	return 0;
}
