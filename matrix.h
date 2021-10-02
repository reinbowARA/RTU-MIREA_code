#include <stdio.h>
#include <stdlib.h>
//сумма матриц
float** add_matrix(float** a,float** b, unsigned int n,unsigned int m){
	int i, j; 
	float **c;
	printf("enter strok matrix: ");
	scanf("%d", &n);
	printf("enter colons matrix: ");
	scanf("%d", &m);
	printf ("\n");
	c = (float**)malloc(n*sizeof(float*));
	for(i = 0; i<n ; i++){
		c[i]=(float*)malloc(m* sizeof(float));
	}
	  // Ввод элементов массива
  a=(float**)malloc(n*sizeof(float));
  for (i = 0; i<n; i++)  // цикл по строкам
  {  
    a[i] = (float*)malloc(m * sizeof(float));// Выделение памяти под хранение строк
    for (j = 0; j<m; j++)  // цикл по столбцам
    {
      printf("a[%d][%d] = ", i, j);
      scanf("%f", &a[i][j]);
    }
  }
  b=(float**)malloc(n*sizeof(float));
  for (i = 0; i<n; i++)  // цикл по строкам
  {  
    b[i] = (float*)malloc(m * sizeof(float));// Выделение памяти под хранение строк
    for (j = 0; j<m; j++)  // цикл по столбцам
    {
      printf("b[%d][%d] = ", i, j);
      scanf("%f", &b[i][j]);
    }
  }
  for (i = 0; i<n; i++){  // цикл по строкам 
     
	    for (j = 0; j<m; j++)  // цикл по столбцам
	    {
		 	c[i][j]=a[i][j]+b[i][j];
	       
	    }
  }
  // Вывод элементов масcива "a"
  for (i = 0; i < n; i++)  // цикл по строкам
  {
    for (j = 0; j < m; j++)  // цикл по столбцам
    {
      printf("%5g ", a[i][j]); // 5 знакомест под элемент массива
    }
    printf("\n");
  }
  printf("\n");
  // вывод элементов массива "b"
  for (i = 0; i < n; i++)  // цикл по строкам
  {
    for (j = 0; j < m; j++)  // цикл по столбцам
    {
      printf("%5g ", b[i][j]); // 5 знакомест под элемент массива
    }
    printf("\n");
  }
  printf("\n");
  for (i = 0; i<n; i++){   
	    for (j = 0; j<m; j++)  
	    {
		 	printf("%5g ", c[i][j]);
	    }
    printf("\n");
  }
  // Очистка памяти
  for (i = 0; i < n; i++){  // цикл по строкам
    free(a[i]); // освобождение памяти под строку
    free(b[i]);
    free(c[i]);
  }  
  free(a);
  free(b);
  free(c);
  return c;
}
//вычитание матриц
float** sub_matrix(float** a,float** b, unsigned int n,unsigned int m){
	int i, j; 
	float **c;
	printf("enter strok matrix: ");
	scanf("%d", &n);
	printf("enter colons matrix: ");
	scanf("%d", &m);
	printf ("\n");
	c = (float**)malloc(n*sizeof(float*));
	for(i = 0; i<n ; i++){
		c[i]=(float*)malloc(m* sizeof(float));
	}
	  // Ввод элементов массива
  a=(float**)malloc(n*sizeof(float));
  for (i = 0; i<n; i++)  // цикл по строкам
  {  
    a[i] = (float*)malloc(m * sizeof(float));// Выделение памяти под хранение строк
    for (j = 0; j<m; j++)  // цикл по столбцам
    {
      printf("a[%d][%d] = ", i, j);
      scanf("%f", &a[i][j]);
    }
  }
  b=(float**)malloc(n*sizeof(float));
  for (i = 0; i<n; i++)  // цикл по строкам
  {  
    b[i] = (float*)malloc(m * sizeof(float));// Выделение памяти под хранение строк
    for (j = 0; j<m; j++)  // цикл по столбцам
    {
      printf("b[%d][%d] = ", i, j);
      scanf("%f", &b[i][j]);
    }
  }
  for (i = 0; i<n; i++){  // цикл по строкам 
     
	    for (j = 0; j<m; j++)  // цикл по столбцам
	    {
		 	c[i][j]=a[i][j]-b[i][j];
	       
	    }
  }
  // Вывод элементов масcива "a"
  for (i = 0; i < n; i++)  // цикл по строкам
  {
    for (j = 0; j < m; j++)  // цикл по столбцам
    {
      printf("%5g ", a[i][j]); // 5 знакомест под элемент массива
    }
    printf("\n");
  }
  printf("\n");
  // вывод элементов массива "b"
  for (i = 0; i < n; i++)  // цикл по строкам
  {
    for (j = 0; j < m; j++)  // цикл по столбцам
    {
      printf("%5g ", b[i][j]); // 5 знакомест под элемент массива
    }
    printf("\n");
  }
  printf("\n");
  for (i = 0; i<n; i++){   
	    for (j = 0; j<m; j++)  
	    {
		 	printf("%5g ", c[i][j]);
	    }
    printf("\n");
  }
  // Очистка памяти
  for (i = 0; i < n; i++){  // цикл по строкам
    free(a[i]); // освобождение памяти под строку
    free(b[i]);
    free(c[i]);
  }  
  free(a);
  free(b);
  free(c);
  
  return c;
}
//умножение матриц
float** mul_matrix(float** a, float** b, unsigned int n, unsigned int m, unsigned int k) {
	int i, j; 
	float **c;
	printf("enter strok matrix a: ");
	scanf("%d", &n);
	printf("enter colons matrix a and strok matrix b: ");
	scanf("%d", &m);
	printf("enter colons matrix b: ");
	scanf("%d", &k);
	printf ("\n");
	c = (float**)malloc(n*sizeof(float*));
	for(i = 0; i<n ; i++){
		c[i]=(float*)malloc(k* sizeof(float));
	}
	  // Ввод элементов массива
 a=(float**)malloc(n*sizeof(float));
  for (i = 0; i<n; i++)  // цикл по строкам
  {  
    a[i] = (float*)malloc(m * sizeof(float));// Выделение памяти под хранение строк
    for (j = 0; j<m; j++)  // цикл по столбцам
    {
      printf("a[%d][%d] = ", i, j);
      scanf("%f", &a[i][j]);
    }
  }
  b=(float**)malloc(n*sizeof(float));
  for (i = 0; i<m; i++)  // цикл по строкам
  {  
    b[i] = (float*)malloc(k * sizeof(float));// Выделение памяти под хранение строк
    for (j = 0; j<k; j++)  // цикл по столбцам
    {
      printf("b[%d][%d] = ", i, j);
      scanf("%f", &b[i][j]);
    }
  }
  for (i = 0; i<n; i++){  // цикл по строкам      
	    for (j = 0; j<k; j++)  // цикл по столбцам
	    {
			c[i][j]=0;
			for (int h = 0; h < m; h++){
				c[i][j]+=a[i][h]*b[h][j];	 	
			}  
	    }
  }
  // Вывод элементов масcива "a"
  for (i = 0; i < n; i++)  // цикл по строкам
  {
    for (j = 0; j < m; j++)  // цикл по столбцам
    {
      printf("%5g ", a[i][j]); // 5 знакомест под элемент массива
    }
    printf("\n");
  }
  printf("\n");
  // вывод элементов массива "b"
  for (i = 0; i < n; i++)  // цикл по строкам
  {
    for (j = 0; j < m; j++)  // цикл по столбцам
    {
      printf("%5g ", b[i][j]); // 5 знакомест под элемент массива
    }
    printf("\n");
  }
  printf("\n");
  for (i = 0; i<n; i++){   
	    for (j = 0; j<k; j++)  
	    {
		 	printf("%5g ", c[i][j]);
	    }
    printf("\n");
  }
  // Очистка памяти
  for (i = 0; i < n; i++){  // цикл по строкам
    free(a[i]); // освобождение памяти под строку
    free(b[i]);
    free(c[i]);
  }  
  free(a);
  free(b);
  free(c);
  
  return c;
}

// Получение матрицы без i-й строки и j-го столбца (минора матрицы)
float** GetMatr(float **mas, float **p, int i, int j, int m) {
  int ki, kj, di, dj;
  di = 0;
  for (ki = 0; ki<m - 1; ki++) { // проверка индекса строки
    if (ki == i) di = 1;
    dj = 0;
    for (kj = 0; kj<m - 1; kj++) { // проверка индекса столбца
      if (kj == j) dj = 1;
      p[ki][kj] = mas[ki + di][kj + dj];
    }
  }
  return p;
}
// Рекурсивное вычисление определителя
float det(float **mas, int m) {
  int i, j, k, n;
  float d;
  // ввод матрицы ---------------------
  printf ("enter razmer matrix: ");
  scanf ("%d", m);
  mas = (float**)malloc(m*sizeof(float*));
  for (i = 0; i<m; i++) {
    mas[i] = (float*)malloc(m*sizeof(float));
    for (j = 0; j<m; j++) {
      printf("mas[%d][%d] = ", i, j);
      scanf("%f", &mas[i][j]);
    }
  }
  //-------------------------------------
  float **p;
  p =(float**)malloc(m*sizeof(float*));
  for (i = 0; i<m; i++)
    p[i] =(float*)malloc(m*sizeof(float)) ;
  j = 0; d = 0;
  k = 1; //(-1) в степени i
  n = m - 1;
  if (m<1) printf("determenant impossibly");
  //для матрицы размера 1х1
  if (m == 1) {
    d = mas[0][0];
    return(d);
  }
  //для матрицы размера 2х2
  if (m == 2) {
    d = mas[0][0] * mas[1][1] - (mas[1][0] * mas[0][1]);
    return(d);
  }
  //3х3 и выше
  if (m>2) {
    for (i = 0; i<m; i++) {
      GetMatr(mas, p, i, 0, m);
	  //mas - заданная матрица, p - "пустая" матрица , i - строка , j - столбец, m -размер матрицы
      printf("%f", mas[i][j]);
      d = d + k * mas[i][0] * det(p, n);
      k = -k;
    }
  }
  for(i = 0; i<m;i++)
  		free(mas[i]);
  free(mas);
  return(d);
}
//обратная матрица
float** obrMatr(float **M, int N){
 float **obr;	  
 int i, j,k;
 printf ("enter razmer matrix: ");
 scanf ("%d", &N);	
 M = (float**)malloc(N*sizeof(float*));	
 for(i=0; i<N; i++){
 M[i]= (float*)malloc(N*sizeof(float));
 for(j=0; j<N; j++)
  {
   printf("N[%d][%d] = ",i,j);
   scanf("%f",&M[i][j]);
  }
  }
  
 obr = (float**)malloc(N*sizeof(float*));	
 for(i=0; i<N; i++)
 obr[i]= (float*)malloc(N*sizeof(float));
  
printf("----------------\n");
printf("Matrix: \n");
for(i=0; i<N; i++)
 {
  for(j=0; j<N; j++)
   printf("%5g",M[i][j]);
  printf("\n");
 }

for(k=0; k<N; k++)
{
  for(i=0; i<N; i++)
   for(j=0; j<N; j++)
    {
      if (i==k&&j==k)
       obr[i][j] = 1/M[i][j];
      if(i==k&&j!=k)
       obr[i][j] = -M[i][j]/M[k][k];
      if (i!=k&&j==k)
       obr[i][j] = M[i][k]/M[k][k];
      if(i!=k&&j!=k)
       obr[i][j] = M[i][j] - M[k][j] * M[i][k]/M[k][k];
     }
 for(i=0;i<N;i++)
  for(j=0; j<N;j++) M[i][j]= obr[i][j];
}

printf("\nObr matrix: \n");
for(i=0; i<N; i++)
 {
  for(j=0; j<N; j++)
   printf("%7.3g",M[i][j]);
  printf("\n");
 }
 
 for(i =0;i<N;i++)
 	   free(M[i]);
 free (M);
 return M;
}
