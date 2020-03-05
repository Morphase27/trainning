#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "header42.h"


int main() {

    char test[10] = "test";
    char dest[] = "ing";
    //size_t len;
    //dest = (char*)malloc(8);

    ft_strncat(test, dest, 5);
   
   
   //printf("valeur : %s \n", test);
   //printf("%zu \n", len);
   printf("%s \n", test);

    return 0;
}