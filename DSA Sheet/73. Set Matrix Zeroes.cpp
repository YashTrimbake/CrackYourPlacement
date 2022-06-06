class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();    //row = 3
        int n = matrix[0].size(); //column =3
        int x = 1;    //1st row natural zero if we found then set it to 0
        int y = 1;    //1st column natural zero if we found then set it to 0
        
        for(int i = 0; i<m; i++){
            if(matrix[i][0] == 0) y = 0;        //iterating 1st column and if we see zero then make x=0
        }
        
         for(int j = 0; j<n; j++){
            if(matrix[0][j] == 0) x = 0;        //iterating 1st row and if we see zero then make x=0
        }
        
        for(int i=1; i<m; i++){             //iterating the inner matrix with i=1 and j=1
            for(int j=1; j<n; j++){         //to set markers to zero of row and col
                if(matrix[i][j] == 0){
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }
        
        for(int i=1; i<m; i++)       //To set all elements of corresponding row as 0 for marker element = 0
        {
            if(matrix[i][0]==0)
            {
                for(int j = 1; j<n; j++)
                    matrix[i][j] = 0;
            }
        }
        
        for(int j=1; j<n; j++)      //To set all elements of corresponding column as 0 for marker element = 0
        {
            if(matrix[0][j]==0)
            {
                for(int i = 1; i<m; i++)
                    matrix[i][j] = 0;
            }
        }
        
        if(x==0)                    //if x is 0, set 1st row as 0
        {
            for(int j=0;j<n;j++){
                matrix[0][j] = 0;
            }
        }
        
        if(y==0)                    //if y is 0, set 1st column as 0
        {
            for(int i=0;i<m;i++){
                matrix[i][0] = 0;
            }
        }
    }
};
