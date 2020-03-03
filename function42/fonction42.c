#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "header42.h"

void *ft_memset(void *s, char c, size_t n){
    size_t i = 0;
    char *copy = s;

    if (!s) {
        return NULL;
    }

    for (i = 0; i < n; i++) {
        copy[i] = c;

    }
    return s;
}

void *ft_bzero(void *s, size_t n){

    size_t i;
    char *copy = s;

    if (!s || n == 0) {
        return NULL;
    }

    for (i= 0; i<n; i++){
        copy[i]= '\0';
    }
    return NULL;
}

void *ft_memcpy(void *dest, const void *src, size_t n){

    size_t i;
    char *copy= dest;
    char *copy2 = (char*)src;

    if (!src || !dest || n == 0) {
        return NULL;
    }

    for (i= 0; i<n; i++){
        copy[i]= copy2[i];
    }
    return NULL;
}

 void *ft_memccpy(void *dest, const void *src, int c, size_t n){

    size_t i;
    char *copy= dest;
    char *copy2 = (char*)src;
    
     if (!src || !dest || n == 0) {
        return NULL;
    }else{
	    for (i= 0; i<n; i++){
	        copy[i]= copy2[i];
	        if (copy2[i]== c){
	            return dest+i+1;
	            i= n;
	        }
    	}
    }	
    return dest;
    
}

void *ft_memmove(void *dest, const void *src, size_t n){

    size_t i;
    char *tab = NULL;
    char *copy= dest;
    char *copy2 = (char*)src;

    tab = (char*)malloc(n* sizeof(char));

    if (!src || !dest || n == 0) {
        return NULL;
    }else{
    	for (i= 0; i<n; i++){
        	tab[i]= copy2[i];
    	}
    	for (i= 0; i<n; i++){
        	copy[i]= tab[i];
    	}

    }
    free (tab);
    return dest;
}

void *ft_memchr(const void *s, int c, size_t n){

	size_t i;
	char *copy = (char*)s;
	char chr = c;

	if (!s || n == 0) {
        return NULL;
    }else{
    	for (i= 0; i<n; i++){
    		if (copy[i] == chr){
    			return copy + i;
    		}
    	}
     }
     return NULL;
}

int ft_memcmp(const void *s1, const void *s2, size_t n){

	size_t i;
	char *copy = (char*)s1;
	char *copy2 = (char*)s2;



	if (!s1 || !s2 || n == 0) {
        return 0;
    }else{
		for (i= 0; i<n; i++){
			if (copy[i] > copy2[i]){
				return (copy[i] - copy2[i]);
			}else if (copy[i] < copy2[i]){
				return (copy2[i] - copy[i]);
			}
		}
	}
	return 0;
    
}

size_t ft_strlen(const char *s){

	if (!s){
		return 0;
	}

	size_t i = 0;

	while (s[i] != '\0'){
		i++;
	}
	return i;
}

char *ft_strdup(const char *s1){

	if (!s1){
		return NULL;
	}

	int len= 0;
	char *copy = NULL;

	len = ft_strlen(s1);
	copy = malloc(sizeof(s1));

	if (!copy){
		return NULL;
	}

	while (len >= 0){
		copy[len] = s1[len];
		len--;
	}

	return copy;

}


char *ft_strcpy(char * dst, const char * src){

if (!dst || !src){
		return NULL;
	}

	size_t i = 0;

	dst[i] = src[i];
	do{
	i++;
	dst[i] = src[i];	
	}
	while (src[i] != '\0');
	

	return dst;
}

char *ft_strncpy(char * dst, const char * src, size_t len){

if (!dst || !src || len == 0){
		return NULL;
}
	
	size_t i;

	for (i=0; i<len; i++){
		dst[i] = src[i];	
		if (src[i] == '\0'){
			while (i < len){
				dst[i] = '\0';
				i++;
			}
		}
	}
	return dst;
}

char *ft_strcat(char *restrict s1, const char *restrict s2){

if (!s1 || !s2){
	return NULL;
}


}

char *ft_strncat(char *restrict s1, const char *restrict s2, size_t n){

if (!s1 || !s2 || n ==0){	`


}




