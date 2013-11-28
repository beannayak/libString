int occuranceOf(char *string, char *delimiter){
	int index, start;
	int delimiterCount=0;
	start = 0;
	while (1){
		index = indexOfWithStart(string, delimiter, start);
		if (index != -1){
			delimiterCount ++;
		} else {
			break;
		}
		start = index + 1;
	}
	return delimiterCount;
}
