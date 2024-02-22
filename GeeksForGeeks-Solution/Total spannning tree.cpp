
//        ****************  Author :  Tashin.Parvez  ****************
//        ************* United International University *************
//        ****************  Updated:    27/10/23     ****************

#include <bits/stdc++.h>
#define CRACKED return 0;
#define nl endl // NewLine
#define null NULL
#define sp " " // space
#define setDec(x) fixed << setprecision(x)
#define len(s) s.length()
#define deb(n) cout << "Tashin   " << #n << " = " << n << endl; // debug code
#define debt cout << "Tashin   " << endl;                       // debug code

using namespace std;

int determinantOfMatrix(vector<vector<int>> matrix)
{
    int det = 0;
    if (matrix.size() == 1)
        return matrix[0][0];
    else if (matrix.size() == 2)
        return matrix[0][0] * matrix[1][1] - matrix[1][0] * matrix[0][1];
    else
    {
        for (int p = 0; p < matrix[0].size(); p++)
        {
            vector<vector<int>> temp;
            for (int i = 1; i < matrix.size(); i++)
            {
                vector<int> row;
                for (int j = 0; j < matrix[0].size(); j++)
                {
                    if (p != j)
                        row.push_back(matrix[i][j]);
                }
                if (row.size() > 0)
                    temp.push_back(row);
            }
            det = det + matrix[0][p] * pow(-1, p) * determinantOfMatrix(temp);
        }
        return det;
    }
}

int countSpanningTrees(vector<vector<int>> &matrix, int n, int m)
{
    vector<int> degree(n, 0);
    vector<vector<int>> adjMatrix(n, vector<int>(n, 0));

    for (auto it : matrix)
    {
        //   uth row er vth column
        adjMatrix[it[0]][it[1]] = 1;

        //   vth row er uth column
        adjMatrix[it[1]][it[0]] = 1;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (adjMatrix[i][j] == 1)
            {
                degree[i]++; /////           just counting the degree
            }
        }
    }

    // Updating the values of primary diagonal with degree of the node
    for (int i = 0; i < n; i++)
    {
        adjMatrix[i][i] = degree[i];
    }

    // Replacing all 1 in the matrix which are not present on primary diagonal with -1
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i != j) and adjMatrix[i][j] == 1)
            {
                adjMatrix[i][j] = -1;
            }
        }
    }

    

    // Submatrix of size (n-1)*(n-1) in which 1st row and 1st column values will not be there
    vector<vector<int>> submatrix(n - 1, vector<int>(n - 1));

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            submatrix[i - 1][j - 1] = adjMatrix[i][j];
        }
    }

    // This will be the answer as (-1)^(1+1) will be equal to 1 only
    return determinantOfMatrix(submatrix);
}