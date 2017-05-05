#!/usr/bin/python

import sys
import os

input=sys.argv[1]
output=sys.argv[2]

os.system("convert "+input+" +noise Gaussian "+output)

