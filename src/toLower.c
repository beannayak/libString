char *toLower(char *upperCasedString){
     char *a;
     int count = 0;

     a = (char *)malloc(length(upperCasedString)+1);
     while (upperCasedString[count] != '\0'){
           if (upperCasedString[count] >= 'A' && upperCasedString[count] <= 'Z'){
               a[count] = upperCasedString[count] + 32;
           } else {
             a[count] = upperCasedString[count];
           }
           count++;
     }
     a[count] = '\0';
     return a;
}
