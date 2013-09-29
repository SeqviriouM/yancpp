#include <iostream>
#include <fstream>
#include <string.h>
#include <stdlib.h>
using namespace std;

int main ()
{
	char buff[300];
	unsigned int res=0;
	bool k=false,k2=false;
	ifstream fin; 
	ofstream fout; 
	fin.open("input.txt");
	
	while (fin.getline(buff,300)!=NULL)
	{
		
		for (int i=0;i<strlen(buff);i++)
		{
			if (buff[i]==':' && !k)
			{
				k=true;
				if (buff[i+1]!='*' && buff[i+1]!='!') k2=true;
			}
		}
		if (k2) res+=1;
		k2=false;
		k=false;
	}
	fin.close();
	fout.open("output.txt");
	fout << res;
	fout.close();
	return 0;
}
