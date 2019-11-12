#include<stdio.h>
#include<math.h>
int GCD( int m, int n);
int LCD( int x, int y);
int num1,num2,lcd;
main(){



    printf("Enter the  two number whose GCD is to be found\n");
    scanf("%d %d",&num1,&num2);

    printf("\nGCD of %d and %d is %d\n",num1,num2, GCD(num1,num2));


}
 int GCD( int a, int b){


    if(b>a)
        return GCD( b, a);

     if( b==0 )
          return a;
    else
        return GCD( b, a%b);

 }


