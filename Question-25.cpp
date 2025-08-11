#include <iostream>
using namespace std;

// 1. Global variable
int num = 100;
class Test{
    private:
        int num;
    public:
    // 2. Initialize class member outside the class
    Test(int num){
        this ->num = num;
    }
    void display(){
        cout << "Local num [object member]: " << num << endl;
        cout << "Global num using scope resolution operator: " << ::num << endl;
    }
    
    // 3. Static member function and static variable
    static int count;
    static void increment(){
        count++;
    }
};

//4. Define static member outside the class using scope resolution operator
int Test::count = 0;

//5. Function outside the class using scope resolution operator
void showCount(){
    cout << "Static count is: " << Test::count << endl;
}

int main(){
    Test obj1(10);
    Test obj2(20);
    obj1.display();
    cout << endl;
    obj2.display();
    cout << endl;
    Test::increment();
    Test::increment();
    showCount();
    return 0;
}