// #include <stdio.h>
// //Age
// int main() {
//     int age;
//     printf("age : ");
//     scanf("%d", &age);
//     printf("age is : %d", age);
//     return 0;

// }




//Sum of two numbers
// #include <stdio.h>

// int main() {
//     int a, b;
//     printf("enter a");
//     scanf("%d", &a);

//     printf("enter b");
//     scanf("%d", &b);

//     int sum = a + b;
//     printf("Sum is : %d", sum);

//     return 0;
// }




// //Area of circle 
// #include<stdio.h>
// int main() {
//     float radius;
//     printf("Enter the radius : ");
//     scanf("%f", &radius);

//     printf("Area of Circle : %f", 3.14 * radius * radius);
//     return 0;
// }


// #include<stdio.h>
// #include<math.h>

// int main() {
//     printf("%d", 16%10);
//     return 0;
// }


// #include<stdio.h>
// #include<math.h>

// int main() {
//     int a = (int) 1.9999;
//     printf("%d \n", a);
//     return 0;
// }



// #include<stdio.h>
// #include<math.h>
// int main() {
//     printf("%d \n", 4>3 && 6>5);
//     return 0;
// }


//5.
// #include<stdio.h>
// #include<math.h>

// int main() {
//     int x;
//     printf("Enter the number: ");
//     scanf("%d", x % 2 == 0);
//     return 0;
// }





//7.
//a.int a = 8^8
// #include<stdio.h>
// #include<math.h>
// int main() {
//     printf("%d", 8^8);
// }

//int x; y = x;   -----Valid
// int x, y = x;  -----Invalid 
//  char stars = '***' ---Invalid implicit conversion

// #include<stdio.h>
// int main() {
//     int isSunday = 1;
//     int isSnowing = 1;
//     printf("%d \n", isSunday && isSnowing);
//     return 0;
// }


//If number is greater than 9 & less than 100-> true
// #include<stdio.h>
// int main() {
//     int x;
//     printf("Enter the number : ");
//     scanf("%d", &x);
//     printf("%d \n", x>9 && x<100);
//     return 0;
// }





//Home work 
//WRITE THE PROGRAM TO PRINT THE AVERAGE OF 3 NUMBERS.
// #include<stdio.h>
// #include<math.h>
// int main() {
//     int x , y , z;
//     printf("x : ");
//     scanf("%d", &x);
//     printf("y : ");
//     scanf("%d", &y);
//     printf("c : ");
//     scanf("%d", &z);

//     double a = (x + y +z) / 3.0;
//     printf("%f", a);


//     return 0;
// }


//CONDITIONAL STATEMENTS
//IF-ELSE

// #include <stdio.h>
// #include <math.h>

// int main() {
//     int age;
//     printf("Age : ");
//     scanf("%d", &age);

//     if (age > 18) {
//         prinf("Adult. \n");
//     }else {
//         printf("Not Adult. \n");
//     }
    
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>

// int main() {
//     int age;
//     printf("Age: ");
//     scanf("%d", &age);

//     if (age > 18) {
//         printf("Adult. Can Vote. Can Drink.\n");
//     } else {
//         printf("Not Adult.\n");
//     }

//     printf("Thak you");

//     return 0;
// }

//NESTED IF CONDITION
// #include<stdio.h>
// #include<math.h>
// int main() {
//     int number;
//     printf("Number : ");
//     scanf("%d", &number);
//     if (number >= 0) {
//         printf("+Ve  \n");
//         if (number % 2 == 0) {
//             printf("Even \n");
//         } else {
//             printf("Odd \n");
//         }
//     } else {
//         printf("Invalid \n");
//     };
//     return 0;
// }


// #include<stdio.h>
// #include<math.h>
// int main () {
//     int age;
//     printf("Age : ");
//     scanf("%d", &age);

//     if(age >= 18) {
//         printf("Adult \n");
//     }
//     else if (age > 13 && age < 18){
//         printf("Teenager  \n");
//     }
//     else {
//         printf("Child");
//     }
//     return 0;
// }



//TERNARY OPERATOR .

// condition ? doSomething if TRUE : doSomething if FALSE;

// #include<stdio.h>
// #include<stdio.h>
// int main () {
//     int age;
//     printf("Age : ");
//     scanf("%d", &age);
    
//     age >= 18 ? printf("Adult \n") : printf("Not Adult \n");
//     return 0;
// }




// //SWITCH CASE .

// #include <stdio.h>
// #include <math.h>
// int main() {
//     int day;
//     printf("Enter (1-7) : ");
//     scanf("%d", &day);

//     switch (day) {
//         case 1 : printf("Sunday.");
//                 break;
//         case 2 : printf("Monday. ");
//                 break;
//         case 3 : printf("Tuesday. ");
//                 break;
//         case 4 : printf("Wednesday. ");
//                 break;
//         case 5  : printf("Thurday.  ");
//                 break;
//         case 6  : printf("Friday. ");
//                 break;
//         case 7  : printf("Saturday. ");
//                 break;
//         default : printf("Invalid.");
//     }
//     return 0;
// }




// //9
// //PROGRAM TP CHECK PASS OR FAIL
// #include<stdio.h>
// #include<math.h>
// int main() {
//     int marks;

//     printf ("Marks : ");
//     scanf("%d", &marks);
//     (marks > 30) ? printf("PASS \n") : printf("FAILL \n");
//     return 0;
// }






// //UPPER CASE OR LOWER CASE 
// #include<stdio.h>
// #include<math.h>
// int main() {
//     char ch;
//     printf("Enter the character : ");
//     scanf("%c", &ch);

//     if(ch >= 'A' && ch <= 'Z') {
//         printf("UPPER CASE \n");
//     }
//     else if (ch >= 'a' && ch<= 'z') {
//         printf("LOWWER CASR \n");
//     }
//     else {
//         printf("INVALID \n");
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>

// int main() {
//     char ch;
//     printf("Enter the character: ");
//     scanf("%c", &ch);

    // if (ch >= 'A' && ch <= 'Z') {
//         // Convert to lowercase
//         ch = ch + 32;
//         printf("Converted to lowercase: %c\n", ch);
//     } else if (ch >= 'a' && ch <= 'z') {
//         printf("Lowercase\n");
//     } else {
//         printf("INVALID\n");
//     }

//     return 0;
// }





// #include<stdio.h>
// #include<math.h>
// int main(){
//     int i , j;
//     char character = 'A';
//     for(i=1; i<=5; i++){
//         for(j=1; j<=i; j++){
//             printf("%c", character);
//         }
//         character += 1;
//         printf("\n");
//     }
// }