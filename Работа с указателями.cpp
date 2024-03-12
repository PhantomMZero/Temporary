
void doubleElementsOfArray(int *ptrArr, int size) {

    if (ptrArr == nullptr) {
        std::cerr << "Error: Null pointer passed." << std::endl;
        return;
    }

    if (size <= 0) {
        std::cerr << "Error: Invalid array size.\n" << std::endl;
        return;
    }


    for (int i = 0; i < size; ++i) {
        if (ptrArr + i == nullptr) {
                std::cerr << "Error: Null pointer at index " << i << "." << std::endl;
                return;
         }
     ptrArr[i] *=2;
        
    }
}





int main() {
    const int size = 5;
    int arr[size] = { 1, 2, 3, 4, 5 };

    // Call the function with a valid pointer
    doubleElementsOfArray(arr, size);
    return 0;
}