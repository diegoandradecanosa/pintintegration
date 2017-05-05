#include <stdio.h>
#include <stdlib.h>
#include <wand/MagickWand.h>

void main(int argc, char **argv) {
  MagickWand *magick_wand;
  MagickBooleanType status;

  MagickWandGenesis();
  magick_wand=NewMagickWand();  
  status=MagickReadImage(magick_wand,argv[1]);
  status=MagickAddNoiseImage(magick_wand,GaussianNoise);
  status=MagickWriteImage(magick_wand,argv[2]);
}

