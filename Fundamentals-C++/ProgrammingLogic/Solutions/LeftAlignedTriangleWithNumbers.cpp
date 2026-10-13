#include <iostream>
using namespace std;

void leftAlignedTriangleWithNumbers(int rows)
{

    for (int i = 0; i < rows; i++)
    {

        for (int j = 1; j <= i + 1; j++)
        {

            cout << j << " ";
        }

        cout << endl;
    }
}

int main()
{

    leftAlignedTriangleWithNumbers(6);
}