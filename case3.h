#pragma once
#include <iostream>
#include <fstream>
#include <string.h>
#include <vector>
#include <sstream>

using namespace std;

const string personalities[16] = { "INFP", "ENFP", "INFJ", "ENFJ", "INTJ", "ENTJ", "INTP", "ENTP", "ISFP", "ESFP", "ISTP", "ESTP", "ISFJ", "ESFJ", "ISTJ", "ESTJ" };

int couplemat[16][16] = {
	{2, 2, 2, 1, 2, 1, 2, 2, 5, 5, 5, 5, 5, 5, 5, 5},
	{2, 2, 1, 2, 1, 2, 2, 2, 5, 5, 5, 5, 5, 5, 5, 5},
	{2, 1, 2, 2, 2, 2, 2, 1, 5, 5, 5, 5, 5, 5, 5, 5},
	{1, 2, 2, 2, 2, 2, 2, 2, 1, 5, 5, 5, 5, 5, 5, 5},
	{2, 1, 2, 2, 2, 2, 2, 1, 3, 3, 3, 3, 4, 4, 4, 4},
	{1, 2, 2, 2, 2, 2, 1, 2, 3, 3, 3, 3, 3, 3, 3, 3},
	{2, 2, 2, 2, 2, 1, 2, 2, 3, 3, 3, 3, 4, 4, 4, 1},
	{2, 2, 1, 2, 1, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4},
	{5, 5, 5, 1, 3, 3, 3, 3, 4, 4, 4, 4, 3, 1, 3, 1},
	{5, 5, 5, 5, 3, 3, 3, 3, 4, 4, 4, 4, 1, 3, 1, 3},
	{5, 5, 5, 5, 3, 3, 3, 3, 4, 4, 4, 4, 3, 1, 3, 1},
	{5, 5, 5, 5, 3, 3, 3, 3, 4, 4, 4, 4, 1, 3, 3, 3},
	{5, 5, 5, 5, 4, 3, 4, 4, 3, 1, 3, 1, 2, 2, 2, 2},
	{5, 5, 5, 5, 4, 3, 4, 4, 1, 3, 1, 3, 2, 2, 2, 2},
	{5, 5, 5, 5, 4, 3, 4, 4, 3, 1, 3, 3, 2, 2, 2, 2},
	{5, 5, 5, 5, 4, 3, 1, 4, 1, 3, 1, 3, 2, 2, 2, 2}
};




class C3Readcsv {
private:
	vector <string> data; // 전체 데이터
	string data_line; // 템프

	/// <matcher()용 변수>
	int index;
	

public:
	vector <string> kosta_name;
	vector <int> kosta_mbti;

	C3Readcsv() {
		ifstream file("DBkosta1.csv");

		while (getline(file, data_line)) {
			istringstream line(data_line); //데이터 슬라이싱 (줄) 

			string data_one;

			while (getline(line, data_one, ',')) { //데이터 슬라이싱 (중간)
				data.push_back(data_one); //벡터에 이름/MBTI순으로 넣음 
			}
		}

		int i = 0;
		int a = 0;
		for (vector <string>::iterator iter = data.begin(); iter != data.end(); iter++) { //
			if (i % 2 == 0) { //짝수는 이름으루 
				kosta_name.push_back(data.at(i));
			}
			else {
				for (int j = 0; j < 16; j++) {
					if (data.at(i) == personalities[j]) a = j;
				}
				kosta_mbti.push_back(a); //홀수는 MBTI루
			}
			i++;
		}
		//for (auto x : kosta_mbti) { cout << x << endl; } //debug
	}


	string name;
	int matcher() {
		cout << "이름을 입력해주세요: ";
		cin >> name;

		//이름을 그사람에 해당되는 MBTI 숫자를 index에 저장
		int z = 0;
		for (vector <string>::iterator iter1 = kosta_name.begin(); iter1 != kosta_name.end(); iter1++) {
			if (name == kosta_name.at(z)) {
				index = kosta_mbti.at(z);
				break;
			}
			z++;
		}

		//kosta_mbti를 loop걸어서 rmatrix에 있는 1숫자를 찾으면 그성격에 해당되는 사람의 이름을 출력

		string YorN;
		cout << "<최고의 궁합>" << endl;
		if (find_match(1) == 1) {
			return 0;
		}
		else {
			cout << "최고의 궁합을 못 찾았습니다." << endl;
			cout << "다음으로 좋은 궁합을 찾으겠습니까? (Y/N)" ;
			cin >> YorN;
			if (YorN == "Y") {
				cout << "<좋은 궁합>" << endl;
				find_match(2);
			}
		}
	}

	int find_match(int level) {
		int others = 0;
		int TorF = 0;
		for (vector <int>::iterator iter2 = kosta_mbti.begin(); iter2 != kosta_mbti.end(); iter2++) {
			if (couplemat[index][kosta_mbti.at(others)] == level) {
				cout << kosta_name.at(others) << endl;
				TorF = 1;
			}
			others++;
		}
		return TorF;
	}
};


/*int y = 0;
for (int x = 0; x < 16; x++) {
	if (rmatrix[index][x] == 1) {
		for (vector <int>::iterator iter2 = kosta_mbti.begin(); iter2 != kosta_mbti.end(); iter2++) {
			if (x == kosta_mbti.at(y)) cout << kosta_name.at(y) << endl;
			y++;
		}
	}

}*/
