#include<stdio.h>
main(){

    int units, customer;
    float charges;
    printf("Enter CUSTOMER No. and UNITS consumed.\n");
    scanf("%d %d",&customer,&units);

    if ( units <= 200)
        charges = .5*units;

    else if ( units <= 400)
        charges = 100 + .065 *( units - 200);

        else if ( units <= 66)
        charges = 230 + .08 *( units - 400);

        else
            charges = 390 + ( units - 600);


    printf("\n\n Customer No. %d : Charges =%.2f\n", customer,charges);

}
