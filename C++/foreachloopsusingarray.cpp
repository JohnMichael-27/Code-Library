#include <iostream>

/*int main(){
    double prices[] = {6.99, 7.50, 67.00};
    for(int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++){
        std::cout << prices[i] <<'\n';
    }
    for(double price : prices){
        std::cout << price << '\n';
    }
    return 0;
}
*/

//passing an array to a function

double sum(double prices[], int size);
int main(){
    double prices[] = {67, 69, 6.99, 70, 27};
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = sum(prices, size);
    std::cout << total << '\n';
    return 0;
}
double sum(double prices[], int size){
    double total = 0;
    for(int i = 0; i < size; i++){
        total += prices[i];
    }
    return total;
}