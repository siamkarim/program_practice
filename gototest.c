#include<stdio.h>
#include<math.h>
main(){

    double x, y;
    int count;
    count = 1;
    printf("Enter Five real vaue in a line\n");

    read:
        scanf("%lf",&x);
        printf("\n\n");
        if ( x < 0)
            printf(" Value -%d is negative\n",count);

        else {

            y = sqrt(x);
            printf("%lf\t %lf\n",x,y);

        }
        count++;

        goto read;

        printf("\n End of computation\n");

}
