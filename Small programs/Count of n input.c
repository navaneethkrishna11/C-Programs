// Method 1
#include <stdio.h>
#include <string.h>
int main() {
    int i,j,n;
    printf("enter the numer limit : ");
    scanf("%d",&n);
    char str[32];
    sprintf(str,"%d",n);
    printf("String: %d\n", strlen(str));
  
}

/*
Output
enter the numer limit : 43242
String: 5
*/

// Method 2
#include <stdio.h>
#include <string.h>
int main() {
    int i,j,n;
    printf("enter the numer limit : ");
    scanf("%d",&n);
    int b= (int)log10(n)+1;
    printf("string",%b);
  
}

/*
Output
enter the numer limit : 43242
String: 5
*/
