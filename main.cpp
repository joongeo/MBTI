#include <iostream>
#include <cstring>

using namespace std;

int Find_It(){
   string str[16] = {"INFP","ENFP","INFJ","ENFJ","INTJ","ENTJ","INTP","ENTP","ISFP","ESFP","ISTP","ESTP","ISFJ","ESFJ","ISTJ","ESTJ"};

   string input;

   cout << "give me ur MBTI!" << endl;

   cin >> input;

   for (int i=0; i<16; i++){
      if(input == str[i])
         cout << i+1;
   }

};

int main() {
   Find_It();

   return 0;
}