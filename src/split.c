char **split(char *string, char *delimiter, int *ubound){
		char **retVal;
		int delimiterCount = 0;
		int index, start = 0;
		int count = 0, prevCount = 0;

		delimiterCount = occuranceOf(string, delimiter);
		*ubound = delimiterCount;

		retVal = (char **) malloc ((sizeof(char*)) * ((delimiterCount) + 1));
		start = 0;
		while (1){
			index = indexOfWithStart(string, delimiter, start);

			if (index != -1)
			{
				retVal[count] = subString(string, prevCount, index-prevCount);
				prevCount = index + length(delimiter);
				count++;
			} else {
				break;
			}
			start = index + length(delimiter);
		}
		retVal[count] = subString(string, prevCount, length(string)-prevCount);
		return retVal;
}
