#include <stdio.h>

int main() {
    int numAlunos;
    float nota, soma = 0;

    printf("Digite o número de alunos: ");
    scanf("%d", &numAlunos);

    // Loop para ler as notas dos alunos
    for (int i = 1; i <= numAlunos; i++) {
        printf("Digite a nota do aluno %d: ", i);
        scanf("%f", &nota);
        soma += nota; // Acumula as notas para calcular a média
    }

    float media = soma / numAlunos; // Calcula a média
    printf("A média das notas é: %.2f\n", media);

    if (media < 5) {
        printf("Atenção: Alunos reprovados!\n");
    }

    return 0;
}
