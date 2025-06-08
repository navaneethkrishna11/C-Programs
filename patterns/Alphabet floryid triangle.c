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

#include<stdio.h>
#include<string.h>

void main(){
    int n=10;
    char ch;
    for (int i=0;i<n;i++)
    {
        ch= 'A'+i;
        for(int j=0;j<=i;j++)
        {
            printf("%c",ch);
        }
        printf("\n");
    }
}

/*
A
BB
CCC
DDDD
EEEEE
FFFFFF
GGGGGGG
HHHHHHHH
IIIIIIIII
JJJJJJJJJJ

*/

#include<stdio.h>
#include<string.h>

void main(){
    int n=10;
    char ch;
    for (int i=0;i<n;i++)
    {
      
        for(int j=0;j<n-i;j++)
        { 
            printf(" ");
        }
        
        for(int j=0;j<i;j++)
        {
            ch = 'A'+ j;
            printf("%c ",ch);
        }
        printf("\n");
    }
}

/*
         A 
        A B 
       A B C 
      A B C D 
     A B C D E 
    A B C D E F 
   A B C D E F G 
  A B C D E F G H 
 A B C D E F G H I 


*/

