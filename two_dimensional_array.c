#include<stdio.h>
double average ( int x [] [2], int M, int N){

     int i,j;
     double sum = 0.0;
     for ( i=0; i<M; i++)
        for ( j=1; j<N; j++)
        sum += x[i][j];
     return ( sum/(M*N));


}
main(){

     int N=2, M=3;
     double average( int[] [N] , int, int);
     double mean;

     int matrix [3][2]=

        {
               { 1,2},
               { 3,4},
               { 5,6}


        };



       mean = average( matrix, M,N);

       printf("Value is %d",mean);

}
