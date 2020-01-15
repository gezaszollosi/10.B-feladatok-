#include <iostream>

using namespace std;

int main()
{int v[100],v2[100],S=0,N,M,i;
cout << "N=";
cin >> N;

for(i=0;i<N;i++){
    cout << "v[" << i << "]=";
    cin >> v[i];
}
cout << "M=";
cin >> M;

for(i=0;i<M;i++){
    cout << "v[" << i << "]=";
    cin >> v2[i];


if(v[i]== v2[i]){
    S=S+v[i];
}
}


int d=0,a;
while (S>0){
    a=S%10;
    S=S/10;
    d=d*10+a;
}
cout << d;

    return 0;

}

