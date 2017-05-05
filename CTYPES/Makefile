
all: ctypes

ctypes:ctypes.c
	gcc -w -lMagickWand-6.Q16 -lMagickCore-6.Q16 -I /usr/include/ImageMagick-6 -o ctypes ctypes.c

clean:
	rm ctypes
