#include <stdio.h>

int main()
{	
	printf("Name: Junaid Zafar\tRoll no: 26P-0719\tSection:BSAI-1A\n\n");
	
	printf("\t \"SEMESTER ACADEMIC REPORT\"\n\n");
	
	float PF_marks = 88.0, PF_credit_hours = 3;
	float Calculus_marks = 76.5, Calculus_credit_hours = 3;
	float Physics_marks = 82.0, Physics_credit_hours = 2;

	float Total_Weighted_Score = (PF_marks * PF_credit_hours) + (Calculus_marks * Calculus_credit_hours) + (Physics_marks * Physics_credit_hours);
	float Total_Credit_Hours  = PF_credit_hours +  Calculus_credit_hours + Physics_credit_hours;
	float Weighted_Average_Percentage = Total_Weighted_Score/Total_Credit_Hours;

	printf(" Course \t\t\t\t\tCredit Hours \t\t\t Obtained Marks\n\n");

	printf(" Programming Fundamentals (PF)  \t\t  %.2f  \t\t\t\t%.2f \n", PF_credit_hours, PF_marks);
	printf(" Calculus & Analytical Geometry  \t\t  %.2f  \t\t\t\t%.2f \n", Calculus_credit_hours, Calculus_marks);
	printf(" Applied Physics  \t\t\t\t  %.2f  \t\t\t\t%.2f \n", Physics_credit_hours,Physics_marks);
	
	printf("\nTotal Weighted Score = \t%.2f \n", Total_Weighted_Score);
	printf("Total_Credit_Hours  = \t%.2f \n", Total_Credit_Hours);
	printf("Weighted_Average_Percentage  = \t%.2f \n", Weighted_Average_Percentage);

	
	return 0;
}
	