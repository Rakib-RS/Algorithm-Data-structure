#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    int i;
    int k;
    s = malloc(1024 * sizeof(char));
    char s1[100000];
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    int j=0;
    for( i=0;i<strlen(s);i++){
        if(s[i]!=' ')
            s1[j++]=s[i];
        else{
            for( k=0;k<j;k++)
            printf("%c",s1[k]);
            j=0;
            printf("\n");
        }
    }
    for( k=0;k<j;k++){
        if(s1[k]==' ')break;
        printf("%c",s1[k]);
    }
    return 0;
}
