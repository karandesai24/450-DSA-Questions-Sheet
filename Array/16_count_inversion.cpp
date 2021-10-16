long long int inversionCount(long long arr[], long long N)
{
    // Your Code Here
    long long ans = 0LL;
    for (int i = 0;i < N;i++) {
        for (int j = i + 1;j < N;j++) {
            if (arr[j] < arr[i]) ans++;
        }
    }
    return ans;
}
