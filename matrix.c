#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "matrix.h"

float** add_matrix(float** a,float** b, unsigned int n,unsigned int m);

float** sub_matrix(float** a,float** b, unsigned int n,unsigned int m);

float** mul_matrix(float** a, float** b, unsigned int n, unsigned int m, unsigned int k);

float** GetMatr(float **mas, float **p, int i, int j, int m);

float det(float **mas, int m);

float** obrMatr(float **M, int N);

int main(){
	int a;
	printf("MENU:\n");
	printf("1. Matrix addition\n 2.Matrix subtraction\n 3.Matrix multiplication\n 4.determenant\n 5.obr_matrix\n" );
	scanf ("%d", &a);
	switch(a){
		case 1:{
			float **a, **b;
			int n,m;
			add_matrix(a,b,n,m);	
			break;
		}
	 	case 2:{
			float **a, **b;
			int n,m;
			sub_matrix(a,b,n,m); 
			break;
 		}
   		case 3:{
			float **a, **b;
			int n,m,k;
			mul_matrix(a,b,n,m,k);  	
			break;
		}
		case 4:{
	 		float **a;
			int m;
			det(a,m); 
			break;
		} 
  		case 5:{
	 		float **a;
			int m;
			obrMatr(a,m);  
			break;
 		}
	 	default:{
		    printf("ERROR 404");
			break;
		}
	}
    return 0;
}