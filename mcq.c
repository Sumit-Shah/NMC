// #include <stdio.h>
// int main() {
// int x, y = 6, z = 6;
// x = y == z;
// printf("%d", x);
// return 0;
// }




// 2) What is the output of the following program?
// #include <stdio.h>
// void main() {
// int a=5, b=6;
// int result1 = a|b;
// int result2 = a&b;
// printf("%d and %d",result2,result1);
// }




// 3) What is the output of the following program?
// #include <stdio.h>
// int f(int a, int b){
// return a*2 + b%5;
// }
// void main() {
// int a=5, b=7;
// printf("%d",f(a,b));
// }



// 7) What is the output of the following code?
// #include <stdio.h>
// int main(){
// int i=10;
// printf("%d",i++);
// return 0;
// }





// 8) What is the output of the following program?
// #include <stdio.h>
// int main()
// {
// int y = 10000;
// int y = 34;
// printf("Hello World! %d\n",
// y);
// return 0;
// }





// 9) What is the output of the following program?
// #include <stdio.h>
// void main()
// {
// int x = 5 * 9 / 3 +
// 9;
// printf("%d",x);
// }






// 10) What is the output of d, a, b?
#include <stdio.h>
//Program 1
// int main()
// {
// int d, a = 1, b = 2;
// d = a++ + ++b;
// printf("%d, %d, %d", d, a,
// b);
// }




// 17) What is the output of the program?
// #include <stdio.h>
// #include <stdbool.h>
// int main() {
// while (true) {
// printf("Ram");
// }
// return 0;
// }





// 19) What is the output of the program?
// #include <stdio.h>
// int main()
// {
// short i;
// for (i = 1; i >= 0; i++)
// printf("%d\n", i);
// }







// // 25) What is the output of the following program?
// #include <stdio.h>
// void funct(int *a){
// *a= *a * 5;
// printf("*a=%d ",*a);
// }
// int main(){
// int a=6;
// funct(&a);
// printf("a=%d ",a);
// }
// // a) a=30 *a=30
// // b) a=6 *a= 6
// // c) a= 6 *a=30
// // d) a=30, *a= 6






// 26) What is the output of the following program?
#include <stdio.h>
void funct(int a){
a= a*6;
printf("a in funct is %d,",a);
}
int main(){
int a=6;
funct(a);
printf("a in main function is %d ",a);
return 0;
}
// a) a in funct is 6,a in main function is 6
// b) a in funct is 36,a in main function is 36
// c) a in funct is 36,a in main function is 10
// d) a in funct is 36,a in main function is 6
