// Write a menu driven program in C to implement all the operations for array, including 
// Traversing, insertion, deletion, sorting, searching and merging of two arrays. 
#include <bits/stdc++.h>
using namespace std;
#define NS 1001

void sort_array(int array[], int size) //bubble sort
{
    for (int step = 0; step < (size - 1); step++)
    {
        int swapped = 0;
        for (int i = 0; i < (size - step - 1); i++)
        {
            if (array[i] > array[i + 1])
            {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                swapped = 1;
            }
        }
        if (swapped == 0)
            break;
    }
    cout << "\nSorted Array : \n";
}

void insert_element(int array[], int &size) //Insertion of element
{
    if (size >= NS)
        cout << "\nSpace not available!\n";
    else
    {
        int insert;
        cout << "\nEnete the element : ";
        cin >> insert;
        array[size] = insert;
        cout << "Element inserted successfully!\n";
        size = size + 1;
    }
}

int search_element(int array[], int size) //Search an element
{ 
    int search;
    cout << "Enter element you wanna search : ";
    cin >> search;

    int flag = 1;
    for (int index = 0; index < size; index++)
        if (array[index] == search)
            flag = index;

    if (flag == -1)
        cout << "Element not found!";
    else
        cout << "Element Found at Position : " << flag + 1;
}

void delete_element(int array[], int size) //Element deletion buy element value
{
    if(size<=0)
   {
       cout<<"\nArray is empty!\n";
       return;
   }
    int del_element;
    cout << "\nEneter the element to delete : ";
    cin >> del_element;

    int f = 0;
    for (int index = 0; index < size; index++)
    {
        if (array[index] == del_element)
        {
            for (int j = index; j < (size - 1); j++)
                array[j] = array[j + 1];
            f++, index--, size--;
        }
    }
    if (f == 0)
        cout << "Element doesn't exit!\n";
    else
        cout << "Element deleted successfully!";
}

void merge_arrays(int array1[], int size1) //Merging two arrays in sorted manner
{
    int size2;
    cout << "Enter size of second array : ";
    cin >> size2;

    int array2[size2];
    cout << "Enter elements of second array :";
    for (int index = 0; index < size2; index++)
        cin >> array2[index];

    int array3[size1 + size2];

    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2)
    {
        if (array1[i] < array2[j])
            array3[k++] = array1[i++];
        else
            array3[k++] = array2[j++];
    }

    while (i < size1)
        array3[k++] = array1[i++];

    while (j < size2)
        array3[k++] = array2[j++];

    cout << "Mereged Array : \n";
    for (int index = 0; index < size1 + size2; index++) //Display merged array
        cout << array3[index] << " ";
}

int print_array(int array[], int size) //Print array
{
    if (size == 0)
        cout << "\nArray is empty!";
    else
    {
        cout << "\nArray : ";
        for (int index = 0; index <size; index++)
            cout << array[index] << " ";
    }
}

int main()
{
    int array[NS], size;
    cout << "Enter the number of element : ";
    cin >> size;

    cout << "Enter the elements : ";

    for (int index = 0; index < size; index++)
        cin >> array[index];

    int choice = 1;
    while (choice != 0)
    {
        cout << "\n-----------------------------\n";
        cout << "Choose a option\n";
        cout << "1- Print/Travers Array\n";
        cout << "2- Insert element\n";
        cout << "3- Delete element\n";
        cout << "4- Sort array\n";
        cout << "5- Search element\n";
        cout << "6- Merge two arrays\n";
        cout << "0- Exit";
        cout << "\n-----------------------------\n";
        cout << "Enter your choice : ";

        cin >> choice;

        switch (choice)
        {
        case (1):
            print_array(array, size);
            cout << "\n";
            break;

        case (2):
            insert_element(array, size);
            break;

        case (3):
            delete_element(array, size);
            size = size - 1;
            break;

        case (4):
            sort_array(array, size);
            print_array(array, size);
            break;

        case (5):
            search_element(array, size);
            break;

        case (6):
            merge_arrays(array, size);
            break;
        }
    }
    return 0;
}
