#include<iostream>
#include<string>
using namespace std;

void main() {
	char Check[300];// ���� �迭���� ũ������
	int Count = 0;// 'x'�� ����� ���� ����
	
	string str1, str2; //���ڿ� ���� ������� ���� ��

	cout << "������ �Է��ϸ� ����ȿ� x�� ����� �˷��ݴϴ�.\n";
	cin.getline(Check, 300);//���ڹ迭�̱⿡ cin.getlin(����,ũ��)

	for (int i = 0; i < strlen(Check); i++) {//strlen �Լ��� ����ũ�⸦ ���.
		if (Check[i] == 'x')
			Count++;//for���� ���µ��� 'x'��������� ī���Ͱ� �ö�
	}

	cout << "x�� ����" << Count << endl;//�� ���

	cout << "���ڿ� �ΰ��� ���մϴ�.\n";
	cout << "���ڿ��� �Է��ϼ���:";
	getline(cin, str1);//string�Լ� ���������� getlin(cin,������)���� �޾ƿ�
	cout << "���� Ȥ�� �ٸ����ڿ��� �Է��ϼ���:";
	getline(cin, str2);

	if (str1 == str2)//�񱳹�
		cout << "�ι��ڿ��� �����ϴ�.\n";
	else
		cout << "�ι��ڿ��� Ʋ���ϴ�.\n";

}