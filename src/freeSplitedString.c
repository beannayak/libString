void freeSplitedString(char **splitedString, int length){
	int a;
	for (a=0; a<=length; a++){
		free (splitedString[a]);
	}
	free (splitedString);
}
