#include <stdio.h>
#include <stdlib.h>
#include "vector.h"

float* add_vector(float *a,float *b,unsigned int length);

float* sub_vector(float* a, float* b, unsigned int length);

float* scale(float* a, float k, unsigned int n);

float module_vector(float* a, unsigned int n);

float dotp(float* a, float* b, unsigned int n);

float* Gram(float** a, unsigned int n,unsigned int m);//в разработке :D

int main(){
	int a;
	printf("MENU:\n");
	printf("1. vector addition\n 2.vector subtraction\n 3.vector multiplication on number\n 4.module vectors\n 5.scalar multiplication\n 6. Grama-Shmidt\n" );
	scanf ("%d", &a);
	switch (a){
		case 1:{
 			float *a,*b;
			int n;
			add_vector(a,b,n); 
			break;
		}
	 	case 2:{
  			float *a,*b;
			int n;
			sub_vector(a,b,n);
			break;
		}
	 	case 3:{
	 		float *a, k;
			int n;
			scale(a,k,n);  
			break;
 		}
	 	case 4:{
	 		float *a;
			int n;
			module_vector(a,n);
			break;
 		}
	 	case 5:{
		    float *a, *b;
			int n;
			dotp(a,b,n); 	
			break;
		 }
		case 6:{
			int n , m;
			float **a;
			Gram(a,n,m);	
			break;
		}
		default:{
			printf("ERROR 404");	 	
			break;
		}   
	}

	return 0;
}