#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> matrixSum(int n, int m, vector<vector<int>> mat, int q, vector<int> queries[])
    {
        int i = 0, j = 0, a, b;
        vector<int> list(q);
        while (q--)
        {
            int sum = 0;
            int k = queries[i][j];
            a = queries[i][j + 1];
            b = queries[i][j + 2];
            for (int x = 0; x < n; x++)
            {
                for (int y = 0; y < m; y++)
                {
                    if (((x - k == a) && (y - k == b || y == b || y + k == b)) || ((x == a) && (y - k == b || y + k == b)) || ((x + k == a) && (y - k == b || y == b || y + k == b)))
                    {
                        sum += mat[x][y];
                    }
                }
            }
            list[i] = sum;
            i++;
            j = 0;
        }
        return list;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, q, ty, i, j;
        cin >> n >> m;
        vector<vector<int>> mat(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> mat[i][j];
        cin >> q;
        vector<int> queries[q];
        for (int k = 0; k < q; k++)
        {
            cin >> ty >> i >> j;
            queries[k].push_back(ty);
            queries[k].push_back(i);
            queries[k].push_back(j);
        }
        Solution ob;
        vector<int> ans = ob.matrixSum(n, m, mat, q, queries);
        for (int u : ans)
            cout << u << endl;
    }
    return 0;
}