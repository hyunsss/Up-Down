#include <iostream>

int main()
{
	int board[5][5];
	int number = 1;
	
	//2차원 배열 초기화하기 (1, 2, 3, 4, 5 ---- )
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			board[i][j] = number;
			number++;
		}
	}

	//숫자 25가 들어있는 곳을 빈칸처럼 보이게 바꿈.
	board[4][4] = 0;

	//5x5사이즈의 패턴을 생성한다.
	for (int i = 0; i < 5; i++) {
 
	}
	



	
	//칸마다 일정하지 않도록 랜덤으로 숫자를 배치한다.
	

}

