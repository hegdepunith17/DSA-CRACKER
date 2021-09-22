class Solution
{
    public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) {
	int x = n / k,count=0;
	unordered_map<int, int> c;

	for(int i = 0; i < n; i++)
	{
		c[arr[i]]++;
	}
  for(auto i : c)
	{
       if (i.second > x)
		{
		    count++;
		}
	}
	return count;
        
    }
};
