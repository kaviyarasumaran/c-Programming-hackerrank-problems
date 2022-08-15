#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
char a;
int main() 
{
  char s[100];
    scanf("%[^\n]%*c", &s);
    printf("Hello, World!\n");
    printf(s);
    return 0;
}
