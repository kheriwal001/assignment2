#include<iostream>
using namespace std;
/*Q1 - Write a program to check whether two numbers (entered by user) are equal or not.

int main(){
    int a,b;
    cout<<"enter a and b"<<endl;
    cin>>a>>b;
    bool bl = false;
    if(a==b){
        bl = true;
    }  
    cout<<bl<<endl;
    return 0;
}
Q2 - Write a program to take the values of two variables a and b from the keyboard and then check if
both the conditions 'a < 50' and 'a < b' are true.

int main(){
    int a , b;
    cout<<"enter a and b"<<endl;
    cin>>a>>b;
    if(a<50 && a<b){
        cout<<true<<endl;
    }
    else{
        cout<<false<<endl;
    }
}
Q3 - There are 45 total pupils in the class, 25 of whom are boys. Write a program to find how many
girls received grades "A" if 17 boys made up 80% of the students that received grades "A".

int main(){
int total, boys, girls;
boys = 17;
total = (80*45)/100; 
girls = total - boys; 
cout << "Number of girls getting grade A  " << girls << endl;
return 0;
}
Q4 - Write a program to calculate the sum of the first and the second last digit of a 5 digit number.

int main(){
    int a,first,second, third,fourth,fifth;
    cout<<"enter a five digit number"<<endl;
    cin>>a;
    int sum =0;
    first = a/10000;
    a= a%10000;
    second = a/1000; 
    a = a%1000;
    third = a/100; //third digit
    a = a%100;
    fourth = a/10; //fourth digit
    fifth = a%10; //fifth digit
    sum = first + fourth;
    cout << "sum " << sum << endl;
    return 0;

    cout<<sum<<endl;
}
Q5 - Write a program to calculate the sum of digits of a 3 digit number.

int main(){
    int a ;
    cout<<"enter a three digit num"<<endl;
    cin>>a;
    int sum =0;
    while(a!=0){
        sum = sum +a%10;
        a= a/10;
    }
    cout<<"sum"<<sum<<endl;
    return 0;
}
Q6 - Design a calculator to perform basic arithmetic operations (+,-,/,*,%)

int main(){
    int a,b;
    cout<<"enter a and b"<<endl;
    cin>>a>>b;
    char c;
    cout<<"enter operation"<<endl;
    cin>>c;
    switch(c){
        case '+':
            cout<<"sum"<<a+b<<endl;
            break;
        case '-':
            cout<<"subtract"<<a-b<<endl;
            break;
        case '*':
            cout<<"multiply"<<a*b<<endl;
            break;
        case '/':
            cout<<"division"<<a/b;
            break;
        default:
            cout<<"can't inertpret"<<endl; 
            break;  
    }
    return 0;
}
*/