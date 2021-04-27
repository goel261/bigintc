#include<iostream>
#include<vector>
using namespace std;

class BigInt{
    public:
    vector<int> v;
    int sign;
    
    BigInt(string s){
        int i = 0;
        if(s[0]=='-'){
            sign = 1;
            i++;
        }
        else sign = 0;
        for(;i<s.size();i++)
            v.push_back(s[i]-'0');
    }
    BigInt(long long int x){
        if( x < 0 )
            sign = 1;
        else sign = 0;
        x = abs(x);
        while(x!=0){
            v.push_back(x%10);
            x = x/10;
        }
        reverse(v.begin(),v.end());
    }
    int compare(BigInt x){
        vector<int> a = x.v;
        if(a.size()>v.size())
            return -1;
        if(a.size() < v.size())
            return 1;
        
        for(int i=0;i<a.size();i++){
            if(a[i]>v[i])
                return -1;
            if(a[i]<v[i])
                return 1;
        }
        // Means that they have equal magnitude
        return 0;
    }
    // TO DO: add, sub, mul, div
    void add(BigInt a){
        vector<int> temp = a.v;

    }

};


int main(){
    
    return 0;
}