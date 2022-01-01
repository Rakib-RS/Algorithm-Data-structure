#include<bits/stdc++.h>
#include "sum.cpp"
#include "sub.cpp"
#include "div.cpp"
#include "mul.cpp"
#include "mod.cpp"
void choice_operation(int choice);
int main(){
    while(true){
            int choice;
        std::cout<<"if you want sum press:1\n";
        std::cout<<"if you want subtraction press:2\n";
        std::cout<<"if you want multiplication press:3\n";
        std::cout<<"if you want division press:4\n";
        std::cout<<"if you want modulus press:5\n";
        std::cout<<"Exit by pressing -1\n";
        std::cin>>choice;
        if(choice==-1){
            break;
        }
        choice_operation(choice);
    }

    return 0;
}
void choice_operation(int choice){
    int sum_choice=1,sub_choice=2,mul_choice=3,div_choice=4, fist_number,second_number;
    if(choice==sum_choice){
            std::cout<<"First number and second number\n";
            std::cin>>fist_number>>second_number;
            std::cout<<"sum is "<<sum(fist_number,second_number)<<"\n";
        }
        else if(choice==sub_choice){
            std::cout<<"First number and second number\n";
            std::cin>>fist_number>>second_number;
            std::cout<<"sub is "<<sub(fist_number,second_number)<<"\n";
        }
        else if(choice==mul_choice){
            std::cout<<"First number and second number\n";
            std::cin>>fist_number>>second_number;
            std::cout<<"product is "<<mul(fist_number,second_number)<<"\n";
        }
       else if(choice==div_choice){
            std::cout<<"First number and second number\n";
            std::cin>>fist_number>>second_number;
            std::cout<<"Result of Division is "<<division(fist_number,second_number)<<"\n";
        }
        else {
            std::cout<<"First number and second number\n";
            std::cin>>fist_number>>second_number;
            std::cout<<"Reminder is "<<mod(fist_number,second_number)<<"\n";
        }



}
