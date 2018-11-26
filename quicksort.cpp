#include <iostream>
#include <vector>
#include "time.h"
#include "stdlib.h"
using namespace std;
std::vector<int> v1;

void quicksort();
int siz = 0;
int main()
{
    srand(time(NULL));
    
    cout << "Please enter the size of the array of integers" << endl;
    cin >> siz;
    v1.reserve(siz);

    for (int i = 0; i < siz; i++)
    {
        int numbers = rand() % 100;
        v1.push_back(numbers);
        cout << v1[i] << endl;
    }
    
    cin.get();
}

void quicksort()
{
    for (int i = 0; i < siz; i++)
    {
        
    }
}