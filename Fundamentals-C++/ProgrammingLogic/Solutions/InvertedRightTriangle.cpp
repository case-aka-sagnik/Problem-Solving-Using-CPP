#include <iostream>
using namespace std;

void printInvertedRightTriangle(int rows)
{

    for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j < rows - i; j++)
        {

            cout << "* ";
        }

        cout << endl;
    }
}
int main()
{

    printInvertedRightTriangle(5);
}