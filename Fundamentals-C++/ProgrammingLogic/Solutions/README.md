# Solutions

### 1.Right Triangle of Stars

   ```
   *
   * *
   * * *
   * * * *
   ```

#### Solution

```cpp
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

```

#### Output

   ```
   g++ -std=c++20 RightTriangleOfStars.cpp  -o output && ./output
* 
* * 
* * * 
* * * * 
* * * * * 
   
   ```

   <hr/>

### 2.Inverted Right Triangle of Stars (mirror of Q1 vertically)

#### Solution

```cpp

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

```

#### Output

```
g++ -std=c++20 InvertedRightTriangle.cpp  -o output && ./output
* * * * * 
* * * * 
* * * 
* * 
* 

```

### 3.Left-Aligned Triangle Using Numbers Instead of Stars

   ```
   1
   1 2
   1 2 3
   ```

#### Solutions

```cpp

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

```

#### Output

   ```
   g++ -std=c++20 LeftAlignedTriangleWithNumbers.cpp  -o output && ./output
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
1 2 3 4 5 6 

```
