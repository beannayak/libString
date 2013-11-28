#ifndef __myString__
#define __myString__ 1

#include <stdlib.h>

int strLen(char *str); //returns "myString" = 8
void strCat (char *dest, char *src);	//concats src to dest, dest should have enough spaces
int equals(char *a, char *b);	//returns 1 if a == b, 0 otherwise
int length(char *str);	//returns length of str, same as strLen
int occuranceOf(char *string, char *delimiter);	//returns number of times delimiter has occured in string

//returns first position of occurance of substring after start. 
//returned position is zerobased, start is zerobased
int indexOfWithStart(char *string, char *subString, int start);
char* subString(char* string, int start, int length);	//returns a char* containing the substring from start (Zerobased) of length length.
char *replace(char *string, char *replaceFor, char *replaceWith);	//returns a char* with every replaceFor replaced with replaceWith in string

char **split(char *string, char *delimiter, int *ubound); // splits string and returns array of char* with upperbound in ubound
void freeSplitedString(char **splitedString, int length); //use this function to free the splited string

// copies source in destination, make sure destination have enough spaces yourself
// use dest = subString (source, 0, length(source)); if dest is a pointer
// use this function only if dest is an array
void strCpy(char source[], char dest[]);

int toInteger(char *number); //returns integer value of char* number
char *toLower(char *upperCasedString); //returns lowercased characters of upperCasedString
#endif
