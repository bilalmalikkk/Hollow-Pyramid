//C++ program to display hollow star pyramid

#include<iostream>
using namespace std;

int main()
{
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++)
    {
        // Print leading spaces
        cout << string(rows - i, ' ');

        // Print the first star
        cout << "*";

        // Print the hollow spaces or stars
        if (i > 1)
        {
            if (i == rows)
                cout << string(2 * i - 3, '*');
            else
                cout << string(2 * i - 3, ' ');

            // Print the last star if not the top row
            cout << "*";
        }

        cout << "\n";
    }

    return 0;
}
