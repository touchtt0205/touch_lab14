#include <iostream>
#include <cmath>
using namespace std;
void stat(const double[],int,double[]);
int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}

void stat(const double a[] , int n , double b[]){
    int i;
    double sum;
    for(i=0;i<n;i++){
        sum+=a[i];
    }
    sum = sum/n;
    b[0]=sum;

    float sd;
    double u;
    for(i=0;i<n;i++){
        u += pow(a[i],2);
    }
        double e = u/n;
        sd = sqrt(e-(pow(sum,2)));
        b[1]=sd;

    float gm;
    float g=1;
    for(i=0;i<n;i++){
        g *= a[i];
    }
        gm = pow(g,(float)1/n);
        b[2]=gm;

    float hm;
    float k=0;
    for(i=0;i<n;i++){
        k += 1/a[i];
    }
        hm = n/k;
        b[3]=hm;


    double max = a[0] , min = a[0];
    for(i=1;i<n;i++){
        if(a[i]>max) max=a[i];
    b[4]=max;
        if(a[i]<min) min=a[i];
    b[5]=min;
    }
}