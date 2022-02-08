// Assignment 2 Program 1
// Shashi Kant | 2021PGCACA050

#include <iostream>
using namespace std;

// Size of array
const int N = 100;

// Check if array is empty
int isEmpty(int size)
{
    if (size == 0)
        return true;
    else
        return false;
}

// Traverse the array
void traverseArray(int a[], int size)
{
    // Check for size underflow
    if (isEmpty(size))
    {
        cout << "Array is empty." << endl;
        return;
    }
    // Traverse the array
    cout << "Traversing the array" << endl;
    for (int i = 0; i < size; i++)
        cout << a[i] << " ";
    cout << endl;
}

// Insert an Element
int insertElement(int a[], int size, int element)
{
    // Check for size oevrflow
    if (size >= N)
    {
        cout << "Array size overflow, Cannot add more elements" << endl;
        return -1;
    }
    // Insert element
    a[size] = element;
    return size + 1;
}

// Delete an Element
int deleteElement(int a[], int size, int element)
{
    // Check for size oevrflow
    if (isEmpty(size))
    {
        cout << "Array is empty." << endl;
        return -1;
    }

    for (int i = 0; i < size; i++)
    {
        if (a[i] == element)
        {
            // Shift all elements to the left
            for (int j = i; j < size - 1; j++)
                a[j] = a[j + 1];
            cout << "Element removed successfully!" << endl;
            return size - 1;
        }
    }

    cout << "Element not found" << endl;
    return size;
}

// Sort an array (Using Selection sort)
void sortArray(int a[], int size)
{
    // Check for size oevrflow
    if (isEmpty(size))
    {
        cout << "Array is empty." << endl;
        return;
    }

    // Sort
    int i, j, min_idx;
    for (i = 0; i < size - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < size; j++)
            if (a[j] < a[min_idx])
                min_idx = j;
        // Swap the found minimum element with the first element
        swap(a[min_idx], a[i]);
    }
}

// Search an element and return it's index if found
int searchElement(int a[], int size, int element)
{
    // Check for size oevrflow
    if (isEmpty(size))
    {
        cout << "Array is empty." << endl;
        return -1;
    }
    // Search for element
    for (int i = 0; i < size; i++)
        if (a[i] == element)
            return i;
    return -1;
}

// Merge 2nd array into first
int merge(int a[], int size, int a2[], int size2)
{
    int j = 0;
    // Merge
    for (int i = 0, j = size; i <= size2 && j < N; i++, j++)
        a[j] = a2[i];
    // Check for size overflow
    if (size + size2 >= N)
    {
        cout << "Size overflow. Some elements of 2nd array might be lost" << endl;
        return N;
    }
    return size + size2;
}

int main()
{

    // Declaration
    // a -> Array , size -> Size of the array
    int a[N], size = 0;

    while (1)
    {

        // Menu
        int choice;
        cout << endl;
        cout << "1. Traverse the array" << endl;
        cout << "2. Insert Element in the array" << endl;
        cout << "3. Delete an Element from the array" << endl;
        cout << "4. Sort the array" << endl;
        cout << "5. Search an Element in the array" << endl;
        cout << "6. Merge two arrays" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        cout << endl;

        int element, updatedSize, index;
        switch (choice)
        {
        case 1:
            traverseArray(a, size);
            break;
        case 2:
            cout << "Enter element to be Inserted: ";
            cin >> element;
            updatedSize = insertElement(a, size, element);
            if (updatedSize != -1)
                size = updatedSize;
            break;
        case 3:
            cout << "Enter element to be Deleted: ";
            cin >> element;
            updatedSize = deleteElement(a, size, element);
            if (updatedSize != -1)
                size = updatedSize;
            break;
        case 4:
            sortArray(a, size);
            cout << "Array after sorting:" << endl;
            traverseArray(a, size);
            break;
        case 5:
            cout << "Enter element to be Searched: ";
            cin >> element;
            index = searchElement(a, size, element);
            if (index != -1)
                cout << "Element found at position: " << index + 1 << endl;
            else
                cout << "Element not found" << endl;
            break;
        case 6:
            cout << "Enter size of 2nd array : ";
            int size2, a2[N];
            cin >> size2;
            for (int i = 0; i < size2; i++)
            {
                cout << "Enter element " << i + 1 << " : ";
                cin >> a2[i];
            }
            size = merge(a, size, a2, size2);
            break;
        case 7:
            cout << "Exiting.." << endl;
            exit(0);
            break;
        default:
            cout << "Invalid Input. Please try again.";
        }
    }
}