#include "test.h"
using namespace std;

void test::runTests()
{
	cout<<"Test 1---IsEmpty \n";
	testIsEmpty();
	cout<<"\n";

	cout<<"Test 2---Size\n";
	testSize();
	cout<<"\n";

	cout<<"Test 3---Search\n";
	testSerach();
	cout<<"\n";

	cout<<"Test 4---AddBack\n";
	testAddBack();
	cout<<"\n";

	cout<<"Test 5---AddFront\n";
	testAddFront();
	cout<<"\n";

	cout<<"Test 6---Removeback\n";
	testRemoveBack();
	cout<<"\n";

	cout<<"Test 7---RemoveFront\n";
	testRemoveFront();
	cout<<"\n";

}


void test::testIsEmpty()
{
	LinkedListOfInts a;

	if(a.isEmpty())
	cout<<"a. Empty list returns empty.(PASSED) \n";
	else  
	cout<<"a. Empty list does not return empty.(FAILED)\n";

	a.addBack(1);

	if(a.isEmpty())
	cout <<"b. One element list returns empty.(FAILED)\n";

	else
	cout <<"b. One element list does not return empty.(PASSED)\n";
	
	
	a.addFront(2);

	if(a.isEmpty())
	cout <<"c. multiple elements list returns empty.(FAILED)\n";

	else
	cout <<"c. multiple elements list does not return empty.(PASSED)\n";

}

void test::testSize(){

	LinkedListOfInts a;
	LinkedListOfInts b;
	if(a.size()==0)
	cout<<"a. Empty List is Zero Size.(PASSED) \n";

  	else
  	cout << "a. Empty List is not a Zero Size.(FAILED)\n";
 

 	a.addFront(1);

	if(a.size() != 1)
    	cout << "b. size returns correct value after 1 addFront.(FAILED)\n";
  
 	else
    	cout << "b. size returns correct value after 1 addFront.(PASSED)\n";

	b.addBack(1);

  	if(b.size() != 1)
    	cout << "c. size returns correct value after 1 addBack.(FAILED)\n";
  
 	else
    	cout << "c. size returns correct value after 1 addBack.(PASSED)\n";
}

void test::testSerach(){

	LinkedListOfInts a;
	bool check = true;

	for(int i = 0 ;i<10 ; i++)
	{
		a.addBack(i);
	}


	for(int i = 0 ;i<10 ; i++)
	{
		if(a.search(i))
		check = true;
		else
		check= false;
	}

  	if(check)
	cout<<"a. The elements are able to find in the List.(PASSED) \n";
	else
	cout<<"a. The elements are not able to find in the List.(FAILED) \n";

	if(a.search(100))
	cout<<"b. The search is always return true (remark!! a. might be failed)(FAILED)\n";
	else
	cout<<"b. search returns false when value not in list (PASSED)\n";
}

void test::testAddBack(){

	LinkedListOfInts a;
	bool check = true;

	for(int i = 0; i < 10 ;i++)
	{
		a.addBack(i);
	}
	
	if(a.size()==10)
	cout<<"a. The size is correct by addBack.(PASSED) \n";
	else
	cout<<"a. The size is not correct by addBack.(FAILED) \n";
	
	vector<int> back = a.toVector();
	
	for(int i =0; i<10;i++)
	{
		int value = back.at(i);

	if(value != i)
	{
		check = false;
	}
	}


	if(check)
	cout<<"b. it is able to add correct element to back of the list.(PASSED) \n";
	else
	cout<<"b. it is not able to add correct element to back of the list.(FAILED) \n";

}

void test::testAddFront(){

	LinkedListOfInts a;
 	bool check =true;

	for(int i = 0; i < 10 ;i++)
	{
		a.addFront(i);
	}

	if(a.size()==10)
	cout<<"a. The size is correct by addFront.(PASSED) \n";
	else
	cout<<"a. The size is not correct by addFront.(FAILED) \n";

	vector<int> front = a.toVector();

	for(int i =0; i<10;i++)
	{
		int value = front.at(i);
	
	if(value != 9-i)
	{
		check= false;
	}
	}

	if(check)
	cout<<"b. it is able to add correct element to front of the list.(PASSED) \n";
	else
	cout<<"b. it is not add correct element to the front of List.(FAILED) \n";
}

void test::testRemoveBack(){
	LinkedListOfInts a;
	
	for(int i = 0; i < 10 ;i++)
	{
		a.addFront(i);
	}

	if(a.removeBack()==true)	
	cout<<"a. The removeBack is able to work.(PASSED) \n";
	

	else
	cout<<"a. The removeBack is not able to work.(FAILED) \n";
	
		if(a.size()==10)
		cout<<"b. The size is not changed by removeBack.(FAILED) \n";
		else
		cout<<"b. The size is able to change by removeBack.(PASSED) \n";
}

void test::testRemoveFront(){
	LinkedListOfInts a;
	for(int i = 0; i < 10 ;i++)
	{
	a.addFront(i);
	}
	if(a.removeFront()==true)
		cout<<"a. The removeFront is not able to work.(PASSED) \n";
		
	else
		cout<<"a. The removeFront is not able to work.(FAILED) \n";

		if(a.size()==10)
		cout<<"b. The size is not changed by removeFront.(FAILED) \n";
		else
		cout<<"b. The size is able to change by removeFront.(PASSED) \n";
}







