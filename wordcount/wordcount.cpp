#include<iostream>
using namespace std;
void output()
{
    int count=2;
    int num=1;
    string l[100]={"22222","mmmmm"};
    cout <<"characters: "<<characters_sum()<<endl;  //字符数
    cout<<endl;
    cout << "words: "<<WordsCount()<<endl;    //单词个数
    cout<<endl;
    cout << "lines: "<<lineCount()<<endl;//行输出
    cout<<endl;
    for (int i = 0; i < count; i++)
    {
        cout << "<" << l[i] << ">:" <<" "<<num<<endl;
    }
}
int main(int argc,char argv[])
{
	output();
	return 0;
}
