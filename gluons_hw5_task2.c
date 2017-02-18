/*
 * =====================================================================================
 *
 *       Filename:  chris_werner_hw5_task2.c
 *       	Usage:  ./chris_werner_hw5_task2.c
 *    Description:  Write a function to display a table of miles and kilometers
 *    Stopping and starting values will be used. the function will use these 
 *    starting and stopping values and increment
 *
 *        Version:  1.0
 *        Created:  02/16/2017 05:07:00 PM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Chris Werner (), christopherwerner@mail.weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */

/* Function Prototypes */
void MakeMilesKmTable(float mstart, float meend, float inc);

/* Main Program */
int main(void)
{
	//Declare variables. Used float so that you could have
	//half miles or increment by values of 1/2
	float mstart, mend, inc;
	//Prompt user for the starting miles
	printf("Enter the starting miles: ");
	//Scan input for the starting miles
	scanf("%f",&mstart);
	//Prompt user for the ending miles
	printf("Enter the ending miles: ");
	//Scan input for the ending miles
	scanf("%f",&mend);
	//Prompt user for the increment values
	printf("Enter the mile increments: ");
	//Scan input for the increment values
	scanf("%f",&inc);
	//Print the header for the table
	printf("Miles  =  Kilometers\n");
	//Call function to 
	MakeMilesKmTable(mstart, mend, inc);
	return 0;
}


/* Function Defenitions */
void MakeMilesKmTable(float ms, float me, float i)
	{
	//Declare and initialize count value
	float count = ms,kilos;
	//Enter loop
	while (count <=me)
	{
		kilos = count*1.61;
		//Print the mile and then kilometer
		//Used 4 positions and one decimal for the miles
		//so you could increment by half miles
		printf("%5.1f      %-5.2f\n",count,kilos);
		count += i;
	}
	return;
	}
