// #include <iostream>
// using namespace std;
// int main()
// {
//     // char ch = 97;
//     // cout << ch;
//     int n = 10;
//     char alp = 0;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << alp << "  ";
//             alp++;
//         }
//         cout << endl;
//     }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int maxValue;

//     cout << "Enter the maximum ASCII value: ";
//     cin >> maxValue;

//     for (int i = 1; i <= maxValue; i++)
//     {
//         cout << (char)i << " (" << i << ")  ";
//         // Print newline after every 10 characters for better readability
//         if (i % 10 == 0)
//         {
//             cout << endl;
//         }
//     }

//     return 0;
// }

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "ASCII Table (0 to 255):\n";
    cout << "------------------------\n";

    for (int i = 0; i <= 125; i++)
    {
        cout << setw(3) << i << " -> "; // Print ASCII value
        if (i >= 32 && i <= 126)
        {
            cout << (char)i; // Print character if it's printable
        }
        else
        {
            cout << " "; // Leave blank for non-printable characters
        }
        cout << "\n";
    }

    return 0;
}
