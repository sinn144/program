#include <iostream>
#include <cmath>
using namespace std;

//ex2.2 静止衛星の軌道半径と公転周期の半径
//Kaplerの第三法則: a^3*n^2 = mu

double pi = 3.14159265359;
double P = 23*3600 + (56*60);

double Ae(double Ps){

  double mu = 6.67408e-11 * 5.972e24;//[m^3/s^2]
  double n = 2*pi / Ps ;// [/s]

  return pow ( mu/(n*n) , (double)1/(double)3 );
}

int main () {
  cout << "Given P is " << P << "[s]." << endl;
  cout << "The orbit radias is " <<  Ae(P) << " [m]." << endl;
  cout << " = " << Ae(P) / (6378.14) * pow(10,-3) << " a_e " << endl;

  return 0;
}
