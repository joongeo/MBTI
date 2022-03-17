#include <iostream>
#include "Mbti_Image.h"

using namespace std;

int main()
{
	Mbti_Image aMbti_Image;

	string a;
	char b;
	cout << "자신의 MBTI(대문자)를 입력해주세요" << endl;
	cin >> a;
		
	aMbti_Image.OutImage2(a);

	cout << "다른 MBTI를 입력하시나요? Y / N" << endl;
	cin >> b;

	if (b == 'Y')
		

	return 0;
}