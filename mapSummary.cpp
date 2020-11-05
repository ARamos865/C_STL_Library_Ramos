#include <iostream>
#include <string>
#include <cassert>
#include <map>

using namespace std; 

int main(int argc, char* argv[]) 
{
  map<string, string> phone_book;
    phone_book["411"] = "Directory"; //stores the number 411 as Directory
    phone_book["911"] = "Emergency"; //stores the number 911 as Emergency
    phone_book["508-678-2811"] = "BCC"; //stores the phone number as BCC
    if(phone_book.find("411") != phone_book.end())
      {
        phone_book.insert(make_pair(string("411"), string("Directory")));
      } //Creates a pair between 411 and Directory
      assert(phone_book.size() == 3);
      map<string, string>::const_iterator it;
      for(it = phone_book.begin(); it != phone_book.end(); ++it)
        {
         cout << " " << it->first
         << " " << it->second
         << endl;
        }
      //maps the other numbers together and displays them on the screen
return 0;
}
