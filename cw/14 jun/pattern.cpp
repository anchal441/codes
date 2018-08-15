#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int flag=0;
	for(int i=1;i<=5;++i)
	{ if(i%2==0){
	
		for(int j=1;j<=5;++j)
		{    flag=flag+1;
		 if(flag%2==0){
		 	cout<<1;
		 }
		 else{
		 	cout<<0;
		 }

	}
	}else{
		flag=flag+1;
		if (flag%2==0){
			cout<<0;
		}
		else{
			cout<<1;
		}
	}

}cout<<"";
	}
}