#include<iostream>

using namespace std;

int adiff(int a, int b)
{
  int r1, r2;
  r1 = a%360;
  r2 = b%360;
  if(r1 > r2)
  {
    if ( (r1 - r2) <= 180)
    {
      return r1-r2;
    }
    if ( (r1 - r2) > 180)
    {
      return 360-(r1-r2);
    }
  }
  else
  {
    if( r2 - r1 <= 180)
    {
      return r2-r1;
    }
    if( r2 - r1 > 180)
    {
      return 360 - (r2 - r1);
    }
  }
  return 0;
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
