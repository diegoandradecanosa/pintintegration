
#include <stdio.h>
#include <stdlib.h>
#include <ImageMagick-6/wand/MagickWand.h>
#include "mconvert.h"

void convert(char *input,char *output) {
  MagickWand *magick_wand;
  MagickBooleanType status;

  MagickWandGenesis();
  magick_wand=NewMagickWand();  
  status=MagickReadImage(magick_wand,input);
  status=MagickAddNoiseImage(magick_wand,GaussianNoise);
  status=MagickWriteImage(magick_wand,output);

}
