#include <iostream>
#include <math.h>

using namespace std;

float mediaturma(float nota[], float soma) {

	float media;

	media = soma/4;
	return media;
}

int main() {

	float nota[5],media_aluno = 0, soma = 0;

	for (int i=0;i<4;i++){
		cout << "Informe a "<< i + 1 << "°" << " nota: ";
		cin >> nota[i];
		
		soma += nota[i];		
	}

	media_aluno = mediaturma(nota,soma);
	
	cout << " \nA média final do aluno é " << media_aluno;
	
	return 0;
}