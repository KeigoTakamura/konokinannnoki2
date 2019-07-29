

#include <stdio.h>
#include<stdlib.h>

#include<math.h>
#include<time.h>



#define n 10

#define A(i,j) ( A [( j ) + n * ( i )]) //一次元メモリ空間の二次元風表記
#define original_A(i , j) ( original_A [( j ) + n * ( i )])



int main(){
double * A ;
A = ( double *) malloc ( sizeof ( double ) * n * n ); //N*N長のRAM
double * b ;
b = ( double *) malloc ( sizeof ( double ) * n );
double * original_A ;
original_A = ( double *) malloc ( sizeof ( double ) * n * n );
double * original_b ;
original_b = ( double *) malloc ( sizeof ( double ) * n );

srand((int)time(NULL));

for (size_t i = 0; i < n; i++)
{
    for (size_t t = 0; t < n; t++)
    {
        A(i,t)=(double)(rand()%10);
        original_A(i,t)=A(i,t);
    }
    
}


srand(time(NULL));




}
