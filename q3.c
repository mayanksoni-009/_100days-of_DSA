#include <stdio.h>

int main() 
{
    int n, k;
    int found = 0, index = -1;
    int comparisons = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter key to search: ");
    scanf("%d", &k);

    for (int i = 0; i < n; i++) 
    {
        comparisons++;
        if (arr[i] == k) 
        {
            found = 1;
            index = i;
            break;
        }
    }

    if (found) 
    {
        printf("Found at index %d\n", index);
    } 
    else 
    {
        printf("Not Found\n");
    }

    printf("Comparisons = %d\n", comparisons);

    return 0;
}
