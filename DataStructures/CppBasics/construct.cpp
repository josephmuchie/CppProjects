#include <iostream>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Cars{
   private:

      string companyName;
      string modelName;
      string fuelType;
      float mileage;
      double price;
   
   public: 
      Cars(){
         cout<< "Default constructor called .."<<endl;
      }

      Cars(string mName, string fType,float m, double p ){
         cout<< "Parameterized constructor called .."<<endl;
         modelName = mName;
         fuelType = fType;
         mileage = m;
         price = p;
      }
      Cars(Cars &obj){
         cout<< "Copy constructor called .."<<endl;
         companyName = obj.companyName;
         modelName = obj.modelName;
         fuelType = obj.fuelType;
         mileage = obj.mileage;
         price = obj.price;
      }
      void setData(string cName, string mName, string fType,float m, double p){
         companyName = cName;
         modelName = mName;
         fuelType = fType;
         mileage = m;
         price = p;
      }
      void displayData(){
         cout <<"Car name - "<< companyName<<endl;
         cout <<"Car model - "<< modelName<<endl;
         cout <<"Car fuel type - "<< fuelType<<endl;
         cout <<"Mileage - "<< mileage<<endl;
         cout <<"Price - "<< price<<endl;
      }
      ~Cars(){
         cout<< "Destructor called .."<<endl;
      }
};

int main()
{
   Cars car1,car2("F1 Car","Petrol",34.7,5850);  //Car object 
   car1.setData("AMG ","Petronas","Diesel",123667.23,30000);
   car1.displayData();
   cout<<" " <<endl;
   car2.displayData();
   cout<<" "<<endl;

   Cars car3 = car1;
   car3.displayData();
   return 0;
}