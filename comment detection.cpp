#include <bits/stdc++.h>
using namespace std;
#define nn "\n"
#define ll long long
#define loop(it,start,end) for(int it =start;it<end;++it)
#define FIO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define pyes cout<<"YES"
#define pno cout<<"NO"
int main(){
 //FIO;
 string input,kind;
 string txt;
 int flag=0;
while(getline(cin,input)){
    if (input[0]==';'){
        break;
    }

    loop(i,0,input.size()){
        if(input[i]=='/'&&input[i+1]=='/' ){
            kind= "this is a single comment: ";

            for(int j=i+2;j<input.size();++j){
                txt+=input[j];
            }


            break;
        }
        else if(input[i]=='/' && input[i+1]=='*'){
                for(int j=i+2;j<input.size();++j){
                txt+=input[j];
            }

            flag=1;
        }
        else if(flag==1){

                if(input[i]=='*' && input[i+1]=='/'){

                kind="this is multi line comment ";
                flag==0;
                break;
            }
        }
    }
}
cout<<kind<<txt;
	return 0;
}
