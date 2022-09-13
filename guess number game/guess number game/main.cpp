//
//  main.cpp
//  guess number game
//
//  Created by 顾淼 on 2022/9/13.
//

#include <iostream>
using namespace std;
int main()
{
    int secretNum = 7;
    int guess;
    int guessCount = 0;//计算用户猜测数字的次数
    int guessLimit = 3;//限制用户次数
    bool outOfGuesses = false;//告诉用户剩余的猜测若为真跳出循环
    
    while (secretNum != guess && !outOfGuesses) {
        if (guessCount < guessLimit) {
            cout<<"input a number: "<<endl;
            cin>> guess;
            guessCount++;
        }else {
            outOfGuesses = true;//若guessLimt=3跳出循环
        }
    }
    if (outOfGuesses) {
        cout << "You lost"<<endl;
    }else{
    cout<<"You are win !"<<endl;
    }
    return 0;
}
