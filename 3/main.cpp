#include <iostream>
#include <string> 
#include <fstream>

using namespace std;

int main () 
{
	string buff, s="hosts",s1="dns",s2="files";
	ifstream fin;
	ofstream fout;
	fin.open ("input.txt");
	fout.open ("output.txt");
	int i,ii;
	cout << "npos= "<<std::string::npos<<endl;
	while (getline(fin,buff)!=NULL)
	{
		i=buff.find(s);
		if (i!=-1)
		{
			ii=buff.find(s2);
			if (ii!=-1)
				{
					buff.replace(ii,ii+s1.length(),s1);
				}
		}
		fout << buff <<endl;
	}
		
	fin.close();
	fout.close();
	return 0;
}
