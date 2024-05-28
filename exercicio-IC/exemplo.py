num_alunos = int(input("Digite o número de alunos: "))
soma = 0

# Loop para ler as notas dos alunos
for i in range(1, num_alunos + 1):
    nota = float(input(f"Digite a nota do aluno {i}: "))
    soma += nota  # Acumula as notas para calcular a média

media = soma / num_alunos  # Calcula a média
print(f"A média das notas é: {media:.2f}")

if media < 5:
    print("Atenção: Alunos reprovados!")
