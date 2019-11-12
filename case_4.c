#include<stdio.h>
main(){

     int count;
     float value, high, low, sum, avarage, range;
     sum = 0;
     count = 0;

     printf(" Enter number in a line : Input a NEGATIVE number to end\n");


     input:

         scanf("%f",&value);

         if ( value < 0) goto Output;

           count++;

        if ( count == 1)

            high = low = value;

        else if ( value > high)

            high = value;

        else if ( value > low)

                low = value;

        sum = sum + value ;

        goto input;

    Output:

        avarage = sum/count;

        range = high - low;

        printf("\n\n\n");

        printf(" Total value    : %d\n",count);

        printf(" Highest value  : %f\n Lowest value   : %f\n",  high,low);

        printf(" Range          : %f\n Avarage        : %f\n\n",range,avarage);
}
