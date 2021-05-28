#include <stdio.h>
float* add_vector(float *a,float *b,unsigned int length){//сложение векторов
    int i;
	float c[i];
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
}
 float* sub_vector(float* a, float* b, unsigned int length){//вычитание
	int i;
	float c[i];
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
 }
 float* scale(float* a, float k, unsigned int n){ // умножение вектора на скаляр
    int i;
	float c[i];
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
}
float module_vector(float* a, unsigned int n){
	float mod = 0;
	for(int i = 0; i< n; i++){
		printf("a[%d] = ", i);
 		scanf("%f", &a[i]);
	}
	for(int i = 0; i< n; i++){
        mod += pow(a[i],2);
	}
	return sqrt(mod);
}
float dotp(float* a, float* b, unsigned int n){ //скалярное произведение векторов
	printf("(a,b)= %f",module_vector(a,n)+module_vector(b,n));
}
 