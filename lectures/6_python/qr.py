# pip install qrcode

import qrcode

img = qrcode.make("http://youtu.be/xvFZjo5PgG0")
img.save("qr.png", "PNG")

# create QR code containing the URL as an image
# $code qr.png
# scan image
# RICKROLLED
