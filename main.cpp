#include <iostream>

using namespace std;

int main()
{int a,n,i;
float atlag1=0,atlag2=0,j=0,k=0,S=0,P=0;
cout << "n=";
cin >> n;
for(i=0;i<n;i++){
    cout << "a=";
    cin >> a;
     if(a % 2 ==0){
        j=j+1;
        S=S+a;


     }
     else {
        k=k+1;
        P=P+a;

     }


}
atlag1=S/j;
atlag2=P/k;
cout << "A parosok atlaga:" << atlag1 << endl;
cout << "A paratlanok atlaga:" << atlag2;

   return 0;
}
