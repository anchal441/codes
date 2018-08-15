#include <iostream>
#include <cstring>
#include <set>
using namespace std;
set <string> s;
void permute(char str[],int be,int en){
    int i;
    if(be==en){
        s.insert(str);
    }
    else{
        for(i=be;i<=en;i++){
            swap(str[i],str[be]);
            permute(str,be+1,en);
            swap(str[i],str[be]);
        }
    }
}

int main() {
    char str[21];
    cin>>str;
    int n = strlen(str);
    //for(int i=0;str[i]!='\0';i++) n++;
    permute(str,0,n-1);
    for(set <string> :: iterator it=s.begin();it!=s.end();it++){
        cout<<*it<<endl;
    }
    return 0;
}