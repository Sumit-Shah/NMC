// #include<stdio.h>
// #include<math.h>
// int main() {
//     printf("Hellow World");
//     return 0;
// }

//    int i, sum = 0;
//
//    for(i = 1; i <= 10; i++) {
//        sum = sum + i;
//        printf("%d, ", i);
//    }
//
//    printf("sum: %d\n", sum);
//    return 0;
//}

// #include <stdio.h>

// int main() {
//     // Declare a variable to store the character
//     char character;
//
//     // Get input from the user
//     printf("Enter a character: ");
//     scanf("%c", &character);
//
//     // Check if the character is uppercase
//     if (character >= 'A' && character <= 'Z') {
//         // Convert to lowercase
//         character = character + 32;
//     }
//
//     // Print the result
//     printf("The character in lowercase is: %c\n", character);
//
//     return 0;
// }

// factorial

// int main() {
//     int b, c;
//     b = c = 1;
//     int a = b + c;
//     int power = pow(b,c);
//     printf(a)
//     return 0;
// }

// LOOP
#include <stdio.h>

// int main() {
//     for(int i=1; i<=100; i++) {
//         printf("Jay Shree Ram \n");
//     }
//     return 0;
// }

// int main() {
//     for(int i=1; i<=100; i++) {
//         printf("%d \n",i);
//     }
//     return 0;
// }

// int main() {
//   //i = iterator , counter.
//     for(int i=10; i>=1; i--) {
//         printf("%d \n",i);
//     }
//     return 0;
// }

// int main() {
//     for(int i=0; i<=10; i++) {
//         printf("%d \n", i);
//     }
//     return 0;
// }

// INCREMENT OPERATOR
//++i (PRE-INCREMENT) --Increase then use.
// i++ (POST-INCREEMNT) --Use then increase.

// #include<stdint.h>
// int main() {
//     int i = 1;

//     // printf("%d \n", i++); //use , then increase.
//     // printf("%d", i);

//     printf("%d \n", ++i); // increase , then use.
//     printf("%d", i);
//     return 0;
// }

// DECREMENT OPERATOR

//--i (PRE DECREMENT)
// i-- (POST DECREMENT)

// #include <stdint.h>
// int main() {
//     int i = 1;

//     // printf("%d \n", i--); //use , then decrese.
//     // printf("%d", i);

//     printf("%d \n", --i); // decrese , then use.
//     printf("%d", i);

//     return 0;
// }

// SPECIAL THINGS
// -Increment Operator
// -Decrement Operator
// -Loop counter can be float or even character
// -Infinite loop

// #include<stdio.h>
// int main() {
//     for(float i=1.0; i<=5.0; i++) {
//         printf("%f \n", i);
//     }

//     for(char ch='a'; ch<='z'; ch++) {
//         printf("%c \n", ch);
//     }
//     return 0;
// }

// WHILE LOOP
// While(condition){
//     //something
// }

// #include<stdio.h>
// int main() {
//     int i=1;
//     while(i<=5) {
//         printf("Hello World\n");
//         i++;
//     }
//     return 0;
// }

// 14.
// print the numbers from 0 to n (givrn by user.)

// #include<stdio.h>
// int main() {
//     int n;
//     printf("Enter the number. : ");
//     scanf("%d", &n);
//     for(int i=0; i<=n; i++) {
//         printf("%d\n", i);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main() {
//     int n;
//     printf("Enter a number : ");
//     scanf("%d", &n);

//     int i=0;
//     while(i <= n) {
//         printf("%d \n",i);
//         i++;
//     }

//     return 0;
// }

// DO WHILE LOOP
//  do {
//      //do something
//  } while (condition);
//  #include<stdio.h>
//  int main(){
//      // //for 1-5
//      // int i = 1;
//      // do {
//      //     printf("%d\n", i);
//      //     i++;
//      // }while(i<=5);

//     // //for 5-1
//     int i = 5;
//     do {
//         printf("%d\n", i);
//         i--;
//     }while(i>=0);

//     return 0;
// }

// #include<stdio.h>
// int main() {
//     int marks[3];
//     printf("physics : ");
//     scanf("%d", &marks[0]);

//     printf("Chem : ");
//     scanf("%d", &marks[1]);

//     printf("Bio : ");
//     scanf("%d", &marks[2]);

//     // printf("%d", &marks)

//     printf("phy = %d, chem = %d, math = %d", marks[0], marks[1], marks[2]);

//     return 0;

// }

// write a program to enter price of 3 items & print their final cost

// #include<stdio.h>

//     float calculate(float a,  float b, float c) {
//         float result = (a + b + c) + ((a + b + c) * 0.18);

//     return result;}
// int main() {
//     float price[3];
//     // printf("Vatt : ");
//     // scanf("%f", &price[0]);

//     // printf("Dall : ");
//     // scanf("%f", &price[1]);

//     // printf("Tarkari : ");
//     // scanf("%f", &price[2]);

//     // WE DO NOT NEED THREE VARIABLES .
//     printf("Enter Three prices : ");
//     scanf("%f", &price[0]);
//     scanf("%f", &price[1]);
//     scanf("%f", &price[2]);

//     float final =  calculate(price[0], price[1], price[2]);

//     printf("AMOUNT WITH VAT : %f", final);

//     return 0;

// }

// CORRECTED CODE
// #include<stdio.h>

// #define VAT_RATE 0.18

// // Function to calculate the final cost with VAT
// float calculateFinalCost(float item1, float item2, float item3) {
//     float subtotal = item1 + item2 + item3;
//     float totalCost = subtotal + (subtotal * VAT_RATE);
//     return totalCost;
// }

// int main() {
//     float price[3];

//     // User input
//     printf("Enter the price for item 1: ");
//     scanf("%f", &price[0]);

//     printf("Enter the price for item 2: ");
//     scanf("%f", &price[1]);

//     printf("Enter the price for item 3: ");
//     scanf("%f", &price[2]);

//     // Calculate final cost
//     float finalCost = calculateFinalCost(price[0], price[1], price[2]);

//     // Display the result
//     printf("Total cost with VAT: %.2f\n", finalCost);

//     return 0;
// }

#include <stdio.h>

// INTEGER
//  int main() {
//      int age = 24;
//      int *ptr = &age;
//      printf("ptr = %u\n", ptr);
//      ptr++;
//      printf("ptr = %u\n", ptr);
//      ptr--;
//      printf("ptr = %u\n", ptr);
//      return 0;
//  }

// FLOAT
//  int main() {
//      float age = 100.00;
//      float *ptr = &age;
//      printf("ptr = %u\n", ptr);
//      ptr++;
//      printf("ptr = %u\n", ptr);
//      ptr--;
//      printf("ptr = %u\n", ptr);
//      return 0;
//  }

// CHAR
//  int main() {
//      char age = '*';
//      char *ptr = &age;
//      printf("ptr = %u\n", ptr);
//      ptr++;
//      printf("ptr = %u\n", ptr);
//      ptr--;
//      printf("ptr = %u\n", ptr);
//      return 0;
//  }

// COMPARISION OF POINTER
//  #include<stdio.h>

// int main() {
//     int age = 24;
//     int _age = 24;
//     int *ptr = &age;
//     int *_ptr = &_age;

//     printf("Difference = %u \n", ptr - _ptr);
//     _ptr = &age;
//     printf("Comparision = %u\n", ptr == _ptr);
//     return 0;
// }

// #include<stdio.h>
// int main() {

//     int class[5];

//     //input
//     int *ptr = &class[0];
//     for(int i=0; i<5; i++) {
//         printf("%d index : ", i);
//         // scanf("%d", (ptr+i));
//         scanf("%d", &class[i]);

    // }

    //output
    // for(int i=0; i<5; i++) {
    //     printf("%d index = %d\n", i, *(ptr+i));
    // }
    // return 0;
// }

// ARRAYS AS A FUNCTION ARGUMENTS
//  #include<stdio.h>
//  // void printNumber(int arr[], int n);
//  void printNumber(int * arr, int n);

// int main() {
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     printNumber(arr, 6);
//     return 0;
// }

// // void printNumber(int arr[], int n) {
// void printNumber(int *arr, int n) {
//     for(int i=0; i<n; i++) {
//         printf("%d \t", arr[i]);
//     }
//     printf("\n");

// #include <stdio.h>
// int main()
// {
//     // 2 * 3
//     int marks[2][3];
//     marks[0][0] = 10;
//     marks[0][1] = 20;
//     marks[0][2] = 30;

//     marks[1][0] = 40;
//     marks[1][1] = 50;
//     marks[1][2] = 60;

//     printf("%d", marks[1][0]);

//     return 0;
// }






//COUNT TH ODD NUMBER OF ARRAY
// #include<stdio.h>

// int countOdd(int arr[], int n);

// int main() {
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     printf("%d", countOdd(arr, 6));
//     return 0;
// }

// int countOdd(int arr[], int n) {
//     int count = 0;
//     for(int i=0; i<n; i++) {
//         if(arr[i] % 2 != 0) {
//             count++;
//         }
//     }
//     return count;
// }
