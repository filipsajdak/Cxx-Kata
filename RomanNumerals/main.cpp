#include <iostream>
#include <initializer_list>

using namespace std;

int main()
{
    for(auto& i : {1, 3, 5, 7})
        cout << "Hello World!" << i << endl;
    return 0;
}

