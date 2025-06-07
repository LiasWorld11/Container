#include <string>
#include <iostream>

using namespace std;

template <class T>

class Container{
	
	private:
		//array to store element that not more than 50
		T data [50];
		//number of elements currently stored in the array
		int num;
		
	public:
		
		//constructor
		Container(T data);
		
		//destructor 
		~Container();
		
		//add elements into Container
		void addData(T newValue);
		
		//delete element from Container
		void deleteData(T oldValue);
		
		//print out 
		void print()const;
			
};

template <class T>
Container<T>::Container(T data){
	num=0;//starts with no elements
}

template <class T>
Container<T>::~Container(){
	//clear any dynamically allocated memory
	delete [] data;
	//reset the number of elements
	num = 0;
}	

//add elements into Container
template <class T>
void Container<T>::addData(T newValue){
	
	//element added must be less than 50
 	if (num < 50) {
 		
        data[num] = newValue;//new element added to array
        num++;//reflect element is added to the container
        
    } else {
    	
    	//if the element entered is more than 50 
         cout << "Error: Exceed the LIMIT!" << endl;
    }
}

//delete element from Container
template <class T>
void Container<T>::deleteData(T oldValue) {
	
	// check whether the element is found in Container
	bool found = false; 
	
    // find the element that need to be deleted
    for (int i = 0; i < num; ++i) {
    	
    	//element is found
        if (data[i] == oldValue) {
            found = true;
            
            // Shift elements to the left to replace deleted value
            for (int x = i; x < num - 1; ++x) {
                data[x] = data[x + 1];
            }
			// Decrement the size of the container
            num--; 
            cout << "Value deleted!" << endl;
            break; // Exit loop 
        }
    }
	//the element not found
    if (!found) {
        cout << "Element not found!" << endl;
    }
}

//print out 
template <class T>
void Container<T>::print()const{
	
	cout<<"Container content: ";
	//print the value that stored in container
	 for (int i = 0; i < num; i++) {
        cout << data[i] << " ";
    }
    cout<<endl;
}

