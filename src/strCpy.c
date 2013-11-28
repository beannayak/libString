void strCpy(char *source, char *dest){
	int count =0;
	while (source[count] != '\0'){
		dest[count] = source[count];
		count ++;
	}
	dest[count] = '\0';
}
