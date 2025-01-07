#include <stdio.h>
#include <stdlib.h>


int main() {
    int n, *arr, sum = 0;

    printf("Enter the number of elements");
    scanf("%d", &n);

    // allocating memory for n integrers
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Mmeory allocation failed.\n");
        return 1;
    }

    printf("Enter %d integers: \n", n);
    for (int i = 0; i < n; i ++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }


    printf("Sum of the elements: %d\n", sum);

    free(arr);
    
    return 0;


}