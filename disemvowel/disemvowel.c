#include <stdlib.h>
#include <string.h>
#include "disemvowel.h"

char *disemvowel(char *str) {
	int i, j;
	char data[100] = {0};

	strcpy(data, str);
	for(i=0, j=0; data[i]!='\0'; i++){
		if (data[i] != 'a'){
			data[j++] = data[i];
		}
	}
	for(i=0, j=0; data[i]!='\0'; i++){
		if (data[i] != 'e'){
			data[j++] = data[i];
		}
	}
	for(i=0, j=0; data[i]!='\0'; i++){
		if (data[i] != 'i'){
			data[j++] = data[i];
		}
	}
	for(i=0, j=0; data[i]!='\0'; i++){
		if (data[i] != 'o'){
			data[j++] = data[i];
		}
	}
	for(i=0, j=0; data[i]!='\0'; i++){
		if (data[i] != 'u'){
			data[j++] = data[i];
		}
	}
	data[j] = '\0';
	char *ret = data;
	return (ret);
}
