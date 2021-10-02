#include <stdio.h>
#include <stdlib.h>
#include "numbers.h"

int gcd (int x, int y);

int NodArray (int *a, int n);

int NOK(int n1, int n2);

int NOKarray(int *a, int n);

int Evklidos(int a, int b);

int EvklidNodArray(int *a, int n);

int main(){
	int a;
	printf("1.NOD\n 2.NOD n-numbers\n 3.NOK\n 4.NOK n-numbers\n 5.super algotitm Evklida\n 6.super algoritm Evklida n-numbers\n");
	scanf("%d",&a);
	switch(a){
		case 1:{
 			int x,y; 
		 	printf ("enter numbers: ");
			scanf("%d%d", &x, &y);
			printf("%d",gcd( x,  y));			  	  
			break;
		}
	 	case 2:{
		    int *a,n;
 	   		NodArray(a,n);
			break;
		}
		case 3:{
			int x,y;
		 	printf ("enter numbers: ");
			scanf("%d%d", &x, &y);
			printf("%d",NOK( x,  y));	
			break;
		}
		case 4:{
 			int *a,n;
 	   		NOKarray(a,n);
			break;
		}
		case 5:{
 			 int a,b;
		  	printf ("enter numbers: ");
			scanf("%d%d", &a, &b);
	  		Evklidos( a, b);
			break;
		}
		case 6:{
 			int *a,n;
 	   		EvklidNodArray(a,n); 
			break;
		} 
  		default:{
		 	printf("ERROR 404");
			break;
		  }
	}
    return 0;
}