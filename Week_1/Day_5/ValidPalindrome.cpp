class Solution {
public:
    bool isPalindrome(string s) {
      
      string result ="" ;
      for(char ch : s){
        if(isalnum(ch)){
            result += tolower(ch);
        }
      }
      int i = 0, j = result.length()-1 ;
      while(i <= j){
        if(result[i] != result[j]){
            return false;
        }
        i++;
        j--;
      }
      return true;
    }
};
