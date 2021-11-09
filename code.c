#include<stdio.h>
void nhap(int &n)
{
    scanf_s("%d",&n);
}
int main()
{
    int n;
    nhap(n);
}