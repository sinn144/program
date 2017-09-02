#include <iostream>
#include <cmath>
using namespace std;

int main(){
  double Y,Ya;
  double Yh,Ym;
 
  cout << "日数を書いてください" << flush;
  cin >> Y;

  Yd = floor(Y)
  Yh = floor((Y-Yd)*24)
  Ym = floor(((Y-Yd)*24-Yh)*60)
  Ya = ((Y-Yd)*24-Yh)*60-Ym

  cout << "貴方の書いた時間は、 " << Yd << "日" << Yh　<< "時" <<　Ym << "分あまり"<< Ya << "ですね。" << endl; 


  return 0;
}