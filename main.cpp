
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
   int a,s=0;

    ifstream bemenet("n.in");
    ofstream kimenet("tokeletes.be");
    bemenet >> a;
    while(bemenet >> a){
            s=0;

        for (int i=1; i<a-1; i++){
        if(a%i==0){
            s=s+i;
        }
        }

    if(s==a){

    kimenet << 1 << endl;
    }
    else{
        kimenet << 0 << endl;
    }


    }





    bemenet.close();
    kimenet.close();

    return 0;
}
