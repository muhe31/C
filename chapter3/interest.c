/*
(Interest Calculator) The simple interest on a loan is calculated by the
formula interest = principal * rate * days / 365;
The preceding formula assumes that rate is the annual interest rate,
and therefore includes the division by 365 (days). Develop a program that
will input principal, rate and days for several loans, and will
calculate and display the simple interest for each loan, using the
preceding formula. 
*/
#include <stdio.h>

int main(void){

	//interest = principal *rate*days/365;

	float interest,loan,rate;
	int days;

	printf("Enter load principal (-1 to end): ");
	scanf("%f", &loan);

	while(loan != -1){
		printf("Enter interest rate: ");
		scanf("%f", &rate);

		printf("Enter term of the loan in days: ");
		scanf("%d", &days);

		interest = loan * rate * days / 365;
		printf("The interest charge is %.2f\n\n", interest);

		printf("Enter load principal (-1 to end): ");
		scanf("%f", &loan);
	}
}//end of main
