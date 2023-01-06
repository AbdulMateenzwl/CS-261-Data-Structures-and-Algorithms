#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
class Stack
{
    struct node *top;

public:
    Stack()
    {
        top = NULL;
    }
    int pop()
    {
        if (top == NULL)
        {
            cout << "Stack Underflow!!"<<endl;
            return 0;
        }
        else
        {
            struct node *temp;
            temp = top;
            top = top->next;
            int item = temp->data;
            delete temp;
            return item;
        }
    }
    bool push(int item)
    {
        struct node *record = new node();
        record->data = item;
        record->next = top;
        top = record;
        return true;
    }
};

// function declaration

void main_menu();
void sub_menu_1();
void sub_menu_2();
void sub_menu_3();
void back_decode();


Stack s;
main()
{
    system("cls");
    main_menu();
}
void main_menu()
{
    cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> Main Menu <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl<<endl;

    cout<<"-1) Exit"<<endl;
    cout<<"1) First Sub-Menu"<<endl;
    cout<<"2) Second Sub-Menu"<<endl;
    cout<<"3) Third Sub-Menu"<<endl;
    int option;
    cin>>option;
    if(option ==-1)
    {
        exit(0);
    }
    else if(option == 1)
    {
        s.push(0);
        sub_menu_1();
    }
    else if(option ==2)
    {
        s.push(0);
        sub_menu_2();
    }
    else if (option ==3 )
    {
        s.push(0);
        sub_menu_3();
    }
    else
    {
        cout<<"Wrong input"<<endl;
    }

}
void sub_menu_1()
{
    cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> Sub Menu 1 <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl<<endl;
    cout<<"0) back"<<endl;
    cout<<"1) Second Sub-Menu"<<endl;
    cout<<"2) Third Sub-Menu"<<endl;
    int option;
    cin>>option;
    if(option == 0)
    {
        back_decode();
    }
    if(option == 1)
    {
        s.push(1);
        sub_menu_2();
    }
    else if(option ==2)
    {
        s.push(1);
        sub_menu_3();
    }
    else
    {
        cout<<"Wrong input"<<endl;
    }
}
void sub_menu_2()
{
    cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> Sub Menu 2 <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl<<endl;

    cout<<"0) back"<<endl;
    cout<<"1) Third Sub-Menu"<<endl;
    int option;
    cin>>option;
    if(option == 0)
    {
        back_decode();
    }
    else if(option == 1)
    {   
        s.push(2);
        sub_menu_3();
    }
    else
    {
        cout<<"Wrong input"<<endl;
    }
}
void sub_menu_3()
{
    cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> Sub Menu 3 <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl<<endl;

    cout<<"0) back"<<endl;
    int option;
    cin>>option;
    if(option == 0)
    {
        back_decode();
    }
    else
    {
        cout<<"Wrong input"<<endl;
    }
}
void back_decode()
{
    int num=s.pop();
    if(num==0)
    {
        main_menu();
    }
    else if(num==1)
    {
        sub_menu_1();
    }
    else if(num==2)
    {
        sub_menu_2();
    }
    else if(num==3)
    {
        sub_menu_3();
    }
}
