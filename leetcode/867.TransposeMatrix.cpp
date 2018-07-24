// Given a matrix A, return the transpose of A.

// The transpose of a matrix is the matrix flipped over it's main diagonal, switching the row and column indices of the matrix.

 

// Example 1:

// Input: [[1,2,3],[4,5,6],[7,8,9]]
// Output: [[1,4,7],[2,5,8],[3,6,9]]

// Example 2:

// Input: [[1,2,3],[4,5,6]]
// Output: [[1,4],[2,5],[3,6]]

 

// Note:

//     1 <= A.length <= 1000
//     1 <= A[0].length <= 1000


#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int> > transpose(vector<vector<int> >& A) {
        vector<vector<int> > output(A[0].size(),vector<int>(A.size(),0));
        for(int i =0; i< A.size();i++){
            for(int j = A[i].size()-1; j >= 0; j--)
            {
                output[j][i]=A[i][j];
            }   
        }
        return output;
    }
};