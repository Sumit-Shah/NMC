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
// #include <stdio.h>
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







// 21) What is the output of the following program?
// #include <stdio.h>
// float isOdd(int n){
// if(n%2==1){
// return 1;
// }else{
// return 0;
// }
// }
// void main() {
// printf("%f",isOdd(7));
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
// a) a=30 *a=30
// b) a=6 *a= 6
// c) a= 6 *a=30
// d) a=30, *a= 6






// 26) What is the output of the following program?
// #include <stdio.h>
// void funct(int a){
// a= a*6;
// printf("a in funct is %d,",a);
// }
// int main(){
// int a=6;
// funct(a);
// printf("a in main function is %d ",a);
// return 0;
// }
// a) a in funct is 6,a in main function is 6
// b) a in funct is 36,a in main function is 36
// c) a in funct is 36,a in main function is 10
// d) a in funct is 36,a in main function is 6







// 27) What is the output of the following program?
// #include <stdio.h>
// int funct(int a){
// a= a*6;
// printf("a in funct is %d,",a);
// return a;
// }
// int main(){
// int a=6;
// a= funct(a);
// printf("a in main function is %d", a);
// return 0;
// }






// // 30) What will be the value of x?
// #include <stdio.h>
// void solve() {
// int x = printf("Shyam");
// printf(" %d", x);
// }
// int main() {
// solve();
// return 0;
// }





// 31) What will be the value of a and b?
// #include <stdio.h>
// void swap(int *a, int *b) {
// int t = *a;
// *a = *b;
// *b = t;
// }
// void function() {
// int a = 3, b = 5;
// swap(&a, &b);
// printf("%d %d", a, b);
// }
// int main() {
// function();
// return 0;
// }









// 32) What will be the value of a?
// #include <stdio.h>
// void function() {
// char ch[10] =
// "abcdefghij";
// int a= 0;
// for(int i = 0; i < 10; i++) {
// a += (ch[i] - 'a');
// }
// printf("%d", a);
// }
// int main() {
// function();
// return 0;
// }





// 33) What will be the output of the program?
// #include <stdio.h>

// void function() {
//     int first = 10, second = 20;
//     int third = first + second;

//     {
//         int third = second - first;
//         printf("%d ", third);
//     }

//     printf("%d", third);
// }

// int main() {
//     function();
//     return 0;
// }








// 34) What will be the output of the program?
// #include <stdio.h>
// void function() {
// int a = 3;
// int res = a++ + ++a + a++ + ++a;
// printf("%d", res);
// }
// int main() {
// function();
// return 0;
// }







// 36) What is the output of the following program?
// #include <stdio.h>
// int main() {
// char str1[30]="Harry";
// char str2[30];
// str2 = str1;
// printf("%s",str2);
// }







// 37) What is the output of the following program?
// #include <stdio.h>
// void main() {
// int a[3] = {5};
// int i;
// for(i=0;i<3;i++){
// printf("%d",a[i]);
// }
// }






// 38) What is the output of the following program?
// #include <stdio.h>
// int *p;
// int main()
// {
// int i = 5;
// p = &i;
// printf("%d, %x, %d",i,p,*p);
// return 0;
// }






// 39) What is the output of the following program?
// #include <stdio.h>
// int main()
// {
// int a[5] = {11,22,33,44,55};
// int *p;
// p = &a[0];
// p++;
// printf("%d, %d",*p,*(p+1));
// return 0;
// }
// a) 11, 22
// b) 22, 33
// c) 11, 33
// d) 22, 44








// 42) What is the output of the following program?
// #include <stdio.h>
// int main(){
// int A[5]= {1,2,3,4,5};
// printf("%d",sizeof(A)/sizeof(A[0]));
// }






// 44) What is the output of the following program?
// #include <stdio.h>
// int main(){
// int A[5]= {1,2,3,4,5};
// int *p;
// p= A;
// printf("%d",*(p+1));
// return 0;
// }






// 47) What will be the output of the program?
// #include <stdio.h>
// void main(){
// int *ptr=10;
// printf("Value of ptr:%d",*ptr);
// }




// 48) What will be the output of the program?
#include <stdio.h>
// #include <string.h>
// void main(){
// char name1[10]="ram";
// char name2[10]="Shyam";
// printf("String compare result:%d",strcmp(name1,name2));
// }




// 49) What will be the output of the program?
#include <stdio.h>
#include <string.h>
void main(){
char name1[10]="ram";
char name2;
printf("String copy result:%s",strcpy(name1,name2));
}
