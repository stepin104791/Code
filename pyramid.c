#include <stdio.h>


int main()
{

   
	int c;
   
	printf("Enter a number: ");
   
	scanf("%d", &c);
   
	for (int i = 1; i <= c; ++i) {
      
		for (int j = 1; j <= i; ++j) {
         
			printf("* ");
      }
      
			printf("\n");
   }
   
	return 0;


	}