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
};

int main()
{
   Cars car1;  //Car object 
   car1.setData("AMG ","Petronas","Diesel",123667.23,30000);
   car1.displayData();
   return 0;
}