#include <iostream>
#include <string> 
#include <fstream>

using namespace std;

int main () 
{
	string buff, s="hosts",ss;
	ifstream fin;
	ofstream fout;
	fin.open ("input.txt");
	fout.open ("output.txt");
	int i,ii=0,m;
	
	while (getline(fin,buff)!=NULL)
	{
		i=buff.find ("hosts");
		if (i!=-1)
		{
			while (buff[ii]!=' ')
			{
				ii++;
			}
			
			while (buff[ii]==' ')
			{
				ii++;
			} 
		
			m = buff.find(" dns ");
			buff.insert (m+5," ");
			buff.erase (m,5);
			buff.insert(ii,"    ");
			buff.replace(ii,3,"dns");
			
			
		}
		
		fout << buff <<endl;
	}
		
	fin.close();
	fout.close();
	return 0;
}
