class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();
        for(int i = 1; i <= n/2;i++){
            if(n % i == 0){
                string pt = s.substr(0 , i);
                string str = "";

                int idx = n/i ;
                for(int j = 0; j < idx; j++){
                   str += pt ;
                }
                if(str == s) return true;
            }
        }
        return false ;
    }
};
