#include <iostream>
#include <cstring>
using namespace std;

void difference(char c[])
{
	int len= strlen(c);
	int output[len-1];
	for (int i=0;i<len-1;i++)
	{
			output[i]= (c[i+1]-c[i]);
// 			if(output[i]<0)
// 				output[i]*=-1;

	}
	for(int i =0 ; i<len;i++){
		
		if(i==len-1){
			cout<<c[i];
		}
		else{
			cout<<c[i]<<output[i];
		}

	}
}



int main()
{
	char c[1000];
	cin>>c;
	difference(c);

}