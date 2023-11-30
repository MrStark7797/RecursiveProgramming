
#include <iostream>
using namespace std;


int Fibinachi(int numbers[], int ptr, int MAX){
    if (ptr != 0 && ptr != 1){
        numbers[ptr] = numbers[ptr-1] + numbers[ptr-2];
        
    }
    else{
        numbers[ptr] = 1;
    }
    ptr += 1;
        if (ptr <= MAX){
            Fibinachi(numbers, ptr, MAX);
        }
    return 0;
}

int main() {
    int ptr = 0;
    int MAX;
    printf("Enter MAX numbers\n");
    cin >> MAX;
    int numbers[MAX];
    for (int i = 0; i < MAX; i++){
        numbers[i] = 0;
    }
    Fibinachi(numbers, ptr, MAX);
    for (int i = 0; i < MAX; i++){
        cout << numbers[i] << "\n";
    }

    return 0;
}
