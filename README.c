# vow
#include <stdio.h>
void main()
{
   char c;
    printf("Enter a Character: ");
    scanf("%c", &c);
    if(c == 'a' || c == 'e' || c =='i' || c=='o' || c=='u' || c=='A'
          || c=='E' || c=='I' || c=='O' || c=='U')
    {
        printf("%c is a Vowel\n", c);
    } 
else 
    {
        printf("%c is a Consonant\n", c);
    }
   
}
