#include <iostream>
#include <math.h>

using namespace std;

float calculo(float n1, float n2, float n3, float n4) {

	float media;
	
	media = ((n1+n2+n3+n4)/4);
	return media;
}

int main() {

	float n1,n2,n3,n4,media_aluno;

	cout << "Informe a primeira nota: ";
	cin >> n1;

	cout << "Informe a segunda nota: ";
	cin >> n2;

	cout << "Informe a terceira nota: ";
	cin >> n3;

	cout << "Informe a quarta nota:";
	cin >> n4;

	media_aluno = calculo(n1,n2,n3,n4);
	
	cout << " \nA média final do aluno é " << media_aluno;

	return 0;
}