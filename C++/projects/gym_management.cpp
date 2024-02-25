#include<iostream>
using namespace std;
#include<fstream>

class PersonManager{
    public:
        PersonManager(){
            fstream File("PersonData.txt", ios::in | ios::out);

            if(!File.is_open()){
                cout<<"failed to open the " << "PersonData.txt"<< " file"<<endl;
            }
            delete this;
        }

         void showMembers(){
            string line;
            while(getline(File, line)){
                cout << line << '\n'; 

            }

        }

        



};

int main()
{
    
    return 0;
}
