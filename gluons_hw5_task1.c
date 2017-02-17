/*
 * =====================================================================================
 *
 *       Filename:  chris_werner_hw5_task1.c
 *       	Usage:  ./chris_werner_hw5_task1.c
 *    Description:  Calculate the moment of inertia of a cylindrical rod with hollow center.
 *
 *        Version:  1.0
 *        Created:  02/16/2017 03:13:28 PM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Chris Werner (), christopherwerner@mail.weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */
#include <math.h>		/*For standard math library */
#define PI 3.14159

/* Function Prototypes */
double AnnulusMoment(double, double);

/* Main Program */
int main(void)
{
	//Declare variables
	double outRad, inRad;
	//Prompt user for outer radius
	printf("Enter the value for outer radius (r2): ");
	//Scan for outer radius
	scanf("%lf",&outRad);
	//Prompt user for inner radius
	printf("Enter the value for inner radius (r1): ");
	//Scan for inner radius
	scanf("%lf",&inRad);
	//Print moment of inertia, using function within print statement
	printf("The second moment of inertia is %-7.2f\n",AnnulusMoment(outRad,inRad));
	return 0;
}

/* Function Defenitions */
//Function header, should accept to double precision values
double AnnulusMoment(double outRad, double inRad)
{
	//Return statement, uses pass by values to calculate moment
	return(PI/4*(pow(outRad,4)-pow(inRad,4)));
}
