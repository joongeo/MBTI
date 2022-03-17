#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>

using namespace cv;
using namespace std;

class Mbti_Image
{
private:
	Mat image;
	Mat src, dst;
	char a;

public:
	Mbti_Image() {}
	void OutImage2(string as) {
		string mbti;

		while (1) {
			if (mbti == "INFP")
			{
				image = imread("Mbti.0.png", IMREAD_COLOR); // 사진 호출, 컬러로 호출
				imshow("My MBTI", image); // 사진 출력
				waitKey(0);
				mbti = "";
			}
			else if (mbti == "ENFP")
			{
				image = imread("Mbti.1.png", IMREAD_COLOR);
				imshow("My MBTI", image);
				waitKey(0);
				mbti = "";
			}
			else if (mbti == "INFJ")
			{
				image = imread("Mbti.2.png", IMREAD_COLOR);
				imshow("My MBTI", image);
				waitKey(0);
				mbti = "";
			}
			else if (mbti == "ENFJ")
			{
				image = imread("Mbti.3.png", IMREAD_COLOR);
				imshow("My MBTI", image);
				waitKey(0);
				mbti = "";
			}
			else if (mbti == "INTJ")
			{
				image = imread("Mbti.4.png", IMREAD_COLOR);
				imshow("My MBTI", image);
				waitKey(0);
				mbti = "";
			}
			else if (mbti == "ENTJ")
			{
				image = imread("Mbti.5.png", IMREAD_COLOR);
				imshow("My MBTI", image);
				waitKey(0);
				mbti = "";
			}
			else if (mbti == "INTP")
			{
				image = imread("Mbti.6.png", IMREAD_COLOR);
				imshow("My MBTI", image);
				waitKey(0);
				mbti = "";
			}
			else if (mbti == "ENTP")
			{
				image = imread("Mbti.7.png", IMREAD_COLOR);
				imshow("My MBTI", image);
				waitKey(0);
				mbti = "";
			}
			else if (mbti == "ISFP")
			{
				image = imread("Mbti.8.png", IMREAD_COLOR);
				imshow("My MBTI", image);
				waitKey(0);
				mbti = "";
			}
			else if (mbti == "ESFP")
			{
				image = imread("Mbti.9.png", IMREAD_COLOR);
				imshow("My MBTI", image);
				waitKey(0);
				mbti = "";
			}
			else if (mbti == "ISTP")
			{
				image = imread("Mbti.10.png", IMREAD_COLOR);
				imshow("My MBTI", image);
				waitKey(0);
				mbti = "";
			}
			else if (mbti == "ESTP")
			{
				image = imread("Mbti.11.png", IMREAD_COLOR);
				imshow("My MBTI", image);
				waitKey(0);
				mbti = "";
			}
			else if (mbti == "ISFJ")
			{
				image = imread("Mbti.12.png", IMREAD_COLOR);
				imshow("My MBTI", image);
				waitKey(0);
				mbti = "";
			}
			else if (mbti == "ESFJ")
			{
				image = imread("Mbti.13.png", IMREAD_COLOR);
				imshow("My MBTI", image);
				waitKey(0);
				mbti = "";
			}
			else if (mbti == "ISTJ")
			{
				image = imread("Mbti.14.png", IMREAD_COLOR);
				imshow("My MBTI", image);
				waitKey(0);
				mbti = "";
			}
			else if (mbti == "ESTJ")
			{
				image = imread("Mbti.15.png", IMREAD_COLOR);
				imshow("My MBTI", image);
				waitKey(0);
				mbti = "";
			}

			else
			{
			cout << "다시 확인 후 입력해주세요." << endl;
			cin >> a;
			mbti=a;
            }
















			//continue;
			/*else
			{				
				cout << "다른 MBTI를 입력하시나요? Y / N" << endl;
				cin >> a;

				if (a == 'Y') {
					cout << "다른 MBTI를 입력하세요" << endl;
					cin >> a;
				}
				else if (a == 'N')
				{
					break;
				}
			
			}*/
		}
	}
};

