#!/usr/bin/python
from ctypes import *
import sys
GaussianNoise=2

libwand=CDLL("libMagick++-6.Q16.so.6")
libwand.MagickWandGenesis()
mw=libwand.NewMagickWand()
libwand.MagickReadImage(mw,sys.argv[1]);
libwand.MagickAddNoiseImage(mw,GaussianNoise);
libwand.MagickWriteImage(mw,sys.argv[2]);
