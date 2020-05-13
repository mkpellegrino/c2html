#include <iostream>
using namespace std;

int main()
{
  cout << "<pre>";
  char c = ' ';
  while( c != EOF )
    {
      c = cin.get();
      
      if( c == '\"' )
	{
	  cout << "&#34;";
	}
      else if( c == '>' )
	{
	  cout << "&gt;";
	}
      else if( c == '<' )
	{
	  cout << "&lt;";
	}
      else if( c == ' ' )
	{
	  cout << " ";
	}
      else if( c == '\n' )
	{
	  cout << endl;
	}
      else if( c ==EOF )
	{
	  cout << endl;
	}
      else
	{
	  cout << c;
	}
    }
  cout << "</pre>" << endl;
}
