char *replace(char *string, char *replaceFor, char *replaceWith){
	int occurance;
	int mallocLength = 0, lengthString = 0, lengthReplaceFor = 0, lengthReplaceWith=0;
	char *retVal;
	int start, index, count, prevCount;
	int x;

	occurance = occuranceOf(string, replaceFor);
	lengthString = length(string);
	lengthReplaceFor = length(replaceFor);
	lengthReplaceWith = length(replaceWith);
	mallocLength = lengthString - lengthReplaceFor * occurance + lengthReplaceWith * occurance;
	retVal = (char*) malloc(mallocLength);

	start = 0;
	prevCount = 0;
	count = 0;
	while (1){
		index = indexOfWithStart(string, replaceFor, start);
		if (index != -1){
			for (x = 0; x<index - prevCount; x++){
				retVal[count] = string[x+prevCount];
				count++;
			}
			for (x=0; x<lengthReplaceWith; x++){
				retVal[count] = replaceWith[x];
				count++;
			}
			prevCount = index + lengthReplaceFor;
		} else {
			break;
		}
		start = index + lengthReplaceFor;
	}
	char *temp = subString(string, prevCount, length(string)-prevCount);
	for (x=0; x<length(temp); x++){
		retVal[count] = temp[x];
		count++;
	}
	retVal[count] = '\0';
	return retVal;
}

