#include <iostream>
using namespace std;


const int PRZYROST = 4;

template<class T>
Array<T>::Array()
{
    cout<<"Konstruktor pustej tablicy"<<endl;
              capacity = PRZYROST;
              A = new Element*[capacity];
              for(int i = 0; i < capapcity; i++)
                  A[i] = NULL;
    wypisz();
}

















template < class T>
class Array {T*table; int cnt; int capacity}
{
public:
	
  MyVector();
  MyVector(const std::initializer_list<T> &elements);
  ~MyVector();
	set
  	void Reserve(size_t size);
	void setSize(int set_cnt, int set_capacity) 
    {
        cnt = set_cnt; 
        capacity = set_capacity; 
    }
	private:
	T *table;
	int cnt ,
		capacity;
	
};

template<class T>
MyVector<T>::MyVector(size_t cnt) {
  Reserve(cnt);
}

template<class T>
Array<T>::Array(size_t capacity) {
  Reserve(capacity);
}

template<class T>
Array<T>::~Array() {
  Destroy();
}

template<class Element>
ostream& operator<<(ostream& str, const Array<T>& B) 
{
    str << "Tablica zawiera "<<B.size<<" elementow:"<<endl;
     for(int i = 0; i < B.size; i++)
     {  
         if (B.A[i] == NULL)
             cout << "NULL ";
         else
             cout << *B.A[i] << " ";
         cout << endl;

     }
    return str;
} 

int main ()
{


	return 0;
}
