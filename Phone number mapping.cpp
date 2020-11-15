#include <iostream>
using namespace std; 
int main()
{
	char str[100];
	cin>>str;
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]=='a'||str[i]=='A'||str[i]=='b'||str[i]=='B'||str[i]=='c'||str[i]=='C')
		{
			str[i]='2';
		}
		else if(str[i]=='d'||str[i]=='D'||str[i]=='e'||str[i]=='E'||str[i]=='f'||str[i]=='F')
		{
			str[i]='3';
		}
		else if(str[i]=='g'||str[i]=='G'||str[i]=='h'||str[i]=='H'||str[i]=='i'||str[i]=='I')
		{
			str[i]='4';
		}
		else if(str[i]=='j'||str[i]=='J'||str[i]=='k'||str[i]=='K'||str[i]=='l'||str[i]=='L')
		{
			str[i]='5';
		}
		else if(str[i]=='m'||str[i]=='M'||str[i]=='n'||str[i]=='N'||str[i]=='o'||str[i]=='O')
		{
			str[i]='6';
		}
		else if(str[i]=='p'||str[i]=='P'||str[i]=='q'||str[i]=='Q'||str[i]=='r'||str[i]=='R'||str[i]=='s'||str[i]=='S')
		{
			str[i]='7';
		}
		else if(str[i]=='t'||str[i]=='T'||str[i]=='u'||str[i]=='U'||str[i]=='v'||str[i]=='V')
		{
			str[i]='8';
		}
		else if(str[i]=='w'||str[i]=='W'||str[i]=='x'||str[i]=='X'||str[i]=='y'||str[i]=='Y'||str[i]=='z'||str[i]=='Z')
		{
			str[i]='9';
		}
	}
	cout<<str;
}
