#include <stdio.h>

int main()
{
    int unit;
    float amt, total_amt, sur_charge;

    /* Input unit consumed from user */
    printf("Enter total units consumed: ");
    scanf("%d", &unit);


    /* Calculate electricity bill according to given conditions */
    if(unit <= 100)
    {
        amt = unit * 0.50;
    }
    else if(unit <= 200)
    {
        amt = 50 + ((unit-100) * 0.60);
    }
    else if(unit <= 300)
    {
        amt = 100 + ((unit-200) * 0.70);
    }
    else  if(unit <= 300)
    {
        amt = 200 + ((unit-200) * 0.80);
    }
    else
    { 
	amt= 300 + ((unit-600) * 1.00);
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
