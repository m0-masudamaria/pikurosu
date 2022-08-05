//printfの出力をcout出力に変えた
#pragma once
#include <iostream>
#include <conio.h>
using namespace std;

const int NUM_OF_BLOCK_X = 10;           //defineではなくconstで宣言
const int NUM_OF_BLOCK_Y = 10;
const int NUM_OF_HINT = 8;
const int W = 1;	/*	白ブロック	*/
const int B = 2;	/*	黒ブロック	*/
const int X = 3;	/*	ペケ印		*/
int cursorX = 0;
int cursorY = 0;
//#define true			1
//#define false			0
//const int true = 1;
//const int false = 0;

class stage {                              //クラスを定義した（20行目から46行目）
public:
	string titlecall;
	string count;
	int score = 0;
	string pic;
	string endcall;
	void start();
	void show();
	void ans();
	void end();
};

void stage::start() {
	cout << "ピクロスを始めましょう\n問題は全部で" << count << "個あります\n" << endl;
	cout << "始める場合は" << titlecall << "を入力してEnterキーを押してください\n間違えるとその問題はスキップされます" << endl;
}
void stage::show() {
	//cout << "不正な入力です\n一度閉じて再実行してください\n" << endl;
	cout << "あなたの点数は" << score << "点です\n" << endl;;
}
void stage::ans() {
	cout << "解答は" << pic << "でした！\n" << endl;;
}
void stage::end() {
	cout << "終了です" << endcall << "を入力してEnterキーを押してください\n" << endl;;
}

/*	問題ブロック1	*/
char GameBlocks[NUM_OF_BLOCK_Y + NUM_OF_HINT][NUM_OF_BLOCK_X + NUM_OF_HINT] = {
		{  W , W , W , W , W , W , W , W , W , W , '0',' ',' ',' ','\n'	},
		{  W , W , W , W , W , W , W , W , W , W , '2','2',' ',' ','\n'	},
		{  W , W , W , W , W , W , W , W , W , W , '1','1','1','1','\n'	},
		{  W , W , W , W , W , W , W , W , W , W , '1','1',' ',' ','\n'	},
		{  W , W , W , W , W , W , W , W , W , W , '1','1',' ',' ','\n'	},
		{  W , W , W , W , W , W , W , W , W , W , '4','4',' ',' ','\n'	},
		{  W , W , W , W , W , W , W , W , W , W , '1','1','1','1','\n'	},
		{  W , W , W , W , W , W , W , W , W , W , '1','4','1',' ','\n'	},
		{  W , W , W , W , W , W , W , W , W , W , '1','1','1','1','\n'	},
		{  W , W , W , W , W , W , W , W , W , W , '3','3',' ',' ','\n'	},
		{ '7','1','1','1','1','1','1','1','1','7','\n'					},
		{ ' ','1','1','5',' ',' ','5','1','1',' ','\n'					},
		{ ' ','1','1',' ',' ',' ',' ','1','1',' ','\n'					},
};
/*	解答ブロック1	*/
char AnswerBlocks[NUM_OF_BLOCK_Y + NUM_OF_HINT][NUM_OF_BLOCK_X + NUM_OF_HINT] = {
	{  W , W , W , W , W , W , W , W , W , W },
	{  W , B , B , W , W , W , W , B , B , W },
	{  B , W , W , B , W , W , B , W , W , B },
	{  B , W , W , W , W , W , W , W , W , B },
	{  B , W , W , W , W , W , W , W , W , B },
	{  B , B , B , B , W , W , B , B , B , B },
	{  B , W , W , B , W , W , B , W , W , B },
	{  B , W , W , B , B , B , B , W , W , B },
	{  B , W , W , B , W , W , B , W , W , B },
	{  W , B , B , B , W , W , B , B , B , W },
};

/*	問題ブロック2	*/  //問題数を増やした(78から135行目まで)
char Game2[NUM_OF_BLOCK_Y + NUM_OF_HINT][NUM_OF_BLOCK_X + NUM_OF_HINT] = {
		{  W , W , W , W , W , W , W , W , W , W , '0',' ',' ',' ','\n'	},
		{  W , W , W , W , W , W , W , W , W , W , '1','1',' ',' ','\n'	},
		{  W , W , W , W , W , W , W , W , W , W , '3',' ',' ',' ','\n'	},
		{  W , W , W , W , W , W , W , W , W , W , '6',' ',' ',' ','\n'	},
		{  W , W , W , W , W , W , W , W , W , W , '7',' ',' ',' ','\n'	},
		{  W , W , W , W , W , W , W , W , W , W , '9',' ',' ',' ','\n'	},
		{  W , W , W , W , W , W , W , W , W , W , '5','1',' ',' ','\n'	},
		{  W , W , W , W , W , W , W , W , W , W , '1','1','1',' ','\n'	},
		{  W , W , W , W , W , W , W , W , W , W , '1','1','1',' ','\n'	},
		{  W , W , W , W , W , W , W , W , W , W , '1','1','1',' ','\n'	},
		{ '0','5','4','9','4','4','7','3','1','4','\n'					},
		{ ' ',' ',' ',' ',' ',' ',' ',' ','1',' ','\n'					},
		{ ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','\n'					},
};
/*	解答ブロック2	*/
char Answer2[NUM_OF_BLOCK_Y + NUM_OF_HINT][NUM_OF_BLOCK_X + NUM_OF_HINT] = {
	{  W , W , W , W , W , W , W , W , W , W },
	{  W , B , W , B , W , W , W , W , W , W },
	{  W , B , B , B , W , W , W , W , W , W },
	{  W , B , B , B , B , B , B , W , W , W },
	{  W , B , B , B , B , B , B , B , W , W },
	{  W , B , B , B , B , B , B , B , B , B },
	{  W , W , W , B , B , B , B , B , W , B },
	{  W , W , W , B , W , W , B , W , W , B },
	{  W , W , W , B , W , W , B , W , W , B },
	{  W , W , W , B , W , W , B , W , B , W },
};

/*	問題ブロック3	*/
char Game3[NUM_OF_BLOCK_Y + NUM_OF_HINT][NUM_OF_BLOCK_X + NUM_OF_HINT] = {
		{  W , W , W , W , W , W , W , W , W , W , '0',' ',' ',' ','\n'	},
		{  W , W , W , W , W , W , W , W , W , W , '6',' ',' ',' ','\n'	},
		{  W , W , W , W , W , W , W , W , W , W , '8',' ',' ',' ','\n'	},
		{  W , W , W , W , W , W , W , W , W , W , 'A',' ',' ',' ','\n'},
		{  W , W , W , W , W , W , W , W , W , W , '1','2','2','1','\n'	},
		{  W , W , W , W , W , W , W , W , W , W , '4','4',' ',' ','\n'	},
		{  W , W , W , W , W , W , W , W , W , W , '2','2','2',' ','\n'	},
		{  W , W , W , W , W , W , W , W , W , W , '6',' ',' ',' ','\n'	},
		{  W , W , W , W , W , W , W , W , W , W , '1','1',' ',' ','\n'	},
		{  W , W , W , W , W , W , W , W , W , W , '1','1',' ',' ','\n'	},
		{ '3','2','7','5','3','3','5','7','2','3','\n'					},
		{ '1','2',' ','1','2','2','1',' ','2','1','\n'					},
		{ ' ','1',' ',' ',' ',' ',' ',' ','1',' ','\n'					},
};
/*	解答ブロック3	*/
char Answer3[NUM_OF_BLOCK_Y + NUM_OF_HINT][NUM_OF_BLOCK_X + NUM_OF_HINT] = {
	{  W , W , W , W , W , W , W , W , W , W },
	{  W , W , B , B , B , B , B , B , W , W },
	{  W , B , B , B , B , B , B , B , B , W },
	{  B , B , B , B , B , B , B , B , B , B },
	{  B , W , B , B , W , W , B , B , W , B },
	{  B , B , B , B , W , W , B , B , B , B },
	{  W , B , B , W , B , B , W , B , B , W },
	{  W , W , B , B , B , B , B , B , W , W },
	{  W , B , W , W , W , W , W , W , B , W },
	{  B , W , W , W , W , W , W , W , W , B },
};

//-------------------------------------------
// 関数 : printGameBlocks
// 説明 : ゲームブロックを表示する 
// 引数 : なし
// 戻値 : なし
//-------------------------------------------
//問題1
void printGameBlocks(void) {
	system("cls");
	cout << "上下左右の移動はそれぞれwsadのキーボードを押してください\n印はxで表示できます\n" << endl; //追加
	cout << ' ';

	for (int y = 0; y < 13; y++) {
		for (int x = 0; x < 15; x++) {

			if (GameBlocks[y][x] == 0) {
				break;
			}
			else if (y == cursorY && x == cursorX) {
				cout << "＊";
			}
			else if (GameBlocks[y][x] == W) {			// 白ブロックを表示（削られる前）
				cout << "■";
			}
			else if (GameBlocks[y][x] == B) {			// 黒グロックを表示（削られた後）
				cout << "□";
			}
			else if (GameBlocks[y][x] == X) {
				cout << "Ｘ";							// ペケ印を表示
			}
			else {
				cout << GameBlocks[y][x] << ' ';	// ヒントを表示
			}
		}
	}
}

//問題2
void printGame2(void) {
	system("cls");
	cout << "上下左右の移動はそれぞれwsadのキーボードを押してください\n印はxで表示できます\n" << endl; //追加
	cout << ' ';

	for (int y = 0; y < 13; y++) {
		for (int x = 0; x < 15; x++) {

			if (Game2[y][x] == 0) {
				break;
			}
			else if (y == cursorY && x == cursorX) {
				cout << "＊";
			}
			else if (Game2[y][x] == W) {			// 白ブロックを表示（削られる前）
				cout << "■";
			}
			else if (Game2[y][x] == B) {			// 黒グロックを表示（削られた後）
				cout << "□";
			}
			else if (Game2[y][x] == X) {
				cout << "Ｘ";							// ペケ印を表示
			}
			else {
				cout << Game2[y][x] << ' ';	// ヒントを表示
			}
		}
	}
}
//問題3
void printGame3(void) {
	system("cls");
	cout << "上下左右の移動はそれぞれwsadのキーボードを押してください\n印はxで表示できます\n" << endl; //追加
	cout << ' ';

	for (int y = 0; y < 13; y++) {
		for (int x = 0; x < 15; x++) {

			if (Game3[y][x] == 0) {
				break;
			}
			else if (y == cursorY && x == cursorX) {
				cout << "＊";
			}
			else if (Game3[y][x] == W) {			// 白ブロックを表示（削られる前）
				cout << "■";
			}
			else if (Game3[y][x] == B) {			// 黒グロックを表示（削られた後）
				cout << "□";
			}
			else if (Game3[y][x] == X) {
				cout << "Ｘ";							// ペケ印を表示
			}
			else {
				cout << Game3[y][x] << ' ';	// ヒントを表示
			}
		}
	}
}


//-------------------------------------------
// 関数 : CheckInput
// 説明 : キーボードからの入力をチェックする
// 引数 : なし
// 戻値 : なし 
//-------------------------------------------
//問題1
void CheckInput(void)
{
	char key = _getch();

	switch (key) {
	case 'w':		// ↑
		if (cursorY > 0) {
			cursorY--;
		}
		break;

	case 's':		// ↓
		if (cursorY < NUM_OF_BLOCK_Y - 1) {
			cursorY++;
		}
		break;

	case 'a':		// ←
		if (cursorX > 0) {
			cursorX--;
		}
		break;

	case 'd':		// →
		if (cursorX < NUM_OF_BLOCK_X - 1) {
			cursorX++;
		}
		break;

	case 'x':		// ペケ印
		  /*	削ってはいけない場所をペケでマーキングする	*/
		if (GameBlocks[cursorY][cursorX] == W) {
			GameBlocks[cursorY][cursorX] = X;
		}
		else if (GameBlocks[cursorY][cursorX] == X) {
			GameBlocks[cursorY][cursorX] = W;
		}
		break;

	case '\r':																	// 削る
	  /*  削ろうとしているブロックが正解かどうかを判定する	*/
		if (AnswerBlocks[cursorY][cursorX] == B) {
			GameBlocks[cursorY][cursorX] = B;	// 正解！
		}
		else if (AnswerBlocks[cursorY][cursorX] == W) {
			cout << "\a";					// 不正解！アラーム！
		}
		break;

	default:
		break;
	}
}

//問題2
void CheckInput2(void)
{
	char key = _getch();

	switch (key) {
	case 'w':		// ↑
		if (cursorY > 0) {
			cursorY--;
		}
		break;

	case 's':		// ↓
		if (cursorY < NUM_OF_BLOCK_Y - 1) {
			cursorY++;
		}
		break;

	case 'a':		// ←
		if (cursorX > 0) {
			cursorX--;
		}
		break;

	case 'd':		// →
		if (cursorX < NUM_OF_BLOCK_X - 1) {
			cursorX++;
		}
		break;

	case 'x':		// ペケ印
		  /*	削ってはいけない場所をペケでマーキングする	*/
		if (Game2[cursorY][cursorX] == W) {
			Game2[cursorY][cursorX] = X;
		}
		else if (Game2[cursorY][cursorX] == X) {
			Game2[cursorY][cursorX] = W;
		}
		break;

	case '\r':																	// 削る
	  /*  削ろうとしているブロックが正解かどうかを判定する	*/
		if (Answer2[cursorY][cursorX] == B) {
			Game2[cursorY][cursorX] = B;	// 正解！
		}
		else if (Answer2[cursorY][cursorX] == W) {
			cout << "\a";						// 不正解！アラーム！
		}
		break;

	default:
		break;
	}
}

//問題3
void CheckInput3(void)
{
	char key = _getch();

	switch (key) {
	case 'w':		// ↑
		if (cursorY > 0) {
			cursorY--;
		}
		break;

	case 's':		// ↓
		if (cursorY < NUM_OF_BLOCK_Y - 1) {
			cursorY++;
		}
		break;

	case 'a':		// ←
		if (cursorX > 0) {
			cursorX--;
		}
		break;

	case 'd':		// →
		if (cursorX < NUM_OF_BLOCK_X - 1) {
			cursorX++;
		}
		break;

	case 'x':		// ペケ印
		  /*	削ってはいけない場所をペケでマーキングする	*/
		if (Game3[cursorY][cursorX] == W) {
			Game3[cursorY][cursorX] = X;
		}
		else if (Game3[cursorY][cursorX] == X) {
			Game3[cursorY][cursorX] = W;
		}
		break;

	case '\r':																	// 削る
	  /*  削ろうとしているブロックが正解かどうかを判定する	*/
		if (Answer3[cursorY][cursorX] == B) {
			Game3[cursorY][cursorX] = B;	// 正解！
		}
		else if (Answer3[cursorY][cursorX] == W) {
			cout << "\a";							// 不正解！アラーム！
		}
		break;

	default:
		break;
	}
}

//-------------------------------------------
// 関数 : CheckGameClear
// 説明 : ゲームクリアを判定する
// 引数 : なし
// 戻値 : int　　true = クリア  false = 未クリア 
//-------------------------------------------
//問題1
int CheckGameClear(void)
{
	bool GameClear = true; //bool型に変更

	for (int y = 0; y < NUM_OF_BLOCK_Y; y++) {
		for (int x = 0; x < NUM_OF_BLOCK_X; x++) {
			if (AnswerBlocks[y][x] == B && GameBlocks[y][x] != B) {
				GameClear = false;
				break;
			}
		}
		if (GameClear == false) {
			break;
		}
	}
	return GameClear;
}

//問題2
int CheckGameClear2(void)
{
	bool GameClear2 = true;//bool型に変更

	for (int y = 0; y < NUM_OF_BLOCK_Y; y++) {
		for (int x = 0; x < NUM_OF_BLOCK_X; x++) {
			if (Answer2[y][x] == B && Game2[y][x] != B) {
				GameClear2 = false;
				break;
			}
		}
		if (GameClear2 == false) {
			break;
		}
	}
	return GameClear2;
}

//問題3
int CheckGameClear3(void)
{
	bool GameClear3 = true; //bool型に変更

	for (int y = 0; y < NUM_OF_BLOCK_Y; y++) {
		for (int x = 0; x < NUM_OF_BLOCK_X; x++) {
			if (Answer3[y][x] == B && Game3[y][x] != B) {
				GameClear3 = false;
				break;
			}
		}
		if (GameClear3 == false) {
			break;
		}
	}
	return GameClear3;
}

//-------------------------------------------
// 関数 : printAnswer
// 説明 : 解答の絵を表示する 
// 引数 : なし
// 戻値 : なし
//-------------------------------------------
//問題1
void printAnswer(void)
{
	system("cls");

	cout << "Game Clear!!!!\n\n";
	for (int y = 0; y < NUM_OF_BLOCK_Y; y++) {
		for (int x = 0; x < NUM_OF_BLOCK_X; x++) {
			if (AnswerBlocks[y][x] == B) {
				cout << "□";
			}
			else {
				cout << ' ' << ' ';
			}

		}
		cout << "\n";
	}
}

//問題2
void printAnswer2(void)
{
	system("cls");

	cout << "Game Clear!!!!\n\n";

	for (int y = 0; y < NUM_OF_BLOCK_Y; y++) {
		for (int x = 0; x < NUM_OF_BLOCK_X; x++) {
			if (Answer2[y][x] == B) {
				cout << "□";
			}
			else {
				cout << ' ' << ' ';
			}

		}
		cout << "\n";
	}
}

//問題3
void printAnswer3(void)
{
	system("cls");

	cout << "Game Clear!!!!\n\n";

	for (int y = 0; y < NUM_OF_BLOCK_Y; y++) {
		for (int x = 0; x < NUM_OF_BLOCK_X; x++) {
			if (Answer3[y][x] == B) {
				cout << "□";
			}
			else {
				cout << ' ' << ' ';
			}

		}
		cout << "\n";
	}
}
