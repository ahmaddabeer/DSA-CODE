#include <iostream>
using namespace std;

int main()
{
        int rows, columns;

        // User se rows aur columns ke input lena
        cout << "Enter the number of rows: ";
        cin >> rows;
        cout << "Enter the number of columns: ";
        cin >> columns;

        // Nested loops ka istemal karke patter89n print karna
        for (int i = 1; i <= rows; i++)
        {
                for (int j = 1; j <= columns; j++)
                {
                        cout << "*";
                }
                cout << endl; // Har row ke baad new line
        }

        return 0;
}
