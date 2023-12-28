// #include<stdio.h>

// //declaration/prototype
// void printHello();
// void printGoodbye();

// int main() {
//     printHello(); //fuction call
//     printGoodbye();
//     return 0;
// }

// //fuction declaration
// void printHello() {
//     printf("hello! \n");
// }

// void printGoodbye() {
//     printf("Goodbye : \n");
// }

//27 print 2 function Hello and Goodbye .


//28. Write a function that prints NAMASTE if user is Indian &
// BONJOUR if the user is French
// #include<stdio.h>
// void namaste();
// void bonjour();

// int main() {
//     printf("Enter f for Frech & n for Nepali. : ");
//     char ch;
//     scanf("%c", &ch);

//     if(ch == 'n') {
//         namaste();
//     } else {
//         bonjour();
//     }

//     return 0;
// }

// void namaste() {
//     printf("NAMASTE \n");
// }

// void bonjour() {
//     printf("BONJOUR\n");
// }



// PROPERTIES
//Execution always starts from main
//A function gets called directly or in directly from main
//There can be multiple functions ina program.


// #include<stdio.h>

// int sum(int a, int b);

// int main() {
//     int a, b;
//     printf("Enter first number : ");
//     scanf("%d", &a);
//     printf("Enter Second number : ");
//     scanf("%d", &b);

//     int s = sum(a, b);
//     printf("SUM is %d . ", s);
//     return 0;
// }

// int sum(int a, int b) {
//     return a + b;

// }



//TABLE BY FUNCTION
// #include<stdio.h>

// void printTable(int n);

// int main() {
//     int n;
//     printf("Enter number : ");
//     scanf("%d", &n);

//     printTable(n); //argument / actual parameter

//     return 0;
// }

// void printTable(int n) { //parameter / formal parameter
//     for(int i=1; i<=10; i++) {
//         printf("%d *  %d =  %d \n", n, i, i*n);
//     }
// }



// #include<stdio.h>

// void calculatePrice(float value);

// int main() {
//     float value = 100.00;
//     calculatePrice(value);
//     printf("value is : %f", value);
//     return 0;
// }

// void calculatePrice(float value) {
//     value = value + (0.18 * value);
//     printf("final price is : %f \n", value);
// }




//29.Use the library function to calculate the square of a number given by user.
// #include<stdio.h>
// #include<math.h>
// int main() {
//     int n ;

//     printf("Enter the number n : ");
//     scanf("%d",&n);

//     float result = pow(n, 2);

//     printf("%f", result);
//     return 0;
// }





// #include<stdio.h>
// #include<math.h>

// float squareArea(float side);
// float circleArea(float rad);
// float rectangleArea(float a,  float b);

// int main() {

//     float a = 5.0;
//     float b = 10.0;

//     printf("area is : %f\n", rectangleArea(a, b));


//     float side = 10.5;

//     printf("Area of square : %f\n", circleArea(side));


//     float rad = 8.5;

//     printf("Area of Circle : %f", circleArea(rad));


//     return 0;

// }

// float squareArea(float side) {
//     return side * side;
// }

// float circleArea(float rad) {
//     return 3.14 * rad * rad;
// }

// float rectangleArea(float a, float b) {
//     return a * b;
// }