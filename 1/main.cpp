#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

int main ()
{	
	string buff,s1=" bar.",s2=" bar.domain.tld",ss1="baz",ss2=" baz.donemain.tld";
	int i,ii;
	ifstream fin;
	ofstream fout;
	fin.open ("input.txt");
	fout.open ("output.txt");

	while (getline(fin,buff)!=NULL)
	{
		
		i=buff.find(s2);
		//cout << buff<< " вхождение: "<< i << endl;
		if (i!=-1)
		{
			ii = i + ss2.length();
			buff.replace(i,ii,ss2);
		}
		fout << buff<<endl;
		
	}
	fin.close();
	fout.close();
	
	return 0;
}
