#include <iostream>
#include <cmath>

using namespace std;

struct para{
  double a;
  double b;
  double c;
};

para podaj1(para licz)
{
  cout<<"Podaj liczbę=";
  cin>>licz.a;
  licz.b=0;
  licz.c=0;
  return licz;
}

para podaj(para licz)
{
  cout<<"Podaj pierwszą liczbę=";
  cin>>licz.a;
  cout<<"Podaj drugą liczbę=";
  cin>>licz.b;
  licz.c=0;
  return licz;
}

para podaj2(para licz)
{
  cout<<"Podaj a=";
  cin>>licz.a;
  cout<<"Podaj b=";
  cin>>licz.b;
  cout<<"Podaj c=";
  cin>>licz.c;
  return licz;
}

para delta(para licz)
{
  double del=(licz.b*licz.b)-(4*licz.a*licz.c);

  if(del<0)
    {
      cout<<"Nie ma miejsc zerowych"<<endl;		
    }
  else
    {
      if(del==0)
	{
	  double x0;
	  x0=(-licz.b)/(2*licz.a);
	  cout<<"Miejsce zerowe wynosi = "<<x0<<endl;
	}
      else
	{
	  double x1;
	  double x2;
	  x1=(-licz.b-sqrt(del))/(2*licz.a);
	  x2=(-licz.b+sqrt(del))/(2*licz.a);
	  cout<<"Miejsca zerowe wynoszą = "<<x1<<" oraz "<<x2<<endl;
	}
    }
}

void wynik(double w){
  cout<<"Wynik działania wynosi="<<w<<endl;
}

int main()
{
  cout<<"Witam w Kalkulatorze"<<endl;
  cout<<"Wybierz:\n0-wyjście,\n1-dodawanie,\n2-odejmowanie,\n3-mnozenie,\n4-dzielenie,\n5-pierwiastek,\n6-równanie kwadratowe"<<endl;

  int znak=1;
  do
    {
      cout<<"Wyieram=";
      cin>>znak;
      cout<<"\n\n";

      para liczby;

      switch(znak)
	{
	case 1:
	  liczby=podaj(liczby);
	  wynik(liczby.a+liczby.b);
	  break;
	case 2:
	  liczby=podaj(liczby);
	  wynik(liczby.a-liczby.b);
	  break;
	case 3:
	  liczby=podaj(liczby);
	  wynik(liczby.a*liczby.b);
	  break;
	case 4:
	  liczby=podaj(liczby);
	  if(liczby.b==0)
	    {
	      cout<<"Nie dzieli się przez zero!!!\n";
	      break;
	    }
	  wynik(liczby.a/liczby.b);
	  break;
	case 5:
	  liczby=podaj1(liczby);
	  wynik(sqrt(liczby.a));
	  break;
	case 6:
	  liczby=podaj2(liczby);
	  delta(liczby);
	  break;
	case 0:
	  break;
	default:
	  cout<<"Nic nie wybrałeś\nprzypominam\nWybierz:\n0-wyjście,\n1-dodawanie,\n2-odejmowanie,\n3-mnozenie,\n4-dzielenie,\n5-pierwiastek,\n6-równanie kwadratowe"<<endl;
	  break;
	}

    }while(znak!=0);

  cout<<"Dowidzenia ;)"<<endl;
  return 0;
}
