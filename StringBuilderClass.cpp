#include<vector>
#include<string>
#include<iostream>
/*Implementing String Builder class in c++*/
using namespace std;
class stringbuilder
{
	vector<char>*str;
	public:
	stringbuilder()
	{
		str=new vector<char>();
	}
	
	void append(string val)
	{
		int len=val.size();
		for(int i=0; i<len; i++)
		{
			str->push_back(val[i]);
		}
	}
	
	string tostring()
	{
		int finsize=str->size();
		string finalstring;
		finalstring.resize(finsize);
		for(int i=0; i<finsize;i++)
		{
			finalstring[i]=str->at(i);
			//cout<<"klalala"<<endl;
		}
		//cout<<finalstring.size();
		return finalstring;
	}
};
int main()
{
	stringbuilder str;
	string abc="Ayush";
	str.append(abc);
	str.append(abc);
	cout<<str.tostring();
	return 0;
}
