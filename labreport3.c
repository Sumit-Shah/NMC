

// LAB REPORT – Week3

// Attempt all questions
// 1. WAP to find the largest element of an array.
#include <stdio.h>

int main() {
    // Declare variables
    int n;
    double arr[10];

    // Input the number of elements (1 to 10)
    printf("Enter the number of elements (1 to 10): ");
    scanf("%d", &n);

    // Input elements from the user
    for (int i = 0; i < n; ++i) {
        printf("Enter number %d: ", i + 1);
        scanf("%lf", &arr[i]);
    }

    // Find the largest element and store it in arr[0]
    for (int i = 1; i < n; ++i) {
        if (arr[0] < arr[i]) {
            arr[0] = arr[i];
        }
    }

    // Output the result
    printf("Largest element = %.2lf", arr[0]);

    return 0;
}




// 2. Write a program to check whether two given strings are an anagram.
//Two strings are anagram of each other, if we can rearrange 
//characters of one string to form another string. All the characters 
//of one string must be present in another string and should appear same 
//number of time in other string. Strings can contain any ASCII characters.
//Example : rescued and secured, resign and singer, stone and tones, 
//pears and spare, ELEVEN PLUS TWO and TWELVE PLUS ONE, upper to form super, 

// # include <stdio.h>
// # include <string.h>

// int asciiDifference(char str[], char count[], int length){
//     int i, asciiNum, difference;
//     for (i = 0; i < length; i++){
//         asciiNum = str[i];
//         if ((asciiNum >= 97) && (asciiNum <= 122)){
//             asciiNum -= 32;
//         }
//         difference = asciiNum - 65;
//         count[difference]++;
//     }
// }

// int checkIfAnagram(char str1[], char str2[]){
//     int l1, l2, i;
//     l1 = strlen(str1);
//     l2 = strlen(str2);
//     if (l1 != l2){
//         return 0;
//     }
//     char count1[26] = {0}, count2[26] = {0};
//     asciiDifference(str1, count1, l1);
//     asciiDifference(str2, count2, l2);    
//     for (i = 0; i < 26; i++){
//         if (count1[i] != count2[i]){
//             return 0;
//         }
//     }
//     return 1;    
// }

// int main(){
//     char str1[] = "stone";
//     char str2[] = "tones";
//     int isAnagram;
//     isAnagram = checkIfAnagram(str1, str2);
//     if (isAnagram){
//         printf("%s and %s are anagrams", str1, str2);
//     }else{
//         printf("%s and %s are not anagrams", str1, str2);
//     }
// }






// 3. Write a program to print all unique elements in an array. For example,a[ ] =
// {1,2,4,8,4,2,4,9,6} answer : 1,2,4,8,9,6.
// #include <stdio.h>

// // Function to print unique elements in an array
// void printUniqueElements(int arr[], int size) {
   

//     for (int i = 0; i < size; ++i) {
//         int isUnique = 1; // Assume the element is unique initially

//         // Check if the current element is repeated before
//         for (int j = 0; j < i; ++j) {
//             if (arr[i] == arr[j]) {
//                 isUnique = 0; // Not unique if found in previous elements
//                 break;
//             }
//         }

//         // Print the unique element
//         if (isUnique) {
//             printf("%d ", arr[i]);
//         }
//     }
//     printf("Unique elements in the array: ");
// }

// int main() {
//     int size;

//     // Input the size of the array
//     printf("Enter the size of the array: ");
//     scanf("%d", &size);

//     // Declare an array of the given size
//     int array[size];

//     // Input elements of the array
//     printf("Enter %d elements:\n", size);
//     for (int i = 0; i < size; i++) {
//         scanf("%d", &array[i]);
//     }

//     // Call the function to print unique elements
//     printUniqueElements(array, size);

//     return 0;
// }






// 4. Write a program to sort an array elements in ascending order.
// #include <stdio.h>

// int main() {
//     // Array initialization
//     int arr[] = {50, 20, 80, 70, 10};
//     int temp = 0;
    
//     // Calculate the length of the array
//     int length = sizeof(arr) / sizeof(arr[0]);

//     // Display original array
//     printf("Original array elements: \n");
//     for (int i = 0; i < length; i++) {
//         printf("%d ", arr[i]);
//     }
    
//     // Bubble sort to arrange elements in ascending order
//     for (int i = 0; i < length - 1; i++) {
//         for (int j = i + 1; j < length; j++) {
//             if (arr[i] > arr[j]) {
//                 // Swap elements if they are in the wrong order
//                 temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }

//     printf("\n");

//     // Display sorted array
//     printf("Array elements sorted in ascending order: \n");
//     for (int i = 0; i < length; i++) {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }







// 5. Write a program to count and find the sum of all the numbers in the array which
// are exactly divisible by 5 and not divisible by 2 and 3.


// #include <stdio.h>

// int main() {
//     // Maximum size of the array
//     const int MAX_SIZE = 100;

//     // Array initialization
//     int arr[MAX_SIZE];

//     // Input the number of elements
//     int length;
//     printf("Enter the number of elements: ");
//     scanf("%d", &length);

//     // Input array elements
//     printf("Enter array elements:\n");
//     for (int i = 0; i < length; i++) {
//         printf("Enter element %d: ", i + 1);
//         scanf("%d", &arr[i]);
//     }

//     // Count and sum variables
//     int count = 0;
//     int sum = 0;

//     // Iterate through the array
//     for (int i = 0; i < length; i++) {
//         // Check if the number is exactly divisible by 5, not divisible by 2 and 3
//         if (arr[i] % 5 == 0 && arr[i] % 2 != 0 && arr[i] % 3 != 0) {
//             count++; // Increment count
//             sum += arr[i]; // Add to the sum
//         }
//     }

//     // Display the count and sum
//     printf("\nCount of numbers divisible by 5 and not divisible by 2 and 3: %d\n", count);
//     printf("Sum of numbers divisible by 5 and not divisible by 2 and 3: %d\n", sum);

//     return 0;
// }





// 6. WAP reads two 2-D arrays, adds the corresponding elements and displays the