#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "header42.h"


int main() {

    char test[8] = "testing";
    char dest[10];
    //dest = (char*)malloc(8);

    int l2;
	l2 = ft_strlen(test);

   ft_strncpy(dest, test, 10);
   
    printf("%s \n", dest);
    printf("%i \n", l2);

    return 0;
}