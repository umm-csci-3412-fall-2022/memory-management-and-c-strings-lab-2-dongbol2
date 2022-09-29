#include <stdlib.h>

#include "disemvowel.h"

char *disemvowel(char *str) {
	int i, j;
	char data[100] = {0};

	strcpy(data, s);
	for(i=0, j=0; data[i]!='\0'; i++){
		if (data[i] = 'a'/'e'/'i'/'o'/'u'){
			data[j++] = data[i];
		}
	}
	data[j] = '\0';
	printf("%s\n", data);
	return (char*) "";
}
