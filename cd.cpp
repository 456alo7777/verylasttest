#include<iostream>
using namespace std;

int main(){
    int tc;
    
    cin >> tc;
    for(int t= 0 ; t< tc ;t++){
        int n; 
        cin >> n ;
        string s;
        cin >> s;
        int count0 = 0;
        int count1= 0;
        for(int i = 0 ; i< s.size() ;i++){
            if(s[i]=='0'){
                count0++;
            }else if(s[i]=='1'){
                count1++;
            }
        }
        if(count0==s.size()){
            cout << count0 << " " << count1<< endl;
            cout << "YES" << endl;
        }else if(count1==s.size()){
            cout << count0 << " " << count1 << endl;
            cout<< "NO" << endl;
        }else if(count0!=0 && count1!=0){
            cout << "YES" << endl;
        }
    }
    
    cout << "NO" ;
    cout << "what the hell"

    return 0;
}
