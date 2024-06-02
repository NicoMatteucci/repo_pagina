#include <iostream>
#include "string"

using namespace std;

int main(int argc, char const *argv[])
{
    if (argc > 1)
        cout << "algo:" << argv[1] << endl;
    else
    {
        cout << "diga algo: ";
        string rcv;
        cin >> rcv;
        cout << "rcv: " << rcv << endl;
    }
    return 0;
}
