#include<stdio.h>
#define CA1 1000
#define CA2 750
#define CA3 500
#define CA4 250
#define EA1 500
#define EA2 200
#define EA3 100
#define EA4 0
main(){

    int level , jobnumber;
    float gross, basic, house_rent, perks, net, incometax;

    input:
        printf("\n Enter level, job number, and basic pay\n");
        printf(" Ener 0 for level to END\n");
        scanf("%d",&level);
        if ( level == 0) goto stop;

        scanf(" %d %f",&jobnumber,&basic);

        switch(level){

            case 1:

                perks = CA1 + EA1;

                break;

            case 2:

                perks = CA2 + EA2;

                break;

            case 3:
                perks = CA3 + EA3;

                break;

            case 4:
                perks = CA4 + EA4;

                break;

            default:

                printf("Error in level code\n");

                goto stop;
            }

        house_rent = .25 * basic;

        gross = basic + house_rent + perks;

        if ( gross <= 2000)

            incometax = 0;

        else if ( gross <= 4000)

            incometax = 0.03 * gross;

        else if ( gross <= 5000)

            incometax = .05 * gross;

        else
                incometax = .08 * gross;

        net = gross - incometax;

        printf(" %d %d %.2f",level, jobnumber, net);

        goto input;

        stop: printf("\n\n End the program\n");


}
