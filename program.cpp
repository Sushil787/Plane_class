#include<iostream>
using namespace std;
class Plane{
    public:
    string P_name;
    string P_capacity;
    int    P_wt;
    string P_airline;
    void input(){
        cout<<"plane name : "<<endl;
        getline(cin,P_name);
        cout<<"Plane capacity : "<<endl;
        cin>>P_capacity;
        cout<<"plane Wt : "<<endl;
        cin>>P_wt;
        cout<<"Which Airline : "<<endl;
        getline(cin,P_airline);

    }
    void display(){
        cout<<"the plane name is "<<P_name<<endl;
        cout<<"the plane capacity is "<<P_capacity<<" people"<<endl;
        cout<<"the plane weight is "<<P_wt<<" tons"<<endl;
        cout<<"the plane belong to "<<P_airline<<" airline"<<endl;


    }
    

};
int main(){
    Plane boeing;
    Plane Airbus;
    Plane ATR;
    Plane Cessna;
    boeing.input();
    Cessna.input();
    Airbus.input();
    ATR.input();
    boeing.display();
    Cessna.display();
    ATR.display();
    Airbus.display();
    return 0;
}
