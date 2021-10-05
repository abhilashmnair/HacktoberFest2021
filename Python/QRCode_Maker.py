# Install Python from https://www.python.org/downloads/
# Run pip install pyqrcode png

import pyqrcode
import png
from pyqrcode import QRCode

print("WELCOME TO THE QR CODE GENERATION")

# Take input as string
str  = input("Enter the content")

# Generate QR code
url = pyqrcode.create(str)

# Create and save the png file naming "myqr.png"
url.png('myqr.png', scale = 6)
