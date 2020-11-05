#include <iostream>
#include <vector>
#include <cassert>
#include <set>
#include <utility>

using namespace std; 

int main(int argc, char* argv[]) 
{
  set<int> iset;  //set a unique integer number
	
	iset.insert(11); //give the set some values
	iset.insert(-11);
	iset.insert(55);
	iset.insert(22);
	iset.insert(22);

	if(iset.find(55) != iset.end()) //find if the value is stored
	{
		iset.insert(55); //if it is not then put it
	}
	assert(iset.size() == 4);  //check your work and accuracy
  set<int>::iterator it;
	for(it = iset.begin(); it != iset.end(); it++)
	{
		cout << " " << *it;
	}
return 0;
}

