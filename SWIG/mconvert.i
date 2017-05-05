%module mconvert

%{
#define SWIG_FILE_WITH_INIT
#include "mconvert.h"
%}

void convert(char *input,char *output);
