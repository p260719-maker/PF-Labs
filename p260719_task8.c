#include <stdio.h>

int main()
{
	printf("Name: Junaid Zafar\tRoll no: 26P-0719\tSection:BSAI-1A\n\n");

	printf("\tBANK LOAN INTEREST SUMMARY\n\n");

	double principal = 250000.00;
	float rate = 8.5;
	int time = 3;

	printf("\tGiven Data\n\n");
 
	printf("Principal Loan Amount = %.2f (PKR) \n", principal);
	printf("Annual Interest Rate = %.2f %%\n", rate);
	printf("Loan Period in Years = %d Years\n", time);

	printf("\n\tRequired\n\n");
	printf("Simple Interest (I)=?,\tTotal Payable Amount (A)=?,\tMonthly Installment=?");
	float Simple_Interest, Total_Payable_Amount, Monthly_Installment;

	Simple_Interest = (principal * rate * time)/100.0;
	Total_Payable_Amount = principal + Simple_Interest;
	Monthly_Installment = Total_Payable_Amount/(time * 12.0);
	
	printf("\n\tCalculation Results\n\n");
 
	printf("Simple_Interest = %.2f (PKR) \n", Simple_Interest);
	printf("Total_Payable_Amount = %.2f (PKR)\n", Total_Payable_Amount);
	printf("Monthly_Installment = %.2f (PKR)\n", Monthly_Installment);	
	
	return 0;	
}
