#include <iostream>
using namespace std;

void printRightTriangleOfStars(int rows)
{

    for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j <= i; j++)
        {

            cout << "* ";
        }

        cout << endl;
    }
}

int main()
{

    printRightTriangleOfStars(5);
}