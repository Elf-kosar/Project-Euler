//PROJECT EULER PROB 9
#include<iostream>
using namespace std;
int main()
{
    int num = 1000;
    
    for (int a = 1; a < num / 3; a++)
    {
        for (int b = a + 1; b < num / 2; b++)
        {
            int c = num - a - b;
            if (a * a + b * b == c * c)
            {
                cout << a * b * c;
                
                break;
            }
        }
        
    }
}