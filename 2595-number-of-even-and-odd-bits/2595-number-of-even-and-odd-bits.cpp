class Solution {
public:
    string  bin(int n){
        string s;
        while(n!=0){
            s.push_back(n%2+'0');
            n=n/2;
        }
        return s;
    }
    vector<int> evenOddBit(int n) {
        int even=0;
        int odd=0;
        
        string s=bin(n);
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                if(i&1){
                    odd++;
                }else{
                    even++;
                }
            }
        }
        
        return {even,odd};
        
    }
};