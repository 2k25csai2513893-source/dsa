class Solution {
public:
    int countOdds(int low, int high) {
        long long value=high-low+1;
        if(value%2==0){
            return value/2;
        }
        long long d=(high-low);
        if(low%2==0){
            
            return d/2;
        }
      return (d/2)+1;

        
    }
};