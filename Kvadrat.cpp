#include <iostream>
using namespace std; 

int main()
{
    int array[5][5];
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            array[i][j] = 0;
            array[i][4 - i] = 1;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << array[i][j];            
        }
        cout << "\n";
    }
}


