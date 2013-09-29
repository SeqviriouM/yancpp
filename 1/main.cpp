#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

int main ()
{	
	string buff,s1=" bar",s2=" bar.domain.tld",ss1="baz",ss2=" baz.donemain.tld";
	int i,ii;
	ifstream fin;
	ofstream fout;
	fin.open ("input.txt");
	fout.open ("output.txt");

	while (getline(fin,buff)!=NULL)
	{
		
		i=buff.find(s2);
		
		if (i!=-1)
		{
			buff.replace(i,ss2.length()-2,ss2);
		}
		i = buff.find(s1);
		if (i!=-1)
		{
			buff.replace(i+1,ss1.length(),ss1);
		}
		fout << buff<<endl;
		
	}
	fin.close();
	fout.close();
	
	return 0;
}
