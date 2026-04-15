#include <iostream>
#include <cmath>
#include <iomanip>

int main(){
    float height;
    float weight;

    std::cout << "************ This is a BMI calculator ************\n";
    std::cout << "Please enter your height(cm): ";
    std::cin >> height;
    
    std::cout << "Please enter your weight(kg): ";
    std::cin >> weight;

    float BMI = weight / pow(height, 2) * 10'000;
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "Your BMI is... " << BMI << '\n';

    if(BMI < 18.5){
        std::cout << "You are Under Weight!\n";
    }
    else if(BMI >= 18.5 && BMI <= 24.9){
        std::cout << "You are Healthy Weight!\n";
    }
    else if(BMI >= 25.0 && BMI <= 29.9){
        std::cout << "You are Over Weight!!\n";
    }
    else if(BMI >= 30.0 && BMI <= 39.9){
        std::cout << "You are Obese!!!\n";
    }
    else if(BMI >= 40){
        std::cout << "You have Severe Obesity!!!! Please take care of your health\n";
    }
    return 0;
}