#include <iostream>
#include <vector>
#include "time.h"
#include "stdlib.h"
using namespace std;
std::vector<int> v1;

void quicksort()
{
    for (int i = 0; i < size; i++)
    {
        
    }
}

int main()
{
    srand(time(NULL));
    
    int size;
    cout << "Please enter the size of the array of integers" << endl;
    cin >> size;
    v1.reserve(size);

    for (int i = 0; i < size; i++)
    {
        int numbers = rand() % 100;
        v1.push_back(numbers);
        cout << v1[i] << endl;
    }
    
    cin.get();
}