#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

class student {
    private: //access specifier.
        int age;
        string first_name;
        string last_name;
        int standard;
    
    public:
        int get_age() { 
            return age;
        }
        void set_age(int agePassedIn) { 
            age = agePassedIn;
        }
        
        string get_first_name() {
            return first_name;
            }
        void set_first_name(string firstnamePassedIn) {
            first_name = firstnamePassedIn;
            }
        
        string get_last_name() {
            return last_name;
            }
        void set_last_name(string lastnamePassedIn) {
            last_name = lastnamePassedIn;
            }
            
        int get_standard() { 
            return standard;
        }
        void set_standard(int standardPassedIn) { 
            standard = standardPassedIn;
        }
    };

int main()
{
    student JohnCarmack;
    
    JohnCarmack.set_age(15);
    JohnCarmack.set_first_name("john");
    JohnCarmack.set_last_name("carmack");
    JohnCarmack.set_standard(10);
    cout << JohnCarmack.get_age() << " \n"
         << JohnCarmack.get_last_name() << ", "
         << JohnCarmack.get_first_name() << " \n"
         << JohnCarmack.get_standard() << " \n\n";
    cout << JohnCarmack.get_age() << ","
         << JohnCarmack.get_first_name() << ","
         << JohnCarmack.get_last_name() << ","
         << JohnCarmack.get_standard();
    
	return 0;
}
