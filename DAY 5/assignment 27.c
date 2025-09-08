//wacp to check a letter is vowel or consonant using switch case. 
#include<stdio.h>
int main()
{
	char c;
	printf("enter the character: ");
	scanf("%c",&c);        
	switch(c)
	{
		case 'a': 
		case 'e': 
		case 'i':
		case 'o': 
		case 'u':
		case 'A': 
		case 'E': 
		case 'I':
		case 'O': 
		case 'U':printf("vowel");
		break;
		default: printf("consonant");
	}
	return 0;
}