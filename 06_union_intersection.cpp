class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        set<int>s;
       
        for(int i=0;i<n;i++)
        {
         s.insert(a[i]);
       
        }
        for(int i=0;i<m;i++)
        {
         s.insert(b[i]);
       
        }
   return s.size();
   
    }

};



//  void interSection(int a[], int b[], int n, int m)
// {
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (a[i] == b[j])
//             {
//                 count++;
//             }
//         }
//     }
//     cout << count;
//}





