//Ex 3.11
#include <iostream>
#include<string>
using namespace std;


    class MotorVehicle{
    private:
        string motor_vehicle,FuelType,color;
        int yearOfManuFacture,engineCapacity;

    public:
        MotorVehicle(string m,string f,string c){
            motor_vehicle=m;
            FuelType=f;
            color=c;
            }
        
        void getpart(){
            cout<<"Motor Vehicle:"<<motor_vehicle<<endl<<"Fuel Type:"<<FuelType<<endl<<"Color:"<<color<<endl<<"Year of Manufacture:"<<"\t2015"<<endl<<"Engine Capacity:"<<"\t1800"<<endl;
            }
        void setpart(string a){
            motor_vehicle=a;
            }
        void displaycardetail(){
            getpart();
        }
            };
    
int main()
{
    MotorVehicle a("\t\tHONDA","\t\tPETROL","\t\t\tBlack");
    a.displaycardetail();//a.getpart
    return 0;
}
