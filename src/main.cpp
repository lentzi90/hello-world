#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!\n";
    cout << "What is your name?" << endl;
    string name;
    getline(cin, name); // use getline to avoid stopping at first space
    cout << "Hello " << name << " nice to meet you!\n";
    return 0;
}
