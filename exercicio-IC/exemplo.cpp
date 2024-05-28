#include <iostream>
#include <iomanip> // Para usar setprecision
using namespace std;

int main() {
    int numAlunos;
    float nota, soma = 0;

    cout << "Digite o número de alunos: ";
    cin >> numAlunos;

    // Loop para ler as notas dos alunos
    for (int i = 1; i <= numAlunos; i++) {
        cout << "Digite a nota do aluno " << i << ": ";
        cin >> nota;
        soma += nota; // Acumula as notas para calcular a média
    }

    float media = soma / numAlunos; // Calcula a média
    cout << "A média das notas é: " << fixed << setprecision(2) << media << endl;

    if (media < 5) {
        cout << "Atenção: Alunos reprovados!" << endl;
    }

    return 0;
}
