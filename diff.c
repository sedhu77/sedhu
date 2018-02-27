#include <stdio.h>
#include <math.h>
void main()

{
     int a, d, n,  f;
     int sum = 0;
     printf("Enter the first term value : ");
     scanf("%d", &a);
     printf("Enter the total numbers : ");
     scanf("%d", &n);
     printf("Enter the common difference : ");
     scanf("%d", &d);
     sum = (n * (2 * a + (n - 1)* d ))/ 2;
     f = a + (n - 1) * d;
     printf("Sum of the A.P series is: ");
     for (int i = a; i <= f; i = i + d )
     {
      if (i != f)
               printf("%d + ", i);
          else
               printf("%d = %d ", i, sum);
     }
