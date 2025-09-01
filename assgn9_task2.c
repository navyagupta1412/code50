#include <stdio.h>

void reverseArray(int *arr, int size) 
{
    int *start = arr;         
    int *end = arr + size - 1;  
    while (start < end) 
    {
       
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}


int findMaxElement(int *arr, int size) 
{
    int *ptr = arr;       
    int max = *ptr;     
    
    for (int *p = arr + 1; p < arr + size; p++) 
    {
        if (*p > max)
        {
            max = *p;  
        }
    }
    return max;
}

int main() 
{
    int n;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements of the array:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    reverseArray(arr, n);
    
    printf("Reversed array: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", *(arr + i));  
    }
    printf("\n");

    
    int maxElement = findMaxElement(arr, n);
    
    printf("Maximum element: %d\n", maxElement);

    return 0;
}
