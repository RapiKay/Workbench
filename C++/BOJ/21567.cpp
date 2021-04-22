#include<iostream>

int main()
{
    using namespace std;

    int i;
    int cnt[10] = {0, };

    long a,b,c;
    
    cin >> a >> b >> c;
    
    a = a * b * c;

    while(a){
        cnt[a%10]++;
        a /= 10;
    }

    for(i=0;i<=9;i++){
        cout << point[i] << endl;
    }
}