			#include <stdio.h>
			
			int findMax(int *num1, int *num2) {
			return (*num1 > *num2) ? *num1 : *num2;
			}
			
			int main() {
			int num1, num2;
			int *ptr1 = &num1;
			int *ptr2 = &num2;
			
			printf("Enter the first integer: ");
			scanf("%d", ptr1);
			
			printf("Enter the second integer: ");
			scanf("%d", ptr2);
			
			int max = findMax(ptr1, ptr2);
			printf("Maximum value: %d\n", max);
			
			return 0;
}
