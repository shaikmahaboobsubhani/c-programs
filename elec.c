#include <stdio.h>

int main()
{
    int unit;
    float amt, total_amt, sur_charge;

    /* Input unit consumed from user */
    printf("Enter total units consumed: ");
    scanf("%d", &unit);


    /* Calculate electricity bill according to given conditions */
    if(unit <= 50)
    {
        amt = unit * 0.50;
    }
    else if(unit <= 200)
    {
        amt = 25 + ((unit-50) * 0.50);
    }
    else if(unit <= 400)
    {
        amt = 100 + ((unit-200) * 0.65);
    }
    else  if(unit <= 600)
    {
        amt = 230 + ((unit-400) * 0.80);
    }
    else
    { 
	amt= 390 + ((unit-600) * 1.00);
    }

    /*
     * Calculate total electricity bill
     * after adding surcharge
     */
    sur_charge = amt * 0.20;
    total_amt  = amt + sur_charge;

    printf("Electricity Bill = Rs. %.2f", total_amt);

    return 0;
}
