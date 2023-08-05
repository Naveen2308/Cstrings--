#include<iostream>
#include<string>
using namespace std;

int main(){
    string sen={"i am naveen"};
    //getline(cin,sen);
    cout<<sen<<endl;

    cout<<sen.find("am")<<"\n";
    //replace(starting_index,number_of_characters,string); 
    sen.replace(sen.find("am"),2,"is");
    cout<<sen<<endl;

    //substr(starting_index,number_of_characters);
    cout<<sen.substr(2,2)<<endl;

    //find_first_of()
    cout<<sen.find_first_of("hvhf")<<endl;
    if(sen.find_first_of("hvhf") == -1){
        cout<<"not found"<<endl;
    }
    else{
        cout<<"Found"<<endl;
    }

    if(sen == "hi") {
        cout<<"correct"<<endl;
        }
    else{
        cout<<"not correct"<<endl;
    }
}