
#include <stdio.h>
#include <string.h>


int compareStrings(char* str1, char* str2){
    printf("\ncomparing strings");
    return strcmp(str1,str2);
    
}

int main()
{
    printf("Hello World");
    int result = compareStrings("hello","world");
    printf("\nresult of comparision is %d",result);
    return 0;
}
