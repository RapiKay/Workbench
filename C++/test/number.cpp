#include<iostream>

int main()
{
    using namespace std;

    int i;
    int point[10] = {0, };

    long long a,b,c;

    cin >> a >> b >> c;
    unsigned long long result = a * b * c;
    cout << result << endl;

    while(result > 0){
        point[result%10]++;
        result /= 10;
    }

    for(i=0;i<=9;i++){
        cout << point[i] << endl;
    }
}