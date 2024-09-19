from PIL import Image

img = Image.new("RGB",(400,500),(0,255,0))
img.save("newimg.jpg")