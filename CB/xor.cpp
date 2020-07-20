#include <iostream>
#include <cassert>

using namespace std;

const int MAX = 15;
const int MODULO = 1000000000;

int T, N, M, P, K, ANS=0;
int b[MAX], c[MAX];

struct matrix
{
    int rowSize = MAX - 1;
    int columnSize = MAX - 1;
    int data[MAX][MAX];
    matrix()
    {
        for (int i = 1; i <= rowSize; i++)
        {
            for (int j = 1; j <= columnSize; j++)
            {
                data[i][j] = 0;
            }
        }
    }
    matrix operator*(const matrix other) const
    {
        assert(columnSize == other.rowSize);
        matrix result = matrix();
        for (int i = 1; i <= rowSize; i++)
        {
            for (int j = 1; j <= other.columnSize; j++)
            {
                for (int k = 1; k <= columnSize; k++)
                {
                    result.data[i][j] = (result.data[i][j] + 1LL * data[i][k] * other.data[k][j] % MODULO) % MODULO;
                }
            }
        }
        result.rowSize = rowSize;
        result.columnSize = other.columnSize;
        return result;
    }
    matrix power(int e)
    {
        if (e == 1)
        {
            return *this;
        }
        if (e & 1)
        {
            return (*this) * power(e - 1);
        }
        matrix half = power(e >> 1);
        return half * half;
    }
};

int main()
{
    cin >> T;
    for (int cases = 0; cases < T; cases++)
    {
        cin >> K;
        for (int i = 1; i <= K; i++)
        {
            cin >> b[i];
        }
        for (int i = 1; i <= K; i++)
        {
            cin >> c[i];
        }
        cin >> N >> M >> P;

        for (int a = N; a <= M; a++)
        {
            if (a <= K)
            {
                cout << b[a] << endl;
                continue;
            }

            matrix t, I;
            t.rowSize = K;
            t.columnSize = K;
            for (int i = 2; i <= K; i++)
            {
                t.data[i - 1][i] = 1;
            }
            for (int i = 1; i <= K; i++)
            {
                t.data[K][i] = c[K - i + 1];
            }
            I.rowSize = K;
            I.columnSize = 1;
            for (int i = 1; i <= K; i++)
            {
                I.data[i][1] = b[i];
            }
            matrix result = t.power(a - K) * I;
            ANS= (ANS%P + result.data[K][1]%P)%P;
            cout<<ANS+1<<"\n";
        }
    }

    return 0;
}