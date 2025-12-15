vector <int> A = arr;
    sort(A.begin(),A.end());
    vector <int> B(n);

    int x = 0;
    while(x < n)
    {
        for(int i = 0; i < n; i++)
        {
            B[i] = A[(i+x)%n];
        }
        if(B == arr)
            return true;
        x++;
    }
    return false;