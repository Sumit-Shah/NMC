// 1. C program to create memory for int,
// char and float variables at run time.
 
// #include <stdio.h>
// #include <stdlib.h>

// // main function
// int main()
// {
//   //In this program we will create memory for integer, char and float 
//   // variables at run time using malloc() function 
//   // we will release the allocated memory using free() function.

//   // Declare an integer pointer
//   int *ptr_1;
  
//   // Declare an char pointer
//   char *ptr_2;
  
//   // Declare an float pointer
//   float *ptr_3;
  
//   // Now allocating memory to each pointer
//   // using dynamic memory allocation
//   ptr_1 = (int*)malloc(1*sizeof(int));
//   ptr_2 = (char*)malloc(1*sizeof(char)*1);
//   ptr_3 = (float*)malloc(1*sizeof(float));
  
//   printf("\nEnter the value for integer pointer : ");
//   scanf("%d",ptr_1);
  
//   printf("\nEnter the value for char pointer : ");
//   scanf(" %c",ptr_2);
  
//   printf("\nEnter the value for float pointer : ");
//   scanf("%f",ptr_3);
  
//   printf("\nThe value stored in integer pointer is : %d",*ptr_1);
//   printf("\nThe value stored in char pointer is : %c",*ptr_2);
//   printf("\nThe value stored in float pointer is : %f",*ptr_3);

//   free(ptr_1);
//   free(ptr_2);
//   free(ptr_3);
  
//   return 0;
// }




// 2. Finding maximum in an array using
// dynamic memory allocation.
#include <stdio.h>
#include <stdlib.h>

int main() {

  int n;
  double *data;
  printf("Enter the total number of elements: ");
  scanf("%d", &n);

  // Allocating memory for n elements
  data = (double *)calloc(n, sizeof(double));
  if (data == NULL) {
    printf("Error!!! memory not allocated.");
    exit(0);
  }

  // Storing numbers entered by the user.
  for (int i = 0; i < n; ++i) {
    printf("Enter number%d: ", i + 1);
    scanf("%lf", data + i);
  }

  // Finding the largest number
  for (int i = 1; i < n; ++i) {
    if (*data < *(data + i)) {
      *data = *(data + i);
    }
  }
  printf("Largest number = %.2lf", *data);

  free(data);

  return 0;
}


// 3. Write a program that allocates memory
// space as required by the user for three
// arrays. User enters the numbers for two
// arrays and the program sums the
// corresponding array elements and
// stores them in the third array.
// 4. Write a program that reads ‘n’ from the
// user and allocates memory to hold n
// integer numbers. Pass these numbers
// to a function that returns the sum.

