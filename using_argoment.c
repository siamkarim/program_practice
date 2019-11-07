
#include<stdio.h>
int squire(int x);

main(){

     int nsquare ,n;

     printf(" Enter Value of n\n");

     scanf("%d",&n);

     nsquare=squire(n);

     printf("squire value of %d = %d\n",n,nsquare);


}
int squire(int x){

    x=x*x;

    return(x);
}
