  // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b){
        
        int count =0;
        int xr=a^b;
        while(xr>0) {
            xr=xr&(xr-1);
            count++;
            
        }
        
        // Your logic here
         return count ;
