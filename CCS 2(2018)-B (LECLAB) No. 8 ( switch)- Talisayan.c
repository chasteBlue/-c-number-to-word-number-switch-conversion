#include <stdio.h>
 
main()

{	
int num;
printf(" Input Filler/ Switch \n\n");
printf("Enter the integers between 1 to 9999:\n");
scanf("%d",&num);

	
if( num < 1) 
{	printf(" The number is invalid.");
} 
else
if(num > 9999) 
{	printf(" The number is invalid.");
} 

	else	

{
	switch ( num/1000)
		{ 
		case 1:
				printf("One Thousand");
				break;
		case 2:
				printf("Two Thousand");
				break;
		case 3:
				printf("Three Thousand");
				break;
		case 4:
				printf("Four Thousand");
				break;
		case 5:
				printf("Five Thousand");
				break;
		case 6:
				printf("Six Thousand");
				break;
		case 7:
				printf("Seven Thousand");
				break;
		case 8:
				printf("Eight Thousand");
				break;
		case 9:
				printf("Nine Thousand");
				break;					
	}
		
	
	switch ((num/100) % 10)
		{ 
		case 1:
				printf(" One Hundred");
				break;
		case 2:
				printf(" Two Hundred");
				break;
		case 3:
				printf(" Three Hundred");
				break;
		case 4:
				printf(" Four Hundred");
				break;
		case 5:
				printf(" Five Hundred");
				break;
		case 6:
				printf(" Six Hundred");
				break;
		case 7:
				printf(" Seven Hundred");
				break;
		case 8:
				printf(" Eight Hundred");
				break;
		case 9:
				printf(" Nine Hundred");
				break;					
	}

switch (num % 100)
{ 
		case 11:
				printf("Eleven");
				break;
		case 12:
				printf("Twelve");
				break;
		case 13:
				printf("Thirteen");
				break;
		case 14:
				printf("Fourteen");
				break;
		case 15:
				printf("Fifteen");
				break;
		case 16:
				printf("Sixteen");
				break;
		case 17:
				printf("Seventeen");
				break;
		case 18:
				printf("Eighteen");
				break;
		case 19:
				printf("Nineteen");
				break;					
		
	default: switch ((num/10) % 10)
	{ 
		case 1:
				printf(" Ten");
				break;
		case 2:
				printf(" Twenty");
				break;
		case 3:
				printf(" Thirty");
				break;
		case 4:
				printf(" Forty");
				break;
		case 5:
				printf(" Fifty");
				break;
		case 6:
				printf(" Sixty");
				break;
		case 7:
				printf(" Seventy");
				break;
		case 8:
				printf(" Eighty");
				break;
		case 9:
				printf(" Ninety");
				break;					
	}
	
	
switch (num % 10 )
{ 
		case 1:
				printf(" One");
				break;
		case 2:
				printf(" Two");
				break;
		case 3:
				printf(" Three");
				break;
		case 4:
				printf(" Four");
				break;
		case 5:
				printf(" Five");
				break;
		case 6:
				printf(" Six");
				break;
		case 7:
				printf(" Seven");
				break;
		case 8:
				printf(" Eight");
				break;
		case 9:
				printf(" Nine");
				break;					
}
}
}
}
