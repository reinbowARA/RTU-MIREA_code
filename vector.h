#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//сложение векторов
float* add_vector(float *a,float *b,unsigned int length){
    int i;
	float *c;
	printf ("enter line vector: ");
	scanf ("%d", &length);
	printf ("\n");
	c = (float*)malloc(length*sizeof(float));
    for(i=0; i<length; i++){
        printf("a[%d] = ", i);
        scanf("%f",&a[i]);
    }
    for(i=0; i<length; i++){
    	printf("b[%d] = ", i);
    	scanf("%f", &b[i]);
	}
	for(i=0;i<length; i++){
		c[i]=a[i]+b[i];
	}
	for(i=0;i<length;i++){
		printf("%g ",c[i]);
	}
	return c;
}
 //вычитание
float* sub_vector(float* a, float* b, unsigned int length){
	int i;
	float *c;
	printf ("enter line vector: ");
	scanf ("%d", &length);
	printf ("\n");	
	c = (float*)malloc(length*sizeof(float));
    for(i=0; i<length; i++){
        printf("a[%d] = ", i);
        scanf("%f",&a[i]);
    }
    for(i=0; i<length; i++){
    	printf("b[%d] = ", i);
    	scanf("%f",&b[i]);
	}
	for(i=0;i<length; i++){
		c[i]=a[i]-b[i];
	}
	for(i=0;i<length;i++){
		printf("%g ",c[i]);
	}
	return c;
 }
// умножение вектора на скаляр
float* scale(float* a, float k, unsigned int n){ 
    int i;
	float *c;
	printf ("enter line vector: ");
	scanf ("%d", &n);
	printf ("enter number: ");
	scanf ("%f", &k);	
	c = (float*)malloc(n*sizeof(float));
    for ( i = 0;i<n;i++){	      	            
        printf("a[%d] = ", i);
        scanf("%f",&a[i]);
    }
	for ( i=0; i<n ; i++){
		c[i]=k*a[i];
	}
	for ( i=0; i<n ; i++){
		printf("%g ",c[i]);
	}
	return c;	
}
//модуль вектора
float module_vector(float* a, unsigned int n){
	float mod = 0;
	printf ("enter line vector: ");
	scanf ("%d", &n);
	a = (float*)malloc(n*sizeof(float));
	for(int i = 0; i< n; i++){
		printf("a[%d] = ", i);
 		scanf("%f", &a[i]);
	}
	for(int i = 0; i< n; i++){
        mod += pow(a[i],2);
	}
	printf ("%g", sqrt(mod));
	return sqrt(mod);
}
//скалярное произведение векторов
float dotp(float* a, float* b, unsigned int n){
	float *c,r=0;
	printf ("enter line vector: ");
	scanf ("%d", &n);
	c = (float*)malloc(n * sizeof(float));
	a = (float*)malloc(n * sizeof(float));
	b = (float*)malloc(n * sizeof(float));
	for (int i = 0; i< n; i++){
		printf ("a[%d]=", i);
  		scanf("%f", &a[i]);
	}
	for (int i = 0; i< n; i++){
		printf ("b[%d]=", i);
  		scanf("%f", &b[i]);
	}
	for (int i = 0; i< n; i++){
		c[i]=a[i]*b[i];
  		r += c[i];	
	}
	
	printf ("%2g", r);	
	return r;
}
//ортогональность Грама-Шмидта
float lambda(float *a,float *b, unsigned int n){
	float r,Y;
	r = 0;
	float d = 0;
	for (int i = 0; i< n; i++){
		r +=a[i]*b[i];
		d +=b[i]*b[i];	
	}
	Y = -r/d;
	return Y;
}

float* Gram(float** a, unsigned int n,unsigned int m){
	float *c, *g,*b,*Y,*d;
	int k=2,i;
	b = (float*)malloc(m*sizeof(float));
	c = (float*)malloc(m* sizeof(float));
	g = (float*)malloc(m* sizeof(float));
	Y = (float*)malloc(m* sizeof(float));
	d = (float*)malloc(m* sizeof(float));
	printf ("enter numbers vector: ");
	scanf ("%d", &n);//число столбцов
	printf ("enter razmer matrix: ");
	scanf ("%d", &m);// число строк
	a = (float**)malloc(m*sizeof(float*));
	for (int i = 0; i<m;i++){
		a[i]= (float*)malloc(n*sizeof(float));
  		for(int j =0; j<n; j++){
		    printf("a[%d][%d] = ", i, j);
		  	scanf("%f", &a[i][j]);
        }
	}
	 for (int i = 0; i < m; i++){  // цикл по строкам
	    for (int j = 0; j < n; j++){  // цикл по столбцам
	    
	      printf("%5g ", a[i][j]); // 5 знакомест под элемент массива
	    }
	    printf("\n");
	}
	//----------------------------------
	
	printf ("\n");
	if (n == 1){
		for (int i = 0; i< m;i++){
			for (int j = 0; j< n; j++){	
		 		c[i]=a[i][j];
				printf("%5g ", c[i]);
			}	
		}
	}		
	else{
		 for (int i = 0; i< m;i++){
			for (int j = 0; j< 1; j++){	
		 		b[i]=a[i][j];
				printf("%5g ", b[i]);
				}	
			}
			printf ("\n"); 				
	 	for (int i = 0; i<m;i++){	 
		 	for (int j = 1; j < k; j++){	
 	  			if (j == n){
     	 		    break;
				}
			 	else{
 	 	  		 	d[i] = a[i][j-1]; 
					g[i] = a[i][j];
					for (int i = 0; i<m;i++){
		 				Y[i] = lambda(g,d,m)*d[i];							   					  	  		  		
						c[i]=g[i]+Y[i];												
					}
				 	k++; 		 	 	
		  		}					   
 		    }	  	     	
		} 
		for (int i = 0; i<m;i++){
			printf ("%5g", c[i]);
		}
		printf ("\n");	 
	}
	return c;	
}
