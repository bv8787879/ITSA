//王順護 資工一乙 4B1G0172
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int x,y;
    while (cin>>x>>y){
            int r=10000;
            double new_r=(x*x)+(y*y);
            if(new_r<r){
                cout<<"inside"<<endl;
            }
            else{
                cout<<"outside"<<endl;
            }
    }

    return 0;

}
