// #include<stdio.h>

// int sum(int n);

// int main() {
//     printf("sum is : %d", sum(5));
//     return 0;
// }

// //recursive function
// int sum(int n) {
//     if(n == 1) {
//         return 1;
//     }
//     int sumNm1 = sum(n-1); //sum of 1 to n.
//     int sumN = sumNm1 + n;
// }







//FACTORIAL OF A NUMBER n
// #include<stdio.h>

// int fact(int n);

// int main() {
//     int n;
//     printf("Enter a number : ");
//     scanf("%d", &n);
//     printf("factorial is : %d", fact(n));
//     return 0;
// }

// int fact(int n) {
//     if(n == 0) {
//         return 1;
//     }
//     int factNm1 = fact(n-1);
//     int factN = factNm1 * n;
//     return factN;
// }




//CONVERT TEMPERATURE.
// #include<stdio.h>
// #include<math.h>

// float convertTemp(float celsius);

// int main() {
//     int f;
//     printf("Enter the temperature in celcius : ");
//     scanf("%d", &f);
//     float far = convertTemp(f);
//     printf("far :%f", far);
//     return 0;

// }

// float convertTemp(float celsius) {
//     float far = celsius * (9.0/5.0) + 32;
//     return far;
// }





//33.Calculate the percentage of a marks 
// #include<stdio.h>
// #include<math.h>

// int calcPercentage(int science, int math, int sanskrit);

// int main() {
//     int sc = 98;
//     int math =95;
//     int sanskrit = 99;

//     printf("Percentage is : %d", calcPercentage(sc, math, sanskrit));
//     return 0;
// }

// int calcPercentage(int science, int math, int sanskrit) {
//     return ((science + math + sanskrit) / 3) ;
// }








//FIBONACCHI SERIES
#include<stdio.h>

// Function declaration
int fib(int n);

int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("Fibonacci of %d series is : %d", n, fib(n));
    return 0;
}

// Function definition
int fib(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    int fibNm1 = fib(n-1);
    int fibNm2 = fib(n-2);
    int fibN = fibNm1 + fibNm2;
    printf("fib of %d is : %d\n", n, fibN);
    return fibN;
}
