#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char input[3];
    scanf("%s",&input);
    int i=strlen(input);
    while(i-->=0)
        printf("%c",input[i]);
    return 0;
}
