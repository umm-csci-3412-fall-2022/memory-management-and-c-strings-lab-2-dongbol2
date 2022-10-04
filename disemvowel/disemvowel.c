#include <stdlib.h>
#include <string.h>
#include "disemvowel.h"

char *disemvowel(char *str) {
	char *finStr = (char*) calloc (strlen(str) + 1, sizeof(char));
	int i,j = 0;
	for(i=0; str[i]; i++){
		char checkStr[1] = {str[i]};
		if (strpbrk(checkStr,"AEIOUaeiou")){
		
		}
		else{
			finStr[j++] = str[i];
		}
	}
	finStr[j] = '\0';
	return (char*) finStr;
}
