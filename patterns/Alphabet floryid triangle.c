#include<stdio.h>
#include<string.h>

void main(){
    int n=10;
    for (int i=0;i<n;i++)
    {
        for(char ch='A';ch<='A'+(n-i-1);ch++)
        {
            printf("%c",ch);
        }
        printf("\n");
    }
}

/*
A
AB
ABC
ABCD
ABCDE
ABCDEF
ABCDEFG
ABCDEFGH
ABCDEFGHI
ABCDEFGHIJ
*/

#include<stdio.h>
#include<string.h>

void main(){
    int n=10;
    for (int i=0;i<n;i++)
    {
        for(char ch='A';ch<='A'+(i);ch++)
        {
            printf("%c",ch);
        }
        printf("\n");
    }
}
/*
ABCDEFGHIJ
ABCDEFGHI
ABCDEFGH
ABCDEFG
ABCDEF
ABCDE
ABCD
ABC
AB
A
*/
