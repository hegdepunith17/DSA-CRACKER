  // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n){
        int res=0,count=0;
        while(n>0){
            n=n&(n-1);
            count++;
        }
        if(count==1)
          return true;
        else 
         return false;
        
    }
