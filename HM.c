#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
//struct of plate information
typedef struct plateInfo
{
	int plateCode;
	char letters[100];
	int number;
}
plateInfo;
//struct of city plates
typedef struct plates
{	
	int plateCount;
	plateInfo *cityPlates;
}
plates;

int checkAlphabet(char *s)
{
	int i,flag = 1;
	for(i = 0; s[i] != '\0';i++)
	{
		if(!isalpha(s[i]))
		{
		 flag = 0;	
		 break;
		}
	}
	return  flag;
}

int checkDigit(char *s)
{
	int i,flag = 1;
	for(i = 0; s[i] != '\0';i++)
	{
		if(!isdigit(s[i]))
		{
			flag = 0;	
			break;
		}
	}
	return  flag;	
}

main()
{
	//plates array
    plates *plates = (plateInfo*)calloc(82,(sizeof(plateInfo))); // between 1 and 81
}
