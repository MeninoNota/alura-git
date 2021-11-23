	#include <stdio.h>
	#include <stdlib.h>
	#include <locale.h>

int some(int* num, int tam){
	int total = 0;

	for (int i = 0; i < tam; i++){
		total += num[i];
	}
	return total;
}

int main() {

	setlocale (LC_ALL, "Portuguese");

	int tamanho = 3;
	int numerozim[tamanho];

	numerozim[0] = 1;
	numerozim[1] = 5;
	numerozim[2] = 7;

	//total = some

	printf("%d\n", some(numerozim, tamanho), 3);

}