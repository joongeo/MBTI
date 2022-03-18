#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp> //문제1 
#pragma once
#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>
#include <sstream>

using namespace cv;
using namespace std;
string a;
class Mbti_Image
{
private:
	Mat image;
	Mat src, dst; //사진 크기 조절 
	//string a;

public:
	Mbti_Image() {} //생성자 무슨일 함 ? 
	void OutImage2() { //mbti별로 이미지 출력 
		string mbti;
		
		
		cout << "자신의 MBTI를 입력해주세요" << endl;
		cin >> mbti;
		for (int i = 0; i < mbti.size(); i++)
		{
			mbti[i] = toupper(mbti[i]);

		}

		if (mbti == "INFP")
		{
			image = imread("Mbti.0.png", IMREAD_COLOR); //imread(사진 호출, 컬러로 호출)
			imshow("My MBTI", image); // 사진 출력
			moveWindow("My MBTI", 0, 10);
			waitKey(0); //출력 유지
			mbti = "";

		}
		else if (mbti == "ENFP")
		{
			image = imread("Mbti.1.png", IMREAD_COLOR);
			imshow("My MBTI", image);
			moveWindow("My MBTI", 0, 10);
			waitKey(0);
			mbti = "";
		}
		else if (mbti == "INFJ")
		{
			image = imread("Mbti.2.png", IMREAD_COLOR);
			imshow("My MBTI", image);
			moveWindow("My MBTI", 0, 10);
			waitKey(0);
			mbti = "";
		}
		else if (mbti == "ENFJ")
		{
			image = imread("Mbti.3.png", IMREAD_COLOR);
			imshow("My MBTI", image);
			moveWindow("My MBTI", 0, 10);
			waitKey(0);
			mbti = "";
		}
		else if (mbti == "INTJ")
		{
			image = imread("Mbti.4.png", IMREAD_COLOR);
			imshow("My MBTI", image);
			moveWindow("My MBTI", 0, 10);
			waitKey(0);
			mbti = "";
		}
		else if (mbti == "ENTJ")
		{
			image = imread("Mbti.5.png", IMREAD_COLOR);
			imshow("My MBTI", image);
			moveWindow("My MBTI", 0, 10);
			waitKey(0);
			mbti = "";
		}
		else if (mbti == "INTP")
		{
			image = imread("Mbti.6.png", IMREAD_COLOR);
			imshow("My MBTI", image);
			moveWindow("My MBTI", 0, 10);
			waitKey(0);
			mbti = "";
		}
		else if (mbti == "ENTP")
		{
			image = imread("Mbti.7.png", IMREAD_COLOR);
			imshow("My MBTI", image);
			moveWindow("My MBTI", 0, 10);
			waitKey(0);
			mbti = "";
		}
		else if (mbti == "ISFP")
		{
			image = imread("Mbti.8.png", IMREAD_COLOR);
			imshow("My MBTI", image);
			moveWindow("My MBTI", 0, 10);
			waitKey(0);
			mbti = "";
		}
		else if (mbti == "ESFP")
		{
			image = imread("Mbti.9.png", IMREAD_COLOR);
			imshow("My MBTI", image);
			moveWindow("My MBTI", 0, 10);
			waitKey(0);
			mbti = "";
		}
		else if (mbti == "ISTP")
		{
			image = imread("Mbti.10.png", IMREAD_COLOR);
			imshow("My MBTI", image);
			moveWindow("My MBTI", 0, 10);
			waitKey(0);
			mbti = "";
		}
		else if (mbti == "ESTP")
		{
			image = imread("Mbti.11.png", IMREAD_COLOR);
			imshow("My MBTI", image);
			moveWindow("My MBTI", 0, 10);
			waitKey(0);
			mbti = "";
		}
		else if (mbti == "ISFJ")
		{
			image = imread("Mbti.12.png", IMREAD_COLOR);
			imshow("My MBTI", image);
			moveWindow("My MBTI", 0, 10);
			waitKey(0);
			mbti = "";
		}
		else if (mbti == "ESFJ")
		{
			image = imread("Mbti.13.png", IMREAD_COLOR);
			imshow("My MBTI", image);
			moveWindow("My MBTI", 0, 10);
			waitKey(0);
			mbti = "";
		}
		else if (mbti == "ISTJ")
		{
			image = imread("Mbti.14.png", IMREAD_COLOR);
			imshow("My MBTI", image);
			moveWindow("My MBTI", 0, 10);
			waitKey(0);
			mbti = "";
		}
		else if (mbti == "ESTJ")
		{
			image = imread("Mbti.15.png", IMREAD_COLOR);
			imshow("My MBTI", image);
			moveWindow("My MBTI", 0, 10);
			waitKey(0);
			mbti = "";
		}	

		else
		{
			cout << "Retry" << endl;
			OutImage2();
		}
	}
};
