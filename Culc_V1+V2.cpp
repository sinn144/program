#include <iostream>
#include <cmath>
using namespace std;
//例題2.1 エネルギー方程式から軌道速度の計算

double CuVA( double mu, double a ){
  return sqrt( mu / a*pow(10,-3) ) * pow(10,-3);
}//第一宇宙速度

double CuVB( double mu, double a ){
  return sqrt( 2*mu / a * pow(10,-3) ) * pow(10,-3);
}//第二宇宙速度

double pi = 3.14159265359;
double ae = 6378.14;
double G = 6.67408e-11; //m^3/s^2*kg
double me = 5.972e24; //kg

int main(){  
  double ar,at;
  double vs;

  cout << me*G << endl;

  cout<< "How long is the radius of an orbit of the satellite? [km] :" << flush;
  cin >> ar;

  at = ae + ar;
  vs = CuVA( G*me, at );

  cout << "The satellite's velocity is " << vs << "[km/s],"<< endl;
  cout << " and Revolution period is " << (2*pi*ae/vs)/3600 << "[s]" << endl;

  cout << "The Velocity if satellite gets out to earth; " << CuVB( G*me,at ) << "[km/s]" << endl;

  return 0;
}