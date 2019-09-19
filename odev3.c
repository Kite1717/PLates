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
main()
{
	//plates array
    plates *plates = (plateInfo*)calloc(82,(sizeof(plateInfo))); // between 1 and 81
}
