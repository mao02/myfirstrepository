#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int numJewelsInStones(char * J, char * S);//J²»º¬ÖØ¸´×ÖÄ¸
int main()
{
    char jewels[100],stones[100];
    scanf("%s%s",&jewels,&stones);
    printf("%d",numJewelsInStones(jewels,stones));
    return 0;
}
int numJewelsInStones(char * J, char * S){
    int i,k,tot=0;
    for(i=strlen(J)-1;i>=0;i--)
        for(k=strlen(S)-1;k>=0;k--)
            if(J[i]==S[k])tot++;
    return tot;
}

