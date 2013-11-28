char* subString(char* string, int start, int length){
	//@ Start is zero based
	char *a = (char*) malloc (length+1);
	int x;
	for (x=0; x<length; x++){
		a[x] = string[x+start];
	}
	a[x] = '\0';

	return a;
}
