class Solution {
public:
    int maximum69Number (int num) {
        int n=num;
        int c=0;
        int nod=0;
        vector<int>temp;
        while(num>0){
            int s=num%10;
            temp.push_back(s);
            num=num/10;
            nod++;
            if(s==9){
                c++;
            }

        }
        if(nod==c){
            return n;
        }
        int len=temp.size()-1;
        
        while(len>=0){
            if(temp[len]==6){
                temp[len]=9;
                break;
            }
            len--;
        }
        len=temp.size()-1;
        int ans=0;
        while(len>=0){
            ans=(ans*10)+temp[len];
            len--;

        }


        return ans;
    }
};