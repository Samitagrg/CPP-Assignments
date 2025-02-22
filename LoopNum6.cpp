#include <iostream> 

using namespace std; 

int main() 
{
    int i, ctr, cub;

    cout << "Input the number of terms : ";
    cin >> ctr;

    for (i = 1; i <= ctr; i++)
    {
        cub = i * i * i;
        cout << "Number is : " << i << " and the cube of " << i << " is: " << cub << endl;
    }
}