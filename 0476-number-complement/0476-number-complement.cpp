class Solution {
public:
    string binary(int n){
        string s="";
        while(n>0){
            if(n%2==0){
                s.push_back(1);
            }
            else{
                s.push_back(0);
            }
            n=n/2;
        }
        reverse(s.begin(),s.end());
        return s;
    }
    int baseten(string s){
        long long c=1;
        int l=s.length();
        int ans=0;
        int i=l-1;
        while(i>=0){
            if(s[i]==1){
                ans=ans+(c);

            }
            i--;
            c=c*2;

        }
        return ans;
    }
    int findComplement(int n) {
        if(n==0){
            return 1;
        }
        string s=binary(n);
        int value=baseten(s);
        return value;

        
    }
};