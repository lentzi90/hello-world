#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!\n";
    cout << "What is your name sir?" << endl;
    string name;
    getline(cin, name); // använd getline för att inte avbryta inmatning vid space
    cout << "Hello " << name << " nice to meet you!\n";
    return 0;
}
