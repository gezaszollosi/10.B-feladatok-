
#include <iostream>

using namespace std;

int main()
{int a,b,i,c,k,x,l;
cout << "a=";
cin >> a;
cout << "b=";
cin >> b;
for(i=a;i<=b;i++){
        l=0;
        x=i;
    while(x>0){
        c=x%10;
        x=x/10;
        l=l*10+c;
    }
    k=1;
    if(l==i){
            k=0;
        for(int o=2;o<=i/2;o++){
            if(i % o == 0){
                k=1;
            }
        }
    }
    if(k==0){
        cout << i << endl;
    }

}

}
