#include <iostream>

using namespace std;

int main()
{int n,v[1000],max=-INT_MAX,min=INT_MAX,i,max2=-INT_MAX,min2=INT_MAX,min3=INT_MAX,S=0,P=1,a,b,lkkt;
cout << "Add meg az n-et=";
cin >> n;
for( i=0;i<n;i++){
        cout << "v[" << i << "]";
        cin >> v[i];

}
for(i=0;i<n;i++){
    cout << v[i] << " "  << endl;
}
for(i=0;i<n;i++){
    if ( v[i] > max ){
        max2=max;
        max=v[i];
    }
    else if(max2<v[i]){
            max2=v[i];

    }
    if(v[i] < min){
        min3=min2;
        min2=min;
        min=v[i];
    }
    else if(min2>v[i]){
        min3=min2;
        min2=v[i];

    }
    else if (min3>v[i]){
        min3=v[i];
    }



    }
a=min3;
b=max2;
S=min3+max2;
P=min3*max2;
while(a!=b){
    if(a>b){
        a=a-b;
    }
    else{
        b=b-a;
    }
}
lkkt=P/a;
cout << min3 << endl;
cout << max2 << endl;
cout << a << endl;
cout << S << endl;
cout << P << endl;
cout << lkkt << endl;







return 0;
}
