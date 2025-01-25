/*. Input electricity unit charge and calculate the total electricity bill according to the given
condition:
- For ƒrst 50 units Rs. 0.50/unit
- For next 100 units Rs. 0.75/unit
- For next 100 units Rs. 1.20/unit
- For unit above 250 Rs. 1.50/unit
- An additional surcharge of 20% is added to the bill.*/
#include<stdio.h>
int main()
{
    float bill,unit;
    printf("enter the used unit by you\n");
    scanf("%f",&unit);
    if(unit<=50)
    {
        bill=unit*0.5;
    }
    if(unit>50 && unit<=150)
    {
        bill=50*0.5+(unit-50)*0.75;
    }
    if(unit>150 && unit<=250)
    {
        bill=50*0.5+100*0.75+(unit-150)*1.20;
    }
    if(unit>250)
    {
        bill=50*0.5+100*0.75+100*1.20+(unit-250)*1.50;
    }
    bill=bill*0.2+bill;
    printf("you have to pay %.2f rupee",bill);
    return 0;
}