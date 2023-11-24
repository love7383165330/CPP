
// Program :- 1

#include <iostream>
#include <string>

using namespace std;

class Employee 
{
public:
    // Attributes
    int emp_id;
    string emp_name;
    int emp_age;
    string emp_role;
    double emp_salary;
    string emp_city;
    int emp_experience;
    string emp_company_name;

   
    void displayDetails() {
        cout << "Employee ID: " << emp_id << endl;
        cout << "Employee Name: " << emp_name << endl;
        cout << "Employee Age: " << emp_age << endl;
        cout << "Employee Role: " << emp_role << endl;
        cout << "Employee Salary: $" << emp_salary << endl;
        cout << "Employee City: " << emp_city << endl;
        cout << "Employee Experience: " << emp_experience << " years" << endl;
        cout << "Employee Company Name: " << emp_company_name << endl;
        cout << "-------------------------------------" << endl;
    }
};

int main() 
{
  
    Employee emp1, emp2, emp3, emp4, emp5;

    emp1.emp_id = 1;
    emp1.emp_name = "Lav";
    emp1.emp_age = 21;
    emp1.emp_role = "Software Engineer";
    emp1.emp_salary = 75000.0;
    emp1.emp_city = "Surat";
    emp1.emp_experience = 5;
    emp1.emp_company_name = "TechCorp";

    emp2.emp_id = 2;
    emp2.emp_name = "Nisarg";
    emp2.emp_age = 22;
    emp2.emp_role = "Data Scientist";
    emp2.emp_salary = 80000.0;
    emp2.emp_city = "Baroda";
    emp2.emp_experience = 4;
    emp2.emp_company_name = "DataTech";

    emp3.emp_id = 3;
    emp3.emp_name = "Kush";
    emp3.emp_age = 35;
    emp3.emp_role = "Product Manager";
    emp3.emp_salary = 90000.0;
    emp3.emp_city = "Gandhinagar";
    emp3.emp_experience = 8;
    emp3.emp_company_name = "ProdCo";

    emp4.emp_id = 4;
    emp4.emp_name = "Karn";
    emp4.emp_age = 32;
    emp4.emp_role = "UX Designer";
    emp4.emp_salary = 70000.0;
    emp4.emp_city = "Mumbai";
    emp4.emp_experience = 6;
    emp4.emp_company_name = "DesignSolutions";

    emp5.emp_id = 5;
    emp5.emp_name = "Devarsh";
    emp5.emp_age = 27;
    emp5.emp_role = "Marketing Specialist";
    emp5.emp_salary = 60000.0;
    emp5.emp_city = "Pune";
    emp5.emp_experience = 3;
    emp5.emp_company_name = "MarketReach";

   
    emp1.displayDetails();
    emp2.displayDetails();
    emp3.displayDetails();
    emp4.displayDetails();
    emp5.displayDetails();

    return 0;
}


/*

Output :-


Employee ID: 1
Employee Name: Lav
Employee Age: 21
Employee Role: Software Engineer
Employee Salary: $75000
Employee City: Surat
Employee Experience: 5 years
Employee Company Name: TechCorp
-------------------------------------
Employee ID: 2
Employee Name: Nisarg
Employee Age: 22
Employee Role: Data Scientist
Employee Salary: $80000
Employee City: Baroda
Employee Experience: 4 years
Employee Company Name: DataTech
-------------------------------------
Employee ID: 3
Employee Name: Kush
Employee Age: 35
Employee Role: Product Manager
Employee Salary: $90000
Employee City: Gandhinagar
Employee Experience: 8 years
Employee Company Name: ProdCo
-------------------------------------
Employee ID: 4
Employee Name: Karn
Employee Age: 32
Employee Role: UX Designer
Employee Salary: $70000
Employee City: Mumbai
Employee Experience: 6 years
Employee Company Name: DesignSolutions-
------------------------------------
Employee ID: 5
Employee Name: Devarsh
Employee Age: 27
Employee Role: Marketing Specialist
Employee Salary: $60000
Employee City: Pune
Employee Experience: 3 years
Employee Company Name: MarketReach
-------------------------------------


*/


// Program :- 2

#include <iostream>
#include <string>

using namespace std;

class Car
{
public:
    
    int car_id;
    string car_company_name;
    string car_color;
    string car_model;
    int car_release_year;

   
    void displayDetails()
    {
        cout << "Car ID: " << car_id << endl;
        cout << "Car Company Name: " << car_company_name << endl;
        cout << "Car Color: " << car_color << endl;
        cout << "Car Model: " << car_model << endl;
        cout << "Car Release Year: " << car_release_year << endl;
        cout << "-------------------------------------" << endl;
    }
};

int main() {
    
    Car car1, car2, car3, car4;

    
    car1.car_id = 1;
    car1.car_company_name = "Honda";
    car1.car_color = "Blue";
    car1.car_model = "Camry";
    car1.car_release_year = 2012;

    car2.car_id = 2;
    car2.car_company_name = "Toyota";
    car2.car_color = "Red";
    car2.car_model = "Civic";
    car2.car_release_year = 2021;

    car3.car_id = 3;
    car3.car_company_name = "Ford";
    car3.car_color = "Black";
    car3.car_model = "Mustang";
    car3.car_release_year = 2020;

    car4.car_id = 4;
    car4.car_company_name = "Chevrolet";
    car4.car_color = "Silver";
    car4.car_model = "Malibu";
    car4.car_release_year = 2023;

    
    car1.displayDetails();
    car2.displayDetails();
    car3.displayDetails();
    car4.displayDetails();

    return 0;
}

/*

Output :-

Car ID: 1
Car Company Name: Honda
Car Color: Blue
Car Model: Camry
Car Release Year: 2012
-------------------------------------
Car ID: 2
Car Company Name: Toyota
Car Color: Red
Car Model: Civic
Car Release Year: 2021
-------------------------------------
Car ID: 3
Car Company Name: Ford
Car Color: Black
Car Model: Mustang
Car Release Year: 2020
-------------------------------------
Car ID: 4
Car Company Name: Chevrolet
Car Color: Silver
Car Model: Malibu
Car Release Year: 2023
-------------------------------------

*/