#include <iostream>
using namespace std;
void evenFirst(int *arr, int &size)
{
    int index = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            int temp = arr[i];
            arr[i] = arr[index];
            arr[index] = temp;
            index++;
        }
    }
}
void display()
{
    int size = 5;
    int arr[size];
    cout << "Enter elements of array: \n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    evenFirst(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}
main()
{
    display();
}