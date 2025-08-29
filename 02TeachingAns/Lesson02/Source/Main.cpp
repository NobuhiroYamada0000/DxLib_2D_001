#include "DxLib.h"
/**
* @file
* @brief Lesson2
* @author N.Yamada
* @date 2024/1/8
*
* @details 絵を動かそう
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

	// 一番左上に絵を表示
	LoadGraphScreen(0, 100, "Resource/Player.bmp", false);

	// ２０分の１秒待つ
	WaitTimer(50);

	// 少し右にずらして絵を表示
	LoadGraphScreen(10, 100, "Resource/Player.bmp", false);

	// ２０分の１秒待つ
	WaitTimer(50);

	// 以下、同☆文！
	LoadGraphScreen(20, 100, "Resource/Player.bmp", false);
	WaitTimer(50);
	LoadGraphScreen(30, 100, "Resource/Player.bmp", false);
	WaitTimer(50);
	LoadGraphScreen(40, 100, "Resource/Player.bmp", false);
	WaitTimer(50);
	LoadGraphScreen(50, 100, "Resource/Player.bmp", false);
	WaitTimer(50);
	LoadGraphScreen(60, 100, "Resource/Player.bmp", false);
	WaitTimer(50);
	LoadGraphScreen(70, 100, "Resource/Player.bmp", false);
	WaitTimer(50);
	LoadGraphScreen(80, 100, "Resource/Player.bmp", false);
	WaitTimer(50);
	LoadGraphScreen(90, 100, "Resource/Player.bmp", false);
	WaitTimer(50);
	LoadGraphScreen(100, 100, "Resource/Player.bmp", false);
	WaitTimer(50);
	LoadGraphScreen(110, 100, "Resource/Player.bmp", false);
	WaitTimer(50);
	LoadGraphScreen(120, 100, "Resource/Player.bmp", false);
	WaitTimer(50);

	// キーの入力待ち
	WaitKey();

	// DXライブラリ使用の終了処理
	DxLib_End();

	// ソフトの終了
	return 0;
}
