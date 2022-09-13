#include<stdio.h>
// Write a program in C to count a total number of duplicate elements in an array
int main () {

    int arr[100];
    int n;
    int i;
    int j;
    int count = 0;

    printf("put the number if elements stored in arry :");
    scanf("%d" , &n);

    printf("input %d elements in the array\n" , n);
    for(i=0; i<n; i++) {
        printf("Elements %d : " , i);
        scanf("%d" , &arr[i]);
    }

        for(i=0; i<n; i++) { // duplicate elements

            for(j=i+1; j<n; j++) {
            
                if(arr[i] == arr[j]) {
                    count++;
                    break;
                }
            }
        }
        printf("\nTotal number of duplicate elements found in array = %d\n", count);

 return 0;
}