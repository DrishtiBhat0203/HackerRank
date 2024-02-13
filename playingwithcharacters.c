#include<stdio.h>
#include<string.h>
void main() 
{
   char ch;
   char s[100];
   char sen[100];

   //printf("C\n",ch);
   //scanf("%c",&ch);
   //printf("Language\n",s[100]);
   //scanf("%[^\n]s",&s[100]);
   //printf("Welcome To C!!",sen[100]);
   //scanf("%[^\n]s",sen[100]);

    scanf("%c\n", &ch);
    scanf("%99[^\n]%*c", s);
    scanf("%99[^\n]%*c", sen);

    // Output the character, string, and sentence
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);
}