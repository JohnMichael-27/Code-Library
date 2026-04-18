#include <iostream>
/*
int baho(int length, int width);

int main(){
    int length;
    int width;
    std::cout << "Enter a length: ";
    std::cin >> length;
    std::cout << "Enter a width: ";
    std::cin >> width;

    std::cout << baho(length, width);
return 0;
}
int baho(int length, int width){
    return length + width;
}
*/
//just practice

//simple calc that adds num
/*
int total(int num, int numm);

int main(){
    int num1;
    int num2;

    std::cout << "Enter your first num: ";
    std::cin >> num1;

    std::cout << "Enter your second num: ";
    std::cin >> num2;

    std::cout << total(num1, num2);
    return 0;
}

int total(int num, int numm){
    return num + numm;
}

*/

/*
//Arrays
int main(){
    std::string foods[] = {"pizza", "glizzy"};
    int size = sizeof(foods)/sizeof(foods[0]);
    for(int i = 0; i < size; i++){
    std::cout << foods[i] << '\n';
    }
    return 0;
}
*/

/*
//BLOCK OF CODE ABOUT SORTING ARRAY ELEMENTS

//declaration of function has to be the same parameters
void sort(int array[], int size);
int main(){
    //array that will be sorted
    int array[] = {9, 2, 1, 4, 6, 8, 7, 3, 5, 10};
    int size = sizeof(array)/sizeof(array[0]);

    //invoking function using, sort(array, size);
    sort(array, size);

    for(int i = 0; i < size; i++){
        std::cout << array[i] << ' ';
    }
    return 0;
}
void sort(int array[], int size){
    
    int temp; //temporary variable
    //main function for sorting array elements
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(array[j] > array[j + 1]){
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
*/

//BLOCK OF CODE ABOUT FILL FUNCTION
int main()
{
    // fill() = Fills a range of elements with a specified value
    //            fill(begin, end, value)

    const int SIZE = 99;
    std::string foods[SIZE];

    fill(foods, foods + (SIZE/3), "pizza");
    fill(foods + (SIZE/3), foods + (SIZE/3)*2, "hamburger");
    fill(foods + (SIZE/3)*2, foods + SIZE, "hotdog");

    for(std::string food : foods){
        std::cout << food << '\n';
    }

    return 0;
}
