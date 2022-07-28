// The total number of students in a class are 50 out of which 20 are boys. If
// 80% of the total students secured grade 'A' out of which 15 are boys, then
// write a program to calculate the total number of girls getting grade 'A'.

#include <stdio.h>

int main()
{

    // User input
    int totalStudents = 50, boys = 20, girls = 30, boysGradeA = 15; // Declaration
    
    // Find total students who got Grade A
    int totalGradeA = (totalStudents * 80) / 100;	
    
	// Find Girls who got Grade A
	int girlGradeA = totalGradeA - boysGradeA;

	// Output
    printf("%d girls got Grade A.", girlGradeA);

    return 0;
}
