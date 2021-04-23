//10757_큰 수 A+B
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int a[10004], b[10004], sum[10004], carry;
string str1, str2;

int main() {
	cin >> str1 >> str2;		//입력 받음

	for (int i = 0; i < str1.length(); ++i) {		//배열에 저장
		char tmp = str1.at(i);
		a[str1.length() - i] = atoi(&tmp);
	}
	for (int i = 0; i < str2.length(); ++i) {		//배열에 저장
		char tmp = str2.at(i);
		b[str2.length() - i] = atoi(&tmp);
	}
	for (int i = 1; i <= max(str1.length(), str2.length()); ++i) {	//한 자리씩 계산
		sum[i] = a[i] + b[i] + carry;			//a 숫자와 b 숫자와 carry 더함
		if (sum[i] >= 10) {						//10이 넘었다면 앞으로 올려줘야 함
			sum[i] -= 10;						
			carry = 1;
		}
		else carry = 0;
	}

	if (carry) cout << 1;						//마지막까지 계산했는데 carry가 있다면 출력
	for (int i = 0; i < max(str1.length(), str2.length()); ++i) {		//sum에 계산한 거 역순으로 출력
		cout << sum[max(str1.length(), str2.length())-i];
	}

	return 0;
}