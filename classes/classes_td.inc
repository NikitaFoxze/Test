/*
 * |>================================<|
 * |   About: TDM classes textdraws   |
 * |   Author: Foxze                  |
 * |>================================<|
 */

/*
 * |>--------------------------------------------<|
 * |                  Functions                   |
 * |>--------------------------------------------<|
 * Public:
	- (None)
 * Stock:
	- TDM_CreatePlayerSelectClassTD(playerid, PlayerText:playerTD[])
 * |>--------------------------------------------<|
 * |                  Enums                       |
 * |>--------------------------------------------<|
	- (None)
 * |>--------------------------------------------<|
 * |                  Global vars                 |
 * |>--------------------------------------------<|
    - (None)
 */

#if defined _INC_TDM_CLASSES_TD
	#endinput
#endif
#define _INC_TDM_CLASSES_TD

/*
 * |>-----------------<|
 * |     Functions     |
 * |>-----------------<|
 */

/*
 * |>----------------<|
 * |   Select class   |
 * |>----------------<|
 */

stock TDM_CreatePlayerSelectClassTD(playerid, PlayerText:playerTD[])
{
	// Задний белый фон
	playerTD[0] = CreatePlayerTextDraw(playerid, 158.0000, 176.0000, "_");
	PlayerTextDrawTextSize(playerid, playerTD[0], 77.0000, 104.0000);
	PlayerTextDrawAlignment(playerid, playerTD[0], TEXT_DRAW_ALIGN_LEFT);
	PlayerTextDrawColour(playerid, playerTD[0], 0xFFFFFFFF);
	PlayerTextDrawBackgroundColour(playerid, playerTD[0], -1717986817);
	PlayerTextDrawFont(playerid, playerTD[0], TEXT_DRAW_FONT_PREVIEW);
	PlayerTextDrawSetProportional(playerid, playerTD[0], false);
	PlayerTextDrawSetShadow(playerid, playerTD[0], 0);
	PlayerTextDrawSetPreviewModel(playerid, playerTD[0], 0);
	PlayerTextDrawSetPreviewRot(playerid, playerTD[0], 0.0000, 0.0000, 0.0000, 1000.0000);

	// Задний белый фон
	playerTD[1] = CreatePlayerTextDraw(playerid, 238.0000, 176.0000, "_");
	PlayerTextDrawTextSize(playerid, playerTD[1], 77.0000, 104.0000);
	PlayerTextDrawAlignment(playerid, playerTD[1], TEXT_DRAW_ALIGN_LEFT);
	PlayerTextDrawColour(playerid, playerTD[1], 0xFFFFFFFF);
	PlayerTextDrawBackgroundColour(playerid, playerTD[1], -1717986817);
	PlayerTextDrawFont(playerid, playerTD[1], TEXT_DRAW_FONT_PREVIEW);
	PlayerTextDrawSetProportional(playerid, playerTD[1], false);
	PlayerTextDrawSetShadow(playerid, playerTD[1], 0);
	PlayerTextDrawSetPreviewModel(playerid, playerTD[1], 0);
	PlayerTextDrawSetPreviewRot(playerid, playerTD[1], 0.0000, 0.0000, 0.0000, 1000.0000);

	// Задний белый фон
	playerTD[2] = CreatePlayerTextDraw(playerid, 318.0000, 176.0000, "_");
	PlayerTextDrawTextSize(playerid, playerTD[2], 77.0000, 104.0000);
	PlayerTextDrawAlignment(playerid, playerTD[2], TEXT_DRAW_ALIGN_LEFT);
	PlayerTextDrawColour(playerid, playerTD[2], 0xFFFFFFFF);
	PlayerTextDrawBackgroundColour(playerid, playerTD[2], -1717986817);
	PlayerTextDrawFont(playerid, playerTD[2], TEXT_DRAW_FONT_PREVIEW);
	PlayerTextDrawSetProportional(playerid, playerTD[2], false);
	PlayerTextDrawSetShadow(playerid, playerTD[2], 0);
	PlayerTextDrawSetPreviewModel(playerid, playerTD[2], 0);
	PlayerTextDrawSetPreviewRot(playerid, playerTD[2], 0.0000, 0.0000, 0.0000, 1000.0000);

	// Задний белый фон
	playerTD[3] = CreatePlayerTextDraw(playerid, 398.0000, 176.0000, "_");
	PlayerTextDrawTextSize(playerid, playerTD[3], 77.0000, 104.0000);
	PlayerTextDrawAlignment(playerid, playerTD[3], TEXT_DRAW_ALIGN_LEFT);
	PlayerTextDrawColour(playerid, playerTD[3], 0xFFFFFFFF);
	PlayerTextDrawBackgroundColour(playerid, playerTD[3], -1717986817);
	PlayerTextDrawFont(playerid, playerTD[3], TEXT_DRAW_FONT_PREVIEW);
	PlayerTextDrawSetProportional(playerid, playerTD[3], false);
	PlayerTextDrawSetShadow(playerid, playerTD[3], 0);
	PlayerTextDrawSetPreviewModel(playerid, playerTD[3], 0);
	PlayerTextDrawSetPreviewRot(playerid, playerTD[3], 0.0000, 0.0000, 0.0000, 1000.0000);

	// Задний чёрный фон
	playerTD[4] = CreatePlayerTextDraw(playerid, 159.0000, 177.0000, "_");
	PlayerTextDrawTextSize(playerid, playerTD[4], 75.0000, 102.0000);
	PlayerTextDrawAlignment(playerid, playerTD[4], TEXT_DRAW_ALIGN_LEFT);
	PlayerTextDrawColour(playerid, playerTD[4], 0xFFFFFFFF);
	PlayerTextDrawBackgroundColour(playerid, playerTD[4], 589505535);
	PlayerTextDrawFont(playerid, playerTD[4], TEXT_DRAW_FONT_PREVIEW);
	PlayerTextDrawSetProportional(playerid, playerTD[4], false);
	PlayerTextDrawSetShadow(playerid, playerTD[4], 0);
	PlayerTextDrawSetSelectable(playerid, playerTD[4], true);
	PlayerTextDrawSetPreviewModel(playerid, playerTD[4], 0);
	PlayerTextDrawSetPreviewRot(playerid, playerTD[4], 0.0000, 0.0000, 0.0000, 1.0000);

	// Задний чёрный фон
	playerTD[5] = CreatePlayerTextDraw(playerid, 239.0000, 177.0000, "_");
	PlayerTextDrawTextSize(playerid, playerTD[5], 75.0000, 102.0000);
	PlayerTextDrawAlignment(playerid, playerTD[5], TEXT_DRAW_ALIGN_LEFT);
	PlayerTextDrawColour(playerid, playerTD[5], 0xFFFFFFFF);
	PlayerTextDrawBackgroundColour(playerid, playerTD[5], 589505535);
	PlayerTextDrawFont(playerid, playerTD[5], TEXT_DRAW_FONT_PREVIEW);
	PlayerTextDrawSetProportional(playerid, playerTD[5], false);
	PlayerTextDrawSetShadow(playerid, playerTD[5], 0);
	PlayerTextDrawSetSelectable(playerid, playerTD[5], true);
	PlayerTextDrawSetPreviewModel(playerid, playerTD[5], 0);
	PlayerTextDrawSetPreviewRot(playerid, playerTD[5], 0.0000, 0.0000, 0.0000, 1.0000);

	// Задний чёрный фон
	playerTD[6] = CreatePlayerTextDraw(playerid, 319.0000, 177.0000, "_");
	PlayerTextDrawTextSize(playerid, playerTD[6], 75.0000, 102.0000);
	PlayerTextDrawAlignment(playerid, playerTD[6], TEXT_DRAW_ALIGN_LEFT);
	PlayerTextDrawColour(playerid, playerTD[6], 0xFFFFFFFF);
	PlayerTextDrawBackgroundColour(playerid, playerTD[6], 589505535);
	PlayerTextDrawFont(playerid, playerTD[6], TEXT_DRAW_FONT_PREVIEW);
	PlayerTextDrawSetProportional(playerid, playerTD[6], false);
	PlayerTextDrawSetShadow(playerid, playerTD[6], 0);
	PlayerTextDrawSetSelectable(playerid, playerTD[6], true);
	PlayerTextDrawSetPreviewModel(playerid, playerTD[6], 0);
	PlayerTextDrawSetPreviewRot(playerid, playerTD[6], 0.0000, 0.0000, 0.0000, 1.0000);

	// Задний чёрный фон
	playerTD[7] = CreatePlayerTextDraw(playerid, 399.0000, 177.0000, "_");
	PlayerTextDrawTextSize(playerid, playerTD[7], 75.0000, 102.0000);
	PlayerTextDrawAlignment(playerid, playerTD[7], TEXT_DRAW_ALIGN_LEFT);
	PlayerTextDrawColour(playerid, playerTD[7], 0xFFFFFFFF);
	PlayerTextDrawBackgroundColour(playerid, playerTD[7], 589505535);
	PlayerTextDrawFont(playerid, playerTD[7], TEXT_DRAW_FONT_PREVIEW);
	PlayerTextDrawSetProportional(playerid, playerTD[7], false);
	PlayerTextDrawSetShadow(playerid, playerTD[7], 0);
	PlayerTextDrawSetSelectable(playerid, playerTD[7], true);
	PlayerTextDrawSetPreviewModel(playerid, playerTD[7], 0);
	PlayerTextDrawSetPreviewRot(playerid, playerTD[7], 0.0000, 0.0000, 0.0000, 1.0000);

	// Задний чёрный фон выбора класса
	playerTD[8] = CreatePlayerTextDraw(playerid, 158.0000, 158.0000, "_");
	PlayerTextDrawTextSize(playerid, playerTD[8], 317.0000, 15.0000);
	PlayerTextDrawAlignment(playerid, playerTD[8], TEXT_DRAW_ALIGN_LEFT);
	PlayerTextDrawColour(playerid, playerTD[8], 0xFFFFFFFF);
	PlayerTextDrawBackgroundColour(playerid, playerTD[8], 589505535);
	PlayerTextDrawFont(playerid, playerTD[8], TEXT_DRAW_FONT_PREVIEW);
	PlayerTextDrawSetProportional(playerid, playerTD[8], false);
	PlayerTextDrawSetShadow(playerid, playerTD[8], 0);
	PlayerTextDrawSetPreviewModel(playerid, playerTD[8], 287);
	PlayerTextDrawSetPreviewRot(playerid, playerTD[8], 0.0000, 0.0000, 0.0000, 1000.0000);

	playerTD[9] = CreatePlayerTextDraw(playerid, 316.0000, 158.0000, "Выбор_класса");
	PlayerTextDrawLetterSize(playerid, playerTD[9], 0.3010, 1.4797);
	PlayerTextDrawTextSize(playerid, playerTD[9], 0.0000, 313.0000);
	PlayerTextDrawAlignment(playerid, playerTD[9], TEXT_DRAW_ALIGN_CENTER);
	PlayerTextDrawColour(playerid, playerTD[9], -33686529);
	PlayerTextDrawBackgroundColour(playerid, playerTD[9], 255);
	PlayerTextDrawFont(playerid, playerTD[9], TEXT_DRAW_FONT_BANK_GOTHIC);
	PlayerTextDrawSetProportional(playerid, playerTD[9], true);
	PlayerTextDrawSetShadow(playerid, playerTD[9], 0);

	// Задний белый фон назад
	playerTD[10] = CreatePlayerTextDraw(playerid, 158.0000, 282.0000, "_");
	PlayerTextDrawTextSize(playerid, playerTD[10], 53.0000, 20.0000);
	PlayerTextDrawAlignment(playerid, playerTD[10], TEXT_DRAW_ALIGN_LEFT);
	PlayerTextDrawColour(playerid, playerTD[10], 0xFFFFFFFF);
	PlayerTextDrawBackgroundColour(playerid, playerTD[10], -1717986817);
	PlayerTextDrawFont(playerid, playerTD[10], TEXT_DRAW_FONT_PREVIEW);
	PlayerTextDrawSetProportional(playerid, playerTD[10], false);
	PlayerTextDrawSetShadow(playerid, playerTD[10], 0);
	PlayerTextDrawSetPreviewModel(playerid, playerTD[10], 0);
	PlayerTextDrawSetPreviewRot(playerid, playerTD[10], 0.0000, 0.0000, 0.0000, 1000.0000);

	// Задний чёрный фон назад
	playerTD[11] = CreatePlayerTextDraw(playerid, 159.0000, 283.0000, "_");
	PlayerTextDrawTextSize(playerid, playerTD[11], 51.0000, 18.0000);
	PlayerTextDrawAlignment(playerid, playerTD[11], TEXT_DRAW_ALIGN_LEFT);
	PlayerTextDrawColour(playerid, playerTD[11], 0xFFFFFFFF);
	PlayerTextDrawBackgroundColour(playerid, playerTD[11], 589505535);
	PlayerTextDrawFont(playerid, playerTD[11], TEXT_DRAW_FONT_PREVIEW);
	PlayerTextDrawSetProportional(playerid, playerTD[11], false);
	PlayerTextDrawSetShadow(playerid, playerTD[11], 0);
	PlayerTextDrawSetSelectable(playerid, playerTD[11], true);
	PlayerTextDrawSetPreviewModel(playerid, playerTD[11], 0);
	PlayerTextDrawSetPreviewRot(playerid, playerTD[11], 0.0000, 0.0000, 0.0000, 1000.0000);

	playerTD[12] = CreatePlayerTextDraw(playerid, 185.0000, 285.0000, "Назад");
	PlayerTextDrawLetterSize(playerid, playerTD[12], 0.2796, 1.3552);
	PlayerTextDrawTextSize(playerid, playerTD[12], 15.0000, 50.0000);
	PlayerTextDrawAlignment(playerid, playerTD[12], TEXT_DRAW_ALIGN_CENTER);
	PlayerTextDrawColour(playerid, playerTD[12], -1003277313);
	PlayerTextDrawBackgroundColour(playerid, playerTD[12], 255);
	PlayerTextDrawFont(playerid, playerTD[12], TEXT_DRAW_FONT_BANK_GOTHIC);
	PlayerTextDrawSetProportional(playerid, playerTD[12], true);
	PlayerTextDrawSetShadow(playerid, playerTD[12], 0);
	PlayerTextDrawSetSelectable(playerid, playerTD[12], true);

	playerTD[13] = CreatePlayerTextDraw(playerid, 161.0000, 176.0000, "Штурмовик");
	PlayerTextDrawLetterSize(playerid, playerTD[13], 0.1783, 1.3594);
	PlayerTextDrawAlignment(playerid, playerTD[13], TEXT_DRAW_ALIGN_LEFT);
	PlayerTextDrawColour(playerid, playerTD[13], -690563841);
	PlayerTextDrawBackgroundColour(playerid, playerTD[13], 255);
	PlayerTextDrawFont(playerid, playerTD[13], TEXT_DRAW_FONT_BANK_GOTHIC);
	PlayerTextDrawSetProportional(playerid, playerTD[13], true);
	PlayerTextDrawSetShadow(playerid, playerTD[13], 0);

	playerTD[14] = CreatePlayerTextDraw(playerid, 241.0000, 176.0000, "Медик");
	PlayerTextDrawLetterSize(playerid, playerTD[14], 0.1783, 1.3594);
	PlayerTextDrawAlignment(playerid, playerTD[14], TEXT_DRAW_ALIGN_LEFT);
	PlayerTextDrawColour(playerid, playerTD[14], -690563841);
	PlayerTextDrawBackgroundColour(playerid, playerTD[14], 255);
	PlayerTextDrawFont(playerid, playerTD[14], TEXT_DRAW_FONT_BANK_GOTHIC);
	PlayerTextDrawSetProportional(playerid, playerTD[14], true);
	PlayerTextDrawSetShadow(playerid, playerTD[14], 0);

	playerTD[15] = CreatePlayerTextDraw(playerid, 321.0000, 176.0000, "Инженер");
	PlayerTextDrawLetterSize(playerid, playerTD[15], 0.1783, 1.3594);
	PlayerTextDrawAlignment(playerid, playerTD[15], TEXT_DRAW_ALIGN_LEFT);
	PlayerTextDrawColour(playerid, playerTD[15], -690563841);
	PlayerTextDrawBackgroundColour(playerid, playerTD[15], 255);
	PlayerTextDrawFont(playerid, playerTD[15], TEXT_DRAW_FONT_BANK_GOTHIC);
	PlayerTextDrawSetProportional(playerid, playerTD[15], true);
	PlayerTextDrawSetShadow(playerid, playerTD[15], 0);

	playerTD[16] = CreatePlayerTextDraw(playerid, 401.0000, 176.0000, "Разведчик");
	PlayerTextDrawLetterSize(playerid, playerTD[16], 0.1783, 1.3594);
	PlayerTextDrawAlignment(playerid, playerTD[16], TEXT_DRAW_ALIGN_LEFT);
	PlayerTextDrawColour(playerid, playerTD[16], -690563841);
	PlayerTextDrawBackgroundColour(playerid, playerTD[16], 255);
	PlayerTextDrawFont(playerid, playerTD[16], TEXT_DRAW_FONT_BANK_GOTHIC);
	PlayerTextDrawSetProportional(playerid, playerTD[16], true);
	PlayerTextDrawSetShadow(playerid, playerTD[16], 0);

	playerTD[17] = CreatePlayerTextDraw(playerid, 231.0000, 265.0000, "Часов:_0");
	PlayerTextDrawLetterSize(playerid, playerTD[17], 0.1783, 1.3594);
	PlayerTextDrawAlignment(playerid, playerTD[17], TEXT_DRAW_ALIGN_RIGHT);
	PlayerTextDrawColour(playerid, playerTD[17], -1108345857);
	PlayerTextDrawBackgroundColour(playerid, playerTD[17], 255);
	PlayerTextDrawFont(playerid, playerTD[17], TEXT_DRAW_FONT_BANK_GOTHIC);
	PlayerTextDrawSetProportional(playerid, playerTD[17], true);
	PlayerTextDrawSetShadow(playerid, playerTD[17], 0);

	playerTD[18] = CreatePlayerTextDraw(playerid, 311.0000, 265.0000, "Часов:_0");
	PlayerTextDrawLetterSize(playerid, playerTD[18], 0.1783, 1.3594);
	PlayerTextDrawAlignment(playerid, playerTD[18], TEXT_DRAW_ALIGN_RIGHT);
	PlayerTextDrawColour(playerid, playerTD[18], -1108345857);
	PlayerTextDrawBackgroundColour(playerid, playerTD[18], 255);
	PlayerTextDrawFont(playerid, playerTD[18], TEXT_DRAW_FONT_BANK_GOTHIC);
	PlayerTextDrawSetProportional(playerid, playerTD[18], true);
	PlayerTextDrawSetShadow(playerid, playerTD[18], 0);

	playerTD[19] = CreatePlayerTextDraw(playerid, 391.0000, 265.0000, "Часов:_0");
	PlayerTextDrawLetterSize(playerid, playerTD[19], 0.1783, 1.3594);
	PlayerTextDrawAlignment(playerid, playerTD[19], TEXT_DRAW_ALIGN_RIGHT);
	PlayerTextDrawColour(playerid, playerTD[19], -1108345857);
	PlayerTextDrawBackgroundColour(playerid, playerTD[19], 255);
	PlayerTextDrawFont(playerid, playerTD[19], TEXT_DRAW_FONT_BANK_GOTHIC);
	PlayerTextDrawSetProportional(playerid, playerTD[19], true);
	PlayerTextDrawSetShadow(playerid, playerTD[19], 0);

	playerTD[20] = CreatePlayerTextDraw(playerid, 471.0000, 265.0000, "Часов:_0");
	PlayerTextDrawLetterSize(playerid, playerTD[20], 0.1783, 1.3594);
	PlayerTextDrawAlignment(playerid, playerTD[20], TEXT_DRAW_ALIGN_RIGHT);
	PlayerTextDrawColour(playerid, playerTD[20], -1108345857);
	PlayerTextDrawBackgroundColour(playerid, playerTD[20], 255);
	PlayerTextDrawFont(playerid, playerTD[20], TEXT_DRAW_FONT_BANK_GOTHIC);
	PlayerTextDrawSetProportional(playerid, playerTD[20], true);
	PlayerTextDrawSetShadow(playerid, playerTD[20], 0);
	return 1;
}