#include<iostream>
using namespace std;

// void merge(int a[], int l, int m, int h)
// {
//     int left = l, right = m + 1;
//     int temp[h - l + 1];

//     int k = 0;
//     while (left <= m && right <= h)
//     {
//         if (a[left] < a[right])
//         {
//             temp[k++] = a[left++];
//         }
//         else
//         {
//             temp[k++] = a[right++];
//         }
//     }

//     while (left <= m)
//     {
//         temp[k++] = a[left++];
//     }

//     while (right <= h)
//     {
//         temp[k++] = a[right++];
//     }

//     for (int i = 0; i < k; i++)
//     {
//         a[l + i] = temp[i];
//     }
// }

// void merge_sort(int a[], int l, int h)
// {
//     if (l < h) // Correct the base condition
//     {
//         int mid = (l + h) / 2;
//         merge_sort(a, l, mid);      // Sort first half
//         merge_sort(a, mid + 1, h);  // Sort second half
//         merge(a, l, mid, h);        // Merge both halves
//     }
// }

// void bubble_sort(int a[], int n)
// {
//     for(int i = 0; i < n; i++)
//     {
//         for(int j = 0; j < n - i - 1; j++)
//         {
//             if (a[j] > a[j+1])
//             {
//                 swap(a[j], a[j+1]);
//             }
//         }
//     }

//     for(int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }
// }

// void selection_sort(int a[], int n)
// {
//     for(int i = 0; i < n; i++)
//     {
//         for(int j = i+1; j < n; j++)
//         {
//             if (a[i] > a[j])
//             {
//                 swap(a[i], a[j]);
//             }
//         }
//     }
//     for(int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }
// }

void insertion_sort(int a[], int n)
{
    for(int i = 1; i < n; i++)
    {
        int pivot = a[i];
        int j = i-1;
        while(j >= 0 && a[j] > pivot)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = pivot;
    }

    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // merge_sort(a, 0, n - 1);

    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << " ";
    // }

    //bubble_sort(a, n);
    //selection_sort(a, n);
    insertion_sort(a, n);
    return 0;
}
