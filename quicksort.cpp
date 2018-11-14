#include <iostream>
#include <vector>
#include "time.h"
#include "stdlib.h"
using namespace std;
std::vector<int> v1;
int main()
{
    srand(time(NULL));
    int numbers = rand() % 100 +1;
    int size;
    cout << "Please enter the size of the array of integers" << endl;
    cin >> size;
    v1.reserve(size);

    for (int i = 0; i < size; i++)
    {
        v1.push_back(numbers);
    }
    for (int j = 0; j < v1.size(); j++)
    {
        cout << v1[j] << " ";
    }

    cin.get();
}