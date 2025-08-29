#include "DxLib.h"
/**
* @file
* @brief Lesson2_1
* @author N.Yamada
* @date 2024/1/8
*
* @details 絵を動かそう（for文+画面更新）
* @note リファレンス https://dxlib.xsrv.jp/dxfunc.html
*/

/**
* @fn WinMain
* @brief Main関数
* @param[in] _In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nCmdShow
* @return int 0 正常終了／-1 エラー
* @details Main関数
*/
int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance,
	_In_ LPSTR lpCmdLine, _In_ int nCmdShow)
{
	// ウインドウモードで起動
	ChangeWindowMode(true);

	// DXライブラリ初期化処理
	if(DxLib_Init() == -1)
	{
		return -1;
	}

	// 一番左上に絵を表示、２０分の１秒待つ、を１３回繰り返す
	for(int i=0; i<13; i++)
	{
		//---------------------------------------------------
		// 画面に描かれているものを全部消す
		ClearDrawScreen();
		//---------------------------------------------------

		// 絵を表示
		LoadGraphScreen(i * 10, 100, "Resource/Player.bmp", false);

		// ２０分の１秒待つ
		WaitTimer(50);
	}

	// キーの入力待ち
	WaitKey();

	// DXライブラリ使用の終了処理
	DxLib_End();

	// ソフトの終了
	return 0;
}
