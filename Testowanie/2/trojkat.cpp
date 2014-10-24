#include <iostream>
#include "math.h"

using namespace std;

bool podajTrojkat(double &a, double &b, double &c){
  cout << "Podaj bok a: ";
  cin >> a; 
  if(!cin)
    {
      cout << "\nBłąd, nieprawidłowe wejście.\n";
      return false;	
    }
  cout << "Podaj bok b: ";
  cin >> b; 
  if(!cin)
    {
      cout << "\nBłąd, nieprawidłowe wejście.\n";
      return false;
    }
  cout << "Podaj bok c: ";
  cin >> c; 
  if(!cin)
    {
      cout << "\nBłąd, nieprawidłowe wejście.\n";
      return false;	
    }
  return true;
}

bool czyTworzaTrojkat(double a, double b, double c)
{
  if( (a + b > c) && ( b + c > a) && ( c + a > b ))
    return true;
  else
    return false;
}

bool czyDodatnie(double a, double b, double c)
{
  if( (a>0) && (b>0) && (c>0))
    return true;
  else
    return false;
}
void jakiTrojkat(double a, double b, double c)
{
  if ( a == b && b == c )
    cout << "Trójkąt równoboczny\n";
  else if ( a == b || b == c || a == c)
    cout << "Trójkąt równoramienny\n";
  else 
    cout << "Trójkąt różnoboczny\n";

}

int main(int argc, char *argv[])
{
  double a=0,b=0,c=0;
  if(!podajTrojkat(a,b,c))
    return 0;
  else
    {
      if(!czyDodatnie(a, b, c))
	{ cout << "Wszystkie boki musza być większe od zera!\n"; return 0;}
      if(!czyTworzaTrojkat(a,b,c))
	{ 
	  cout << "Boki nie tworzą trójkąta\n";
	  return 0;
	}
      jakiTrojkat(a,b,c);	
      return 0;
    }
}

