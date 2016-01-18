#include <iostream>

void printArray(int array[], int length) {
  for (int i =0; i < length; i++) {
    std::cout << array[i] << std::endl;
  }
}

void initializeArrays(int array1[], int lengthArray1, int array2[], int lengthArray2) {
  if (lengthArray2 != lengthArray1) {
    std::cout << "Arrays must be same length!" << std::endl; 
    return;
  }
  for (int i = 0; i < lengthArray1; i++) {
    array1[i] = array2[i] = i+1;
  }
}

int dotprod(int array1[], int lengthArray1, int array2[], int lengthArray2) {
  if (lengthArray2 != lengthArray1) {
    std::cout << "Arrays must be same length!" << std::endl; 
    return 0;
  }
  int sum = 0;
  for (int i = 0; i < lengthArray2; i++) {
    sum = sum + array1[i] * array2[i];
  }
  return sum;
}

int main() {
  int lengthArray1 = 100;
  int array1[lengthArray1];
  int lengthArray2 = 100;
  int array2[lengthArray2];
  
  printArray(array1, lengthArray1);
  printArray(array2, lengthArray2);
  initializeArrays(array1, lengthArray1, array2, lengthArray2);
  printArray(array1, lengthArray1);
  printArray(array2, lengthArray2);

  int dprod = dotprod(array1, lengthArray1, array2, lengthArray2);
  std::cout << dprod << std::endl;

  return 0;
}