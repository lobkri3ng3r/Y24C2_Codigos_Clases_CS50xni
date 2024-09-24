import qrcode

img = qrcode.make("https://youtu.be/DHjqpvDnNGE?si=k6rDZ0sSJh6u65kT")
img.save("qr.png","PNG")