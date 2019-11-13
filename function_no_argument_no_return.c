#include<stdio.h>
void printline(float principal,float inrate, int period);
void value(char c);

main(){


    printline('Z');
    value(500, .12 ,5);
    printline('S');

}
 void printline(char ch){

    int i ;
    for ( i=1; i<=35; i++){
        printf("%c",c);
    }
  printf("\n");

 }

 void value(float principal,float inrate, int period){

    int year;
    float sum;

    sum = principal;

    year = 1;
    while( year <= period){

        sum = sum * (1+ inrate);
        year++;
    }

 printf("\n%8.2f %5.2f %5d %12.2f\n",principal,inrate,period,sum);

 }
