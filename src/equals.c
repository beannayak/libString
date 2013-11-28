int equals(char *a, char *b){
	int lenA = strLen(a);
	int count = 0;
	int retVal = 1;
	for (count=0; count<=lenA; count++){
		if (a[count] != b[count]){
			retVal = 0;
			break;
		}
	}
	return retVal;
}
