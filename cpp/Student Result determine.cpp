#include<iostream>
using namespace std;
int main()
{

    float Phy,Chem,Maths,result,marks;
    cout<<"Enter the marks of Phy :- ";
    cin>>Phy;
    cout<<"Marks of Physics is :- "<<Phy<<endl;
    cout<<"Enter the marks of Chem :- ";
    cin>>Chem;
    cout<<"Marks of Chemistry is :- "<<Chem<<endl;
    cout<<"Enter the marks of Maths :- ";
    cin>>Maths;
    cout<<"Marks of Mathamatics is :- "<<Maths<<endl;

    if(Phy<0 or Chem<0 or Maths<0 or
       Phy>100 or Chem>100 or Maths>100)
    {
        cout<<"Invalid marks please check the entered marks"<<endl;
    }
    else if((Phy<33 and Chem>=33 and Maths>=33) or
            (Phy>=33 and Chem<33 and Maths>=33) or
             (Phy>=33 and Chem>=33 and Maths<33))
    {
        cout<<"Student fail in one subject"<<endl;
        if (Phy<33 and Chem>=33 and Maths>=33)
        {
            cout<<"Student fail in physics"<<endl;
        }
        else if (Phy>=33 and Chem<33 and Maths>=33)
        {
            cout<<"Student fail in chemistry"<<endl;
        }
        else
        {
            cout<<"Student fail in Maths"<<endl;
        }
    }
    else if ((Phy<33 and Chem<33 and Maths>=33) or
              (Phy>=33 and Chem<33 and Maths<33) or
             (Phy<33 and Chem>=33 and Maths<33))
    {
        cout<<"Student fail in two subject"<<endl;
        if (Phy<33 and Chem<33 and Maths>=33)
        {
            cout<<"Student fail in physics and chemistry"<<endl;
        }
        else if (Phy>=33 and Chem<33 and Maths<33)
        {
            cout<<"Student fail in chemistry and Maths"<<endl;
        }
        else
        {
            cout<<"Student fail in Maths and Physics"<<endl;
        }
    }
    else if(Phy<33 and Chem<33 and Maths<33)
    {
        cout<<"Student fail in all subjects"<<endl;
    }


    return 0;
}

