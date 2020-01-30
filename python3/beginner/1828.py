testes = int(input())

for index in range(testes):
    sheldon, raj = input().split()

    saida = ""

    if sheldon == raj: saida = "De novo!"

    elif sheldon == "tesoura" and raj == "papel": saida = "Bazinga!"
    elif sheldon == "papel" and raj == "tesoura": saida = "Raj trapaceou!"

    elif sheldon == "papel" and raj == "pedra": saida = "Bazinga!"
    elif sheldon == "pedra" and raj == "papel": saida = "Raj trapaceou!"
    
    elif sheldon == "pedra" and raj == "lagarto": saida = "Bazinga!"
    elif sheldon == "lagarto" and raj == "pedra": saida = "Raj trapaceou!"

    elif sheldon == "lagarto" and raj == "Spock": saida = "Bazinga!"
    elif sheldon == "Spock" and raj == "lagarto": saida = "Raj trapaceou!"

    elif sheldon == "Spock" and raj == "tesoura": saida = "Bazinga!"
    elif sheldon == "tesoura" and raj == "Spock": saida = "Raj trapaceou!"

    elif sheldon == "tesoura" and raj == "lagarto": saida = "Bazinga!"
    elif sheldon == "lagarto" and raj == "tesoura": saida = "Raj trapaceou!"

    elif sheldon == "lagarto" and raj == "papel": saida = "Bazinga!"
    elif sheldon == "papel" and raj == "lagarto": saida = "Raj trapaceou!"

    elif sheldon == "papel" and raj == "Spock": saida = "Bazinga!"
    elif sheldon == "Spock" and raj == "papel": saida = "Raj trapaceou!"

    elif sheldon == "Spock" and raj == "pedra": saida = "Bazinga!"
    elif sheldon == "pedra" and raj == "Spock": saida = "Raj trapaceou!"

    elif sheldon == "pedra" and raj == "tesoura": saida = "Bazinga!"
    elif sheldon == "tesoura" and raj == "pedra": saida = "Raj trapaceou!"

    print("Caso #{}: {}".format(index + 1, saida))
