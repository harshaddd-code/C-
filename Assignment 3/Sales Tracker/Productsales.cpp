#include<iostream>
#include<string>
using namespace std;

class product
{
 public:
    int productId;
    string product_name;
    float price;
    int monthlysales[12];

    void getdata()
    {
        cout<<"Enter product Id: ";
        cin>>productId;
        cout<<"Enter product name: ";
        cin>>product_name;
        cout<<"Enter product price: ";
        cin>>price;

        cout<<"Enter monthly sales: ";
        for(int i=1;i<12;i++)
        {
            cout<<"Month"<<i+1<<":"<<':'<<endl;
            cin>>monthlysales[i];
        }
    }

    int total_quantity()
    {
        int total=0;
        for(int i=1;i<12;i++)
        {
            total=total+monthlysales[i];
        }
        return total;
    }

    float totalbill()
    {
        return total_quantity()*price;
    }

    void display()
    {
        cout<<"\n---------------------------------------\n";
        cout<<"Product ID     : "<<productId<<endl;
        cout<<"Price          : "<<price<<endl;
        cout<<"Product Name   : "<<product_name<<endl;
        cout<<"Total Quantity : "<<total_quantity()<<endl;
        cout<<"Total Bill     : "<<totalbill()<<endl;
        cout<<"\n---------------------------------------\n";
    }
};

int main()
{
    int n;

    cout<<"Enter number of products:";
    cin>>n;

    product p[n];    //Array of Product Object

    for(int i=0; i<n; i++)
    {
        cout<<"\nEnter Details of Product"<<i<<":\n";
        p[i].getdata();
    }

    cout<<"\n=====Product Details=====\n";
    for(int i=0; i<n; i++)
    {
        p[i].display();
    }

    return 0;
}