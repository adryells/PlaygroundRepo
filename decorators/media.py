def media_acumulada():
    valores = []

    def calcula_media(val):
        valores.append(val)

        return sum(valores) / len(valores)

    return calcula_media


media = media_acumulada()
media(3)
media(4)
media(5)
print(media(3))

