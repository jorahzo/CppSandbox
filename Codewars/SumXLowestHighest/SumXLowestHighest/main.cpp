//
//  main.cpp
//  SumXLowestHighest
//
//  Created by George Peshkov on 8/6/23.
//
/*
 Task
 Sum all the numbers of a given array ( cq. list ), except the highest and the lowest element ( by value, not by index! ).

 The highest or lowest element respectively is a single element at each edge, even if there are more than one with the same value.

 Mind the input validation.

 Example
 { 6, 2, 1, 8, 10 } => 16
 { 1, 1, 11, 2, 3 } => 6
 */


#include <iostream>
#include <vector>

int sum(std::vector<int> numbers)
{
    int maxnum = numbers[0];
    int minnum = numbers[0];
    int vecSize = numbers.size();
    for (int i = 0; i < vecSize; i++){
        // Initial scan to find maximum and minimum number values
        if (maxnum < numbers[i]){
            maxnum = numbers[i];
        }
        else if (minnum > numbers[i]){
            minnum = numbers[i];
        }
    }
    int sum {0};
    // Second scan, where we will now exclude min and max values in sum calculation
    for (int i = 0; i < vecSize; i++){
        if (numbers[i] != minnum && numbers[i] != maxnum){
            sum += numbers[i];
            //std::cout << "Iteration is " << i << " Sum is " << sum << "\n";
        }
    }
    return sum;
}

int main() {
    std::vector<int> vectorOne = {6, 2, 1, 8, 10};
    std::cout << sum(vectorOne) << "\n";
    return 0;
}
