// if choice 1 then calculate the area of circle else of rectangle the radius and length and b are in arr

class Solution {

  public:
    double switchCase(int choice, vector<double> &arr) {
        // code here
        const double pi = 3.14159;
        switch(choice){
            
            case 1: return (pi * arr[0] * arr[0]);
                    
            case 2: return arr[0] * arr[1];
                    
        }
        
        
    }
};