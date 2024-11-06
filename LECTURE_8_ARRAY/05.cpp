#include <iostream>
using namespace std;
void changeArr(int arr[], int size)
{
    cout << "in function\n";

    for (int i = 0; i < size; i++)
    {
        arr[i] = 2 * arr[i];
    }
}
int main()
{
    int arr[] = {1, 2, 3};
    changeArr(arr, 3);
    cout << "in main\n";
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
// is qustion ko solve karne se hame ye malum parta ha ki jab bhi ham function use kare to thora logic yani souch kar ksre kuu ki is case ma jab ham function ma change kar rahe ha to hamare main functio ma bhi reflect kar raha ha
