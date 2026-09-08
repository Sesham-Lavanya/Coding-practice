// write a program to check a given character is vowels or consonent.in (switch) 

#include<stdio.h>
int main()
{
char ch;
printf("enter ch:");
scanf("%c",&ch);

switch(ch)
{

case 'a':
case 'e':
case 'i':
case 'o':
case 'u': printf("VOWELS");
 break;
 
 default: printf("CONSONENTS");
}
 return 0;
}
