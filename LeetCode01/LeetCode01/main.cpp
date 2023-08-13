//
//  main.cpp
//  LeetCode01
//
//  Created by George Peshkov on 8/11/23.
//

#include <iostream>
#include <vector>

void printSumIndeces(std::vector<int> userList, int userNum){
    for (int i = 0; i < userList.size(); i++){
        int num1 = userList[i];
        /*std::vector<int>::iterator itr = std::find(userList.begin(), userList.end(), num1);
        if (itr != userList.cend()) {
            auto num1location = std::distance(userList.begin(), itr);
            std::string num1locstring = std::to_string(num1location);
        }*/
        for (int i = 0; i < userList.size(); i++){
            if (userNum - num1 == userList[i]){
                int num2 = userList[i];
                /*
                std::vector<int>::iterator itr = std::find(userList.begin(), userList.end(), num2);
                if (itr != userList.cend()) {
                    auto num2location = std::distance(userList.begin(), itr);
                    std::string num2locstring = std::to_string(num2location);
                 */
                }

            }
        }
    }

}


int main() {
    std::vector<int> numList {5, 10, 20, 30};
    int target = 35;
    printSumIndeces(numList, target);
}
