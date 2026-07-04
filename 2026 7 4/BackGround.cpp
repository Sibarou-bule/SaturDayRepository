#include "BackGround.h"
#include"DxLib.h"

//=============================================================
// 初期化
//=============================================================
void BackGround::Init()
{
	imageHandle = LoadGraph("png/Background.png");
}

//=============================================================
// 描画
//=============================================================
void BackGround::Draw(float cameraX)
{
	DrawGraph(-(int)(cameraX * 0.5f), 0, imageHandle, TRUE);
}