#include <stdio.h>

int main()
{	
	printf("Name: Junaid Zafar\tRoll no: 26P-0719\tSection:BSAI-1A\n\n");
	
	printf("\t \"FAST CAFETERIA RECEIPT\"\n\n");
	
	float  Tea_Qty = 3, Tea_price = 60.00, Tea_Subtotal = Tea_price * Tea_Qty;
	float samosa_Qty = 4, samosa_price = 40.5, samosa_Subtotal = samosa_price * samosa_Qty;
	float chicken_roll_Qty = 2, chicken_roll_price = 120.5, roll_Subtotal = chicken_roll_price * chicken_roll_Qty;

	printf(" Item \t\t\t  Qty \t\t  Unit Price (PKR) \t\t Subtotal (PKR)\n\n");

   	printf(" Tea \t\t\t  %.0f  \t\t\t %.2f \t\t\t  %.2f \n", Tea_Qty, Tea_price, Tea_Subtotal);
 	printf(" Samosa \t\t  %.0f  \t\t\t %.2f \t\t\t  %.2f \n", samosa_Qty, samosa_price, samosa_Subtotal);
 	printf(" Chicken Roll \t\t  %.0f  \t\t\t %.2f \t\t  %.2f \n", chicken_roll_Qty, chicken_roll_price, roll_Subtotal);

	float subtotal = Tea_Subtotal + samosa_Subtotal + roll_Subtotal;
	printf("\n\nSubtotal: \t\t %.2f\n", subtotal);

	float GTS = 0.16 * subtotal;
	printf("GTS (16%%): \t\t  %.2f\n\n", GTS);

	float Grand_Total = subtotal - GTS;
	printf("Grand Total = \t\t  %.2f\n\n", Grand_Total);

	printf("\t \"THANK YOU FOR YOUR VISIT \"\n\n");
	
	return 0;
}