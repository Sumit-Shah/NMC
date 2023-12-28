// 1. Write a void function which finds and prints the midpoint coordinates of a line. The 
// function should take in four parameters (x1, y1, x2 and y2).
//  xmid=(x1+x2)/2, ymid=(y1+y2)/2

// #include<stdio.h>
// #include<stdio.h>

// int main() {
//     int x1, y1, x2, y2, a, b;

//     printf("x1 : \n");
//     scanf("%d", &x1);

//     printf("y1 : \n");
//     scanf("%d", &y1);

//     printf("x2 : \n");
//     scanf("%d", &x2);

//     printf("y2 : \n");
//     scanf("%d", &y2);

//     a = (x1 + x2) / 2;
//     b = (y1 + y2) / 2;

//     printf("Mid Point  : (%d, %d)\n", a, b);

//     return 0;
// }





// 2. Write a function that takes two integers as arguments and return the greatest among them.
// #include<stdio.h>
// int main(){
//     int a, b ;
//     printf("Enter first number : ");
//     scanf("%d", &a);

//     printf("Enter Second number: ");
//     scanf("%d", &b);

//     (a>b) ? printf("First number is greatest. \n") : printf("Second number is greatest: \n");


//     return 0;
// }





// 3. Write a void function which takes one integer (n) as a parameter. Your function should 
// then print out all triangular numbers from 1 up to the nth term.

// #include<stdio.h>
// #include<math.h>

// int main() {
//     int n, r ;
//     printf("Enter a number : ");
//     scanf("%d", &n);
//     for (int i=1; i<=n; i++) {
//         int r = i * (i + 1)/2;
//         printf("%d", r);
//     }
//     return 0;
// }




// 4.Write a function named “velocityCalc” which returns an appropriate value for the 
// formula “v=u+at”, where v is the final velocity, u is the initial velocity ,a is the 
// acceleration and t is the time that has elapsed. Depending upon which variable is set to 
// “NAN” when the function is called , your function should work it out and return the 
// value.

#include<stdio.h>
#include<math.h>
float velocity(float v, float u, float a, float t) {
    if (isnan(v)) {
        return u + a * t;
    }
    else if(isnan(u)) {
        return v - (a * t);
    }
    else if(isnan(a)) {
        return (v - u) / t;
    }
    else if(isnan(t)) {
        return (v -u) / a;
    }else {
        return NAN;
    }
}
int main() {
    int v, u, a, t;
    printf("V : ");
    scanf("%f", &v);

    printf("U : ");
    scanf("%f", &u);

    printf("A : ");
    scanf("%f", &a);

    printf("T : ");
    scanf("%f", &t);

    float result = velocity(v, u, a, t);

    printf("Result : ", result);

    return 0;
}











// 5. Write a void function named “equations” which solves simultaneous equations. Your 
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

