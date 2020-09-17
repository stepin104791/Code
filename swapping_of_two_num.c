#include<stdio.h>
int main() {
      double a, b, temp;
      printf("Enter a number");
      scanf("%lf", &a);
      printf("\n");
      printf("Enter the second number");
      scanf("%lf", &b);
      printf("a=%lf",a);
      printf("b=%lf",b);

      temp = a;
      a = b;
      b = temp;
      printf("\n");

	  printf("After Swapping");
      printf("\n");

      printf("a=%.2lf\n", a);
      printf("b=%.2lf", b);
      return 0;
}