#include<iostream>

using namespace std;

int adiff(int a, int b)
{
  int c;
  if( a - b > 0)
  {
    c = a - b;
    if( c >= 360)
    {
      c = c%360;
    }
  }
  if( a - b < 0 and a - b > -180)
  {
    c = a - b;
    c = -c;
  }
  if( a - b < -180)
  {
    c = a - b;
    c = c + 360;
  }

  return c;
}

int main(){
  cout << adiff(180,270) << endl;
  cout << adiff(210,45) << endl;
  cout << adiff(0,360) << endl;
  cout << adiff(10,350) << endl;
  cout << adiff(95,260) << endl;
  cout << adiff(90,-90) << endl;
  cout << adiff(1000,280) << endl;
  cout << adiff(60,244) << endl;
}
