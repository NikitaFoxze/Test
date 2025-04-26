/*
 * |>===========================<|
 * |   About: TDM classes main   |
 * |   Author: Foxze             |
 * |>===========================<|
 */

InterfaceCreate:TDM_SelectClass(playerid)
{
	TDM_CreatePlayerSelectClassTD(playerid, TD_SelectClass[playerid]);

	// Skins
	PlayerTextDrawSetPreviewModel(playerid, TD_SelectClass[playerid][4],
	TDM_GetClassSkin(GetPlayerTeamEx(playerid), TDM_CLASS_ASSAULT, GetPlayerSex(playerid)));

	PlayerTextDrawSetPreviewModel(playerid, TD_SelectClass[playerid][5],
	TDM_GetClassSkin(GetPlayerTeamEx(playerid), TDM_CLASS_MEDIC, GetPlayerSex(playerid)));

	PlayerTextDrawSetPreviewModel(playerid, TD_SelectClass[playerid][6],
	TDM_GetClassSkin(GetPlayerTeamEx(playerid), TDM_CLASS_ENGINEER, GetPlayerSex(playerid)));

	PlayerTextDrawSetPreviewModel(playerid, TD_SelectClass[playerid][7],
	TDM_GetClassSkin(GetPlayerTeamEx(playerid), TDM_CLASS_RECON, GetPlayerSex(playerid)));

	// Played hours
	PlayerTextDrawSetString(playerid, TD_SelectClass[playerid][17],
	"Часов:_%i", pStatsInfo[playerid][e_Hours][TDM_CLASS_ASSAULT]);

	PlayerTextDrawSetString(playerid, TD_SelectClass[playerid][18],
	"Часов:_%i", pStatsInfo[playerid][e_Hours][TDM_CLASS_MEDIC]);

	PlayerTextDrawSetString(playerid, TD_SelectClass[playerid][19],
	"Часов:_%i", pStatsInfo[playerid][e_Hours][TDM_CLASS_ENGINEER]);

	PlayerTextDrawSetString(playerid, TD_SelectClass[playerid][20],
	"Часов:_%i", pStatsInfo[playerid][e_Hours][TDM_CLASS_RECON]);

	n_for(i, sizeof(TD_SelectClass[])) {
		PlayerTextDrawShow(playerid, TD_SelectClass[playerid][i]);
	}
	return 1;
}

InterfaceClose:TDM_SelectClass(playerid)
{
	n_for(i, sizeof(TD_SelectClass[])) {
		DestroyPlayerTD(playerid, TD_SelectClass[playerid][i]);
	}
	return 1;
}

InterfacePlayerClick:TDM_SelectClass(playerid, PlayerText:playertextid)
{
	if (playertextid == TD_SelectClass[playerid][12]) {
		n_for(i, sizeof(TD_SelectClass[]))
			DestroyPlayerTD(playerid, TD_SelectClass[playerid][i]);

		Interface_Show(playerid, Interface:TDM_SelectSpawn);
		return 1;
	}
	else if (playertextid == TD_SelectClass[playerid][4])
		SetPlayerCustomClass2(playerid, TDM_CLASS_ASSAULT);

	else if (playertextid == TD_SelectClass[playerid][5])
		SetPlayerCustomClass2(playerid, TDM_CLASS_MEDIC);

	else if (playertextid == TD_SelectClass[playerid][6])
		SetPlayerCustomClass2(playerid, TDM_CLASS_ENGINEER);

	else if (playertextid == TD_SelectClass[playerid][7])
		SetPlayerCustomClass2(playerid, TDM_CLASS_RECON);
	else
		return 1;

	n_for(i, sizeof(TD_SelectClass[]))
		DestroyPlayerTD(playerid, TD_SelectClass[playerid][i]);

	Interface_Close(playerid, Interface:TDM_SelectClass);
	Interface_Show(playerid, Interface:TDM_SelectedClass);

	CheckPlayerDinaHint(playerid, 11);
	return 1;
}

InterfaceClick:TDM_SelectClass(playerid, Text:clickedid)
{
	// Click escape
	if (clickedid == INVALID_TEXT_DRAW) {
		Interface_Close(playerid, Interface:TDM_SelectClass);

		Interface_Show(playerid, Interface:TDM_SelectSpawn);
		SelectTextDraw(playerid, TD_CLICK_COLOR_GREY);
	}
	return 1;
}