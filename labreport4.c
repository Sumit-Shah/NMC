// #include<stdio.h>
// int main() {
//     printf("Good morning");
//     return 0;
// }

// 1. Write a program in C to compute the sum of all elements in an array 
// using pointer

// #include<stdio.h>


// int calculate(int *arr, int n) {
//     int sum = 0;
//     int *ptr = arr;

//     for (int i=0; i < n; i++) {
//         sum = sum + *ptr;
//         ptr++;
//     }
//     return sum;
// }

// int main() {
//     int arr[5];
//     int i;

//     printf("Enter 5 array : ");
//     for(i=0; i<5; i++) {
//         scanf("%d", &arr[i]);
//     }

//     int sum = calculate(arr, 5);

//     printf("Sum of array : %d", sum);

//     return 0;
// }







// #include<stdio.h>

// int calculate(int *arr, int n) {
//     int sum = 0;
//     int *ptr = arr;

//     for (int i=0; i < n; i++) {
//         sum = sum + *ptr;
//         ptr++;
//     }
//     return sum;
// }
// int main() {


//     int class[5];

//     //input
//     int *ptr = &class[0];
//     for(int i=0; i<5; i++) {
//         printf("%d index : ", i);
//         // scanf("%d", (ptr+i));
//         scanf("%d", &class[i]);
//     }


// }







// #include<stdio.h>

// // Function to calculate the sum of array elements using pointers
// int calculate(int *arr, int n) {
//     int sum = 0;
//     int *ptr = arr;

//     for (int i = 0; i < n; i++) {
//         sum = sum + *ptr;
//         ptr++;
//     }
//     return sum;
// }

// int main() {
//     int element[5];

//     // Input
//     int *ptr = &element[0];
//     for (int i = 0; i < 5; i++) {
//         printf("Enter value at index %d: ", i);
//         scanf("%d", &element[i]);
//     }

//     // Display array elements
//     printf("Array elements: ");
//     for (int i = 0; i < 5; i++) {
//         printf("%d ", element[i]);
//     }
//     printf("\n");

//     // Calculate and display the sum using the function
//     int sum = calculate(element, 5);
//     printf("Sum of array elements: %d\n", sum);

//     return 0;
// }




// #include <stdio.h>

// // Function to calculate the sum of array elements
// int calculate(int *arr, int n) {
//     int sum = 0;
//     for (int i = 0; i < n; i++) {
//         sum += arr[i];
//     }
//     return sum;
// }

// int main() {
//     int elements[] = {1, 2, 3, 4, 5};  // You can initialize the array with your values

//     // Calculate and display the sum using the function
//     int sum = calculate(elements, 5);
//     printf("Sum of array elements: %d\n", sum);

//     return 0;
// }










// // 2. Write a C program to search an element in array using pointers.\
// #include <stdio.h>

// // Function to search for an element in an array using pointers
// int searchElement(int *arr, int n, int key) {
//     for (int i = 0; i < n; i++) {
//         if (*arr == key) {
//             return i; // Return the index if the element is found
//         }
//         arr++; // Move the pointer to the next array element
//     }
//     return -1; // Return -1 if the element is not found
// }

// int main() {
//     int elements[] = {1, 2, 3, 4, 5};
//     int n = 5; // Size of the array
//     int key;

//     // Input: Ask the user for the element to search
//     printf("Enter the element to search: ");
//     scanf("%d", &key);

//     // Search for the element using the function
//     int index = searchElement(elements, n, key);

//     // Display the result
//     if (index != -1) {
//         printf("Element %d found at index %d\n", key, index);
//     } else {
//         printf("Element %d not found in the array\n", key);
//     }

//     return 0;
// }









// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     // Declare pointers for dynamic memory allocation
//     int *intVar = malloc(sizeof(int));
//     char *charVar = malloc(sizeof(char));
//     float *floatVar = malloc(sizeof(float));

//     // Input values for the variables
//     printf("Enter an integer: ");
//     scanf("%d", intVar);

//     printf("Enter a character: ");
//     scanf(" %c", charVar);

//     printf("Enter a float: ");
//     scanf("%f", floatVar);

//     // Display the values
//     printf("Integer: %d\n", *intVar);
//     printf("Character: %c\n", *charVar);
//     printf("Float: %f\n", *floatVar);

//     // Free allocated memory
//     free(intVar);
//     free(charVar);
//     free(floatVar);

//     return 0; // Return 0 to indicate successful execution
// }




// // 4. Finding maximum in an array using dynamic memory allocation. 

// #include <stdio.h>
// #include <stdlib.h>

// #define ARRAY_SIZE 5  // Set a fixed size for the array

// int main() {
//     // Dynamic memory allocation for the array
//     int *arr = malloc(ARRAY_SIZE * sizeof(int));

//     if (arr == NULL) {
//         printf("Memory allocation failed\n");
//         return 1; // Return an error code if allocation fails
//     }

//     // Initialize the array with predefined values
//     int values[] = {10, 5, 8, 15, 3};
//     for (int i = 0; i < ARRAY_SIZE; i++) {
//         arr[i] = values[i];
//     }

//     // Find and display the maximum element
//     int maxElement = arr[0];
//     for (int i = 1; i < ARRAY_SIZE; i++) {
//         if (arr[i] > maxElement) {
//             maxElement = arr[i];
//         }
//     }

//     printf("Maximum element in the array: %d\n", maxElement);

//     // Free allocated memory
//     free(arr);

//     return 0; // Return 0 to indicate successful execution
// }













// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int size;

//     // Input: Ask the user for the size of the arrays
//     printf("Enter the size for the arrays: ");
//     scanf("%d", &size);

//     // Dynamic memory allocation for the three arrays
//     int *arr1 = malloc(size * sizeof(int));
//     int *arr2 = malloc(size * sizeof(int));
//     int *arr3 = malloc(size * sizeof(int));

    // Check if memory allocation is successful
    // if (arr1 == NULL || arr2 == NULL || arr3 == NULL) {
    //     printf("Memory allocation failed\n");

    //     // Free allocated memory for arrays that were successfully allocated
    //     free(arr1);
    //     free(arr2);
    //     free(arr3);

    //     return 1; // Return an error code if allocation fails
    // }

    // Input values for the first array
//     printf("Enter %d elements for the first array:\n", size);
//     for (int i = 0; i < size; i++) {
//         printf("Element %d: ", i + 1);
//         scanf("%d", &arr1[i]);
//     }

//     // Input values for the second array
//     printf("Enter %d elements for the second array:\n", size);
//     for (int i = 0; i < size; i++) {
//         printf("Element %d: ", i + 1);
//         scanf("%d", &arr2[i]);
//     }

//     // Sum corresponding array elements and store in the third array
//     for (int i = 0; i < size; i++) {
//         arr3[i] = arr1[i] + arr2[i];
//     }

//     // Display the result in the third array
//     printf("Sum of corresponding elements in the third array:\n");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr3[i]);
//     }
//     printf("\n");

//     // Free allocated memory
//     free(arr1);
//     free(arr2);
//     free(arr3);

//     return 0; // Return 0 to indicate successful execution
// }











// #include <stdio.h>
// #include <stdlib.h>

// // Function to find the maximum element in an array
// int findMaximum(int *arr, int size) {
//     int max = arr[0]; // Assume the first element as the initial maximum

//     for (int i = 1; i < size; i++) {
//         if (arr[i] > max) {
//             max = arr[i]; // Update max if a larger element is found
//         }
//     }

//     return max;
// }

// int main() {
//     int size;

//     // Input: Ask the user for the size of the array
//     printf("Enter the size of the array: ");
//     scanf("%d", &size);

//     // Dynamic memory allocation for the array
//     int *arr = (int *)malloc(size * sizeof(int));

//     // // Check if memory allocation is successful
//     // if (arr == NULL) {
//     //     printf("Memory allocation failed\n");
//     //     return 1; // Return an error code if allocation fails
//     // }

//     // Input values for the array
//     printf("Enter %d elements for the array:\n", size);
//     for (int i = 0; i < size; i++) {
//         printf("Element %d: ", i + 1);
//         scanf("%d", &arr[i]);
//     }

//     // Find and display the maximum element using the function
//     int maxElement = findMaximum(arr, size);
//     printf("Maximum element in the array: %d\n", maxElement);

//     // Free allocated memory
//     free(arr);

//     return 0; // Return 0 to indicate successful execution
// }











// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     // Dynamic memory allocation for int variable
//     int *intVar = (int *)malloc(sizeof(int));

//     // Check if memory allocation is successful
//     if (intVar == NULL) {
//         printf("Memory allocation failed for int variable\n");
//         return 1; // Return an error code if allocation fails
//     }

//     // Dynamic memory allocation for char variable
//     char *charVar = (char *)malloc(sizeof(char));

//     // Check if memory allocation is successful
//     if (charVar == NULL) {
//         printf("Memory allocation failed for char variable\n");
//         free(intVar); // Free previously allocated memory
//         return 1; // Return an error code if allocation fails
//     }

//     // Dynamic memory allocation for float variable
//     float *floatVar = (float *)malloc(sizeof(float));

//     // Check if memory allocation is successful
//     if (floatVar == NULL) {
//         printf("Memory allocation failed for float variable\n");
//         free(intVar);   // Free previously allocated memory
//         free(charVar);  // Free previously allocated memory
//         return 1; // Return an error code if allocation fails
//     }

//     // Input values for the variables (you can modify this part as needed)
//     printf("Enter an integer: ");
//     scanf("%d", intVar);

//     printf("Enter a character: ");
//     scanf(" %c", charVar); // Note the space before %c to consume the newline character

//     printf("Enter a float: ");
//     scanf("%f", floatVar);

//     // Display the values
//     printf("Integer: %d\n", *intVar);
//     printf("Character: %c\n", *charVar);
//     printf("Float: %f\n", *floatVar);

//     // Free allocated memory
//     free(intVar);
//     free(charVar);
//     free(floatVar);

//     return 0;

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     // Dynamic memory allocation for int variable
//     int *intVar = (int *)malloc(sizeof(int));

//     // // Check if memory allocation is successful
//     // if (intVar == NULL) {
//     //     printf("Memory allocation failed for int variable\n");
//     //     return 1; // Return an error code if allocation fails
//     // }

//     // Dynamic memory allocation for char variable
//     char *charVar = (char *)malloc(sizeof(char));

//     // // Check if memory allocation is successful
//     // if (charVar == NULL) {
//     //     printf("Memory allocation failed for char variable\n");
//     //     free(intVar); // Free previously allocated memory
//     //     return 1; // Return an error code if allocation fails
//     // }

//     // Dynamic memory allocation for float variable
//     float *floatVar = (float *)malloc(sizeof(float));

//     // // Check if memory allocation is successful
//     // if (floatVar == NULL) {
//     //     printf("Memory allocation failed for float variable\n");
//     //     free(intVar);   // Free previously allocated memory
//     //     free(charVar);  // Free previously allocated memory
//     //     return 1; // Return an error code if allocation fails
//     // }

//     // Input values for the variables (you can modify this part as needed)
//     printf("Enter an integer: ");
//     scanf("%d", intVar);

//     printf("Enter a character: ");
//     scanf(" %c", charVar); // Note the space before %c to consume the newline character

//     printf("Enter a float: ");
//     scanf("%f", floatVar);

//     // Display the values
//     printf("Integer: %d\n", *intVar);
//     printf("Character: %c\n", *charVar);
//     printf("Float: %f\n", *floatVar);

//     // Free allocated memory
//     free(intVar);
//     free(charVar);
//     free(floatVar);

//     return 0;
// }




// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     // Dynamic memory allocation for int, char, and float variables
//     int *intVar = malloc(sizeof(int));
//     char *charVar = malloc(sizeof(char));
//     float *floatVar = malloc(sizeof(float));

//     // Input values for the variables (you can modify this part as needed)

//     printf("Enter an integer: ");
//     scanf("%d", intVar);

//     printf("Enter a character: ");
//     scanf(" %c", charVar); // Note the space before %c to consume the newline character

//     printf("Enter a float: ");
//     scanf("%f", floatVar);

//     // Display the values
//     printf("Integer: %d\n", *intVar);
//     printf("Character: %c\n", *charVar);
//     printf("Float: %f\n", *floatVar);

//     // Free allocated memory
//     free(intVar);
//     free(charVar);
//     free(floatVar);

//     return 0;
// }







// #include <stdio.h>

// // Function to search for an element in an array using pointers
// int searchElement(int *arr, int size, int target) {
//     for (int i = 0; i < size; i++) {
//         if (*arr == target) {
//             return i; // Return the index if the element is found
//         }
//         arr++; // Move the pointer to the next element
//     }
//     return -1; // Return -1 if the element is not found
// }

// int main() {
//     int arr[] = {10, 20, 30, 40, 50}; // Sample array
//     int size = sizeof(arr) / sizeof(arr[0]); // Calculate array size

//     int target = 20; // Element to search for

//     // Search for the element using the function
//     int result = searchElement(arr, size, target);

//     // Display the result
//     if (result != -1) {
//         printf("Element %d found at index %d\n", target, result);
//     } else {
//         printf("Element %d not found in the array\n", target);
//     }

//     return 0;
// }







#include <stdio.h>

// Function to calculate the sum of array elements using pointers
int calculateSum(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *arr; // Add the value pointed by arr to sum
        arr++; // Move the pointer to the next array element
    }
    return sum;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50}; // Sample array
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate array size

    // Calculate and display the sum using the function
    int sum = calculateSum(arr, size);
    printf("Sum of array elements: %d\n", sum);

    return 0;
}
