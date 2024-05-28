using System;

namespace MediaNotas {
    class Program {
        static void Main(string[] args) {
            int numAlunos;
            float nota, soma = 0;

            Console.Write("Digite o número de alunos: ");
            numAlunos = int.Parse(Console.ReadLine());

            // Loop para ler as notas dos alunos
            for (int i = 1; i <= numAlunos; i++) {
                Console.Write($"Digite a nota do aluno {i}: ");
                nota = float.Parse(Console.ReadLine());
                soma += nota; // Acumula as notas para calcular a média
            }

            float media = soma / numAlunos; // Calcula a média
            Console.WriteLine($"A média das notas é: {media:F2}");

            if (media < 5) {
                Console.WriteLine("Atenção: Alunos reprovados!");
            }
        }
    }
}
