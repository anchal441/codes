#include<iostream>
using namespace std;
void shift(char arr[],int be)
{
	int i=be;
	while(arr[i+2]!='\0')
	{
		arr[i]=arr[i+2];
		i++;
	}
	arr[i]='\0';

}
void replacepi(char arr[],int be)
{
	if(arr[be]=='\0'||arr[be+1]=='\0'||arr[be+2]=='\0'){
		//cout<<arr<<endl;
		return;
	}
	if((arr[be]=='3')&&(arr[be+1]=='.')&&(arr[be+2]=='1')&&(arr[be+3]=='4'))
	{
		shift(arr,be);
		arr[be]='p';
		arr[be+1]='i';
		replacepi(arr,be+2);
	}
	else
	{
		if(arr[be+1]!='\0')
			replacepi(arr,be+1);
	}
}

int main()
{
	int n;
	cin>>n;
	cin.ignore();
	char str[2001];
	while(n--){
	 	cin.getline(str,2001);
	    replacepi(str,0);
        cout<<str<<endl ;
    }

}