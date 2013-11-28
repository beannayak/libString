int toInteger(char *number){
	int count = 0;
	int value = 0;
	while (number[count] != '\0'){
		value = value * 10 + (number[count]-48);
		count++;
	}
	return value;
}
