#include<stdio.h>
int main()
{
    int N,M;
    scanf ("%d %d", &N, &M);
    int A[N];
    
    for (int i = 0; i < N; i++)
    {
            scanf("%d", &A[i]);
    }
    int fre[100001]={0};
    for (int i = 0; i < N; i++)
    {
        if (A[i]<=M)
        {
            int val = A[i];
            fre[val]++;
            // if (A[i]==i)
            // {
            //     fre[A[i]]++;
            // }
        }
    }
    for (int i = 0; i < N; i++)
    {
        if (fre[i]!=0)
        {
            
            printf("%d\n", fre[i]);
        }
        
    }
    
    
    return 0;
}