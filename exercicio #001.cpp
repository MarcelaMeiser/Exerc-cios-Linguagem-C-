#include <bits/stdc++.h>
using namespace std;
int main()
{
	float base, altura, area, perimetro, diagonal;
	
	cout << "Digite a medida da base do retangulo: ";
	cin >> base;
	cout << "Digite a medida da altura do retangulo: ";
	cin >> altura;
	
	area = base * altura;
	perimetro = 2*(base + altura);
	diagonal = sqrt((altura * altura) + (base * base));
	
	cout << fixed << setprecision(4);
	cout << "Area do retangulo: " << area << endl;
	cout << "Perimetro do retangulo: " << perimetro << endl;
	cout << "Diagonal do retangulo: " << diagonal << endl;
	
	return 0;
}
