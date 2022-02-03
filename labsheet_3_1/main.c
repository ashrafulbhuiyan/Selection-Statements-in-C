#include <stdio.h>
#include <stdlib.h>

int main()
{
    float unit ,total,sc,dc,extra,y;
    sc=20; //Service Charge = sc
    dc=30; //Demand charge= dc
    extra = sc+dc;  // extra means without unit charge

    printf("Please enter how much unit did you use: ");
    scanf("%f",&unit);

    printf("\nYour service charge per month: %.2f taka", sc);
    printf("\nYour demand charge per month: %6.2f taka", dc);
    printf("\n");

    //taka per unit is counted according to Palli bidyut

    if ((0<=unit) && (50>=unit))
        {
        if (0==unit)
            {
                printf("\nYou have to pay just %.2f taka",extra);
            }
        else
            {
                total = (3.75*unit)+extra;
                printf("\nYou have to pay total %.2f taka for this month",total);

            }

        }

    else if ((50<unit)&& (75>=unit))
        {
            unit-=50;
            y = (4.19*unit)+extra;
            total = y+(50*3.75);
            printf("\nYou have to pay total %.2f taka for this month",total);

        }

    else if ((75<unit)&&(200>= unit))
        {
            unit-=75;
            y = (5.72*unit)+extra;
            total = y+(50*3.75)+(25*4.19);
            printf("\nYou have to pay total %.2f taka for this month",total);

        }

    else if ((200<unit) && (300>=unit))
        {
            unit-=200;
            y = (6.00*unit)+extra;
            total = y+(50*3.75)+(25*4.19)+(125*5.72);
            printf("\nYou have to pay total %.2f taka for this month",total);

        }

    else if ((300<unit)&&(400>= unit))
        {
            unit-=300;
            y = (6.34*unit)+extra;
            total = y+(50*3.75)+(25*4.19)+(125*5.72)+(100*6.00);
            printf("\nYou have to pay total %.2f taka for this month",total);
        }

    else if ((400<unit)&& (600>= unit))
        {
            unit-=400;
            y = (9.94*unit)+extra;
            total = y+(50*3.75)+(25*4.19)+(125*5.72)+(100*6.00)+(100*6.34);
            printf("\nYou have to pay total %.2f taka for this month",total);
        }

    else if (600<unit)
        {
            unit-=600;
            y = (11.46*unit)+extra;
            total = y+(50*3.75)+(25*4.19)+(125*5.72)+(100*6.00)+(100*6.34)+(200*9.94);
            printf("\nYou have to pay total %.2f taka for this month",total);
        }

        printf("\n");

    return 0;
}
