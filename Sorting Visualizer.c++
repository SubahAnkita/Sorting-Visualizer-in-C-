#include <bits/stdc++.h>
#include <direct.h>
#include "windows.h"
using namespace std;

// Diplay array
void DisplayChart(int arr[], int n, int maxi)
{
    for (int i = maxi; i >= 1; i--)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j] >= i)
            {
                printf("||||\t");
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }
    cout << endl;
}

void DisplayChoice()
{
    cout << "Enter your choice:" << endl;
    cout << "Press 1: Selection Sort:" << endl;
    cout << "Press 2: Bubble Sort:" << endl;
    cout << ">> " << endl;
}

// selection Sort
void selectionSort(int arr[], int n, int maxi)
{
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        if (min_idx != i)
            swap(arr[min_idx], arr[i]);

        DisplayChart(arr, n, maxi);
        Sleep(2000);
        system("CLS");
        cout << endl;
    }
}

void bubbleSort(int arr[], int n, int maxi)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                DisplayChart(arr, n, maxi);
                Sleep(2000);
                system("CLS");
                cout << endl;
            }
        }
    }
}

int main()
{
    cout << "Enter the size of the Array: ";
    int n;
    cin >> n;
    system("CLS");
    cout << "Enter the Elements of the array" << endl;
    int arr[n];
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }
    system("CLS");
    int choice;

    int run = 3;
    while (run--)
    {
        DisplayChoice();
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Selection Sort:" << endl;
            DisplayChart(arr, n, maxi);
            cout << endl;
            Sleep(2000);
            selectionSort(arr, n, maxi);
            break;
        case 2:
            cout << "Bubble Sort:" << endl;
            DisplayChart(arr, n, maxi);
            cout << endl;
            Sleep(2000);
            bubbleSort(arr, n, maxi);
            break;
        default:
            cout << "Wrong Choice..." << endl;
            break;
        }
    }
    system("CLS");
    system("pause");
    return 0;
}
