#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float x1 , x2 , a , b , c , d ;
    cout << "This Is A Program To Solve Quadratic Equation \n ";
    cout << "Please Put The Numbers a And b And c \n";
    cin  >> a >> b >> c;

    if(a==0){
        if(b==0)
         cout<< "This Is Not An Equation \n";
        else{
        x2 = (-c)/b;
        cout<< "This Is An Equation From Form bx+c = 0, And The Answer Is: "<< x2 << endl;
        }
    }
    else{

        cout << "This Is An Equation From Form ax+bx+c = 0 \n";
        d = b*b-4*a*c;
        if (d<0){
        cout << "This Equation Is Impossible \n ";
        }
        else if (d == 0){
        x1 = (-b)/2*a ;
        cout << "In This Case Delta Is Equal To 0 And X1= X2 And The Solution Is : "<< x1<<endl ;
        }
        else if (d > 0){
         cout << "The Value Of Delta Is: " << d <<endl ;
         x1 = (-b -sqrt(d))/2*a ;
         cout << "X1 = " << x1 << endl;
         x2 = (-b +sqrt(d)/ 2*a);
         cout << "\nX2 = " << x2 << endl ;
        }
    }
    return 0 ;
}
