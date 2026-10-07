#include <iostream>
using namespace std;
int main()
{
    char a = 'b' + 1;
    cout << a << " " << (int)a << endl;
    for(int i = 1; i <= 26; i++){
        cout << i << " to " <<(char)(i+96) << "\n"; 
    }
    return 0;
}
