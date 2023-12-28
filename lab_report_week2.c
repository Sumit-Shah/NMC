
    // 5CS021 – Numerical Methods and Concurrency
    // LAB REPORT – Week2
    // Attempt all questions

    // #include<stdio.h>
    // #include<math.h>
    // // 1. Write a C program to find cube of a number using function.
    // int main() {
    //     int n;
    //     printf("Enter the number : ");
    //     scanf("%d", &n);
    //     int result = pow(n, 3);
    //     printf("Cube of a number : %d", result);
    //     // printf("Cube of %d is %d " , n , (n*n*n) );
    //     return 0;
    // }



    // 2. Write a program in C to swap two numbers using function.

// #include <stdio.h>


// void swap(int *, int *);

// int main() {
//     int n1, n2;
//     printf("Swap two numbers using a function\n");
    
//     printf("Input the first number: ");
//     scanf("%d", &n1);
//     printf("Input the second number: ");
//     scanf("%d", &n2);

//     printf("Before swapping: n1 = %d, n2 = %d\n", n1, n2);
//     swap(&n1, &n2);

//     printf("After swapping: n1 = %d, n2 = %d\n", n1, n2);

//     return 0;
// }

// void swap(int *p, int *q) {
//     int tmp;
//     tmp = *p;
//     *p = *q;
//     *q = tmp;
// }






    // 3. Write a void function which finds and prints the midpoint coordinates of a line. The function
    // should take in four parameters (x1, y1, x2 and y2).
    // xmid=(x1+x2)/2, ymid=(y1+y2)/2

    // #include<stdint.h>
    // #include<math.h>
    // int main() {
    //     int x1, y1, x2, y2, xmid, ymid;
    //     printf("Midpoint coordinates of a line.\n");
    //     printf("x1 = ");
    //     scanf("%d", &x1);
    //     printf("y1 = ");
    //     scanf("%d", &y1);
    //     printf("x2 = ");
    //     scanf("%d", &x2);
    //     printf("y2 = ");
    //     scanf("%d", &y2);

    //      xmid = (x1+x2)/2;
    //      ymid = (y1+y2)/2;

    //     printf("Mid point is (%d , %d)", xmid,ymid);

    // return 0;

    // }
    
    



    // 4. Write a program in C to check Armstrong and perfect numbers using the function.
    // #include<stdio.h>
    // #include<math.h>

    // int checkArmstrong(int n);
    // int checkPerfect(int n);

    // int main() {
    //     int n;
    //     printf("Check Armstrong and perfect numbers : \n ");
        
    //     printf("Enter a number : ");
    //     scanf("%d", &n);

        // //Calling the Armstrong() function
        // if(checkArmstrong(n))
        // {
        //     printf("The %d is an Armstrong number.\n", n);
        // } else {
        //     printf("The %d is not an Armstrong number.\n", n);
        // }

        //Calling the checkPerfect() function
    //     if(checkPerfect(n))
    //     {
    //         printf("The %d is a perfect number . \n", n);
    //     } else {
    //         printf("The %d is not a perfect number . \n", n);
    //     }
    //     return 0;
    // }



    // // Checks whether a three digits number is Armstrong number or not. 
    // //An Armstrong number is an n-digit number that is equal 
    // //to the sum of the n-th powers of its digits.
    // int checkArmstrong(int n)
    // {
    //     int ld, sum, num;
    //     sum = 0;
    //     num = n;
    //     while (num!=0)
    //     {
    //         ld = num % 10;
    //         sum += ld * ld * ld;
    //         num = num/10;
    //     }
    //     return (n == sum);
        
    // }




    // // Checks whether the number is perfect number or not. 
    // //a perfect number is a positive integer that is equal to 
    // //the sum of its positive divisors excluding the number itself
    // int checkPerfect(int n)
    // {
    //     int i, sum, num;
    //     sum = 0;
    //     num = n;
    //     for(i=1; i<num; i++)
    //     {
    //         if(num%i == 0)
    //         {
    //             sum += i;
    //         }
    //     }
    //     return (n == sum);
    // }





// #include <stdio.h>
// #include <math.h>

// int countDigits(int num){
//     int length = 0;
//     while (num != 0){    
//         num /= 10;
//         length++;
//     }
//     return length;
// }

// void checkPerfect(int num){
//     int originalNum, i = 1, finalNum = 0;
//     num = originalNum;
//     for (i; i < originalNum; i++){
//         if (num % i == 0){            
//             finalNum += i;
//         }
//     }
//     if (originalNum == finalNum){
//         printf("%d is a Perfect number\n", originalNum);
//     }else{
//         printf("%d is not a Perfect number\n", originalNum);
//     }
// }

// void checkArmstrong(int num){
//     int originalNum, rem, length = 0, finalNum = 0;
//     originalNum = num;
//     length = countDigits(num);
//     printf("length %d\n", length);
//     while (num != 0){
//         rem = num % 10;
//         finalNum += pow(rem, length);
//         num /= 10;
//     }
//     if (originalNum == finalNum){
//         printf("%d is an Armstrong number\n", originalNum);
//     }else{
//         printf("%d is not an Armstrong number\n", originalNum);
//     }
// }

// void main(){
//     int num, originalNum, rem, length = 0, finalNum = 0;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     checkArmstrong(num);
//     checkPerfect(num);    
// }





    // 5. Write a function named “velocityCalc” which returns an appropriate value for the formula
    // “v=u+at”, where v is the final velocity, u is the initial velocity, a is the acceleration and t is
    // the time that has elapsed. Depending upon which variable is set to “NAN” when the
    // function is called, your function should work it out and return the value.

// #include <stdio.h>
// #include <math.h>

// float velocityCalc(float u, float a, float t, float v) {
//     // Check which variable is set to NaN
//     if (isnan(v)) {
//         // Calculate final velocity (v)
//         return u + a * t;
//     } else if (isnan(u)) {
//         // Calculate initial velocity (u)
//         return v - a * t;
//     } else if (isnan(a)) {
//         // Calculate acceleration (a)
//         return (v - u) / t;
//     } else if (isnan(t)) {
//         // Calculate time (t)
//         return (v - u) / a;
//     } else {
//         // If none of the variables are set to NaN, return an error message
//         printf("Invalid input. Set one variable to NaN for calculation.\n");
//         return 0; // You may want to handle errors differently based on your needs
//     }
// }

// int main() {
//     // Example usage:
//     // Calculates time
//     printf("u = %f\n", velocityCalc(NAN, 2.0, 3.0, 20.0));
//     printf("a = %f\n", velocityCalc(10.0, NAN, 5.0, 20.0));
//     printf("t = %f\n", velocityCalc(10.0, 2.0, NAN, 20.0));
//     printf("v = %f\n", velocityCalc(10.0, 2.0, 30.0, NAN));
//     return 0;
// }





    
    // 6. Write a void function named “equations” which solves simultaneous equations. Your
    // program will take six parameters. E.g. function(double a, double b, double c, double d,
    // double e, double f){}. By solving simultaneous equations, you are finding where the two
    // lines cross each other, so your function should print an x and y coordinate.
    // ax+by=c …...(i)
    // dx+ey=f........(ii)
    // a = number in front of x of equation one
    // b = number in front of y of equation one
    // c = constant of equation one
    // d = number in front of x of equation two
    // e = number in front of y of equation two
    // f = constant of equation two


    
// #include <stdio.h>
// #include <math.h>

// void linSolve(double, double, double, double, double, double);
// int main() {
//     int x1, y1, x2, y2, c1, c2;
//     printf("x of equation 1:");
//     scanf("%d", &  x1);
//     printf("y of equation 1:");
//     scanf("%d", &y1);
//     printf("x of equation 2:");
//     scanf("%d", &x2);
//     printf("y of equation 2:");
//     scanf("%d", &y2);
//     printf("constant of equation 1:");
//     scanf("%d", &c1);
//     printf("constant of equation 2:");
//     scanf("%d", &c2);
//     linSolve(x1, y1, c1, x2, y2, c2);
//     return 0;
// }

// void linSolve(double a, double b, double c, double d, double e, double f){
//     double x, y;
//     x = (f * b - e * c) / (b * d - a * e);
//     y = (a * f -  d * c) / (e * a - d * b);
//     printf("The x-coordinate is:%.2lf \n", x);
//     printf("THe y-coordiante is:%.2lf \n", y);
// }











#include <stdio.h>
#include <math.h>

int countDigits(int num){
    int length = 0;
    while (num != 0){    
        num /= 10;
        length++;
    }
    return length;
}

void checkPerfect(int num){
    int originalNum, i = 1, finalNum = 0;
    num = originalNum;
    for (i; i < originalNum; i++){
        if (num % i == 0){            
            finalNum += i;
        }
    }
    if (originalNum == finalNum){
        printf("%d is a Perfect number\n", originalNum);
    }else{
        printf("%d is not a Perfect number\n", originalNum);
    }
}

void checkArmstrong(int num){
    int originalNum, rem, length = 0, finalNum = 0;
    originalNum = num;
    length = countDigits(num);
    printf("length %d\n", length);
    while (num != 0){
        rem = num % 10;
        finalNum += pow(rem, length);
        num /= 10;
    }
    if (originalNum == finalNum){
        printf("%d is an Armstrong number\n", originalNum);
    }else{
        printf("%d is not an Armstrong number\n", originalNum);
    }
}

void main(){
    int num, originalNum, rem, length = 0, finalNum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    checkArmstrong(num);
    checkPerfect(num);    
}