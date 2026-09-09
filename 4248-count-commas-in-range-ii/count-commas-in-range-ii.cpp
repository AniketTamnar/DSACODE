    class Solution {
    public:
        long long countCommas(long long n) {
            long long comma=0;
            long long base=1000;
            if(n<1000) return 0;
            else{
                while(base<=n){
                comma+=(n-base+1);
                base*=1000;}
            }
            
            return comma;
        }
    };