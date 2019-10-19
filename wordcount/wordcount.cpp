#include<iostream>
using namespace std;
void output()
{
    int count=2;                    //词组样例
    int num=1;                      //词组样例
    string l[100]={"22222","mmmmm"};  //词组样例不用管
    cout <<"characters: "<<characters_sum()<<endl;  //字符数
    cout<<endl;
    cout << "words: "<<WordsCount()<<endl;    //单词个数
    cout<<endl;
    cout << "lines: "<<lineCount()<<endl;//行输出
    cout<<endl;
    for (int i = 0; i < count; i++)      //词组以及频率输出
    {
        cout << "<" << l[i] << ">:" <<" "<<num<<endl;
    }
}
int main(int argc,char argv[])
{
	output();	
	return 0;
}
