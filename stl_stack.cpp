#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m,x;
    char cmd;
    cin>>n;
    while(n--){
        stack<int> st;
        cin>>m;
        while(m--){
            cin>>cmd;
            if(cmd=='a'){
                cin>>x;
                st.push(x);
            }
            if(cmd=='b'){
                if(!st.empty()){
                    cout<<st.top()<< " ";
                    st.pop();
                }else{
                    cout<<-1<<" ";
                }
            }
            if(cmd=='c'){
                cout<<st.size()<<" ";
            }
            if(cmd=='d'){
                if(!st.empty()){
                	cout<<st.top() << " ";	
				}
                else cout<<-1;
            }
        }
    }
}
