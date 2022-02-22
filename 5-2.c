#include <stdio.h>
#include <stdlib.h>

/* In a country, there are three counties (eyalet) with different tax rates to be applied on any purchase, as shown
in the table below. Write a program that displays the amount owed on a purchase, including sales tax, given the 
amount of the purchase and the type of the county. Make data validation for County Type! Use Switch Statement.
 
TAX RATE = A:%7 B:%6 C:%4*/

int main(int argc, char *argv[]) 
{
	int purchase;
	double owed;
	char county;
	
	printf("Enter the amount of the purchase: ");
	scanf("%d",&purchase);
    printf("Enter the county: ");
    scanf("%c",&county);
    
	while(county!='C'&&county!='B'&&county!='A')
	{
		printf("Enter the county: ");
		scanf("%c",&county);
	}
	
	switch(county)
	{
		case 'A': owed = purchase*1.07;
			    printf("The amount owed is %.2lf",owed);
			    break;
		
		case 'B':	owed = purchase*1.06;
			    printf("The amount owed is %.2lf",owed);
			    break;
		
		
		case 'C':	owed = purchase*1.04;
			    printf("The amount owed is %.2lf",owed);
			    break;
	}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
