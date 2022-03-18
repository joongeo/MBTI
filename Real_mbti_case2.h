#pragma once
#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>
#include <sstream>
#define LN 16
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

class Couple
{

public:
	string type;
	int index;

	Couple() //생성자
	{
		type;
		index;
	}

	void Assign_Me() {
		here:
		cout << endl << "당신의 MBTI: ";
		cin >> type;
		for (int i = 0; i < type.size(); i++)
		{
			type[i] = toupper(type[i]);

		}

		for (int i = 0; i < LN; ++i)
			{
			if (personalities[i] == type) {
				index = i;
				break;
			}
			else if (i == LN - 1) {
				cout << "성격을 다시 입력해 주세요" << endl;
				goto here;
			}
			}

	}

	void Assign_You() {
		here:
		cout << "상대의 MBTI: ";
		cin >> type;
		for (int i = 0; i < type.size(); i++)
		{
			type[i] = toupper(type[i]);

		}

		for (int i = 0; i < LN; ++i)
		{
			if (personalities[i] == type) {
				index = i;
				break;
			}
			else if (i == LN - 1) {
				cout << "성격을 다시 입력해 주세요" << endl;
				goto here;
			}
		}
	}

	//void Indexer() { //mbti를 index값으로 변환
	//	for (int i = 0; i < LN; ++i)
	//	{
	//		if (personalities[i] == type)
	//			index = i;
	//	}
	//}

	void relationship(int a, int b) { //조합을 최종적으로 반환
		int factor = couplemat[a][b];

		switch (factor) {
		case 1:
			cout << endl << "우리 인연 영원히 뽀에버! 천생연분" << endl;
			break;
		case 2:
			cout << endl << "아주 좋은 관계가 될 수 있음!" << endl;
			break;
		case 3:
			cout << endl << "안 맞는 것 맞는 것 반반" << endl;
			break;
		case 4:
			cout << endl << "뭐.. 최악은 면했지만.그닥.." << endl;
			break;
		case 5:
			cout << endl << "진짜 궁합 최악! 지구 멸망의 길" << endl;
			break;
		}
	}

};

void Couplefinder() {
	Couple me;
	me.Assign_Me();
	while (1) {
		Couple you;
		you.Assign_You();

		me.relationship(me.index, you.index);
		return;
	}

}
