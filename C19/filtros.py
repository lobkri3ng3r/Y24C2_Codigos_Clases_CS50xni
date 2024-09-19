from PIL import Image, ImageChops, ImageOps, ImageEnhance

def main():
    image = Image.open("imagen.jpg")

    op = int(input("Qué filtro desea aplicar:\n1)Invertir colores\n2)Escala de grises\n3)Resaltar luces\n4)Contraste\n5)Espejo\n6)Cambiar tamaño\n7)Disminuir nitidez\n"))

    if op == 1:
        invertir(image)
    elif op == 2:
        grises(image)
    elif op == 3:
        resaltar(image)
    elif op == 4:
        contraste(image)
    elif op == 5:
        espejo(image)
    elif op == 6:
        cambiarTam(image)
    elif op == 7:
        nitidez(image)
    else:
        print("Opción no válida")

def invertir(image):
    new_image = ImageChops.invert(image)
    new_image.save("image_1.jpg")

def grises(image):
    new_image = ImageOps.grayscale(image)
    new_image.save("image_2.jpg")

def resaltar(image):
    new_image = ImageEnhance.Brightness(image).enhance(2)
    new_image.save("image_3.jpg")

def contraste(image):
    new_image = ImageEnhance.Contrast(image).enhance(4)
    new_image.save("image_4.jpg")

def espejo(image):
    new_image = ImageOps.mirror(image)
    new_image.save("image_5.jpg")

def cambiarTam(image):
    new_image = image.resize((320, 240))
    new_image.save("image_6.jpg")

def nitidez(image):
    new_image = ImageEnhance.Sharpness(image).enhance(-4)
    new_image.save("image_7.jpg")

if __name__ == "__main__":
    main()
