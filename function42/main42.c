#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "header42.h"
#include <ctype.h>



int main() {

	int test = 'B';
    //char src[] = "choc";
    //char test[] = "1?2";
    int val;
    //size_t len;
    //char *dest;

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

 	
    
    val = ft_isalpha(test);
 
 	printf("%i \n", val);
 	printf("%i \n", test);
 	
 	//printf("%s \n", src);
 	//printf("%s \n", test);
 	
 




    return 0;
}