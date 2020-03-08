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
			if (copy[i] != copy2[i]){
				return (copy[i] - copy2[i]);
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
	} else {
		size_t i;
		size_t len1 = sizeof(s1)/ sizeof(char);
		size_t len2 = ft_strlen(s2); 
		if (len1<len2){
			return NULL;
		} else {
			len1= ft_strlen(s1);
			for (i=0; i<len2; i++){
				s1[len1 + i]= s2[i];
			}
			s1[len1 + i +1] = '\0';
			return s1;
		}
	}
} 


char *ft_strcat2(char *restrict s1, const char *restrict s2){

	if (!s1 || !s2){
		return NULL;
	} else {
		size_t len1 = sizeof(s1)/ sizeof(char);
		size_t len2 = ft_strlen(s2); 
		if (len1<len2){
			return NULL;
		} else {
			len1= ft_strlen(s1);
			ft_strcpy(s1 + len1, s2);
			return s1;
		}
	}
}



char *ft_strncat(char *restrict s1, const char *restrict s2, size_t n){

if (!s1 || !s2 || n ==0){
	return NULL;
	} else {
		size_t i;
		size_t len1 = (sizeof(s1) / sizeof(char)) - ft_strlen(s2);
		size_t len2 = ft_strlen(s2); 
		if (len1<len2 && len1<n){
			return NULL;
		} else {
			len1= ft_strlen(s1);
			for (i=0; i<n && i< len2; i++){
				s1[len1 + i]= s2[i];
			}
			s1[len1 + i +1] = '\0';
			return s1;
		}
	}
}

 size_t ft_strlcat(int *table, char * restrict dst, const char * restrict src, size_t dstsize){

	if (!dst || !src || dstsize == 0){
		return 0;
	} else {
		if ((sizeof(dst) / sizeof(char)) < dstsize){
			size_t i;
			for (i = 0; i <10; i++){
				table[i] = sizeof(dst[i]);
			}
			return sizeof(dst);
		}else{			
			size_t i;
			size_t lendst = ft_strlen(dst); 
			for (i=0; i<(dstsize - 1 - lendst) && src[i] != '\0'; i++){
				dst[lendst +i] = src[i];
		    }
		dst[lendst +i + 1] = '\0';
		return i + lendst;
	    }
	} 
}

char *ft_strchr(const char *s, int c){

	if (!s){
		return NULL;
	} else {
		char *cdest = (char*)s;
		size_t len = ft_strlen(cdest);
		size_t i;
		for (i=0; i< len; i++){
			if (cdest[i]== c){
				return cdest+i;
			}
		}
		return NULL;
	}	
}

char *ft_strrchr(const char *s, int c){

	if (!s){
		return NULL;
	} else {
		char *cdest = (char*)s;
		size_t len = ft_strlen(cdest);
		size_t i;
		for (i=0; i< len; i++){
			if (cdest[len-i]== c){
				return cdest+ len - i;
			}
		}
		return NULL;
	}	
}

char *ft_strstr(const char *haystack, const char *needle){

	if (!haystack || !needle){
		return NULL;
	}
	size_t len = ft_strlen(needle);
	if(ft_memcmp(needle, "", len)== 0){
		return (char*)haystack;
	} else {
		size_t i;
		size_t len2 = ft_strlen(haystack);
		char *copy;
		copy = (char*)malloc(len * sizeof(char));
		//char *copy2 = (char*)haystack;
		for(i=0; i<len2; i++){
			size_t n = 0;
			if(haystack[i] == needle[n]){
				for(n=0; n<len; n++){
					copy[n]= haystack[i+n];
				}
				if(ft_memcmp(needle, copy, len) == 0){
					free (copy);
					return (char*)haystack + i;
				}
			}
		}
		free (copy);
	}
	return NULL;	
}

char *ft_strnstr(const char *haystack, const char *needle, size_t l){

	if (!haystack || !needle || l == 0){
		return NULL;
	}
	size_t len = ft_strlen(needle);
	if(ft_memcmp(needle, "", len)== 0){
		return (char*)haystack;
	} else {
		size_t i;
		size_t len2 = ft_strlen(haystack);
		char *copyNeedle;
		copyNeedle = (char*)malloc(len * sizeof(char));
		//char *copy2 = (char*)haystack;
		for(i=0; i<len2 && i<l; i++){
			if ((l - i) > len && (len2 - i) > len){
				size_t n = 0;
				if(haystack[i] == needle[n]){
						for(n=0; n<len; n++){
							copyNeedle[n]= haystack[i+n];
						}
						if(ft_memcmp(needle, copyNeedle, len) == 0){
							free (copyNeedle);
							return (char*)haystack + i;
						}
				}
			}
		}
		free (copyNeedle);
	}
	return NULL;	

}

int ft_strcmp(const char *s1, const char *s2){

	if (!s1 || !s2){
		return 0;
	} else {
		size_t i;
		size_t len1 = ft_strlen(s1);
		size_t len2 = ft_strlen(s2);
		for(i=0; i< (len1 +1) && i<(len2 +1); i++){
			if(s1[i] != s2[i]){
				return (unsigned int)(s1[i]-s2[i]);
			}
		}
		return 0;
	}
}

int ft_strncmp(const char *s1, const char *s2, size_t n){


	if (!s1 || !s2 || n == 0){
		return 0;
	} else {
		size_t i;
		size_t len1 = ft_strlen(s1);
		size_t len2 = ft_strlen(s2);
		for(i=0; i< (len1 +1) && i<(len2 +1) && i<n ; i++){
			if(s1[i] != s2[i]){
				return (unsigned int)(s1[i]-s2[i]);
			}
		}
		return 0;
	}
}

int ft_atoi(const char *str){

	
}












