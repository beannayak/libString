void strCat (char *dest, char *src){
	int a = strLen(src);
	int b = strLen(dest);
	int count = 0;
	for (count = 0; count <= a; count++){
		dest[b+count] = src[count];
	}
}
