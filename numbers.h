#include <stdio.h>
#include <stdlib.h>
// Наибольший общий делитель
int gcd (int x, int y){
	int g;
	if (x<0)// находим модуль числа х
	   x = -x;
    if (y<0)// находим модуль числа у
       y = -y;
    if (x+y==0)
       printf("error");
    g = y;
    while (x>0){
    	g=x;
    	x=y%x;
    	y=g;
	}
	return g;
}
//НОД n чисел
int NodArray(int *a, int n){
	a = (int*)malloc(n*sizeof(int));
	printf ("enter kol-vo numbers: ");
	scanf ("%d", &n);
	for(int i = 0; i< n; i++){
		printf("a[%d]", i);
		scanf("%d=",&a[i]);
	}		
	int i;
	int g;
	if (n < 1)
 	    return 0;
	g = a[0];
	for (i = 1; i<n; ++i){
		g=gcd(g,a[i]);
		if (g == 1)
		return 1;
	}
	printf ("%d",g);
	return g;
}
// Наименьшее общее кратное
int NOK(int n1, int n2) {
			
  return n1*n2 / gcd(n1, n2); 
}
// НОК n чисел
int NOKarray(int *a, int n){ 
   	a = (int*)malloc(n*sizeof(int));
	printf ("enter kol-vo numbers: ");
	scanf ("%d=", &n);
	for(int i = 0; i< n; i++){
		printf("a[%d]", i);
		scanf("%d",&a[i]);
	}	
   int i;
   int g;
   if (n < 1)
   	  return 0;
   g = a[0];
   for (i = 1; i<n; ++i){
   	g=NOK(g,a[i]);
   	if (g == 1)
   	return 1;
   }
   printf ("%d",g);
   return g;
}
//Евклид 2 чисел
int Evklidos(int a, int b){
	int p=1, q=0, r=0, s=1, x, y;
    while (a && b) {
        if (a>=b) {
            a = a - b; 
            p = p - r; 
            q = q - s; 
        } else
        {
            b = b - a; 
            r = r - p; 
            s = s - q; 
        }
    }
    if (a) {
        x = p;
        y = q;
    }else
    {
        x = r;
        y = s;
    }
    printf("%d %d ",x,y);
    return x,y;
}
//Евклид для n чисел
int EvklidNodArray(int *a, int n){
	a = (int*)malloc(n*sizeof(int));
	printf ("enter kol-vo numbers: ");
	scanf ("%d", &n);
	for(int i = 0; i< n; i++){
		printf("a[%d]=", i);
		scanf("%d", &a[i]);
	}
   int i;
   int g,c;
   if (n < 1)
   	  return 0;
   printf("look end 2 numbers\n");
   g = a[0];
   for (i = 1; i<n; ++i){
   	  Evklidos(g,a[i]);
  	  g = gcd(g,a[i]);
   }
   
   return g;
}
