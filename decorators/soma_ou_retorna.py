def soma():
    s = 0

    def soma_inteiro_ou_retorna_valor(val):
        if type(val) == int:
            nonlocal s
            s += val

            return s

        else:
            return val

    return soma_inteiro_ou_retorna_valor

s = soma()
s(1)
s(2)
s(3)
s(4)
s(5)
print(s(0)) # 15
print(s("KKKK")) # KKKK
