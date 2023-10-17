#include <iostream>
#include <random>
using namespace std;

int main()
{
    random_device rd;
    mt19937 gen(rd());
    
    //컴퓨터가 1~999사이의 정수를 랜덤으로 지정한다.
    int Randomint = gen() % 1000;
    //플레이어의 기회는 10번이다.
    int PlayerChance = 10;
    int PlayerChoice;
    //지정된 숫자를 기준으로 플레이어가 수를 측정한다(작으면 Up 높으면 Down)
        for (int i = PlayerChance; i > 0; PlayerChance--) {
            if (PlayerChance == 0) {
                cout << "기회를 다 소진했습니다. 정답은 : " << Randomint << endl;
                break;
        }
            cout << "예상되는 숫자를 입력하십시오" << endl;
            cin >> PlayerChoice;
        if (PlayerChoice == Randomint) {
            cout << "정답은 : "<< Randomint << endl;
            cout << "축하합니다!! 정답을 맞추셨습니다!!!" << endl;
            break;
        }
        else if (PlayerChoice > Randomint) {
            cout << "숫자를 낮춰야 합니다!!" << endl;
        }
        else if (PlayerChoice < Randomint) {
            cout << "숫자를 높여야 합니다!!" << endl;
        }
    }
    //횟수를 다 하거나 맞출 경우 지정된 수를 보여주고 결과 메세지를 표시한다. 
/*
        //컴퓨터가 1~999사이의 정수를 랜덤으로 지정한다.
        int Randomint = rand();
        //플레이어의 기회는 10번이다.
        int PlayerChance = 1;
        int PlayerChoice;
        //지정된 숫자를 기준으로 플레이어가 수를 측정한다(작으면 Up 높으면 Down)
        for (int i = PlayerChance; i > 0; PlayerChance--) {
            if (PlayerChance == 0) {
                cout << "기회를 다 소진했습니다. 정답은 : " << Randomint << endl;
                break;
            }
            cout << "예상되는 숫자를 입력하십시오" << endl;
            cin >> PlayerChoice;
            if (PlayerChoice == Randomint) {
                cout << "정답은 : " << Randomint << endl;
                cout << "축하합니다!! 정답을 맞추셨습니다!!!" << endl;
                break;
            }
            else if (PlayerChoice > Randomint) {
                cout << "숫자를 낮춰야 합니다!!" << endl;
            }
            else if (PlayerChoice < Randomint) {
                cout << "숫자를 높여야 합니다!!" << endl;
            }
        }
        //횟수를 다 하거나 맞출 경우 지정된 수를 보여주고 결과 메세지를 표시한다. 
*/
}

