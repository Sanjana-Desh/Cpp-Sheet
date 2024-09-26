// To check if a number is lesser equal or greater than other

class Solution {
  public:
    string compareNM(int n, int m){
        // code here
        
        if ( n<m )
        {
            return "lesser";
        }
        
        if ( n>m )
        {
            return "greater";
        }
        
        if ( n==m )
        {
            return "equal";
        }
    }
};