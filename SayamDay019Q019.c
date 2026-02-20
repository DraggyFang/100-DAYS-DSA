// Problem: Given an array of integers, find two elements whose sum is closest to zero.
// 
// Input:
// - First line: integer n
// - Second line: n space-separated integers
// 
// Output:
// - Print the pair of elements whose sum is closest to zero
// 
// Example:
// Input:
// 5
// 1 60 -10 70 -80
// 
// Output:
// -10 1
// 
// Explanation: Among all possible pairs, the sum of -10 and 1 is -9, which is the closest to zero compared to other pairs.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    
    for (int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    
    int minSum=arr[0]+arr[1];
    int elem1=arr[0];
    int elem2=arr[1];
    
    for (int i=0; i<n-1; i++) {
        for (int j=i+1; j<n; j++) {
            int sum=arr[i]+arr[j];
            if (abs(sum)<abs(minSum)) {
                minSum=sum;
                elem1=arr[i];
                elem2=arr[j];
            }
        }
    }
    
    if (elem1<elem2) {
        printf("%d %d\n",elem1,elem2);
    } else {
        printf("%d %d\n",elem2,elem1);
    }
    
    return 0;
}