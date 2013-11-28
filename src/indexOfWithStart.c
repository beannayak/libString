int indexOfWithStart(char *string, char *subString, int start) {
	//@ result is zero base
	int lenSubString = 0;
	int lenString = 0;
	int x, loopEnd, y;
	int flag;
	int indexOf = -1;

	lenSubString = length(subString);
	lenString = length(string);
	loopEnd = (lenString-lenSubString);

	for (x=start; x<=loopEnd; x++){
		flag = 1;
		for (y=0; y<lenSubString; y++){
			if (string[x] != subString[y]){
				flag = 0;
				break;
			} else {
				x++;
			}
		}
		if (flag == 1){
			indexOf = x - lenSubString;
			break;
		}
	}
	return indexOf;
}
