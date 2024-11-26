#include <stdio.h>
int somarValores(int v[], int tamanho) {
	int soma = 0;
	for (int i = 0; i < tamanho; i++) {
		soma += v[i];
	}
	return soma;
}
int main() {
	int tamanho;
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &tamanho);
	int vetor[tamanho];
	printf("Digite %d valores:\n", tamanho);
	for (int i = 0; i < tamanho; i++) {
		printf("Valor %d: ", i + 1);
		scanf("%d", &vetor[i]);
	}
	int soma = somarValores(vetor, tamanho);
	float media = (float)soma / tamanho;
	printf("Soma dos valores: %d\n", soma);
	printf("Média dos valores: %.2f\n", media);
	return 0;
}

