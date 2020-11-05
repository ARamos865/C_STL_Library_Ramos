//Dr_T Unit 2 COSC-1437 Starter 
/* Task -

Top level solution folder: C_STL_Library_YourLastName

create a single main.cpp that contains code samples and implementations of each of the following topics */

#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
#include <cassert>
#include <stack>
#include <set>
#include <utility>
#include <map>

using namespace std; 

//Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/ clarifications added
class MyClassVector1 
{ 
  private:  
      vector<int> vec; 
  public: 
      MyClassVector1 (vector<int> v)  //parameterized constructor
      { 
        vec = v; 
      } 
      void print() 
      { 
          /// print the value of vector 
          for (int i = 0; i < vec.size(); i++) 
          {
              cout << vec[i] << " "; 
          }    
      } 
};

class MyClassVector2
{
  private:
    vector<int> vec;
  
  public: 
    MyClassVector2 (vector<int> v) : vec(v)
    {

    }
    void print()
    {
      for(int i = 0; i < vec.size(); i++)
      cout << vec[i] << " ";
    }
};

class MyClassVector3
{
  private: 
    vector<int>& vec;

  public:
    MyClassVector3 (vector<int>& arr) : vec(arr)
    {

    }
    void print()
    {
      for(int i = 0; i < vec.size(); i++)
      cout << vec[i] << " ";
    }
};

typedef map<string, int> MapT;
typedef MapT::const_iterator MapIterT;


int main(int argc, char* argv[]) 
{
    /****Section_Name***Vectors*/ 
    //Write the base code for: 5. std::vector example
    vector<double> vd; //vd elments are floating point numbers
    vector<int> vi; //vi elements are integer numbers 
    vector<string> vs; //vs elements are string objects 

    //Expand this code to:

    //add 3 elements to the vd vector
    vd.push_back(1);
    vd.push_back(2);
    vd.push_back(3);
    vd.push_back(4);
    vd.push_back(5);
    vd.push_back(6);
    vd.push_back(55); 

    //add 3 elements to the vi vector
    vi.push_back(1);
    vi.push_back(2);
    vi.push_back(3);

   // add 3 elements to the vs vector
    vs.push_back("Ashley");
    vs.push_back("Ashley");
    vs.push_back("Ashley");

   // display the 3 elements in the vd vector
   cout << "\nValues in vd: \n"; 
   for(double vals : vd)
   {
     cout << vals << endl; 
   }
   cout << "\nAnother way to print vector: " << endl; 
   for(int i = 0; i < vd.size(); i++)
   {
     cout << vd[i] << endl; 
   }

    //display the 3 elements in the vi vector
    cout << "\nValues in vi: \n";
    for(int vals : vi)
    {
      cout << vals << endl;
    }
    cout << "\nAnother way to print vector: " << endl;
    for(int i = 0; i < vi.size(); i++)
    {
      cout << vi[i] << endl;
    }

   // display the 3 elements in the vs vector
    cout << "\nValues in vs: \n";
    for(string vals : vs)
    {
      cout << vals << endl;
    }
    cout << "\nAnother way to print vector: " << endl;
    for(int i = 0; i < vs.size(); i++)
    {
      cout << vs[i] << endl;
    }


    /****Section_Name***Vector_as_Class_Member*/ 
    //Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/

   cout << "\nVector_as_Class_Member" << endl; 
    vector<int> vec; 
        for (int i = 1; i <= 5; i++) 
            vec.push_back(i); 
        MyClassVector1 obj(vec); 
        obj.print(); 
      
      //Continue with MyClassVector2 and MyClassVector3

    /****Section_Name***STL_Iterators*/ 
    vector<int> vint (3); // vector with 3 integer numbers
	  vint [0] = 10;
	  vint [1] = 20; 
	  vint [2] = 30;
	  vint [3] = 40;
	  vint [4] = 50;
	  vint [5] = 60;
	  vint [6] = 70;
	  vint [7] = 80;
	  vint [8] = 90;
	  vint [9] = 100;

	//Display the elements of the vector
	vector<int>::iterator it;
	for(it = vint.begin(); it != vint.end(); ++it)
	{
		// iterator is like pointer and access the value of the element pointed to by it
		cout << " " << *it;
	}

    /****Section_Name*** Stack*/
  stack<int> st;
	
	st.push(100); // makes a copy of the argument and puts in the vector
	assert(st.size() == 1); //verify the number of elements on the stack
	assert(st.top() == 100); //verify the element value

	st.top() = 456; //assign a new value to the top
	assert(st.top() == 456); // verify the new number of elements on the stack
	
	st.pop(); // remove the element 
	assert(st.empty() == true);


    /****Section_Name**** Set*/
    //Write the code as presented in: 3. std::set
 // set<int> iset;  //set a unique integer number
	
	//iset.insert(11); //give the set some values
//	iset.insert(-11);
//	iset.insert(55);
//	iset.insert(22);
//	iset.insert(22);

//	if(iset.find(55) != iset.end()) //find if the value is stored
//	{
//		iset.insert(55); //if it is not then put it
//	}
//	assert(iset.size() == 4);  //check your work and accuracy
 // set<int>::iterator it;
//	for(it = iset.begin(); it != iset.end(); it++)
//	{
//		cout << " " << *it;
//	}

  return 0;  

    /****Section_Name****Pair_Structure*/
    //Write the code as presented in: 4. std::pair structure

    pair< string, string > strstr; // indicates the two variables and their pointers
	  strstr.first = "Hello"; // first variable which is string so str
	  strstr.second = "World"; // second variable which is string so str

	  pair< int, string > intstr; // indicates an integer and string variables with pointer reference
  	intstr.first = 1; //first variable which is integer so the int
	  intstr.second = "one"; //second variable which is string so the str part
	
    pair< string, int > strint("two", 2); //indicates a string and integer variables with pointer reference this indicates another way to write the pair structure
	  assert(strint.first == "two"); //first variable which is a string so the str
    assert(strint.second == 2); //second variable which is an integer so int

  return 0;


    /****Section_Name**** Map_Insert*/
    //Write the code as presented in: 14. std::map::insert

    MapT amap;
    pair<MapIterT, bool> result = amap.insert(make_pair("Fred", 45)); //Creates a pair with Fred and 45

    assert(result.second == true); //Checks to see if the statement is true. If the second is 45 it is true

    assert(result.first->second == 45); //Second is 45

   result = amap.insert(make_pair("Fred", 54)); //Checks and points to Fred already in the map

    assert(result.second == false); //New pair made and will be false if second is 45
    assert(result.first->second == 45); //Second should now be 54 so the statement is false

    /****Section_Name****Map_Summary*/
    //Write the code as presented in: 16. Map summary

   // map<string, string> phone_book;
   // phone_book["411"] = "Directory"; //stores the number 411 as Directory
   // phone_book["911"] = "Emergency"; //stores the number 911 as Emergency
   // phone_book["508-678-2811"] = "BCC"; //stores the phone number as BCC
   // if(phone_book.find("411") != phone_book.end())
   //   {
   //     phone_book.insert(make_pair(string("411"), string("Directory")));
  //    } //Creates a pair between 411 and Directory
  //    assert(phone_book.size() == 3);
  //    map<string, string>::const_iterator it;
 //     for(it = phone_book.begin(); it != phone_book.end(); ++it)
  //      {
   //      cout << " " << it->first
  //       << " " << it->second
   //      << endl;
   //     }
      //maps the other numbers together and displays them on the screen

    /****Section_Name**** Sort_Algorithm*/
    //Write the code as presented in: 23. sort example

    int arr[100]; // creates an array with 100 elements
    sort(arr, arr + 100); //sorts the array in ascending order
    vector<int> v1; //Sets vector v1 as the array data
    sort(v1.begin(), v1.end());

    /****Section_Name****Predicate_Algorithm*/
    //Write the code as presented in: 25. count_if and predicate function

    bool less_than_7(int value) //boolean expression to find a value less than 7
    {
     return value < 7; //returns the value that is less than 7
    } 
    vector< int > v1;
    int count_less = std::count_if( v1.begin(), v1.end(), less_than_7 ); //counts through the vector to find the value that is less than 7

      return 0; 
 }