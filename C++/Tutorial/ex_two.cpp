#include<iostream>
using namespace std;

int main()
{
    char irum[30];
    cout << "���԰� ��ȭ��ȣ�� �Է��ϼ��� \n";
    //cin >> irum;
    cin.getline(irum,sizeof(irum));

    cout << "���� �ݾ��� �Է��ϼ���" << endl;
    
    int caltot,calpoint;
    cin >> caltot;
    calpoint = caltot * 0.01;
    cout << irum << "�� ��ȸ �߻� ����Ʈ = " << calpoint  << "�� �Դϴ�. \n";

}