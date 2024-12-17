#include <iostream>
using namespace std;

void bubble_sort(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

void selection_sort(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                swap(a[i], a[j]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

void insertion_sort(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int pivot = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > pivot)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = pivot;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

void merge(int a[], int l, int m, int h)
{
    int left = l, right = m + 1, i = l;
    int temp[h - l + 1];
    while (left <= m && right <= h)
    {
        if (a[left] < a[right])
        {
            temp[i++] = a[left++];
        }
        else
        {
            temp[i++] = a[right++];
        }
    }
    while (left <= m)
    {
        temp[i++] = a[left++];
    }
    while (right <= h)
    {
        temp[i++] = a[right++];
    }

    for (int i = l; i <= h; i++)
    {
        a[i] = temp[i];
    }
}

void merge_sort(int a[], int l, int h)
{
    if (l < h)
    {
        int mid = (l + h) / 2;
        merge_sort(a, l, mid);
        merge_sort(a, mid + 1, h);
        merge(a, l, mid, h);
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

    // bubble_sort(a, n);
    // selection_sort(a, n);
    // insertion_sort(a, n);
    // merge_sort(a, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}