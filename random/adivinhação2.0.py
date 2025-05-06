from random import randint
aleatorio = randint(0, 20)
jogador = int(input("Digite se palpite de 0 a 20:"))
palpites = 0
while jogador != aleatorio:
    palpites += 1
    jogador=int(input("Seu palpite esta errado. tente novamente:"))
print("Você acertou com {} palpites".format(palpites))  