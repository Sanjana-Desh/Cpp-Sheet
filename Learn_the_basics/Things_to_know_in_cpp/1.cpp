//To print if its a character, interger or long, float and double

class Solution {
  public:
    int dataTypeSize(string str) {
        // your code here
        if ( str == "Character")
        {
            return 1;
        }
        
        if ( str == "Integer")
        {
            return 4;
        }
        
        if ( str == "Long")
        {
            return 8;
        }
        
        if ( str == "Float")
        {
            return 4;
        }
        
        if ( str == "Double")
        {
            return 8;
        }
    }
};