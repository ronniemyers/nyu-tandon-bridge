/* uses 4 versions to create a new array of only positive numbers */

#include<iostream>

int* getPosNums1(int* arr, int arrSize, int& outPosArrSize) {
    outPosArrSize = 0;
    for (int i = 0; i < arrSize; i++) {
        if (arr[i] > 0)
            outPosArrSize++;
    }
    int* outArr = new int[outPosArrSize];
    int j = 0;

    for (int i = 0; i < arrSize; i++) {
        if (arr[i] > 0) {
            outArr[j] = arr[i];
            j++;
        }
    }
    return outArr;
}

void getPosNums2(int* arr, int arrSize,int*& outPosArr, int& outPosArrSize) {
    outPosArrSize = 0;
    for (int i = 0; i < arrSize; i++) {
        if (arr[i] > 0) {
            outPosArrSize++;
        }
    }
    outPosArr = new int[outPosArrSize];
    int j = 0;

    for (int i = 0; i < arrSize; i++) {
        if (arr[i] > 0) {
            outPosArr[j] = arr[i];
            j++;
        }
    }
}

int* getPosNums3(int* arr, int arrSize, int* outPosArrSizePtr) {
    (*outPosArrSizePtr) = 0;
    for (int i = 0; i < arrSize; i++) {
        if (arr[i] > 0)
            (*outPosArrSizePtr)++;
    }

    int* outArr = new int[(*outPosArrSizePtr)];
    int j = 0;
    for (int i = 0; i < arrSize; i++) {
        if (arr[i] > 0) {
            outArr[j] = arr[i];
            j++;
        }
    }
    return outArr;
}

void getPosNums4(int* arr, int arrSize,int** outPosArrPtr, int* outPosArrSizePtr) {
    *outPosArrSizePtr = 0;
    for (int i = 0; i < arrSize; i++) {
        if (arr[i] > 0) {
            (*outPosArrSizePtr)++;
        }
    }

    (*outPosArrPtr) = new int[(*outPosArrSizePtr)];
    int j = 0;

    for (int i = 0; i < arrSize; i++) {
        if (arr[i] > 0) {
            (*outPosArrPtr)[j] = arr[i];
            j++;
        }
    }
}

void display(int* arr, int size) {
    std::cout << "\nOutput Array: ";

    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl << std::endl;
}

int main() {
    int arr[] = {3, -1, -3, 0, 6, 4};
    int arrSize = 6;
    int outPosArrSize;
    int* outPosArr;
    std::cout << "getPosNums1: " << &outPosArr;
    outPosArr=getPosNums1(arr, arrSize,outPosArrSize);
    display(outPosArr,outPosArrSize);

    std::cout << "getPosNums2: " << &outPosArr;
    getPosNums2(arr, arrSize,outPosArr, outPosArrSize);
    display(outPosArr,outPosArrSize);

    std::cout << "getPosNums3: " << &outPosArr;
    outPosArr=getPosNums3(arr, arrSize,&outPosArrSize) ;
    display(outPosArr,outPosArrSize);

    std::cout << "getPosNums4: " << &outPosArr;
    getPosNums4(arr, arrSize,&outPosArr, &outPosArrSize);
    display(outPosArr,outPosArrSize);

    return 0;
}