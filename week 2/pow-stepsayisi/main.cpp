/* O(logn) step sayisini bulan kod*/
#include <iostream>

using namespace std;

int step=0;
int pow(int x, int n)
{
    step++;
    if(n==0)
        return 1;
    if(n==1)
        return x;
    if(n%2==0)
        return pow(x*x, int(n/2));
    else
        return pow(x*x, int(n/2))*x;
}

int main()
{
    int sonuc = pow(3,10);
    cout << sonuc;
    cout << "\nStep Sayisi: " << step;
    return 0;
}
