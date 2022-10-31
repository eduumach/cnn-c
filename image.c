#include<stdlib.h>
#include<stdio.h>
#define STB_IMAGE_IMPLEMENTATION
#include "stb/stb_image.h"

int main(){
    int width, height, channels;
    unsigned char *data = stbi_load("iamge.png", &width, &height, &channels, 0);
    if(data == NULL) {
    printf("Error in loading the image\n");
          exit(1);
    }
      printf("Loaded image with a width of %dpx, a height of %dpx and %d channels\n", width, height, channels);
}