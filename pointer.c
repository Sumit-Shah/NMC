// #include <stdio.h>

// int main() {
//     int age = 24;
//     int *ptr = &age;
    // int _age = *ptr;

    // printf("%d", _age);


//ADDRESSS
    // printf("%p\n", &age);

    // printf("%u\n", &age);


    // printf("%u\n", ptr);

    // printf("%u\n", &ptr);
    




//VALUE
    // printf("%d\n", age);
    // printf("%d\n", *ptr);
    // printf("%d\n", *(&age));



//     return 0;
// }






// #include<stdio.h>
// int main() { f
//     int x;
//     int *ptr;

//     ptr = &x;
//     *ptr = 0;

//     printf("x = %d\n", x);
//     printf("*ptr = %d\n", *ptr);

//     *ptr += 5;
//     printf("x = %d\n", x);
//     printf("*ptr = %d\n", *ptr);


//     (*ptr)++;
//     printf("x = %d\n", x);
//     printf("*ptr = %d \n", *ptr);
    

//     return 0;
// }







//POINTER TO POINTER.
// #include<stdio.h>
// int main() {
//     int i = 5;
//     int *ptr = &i;
//     int **pptr = &ptr;
//     printf("%d", **pptr);
//     return 0;
// }





//SWAPPING 
// #include<stdio.h>

// void square(int n);
// void _square(int * n);

// int main() {
//     int number = 4;
//     square(number);
//     printf("number = %d\n", number);

//     _square(&number);
//     printf("number = %d\n", number);
//     return 0;
// }

// //CALL BY VALUE
// void square(int n) {
//     n = n * n;
//     printf("Square = %d\n", n);
// }

// //CALL BY REFERENCE 
// void _square(int * n) {
//     *n = (*n) * (*n);  //4 * 4
//     printf("Square = %d\n", *n);
// }









//38
#include<stdio.h>

void swap(int a, int b);

int main() {
    int x = 3, y = 5;
    swap(x, y);
    printf("x = %d  & y = %d\n", x, y);

    return 0;
}

//CALL BY VALUE
void swap(int a, int b) {
    int t = a;
    a = b;
    b = a;
    printf("a = %d  & b = %d\n", a, b);
}








// Write a program in C to store n elements in an array and print the elements using
// pointer.

// #include<stdio.h>
// int main() {
//     int data[5];

//     printf("Enter elements : \n");
//     for(int i=0; i<5; i++)
//         scanf("%d", data + i);

//     printf("You entered : \n");
//     for(int i=0; i<5; i++)
//         printf("%d\n", *(data + i));
//     return 0;
// }





