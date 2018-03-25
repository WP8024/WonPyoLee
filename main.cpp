#include<iostream>
#include<string>
using namespace std;

void main() {
	char Check[300];// 문자 배열선언 크기조정
	int Count = 0;// 'x'가 몇개인지 세줄 변수
	
	string str1, str2; //문자열 선언 문장비교할 변수 둘

	cout << "문장을 입력하면 문장안에 x가 몇개인지 알려줍니다.\n";
	cin.getline(Check, 300);//문자배열이기에 cin.getlin(변수,크기)

	for (int i = 0; i < strlen(Check); i++) {//strlen 함수로 변수크기를 잰다.
		if (Check[i] == 'x')
			Count++;//for문이 도는동안 'x'가있을경우 카운터가 올라감
	}

	cout << "x의 갯수" << Count << endl;//값 출력

	cout << "문자열 두개를 비교합니다.\n";
	cout << "문자열을 입력하세요:";
	getline(cin, str1);//string함수 형태임으로 getlin(cin,변수명)으로 받아옴
	cout << "같은 혹은 다른문자열을 입력하세요:";
	getline(cin, str2);

	if (str1 == str2)//비교문
		cout << "두문자열이 같습니다.\n";
	else
		cout << "두문자열이 틀립니다.\n";

}