#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int N, K;
        cin >> N >> K;
        if (N>K)
        {
            cout << -1 << endl;
        }
        else
        {
            vector<int> A(N);
            for (int i = 0; i < N / 2; i++)
            {
                A[i] = 2;
            }
            for (int i = N / 2; i < N; i++)
            {
                A[i] = 1;
            }
            int array_sum = 0;
            for (int i = 0; i < N; i++)
            {
                array_sum += A[i];
            }
            A[N - 1] += K - array_sum;
            for (int i = 0; i < N; i++)
            {
                cout << A[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
