#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "header42.h"


int main() {

    char src[10] = "100";
    char test[] = "1000";
    //char *dest;
    size_t len;

   /*
    size_t len;
    size_t l;
    int table[10];
    size_t n;

    l = (sizeof(test) / sizeof(char));
    len = ft_strlcat(table, test, dest, 10);
   
   
   //printf("valeur : %s \n", test);
   for (n = 0; n<10; n++){
   	printf("%i \n", table[n]);
   }
   printf("%zu \n", len);
   printf("%zu \n", l);
   printf("%s \n", test); */

 	
    
    len = ft_strncmp(test, src, 3);
 
 	printf("%zu \n", len);



    return 0;
}