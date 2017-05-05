
all: _mconvert.so

mconvert_wrap.c : mconvert.i
	swig -python mconvert.i

mconvert_wrap.o : mconvert_wrap.c
	gcc -fPIC -lMagickWand-6.Q16 -lMagickCore-6.Q16 -I /usr/include/ImageMagick-6/  -c mconvert.c mconvert_wrap.c -I /usr/include/python2.7/

_mconvert.so : mconvert_wrap.o
	gcc -shared mconvert.o mconvert_wrap.o -lMagickWand-6.Q16 -lMagickCore-6.Q16 -I /usr/include/ImageMagick/ -Xlinker -rpath /usr/lib64 -o _mconvert.so

clean:
	rm mconvert_wrap.c *.o *.so mconvert.py mconvert.pyc
