/*
 
 printing "*" format triangle
    *****
    ****
    ***
    **
    *
 
*/
#include <stdio.h>
int main(void)
{   int i,c=0,b,star;
    printf("Enter the no. of star: ");
    scanf("%d",&star);
    b = star-1;
    char a='*';
    for(i=star+1;i>0;i--)
    {
        while(c!=i-1){
            printf("%c",a);
            c++;
        }
//        printf("%c",a);
        while(c<=b){
            printf(" ");
            c++;
        }
        printf("\n");
        c=0;
    }
    return 0;
}



