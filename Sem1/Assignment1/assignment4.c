// Program to find Roots of a Quadratic Equation

#include <stdio.h>
#include <math.h>

int main()
{
    // Initialization
    // a,b,c are coefficients of the equation -> ax^2 + bx + c = 0
    int a = 1, b = 4, c = -5;

    // Discriminant
    int d = (b * b) - (4 * a * c);

	if(d>0){
	    // Finding roots 
	    float root1 = (float)(-b + sqrt(d)) / (2 * a);
	    float root2 = (float)(-b - sqrt(d)) / (2 * a);
	
	    // Output
	    printf("Roots are: %0.2f, %0.2f", root1, root2);		
	}else{
		// Output
	    printf("Roots are Imaginary");
	}

    return 0;
}
