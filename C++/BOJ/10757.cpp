#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int a[10004], b[10004], sum[10004], carry;
string inp1, inp2;

int main()
{
    cin >> inp1 >> inp2;

    int i;
    for(i = 0; i < inp1.length(); i++){
        char tmp = inp1.at(i);
        a[inp1.length() - i] = atoi(&tmp);
    }

    for(i = 0; i < inp2.length(); i++){
        char tmp = inp2.at(i);
        b[inp2.length() - i] = atoi(&tmp);
    }

    for(i = 1; i <= max(inp1.length(), inp2.length()); ++i){
        sum[i] = a[i] + b[i] + carry;
        if(sum[i] >= 10){
            sum[i] -= 10;
            carry = 1;
        }
        else carry = 0;
    }
    
    if (carry) cout << 1;
    for(int i = 0; i <= max(inp1.length(), inp2.length()); ++i) {
        cout << sum[max(inp1.length(), inp2.length())-i];
    }

    return 0;
}