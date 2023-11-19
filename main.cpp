#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    const int size = 5;
    int arr[size] = {3, 5, 1, 23, 1};

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}

