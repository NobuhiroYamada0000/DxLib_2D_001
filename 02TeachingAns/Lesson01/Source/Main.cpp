
#include "DxLib.h"
/**
* @file
* @brief Lesson1
* @author N.Yamada
* @date 2024/1/8
*
* @details Dxライブラリで絵を表示
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

	// DXライブラリ初期化
	if(DxLib_Init() == -1)
	{
		return -1;
	}

	//--------------------------------------------------
	// 画面に絵を表示
	LoadGraphScreen(0, 0, "Resource/Player.bmp", false);
	//--------------------------------------------------

	// キーの入力待ち
	WaitKey();

	// DXライブラリ使用の終了
	DxLib_End();

	// ソフトの終了
	return 0;
}
