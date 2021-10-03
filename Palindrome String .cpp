class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    int  start=0;
	    int  end=S.size()-1;
	    while(start<=end)
	    {
	        if(S[start]==S[end])
	        {
	            start++;
	            end--;
	            
	        }
	        else return 0 ;
	    }
	    return 1;
	}

};
