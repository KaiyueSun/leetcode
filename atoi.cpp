class Solution {
public:


    int myAtoi(string str) {
        
        int sz = str.size();
        int diff;
        int sum=0;
        int i=0;
        int sign=1;
        
        
        while (str[i]==' ' ){   //!!!!!== and=
            i++;
        }
        
        if (str[i]=='-'){
            sign=-1;
            i++;
        }else if (str[i]=='+'){   //also could be  if -, if + .only do one of them
             sign=1;
             i++;
        }
           

        for(; i<sz; i++){
  
            diff= str[i]-'0';
            
            if(diff>=0&&diff<10){
                
                  if (sum>INT_MAX/10||(sum==INT_MAX/10&&diff>INT_MAX%10)){   //== and =!!!!
                     if (sign==1) return INT_MAX;
                     else if (sign==-1) return INT_MIN;
                  }
                  
                  sum = sum * 10 + diff;  // the first diff could be merged to this equation 
        
            }else break;// return -1;
        }
  
    return sum*sign;
    }
    
    
    
};
