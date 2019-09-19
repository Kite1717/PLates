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
    
     while(1)
	{
		char *temp[100];
		printf("\nChoose option :\n1 - Add Plate\n2 - List of all plates by cities\n3 - Listing by plate code\n4 - Clean Screen\n0 - Exit\n");
		scanf("%s",temp);
	    if(checkDigit(temp))
		{
		  int choice = atoi(temp);
		switch(choice)
		{
			case 1 : {
				plateInfo p = input();
				if(addPlate(plates,p))
				 printf("\nSuccesful insertion :)\n");
				else
				 printf("\nFails to Add :(\n");
				break;
			}
			case 2:{
				display(plates);
				break;
			}
			case 3 :{
				listingByPlateCode(plates);
				break;
			}
			case 4:{
				system("cls");
				break;
			}
			case 0:{		
				return 0;
			}
			default:{
					printf("\nInvalid value\n");
				break;
			}			
		}
	}
	else{
		printf("\nInvalid value\n");
	}
	}
}
