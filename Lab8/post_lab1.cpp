#include <iostream >
#include <cstring >
using namespace std;
int main ()
{
    char S1[] = "Bangladesh  ";
    char S2[] = "dhaka";

    cout << "Before strncpy(S1 , S2 )" << endl;
    cout << "Content of S1: " << S1 << endl;

    cout << "Content of S2: " << S2 << endl;

    strncpy(S1, S2,8);
    cout << "After strncpy(S1 , S2 )" << endl;
    cout << "Content of S1: " << S1 << endl;
    cout << "Content of S2: " << S2 << endl;
    return 0;
}
