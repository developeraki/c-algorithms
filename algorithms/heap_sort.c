
#include <stdio.h>

void max_heapify(int *a, int i, int n);
void heapsort(int *a, int n);
void build_maxheap(int *a, int n);

void max_heapify(int *a, int i, int n)
{
    int j, temp;
    temp = a[i];
    j = 2 * i;
    while (j <= n)
    {
        if (j<n && a[j + 1] > a[j])
        {
            j = j + 1;
        }
        if (temp > a[j])
        {
            break;
        }
        else if (temp <= a[j])
        {
            a[j / 2] = temp;
            j = 2 * j;
        }
    }
    a[j/2] = temp;
    return;
}

void heapsort(int *a, int n)
{
    int i, temp;
    for (i=n; i >= 2; i--)
    {
        temp = a[i];
        a[i] = a[1];
        a[1] = temp;
        max_heapify(a, 1, i - 1);
    }
}

void build_maxheap(int *a, int n)
{
    int i, temp;
    for (i = n / 2; i >= 1; i--)
    {
        max_heapify(a, i, n);
    }
}

int main()
{
    int n, i;
    printf('number of elements :\n');
    scanf('%d', &n);
    int a[20];

    for (i=1; i <= n; i++)
    {
        printf('enter elements :\n');
        scanf("%d", a + i);
    }

    build_maxheap(a, n);
    heapsort(a, n);
    printf('sorted output :\n');
    
    for (i = 1; i <= n; i++)
    {
        printf('%d\n', a[i]);
    }

    getchar();
    return;
}

// aki's development.   2023
