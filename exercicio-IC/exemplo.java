import java.util.Scanner;

public class MediaNotas {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int numAlunos;
        float nota, soma = 0;

        System.out.print("Digite o número de alunos: ");
        numAlunos = scanner.nextInt();

        // Loop para ler as notas dos alunos
        for (int i = 1; i <= numAlunos; i++) {
            System.out.print("Digite a nota do aluno " + i + ": ");
            nota = scanner.nextFloat();
            soma += nota; // Acumula as notas para calcular a média
        }

        float media = soma / numAlunos; // Calcula a média
        System.out.printf("A média das notas é: %.2f%n", media);

        if (media < 5) {
            System.out.println("Atenção: Alunos reprovados!");
        }
    }
}
