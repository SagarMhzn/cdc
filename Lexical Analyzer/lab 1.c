#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
	char token[5],currentState,startState='A',finalState='E';
	printf("Enter a keyword: \n");
	gets(token);
	int i;
	currentState = startState;
	
	for(i=0; token[i]!='\0';i++)
	{
		if ( token[i]=='i' && currentState == 'A')
			currentState = 'B';
		else if ( token[i]=='n' && currentState == 'B')
			currentState = 'C';
		else if ( token[i]=='t' && currentState == 'C')
			currentState = 'E';
		else
			currentState = 'D';
	}
	
	if (currentState == finalState)
		printf("The entered string is a Valid Keyword!");
	else 
		printf("The entered string is not a Valid Keyword!");
		
	return 0;
}
