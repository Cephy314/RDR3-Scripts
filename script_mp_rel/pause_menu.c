#region Local Var
	var uLocal_0 = 7;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = -1;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	float fLocal_16 = 0f;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	char* sLocal_22 = NULL;
	struct<184> Local_23 = { 0, -1, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 1;
	var uLocal_218 = 0;
	var uLocal_219 = 2;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<21> Var4;
	bool bVar25;

	fLocal_15 = 1f;
	fLocal_16 = 1f;
	sLocal_21 = "props_misc@campfires@5_logs";
	sLocal_22 = "Script_PropCampfire";
	if (!func_1(&Local_23))
	{
	}
	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "mpProgress");
	DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar0, "coopPercent", "0%");
	DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar0, "awardsPercent", func_2());
	DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar0, "rankPercent", func_3());
	iVar1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "AllowedToSave", 0);
	iVar2 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bAllowedToReplay", 0);
	iVar3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "sessionInfo");
	DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar3, "characterName", &(Global_17172.f_54.f_644.f_1783));
	Local_23.f_181 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bDisplayMissionChallengeChecklist", 0);
	Local_23.f_182 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bAllowChecklistToggle", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bEnablePauseMenuPhotoMode", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bPauseMenuPhotoModeVisible", 0);
	Var4 = { Global_39.f_9 };
	if (TXD::_DOES_STREAMED_TXD_EXIST(-637848863))
	{
		TXD::_REQUEST_STREAMED_TXD(-637848863, false);
	}
	if (TXD::_DOES_STREAMED_TXD_EXIST(joaat("pm_player_mp")))
	{
		TXD::_REQUEST_STREAMED_TXD(joaat("pm_player_mp"), false);
	}
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4))
	{
		if (!Global_17)
		{
			Global_39.f_9 = { Var4 };
		}
		func_4(iVar1, iVar2);
	}
	Local_23.f_179 = 0;
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(iVar1, true);
	_NAMESPACE71::_0xDD1232B332CBB9E7(6, 1, 0);
	func_5(&Global_26384);
	func_6();
	while ((!SCRIPTS::_0x9E4EF615E307FBBE() && !func_7(Global_26384)) && !bVar25)
	{
		func_8(&Local_23);
		func_9(&Local_23);
		func_10();
		func_11(&Local_23);
		bVar25 = func_12();
		BUILTIN::WAIT(0);
	}
	if (bVar25)
	{
		CAM::DO_SCREEN_FADE_OUT(0);
		func_13(0, -1);
	}
	func_4(iVar1, iVar2);
}

int func_1(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 2;
	iVar2 = 1;
	while (iVar2 <= (iVar0 - 1))
	{
		iVar1 = func_14(iVar2, 1);
		if (!func_15(uParam0, iVar1))
		{
			return 0;
		}
		iVar2++;
	}
	return 1;
}

var func_2()
{
	char cVar0[16];
	float fVar2;

	fVar2 = STATS::_0x9D0F5D2E1951CD84();
	StringCopy(&cVar0, MISC::_0x2B6846401D68E563(fVar2, 1), 16);
	StringConCat(&cVar0, "%", 16);
	return func_16(cVar0);
}

var func_3()
{
	char cVar0[16];
	float fVar2;
	float fVar3;
	float fVar4;

	fVar2 = BUILTIN::TO_FLOAT(NETWORK::_0x32C90CDFAF40514C());
	fVar3 = BUILTIN::TO_FLOAT(999);
	fVar4 = ((fVar2 / fVar3) * 100f);
	StringCopy(&cVar0, MISC::_0x2B6846401D68E563(fVar4, 1), 16);
	StringConCat(&cVar0, "%", 16);
	return func_16(cVar0);
}

void func_4(int iParam0, int iParam1)
{
	if (func_7(Global_26384))
	{
		func_17();
	}
	if (Local_23.f_1 != -1)
	{
		NETWORK::TEXTURE_DOWNLOAD_RELEASE(Local_23.f_1);
	}
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(iParam0);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(iParam1);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Local_23.f_181);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Local_23.f_182);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Local_23.f_183);
	func_18(&Local_23);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_5(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
}

void func_6()
{
	struct<8> Var0;
	struct<4> Var8;
	int iVar12;
	char* sVar13;
	bool bVar14;
	bool bVar15;
	char* sVar16;
	int iVar17;
	char* sVar18;
	int iVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	float fVar23;

	Var8 = { func_19(0, 1, 0, -1) };
	Var0 = { func_20(&Var8, 0, 1) };
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954472->f_5.f_1, &(Global_17172.f_54.f_644.f_1783));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954472->f_5.f_4, &Var0);
	func_21();
	func_22(0, "MP_PLAYER_PLAYER", "pm_player_mp");
	iVar12 = Global_1954472->f_1331.f_103;
	sVar13 = func_23(iVar12);
	if (iVar12 == -10)
	{
		sVar16 = "rpg_underweight";
		bVar14 = true;
	}
	else if (iVar12 == 10)
	{
		sVar16 = "rpg_overweight";
		bVar14 = true;
	}
	func_24(0, 0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CONDITION_WEIGHT"), MISC::_CREATE_VAR_STRING(2, sVar13), bVar14, sVar16, "pausemenu_player", bVar14, joaat("COLOR_WHITE"));
	if (Global_1954472->f_1331.f_103 == 0 || bVar14)
	{
		bVar15 = true;
	}
	func_25(1, bVar15, bVar14);
	func_25(2, bVar15, bVar14);
	func_25(3, bVar15, bVar14);
	sVar13 = "PMPLAYER_CONDITION_TEMPERATURE_FAIR";
	bVar14 = false;
	sVar16 = "";
	if (func_26())
	{
		sVar13 = "PMPLAYER_CONDITION_TEMPERATURE_COLD";
		bVar14 = true;
		sVar16 = "rpg_cold";
	}
	else if (func_27())
	{
		sVar13 = "PMPLAYER_CONDITION_TEMPERATURE_HOT";
		bVar14 = true;
		sVar16 = "rpg_hot";
	}
	func_24(0, 1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CONDITION_TEMPERATURE"), MISC::_CREATE_VAR_STRING(2, sVar13), bVar14, sVar16, "pausemenu_player", bVar14, joaat("COLOR_WHITE"));
	func_28(1, bVar14, bVar14, sVar16);
	func_24(0, 2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_RANK"), "", 0, "Rank_Shield", "pm_player_mp", 1, joaat("COLOR_WHITE"));
	sVar13 = func_29(Global_1139395[&Global_1275573 /*34*/]);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1954472->f_5.f_14[0 /*82*/])->f_68[2]), sVar13);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1954472->f_5.f_14[0 /*82*/])->f_75[2]), true);
	iVar17 = NETWORK::_0xDB438CC9BC6F4022();
	sVar18 = func_30(Global_1139395[&Global_1275573 /*34*/] + 1);
	sVar13 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_X_OF_Y_XP", iVar17, sVar18);
	func_24(0, 3, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_RANK_XP"), sVar13, 0, "", "", 0, joaat("COLOR_WHITE"));
	sVar16 = func_32(func_31(255));
	func_24(0, 4, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HONOR"), "", 0, sVar16, "pausemenu_player", 1, joaat("COLOR_WHITE"));
	sVar13 = func_34(func_33(PLAYER::PLAYER_ID(), 0), &bVar14, &iVar19);
	func_24(0, 5, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_GENERAL_HOSTILITY"), MISC::_CREATE_VAR_STRING(2, sVar13), bVar14, "ONLINE_OPTIONS_HOSTILITY", "mp_online_options", 1, iVar19);
	fVar20 = func_35(0, 2);
	fVar21 = BUILTIN::TO_FLOAT(func_36(0, 2));
	fVar21 = (fVar21 / func_37());
	fVar22 = ((fVar20 / 100f) * (fVar21 / 60f));
	fVar23 = (100f * (BUILTIN::TO_FLOAT(func_38(0, 2)) / fVar21));
	sVar13 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_VALUE", BUILTIN::ROUND(fVar20));
	func_24(1, 0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC"), sVar13, 0, "", "", 0, joaat("COLOR_WHITE"));
	sVar13 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_TIME_VALUE_MINUTES", BUILTIN::ROUND(fVar22));
	func_24(1, 1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_TIME"), sVar13, 0, "", "", 0, joaat("COLOR_WHITE"));
	sVar13 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_VALUE", BUILTIN::ROUND(fVar23));
	bVar14 = fVar23 > 100f;
	iVar19 = func_39(bVar14, joaat("COLOR_RED"), joaat("COLOR_WHITE"));
	func_24(1, 2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), sVar13, bVar14, func_40(fVar23), "pausemenu_player_update", fVar23 != 100f, iVar19);
	bVar14 = func_41();
	func_42(1, bVar14, bVar14);
	fVar20 = func_35(1, 2);
	fVar21 = BUILTIN::TO_FLOAT(func_36(1, 2));
	fVar21 = (fVar21 / func_37());
	fVar22 = ((fVar20 / 100f) * (fVar21 / 60f));
	fVar23 = (100f * (BUILTIN::TO_FLOAT(func_38(1, 2)) / fVar21));
	sVar13 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_VALUE", BUILTIN::ROUND(fVar20));
	func_24(2, 0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC"), sVar13, 0, "", "", 0, joaat("COLOR_WHITE"));
	sVar13 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_TIME_VALUE_MINUTES", BUILTIN::ROUND(fVar22));
	func_24(2, 1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_TIME"), sVar13, 0, "", "", 0, joaat("COLOR_WHITE"));
	sVar13 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_VALUE", BUILTIN::ROUND(fVar23));
	bVar14 = fVar23 > 100f;
	iVar19 = func_39(bVar14, joaat("COLOR_RED"), joaat("COLOR_WHITE"));
	func_24(2, 2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), sVar13, bVar14, func_40(fVar23), "pausemenu_player_update", fVar23 != 100f, iVar19);
	fVar20 = func_35(2, 2);
	fVar21 = BUILTIN::TO_FLOAT(func_36(2, 2));
	fVar21 = (fVar21 / func_37());
	fVar22 = ((fVar20 / 100f) * (fVar21 / 60f));
	fVar23 = (100f * (BUILTIN::TO_FLOAT(func_38(2, 2)) / fVar21));
	sVar13 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_VALUE", BUILTIN::ROUND(fVar20));
	func_24(3, 0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC"), sVar13, 0, "", "", 0, joaat("COLOR_WHITE"));
	sVar13 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_TIME_VALUE_MINUTES", BUILTIN::ROUND(fVar22));
	func_24(3, 1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_TIME"), sVar13, 0, "", "", 0, joaat("COLOR_WHITE"));
	sVar13 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_VALUE", BUILTIN::ROUND(fVar23));
	bVar14 = fVar23 > 100f;
	iVar19 = func_39(bVar14, joaat("COLOR_RED"), joaat("COLOR_WHITE"));
	func_24(3, 2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), sVar13, bVar14, func_40(fVar23), "pausemenu_player_update", fVar23 != 100f, iVar19);
	sVar13 = MISC::_CREATE_VAR_STRING(2, "STRING", func_43());
	func_24(4, 0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_STORY_COMPLETE"), sVar13, 0, "", "", 0, joaat("COLOR_WHITE"));
	sVar13 = MISC::_CREATE_VAR_STRING(2, "STRING", func_44(joaat("KILLS")));
	func_24(4, 1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_TOTAL_KILLS"), sVar13, 0, "", "", 0, joaat("COLOR_WHITE"));
	sVar13 = MISC::_CREATE_VAR_STRING(2, "STRING", func_44(joaat("DEATHS")));
	func_24(4, 2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_TOTAL_DEATHS"), sVar13, 0, "", "", 0, joaat("COLOR_WHITE"));
}

int func_7(struct<2> Param0)
{
	if (!func_45(Param0))
	{
		return 0;
	}
	if (Param0.f_1 < 0)
	{
		return 0;
	}
	if (Param0.f_1 >= func_46(Param0))
	{
		return 0;
	}
	return 1;
}

void func_8(var uParam0)
{
	bool bVar0;

	if (func_47(uParam0, 0))
	{
		func_48(uParam0, 0, 0);
	}
	if (!UIAPPS::_IS_APP_ACTIVE(joaat("pause_menu")))
	{
		return;
	}
	bVar0 = UIAPPS::_IS_APP_RUNNING(joaat("pause_menu"));
	if (uParam0->f_191 != bVar0)
	{
		uParam0->f_191 = bVar0;
		if (bVar0)
		{
			func_48(uParam0, 0, 1);
		}
	}
}

void func_9(var uParam0)
{
	struct<7> Var0;

	if (NETWORK::_0xCD954F330693F5F2())
	{
		switch (*uParam0)
		{
			case 0:
				if (NETWORK::_0xE2C3CEC3C0903A00("mugshot"))
				{
					NETWORK::_0x7A17B7981560FFA5("mugshot");
				}
				*uParam0 = 1;
				break;
			case 1:
				if (!NETWORK::_0xE2C3CEC3C0903A00("mugshot"))
				{
					Var0 = { func_49() };
					uParam0->f_1 = NETWORK::_0x9B5DB6CEAFAA10BB(&Var0, 0, "mugshot", 1);
					if (uParam0->f_1 != -1)
					{
						*uParam0 = 2;
					}
				}
				break;
			case 2:
				if (NETWORK::_GET_STATUS_OF_TEXTURE_DOWNLOAD(uParam0->f_1) == 0)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954472->f_5.f_2, "mugshot");
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954472->f_5.f_3, "mugshot");
					*uParam0 = 3;
				}
				break;
			case 3:
				break;
		}
	}
}

void func_10()
{
	struct<4> Var0;
	int iVar4;

	iVar4 = joaat("pause_menu");
	while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iVar4))
	{
		if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(iVar4, &Var0))
		{
			switch (Var0)
			{
				case -1740156697:
					switch (Var0.f_2)
					{
						case 248393197:
							func_50(Var0.f_3);
							break;
					}
					UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
					break;
				case -1203660660:
					switch (Var0.f_2)
					{
						case 766694521:
							func_51(455956792);
							break;
						case -385109718:
							func_52();
							break;
						case -609314343:
							func_53();
							break;
						case 1371972537:
							func_54();
							break;
						case -17440837:
							func_55();
							break;
						case -164517057:
							func_56();
							break;
						case -1123713079:
							func_57();
							break;
						case -1332231262:
							CAM::DO_SCREEN_FADE_OUT(0);
							func_58();
							break;
						case -1856718599:
							break;
					}
					UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
					break;
				default:
					UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
					break;
			}
		}
	}
}

void func_11(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = UIAPPS::_0x96FD694FE5BE55DC(joaat("pause_menu"));
	iVar1 = func_59(uParam0);
	if (iVar0 != iVar1)
	{
		if (iVar1 != 0)
		{
			func_60(uParam0, iVar1);
		}
		func_61(uParam0, iVar0);
		func_62(uParam0, iVar0);
	}
	func_63(uParam0, iVar0);
}

int func_12()
{
	int iVar0;
	int iVar4;

	iVar4 = -37892458;
	while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iVar4))
	{
		if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(iVar4, &iVar0))
		{
			switch (iVar0)
			{
				case -1203660660:
					UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
					return 1;
				case -1740156697:
					UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
					break;
				default:
					UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
					break;
			}
		}
	}
	return 0;
}

void func_13(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		func_64(iParam0, iParam1);
	}
	func_65(4);
	func_66(1);
}

int func_14(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1271225230;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

int func_15(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1271225230:
			return func_67(uParam0);
	}
	return 0;
}

char* func_16(char[4] cParam0, char[4] cParam1)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

void func_17()
{
	Global_0.f_6 = MISC::GET_GAME_TIMER();
	Global_0.f_3 = { Global_35 };
	func_68(&Global_0);
}

int func_18(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 2;
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		iVar1 = func_14(iVar2, 1);
		func_69(uParam0, iVar1);
		iVar2++;
	}
	return 1;
}

struct<4> func_19(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	struct<4> Var0;
	struct<4> Var29;
	bool bVar33;
	int iVar34;
	struct<4> Var35;

	Var0.f_9 = -1591664384;
	if (!func_70(&Var0, bParam0))
	{
	}
	if (!bParam2)
	{
		Var29 = { func_71() };
		if (func_72() && INVENTORY::_0xB881CA836CC4B6D4(&Var29))
		{
			Var0 = { Var29 };
		}
		else if (!INVENTORY::_0x4C543D5DFCD2DAFD(&Var29, &Var0))
		{
			func_73(&Var0, 0);
		}
	}
	if (iParam3 == -1)
	{
		iParam3 = func_74(PLAYER::PLAYER_ID());
	}
	bVar33 = func_75(75);
	if (bVar33)
	{
		iParam3 = 3;
	}
	iVar34 = func_76(iParam3, 0);
	if (iVar34 != 3)
	{
		if (INVENTORY::_0xB881CA836CC4B6D4(Global_17172.f_54.f_61[iVar34 /*4*/]))
		{
			Var0 = { *(Global_17172.f_54.f_61[iVar34 /*4*/]) };
		}
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		if (!bParam1)
		{
			return func_77();
		}
		if (!func_78(&Var0, 0))
		{
			Var35 = { func_79(bParam0) };
		}
		else
		{
			Var35 = { Var0 };
		}
		return Var35;
	}
	return Var0;
}

struct<8> func_20(int iParam0, int iParam1, bool bParam2)
{
	char cVar0[64];
	struct<42> Var8;
	struct<8> Var50;

	StringCopy(&cVar0, "", 64);
	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		return cVar0;
	}
	Var8 = { func_80(iParam0, iParam1, 0) };
	cVar0 = { Var8.f_12 };
	if (bParam2)
	{
		if (func_81(iParam0, &Var50))
		{
			cVar0 = { Var50 };
		}
	}
	if (MISC::COMPARE_STRINGS(&cVar0, func_82(), false, -1) == 0)
	{
		StringCopy(&cVar0, MISC::_CREATE_VAR_STRING(2, func_83(Var8.f_22)), 64);
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar0) == 0)
	{
		if (Var8.f_22 != 0)
		{
			StringCopy(&cVar0, MISC::_CREATE_VAR_STRING(2, func_84(Var8.f_22)), 64);
		}
		else
		{
			StringCopy(&cVar0, "", 64);
		}
	}
	return cVar0;
}

void func_21()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(&(Global_1954472->f_5.f_8[iVar0]));
		iVar0++;
	}
}

void func_22(int iParam0, char* sParam1, char* sParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1954472->f_5.f_14[iParam0 /*82*/])->f_8, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1954472->f_5.f_14[iParam0 /*82*/])->f_9, sParam2);
}

char* func_23(int iParam0)
{
	if (iParam0 == 0)
	{
		return "PMPLAYER_CONDITION_WEIGHT_PERFECT";
	}
	if (iParam0 <= -7)
	{
		return "PMPLAYER_CONDITION_WEIGHT_UNDERWEIGHT";
	}
	if (iParam0 >= 7)
	{
		return "PMPLAYER_CONDITION_WEIGHT_OVERWWEIGHT";
	}
	return "PMPLAYER_CONDITION_WEIGHT_AVERAGE";
}

void func_24(int iParam0, bool bParam1, char* sParam2, char* sParam3, bool bParam4, char* sParam5, char* sParam6, bool bParam7, int iParam8)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1954472->f_5.f_14[iParam0 /*82*/])->f_19[bParam1]), sParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1954472->f_5.f_14[iParam0 /*82*/])->f_26[bParam1]), sParam3);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1954472->f_5.f_14[iParam0 /*82*/])->f_33[bParam1]), bParam4);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1954472->f_5.f_14[iParam0 /*82*/])->f_40[bParam1]), sParam5);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1954472->f_5.f_14[iParam0 /*82*/])->f_47[bParam1]), sParam6);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(&((Global_1954472->f_5.f_14[iParam0 /*82*/])->f_54[bParam1]), iParam8);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1954472->f_5.f_14[iParam0 /*82*/])->f_61[bParam1]), bParam7);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(&(Global_1954472->f_5.f_8[iParam0]), bParam1, "player_attribute_item", &((Global_1954472->f_5.f_14[iParam0 /*82*/])->f_1[bParam1]));
}

void func_25(int iParam0, bool bParam1, bool bParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1954472->f_5.f_14[iParam0 /*82*/])->f_11, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1954472->f_5.f_14[iParam0 /*82*/])->f_10, bParam2);
}

bool func_26()
{
	return Global_1954472->f_1331.f_96 == 2;
}

bool func_27()
{
	return Global_1954472->f_1331.f_96 == 0;
}

void func_28(int iParam0, bool bParam1, bool bParam2, char* sParam3)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1954472->f_5.f_14[iParam0 /*82*/])->f_15, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1954472->f_5.f_14[iParam0 /*82*/])->f_14, bParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1954472->f_5.f_14[iParam0 /*82*/])->f_16, sParam3);
}

char* func_29(int iParam0)
{
	return MISC::_0x2B6846401D68E563(BUILTIN::TO_FLOAT(iParam0), 0);
}

int func_30(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 999)
	{
		return -1;
	}
	return &(Global_1132968->f_11.f_556[(iParam0 - 1)]);
}

int func_31(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return -1;
	}
	return ((*Global_1139395)[iParam0 /*34*/])->f_8.f_1;
}

char* func_32(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HONOR_BAD_8";
		case 1:
			return "HONOR_BAD_7";
		case 2:
			return "HONOR_BAD_6";
		case 3:
			return "HONOR_BAD_5";
		case 4:
			return "HONOR_BAD_4";
		case 5:
			return "HONOR_BAD_3";
		case 6:
			return "HONOR_BAD_2";
		case 7:
			return "HONOR_BAD_1";
		case 8:
			return "HONOR_GOOD_1";
		case 9:
			return "HONOR_GOOD_2";
		case 10:
			return "HONOR_GOOD_3";
		case 11:
			return "HONOR_GOOD_4";
		case 12:
			return "HONOR_GOOD_5";
		case 13:
			return "HONOR_GOOD_6";
		case 14:
			return "HONOR_GOOD_7";
		case 15:
			return "HONOR_GOOD_8";
	}
	return "HONOR_GOOD_1";
}

int func_33(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = BUILTIN::FLOOR(func_85(iParam0, bParam1));
	if (bParam1)
	{
		iVar3 = iParam0;
		if (iVar3 < 0 || iVar3 >= 32)
		{
			iVar2 = 0;
		}
		else
		{
			iVar2 = BUILTIN::FLOOR(((*Global_1097610)[iVar3 /*51*/])->f_18);
		}
		if (iVar2 > iVar0)
		{
			iVar1 = iVar2;
		}
		else
		{
			iVar1 = iVar0;
		}
	}
	else
	{
		iVar1 = iVar0;
	}
	if (iVar1 < Global_1901929->f_673.f_31)
	{
		return 0;
	}
	if (iVar1 < Global_1901929->f_673.f_32)
	{
		return 1;
	}
	if (iVar1 < Global_1901929->f_673.f_33)
	{
		return 2;
	}
	if (iVar1 < Global_1901929->f_673.f_34)
	{
		return 3;
	}
	if (iVar1 < Global_1901929->f_673.f_35)
	{
		return 4;
	}
	if (iVar1 < Global_1901929->f_673.f_36)
	{
		return 5;
	}
	return 6;
}

char* func_34(int iParam0, bool bParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			*bParam1 = 0;
			*iParam2 = joaat("COLOR_WHITE");
			return "PMPLAYER_GENERAL_HOSTILITY_LOW";
		case 2:
		case 3:
			*bParam1 = 0;
			*iParam2 = joaat("COLOR_WHITE");
			return "PMPLAYER_GENERAL_HOSTILITY_MID";
		case 4:
		case 5:
		case 6:
			*bParam1 = 1;
			*iParam2 = joaat("COLOR_RED");
			return "PMPLAYER_GENERAL_HOSTILITY_HIGH";
	}
	return "PMPLAYER_GENERAL_HOSTILITY_MID";
}

float func_35(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_86(2);
	}
	switch (iParam1)
	{
		case 0:
			return &(Global_1954472->f_1331.f_6[iParam0 /*3*/]);
		case 1:
			return &(Global_1954472->f_1465.f_2.f_6[iParam0 /*3*/]);
		default:
			break;
	}
	return -1f;
}

int func_36(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_86(2);
	}
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					if (func_41())
					{
						return 1200;
					}
					else if (func_26())
					{
						return 1200;
					}
					else if (func_27())
					{
						return 1200;
					}
					return Global_1954472->f_1331.f_81;
				case 2:
					return Global_1954472->f_1331.f_83;
				case 1:
					return Global_1954472->f_1331.f_82;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return Global_1954472->f_1465.f_2.f_81;
				case 2:
					return Global_1954472->f_1465.f_2.f_83;
				case 1:
					return Global_1954472->f_1465.f_2.f_82;
				default:
					break;
			}
			break;
	}
	return -1;
}

float func_37()
{
	return Global_1954472->f_1331.f_98;
}

int func_38(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_86(2);
	}
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return Global_1954472->f_1331.f_81;
				case 2:
					return Global_1954472->f_1331.f_83;
				case 1:
					return Global_1954472->f_1331.f_82;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return Global_1954472->f_1465.f_2.f_81;
				case 2:
					return Global_1954472->f_1465.f_2.f_83;
				case 1:
					return Global_1954472->f_1465.f_2.f_82;
				default:
					break;
			}
			break;
	}
	return -1;
}

int func_39(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

char* func_40(float fParam0)
{
	if (fParam0 > 100f)
	{
		return "RPG_ARROW_DOWN";
	}
	else if (fParam0 < 100f)
	{
		return "RPG_ARROW_UP";
	}
	return "";
}

bool func_41()
{
	return (Global_1140484->f_18706[20 /*195*/])->f_194;
}

void func_42(int iParam0, bool bParam1, bool bParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1954472->f_5.f_14[iParam0 /*82*/])->f_13, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1954472->f_5.f_14[iParam0 /*82*/])->f_12, bParam2);
}

int func_43()
{
	int iVar0;
	int iVar1;

	iVar0 = 13;
	while (iVar0 <= 25)
	{
		if (func_87(iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_44(int iParam0)
{
	var uVar0;
	struct<2> Var1;

	Var1 = { func_88(iParam0) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	return uVar0;
}

int func_45(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_46(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_1070356->f_634.f_601;
		case 3:
			return Global_1070356->f_634.f_2103;
		case 4:
			return Global_1070356->f_634.f_12605;
		case 5:
			return Global_1070356->f_634.f_12907;
		case 6:
			return Global_1070356->f_634.f_15909;
		case 7:
			return Global_1070356->f_634.f_15980;
		case 8:
			return Global_1070356->f_634.f_17182;
		default:
			break;
	}
	return -1;
}

bool func_47(var uParam0, int iParam1)
{
	return func_89(uParam0->f_192, iParam1);
}

void func_48(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_90(&(uParam0->f_192), iParam1);
	}
	else
	{
		func_91(&(uParam0->f_192), iParam1);
	}
}

struct<7> func_49()
{
	struct<7> Var0;

	NETWORK::NETWORK_GET_LOCAL_HANDLE(&Var0);
	return Var0;
}

void func_50(int iParam0)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, "rpg_pause_item_index");
	switch (Global_1954472->f_5.f_1325)
	{
		case 0:
			func_92(iVar0);
			break;
		case 1:
			func_93(iVar0);
			break;
		case 2:
			func_94(iVar0);
			break;
		case 3:
			func_95(iVar0);
			break;
		case 4:
			func_96(iVar0);
			break;
		case 5:
			func_97(iVar0);
			break;
	}
}

void func_51(int iParam0)
{
	Global_1958309 = iParam0;
}

void func_52()
{
	char* sVar0;
	vector3 vVar1[24];
	bool bVar4;
	bool bVar5;
	var uVar6;

	func_98(1, 1);
	Global_1954472->f_5.f_1325 = 0;
	func_100(MISC::_CREATE_VAR_STRING(2, func_99(0)));
	func_101(0, "PMPLAYER_STATISTICS");
	func_102(1, "PMPLAYER_OVERVIEW", "", 1, 0, 0, 0, 0, 0, 0);
	sVar0 = func_29(Global_1139395[&Global_1275573 /*34*/]);
	func_102(2, "PMPLAYER_RANK", "", 1, 0, 0, "", "", sVar0, 1);
	func_102(3, "PMPLAYER_HONOR", "", 1, 0, 1, func_32(func_31(255)), "pausemenu_player", 0, 0);
	func_101(4, "PMPLAYER_CONDITIONS");
	StringCopy(&cVar1, DATABINDING::_DATABINDING_READ_DATA_STRING(&((Global_1954472->f_5.f_14[0 /*82*/])->f_40[0])), 24);
	bVar4 = DATABINDING::_DATABINDING_READ_DATA_BOOL(&((Global_1954472->f_5.f_14[0 /*82*/])->f_61[0]));
	sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(&((Global_1954472->f_5.f_14[0 /*82*/])->f_26[0]));
	if (bVar4)
	{
		func_102(5, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 1, bVar4, &cVar1, "pausemenu_player", 0, 0);
	}
	else
	{
		func_102(5, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 0, 0, 0, 0, 0, 0);
	}
	sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(&((Global_1954472->f_5.f_14[0 /*82*/])->f_26[1]));
	if (func_27())
	{
		func_102(6, "PMPLAYER_CONDITION_TEMPERATURE", sVar0, 1, 1, 1, "rpg_hot", "pausemenu_player", 0, 0);
	}
	else if (func_26())
	{
		func_102(6, "PMPLAYER_CONDITION_TEMPERATURE", sVar0, 1, 1, 1, "rpg_cold", "pausemenu_player", 0, 0);
	}
	else
	{
		func_102(6, "PMPLAYER_CONDITION_TEMPERATURE", sVar0, 1, 0, 0, 0, 0, 0, 0);
	}
	if (func_41())
	{
		func_102(7, "PMPLAYER_CONDITION_TOXICITY", MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CONDITION_TOXICITY_POISONED"), 1, 1, 1, "rpg_sick", "pausemenu_player", 0, 0);
	}
	else
	{
		func_102(7, "PMPLAYER_CONDITION_TOXICITY", "", 0, 0, 0, 0, 0, 0, 0);
	}
	sVar0 = func_34(func_33(PLAYER::PLAYER_ID(), 0), &bVar5, &uVar6);
	func_102(8, "PMPLAYER_GENERAL_HOSTILITY", MISC::_CREATE_VAR_STRING(2, sVar0), 1, bVar5, 1, "ONLINE_OPTIONS_HOSTILITY", "mp_online_options", 0, 0);
	func_103(0);
	func_104(0);
	func_92(1);
}

void func_53()
{
	char* sVar0;
	char* sVar1;
	vector3 vVar2[24];
	bool bVar5;

	Global_1954472->f_5.f_1325 = 1;
	func_98(1, 1);
	func_100(MISC::_CREATE_VAR_STRING(2, func_99(1)));
	func_101(0, "PMPLAYER_STATISTICS");
	func_102(1, "PMPLAYER_OVERVIEW", "", 1, 0, 0, 0, 0, 0, 0);
	sVar1 = func_105(0, 2) + 5;
	func_102(2, "PMPLAYER_PROGRESSION", MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_LEVEL", sVar1), 1, 0, 0, 0, 0, 0, 0);
	func_101(3, "PMPLAYER_CONDITIONS");
	StringCopy(&cVar2, DATABINDING::_DATABINDING_READ_DATA_STRING(&((Global_1954472->f_5.f_14[0 /*82*/])->f_40[0])), 24);
	bVar5 = DATABINDING::_DATABINDING_READ_DATA_BOOL(&((Global_1954472->f_5.f_14[0 /*82*/])->f_61[0]));
	sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(&((Global_1954472->f_5.f_14[0 /*82*/])->f_26[0]));
	if (bVar5)
	{
		func_102(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 1, bVar5, &cVar2, "pausemenu_player", 0, 0);
	}
	else
	{
		func_102(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 0, 0, 0, 0, 0, 0);
	}
	sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(&((Global_1954472->f_5.f_14[0 /*82*/])->f_26[1]));
	if (func_27())
	{
		func_102(5, "PMPLAYER_CONDITION_TEMPERATURE", sVar0, 1, 1, 1, "rpg_hot", "pausemenu_player", 0, 0);
	}
	else if (func_26())
	{
		func_102(5, "PMPLAYER_CONDITION_TEMPERATURE", sVar0, 1, 1, 1, "rpg_cold", "pausemenu_player", 0, 0);
	}
	else
	{
		func_102(5, "PMPLAYER_CONDITION_TEMPERATURE", sVar0, 1, 0, 0, 0, 0, 0, 0);
	}
	if (func_41())
	{
		func_102(6, "PMPLAYER_CONDITION_TOXICITY", MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CONDITION_TOXICITY_POISONED"), 1, 1, 1, "rpg_sick", "pausemenu_player", 0, 0);
	}
	else
	{
		func_102(6, "PMPLAYER_CONDITION_TOXICITY", "", 0, 0, 0, 0, 0, 0, 0);
	}
	func_103(0);
	func_104(0);
	func_93(1);
	func_106("PMPLAYER_HEALTH_OVERVIEW_TOOLTIP");
}

void func_54()
{
	char* sVar0;
	char* sVar1;
	vector3 vVar2[24];
	bool bVar5;

	Global_1954472->f_5.f_1325 = 2;
	func_98(1, 1);
	func_100(MISC::_CREATE_VAR_STRING(2, func_99(2)));
	func_101(0, "PMPLAYER_STATISTICS");
	func_102(1, "PMPLAYER_OVERVIEW", "", 1, 0, 0, 0, 0, 0, 0);
	sVar1 = func_105(1, 2) + 5;
	func_102(2, "PMPLAYER_PROGRESSION", MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_LEVEL", sVar1), 1, 0, 0, 0, 0, 0, 0);
	func_101(3, "PMPLAYER_CONDITIONS");
	StringCopy(&cVar2, DATABINDING::_DATABINDING_READ_DATA_STRING(&((Global_1954472->f_5.f_14[0 /*82*/])->f_40[0])), 24);
	bVar5 = DATABINDING::_DATABINDING_READ_DATA_BOOL(&((Global_1954472->f_5.f_14[0 /*82*/])->f_61[0]));
	sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(&((Global_1954472->f_5.f_14[0 /*82*/])->f_26[0]));
	if (bVar5)
	{
		func_102(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 1, bVar5, &cVar2, "pausemenu_player", 0, 0);
	}
	else
	{
		func_102(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 0, 0, 0, 0, 0, 0);
	}
	func_103(0);
	func_104(0);
	func_94(1);
	func_106("PMPLAYER_STAMINA_OVERVIEW_TOOLTIP");
}

void func_55()
{
	char* sVar0;
	char* sVar1;
	vector3 vVar2[24];
	bool bVar5;

	Global_1954472->f_5.f_1325 = 3;
	func_98(1, 1);
	func_100(MISC::_CREATE_VAR_STRING(2, func_99(3)));
	func_101(0, "PMPLAYER_STATISTICS");
	func_102(1, "PMPLAYER_OVERVIEW", "", 1, 0, 0, 0, 0, 0, 0);
	sVar1 = func_105(2, 2) + 5;
	func_102(2, "PMPLAYER_PROGRESSION", MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_LEVEL", sVar1), 1, 0, 0, 0, 0, 0, 0);
	func_101(3, "PMPLAYER_CONDITIONS");
	StringCopy(&cVar2, DATABINDING::_DATABINDING_READ_DATA_STRING(&((Global_1954472->f_5.f_14[0 /*82*/])->f_40[0])), 24);
	bVar5 = DATABINDING::_DATABINDING_READ_DATA_BOOL(&((Global_1954472->f_5.f_14[0 /*82*/])->f_61[0]));
	sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(&((Global_1954472->f_5.f_14[0 /*82*/])->f_26[0]));
	if (bVar5)
	{
		func_102(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 1, bVar5, &cVar2, "pausemenu_player", 0, 0);
	}
	else
	{
		func_102(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 0, 0, 0, 0, 0, 0);
	}
	func_103(0);
	func_104(0);
	func_95(1);
	func_106("PMPLAYER_DEADEYE_OVERVIEW_TOOLTIP");
}

void func_56()
{
	char cVar0[64];
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	float fVar15;
	int iVar16;
	float fVar17;
	int iVar18;
	int iVar19;

	Global_1954472->f_5.f_1325 = 4;
	func_98(1, 1);
	func_100(MISC::_CREATE_VAR_STRING(2, func_99(4)));
	func_101(0, "PMPLAYER_LIFE_STATS");
	func_107();
	StringCopy(&cVar0, MISC::_CREATE_VAR_STRING(10, "PMPLAYER_MONEY", func_109((func_108(joaat("total_money_earned")) / 100f), 2)), 64);
	func_102(2, "PMPLAYER_TOTAL_CASH", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	StringCopy(&cVar0, MISC::_CREATE_VAR_STRING(10, "PMPLAYER_GOLD", func_109((func_108(joaat("total_gold_earned")) / 100f), 2)), 64);
	func_102(3, "PMPLAYER_TOTAL_GOLD", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	StringCopy(&cVar0, MISC::_CREATE_VAR_STRING(10, "PMPLAYER_MONEY", func_109((func_108(joaat("total_money_spent")) / 100f), 2)), 64);
	func_102(4, "PMPLAYER_CASH_SPENT", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	StringCopy(&cVar0, MISC::_CREATE_VAR_STRING(10, "PMPLAYER_GOLD", func_109((func_108(joaat("total_gold_spent")) / 100f), 2)), 64);
	func_102(5, "PMPLAYER_GOLD_SPENT", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, func_44(joaat("KILLS")), 64);
	func_102(6, "PMPLAYER_TOTAL_KILLS", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, func_44(joaat("DEATHS")), 64);
	func_102(7, "PMPLAYER_TOTAL_DEATHS", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	iVar8 = (func_44(joaat("TOTAL_PLAYING_TIME")) / 1000);
	iVar9 = (iVar8 / 60);
	iVar10 = (iVar9 / 60);
	iVar11 = (iVar10 / 24);
	iVar10 = (iVar10 % 24);
	StringCopy(&cVar0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_DAYS_AND_HOURS", iVar11, iVar10), 64);
	func_102(8, "PMPLAYER_TIME_ONLINE", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	func_110("ALL HORSES", &iVar12, &iVar13, -1591664384, 0);
	func_111(iVar12);
	iVar14 = func_112(joaat("HORSE_OWNED"));
	if (iVar14 >= iVar13)
	{
		IntToString(&cVar0, iVar14, 64);
	}
	else
	{
		IntToString(&cVar0, iVar13, 64);
		func_114(func_113(joaat("HORSE_OWNED")), (iVar13 - iVar14));
	}
	func_102(9, "PMPLAYER_HORSES_OWNED", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	func_101(10, "PMPLAYER_CRIME_STAT");
	IntToString(&cVar0, func_44(joaat("KILLS_PLAYERS")), 64);
	func_102(11, "PMPLAYER_PLAYERS_KILLED", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, func_115(joaat("KILLS"), joaat("LAW")), 64);
	func_102(12, "PMPLAYER_LAW_KILLED", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, func_115(joaat("KILLS"), joaat("CIVILIAN")), 64);
	func_102(13, "PMPLAYER_PEDS_KILLED", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	iVar8 = (func_115(joaat("TIME_IN_WANTED_LEVEL"), -2140438327) / 1000);
	iVar9 = (iVar8 / 60);
	iVar10 = (iVar9 / 60);
	iVar11 = (iVar10 / 24);
	iVar10 = (iVar10 % 24);
	iVar9 = (iVar9 % 60);
	StringCopy(&cVar0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_DAYS_HOURS_MINUTES", iVar11, iVar10, iVar9), 64);
	func_102(14, "PMPLAYER_TIME_WANTED", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, func_115(joaat("LOOTED"), joaat("HUMANS")), 64);
	func_102(15, "PMPLAYER_PEDS_LOOTED", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	func_101(16, "PMPLAYER_HUNTING");
	IntToString(&cVar0, func_115(joaat("KILLS"), joaat("ANIMAL")), 64);
	func_102(17, "PMPLAYER_ANIMALS_KILLED", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, func_116(joaat("Animals"), joaat("KILLED")), 64);
	func_102(18, "PMPLAYER_UNIQUE_ANIMALS_KILLED", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, ((func_115(joaat("SKINNED"), joaat("SMALL_ANIMALS")) + func_115(joaat("SKINNED"), joaat("MEDIUM_ANIMALS"))) + func_115(joaat("SKINNED"), joaat("LARGE_ANIMALS"))), 64);
	func_102(19, "PMPLAYER_ANIMALS_SKINNED", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, ((func_116(joaat("Animals"), joaat("SKINNED")) + func_116(joaat("Animals"), joaat("PLUCKED"))) + func_116(joaat("Animals"), joaat("COLLECTED"))), 64);
	func_102(20, "PMPLAYER_UNIQUE_ANIMALS_SKINNED", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, func_115(joaat("skinned_pelt_quality"), joaat("PERFECT")), 64);
	func_102(21, "PMPLAYER_PERFEECT_KILLS", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	StringCopy(&cVar0, MISC::_CREATE_VAR_STRING(10, "PMPLAYER_MONEY", func_109((func_108(joaat("total_hunting_money_earned")) / 100f), 2)), 64);
	func_102(22, "PMPLAYER_HUNTING_PROFITS", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, func_44(joaat("fish_caught")), 64);
	func_102(23, "PMPLAYER_FISH_CAUGHT", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	if (MISC::_SHOULD_USE_METRIC_WEIGHT())
	{
		fVar15 = (func_108(joaat("biggest_fish_caught")) * 0.453592f);
		StringCopy(&cVar0, MISC::_CREATE_VAR_STRING(10, "PMPLAYER_KG", func_109(fVar15, 2)), 64);
	}
	else
	{
		iVar16 = func_44(joaat("biggest_fish_caught"));
		fVar17 = (func_108(joaat("biggest_fish_caught")) - BUILTIN::TO_FLOAT(iVar16));
		StringCopy(&cVar0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_LB_AND_OZ", iVar16, BUILTIN::ROUND((16f * fVar17))), 64);
	}
	func_102(24, "PMPLAYER_BIGGEST_FISH", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	func_101(25, "PMPLAYER_CONTENT");
	IntToString(&cVar0, func_43(), 64);
	func_102(26, "PMPLAYER_STORY_COMPLETE", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	iVar18 = func_115(joaat("WINS"), joaat("UGC_SERIES"));
	iVar19 = func_115(joaat("LOSSES"), joaat("UGC_SERIES"));
	StringCopy(&cVar0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_VALUE", (iVar18 * 100 / (iVar18 + iVar19))), 64);
	func_102(27, "PMPLAYER_SERIES_COMPLETE_PER", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, (iVar18 + iVar19), 64);
	func_102(28, "PMPLAYER_SERIES_COMPLETE", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	func_103(0);
	func_104(0);
	func_96(1);
	func_106("PMPLAYER_GENERAL_STATS_TOOLTIP");
}

void func_57()
{
	struct<4> Var0;
	int iVar4;
	bool bVar5;
	var uVar6;
	char* sVar7;
	char cVar8[64];
	int iVar16;
	bool bVar17;
	char cVar18[64];
	float fVar26;
	bool bVar27;
	char cVar28[64];
	int iVar36;
	char cVar37[64];
	int iVar45;
	int iVar47;
	char cVar48[64];
	char cVar56[64];
	char* sVar64;

	func_98(1, 1);
	Global_1954472->f_5.f_1325 = 5;
	Var0 = { func_19(0, 1, 0, -1) };
	iVar4 = PLAYER::_0xF49F14462F0AE27C(PLAYER::PLAYER_ID());
	bVar5 = ENTITY::DOES_ENTITY_EXIST(iVar4);
	if (bVar5)
	{
		uVar6 = func_117(iVar4);
		sVar7 = func_118(iVar4);
	}
	else
	{
		uVar6 = func_119(&Var0, 0);
		sVar7 = func_120(&Var0, 0);
	}
	uVar6 = uVar6;
	StringCopy(&cVar8, MISC::_CREATE_VAR_STRING(2, "HORSE_BONDING_LEVEL", sVar7), 64);
	bVar17 = false;
	if (bVar5)
	{
		iVar16 = func_121(iVar4, 0);
	}
	else
	{
		iVar16 = func_122(Var0, 0);
	}
	if (iVar16 <= 50)
	{
		StringCopy(&cVar18, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_CONDITION_CLEANLINESS_CLEAN"), 64);
	}
	else if (iVar16 < 100)
	{
		StringCopy(&cVar18, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_CONDITION_CLEANLINESS_DIRTY"), 64);
		bVar17 = true;
	}
	else
	{
		StringCopy(&cVar18, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_CONDITION_CLEANLINESS_FILTHY"), 64);
		bVar17 = true;
	}
	fVar26 = 0f;
	bVar27 = false;
	if (bVar5)
	{
		fVar26 = func_123(iVar4);
	}
	if (fVar26 > 0f)
	{
		StringCopy(&cVar28, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_CONDITION_MOOD_AGITATED"), 64);
		bVar27 = true;
	}
	else
	{
		StringCopy(&cVar28, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_CONDITION_MOOD_CALM"), 64);
	}
	if (func_124(-415648720, &iVar36))
	{
		if (func_125(iVar36, &iVar45, 14460646, 0))
		{
			StringCopy(&cVar37, HUD::_GET_LABEL_TEXT_BY_HASH(iVar45), 64);
		}
	}
	if (func_124(986998820, &iVar47))
	{
		StringCopy(&cVar48, func_126(iVar47), 64);
	}
	StringCopy(&cVar56, DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1954472->f_5.f_4), 64);
	sVar64 = MISC::_CREATE_VAR_STRING(2, "AT_HORSE");
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar56))
	{
		sVar64 = func_127(&cVar56);
	}
	func_100(sVar64);
	func_101(0, "PMPLAYER_STATS");
	func_102(1, "PMPLAYER_OVERVIEW", "", 1, 0, 0, 0, 0, 0, 0);
	func_102(2, "PMPLAYER_HORSE_PHYSIQUE_TITLE", "", 1, 0, 0, 0, 0, 0, 0);
	func_102(3, "PMPLAYER_HORSE_BONDING_TITLE", &cVar8, 1, 0, 0, 0, 0, 0, 0);
	func_102(4, "PMPLAYER_HORSE_HEALTH_TITLE", "", 1, 0, 0, 0, 0, 0, 0);
	func_102(5, "PMPLAYER_HORSE_STAMINA_TITLE", "", 1, 0, 0, 0, 0, 0, 0);
	func_101(6, "PMPLAYER_CONDITIONS");
	func_102(7, "PMPLAYER_HORSE_CONDITION_CLEANLINESS", &cVar18, 1, bVar17, bVar17, "rpg_horse_dirty", "pausemenu_player", 0, 0);
	func_102(8, "PMPLAYER_HORSE_CONDITION_MOOD", &cVar28, 1, bVar27, bVar27, "rpg_horse_agitation", "pausemenu_player", 0, 0);
	func_101(9, "PMPLAYER_HORSE_TACK");
	func_102(10, "PMPLAYER_HORSE_TACK_SADDLE_TITLE", &cVar37, 1, 0, 0, 0, 0, 0, 0);
	func_102(11, "PMPLAYER_HORSE_TACK_STIRRUPS_TITLE", &cVar48, 1, 0, 0, 0, 0, 0, 0);
	func_97(1);
}

void func_58()
{
	func_65(4);
	func_66(2);
	func_128(joaat("single_player"), 0);
}

int func_59(var uParam0)
{
	return uParam0->f_193;
}

void func_60(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1271225230:
			func_129(uParam0);
			break;
	}
}

void func_61(var uParam0, int iParam1)
{
	uParam0->f_193 = iParam1;
}

void func_62(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1271225230:
			func_130(uParam0);
			break;
	}
}

void func_63(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1271225230:
			func_131(uParam0);
			break;
	}
}

void func_64(int iParam0, int iParam1)
{
	if (Global_1572864->f_17 != 0)
	{
		return;
	}
	Global_1572864->f_17 = iParam0;
	Global_1572864->f_18 = iParam1;
}

void func_65(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 || iParam0);
}

void func_66(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = 1;
	}
	Global_1572864->f_1 = iParam0;
}

int func_67(var uParam0)
{
	if (!func_132(uParam0))
	{
		return 0;
	}
	return 1;
}

void func_68(var uParam0)
{
	uParam0->f_2 = 0;
}

void func_69(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1271225230:
			func_133(uParam0);
			break;
	}
}

int func_70(var uParam0, bool bParam1)
{
	struct<29> Var0;
	struct<14> Var29;
	int iVar43;
	int iVar44;
	struct<10> Var45;
	int iVar59;

	Var0.f_9 = -1591664384;
	Var29 = { func_134(0, -1591664384, -1591664384, -1591664384, -1675500494, 0, 0) };
	if (func_135(&Var29, &iVar43, &iVar44, bParam1))
	{
		Var45.f_9 = -1591664384;
		iVar59 = 0;
		while (iVar59 < iVar44)
		{
			if (func_136(&Var45, iVar59, iVar43, iVar44))
			{
				if (func_137(&Var45, &Var0, 0))
				{
					if (func_138(&(Var0.f_24), 16))
					{
						*uParam0 = { Var0 };
						func_111(iVar43);
						return 1;
					}
				}
			}
			iVar59++;
		}
		func_111(iVar43);
	}
	return 0;
}

struct<4> func_71()
{
	return Global_1270530->f_11.f_348;
}

bool func_72()
{
	return Global_1270530->f_11.f_356 > Global_1275573->f_21;
}

void func_73(var uParam0, bool bParam1)
{
	Global_1270530->f_11.f_348 = { *uParam0 };
	if (bParam1)
	{
		Global_1270530->f_11.f_356 = Global_1275573->f_21 + 10;
	}
}

int func_74(int iParam0)
{
	var uVar0;
	bool bVar1;

	uVar0 = func_139(iParam0);
	bVar1 = func_141(func_140(), 0, 0);
	if (!bVar1)
	{
		return 3;
	}
	return uVar0;
}

bool func_75(int iParam0)
{
	return func_142(&(Global_3145858->f_6), iParam0);
}

int func_76(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 0:
				return 0;
			case 1:
				return 1;
			case 2:
				return 2;
			case 3:
				return 3;
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 4;
			case 1:
				return 5;
			case 2:
				return 6;
			case 3:
				return 7;
			default:
				break;
		}
	}
	return -1;
}

struct<4> func_77()
{
	struct<4> Var0;

	return Var0;
}

int func_78(var uParam0, bool bParam1)
{
	struct<29> Var0;
	struct<14> Var29;
	int iVar43;
	int iVar44;
	struct<10> Var45;
	int iVar59;

	Var0.f_9 = -1591664384;
	Var29 = { func_134(0, -1591664384, -1591664384, -1591664384, -1675500494, 0, 0) };
	if (func_135(&Var29, &iVar43, &iVar44, bParam1))
	{
		Var45.f_9 = -1591664384;
		iVar59 = 0;
		while (iVar59 < iVar44)
		{
			if (func_136(&Var45, iVar59, iVar43, iVar44))
			{
				if (func_137(&Var45, &Var0, 0))
				{
					if (func_138(&(Var0.f_24), 32))
					{
						*uParam0 = { Var0 };
						func_111(iVar43);
						return 1;
					}
				}
			}
			iVar59++;
		}
		func_111(iVar43);
	}
	return 0;
}

struct<4> func_79(bool bParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar16;

	Var2.f_9 = -1591664384;
	if (!func_110("ALL HORSES", &iVar0, &iVar1, -1591664384, bParam0))
	{
		return Var2;
	}
	iVar16 = 0;
	while (iVar16 < iVar1)
	{
		if (!func_136(&Var2, iVar16, iVar0, iVar1))
		{
		}
		else if (INVENTORY::_0xB881CA836CC4B6D4(&Var2))
		{
		}
		else
		{
			iVar16++;
		}
	}
	func_111(iVar0);
	return Var2;
}

struct<42> func_80(int iParam0, int iParam1, bool bParam2)
{
	struct<42> Var0;

	Var0.f_10 = -1;
	Var0.f_23 = 3;
	Var0.f_28 = 13;
	func_143(iParam0, iParam1, &Var0, bParam2);
	return Var0;
}

int func_81(int iParam0, var uParam1)
{
	int iVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!INVENTORY::_0x4C543D5DFCD2DAFD(Global_1270530->f_1002[iVar0 /*24*/], iParam0))
		{
		}
		else
		{
			if ((Global_1270530->f_1002[iVar0 /*24*/])->f_23 < Global_1275573->f_21)
			{
				*uParam1 = { (Global_1270530->f_1002[iVar0 /*24*/])->f_7 };
				return 1;
			}
			*uParam1 = { (Global_1270530->f_1002[iVar0 /*24*/])->f_15 };
			return 1;
		}
		iVar0++;
	}
	return 0;
}

char* func_82()
{
	return "UNNAMED_HORSE";
}

char* func_83(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BREED_AMERICANPAINT_OVERO"):
		case joaat("BREED_AMERICANPAINT_GREYOVERO"):
		case joaat("BREED_AMERICANPAINT_SPLASHEDWHITE"):
		case joaat("BREED_AMERICANPAINT_TOBIANO"):
			return "BREED_AMERICANPAINT";
		case joaat("BREED_AMERICANSTANDARDBRED_LIGHTBUCKSKIN"):
		case joaat("BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN"):
		case joaat("BREED_AMERICANSTANDARDBRED_BUCKSKIN"):
		case joaat("BREED_AMERICANSTANDARDBRED_BLACK"):
		case joaat("BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE"):
			return "BREED_AMERICANSTANDARDBRED";
		case joaat("BREED_ANDALUSIAN_DARKBAY"):
		case joaat("BREED_ANDALUSIAN_ROSEGRAY"):
		case joaat("BREED_ANDALUSIAN_PERLINO"):
			return "BREED_ANDALUSIAN";
		case joaat("BREED_APPALOOSA_BLANKET"):
		case joaat("BREED_APPALOOSA_LEOPARD"):
		case joaat("BREED_APPALOOSA_LEOPARDBLANKET"):
		case joaat("BREED_APPALOOSA_BLACKSNOWFLAKE"):
		case joaat("BREED_APPALOOSA_BROWNLEOPARD"):
			return "BREED_APPALOOSA";
		case joaat("BREED_ARABIAN_BLACK"):
		case joaat("BREED_ARABIAN_REDCHESTNUT"):
		case joaat("BREED_ARABIAN_GREY"):
		case joaat("BREED_ARABIAN_ROSEGREYBAY"):
		case joaat("BREED_ARABIAN_WHITE"):
			return "BREED_ARABIAN";
		case joaat("BREED_ARDENNES_IRONGREYROAN"):
		case joaat("BREED_ARDENNES_STRAWBERRYROAN"):
		case joaat("BREED_ARDENNES_BAYROAN"):
			return "BREED_ARDENNES";
		case joaat("BREED_BELGIAN_BLONDCHESTNUT"):
		case joaat("BREED_BELGIAN_MEALYCHESTNUT"):
			return "BREED_BELGIAN";
		case joaat("BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN"):
		case joaat("BREED_DUTCHWARMBLOOD_CHOCOLATEROAN"):
		case joaat("BREED_DUTCHWARMBLOOD_SEALBROWN"):
			return "BREED_DUTCHWARMBLOOD";
		case joaat("BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY"):
		case joaat("BREED_HUNGARIANHALFBRED_LIVERCHESTNUT"):
		case joaat("BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT"):
		case joaat("BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO"):
			return "BREED_HUNGARIANHALFBRED";
		case -1955947684:
		case joaat("BREED_KENTUCKYSADDLE_SILVERBAY"):
		case joaat("BREED_KENTUCKYSADDLE_CHESTNUTPINTO"):
		case joaat("BREED_KENTUCKYSADDLE_GREY"):
			return "BREED_KENTUCKYSADDLE";
		case joaat("BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE"):
		case joaat("BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE"):
		case joaat("BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO"):
			return "BREED_MISSOURIFOXTROTTER";
		case joaat("BREED_MORGAN_PALOMINO"):
		case joaat("BREED_MORGAN_BAYROAN"):
		case joaat("BREED_MORGAN_FLAXENCHESTNUT"):
		case joaat("BREED_MORGAN_BAY"):
			return "BREED_MORGAN";
		case joaat("BREED_MUSTANG_GRULLODUN"):
		case joaat("BREED_MUSTANG_TIGERSTRIPEDBAY"):
		case joaat("BREED_MUSTANG_GOLDENDUN"):
		case joaat("BREED_MUSTANG_WILDBAY"):
			return "BREED_MUSTANG";
		case joaat("BREED_NOKOTA_REVERSEDAPPLEROAN"):
		case joaat("BREED_NOKOTA_WHITEROAN"):
		case joaat("BREED_NOKOTA_BLUEROAN"):
			return "BREED_NOKOTA";
		case joaat("BREED_SHIRE_LIGHTGREY"):
		case joaat("BREED_SHIRE_RAVENBLACK"):
		case joaat("BREED_SHIRE_DARKBAY"):
			return "BREED_SHIRE";
		case joaat("BREED_SUFFOLKPUNCH_REDCHESTNUT"):
		case joaat("BREED_SUFFOLKPUNCH_SORREL"):
			return "BREED_SUFFOLKPUNCH";
		case joaat("BREED_TENNESSEEWALKER_DAPPLEBAY"):
		case joaat("BREED_TENNESSEEWALKER_CHESTNUT"):
		case joaat("BREED_TENNESSEEWALKER_REDROAN"):
		case joaat("BREED_TENNESSEEWALKER_BLACKRABICANO"):
		case joaat("BREED_TENNESSEEWALKER_MAHOGANYBAY"):
		case joaat("BREED_TENNESSEEWALKER_FLAXENROAN"):
			return "BREED_TENNESSEEWALKER";
		case joaat("BREED_THOROUGHBRED_DAPPLEGREY"):
		case joaat("BREED_THOROUGHBRED_BLACKCHESTNUT"):
		case joaat("BREED_THOROUGHBRED_BLOODBAY"):
		case joaat("BREED_THOROUGHBRED_BRINDLE"):
		case joaat("BREED_THOROUGHBRED_REVERSEDAPPLEBLACK"):
			return "BREED_THOROUGHBRED";
		case joaat("BREED_TURKOMAN_SILVER"):
		case joaat("BREED_TURKOMAN_GOLD"):
		case joaat("BREED_TURKOMAN_DARKBAY"):
			return "BREED_TURKOMAN";
		case joaat("BREED_BRETON_STEELGREY"):
		case joaat("BREED_BRETON_REDROAN"):
		case joaat("BREED_BRETON_SEALBROWN"):
		case joaat("BREED_BRETON_MEALYDAPPLEBAY"):
		case joaat("BREED_BRETON_GRULLODUN"):
		case joaat("BREED_BRETON_SORREL"):
			return "BREED_BRETON";
		case joaat("BREED_CRIOLLO_SORRELOVERO"):
		case joaat("BREED_CRIOLLO_BAYFRAMEOVERO"):
		case joaat("BREED_CRIOLLO_BAYBRINDLE"):
		case joaat("BREED_CRIOLLO_DUN"):
		case joaat("BREED_CRIOLLO_MARBLESABINO"):
		case joaat("BREED_CRIOLLO_BLUEROANOVERO"):
			return "BREED_CRIOLLO";
		case joaat("BREED_KLADRUBER_DAPPLEROSEGREY"):
		case joaat("BREED_KLADRUBER_WHITE"):
		case joaat("BREED_KLADRUBER_SILVER"):
		case joaat("BREED_KLADRUBER_CREMELLO"):
		case joaat("BREED_KLADRUBER_GREY"):
		case joaat("BREED_KLADRUBER_BLACK"):
			return "BREED_KLADRUBER";
		case joaat("BREED_NORFOLKROADSTER_DAPPLEDBUCKSKIN"):
		case joaat("BREED_NORFOLKROADSTER_ROSEGREY"):
		case joaat("BREED_NORFOLKROADSTER_BLACK"):
		case joaat("BREED_NORFOLKROADSTER_PIEBALDROAN"):
		case joaat("BREED_NORFOLKROADSTER_SPECKLEDGREY"):
		case joaat("BREED_NORFOLKROADSTER_SPOTTEDTRICOLOR"):
			return "BREED_NORFOLKROADSTER";
		case joaat("BREED_DONKEY"):
			return "BREED_DONKEY";
		case joaat("BREED_MULE_PAINTED"):
		case joaat("BREED_MULE"):
			return "BREED_MULE";
		case joaat("BREED_BUELL_WARVETS"):
			return "BREED_DUTCHWARMBLOOD";
		case joaat("BREED_JOHN_ENDLESSSUMMER"):
			return "BREED_THOROUGHBRED";
		case joaat("BREED_MURFREEBROOD_MANGE_01"):
			return "BREED_TENNESSEEWALKER";
		case joaat("BREED_MURFREEBROOD_MANGE_02"):
			return "BREED_NOKOTA";
		case joaat("BREED_MURFREEBROOD_MANGE_03"):
			return "BREED_APPALOOSA";
		case joaat("BREED_WINTER02_01"):
			return "BREED_THOROUGHBRED";
		case joaat("BREED_EAGLEFLIES"):
			return "BREED_AMERICANPAINT";
		case joaat("BREED_GANG_BILL"):
			return "BREED_ARDENNES";
		case joaat("BREED_GANG_CHARLES"):
			return "BREED_APPALOOSA";
		case joaat("BREED_GANG_CHARLES_ENDLESSSUMMER"):
			return "BREED_NOKOTA";
		case joaat("BREED_GANG_DUTCH"):
			return "BREED_ARABIAN";
		case joaat("BREED_GANG_HOSEA"):
			return "BREED_TURKOMAN";
		case joaat("BREED_GANG_JAVIER"):
			return "BREED_AMERICANPAINT";
		case joaat("BREED_GANG_JOHN"):
			return "BREED_HUNGARIANHALFBRED";
		case joaat("BREED_GANG_KAREN"):
			return "BREED_NOKOTA";
		case joaat("BREED_GANG_KIERAN"):
			return "BREED_TENNESSEEWALKER";
		case joaat("BREED_GANG_LENNY"):
			return "BREED_MUSTANG";
		case joaat("BREED_GANG_MICAH"):
			return "BREED_MISSOURIFOXTROTTER";
		case joaat("BREED_GANG_SADIE"):
			return "BREED_TURKOMAN";
		case joaat("BREED_GANG_SADIE_ENDLESSSUMMER"):
			return "BREED_MUSTANG";
		case joaat("BREED_GANG_SEAN"):
			return "BREED_AMERICANSTANDARDBRED";
		case joaat("BREED_GANG_TRELAWNEY"):
			return "BREED_APPALOOSA";
		case joaat("BREED_GANG_UNCLE"):
			return "BREED_KENTUCKYSADDLE";
		case joaat("BREED_GANG_UNCLE_ENDLESSSUMMER"):
			return "BREED_APPALOOSA";
		case joaat("BREED_MANGY_BACKUP"):
			return "BREED_MANGY_BACKUP";
		default:
			break;
	}
	return "BREED_INVALID";
}

var func_84(int iParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, func_144(iParam0), 64);
	StringConCat(&cVar0, "_BREED", 64);
	return func_127(&cVar0);
}

float func_85(int iParam0, bool bParam1)
{
	int iVar0;

	if (!Global_1132968->f_6289)
	{
		return 0f;
	}
	if (iParam0 == &Global_1275573->f_154[&Global_1275573])
	{
		return Global_17172.f_2619;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0f;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 0f;
	}
	if ((_NAMESPACE26::_0x149A2751AB66AC02(_NAMESPACE26::_0x901E0DC25080C8B9(iParam0)) > 1 && bParam1) && ((*Global_1097610)[iVar0 /*51*/])->f_18 >= ((*Global_1097610)[iVar0 /*51*/])->f_45)
	{
		return ((*Global_1097610)[iVar0 /*51*/])->f_18;
	}
	return ((*Global_1097610)[iVar0 /*51*/])->f_45;
}

int func_86(int iParam0)
{
	return func_146(func_145(iParam0));
}

bool func_87(int iParam0)
{
	int iVar0;

	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	iVar0 = func_147(2, iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	return NETWORK::_0xFBE782B3165AC8EC(iVar0);
}

struct<2> func_88(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

bool func_89(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(iParam0, iParam1);
}

void func_90(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_91(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

void func_92(int iParam0)
{
	int iVar0;
	char* sVar1;

	func_148(0);
	func_149(0);
	func_150(0);
	func_103(0);
	func_104(0);
	func_151(0);
	func_152(0, "", "");
	switch (iParam0)
	{
		case 1:
			func_153("MP_PLAYER_PLAYER", 0);
			func_155(func_154(0));
			func_156("PMPLAYER_OVERVIEW");
			func_98(0, 1);
			func_106("PMPLAYER_OVERVIEW_TOOLTIP");
			func_148(1);
			func_149(1);
			func_150(1);
			break;
		case 2:
			func_153("MP_PLAYER_PLAYER", 0);
			func_155(func_154(0));
			func_156("PMPLAYER_RANK");
			func_98(0, 1);
			iVar0 = NETWORK::_0xDB438CC9BC6F4022();
			sVar1 = func_30(Global_1139395[&Global_1275573 /*34*/] + 1);
			func_157(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_PROGRESSION_STAT_NEXT"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_X_OF_Y_XP", iVar0, sVar1), 0, 0, 0, 0, 0, 0, 0, 0);
			func_106("PMPLAYER_RANK_TOOLTIP");
			break;
		case 3:
			func_153("MP_PLAYER_HONOR", 0);
			func_155("PMPLAYER_GENERAL_HONOR_DESC");
			func_156("PMPLAYER_HONOR");
			func_98(0, 1);
			func_106("PMPLAYER_HONOR_TOOLTIP");
			break;
		case 5:
			func_153(func_158(), 0);
			func_155("PMPLAYER_CONDITION_WEIGHT_DESC");
			func_156("PMPLAYER_HORSE_PHYSIQUE_STAT_WEIGHT");
			func_98(0, 1);
			func_159(0);
			func_106("PMPLAYER_CONDITION_WEIGHT_TOOLTIP");
			break;
		case 6:
			func_153(func_160(), func_161());
			func_155("PMPLAYER_CONDITION_TEMPERATURE_DESC");
			func_156("PMPLAYER_CONDITION_TEMPERATURE");
			func_98(0, 1);
			func_162();
			func_106("PMPLAYER_CONDITION_TEMPERATURE_TOOLTIP");
			break;
		case 7:
			func_153(func_163(), func_164());
			func_155("PMPLAYER_CONDITION_TOXICITY_DESC");
			func_156("PMPLAYER_CONDITION_TOXICITY");
			func_98(0, 1);
			func_165();
			func_106("PMPLAYER_CONDITION_TOXICITY_TOOLTIP_NET");
			break;
		case 8:
			func_153("MP_PLAYER_HOSTILITY", 0);
			func_155("PMPLAYER_CONDITION_HOSTILITY_DESC_NET");
			func_156("PMPLAYER_GENERAL_HOSTILITY");
			func_98(0, 1);
			func_106("PMPLAYER_GENERAL_HOSTILITY_TOOLTIP");
			break;
	}
}

void func_93(int iParam0)
{
	char* sVar0;
	bool bVar1;
	bool bVar2;

	func_148(0);
	func_149(0);
	func_150(0);
	func_103(0);
	func_104(0);
	func_151(0);
	func_152(0, "", "");
	switch (iParam0)
	{
		case 1:
			func_153(func_166(1, 0), 0);
			func_155(func_154(1));
			func_156("PMPLAYER_OVERVIEW");
			func_98(0, 1);
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(&((Global_1954472->f_5.f_14[1 /*82*/])->f_26[0]));
			func_157(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC"), sVar0, 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Health");
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(&((Global_1954472->f_5.f_14[1 /*82*/])->f_26[1]));
			func_157(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_TIME"), sVar0, 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Health");
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(&((Global_1954472->f_5.f_14[1 /*82*/])->f_26[2]));
			bVar1 = DATABINDING::_DATABINDING_READ_DATA_BOOL(&((Global_1954472->f_5.f_14[1 /*82*/])->f_33[2]));
			bVar2 = DATABINDING::_DATABINDING_READ_DATA_BOOL(&((Global_1954472->f_5.f_14[1 /*82*/])->f_61[2]));
			func_157(2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), sVar0, 1, 0, bVar1, 0, 0f, 0f, 0f, "RPG_Health");
			if (bVar1)
			{
				func_167(2, "RPG_ARROW_DOWN", 0);
			}
			else if (bVar2)
			{
				func_167(2, "RPG_ARROW_UP", 0);
			}
			func_148(1);
			func_106("");
			break;
		case 2:
			func_153(func_166(1, 0), 0);
			func_155("PMPLAYER_HEALTH_PROGRESSION_DESC");
			func_156("PMPLAYER_PROGRESSION");
			func_98(0, 1);
			func_168(0, "PMPLAYER_PROGRESSION_STAT_NEXT", "PMPLAYER_HEALTH_PROGRESSION_STAT_MAX", "toast_rpg_level_health");
			func_106("");
			break;
		case 4:
			func_153(func_158(), 0);
			func_155("PMPLAYER_CONDITION_WEIGHT_DESC");
			func_156("PMPLAYER_HORSE_PHYSIQUE_STAT_WEIGHT");
			func_98(0, 1);
			func_159(1);
			func_106("PMPLAYER_CONDITION_WEIGHT_TOOLTIP");
			break;
		case 5:
			func_153(func_160(), func_161());
			func_155("PMPLAYER_CONDITION_TEMPERATURE_DESC");
			func_156("PMPLAYER_CONDITION_TEMPERATURE");
			func_98(0, 1);
			func_162();
			func_106("PMPLAYER_CONDITION_TEMPERATURE_TOOLTIP");
			break;
		case 6:
			func_153(func_163(), func_164());
			func_155("PMPLAYER_CONDITION_TOXICITY_DESC");
			func_156("PMPLAYER_CONDITION_TOXICITY");
			func_98(0, 1);
			func_165();
			func_106("PMPLAYER_CONDITION_TOXICITY_TOOLTIP_NET");
			break;
	}
}

void func_94(int iParam0)
{
	char* sVar0;
	bool bVar1;
	bool bVar2;

	func_148(0);
	func_149(0);
	func_150(0);
	func_103(0);
	func_104(0);
	func_151(0);
	func_152(0, "", "");
	switch (iParam0)
	{
		case 1:
			func_153(func_166(2, 0), 0);
			func_155(func_154(2));
			func_156("PMPLAYER_OVERVIEW");
			func_98(0, 1);
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(&((Global_1954472->f_5.f_14[2 /*82*/])->f_26[0]));
			func_157(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC"), sVar0, 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Stamina");
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(&((Global_1954472->f_5.f_14[2 /*82*/])->f_26[1]));
			func_157(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_TIME"), sVar0, 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Stamina");
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(&((Global_1954472->f_5.f_14[2 /*82*/])->f_26[2]));
			bVar1 = DATABINDING::_DATABINDING_READ_DATA_BOOL(&((Global_1954472->f_5.f_14[2 /*82*/])->f_33[2]));
			bVar2 = DATABINDING::_DATABINDING_READ_DATA_BOOL(&((Global_1954472->f_5.f_14[2 /*82*/])->f_61[2]));
			func_157(2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), sVar0, 1, 0, bVar1, 0, 0f, 0f, 0f, "RPG_Stamina");
			if (bVar1)
			{
				func_167(2, "RPG_ARROW_DOWN", 0);
			}
			else if (bVar2)
			{
				func_167(2, "RPG_ARROW_UP", 0);
			}
			func_149(1);
			func_106("");
			break;
		case 2:
			func_153(func_166(2, 0), 0);
			func_155("PMPLAYER_STAMINA_PROGRESSION_DESC");
			func_156("PMPLAYER_PROGRESSION");
			func_98(0, 1);
			func_168(1, "PMPLAYER_PROGRESSION_STAT_NEXT", "PMPLAYER_STAMINA_PROGRESSION_STAT_MAX", "toast_rpg_level_stamina");
			func_106("");
			break;
		case 4:
			func_153(func_158(), 0);
			func_155("PMPLAYER_CONDITION_WEIGHT_DESC");
			func_156("PMPLAYER_HORSE_PHYSIQUE_STAT_WEIGHT");
			func_98(0, 1);
			func_159(2);
			func_106("PMPLAYER_CONDITION_WEIGHT_TOOLTIP");
			break;
	}
}

void func_95(int iParam0)
{
	char* sVar0;
	bool bVar1;
	bool bVar2;

	func_148(0);
	func_149(0);
	func_150(0);
	func_103(0);
	func_104(0);
	func_151(0);
	func_152(0, "", "");
	switch (iParam0)
	{
		case 1:
			func_153(func_166(3, 0), 0);
			func_155(func_154(3));
			func_156("PMPLAYER_OVERVIEW");
			func_98(0, 1);
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(&((Global_1954472->f_5.f_14[3 /*82*/])->f_26[0]));
			func_157(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC"), sVar0, 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Dead_Eye");
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(&((Global_1954472->f_5.f_14[3 /*82*/])->f_26[1]));
			func_157(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_TIME"), sVar0, 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Dead_Eye");
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(&((Global_1954472->f_5.f_14[3 /*82*/])->f_26[2]));
			bVar1 = DATABINDING::_DATABINDING_READ_DATA_BOOL(&((Global_1954472->f_5.f_14[3 /*82*/])->f_33[2]));
			bVar2 = DATABINDING::_DATABINDING_READ_DATA_BOOL(&((Global_1954472->f_5.f_14[3 /*82*/])->f_61[2]));
			func_157(2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), sVar0, 1, 0, bVar1, 0, 0f, 0f, 0f, "RPG_Dead_Eye");
			if (bVar1)
			{
				func_167(2, "RPG_ARROW_DOWN", 0);
			}
			else if (bVar2)
			{
				func_167(2, "RPG_ARROW_UP", 0);
			}
			func_150(1);
			func_106("");
			break;
		case 2:
			func_153(func_166(3, 0), 0);
			func_155("PMPLAYER_DEAD_EYE_PROGRESSION_DESC");
			func_156("PMPLAYER_PROGRESSION");
			func_98(0, 1);
			func_168(2, "PMPLAYER_PROGRESSION_STAT_NEXT", "PMPLAYER_DEAD_EYE_PROGRESSION_STAT_MAX", "toast_rpg_level_deadeye");
			func_106("");
			break;
		case 4:
			func_153(func_158(), 0);
			func_155("PMPLAYER_CONDITION_WEIGHT_DESC");
			func_156("PMPLAYER_HORSE_PHYSIQUE_STAT_WEIGHT");
			func_98(0, 1);
			func_159(3);
			func_106("PMPLAYER_CONDITION_WEIGHT_TOOLTIP");
			break;
	}
}

void func_96(int iParam0)
{
	char* sVar0;

	func_148(0);
	func_149(0);
	func_150(0);
	func_103(0);
	func_104(0);
	func_151(0);
	func_152(0, "", "");
	switch (iParam0)
	{
		case 1:
			func_153("MP_PLAYER_GENERAL_LIFE_STATS", 0);
			break;
		case 2:
		case 3:
		case 4:
		case 5:
			func_153("MP_PLAYER_GENERAL_FINANCES", 0);
			break;
		case 6:
		case 7:
			func_153("MP_PLAYER_GENERAL_COMBAT", 0);
			break;
		case 8:
		case 9:
			func_153("MP_PLAYER_GENERAL_TRAVEL", 0);
			break;
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
			func_153("MP_PLAYER_GENERAL_CRIME", 0);
			break;
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
			func_153("MP_PLAYER_GENERAL_HUNTING", 0);
			break;
		case 26:
		case 27:
		case 28:
			func_153("MP_PLAYER_GENERAL_CONTENT", 0);
			break;
	}
	sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING((Global_1954472->f_5.f_425.f_24[iParam0 /*25*/])->f_16);
	func_155(func_154(4));
	func_156(sVar0);
	func_98(0, 1);
}

void func_97(int iParam0)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	char cVar15[32];
	int iVar19;
	int iVar20;
	struct<4> Var21;
	float fVar25;
	float fVar26;
	float fVar27;
	float fVar28;
	float fVar29;
	float fVar30;
	int iVar31;
	int iVar32;
	char* sVar33;
	char* sVar34;

	Var0 = { func_19(0, 1, 0, -1) };
	iVar4 = func_169(&Var0, 0);
	iVar5 = func_170(iVar4);
	iVar6 = PLAYER::_0xF49F14462F0AE27C(PLAYER::PLAYER_ID());
	bVar11 = ENTITY::DOES_ENTITY_EXIST(iVar6);
	if (bVar11)
	{
		iVar7 = func_171(iVar6);
		iVar9 = func_172(iVar6);
	}
	else
	{
		iVar7 = func_173(iVar5);
		iVar9 = func_174(iVar5);
	}
	iVar8 = func_175(Var0, 0);
	iVar10 = func_175(Var0, 1);
	func_148(0);
	func_149(0);
	func_150(0);
	func_103(0);
	func_104(0);
	func_151(0);
	func_152(0, "", "");
	bVar13 = true;
	switch (iParam0)
	{
		case 1:
			func_153(func_166(5, 0), "pausemenu_player");
			func_155(func_154(5));
			func_156("PMPLAYER_OVERVIEW");
			func_98(0, 1);
			Var21 = { func_19(0, 1, 0, -1) };
			func_176(&Var21, &iVar19, &iVar20);
			iVar19 = BUILTIN::FLOOR((IntToFloat(iVar19) * 0.01f));
			iVar20 = BUILTIN::FLOOR((IntToFloat(iVar20) * 0.01f));
			fVar25 = (IntToFloat(func_177(iVar5) + 1) * 10f);
			fVar26 = (fVar25 + (BUILTIN::TO_FLOAT(iVar19) * 10f));
			fVar27 = ((fVar25 + (3f * 10f)) * 0.01f);
			fVar28 = (IntToFloat(func_178(iVar5) + 1) * 10f);
			fVar29 = (fVar28 + (BUILTIN::TO_FLOAT(iVar20) * 10f));
			fVar30 = ((fVar28 + (2f * 10f)) * 0.01f);
			func_157(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_SPEED"), "", 0, 0, 0, 1, fVar25, fVar26, fVar27, 0);
			func_157(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_ACCELERATION"), "", 0, 0, 0, 1, fVar28, fVar29, fVar30, 0);
			func_157(2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_HANDLING"), MISC::_CREATE_VAR_STRING(2, func_180(func_179(iVar5))), 0, 0, 0, 0, 0, 0, 0, 0);
			func_103(1);
			func_104(1);
			func_151(1);
			func_181(10, (IntToFloat(iVar7 + 1) / 10f), BUILTIN::ROUND(((IntToFloat(iVar8) / 100f) * 15f)));
			func_182(10, (IntToFloat(iVar9 + 1) / 10f), BUILTIN::ROUND(((IntToFloat(iVar10) / 100f) * 15f)));
			func_106("PMPLAYER_HORSE_OVERVIEW_TIP");
			break;
		case 2:
			func_153(func_166(5, 0), "pausemenu_player");
			func_155("PMPLAYER_HORSE_PHYSIQUE_DESC");
			func_156("PMPLAYER_HORSE_PHYSIQUE_TITLE");
			func_98(0, 1);
			if (!ENTITY::IS_ENTITY_DEAD(iVar6))
			{
				iVar14 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iVar6, 13);
			}
			else if (func_183(&Var0, 0, &iVar12))
			{
				bVar13 = false;
				switch (iVar12)
				{
					case 0:
						StringCopy(&cVar15, "HORSE_WEIGHT_MALNOURISHED", 32);
						break;
					case 1:
						StringCopy(&cVar15, "HORSE_WEIGHT_THIN", 32);
						break;
					case 2:
						StringCopy(&cVar15, "HORSE_WEIGHT_FIT", 32);
						break;
					case 3:
						StringCopy(&cVar15, "HORSE_WEIGHT_OVERWEIGHT", 32);
						break;
					case 4:
						StringCopy(&cVar15, "HORSE_WEIGHT_OBESE", 32);
						break;
					default:
						bVar13 = true;
						iVar14 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_RANK(iVar5, 13);
						break;
				}
			}
			else
			{
				iVar14 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_RANK(iVar5, 13);
			}
			if (bVar13)
			{
				if (iVar14 < 10)
				{
					StringCopy(&cVar15, "HORSE_WEIGHT_MALNOURISHED", 32);
				}
				else if (iVar14 < 30)
				{
					StringCopy(&cVar15, "HORSE_WEIGHT_THIN", 32);
				}
				else if (iVar14 < 70)
				{
					StringCopy(&cVar15, "HORSE_WEIGHT_FIT", 32);
				}
				else if (iVar14 < 90)
				{
					StringCopy(&cVar15, "HORSE_WEIGHT_OVERWEIGHT", 32);
				}
				else
				{
					StringCopy(&cVar15, "HORSE_WEIGHT_OBESE", 32);
				}
			}
			iVar31 = 1;
			if (func_184(Var0, -653439684, 0, -1) == 515427499)
			{
				iVar31 = 2;
			}
			if (INVENTORY::_0xB881CA836CC4B6D4(&Var0))
			{
				func_157(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_TYPE"), MISC::_CREATE_VAR_STRING(2, func_186(func_185(iVar5), iVar4)), 0, 0, 0, 0, 0, 0, 0, 0);
				func_157(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_BREED"), MISC::_CREATE_VAR_STRING(2, func_84(iVar4)), 0, 0, 0, 0, 0, 0, 0, 0);
				func_157(2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_GENDER"), MISC::_CREATE_VAR_STRING(2, func_187(iVar31)), 0, 0, 0, 0, 0, 0, 0, 0);
				func_157(3, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_WEIGHT"), MISC::_CREATE_VAR_STRING(2, &cVar15), 0, 0, 0, 0, 0, 0, 0, 0);
				func_157(4, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_COAT"), MISC::_CREATE_VAR_STRING(2, func_188(iVar4)), 0, 0, 0, 0, 0, 0, 0, 0);
			}
			else
			{
				func_157(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_TYPE"), "", 0, 0, 0, 0, 0, 0, 0, 0);
				func_157(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_BREED"), "", 0, 0, 0, 0, 0, 0, 0, 0);
				func_157(2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_GENDER"), "", 0, 0, 0, 0, 0, 0, 0, 0);
				func_157(3, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_WEIGHT"), "", 0, 0, 0, 0, 0, 0, 0, 0);
				func_157(4, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_COAT"), "", 0, 0, 0, 0, 0, 0, 0, 0);
			}
			func_106("PMPLAYER_HORSE_PHYSIQUE_TIP");
			break;
		case 3:
			func_153("MP_PLAYER_HORSE_BONDING", 0);
			func_155("PMPLAYER_HORSE_BONDING_DESC");
			func_156("PMPLAYER_HORSE_BONDING_TITLE");
			func_98(0, 1);
			if (bVar11)
			{
				sVar33 = func_117(iVar6);
				iVar32 = func_118(iVar6);
			}
			else
			{
				sVar33 = func_119(&Var0, 0);
				iVar32 = func_120(&Var0, 0);
			}
			if (iVar32 < 4)
			{
				sVar34 = func_189(iVar5, iVar32 + 1);
			}
			else
			{
				sVar34 = func_189(iVar5, iVar32);
				sVar33 = sVar34;
			}
			func_157(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_LEVEL"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_X_OF_Y", iVar32, 4), 0, 0, 0, 0, 0, 0, 0, 0);
			func_157(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_PROGRESSION_STAT_NEXT"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_X_OF_Y", sVar33, sVar34), 0, 0, 0, 0, 0, 0, 0, 0);
			func_106("PMPLAYER_HORSE_BONDING_TIP");
			func_151(1);
			break;
		case 4:
			func_153("MP_PLAYER_HORSE_HEALTH", 0);
			func_155("PMPLAYER_HORSE_HEALTH_DESC");
			func_156("PMPLAYER_HORSE_HEALTH_TITLE");
			func_98(0, 1);
			func_157(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_LEVEL"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_X_OF_Y", iVar7 + 1, 10), 0, 0, 0, 0, 0, 0, 0, 0);
			func_157(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_VALUE", iVar8), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Health");
			func_190(2, &Var0, 0);
			func_106("PMPLAYER_HORSE_HEALTH_TIP");
			break;
		case 5:
			func_153("MP_PLAYER_HORSE_STAMINA", 0);
			func_155("PMPLAYER_HORSE_STAMINA_DESC");
			func_156("PMPLAYER_HORSE_STAMINA_TITLE");
			func_98(0, 1);
			func_157(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_LEVEL"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_X_OF_Y", iVar9 + 1, 10), 0, 0, 0, 0, 0, 0, 0, 0);
			func_157(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_VALUE", iVar10), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
			func_190(2, &Var0, 1);
			func_106("PMPLAYER_HORSE_STAMINA_TIP");
			break;
		case 7:
			func_153("MP_PLAYER_HORSE_CLEANLINESS", 0);
			func_155("PMPLAYER_HORSE_CONDITION_CLEANLINESS_DESC");
			func_156("PMPLAYER_HORSE_CONDITION_CLEANLINESS");
			func_98(0, 1);
			if (func_122(Var0, 0) > 50)
			{
				func_157(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", BUILTIN::ROUND(MISC::ABSF((0.25f * 100f)))), 1, 0, 1, 0, 0, 0, 0, "RPG_Horse_Health");
				func_167(0, "RPG_ARROW_DOWN", 0);
			}
			func_106("PMPLAYER_HORSE_CONDITION_CLEANLINESS_TIP");
			break;
		case 10:
			func_153("MP_PLAYER_HORSE_SADDLE", 0);
			func_155("PMPLAYER_HORSE_TACK_SADDLE_DESC");
			func_156("PMPLAYER_HORSE_TACK_SADDLE_TITLE");
			func_98(0, 1);
			func_191();
			func_106("PMPLAYER_HORSE_TACK_SADDLE_TIP");
			break;
		case 8:
			func_153("MP_PLAYER_HORSE_TEMPERAMENT", 0);
			func_155("PMPLAYER_HORSE_CONDITION_MOOD_DESC");
			func_156("PMPLAYER_HORSE_CONDITION_MOOD");
			func_98(0, 1);
			func_106("PMPLAYER_HORSE_CONDITION_MOOD_TIP");
			break;
		case 11:
			func_153("MP_PLAYER_HORSE_STIRRUPS", 0);
			func_155("PMPLAYER_HORSE_TACK_STIRRUPS_DESC");
			func_156("PMPLAYER_HORSE_TACK_STIRRUPS_TITLE");
			func_98(0, 1);
			func_192();
			func_106("PMPLAYER_HORSE_TACK_STIRRUPS_TIP");
			break;
	}
}

void func_98(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(Global_1954472->f_5.f_425.f_22);
	}
	if (bParam1)
	{
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(Global_1954472->f_5.f_425.f_21);
	}
}

char* func_99(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PMPLAYER_GENERAL";
		case 1:
			return "PMPLAYER_HEALTH";
		case 2:
			return "PMPLAYER_STAMINA";
		case 3:
			return "PMPLAYER_DEADEYE";
		case 4:
			return "PMPLAYER_GENERAL_STATS";
		case 5:
			return "PMPLAYER_HORSE";
		default:
			break;
	}
	return "";
}

void func_100(char* sParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954472->f_5.f_425, sParam0);
}

void func_101(bool bParam0, char* sParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1954472->f_5.f_425.f_24[bParam0 /*25*/])->f_16, sParam1);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1954472->f_5.f_425.f_22, bParam0, "player_group_item", (Global_1954472->f_5.f_425.f_24[bParam0 /*25*/])->f_15);
}

void func_102(bool bParam0, char* sParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5, char* sParam6, char* sParam7, char* sParam8, bool bParam9)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1954472->f_5.f_425.f_24[bParam0 /*25*/])->f_16, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1954472->f_5.f_425.f_24[bParam0 /*25*/])->f_17, sParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1954472->f_5.f_425.f_24[bParam0 /*25*/])->f_18, bParam3);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1954472->f_5.f_425.f_24[bParam0 /*25*/])->f_19, bParam4);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1954472->f_5.f_425.f_24[bParam0 /*25*/])->f_22, bParam5);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1954472->f_5.f_425.f_24[bParam0 /*25*/])->f_20, sParam6);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1954472->f_5.f_425.f_24[bParam0 /*25*/])->f_21, sParam7);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1954472->f_5.f_425.f_24[bParam0 /*25*/])->f_23, sParam8);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1954472->f_5.f_425.f_24[bParam0 /*25*/])->f_24, bParam9);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1954472->f_5.f_425.f_22, bParam0, "player_list_item", (Global_1954472->f_5.f_425.f_24[bParam0 /*25*/])->f_15);
}

void func_103(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954472->f_5.f_425.f_9, bParam0);
}

void func_104(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954472->f_5.f_425.f_10, bParam0);
}

int func_105(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_86(1);
	}
	switch (iParam1)
	{
		case 0:
			return &(Global_1954472->f_1331.f_50[iParam0]);
		case 1:
			return &(Global_1954472->f_1465.f_2.f_50[iParam0]);
		default:
			break;
	}
	return 1;
}

void func_106(char* sParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954472->f_5.f_425.f_5, sParam0);
}

void func_107()
{
	struct<2> Var0;
	vector3 vVar2;
	char cVar9[16];
	int iVar11;

	Var0 = { func_88(joaat("DATE_CHARACTER_CREATED")) };
	STATS::STAT_ID_GET_DATE(&Var0, &vVar2);
	iVar11 = LOCALIZATION::_LOCALIZATION_GET_USER_LANGUAGE();
	switch (iVar11)
	{
		case 0:
			if (vVar2.z < 10)
			{
				StringCopy(&cVar9, "0", 16);
			}
			StringIntConCat(&cVar9, vVar2.z, 16);
			StringConCat(&cVar9, "/", 16);
			if (vVar2.y < 10)
			{
				StringConCat(&cVar9, "0", 16);
			}
			StringIntConCat(&cVar9, vVar2.y, 16);
			StringConCat(&cVar9, "/", 16);
			StringIntConCat(&cVar9, vVar2.x, 16);
			break;
		case 1:
			if (vVar2.y < 10)
			{
				StringCopy(&cVar9, "0", 16);
			}
			StringIntConCat(&cVar9, vVar2.y, 16);
			StringConCat(&cVar9, "/", 16);
			if (vVar2.z < 10)
			{
				StringConCat(&cVar9, "0", 16);
			}
			StringIntConCat(&cVar9, vVar2.z, 16);
			StringConCat(&cVar9, "/", 16);
			StringIntConCat(&cVar9, vVar2.x, 16);
			break;
		case 2:
			IntToString(&cVar9, vVar2.x, 16);
			StringConCat(&cVar9, "/", 16);
			if (vVar2.y < 10)
			{
				StringConCat(&cVar9, "0", 16);
			}
			StringIntConCat(&cVar9, vVar2.y, 16);
			StringConCat(&cVar9, "/", 16);
			if (vVar2.z < 10)
			{
				StringConCat(&cVar9, "0", 16);
			}
			StringIntConCat(&cVar9, vVar2.z, 16);
			break;
	}
	func_102(1, "PMPLAYER_CREATED_DATE", &cVar9, 1, 0, 0, 0, 0, 0, 0);
}

float func_108(int iParam0)
{
	var uVar0;
	struct<2> Var1;

	Var1 = { func_88(iParam0) };
	STATS::STAT_ID_GET_FLOAT(&Var1, &uVar0);
	return uVar0;
}

var func_109(float fParam0, int iParam1)
{
	char* sVar0;

	sVar0 = MISC::_0x2B6846401D68E563(fParam0, iParam1);
	return func_193(sVar0, joaat("COLOR_PURE_WHITE"));
}

int func_110(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_194(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_111(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!INVENTORY::_0x42A2F33A1942E865(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_112(int iParam0)
{
	var uVar0;
	struct<2> Var1;

	Var1 = { func_113(iParam0) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	return uVar0;
}

struct<2> func_113(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

void func_114(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

int func_115(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var1;

	Var1 = { func_195(iParam0, iParam1) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	return uVar0;
}

int func_116(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;

	iVar1 = STATS::_0xCAAE29CB5591B2A5(iParam0, iParam1);
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (STATS::_0xDCEC875A02991AD0(iParam0, iParam1, iVar2, &uVar4))
		{
			STATS::STAT_ID_GET_INT(&uVar4, &iVar3);
			if (iVar3 > 0)
			{
				iVar0++;
			}
		}
		iVar2++;
	}
	return iVar0;
}

int func_117(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = ATTRIBUTE::GET_ATTRIBUTE_POINTS(iParam0, 7);
	return iVar0;
}

int func_118(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iParam0, 7);
	return iVar0;
}

var func_119(int iParam0, int iParam1)
{
	if (!func_196(iParam0, iParam1, 0, 0))
	{
	}
	return Global_1903929->f_27;
}

int func_120(int iParam0, int iParam1)
{
	var uVar0;

	if (!func_196(iParam0, iParam1, 0, 0))
	{
	}
	if (!func_197(Global_1903929))
	{
		return 0;
	}
	uVar0 = func_198(Global_1903929->f_11, Global_1903929->f_27);
	return uVar0;
}

int func_121(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (func_199(iParam1, &iVar0))
	{
		return ATTRIBUTE::GET_ATTRIBUTE_BASE_RANK(iParam0, iVar0);
	}
	return 0;
}

int func_122(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	int iVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (INVENTORY::_0x4C543D5DFCD2DAFD(Global_17172.f_54.f_61.f_41[iVar0 /*54*/], &uParam0))
		{
			return &((Global_17172.f_54.f_61.f_41[iVar0 /*54*/])->f_38[iParam4 /*4*/]);
		}
		iVar0++;
	}
	if (!func_200(&uParam0))
	{
		return 0;
	}
	return 0;
}

float func_123(int iParam0)
{
	var uVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0f;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0f;
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
		return 0f;
	}
	uVar0 = PED::_0x42688E94E96FD9B4(iParam0, 3, 0);
	return uVar0;
}

int func_124(int iParam0, int iParam1)
{
	struct<4> Var0;

	if (!func_201(856287005, iParam0))
	{
		return 0;
	}
	Var0 = { func_202() };
	*iParam1 = func_184(Var0, iParam0, 0, -1);
	if (!func_203(*iParam1, 0))
	{
		return 0;
	}
	return 1;
}

int func_125(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<19> Var1;

	Var1.f_2 = 5;
	Var1.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(iParam0, &Var1))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (iParam2 != 0 && (Var1.f_18[iVar0 /*2*/])->f_1 != iParam2)
			{
				Jump @117; //curOff = 67
			}
			else if (iParam3 != 0 && &Var1.f_18[iVar0 /*2*/] != iParam3)
			{
			}
			else
			{
				*iParam1 = { *(Var1.f_18[iVar0 /*2*/]) };
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

char* func_126(int iParam0)
{
	int iVar0;

	if (!func_203(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_204(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(iVar0);
}

var func_127(char[4] cParam0)
{
	return cParam0;
}

void func_128(int iParam0, int iParam1)
{
	Global_1572887->f_387 = iParam0;
	Global_1572887->f_387.f_1 = iParam1;
	func_205();
}

void func_129(var uParam0)
{
}

void func_130(var uParam0)
{
	func_48(uParam0, 1, 1);
}

void func_131(var uParam0)
{
	if (func_47(uParam0, 0))
	{
		func_48(uParam0, 1, 1);
	}
	if (func_47(uParam0, 1))
	{
		func_48(uParam0, 1, 0);
		func_207(uParam0, 1145633164, func_206());
		func_207(uParam0, -359624034, func_208());
	}
}

int func_132(var uParam0)
{
	uParam0->f_194[0] = DATABINDING::_0xD7DB94AB78E8EBE4("", 1395437865);
	uParam0->f_194.f_2[0] = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(&(uParam0->f_194[0]), 1145633164, func_206());
	uParam0->f_194.f_2[1] = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(&(uParam0->f_194[0]), -359624034, func_208());
	return 1;
}

void func_133(var uParam0)
{
	func_209(uParam0);
}

struct<14> func_134(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<14> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_13 = -1;
	if (iParam0 != 0)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1591664384)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0 && iParam3 != -1591664384)
	{
		Var0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		Var0.f_5 = iParam5;
	}
	if (iParam6 != 0)
	{
		Var0.f_8 = iParam6;
	}
	return Var0;
}

int func_135(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_194(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_136(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return 0;
	}
	if (!INVENTORY::_0x82FA24C3D3FCD9B7(iParam2, iParam1, iParam0))
	{
		return 0;
	}
	return 1;
}

int func_137(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		return 0;
	}
	iVar0 = func_194(bParam2);
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, iParam0, iParam1, 29, 1))
	{
		return 0;
	}
	return 1;
}

bool func_138(var uParam0, int iParam1)
{
	return func_210(*uParam0, iParam1);
}

int func_139(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (!&Global_1048577)
	{
		return 3;
	}
	iVar0 = ((*Global_262996)[iParam0 /*70*/])->f_1.f_21.f_2;
	iVar1 = func_211(iVar0);
	uVar2 = func_212(iVar0, iVar1);
	return uVar2;
}

struct<2> func_140()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

int func_141(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265331->f_124445.f_134 & 8 != 0)
	{
		Global_1070356->f_26837 = 1;
		return 1;
	}
	if (func_7(*Global_1051163) && !func_213(*Global_1051163, Param0))
	{
		Global_1070356->f_26837 = 2;
		return 1;
	}
	if (iParam2 != 0 && func_214(iParam2))
	{
		return 1;
	}
	if (iParam3 != 0 && func_215(iParam3, 255))
	{
		Global_1070356->f_26837 = 4;
		return 1;
	}
	if (Global_262996[&Global_1275573 /*70*/] > 2)
	{
		Global_1070356->f_26837 = 5;
		return 1;
	}
	if (&Global_262155 >= 1)
	{
		Global_1070356->f_26837 = 6;
		return 1;
	}
	if (func_216())
	{
		Global_1070356->f_26837 = 7;
		return 1;
	}
	if (Global_1572887->f_7 & 1 != 0)
	{
		if (!func_7(*Global_1051163))
		{
			Global_1070356->f_26837 = 8;
			return 1;
		}
	}
	if (Global_265331->f_124602 != 0 && SCRIPTS::_DOES_THREAD_EXIST(Global_265331->f_124602))
	{
		Global_1070356->f_26837 = 9;
		return 1;
	}
	Global_1070356->f_26837 = 0;
	return 0;
}

bool func_142(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 - iVar0 * 32);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_143(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 == -1)
	{
		return 0;
	}
	func_217(iParam2);
	switch (iParam1)
	{
		case 0:
		case 1:
			if (!func_218(iParam0, iParam2))
			{
				return 0;
			}
			break;
		case 2:
			if (!func_219(iParam0, iParam2))
			{
				return 0;
			}
			break;
	}
	if (bParam3)
	{
		func_220(iParam2);
	}
	return 1;
}

char* func_144(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BREED_AMERICANPAINT_OVERO"):
			return "BREED_AMERICANPAINT_OVERO";
		case joaat("BREED_AMERICANPAINT_TOBIANO"):
			return "BREED_AMERICANPAINT_TOBIANO";
		case joaat("BREED_AMERICANPAINT_SPLASHEDWHITE"):
			return "BREED_AMERICANPAINT_SPLASHEDWHITE";
		case joaat("BREED_AMERICANPAINT_GREYOVERO"):
			return "BREED_AMERICANPAINT_GREYOVERO";
		case joaat("BREED_AMERICANSTANDARDBRED_BLACK"):
			return "BREED_AMERICANSTANDARDBRED_BLACK";
		case joaat("BREED_AMERICANSTANDARDBRED_BUCKSKIN"):
			return "BREED_AMERICANSTANDARDBRED_BUCKSKIN";
		case joaat("BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE"):
			return "BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE";
		case joaat("BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN"):
			return "BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN";
		case joaat("BREED_ANDALUSIAN_DARKBAY"):
			return "BREED_ANDALUSIAN_DARKBAY";
		case joaat("BREED_ANDALUSIAN_PERLINO"):
			return "BREED_ANDALUSIAN_PERLINO";
		case joaat("BREED_ANDALUSIAN_ROSEGRAY"):
			return "BREED_ANDALUSIAN_ROSEGRAY";
		case joaat("BREED_APPALOOSA_BLANKET"):
			return "BREED_APPALOOSA_BLANKET";
		case joaat("BREED_APPALOOSA_LEOPARDBLANKET"):
			return "BREED_APPALOOSA_LEOPARDBLANKET";
		case joaat("BREED_APPALOOSA_BROWNLEOPARD"):
			return "BREED_APPALOOSA_BROWNLEOPARD";
		case joaat("BREED_APPALOOSA_LEOPARD"):
			return "BREED_APPALOOSA_LEOPARD";
		case joaat("BREED_ARABIAN_BLACK"):
			return "BREED_ARABIAN_BLACK";
		case joaat("BREED_ARABIAN_ROSEGREYBAY"):
			return "BREED_ARABIAN_ROSEGREYBAY";
		case joaat("BREED_ARABIAN_WHITE"):
			return "BREED_ARABIAN_WHITE";
		case joaat("BREED_ARDENNES_BAYROAN"):
			return "BREED_ARDENNES_BAYROAN";
		case joaat("BREED_ARDENNES_STRAWBERRYROAN"):
			return "BREED_ARDENNES_STRAWBERRYROAN";
		case joaat("BREED_ARDENNES_IRONGREYROAN"):
			return "BREED_ARDENNES_IRONGREYROAN";
		case joaat("BREED_BELGIAN_BLONDCHESTNUT"):
			return "BREED_BELGIAN_BLONDCHESTNUT";
		case joaat("BREED_BELGIAN_MEALYCHESTNUT"):
			return "BREED_BELGIAN_MEALYCHESTNUT";
		case joaat("BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN"):
			return "BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN";
		case joaat("BREED_DUTCHWARMBLOOD_SEALBROWN"):
			return "BREED_DUTCHWARMBLOOD_SEALBROWN";
		case joaat("BREED_DUTCHWARMBLOOD_CHOCOLATEROAN"):
			return "BREED_DUTCHWARMBLOOD_CHOCOLATEROAN";
		case joaat("BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT"):
			return "BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT";
		case joaat("BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO"):
			return "BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO";
		case joaat("BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY"):
			return "BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY";
		case -1955947684:
			return "BREED_KENTUCKYSADDLE_BLACK1";
		case joaat("BREED_KENTUCKYSADDLE_CHESTNUTPINTO"):
			return "BREED_KENTUCKYSADDLE_CHESTNUTPINTO";
		case joaat("BREED_KENTUCKYSADDLE_GREY"):
			return "BREED_KENTUCKYSADDLE_GREY";
		case joaat("BREED_KENTUCKYSADDLE_SILVERBAY"):
			return "BREED_KENTUCKYSADDLE_SILVERBAY";
		case joaat("BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE"):
			return "BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE";
		case joaat("BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO"):
			return "BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO";
		case joaat("BREED_MORGAN_BAY"):
			return "BREED_MORGAN_BAY";
		case joaat("BREED_MORGAN_BAYROAN"):
			return "BREED_MORGAN_BAYROAN";
		case joaat("BREED_MORGAN_FLAXENCHESTNUT"):
			return "BREED_MORGAN_FLAXENCHESTNUT";
		case joaat("BREED_MORGAN_PALOMINO"):
			return "BREED_MORGAN_PALOMINO";
		case joaat("BREED_MUSTANG_GRULLODUN"):
			return "BREED_MUSTANG_GRULLODUN";
		case joaat("BREED_MUSTANG_WILDBAY"):
			return "BREED_MUSTANG_WILDBAY";
		case joaat("BREED_MUSTANG_TIGERSTRIPEDBAY"):
			return "BREED_MUSTANG_TIGERSTRIPEDBAY";
		case joaat("BREED_NOKOTA_BLUEROAN"):
			return "BREED_NOKOTA_BLUEROAN";
		case joaat("BREED_NOKOTA_WHITEROAN"):
			return "BREED_NOKOTA_WHITEROAN";
		case joaat("BREED_NOKOTA_REVERSEDAPPLEROAN"):
			return "BREED_NOKOTA_REVERSEDAPPLEROAN";
		case joaat("BREED_SHIRE_DARKBAY"):
			return "BREED_SHIRE_DARKBAY";
		case joaat("BREED_SHIRE_LIGHTGREY"):
			return "BREED_SHIRE_LIGHTGREY";
		case joaat("BREED_SUFFOLKPUNCH_SORREL"):
			return "BREED_SUFFOLKPUNCH_SORREL";
		case joaat("BREED_SUFFOLKPUNCH_REDCHESTNUT"):
			return "BREED_SUFFOLKPUNCH_REDCHESTNUT";
		case joaat("BREED_TENNESSEEWALKER_BLACKRABICANO"):
			return "BREED_TENNESSEEWALKER_BLACKRABICANO";
		case joaat("BREED_TENNESSEEWALKER_CHESTNUT"):
			return "BREED_TENNESSEEWALKER_CHESTNUT";
		case joaat("BREED_TENNESSEEWALKER_DAPPLEBAY"):
			return "BREED_TENNESSEEWALKER_DAPPLEBAY";
		case joaat("BREED_TENNESSEEWALKER_REDROAN"):
			return "BREED_TENNESSEEWALKER_REDROAN";
		case joaat("BREED_TENNESSEEWALKER_FLAXENROAN"):
			return "BREED_TENNESSEEWALKER_FLAXENROAN";
		case joaat("BREED_THOROUGHBRED_BLOODBAY"):
			return "BREED_THOROUGHBRED_BLOODBAY";
		case joaat("BREED_THOROUGHBRED_DAPPLEGREY"):
			return "BREED_THOROUGHBRED_DAPPLEGREY";
		case joaat("BREED_THOROUGHBRED_BRINDLE"):
			return "BREED_THOROUGHBRED_BRINDLE";
		case joaat("BREED_THOROUGHBRED_BLACKCHESTNUT"):
			return "BREED_THOROUGHBRED_BLACKCHESTNUT";
		case joaat("BREED_THOROUGHBRED_REVERSEDAPPLEBLACK"):
			return "BREED_THOROUGHBRED_REVERSEDAPPLEBLACK";
		case joaat("BREED_TURKOMAN_DARKBAY"):
			return "BREED_TURKOMAN_DARKBAY";
		case joaat("BREED_TURKOMAN_GOLD"):
			return "BREED_TURKOMAN_GOLD";
		case joaat("BREED_TURKOMAN_SILVER"):
			return "BREED_TURKOMAN_SILVER";
		case joaat("BREED_BRETON_REDROAN"):
			return "BREED_BRETON_REDROAN";
		case joaat("BREED_BRETON_SORREL"):
			return "BREED_BRETON_SORREL";
		case joaat("BREED_BRETON_GRULLODUN"):
			return "BREED_BRETON_GRULLODUN";
		case joaat("BREED_BRETON_SEALBROWN"):
			return "BREED_BRETON_SEALBROWN";
		case joaat("BREED_BRETON_MEALYDAPPLEBAY"):
			return "BREED_BRETON_MEALYDAPPLEBAY";
		case joaat("BREED_BRETON_STEELGREY"):
			return "BREED_BRETON_STEELGREY";
		case joaat("BREED_CRIOLLO_BLUEROANOVERO"):
			return "BREED_CRIOLLO_BLUEROANOVERO";
		case joaat("BREED_CRIOLLO_DUN"):
			return "BREED_CRIOLLO_DUN";
		case joaat("BREED_CRIOLLO_BAYBRINDLE"):
			return "BREED_CRIOLLO_BAYBRINDLE";
		case joaat("BREED_CRIOLLO_SORRELOVERO"):
			return "BREED_CRIOLLO_SORRELOVERO";
		case joaat("BREED_CRIOLLO_BAYFRAMEOVERO"):
			return "BREED_CRIOLLO_BAYFRAMEOVERO";
		case joaat("BREED_CRIOLLO_MARBLESABINO"):
			return "BREED_CRIOLLO_MARBLESABINO";
		case joaat("BREED_KLADRUBER_BLACK"):
			return "BREED_KLADRUBER_BLACK";
		case joaat("BREED_KLADRUBER_WHITE"):
			return "BREED_KLADRUBER_WHITE";
		case joaat("BREED_KLADRUBER_CREMELLO"):
			return "BREED_KLADRUBER_CREMELLO";
		case joaat("BREED_KLADRUBER_GREY"):
			return "BREED_KLADRUBER_GREY";
		case joaat("BREED_KLADRUBER_DAPPLEROSEGREY"):
			return "BREED_KLADRUBER_DAPPLEROSEGREY";
		case joaat("BREED_KLADRUBER_SILVER"):
			return "BREED_KLADRUBER_SILVER";
		case joaat("BREED_NORFOLKROADSTER_BLACK"):
			return "BREED_NORFOLKROADSTER_BLACK";
		case joaat("BREED_NORFOLKROADSTER_SPECKLEDGREY"):
			return "BREED_NORFOLKROADSTER_SPECKLEDGREY";
		case joaat("BREED_NORFOLKROADSTER_PIEBALDROAN"):
			return "BREED_NORFOLKROADSTER_PIEBALDROAN";
		case joaat("BREED_NORFOLKROADSTER_ROSEGREY"):
			return "BREED_NORFOLKROADSTER_ROSEGREY";
		case joaat("BREED_NORFOLKROADSTER_DAPPLEDBUCKSKIN"):
			return "BREED_NORFOLKROADSTER_DAPPLEDBUCKSKIN";
		case joaat("BREED_NORFOLKROADSTER_SPOTTEDTRICOLOR"):
			return "BREED_NORFOLKROADSTER_SPOTTEDTRICOLOR";
		case joaat("BREED_DONKEY"):
			return "BREED_DONKEY";
		case joaat("BREED_MULE"):
			return "BREED_MULE";
		case joaat("BREED_MULE_PAINTED"):
			return "BREED_MULE_PAINTED";
		case joaat("BREED_AMERICANSTANDARDBRED_LIGHTBUCKSKIN"):
			return "BREED_AMERICANSTANDARDBRED_LIGHTBUCKSKIN";
		case joaat("BREED_APPALOOSA_BLACKSNOWFLAKE"):
			return "BREED_APPALOOSA_BLACKSNOWFLAKE";
		case joaat("BREED_ARABIAN_GREY"):
			return "BREED_ARABIAN_GREY";
		case joaat("BREED_ARABIAN_REDCHESTNUT"):
			return "BREED_ARABIAN_REDCHESTNUT";
		case joaat("BREED_HUNGARIANHALFBRED_LIVERCHESTNUT"):
			return "BREED_HUNGARIANHALFBRED_LIVERCHESTNUT";
		case joaat("BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE"):
			return "BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE";
		case joaat("BREED_MUSTANG_GOLDENDUN"):
			return "BREED_MUSTANG_GOLDENDUN";
		case joaat("BREED_TENNESSEEWALKER_MAHOGANYBAY"):
			return "BREED_TENNESSEEWALKER_MAHOGANYBAY";
		case joaat("BREED_SHIRE_RAVENBLACK"):
			return "BREED_SHIRE_RAVENBLACK";
		case joaat("BREED_BUELL_WARVETS"):
			return "BREED_BUELL_WARVETS";
		case joaat("BREED_JOHN_ENDLESSSUMMER"):
			return "BREED_JOHN_ENDLESSSUMMER";
		case joaat("BREED_MURFREEBROOD_MANGE_01"):
			return "BREED_MURFREEBROOD_MANGE_01";
		case joaat("BREED_MURFREEBROOD_MANGE_02"):
			return "BREED_MURFREEBROOD_MANGE_02";
		case joaat("BREED_MURFREEBROOD_MANGE_03"):
			return "BREED_MURFREEBROOD_MANGE_03";
		case joaat("BREED_WINTER02_01"):
			return "BREED_WINTER02_01";
		case joaat("BREED_EAGLEFLIES"):
			return "BREED_EAGLEFLIES";
		case joaat("BREED_GANG_BILL"):
			return "BREED_GANG_BILL";
		case joaat("BREED_GANG_CHARLES"):
			return "BREED_GANG_CHARLES";
		case joaat("BREED_GANG_CHARLES_ENDLESSSUMMER"):
			return "BREED_GANG_CHARLES_ENDLESSSUMMER";
		case joaat("BREED_GANG_DUTCH"):
			return "BREED_GANG_DUTCH";
		case joaat("BREED_GANG_HOSEA"):
			return "BREED_GANG_HOSEA";
		case joaat("BREED_GANG_JAVIER"):
			return "BREED_GANG_JAVIER";
		case joaat("BREED_GANG_JOHN"):
			return "BREED_GANG_JOHN";
		case joaat("BREED_GANG_KAREN"):
			return "BREED_GANG_KAREN";
		case joaat("BREED_GANG_KIERAN"):
			return "BREED_GANG_KIERAN";
		case joaat("BREED_GANG_LENNY"):
			return "BREED_GANG_LENNY";
		case joaat("BREED_GANG_MICAH"):
			return "BREED_GANG_MICAH";
		case joaat("BREED_GANG_SADIE"):
			return "BREED_GANG_SADIE";
		case joaat("BREED_GANG_SADIE_ENDLESSSUMMER"):
			return "BREED_GANG_SADIE_ENDLESSSUMMER";
		case joaat("BREED_GANG_SEAN"):
			return "BREED_GANG_SEAN";
		case joaat("BREED_GANG_TRELAWNEY"):
			return "BREED_GANG_TRELAWNEY";
		case joaat("BREED_GANG_UNCLE"):
			return "BREED_GANG_UNCLE";
		case joaat("BREED_GANG_UNCLE_ENDLESSSUMMER"):
			return "BREED_GANG_UNCLE_ENDLESSSUMMER";
		case joaat("BREED_MANGY_BACKUP"):
			return "BREED_MANGY_BACKUP";
		default:
			break;
	}
	return "";
}

bool func_145(int iParam0)
{
	return func_221(&(Global_1954472->f_1465), iParam0, 1);
}

int func_146(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_147(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -348950400;
				case 2:
					return 239417318;
				case 3:
					return 239417318;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return 1307826022;
				case 2:
					return -59491839;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 1907908866;
				case 2:
					return -59491839;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -889182566;
				case 2:
					return -59491839;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return -474428808;
				case 2:
					return -59491839;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return 16540788;
				case 2:
					return 1377133516;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return -481682130;
				case 2:
					return 1377133516;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					return -1990849941;
				case 2:
					return 1377133516;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return -1265587408;
				case 2:
					return 1377133516;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 0:
					return 1087345397;
				case 2:
					return 319921153;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam0)
			{
				case 0:
					return -1817797378;
				case 2:
					return 319921153;
				default:
					break;
			}
			break;
		case 11:
			switch (iParam0)
			{
				case 0:
					return -1142776975;
				case 2:
					return 319921153;
				default:
					break;
			}
			break;
		case 12:
			switch (iParam0)
			{
				case 0:
					return 2117980229;
				case 2:
					return 319921153;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 1427667791;
				case 2:
					return -1124047374;
				case 3:
					return -311950714;
				case 4:
					return -1877729336;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 1733369788;
				case 2:
					return -1291660805;
				case 3:
					return 53620250;
				case 4:
					return -967242671;
				default:
					break;
			}
			break;
		case 15:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 1751392738;
				case 2:
					return -1002933146;
				case 3:
					return 300796817;
				case 4:
					return -1332027179;
				default:
					break;
			}
			break;
		case 16:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1523907969;
				case 2:
					return -1340126692;
				case 3:
					return -1177458231;
				case 4:
					return 1413260826;
				default:
					break;
			}
			break;
		case 17:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 318496303;
				case 2:
					return -1612797541;
				case 3:
					return -1876683153;
				case 4:
					return 1251939043;
				default:
					break;
			}
			break;
		case 18:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -411791259;
				case 2:
					return 1855246300;
				case 3:
					return 763461736;
				case 4:
					return -92262210;
				default:
					break;
			}
			break;
		case 19:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -644680542;
				case 2:
					return 2084465459;
				case 3:
					return 1616668189;
				case 4:
					return -1758631398;
				default:
					break;
			}
			break;
		case 20:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1585597204;
				case 2:
					return 941214835;
				case 3:
					return 68299210;
				case 4:
					return 1699902717;
				default:
					break;
			}
			break;
		case 21:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -913454268;
				case 2:
					return 1265238199;
				case 3:
					return -1638616368;
				case 4:
					return 1550104174;
				default:
					break;
			}
			break;
		case 22:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1239767970;
				case 2:
					return -1099733308;
				case 3:
					return -697261301;
				case 4:
					return 1865014264;
				default:
					break;
			}
			break;
		case 23:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1227772128;
				case 2:
					return 1853607854;
				case 3:
					return 1511414161;
				case 4:
					return -2030843481;
				default:
					break;
			}
			break;
		case 24:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1597340910;
				case 2:
					return 885906515;
				case 3:
					return -674835160;
				case 4:
					return 867181329;
				default:
					break;
			}
			break;
		case 25:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1824548752;
				case 2:
					return -645886158;
				case 3:
					return 825197572;
				case 4:
					return 1390137360;
				default:
					break;
			}
			break;
	}
	return 0;
}

void func_148(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954472->f_5.f_425.f_6, bParam0);
}

void func_149(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954472->f_5.f_425.f_7, bParam0);
}

void func_150(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954472->f_5.f_425.f_8, bParam0);
}

void func_151(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954472->f_5.f_425.f_11, bParam0);
}

void func_152(bool bParam0, char* sParam1, char* sParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954472->f_5.f_425.f_18, bParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954472->f_5.f_425.f_19, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954472->f_5.f_425.f_20, sParam2);
}

void func_153(char* sParam0, char* sParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = func_222(0);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954472->f_5.f_425.f_3, sParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954472->f_5.f_425.f_4, sParam1);
}

char* func_154(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PMPLAYER_GENERAL_DESC_NET";
		case 1:
			return "PMPLAYER_HEALTH_DESC";
		case 2:
			return "PMPLAYER_STAMINA_DESC";
		case 3:
			return "PMPLAYER_DEADEYE_DESC";
		case 4:
			return "PMPLAYER_STATS_DESC";
		case 5:
			return "PMPLAYER_HORSE_DESC";
		default:
			break;
	}
	return "";
}

void func_155(char* sParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954472->f_5.f_425.f_2, sParam0);
}

void func_156(char* sParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954472->f_5.f_425.f_1, sParam0);
}

void func_157(bool bParam0, char* sParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, float fParam7, float fParam8, float fParam9, char* sParam10)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1954472->f_5.f_425.f_24[bParam0 /*25*/])->f_4, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1954472->f_5.f_425.f_24[bParam0 /*25*/])->f_5, sParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1954472->f_5.f_425.f_24[bParam0 /*25*/])->f_1, bParam3);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1954472->f_5.f_425.f_24[bParam0 /*25*/])->f_2, sParam10);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1954472->f_5.f_425.f_24[bParam0 /*25*/])->f_6, bParam4);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1954472->f_5.f_425.f_24[bParam0 /*25*/])->f_7, bParam5);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1954472->f_5.f_425.f_24[bParam0 /*25*/])->f_11, bParam6);
	DATABINDING::_DATABINDING_WRITE_DATA_FLOAT((Global_1954472->f_5.f_425.f_24[bParam0 /*25*/])->f_8, fParam7);
	DATABINDING::_DATABINDING_WRITE_DATA_FLOAT((Global_1954472->f_5.f_425.f_24[bParam0 /*25*/])->f_9, fParam8);
	DATABINDING::_DATABINDING_WRITE_DATA_FLOAT((Global_1954472->f_5.f_425.f_24[bParam0 /*25*/])->f_10, fParam9);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1954472->f_5.f_425.f_24[bParam0 /*25*/])->f_12, false);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1954472->f_5.f_425.f_21, bParam0, "player_attribute_item", &(Global_1954472->f_5.f_425.f_24[bParam0 /*25*/]));
}

char* func_158()
{
	return "MP_PLAYER_WEIGHT";
}

void func_159(int iParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;

	switch (iParam0)
	{
		case 0:
			fVar0 = ((Global_1140484->f_2001[85 /*192*/])->f_188 * (Global_1140484->f_2001[85 /*192*/])->f_189);
			fVar1 = ((Global_1140484->f_2001[86 /*192*/])->f_188 * (Global_1140484->f_2001[86 /*192*/])->f_189);
			if (fVar0 == 0f)
			{
				func_157(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_STAMINA_DRAIN"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 0), 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Stamina");
				func_157(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_DAMAGE_ABSORPTION"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 0), 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Health");
			}
			else if (fVar0 > 0f)
			{
				func_157(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_STAMINA_DRAIN"), MISC::_CREATE_VAR_STRING(6, "PMPLAYER_CORE_PC_PLUS_VALUE", (fVar0 * 100f)), 1, 0, 1, 0, 0f, 0f, 0f, "RPG_Stamina");
				func_167(0, "RPG_ARROW_DOWN", 0);
				func_157(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_DAMAGE_ABSORPTION"), MISC::_CREATE_VAR_STRING(6, "PMPLAYER_CORE_PC_VALUE", (fVar1 * 100f)), 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Health");
				func_167(1, "RPG_ARROW_UP", 0);
			}
			else
			{
				func_157(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_STAMINA_DRAIN"), MISC::_CREATE_VAR_STRING(6, "PMPLAYER_CORE_PC_VALUE", (fVar0 * 100f)), 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Stamina");
				func_167(0, "RPG_ARROW_UP", 0);
				func_157(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_DAMAGE_ABSORPTION"), MISC::_CREATE_VAR_STRING(6, "PMPLAYER_CORE_PC_PLUS_VALUE", (fVar1 * 100f)), 1, 0, 1, 0, 0f, 0f, 0f, "RPG_Health");
				func_167(1, "RPG_ARROW_DOWN", 0);
			}
			break;
		case 1:
		case 2:
		case 3:
			if (Global_1954472->f_1331.f_103 == 0)
			{
				fVar2 = 0.15f;
			}
			else if (Global_1954472->f_1331.f_103 == 10 || Global_1954472->f_1331.f_103 == -10)
			{
				fVar2 = -0.25f;
			}
			else
			{
				fVar2 = 0f;
			}
			if (fVar2 < 0f)
			{
				func_157(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", MISC::ABSI(BUILTIN::ROUND((100f * fVar2)))), 1, 0, 1, 0, 0f, 0f, 0f, func_223(iParam0));
				func_167(0, "RPG_ARROW_DOWN", 0);
			}
			else if (fVar2 == 0f)
			{
				func_157(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", MISC::ABSI(BUILTIN::ROUND((100f * fVar2)))), 1, 0, 0, 0, 0f, 0f, 0f, func_223(iParam0));
			}
			else
			{
				func_157(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_MINUS_VALUE", MISC::ABSI(BUILTIN::ROUND((100f * fVar2)))), 1, 0, 0, 0, 0f, 0f, 0f, func_223(iParam0));
				func_167(0, "RPG_ARROW_UP", 0);
			}
			break;
	}
}

char* func_160()
{
	return "MP_PLAYER_TEMPERATURE";
}

char* func_161()
{
	return "pm_player_mp";
}

void func_162()
{
	if (func_26() || func_27())
	{
		func_157(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 900), 1, 0, 1, 0, 0f, 0f, 0f, "RPG_Health");
		func_167(0, "RPG_ARROW_DOWN", 0);
	}
	else
	{
		func_157(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 0), 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Health");
	}
}

char* func_163()
{
	return "MP_PLAYER_TOXICITY";
}

char* func_164()
{
	return "pm_player_mp";
}

void func_165()
{
	if (func_41())
	{
		func_157(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 900), 1, 0, 1, 0, 0f, 0f, 0f, "RPG_Health");
		func_167(0, "RPG_ARROW_DOWN", 0);
	}
	else
	{
		func_157(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 0), 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Health");
	}
}

char* func_166(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "MP_PLAYER_PLAYER";
		case 1:
			return "MP_PLAYER_HEALTH";
		case 2:
			return "MP_PLAYER_STAMINA";
		case 3:
			return "MP_PLAYER_DEAD_EYE";
		case 4:
			return "MP_PLAYER_GENERAL_STATS";
		case 5:
			return "HORSE_GENERAL";
		default:
			break;
	}
	return "";
}

void func_167(bool bParam0, char* sParam1, char* sParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1954472->f_5.f_425.f_24[bParam0 /*25*/])->f_13, sParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1954472->f_5.f_425.f_24[bParam0 /*25*/])->f_14, sParam2);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1954472->f_5.f_425.f_24[bParam0 /*25*/])->f_14, "pausemenu_player_update");
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1954472->f_5.f_425.f_24[bParam0 /*25*/])->f_12, true);
}

void func_168(int iParam0, char* sParam1, char* sParam2, char* sParam3)
{
	float fVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	char* sVar6;

	fVar0 = func_224(iParam0, 2);
	iVar1 = func_225(fVar0);
	fVar2 = BUILTIN::TO_FLOAT(func_226(iVar1 + 1));
	iVar3 = iVar1 + 5;
	iVar4 = 5 + 5;
	if (iVar3 < iVar4)
	{
		func_157(bVar5, MISC::_CREATE_VAR_STRING(2, sParam1), MISC::_CREATE_VAR_STRING(18, "PMPLAYER_VALUE_X_OF_Y", BUILTIN::FLOOR(fVar0), fVar2), 0, 0, 0, 0, 0, 0, 0, 0);
		bVar5++;
	}
	func_157(bVar5, MISC::_CREATE_VAR_STRING(2, sParam2), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_X_OF_Y", iVar3, iVar4), 0, 0, 0, 0, 0, 0, 0, 0);
	sVar6 = func_228(func_227(iVar3, 0));
	func_152(1, sVar6, sParam3);
}

int func_169(int iParam0, int iParam1)
{
	func_196(iParam0, iParam1, 0, 0);
	return Global_1903929->f_22;
}

int func_170(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BREED_AMERICANPAINT_OVERO"):
			return joaat("A_C_Horse_AmericanPaint_Overo");
		case joaat("BREED_AMERICANPAINT_TOBIANO"):
			return joaat("A_C_Horse_AmericanPaint_Tobiano");
		case joaat("BREED_AMERICANPAINT_SPLASHEDWHITE"):
			return joaat("A_C_Horse_AmericanPaint_SplashedWhite");
		case joaat("BREED_AMERICANPAINT_GREYOVERO"):
			return joaat("A_C_Horse_AmericanPaint_Greyovero");
		case joaat("BREED_AMERICANSTANDARDBRED_BLACK"):
			return joaat("A_C_Horse_AmericanStandardbred_Black");
		case joaat("BREED_AMERICANSTANDARDBRED_BUCKSKIN"):
			return joaat("A_C_Horse_AmericanStandardbred_Buckskin");
		case joaat("BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE"):
			return joaat("A_C_Horse_AmericanStandardbred_PalominoDapple");
		case joaat("BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN"):
			return joaat("A_C_Horse_AmericanStandardbred_SilverTailBuckskin");
		case joaat("BREED_ANDALUSIAN_DARKBAY"):
			return joaat("A_C_Horse_Andalusian_DarkBay");
		case joaat("BREED_ANDALUSIAN_ROSEGRAY"):
			return joaat("A_C_Horse_Andalusian_RoseGray");
		case joaat("BREED_ANDALUSIAN_PERLINO"):
			return joaat("A_C_Horse_Andalusian_Perlino");
		case joaat("BREED_APPALOOSA_BLANKET"):
			return joaat("A_C_Horse_Appaloosa_Blanket");
		case joaat("BREED_APPALOOSA_LEOPARDBLANKET"):
			return joaat("A_C_Horse_Appaloosa_LeopardBlanket");
		case joaat("BREED_APPALOOSA_BROWNLEOPARD"):
			return joaat("A_C_Horse_Appaloosa_BrownLeopard");
		case joaat("BREED_APPALOOSA_LEOPARD"):
			return joaat("A_C_Horse_Appaloosa_Leopard");
		case joaat("BREED_ARABIAN_BLACK"):
			return joaat("A_C_Horse_Arabian_Black");
		case joaat("BREED_ARABIAN_ROSEGREYBAY"):
			return joaat("A_C_Horse_Arabian_RoseGreyBay");
		case joaat("BREED_ARABIAN_WHITE"):
			return joaat("A_C_Horse_Arabian_White");
		case joaat("BREED_ARDENNES_BAYROAN"):
			return joaat("A_C_Horse_Ardennes_BayRoan");
		case joaat("BREED_ARDENNES_STRAWBERRYROAN"):
			return joaat("A_C_Horse_Ardennes_StrawberryRoan");
		case joaat("BREED_ARDENNES_IRONGREYROAN"):
			return joaat("A_C_Horse_Ardennes_IronGreyRoan");
		case joaat("BREED_BELGIAN_BLONDCHESTNUT"):
			return joaat("A_C_Horse_Belgian_BlondChestnut");
		case joaat("BREED_BELGIAN_MEALYCHESTNUT"):
			return joaat("A_C_Horse_Belgian_MealyChestnut");
		case joaat("BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN"):
			return joaat("A_C_Horse_DutchWarmblood_SootyBuckskin");
		case joaat("BREED_DUTCHWARMBLOOD_SEALBROWN"):
			return joaat("A_C_Horse_DutchWarmblood_SealBrown");
		case joaat("BREED_DUTCHWARMBLOOD_CHOCOLATEROAN"):
			return joaat("A_C_Horse_DutchWarmblood_ChocolateRoan");
		case joaat("BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT"):
			return joaat("A_C_Horse_HungarianHalfbred_FlaxenChestnut");
		case joaat("BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO"):
			return joaat("A_C_Horse_HungarianHalfbred_PiebaldTobiano");
		case joaat("BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY"):
			return joaat("A_C_Horse_HungarianHalfbred_DarkDappleGrey");
		case -1955947684:
			return joaat("A_C_Horse_KentuckySaddle_Black");
		case joaat("BREED_KENTUCKYSADDLE_CHESTNUTPINTO"):
			return joaat("A_C_HORSE_KENTUCKYSADDLE_ChestnutPinto");
		case joaat("BREED_KENTUCKYSADDLE_GREY"):
			return joaat("A_C_HORSE_KENTUCKYSADDLE_Grey");
		case joaat("BREED_KENTUCKYSADDLE_SILVERBAY"):
			return joaat("A_C_HORSE_KENTUCKYSADDLE_SilverBay");
		case joaat("BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE"):
			return joaat("A_C_Horse_MissouriFoxTrotter_AmberChampagne");
		case joaat("BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO"):
			return joaat("A_C_Horse_MissouriFoxTrotter_SilverDapplePinto");
		case joaat("BREED_MORGAN_BAY"):
			return joaat("A_C_HORSE_Morgan_Bay");
		case joaat("BREED_MORGAN_BAYROAN"):
			return joaat("A_C_HORSE_Morgan_BayRoan");
		case joaat("BREED_MORGAN_FLAXENCHESTNUT"):
			return joaat("A_C_Horse_Morgan_FlaxenChestnut");
		case joaat("BREED_MORGAN_PALOMINO"):
			return joaat("A_C_Horse_Morgan_Palomino");
		case joaat("BREED_MUSTANG_GRULLODUN"):
			return joaat("A_C_Horse_Mustang_GrulloDun");
		case joaat("BREED_MUSTANG_WILDBAY"):
			return joaat("A_C_Horse_Mustang_WildBay");
		case joaat("BREED_MUSTANG_TIGERSTRIPEDBAY"):
			return joaat("A_C_Horse_Mustang_TigerStripedBay");
		case joaat("BREED_NOKOTA_BLUEROAN"):
			return joaat("A_C_Horse_Nokota_BlueRoan");
		case joaat("BREED_NOKOTA_WHITEROAN"):
			return joaat("A_C_Horse_Nokota_WhiteRoan");
		case joaat("BREED_NOKOTA_REVERSEDAPPLEROAN"):
			return joaat("A_C_HORSE_NOKOTA_REVERSEDAPPLEROAN");
		case joaat("BREED_SHIRE_DARKBAY"):
			return joaat("A_C_Horse_Shire_DarkBay");
		case joaat("BREED_SHIRE_LIGHTGREY"):
			return joaat("A_C_Horse_Shire_LightGrey");
		case joaat("BREED_SUFFOLKPUNCH_SORREL"):
			return joaat("A_C_Horse_SuffolkPunch_Sorrel");
		case joaat("BREED_SUFFOLKPUNCH_REDCHESTNUT"):
			return joaat("A_C_Horse_SuffolkPunch_RedChestnut");
		case joaat("BREED_TENNESSEEWALKER_BLACKRABICANO"):
			return joaat("A_C_Horse_TennesseeWalker_BlackRabicano");
		case joaat("BREED_TENNESSEEWALKER_CHESTNUT"):
			return joaat("A_C_Horse_TennesseeWalker_Chestnut");
		case joaat("BREED_TENNESSEEWALKER_DAPPLEBAY"):
			return joaat("A_C_HORSE_TENNESSEEWALKER_DAPPLEBAY");
		case joaat("BREED_TENNESSEEWALKER_REDROAN"):
			return joaat("A_C_Horse_TennesseeWalker_RedRoan");
		case joaat("BREED_TENNESSEEWALKER_FLAXENROAN"):
			return joaat("A_C_Horse_TennesseeWalker_FlaxenRoan");
		case joaat("BREED_THOROUGHBRED_BLOODBAY"):
			return joaat("A_C_Horse_Thoroughbred_BloodBay");
		case joaat("BREED_THOROUGHBRED_DAPPLEGREY"):
			return joaat("A_C_Horse_Thoroughbred_DappleGrey");
		case joaat("BREED_THOROUGHBRED_BRINDLE"):
			return joaat("A_C_Horse_Thoroughbred_Brindle");
		case joaat("BREED_THOROUGHBRED_BLACKCHESTNUT"):
			return joaat("A_C_Horse_Thoroughbred_BlackChestnut");
		case joaat("BREED_THOROUGHBRED_REVERSEDAPPLEBLACK"):
			return joaat("A_C_Horse_Thoroughbred_ReverseDappleBlack");
		case joaat("BREED_TURKOMAN_DARKBAY"):
			return joaat("A_C_Horse_Turkoman_DarkBay");
		case joaat("BREED_TURKOMAN_GOLD"):
			return joaat("A_C_Horse_Turkoman_Gold");
		case joaat("BREED_TURKOMAN_SILVER"):
			return joaat("A_C_Horse_Turkoman_Silver");
		case joaat("BREED_BRETON_REDROAN"):
			return joaat("A_C_Horse_Breton_RedRoan");
		case joaat("BREED_BRETON_SORREL"):
			return joaat("A_C_Horse_Breton_Sorrel");
		case joaat("BREED_BRETON_GRULLODUN"):
			return joaat("A_C_Horse_Breton_GrulloDun");
		case joaat("BREED_BRETON_SEALBROWN"):
			return joaat("A_C_Horse_Breton_SealBrown");
		case joaat("BREED_BRETON_MEALYDAPPLEBAY"):
			return joaat("A_C_Horse_Breton_MealyDappleBay");
		case joaat("BREED_BRETON_STEELGREY"):
			return joaat("A_C_Horse_Breton_SteelGrey");
		case joaat("BREED_CRIOLLO_BLUEROANOVERO"):
			return joaat("A_C_Horse_Criollo_BlueRoanOvero");
		case joaat("BREED_CRIOLLO_DUN"):
			return joaat("A_C_Horse_Criollo_Dun");
		case joaat("BREED_CRIOLLO_BAYBRINDLE"):
			return joaat("A_C_Horse_Criollo_BayBrindle");
		case joaat("BREED_CRIOLLO_SORRELOVERO"):
			return joaat("A_C_Horse_Criollo_SorrelOvero");
		case joaat("BREED_CRIOLLO_BAYFRAMEOVERO"):
			return joaat("A_C_Horse_Criollo_BayFrameOvero");
		case joaat("BREED_CRIOLLO_MARBLESABINO"):
			return joaat("A_C_Horse_Criollo_MarbleSabino");
		case joaat("BREED_KLADRUBER_BLACK"):
			return joaat("A_C_Horse_Kladruber_Black");
		case joaat("BREED_KLADRUBER_WHITE"):
			return joaat("A_C_Horse_Kladruber_White");
		case joaat("BREED_KLADRUBER_CREMELLO"):
			return joaat("A_C_Horse_Kladruber_Cremello");
		case joaat("BREED_KLADRUBER_GREY"):
			return joaat("A_C_Horse_Kladruber_Grey");
		case joaat("BREED_KLADRUBER_DAPPLEROSEGREY"):
			return joaat("A_C_Horse_Kladruber_DappleRoseGrey");
		case joaat("BREED_KLADRUBER_SILVER"):
			return joaat("A_C_Horse_Kladruber_Silver");
		case joaat("BREED_NORFOLKROADSTER_BLACK"):
			return 1007570567;
		case joaat("BREED_NORFOLKROADSTER_SPECKLEDGREY"):
			return 1029339151;
		case joaat("BREED_NORFOLKROADSTER_PIEBALDROAN"):
			return -1424767799;
		case joaat("BREED_NORFOLKROADSTER_ROSEGREY"):
			return -217135948;
		case joaat("BREED_NORFOLKROADSTER_DAPPLEDBUCKSKIN"):
			return -156439156;
		case joaat("BREED_NORFOLKROADSTER_SPOTTEDTRICOLOR"):
			return 1344011125;
		case joaat("BREED_DONKEY"):
			return joaat("A_C_Donkey_01");
		case joaat("BREED_MULE"):
			return joaat("A_C_HorseMule_01");
		case joaat("BREED_MULE_PAINTED"):
			return joaat("A_C_HorseMulePainted_01");
		case joaat("BREED_AMERICANSTANDARDBRED_LIGHTBUCKSKIN"):
			return joaat("A_C_Horse_AmericanStandardbred_LightBuckskin");
		case joaat("BREED_APPALOOSA_BLACKSNOWFLAKE"):
			return joaat("A_C_Horse_Appaloosa_BlackSnowflake");
		case joaat("BREED_ARABIAN_GREY"):
			return joaat("A_C_Horse_Arabian_Grey");
		case joaat("BREED_ARABIAN_REDCHESTNUT"):
			return joaat("A_C_HORSE_ARABIAN_REDCHESTNUT");
		case joaat("BREED_HUNGARIANHALFBRED_LIVERCHESTNUT"):
			return joaat("A_C_Horse_HungarianHalfbred_LiverChestnut");
		case joaat("BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE"):
			return joaat("A_C_Horse_MissouriFoxTrotter_SableChampagne");
		case joaat("BREED_MUSTANG_GOLDENDUN"):
			return joaat("A_C_Horse_Mustang_GoldenDun");
		case joaat("BREED_TENNESSEEWALKER_MAHOGANYBAY"):
			return joaat("A_C_Horse_TennesseeWalker_MahoganyBay");
		case joaat("BREED_SHIRE_RAVENBLACK"):
			return joaat("A_C_Horse_Shire_RavenBlack");
		case joaat("BREED_BUELL_WARVETS"):
			return joaat("A_C_Horse_Buell_WarVets");
		case joaat("BREED_JOHN_ENDLESSSUMMER"):
			return joaat("A_C_Horse_John_EndlessSummer");
		case joaat("BREED_MURFREEBROOD_MANGE_01"):
			return joaat("A_C_Horse_MurfreeBrood_Mange_01");
		case joaat("BREED_MURFREEBROOD_MANGE_02"):
			return joaat("A_C_Horse_MurfreeBrood_Mange_02");
		case joaat("BREED_MURFREEBROOD_MANGE_03"):
			return joaat("A_C_Horse_MurfreeBrood_Mange_03");
		case joaat("BREED_WINTER02_01"):
			return joaat("A_C_Horse_WINTER02_01");
		case joaat("BREED_MANGY_BACKUP"):
			return joaat("A_C_Horse_MP_Mangy_Backup");
		default:
			break;
	}
	return 0;
}

int func_171(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	iVar0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iParam0, func_229());
	return iVar0;
}

int func_172(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	iVar0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iParam0, func_230());
	return iVar0;
}

int func_173(int iParam0)
{
	int iVar0;

	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		return 0;
	}
	iVar0 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_RANK(iParam0, func_229());
	return iVar0;
}

int func_174(int iParam0)
{
	int iVar0;

	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		return 0;
	}
	iVar0 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_RANK(iParam0, func_230());
	return iVar0;
}

int func_175(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	int iVar0;

	if (!func_231(&uParam0, &iVar0))
	{
		return 0;
	}
	return &((Global_17172.f_54.f_61.f_41[iVar0 /*54*/])->f_29[iParam4 /*4*/]);
}

void func_176(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	struct<2> Var14;
	vector3 vVar36;
	int iVar43;
	int iVar44;
	struct<2> Var45;
	vector3 vVar67;
	int iVar74;

	Var0.f_9 = -1591664384;
	if (func_232(*uParam0, -415648720, &Var0, 1, -1))
	{
		if (func_203(Var0.f_4, 0))
		{
			Var14.f_1 = 20;
			if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(Var0.f_4, &Var14) && Var14 > 0)
			{
				iVar43 = 0;
				while (iVar43 < Var14)
				{
					if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(&(Var14.f_1[iVar43]), &vVar36))
					{
						if (vVar36.y == -1620444701)
						{
							*iParam1 = (*iParam1 + vVar36.z);
						}
						else if (vVar36.y == 2086291460)
						{
							*iParam2 = (*iParam2 + vVar36.z);
						}
					}
					iVar43++;
				}
			}
		}
		iVar44 = func_184(Var0, 986998820, 0, -1);
		if (func_203(iVar44, 0))
		{
			Var45.f_1 = 20;
			if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iVar44, &Var45) && Var45 > 0)
			{
				iVar74 = 0;
				while (iVar74 < Var45)
				{
					if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(&(Var45.f_1[iVar74]), &vVar67))
					{
						if (vVar67.y == -1620444701)
						{
							*iParam1 = (*iParam1 + vVar67.z);
						}
						else if (vVar67.y == 2086291460)
						{
							*iParam2 = (*iParam2 + vVar67.z);
						}
					}
					iVar74++;
				}
			}
		}
	}
}

int func_177(int iParam0)
{
	int iVar0;

	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		return 0;
	}
	iVar0 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_RANK(iParam0, func_233());
	return iVar0;
}

int func_178(int iParam0)
{
	int iVar0;

	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		return 0;
	}
	iVar0 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_RANK(iParam0, func_234());
	return iVar0;
}

int func_179(int iParam0)
{
	int iVar0;

	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		return -1;
	}
	iVar0 = func_235(iParam0);
	switch (iVar0)
	{
		case 0:
		case 1:
			return 0;
		case 2:
		case 3:
			return 1;
		case 4:
		case 5:
			return 2;
		case 6:
		case 7:
		case 8:
		case 9:
			return 3;
	}
	return -1;
}

char* func_180(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HORSE_HANDLING_HEAVY";
		case 1:
			return "HORSE_HANDLING_STANDARD";
		case 2:
			return "HORSE_HANDLING_RACE";
		case 3:
			return "HORSE_HANDLING_ELITE";
		default:
			break;
	}
	return "";
}

void func_181(bool bParam0, float fParam1, bool bParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1954472->f_5.f_425.f_12, bParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_FLOAT(Global_1954472->f_5.f_425.f_13, fParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1954472->f_5.f_425.f_14, bParam2);
}

void func_182(bool bParam0, float fParam1, bool bParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1954472->f_5.f_425.f_15, bParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_FLOAT(Global_1954472->f_5.f_425.f_16, fParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1954472->f_5.f_425.f_17, bParam2);
}

int func_183(int iParam0, int iParam1, int iParam2)
{
	if (!func_196(iParam0, iParam1, 1, 1))
	{
		return 0;
	}
	if (!func_197(Global_1903929))
	{
		return 0;
	}
	return func_236(Global_1903929, iParam2);
}

int func_184(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, int iParam6)
{
	return func_237(&uParam0, bParam4, bParam5, iParam6);
}

int func_185(int iParam0)
{
	if (iParam0 == joaat("A_C_Horse_MP_Mangy_Backup"))
	{
		return 779169510;
	}
	switch (iParam0)
	{
		case joaat("A_C_Horse_AmericanPaint_Overo"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_Horse_AmericanPaint_Tobiano"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_Horse_AmericanPaint_SplashedWhite"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_Horse_AmericanPaint_Greyovero"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_Horse_AmericanStandardbred_Black"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_Horse_AmericanStandardbred_Buckskin"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_Horse_AmericanStandardbred_PalominoDapple"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_Horse_AmericanStandardbred_SilverTailBuckskin"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_Horse_Andalusian_DarkBay"):
			return joaat("HORSE_CLASS_WAR");
		case joaat("A_C_Horse_Andalusian_RoseGray"):
			return joaat("HORSE_CLASS_WAR");
		case joaat("A_C_Horse_Andalusian_Perlino"):
			return joaat("HORSE_CLASS_WAR");
		case joaat("A_C_Horse_Appaloosa_Blanket"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_Horse_Appaloosa_LeopardBlanket"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_Horse_Appaloosa_BrownLeopard"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_Horse_Appaloosa_Leopard"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_Horse_Arabian_Black"):
			return joaat("HORSE_CLASS_SUPERIOR");
		case joaat("A_C_Horse_Arabian_RoseGreyBay"):
			return joaat("HORSE_CLASS_SUPERIOR");
		case joaat("A_C_Horse_Arabian_White"):
			return joaat("HORSE_CLASS_SUPERIOR");
		case joaat("A_C_Horse_Ardennes_BayRoan"):
			return joaat("HORSE_CLASS_WAR");
		case joaat("A_C_Horse_Ardennes_StrawberryRoan"):
			return joaat("HORSE_CLASS_WAR");
		case joaat("A_C_Horse_Ardennes_IronGreyRoan"):
			return joaat("HORSE_CLASS_WAR");
		case joaat("A_C_Horse_Belgian_BlondChestnut"):
			return joaat("HORSE_CLASS_DRAFT");
		case joaat("A_C_Horse_Belgian_MealyChestnut"):
			return joaat("HORSE_CLASS_DRAFT");
		case joaat("A_C_Horse_DutchWarmblood_SootyBuckskin"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_Horse_DutchWarmblood_SealBrown"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_Horse_DutchWarmblood_ChocolateRoan"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_Horse_HungarianHalfbred_FlaxenChestnut"):
			return joaat("HORSE_CLASS_WAR");
		case joaat("A_C_Horse_HungarianHalfbred_PiebaldTobiano"):
			return joaat("HORSE_CLASS_WAR");
		case joaat("A_C_Horse_HungarianHalfbred_DarkDappleGrey"):
			return joaat("HORSE_CLASS_WAR");
		case joaat("A_C_Horse_KentuckySaddle_Black"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_ChestnutPinto"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_Grey"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_SilverBay"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_Horse_MissouriFoxTrotter_AmberChampagne"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_Horse_MissouriFoxTrotter_SilverDapplePinto"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_Morgan_Bay"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_Morgan_BayRoan"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_Horse_Morgan_FlaxenChestnut"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_Horse_Morgan_Palomino"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_Horse_Mustang_GrulloDun"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_Horse_Mustang_WildBay"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_Horse_Mustang_TigerStripedBay"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_Horse_Nokota_BlueRoan"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_Horse_Nokota_WhiteRoan"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_HORSE_NOKOTA_REVERSEDAPPLEROAN"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_Horse_Shire_DarkBay"):
			return joaat("HORSE_CLASS_DRAFT");
		case joaat("A_C_Horse_Shire_LightGrey"):
			return joaat("HORSE_CLASS_DRAFT");
		case joaat("A_C_Horse_SuffolkPunch_Sorrel"):
			return joaat("HORSE_CLASS_DRAFT");
		case joaat("A_C_Horse_SuffolkPunch_RedChestnut"):
			return joaat("HORSE_CLASS_DRAFT");
		case joaat("A_C_Horse_TennesseeWalker_BlackRabicano"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_Horse_TennesseeWalker_Chestnut"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_TENNESSEEWALKER_DAPPLEBAY"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_Horse_TennesseeWalker_RedRoan"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_Horse_TennesseeWalker_FlaxenRoan"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_Horse_Thoroughbred_BloodBay"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_Horse_Thoroughbred_DappleGrey"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_Horse_Thoroughbred_Brindle"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_Horse_Thoroughbred_BlackChestnut"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_Horse_Thoroughbred_ReverseDappleBlack"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_Horse_Turkoman_DarkBay"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_Horse_Turkoman_Gold"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_Horse_Turkoman_Silver"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_Horse_Breton_RedRoan"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_Horse_Breton_Sorrel"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_Horse_Breton_GrulloDun"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_Horse_Breton_SealBrown"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_Horse_Breton_MealyDappleBay"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_Horse_Breton_SteelGrey"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_Horse_Criollo_BlueRoanOvero"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_Horse_Criollo_Dun"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_Horse_Criollo_BayBrindle"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_Horse_Criollo_SorrelOvero"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_Horse_Criollo_BayFrameOvero"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_Horse_Criollo_MarbleSabino"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_Horse_Kladruber_Black"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_Horse_Kladruber_White"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_Horse_Kladruber_Cremello"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_Horse_Kladruber_Grey"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_Horse_Kladruber_DappleRoseGrey"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_Horse_Kladruber_Silver"):
			return joaat("HORSE_CLASS_MULTI");
		case 1007570567:
			return joaat("HORSE_CLASS_MULTI");
		case 1029339151:
			return joaat("HORSE_CLASS_MULTI");
		case -1424767799:
			return joaat("HORSE_CLASS_MULTI");
		case -217135948:
			return joaat("HORSE_CLASS_MULTI");
		case -156439156:
			return joaat("HORSE_CLASS_MULTI");
		case 1344011125:
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_Donkey_01"):
			return joaat("HORSE_CLASS_OTHER");
		case joaat("A_C_HorseMule_01"):
			return joaat("HORSE_CLASS_OTHER");
		case joaat("A_C_HorseMulePainted_01"):
			return joaat("HORSE_CLASS_OTHER");
		case joaat("A_C_Horse_AmericanStandardbred_LightBuckskin"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_Horse_Appaloosa_BlackSnowflake"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_Horse_Arabian_Grey"):
			return joaat("HORSE_CLASS_SUPERIOR");
		case joaat("A_C_HORSE_ARABIAN_REDCHESTNUT"):
			return joaat("HORSE_CLASS_SUPERIOR");
		case joaat("A_C_Horse_HungarianHalfbred_LiverChestnut"):
			return joaat("HORSE_CLASS_WAR");
		case joaat("A_C_Horse_MissouriFoxTrotter_SableChampagne"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_Horse_Mustang_GoldenDun"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_Horse_TennesseeWalker_MahoganyBay"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_Horse_Shire_RavenBlack"):
			return joaat("HORSE_CLASS_DRAFT");
		case joaat("A_C_Horse_Buell_WarVets"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_Horse_John_EndlessSummer"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_Horse_MurfreeBrood_Mange_01"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_Horse_MurfreeBrood_Mange_02"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_Horse_MurfreeBrood_Mange_03"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_Horse_WINTER02_01"):
			return joaat("HORSE_CLASS_RACE");
		default:
			break;
	}
	return 779169510;
}

char* func_186(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("HORSE_CLASS_RIDING"):
			return "HORSE_CLASS_RIDING";
		case joaat("HORSE_CLASS_DRAFT"):
			return "HORSE_CLASS_DRAFT";
		case joaat("HORSE_CLASS_RACE"):
			return "HORSE_CLASS_RACE";
		case joaat("HORSE_CLASS_WAR"):
			return "HORSE_CLASS_WAR";
		case joaat("HORSE_CLASS_WORK"):
			return "HORSE_CLASS_WORK";
		case joaat("HORSE_CLASS_MULTI"):
			return func_238(iParam1);
		case joaat("HORSE_CLASS_SUPERIOR"):
			return "HORSE_CLASS_SUPERIOR";
		case joaat("HORSE_CLASS_OTHER"):
			return "HORSE_CLASS_OTHER";
		default:
			break;
	}
	return "";
}

char* func_187(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "HORSE_GENDER_MALE";
		case 2:
			return "HORSE_GENDER_FEMALE";
	}
	return "HORSE_GENDER_UNKNOWN";
}

char* func_188(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BREED_AMERICANPAINT_OVERO"):
			return "COAT_OVERO";
		case joaat("BREED_AMERICANPAINT_TOBIANO"):
			return "COAT_TOB";
		case joaat("BREED_AMERICANPAINT_SPLASHEDWHITE"):
			return "COAT_SPLASHWHITE";
		case joaat("BREED_AMERICANPAINT_GREYOVERO"):
			return "COAT_GREYOVERO";
		case joaat("BREED_AMERICANSTANDARDBRED_BLACK"):
			return "COAT_BLACK";
		case joaat("BREED_AMERICANSTANDARDBRED_BUCKSKIN"):
			return "COAT_BUCKSKIN";
		case joaat("BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE"):
			return "COAT_PALDAP";
		case joaat("BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN"):
			return "COAT_SILVERTAILBUCKSKIN";
		case joaat("BREED_ANDALUSIAN_DARKBAY"):
			return "COAT_DARKBAY";
		case joaat("BREED_ANDALUSIAN_PERLINO"):
			return "COAT_PERLINO";
		case joaat("BREED_ANDALUSIAN_ROSEGRAY"):
			return "COAT_ROSEGREY";
		case joaat("BREED_APPALOOSA_BLANKET"):
			return "COAT_BLANKET";
		case joaat("BREED_APPALOOSA_LEOPARDBLANKET"):
			return "COAT_LEOPBLANKET";
		case joaat("BREED_APPALOOSA_BROWNLEOPARD"):
			return "COAT_BRLEOP";
		case joaat("BREED_APPALOOSA_LEOPARD"):
			return "COAT_LEOP";
		case joaat("BREED_ARABIAN_BLACK"):
			return "COAT_BLACK";
		case joaat("BREED_ARABIAN_ROSEGREYBAY"):
			return "COAT_ROSEGREYBAY";
		case joaat("BREED_ARABIAN_WHITE"):
			return "COAT_WHITE";
		case joaat("BREED_ARDENNES_BAYROAN"):
			return "COAT_BAYR";
		case joaat("BREED_ARDENNES_STRAWBERRYROAN"):
			return "COAT_STRAWR";
		case joaat("BREED_ARDENNES_IRONGREYROAN"):
			return "COAT_IRONGREYR";
		case joaat("BREED_BELGIAN_BLONDCHESTNUT"):
			return "COAT_BLONDCH";
		case joaat("BREED_BELGIAN_MEALYCHESTNUT"):
			return "COAT_MEALYCH";
		case joaat("BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN"):
			return "COAT_SOOTYBUCKSKIN";
		case joaat("BREED_DUTCHWARMBLOOD_SEALBROWN"):
			return "COAT_SEALBR";
		case joaat("BREED_DUTCHWARMBLOOD_CHOCOLATEROAN"):
			return "COAT_CHOCR";
		case joaat("BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT"):
			return "COAT_FLAXCH";
		case joaat("BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO"):
			return "COAT_PIETOB";
		case joaat("BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY"):
			return "COAT_DAPDARKGREY";
		case -1955947684:
			return "COAT_BLACK";
		case joaat("BREED_KENTUCKYSADDLE_CHESTNUTPINTO"):
			return "COAT_CHPIN";
		case joaat("BREED_KENTUCKYSADDLE_GREY"):
			return "COAT_GREY";
		case joaat("BREED_KENTUCKYSADDLE_SILVERBAY"):
			return "COAT_SILVERBAY";
		case joaat("BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE"):
			return "COAT_AMBCHA";
		case joaat("BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO"):
			return "COAT_SILVERDAPPINT";
		case joaat("BREED_MORGAN_BAY"):
			return "COAT_BAY";
		case joaat("BREED_MORGAN_BAYROAN"):
			return "COAT_BAYR";
		case joaat("BREED_MORGAN_FLAXENCHESTNUT"):
			return "COAT_FLAXCH";
		case joaat("BREED_MORGAN_PALOMINO"):
			return "COAT_PAL";
		case joaat("BREED_MUSTANG_GRULLODUN"):
			return "COAT_GRULDUN";
		case joaat("BREED_MUSTANG_WILDBAY"):
			return "COAT_WILDBAY";
		case joaat("BREED_MUSTANG_TIGERSTRIPEDBAY"):
			return "COAT_TIGSTRBAY";
		case joaat("BREED_NOKOTA_BLUEROAN"):
			return "COAT_BLUER";
		case joaat("BREED_NOKOTA_WHITEROAN"):
			return "COAT_WHITER";
		case joaat("BREED_NOKOTA_REVERSEDAPPLEROAN"):
			return "COAT_REVDAPR";
		case joaat("BREED_SHIRE_DARKBAY"):
			return "COAT_DARKBAY";
		case joaat("BREED_SHIRE_LIGHTGREY"):
			return "COAT_LGREY";
		case joaat("BREED_SUFFOLKPUNCH_SORREL"):
			return "COAT_SORREL";
		case joaat("BREED_SUFFOLKPUNCH_REDCHESTNUT"):
			return "COAT_REDCH";
		case joaat("BREED_TENNESSEEWALKER_BLACKRABICANO"):
			return "COAT_BLACKRAB";
		case joaat("BREED_TENNESSEEWALKER_CHESTNUT"):
			return "COAT_CH";
		case joaat("BREED_TENNESSEEWALKER_DAPPLEBAY"):
			return "COAT_DAPBAY";
		case joaat("BREED_TENNESSEEWALKER_REDROAN"):
			return "COAT_REDR";
		case joaat("BREED_TENNESSEEWALKER_FLAXENROAN"):
			return "COAT_FLAXR";
		case joaat("BREED_THOROUGHBRED_BLOODBAY"):
			return "COAT_BLBAY";
		case joaat("BREED_THOROUGHBRED_DAPPLEGREY"):
			return "COAT_DAPGREY";
		case joaat("BREED_THOROUGHBRED_BRINDLE"):
			return "COAT_BRINDLE";
		case joaat("BREED_THOROUGHBRED_BLACKCHESTNUT"):
			return "COAT_BLACKCH";
		case joaat("BREED_THOROUGHBRED_REVERSEDAPPLEBLACK"):
			return "COAT_REVDAPBLACK";
		case joaat("BREED_TURKOMAN_DARKBAY"):
			return "COAT_DARKBAY";
		case joaat("BREED_TURKOMAN_GOLD"):
			return "COAT_GOLD";
		case joaat("BREED_TURKOMAN_SILVER"):
			return "COAT_SILVER";
		case joaat("BREED_BRETON_REDROAN"):
			return "COAT_REDR";
		case joaat("BREED_BRETON_SORREL"):
			return "COAT_SORREL";
		case joaat("BREED_BRETON_GRULLODUN"):
			return "COAT_GRULDUN";
		case joaat("BREED_BRETON_SEALBROWN"):
			return "COAT_SEALBR";
		case joaat("BREED_BRETON_MEALYDAPPLEBAY"):
			return "COAT_MEALYDAPBAY";
		case joaat("BREED_BRETON_STEELGREY"):
			return "COAT_STEELGREY";
		case joaat("BREED_CRIOLLO_BLUEROANOVERO"):
			return "COAT_BLUEROANOVERO";
		case joaat("BREED_CRIOLLO_DUN"):
			return "COAT_DUN";
		case joaat("BREED_CRIOLLO_BAYBRINDLE"):
			return "COAT_BAYBRINDLE";
		case joaat("BREED_CRIOLLO_SORRELOVERO"):
			return "COAT_SORRELOVERO";
		case joaat("BREED_CRIOLLO_BAYFRAMEOVERO"):
			return "COAT_BAYFRAMEOVERO";
		case joaat("BREED_CRIOLLO_MARBLESABINO"):
			return "COAT_MARBLESABINO";
		case joaat("BREED_KLADRUBER_BLACK"):
			return "COAT_BLACK";
		case joaat("BREED_KLADRUBER_WHITE"):
			return "COAT_WHITE";
		case joaat("BREED_KLADRUBER_CREMELLO"):
			return "COAT_CREM";
		case joaat("BREED_KLADRUBER_GREY"):
			return "COAT_GREY";
		case joaat("BREED_KLADRUBER_DAPPLEROSEGREY"):
			return "COAT_DAPROSEGREY";
		case joaat("BREED_KLADRUBER_SILVER"):
			return "COAT_SILVER";
		case joaat("BREED_NORFOLKROADSTER_BLACK"):
			return "COAT_BLACK";
		case joaat("BREED_NORFOLKROADSTER_SPECKLEDGREY"):
			return "COAT_SPECKLEDGREY";
		case joaat("BREED_NORFOLKROADSTER_PIEBALDROAN"):
			return "COAT_PIEROAN";
		case joaat("BREED_NORFOLKROADSTER_ROSEGREY"):
			return "COAT_ROSEGREY";
		case joaat("BREED_NORFOLKROADSTER_DAPPLEDBUCKSKIN"):
			return "COAT_DAPBUCKSKIN";
		case joaat("BREED_NORFOLKROADSTER_SPOTTEDTRICOLOR"):
			return "COAT_SPOTTEDTRICOLOR";
		case joaat("BREED_DONKEY"):
			return "COAT_NONE";
		case joaat("BREED_MULE"):
			return "COAT_NONE";
		case joaat("BREED_MULE_PAINTED"):
			return "COAT_NONE";
		case joaat("BREED_AMERICANSTANDARDBRED_LIGHTBUCKSKIN"):
			return "COAT_LIGHTBUCKSKIN";
		case joaat("BREED_APPALOOSA_BLACKSNOWFLAKE"):
			return "COAT_BLACKSNO";
		case joaat("BREED_ARABIAN_GREY"):
			return "COAT_GREY";
		case joaat("BREED_ARABIAN_REDCHESTNUT"):
			return "COAT_REDCH";
		case joaat("BREED_HUNGARIANHALFBRED_LIVERCHESTNUT"):
			return "COAT_LIVERCH";
		case joaat("BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE"):
			return "COAT_SABLECHAMP";
		case joaat("BREED_MUSTANG_GOLDENDUN"):
			return "COAT_GOLDENDUN";
		case joaat("BREED_TENNESSEEWALKER_MAHOGANYBAY"):
			return "COAT_MAHBAY";
		case joaat("BREED_SHIRE_RAVENBLACK"):
			return "COAT_RAVBLACK";
		case joaat("BREED_BUELL_WARVETS"):
			return "COAT_CHEMGOLD";
		case joaat("BREED_JOHN_ENDLESSSUMMER"):
			return "COAT_SEALBR";
		case joaat("BREED_MURFREEBROOD_MANGE_01"):
			return "COAT_BLANKET";
		case joaat("BREED_MURFREEBROOD_MANGE_02"):
			return "COAT_BLUER";
		case joaat("BREED_MURFREEBROOD_MANGE_03"):
			return "COAT_BLACKRAB";
		case joaat("BREED_WINTER02_01"):
			return "COAT_SILVERBAY";
		case joaat("BREED_EAGLEFLIES"):
			return "COAT_SPLASHWHITE";
		case joaat("BREED_GANG_BILL"):
			return "COAT_BROWNR";
		case joaat("BREED_GANG_CHARLES"):
			return "COAT_GREYSNOWCAPSPOTTED";
		case joaat("BREED_GANG_CHARLES_ENDLESSSUMMER"):
			return "COAT_GREYROANSABINO";
		case joaat("BREED_GANG_DUTCH"):
			return "COAT_ALBINO";
		case joaat("BREED_GANG_HOSEA"):
			return "COAT_SILVER";
		case joaat("BREED_GANG_JAVIER"):
			return "COAT_GREYOVERO";
		case joaat("BREED_GANG_JOHN"):
			return "COAT_SILVERDARKBAY";
		case joaat("BREED_GANG_KAREN"):
			return "COAT_SMOKYBLACK";
		case joaat("BREED_GANG_KIERAN"):
			return "COAT_FLAXR";
		case joaat("BREED_GANG_LENNY"):
			return "COAT_LIGHTPALOMINO";
		case joaat("BREED_GANG_MICAH"):
			return "COAT_BLACK";
		case joaat("BREED_GANG_SADIE"):
			return "COAT_GOLDDAP";
		case joaat("BREED_GANG_SADIE_ENDLESSSUMMER"):
			return "COAT_DARKBAYROAN";
		case joaat("BREED_GANG_SEAN"):
			return "COAT_SILVERTAILBUCKSKIN";
		case joaat("BREED_GANG_TRELAWNEY"):
			return "COAT_BRLEOP";
		case joaat("BREED_GANG_UNCLE"):
			return "COAT_SABINO";
		case joaat("BREED_GANG_UNCLE_ENDLESSSUMMER"):
			return "COAT_FEWSPOTBUCKSKIN";
		case joaat("BREED_MANGY_BACKUP"):
			return "COAT_MANGY";
		default:
			break;
	}
	return "";
}

int func_189(int iParam0, int iParam1)
{
	int iVar0;

	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		iParam0 = joaat("A_C_Horse_TennesseeWalker_Chestnut");
	}
	iVar0 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iParam0, 7, iParam1);
	return iVar0;
}

void func_190(bool bParam0, var uParam1, int iParam2)
{
	float fVar0;
	char* sVar1;

	fVar0 = (func_239(*uParam1, iParam2) * 100f);
	sVar1 = func_240(0 == iParam2, "RPG_Horse_Health", "RPG_Horse_Stamina");
	if (fVar0 > 0f)
	{
		func_157(bParam0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", BUILTIN::ROUND(fVar0)), 1, 0, 1, 0, 0, 0, 0, sVar1);
		func_167(bParam0, "RPG_ARROW_DOWN", 0);
	}
	else if (fVar0 == 0f)
	{
		func_157(bParam0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", BUILTIN::ROUND(fVar0)), 1, 0, 0, 0, 0, 0, 0, sVar1);
	}
	else
	{
		func_157(bParam0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_VALUE", BUILTIN::ROUND(fVar0)), 1, 0, 0, 0, 0, 0, 0, sVar1);
		func_167(bParam0, "RPG_ARROW_UP", 0);
	}
}

void func_191()
{
	int iVar0;
	struct<4> Var1;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	struct<2> Var10;
	struct<6> Var32;
	int iVar39;

	Var1 = { func_19(0, 1, 0, -1) };
	iVar0 = func_241(Var1, -415648720, 0, 0);
	if (!func_203(iVar0, 0))
	{
		return;
	}
	Var10.f_1 = 20;
	ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iVar0, &Var10);
	iVar39 = 0;
	while (iVar39 < Var10)
	{
		ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(&(Var10.f_1[iVar39]), &Var32);
		switch (Var32.f_1)
		{
			case 2086291460:
				iVar8 = (iVar8 + BUILTIN::FLOOR((IntToFloat(Var32.f_2) * 0.01f)));
				break;
			case -1620444701:
				iVar9 = (iVar9 + BUILTIN::FLOOR((IntToFloat(Var32.f_2) * 0.01f)));
				break;
			case 1605773431:
				fVar5 = Var32.f_5;
				break;
			case 1167068375:
				fVar6 = Var32.f_5;
				break;
			case -225223329:
				fVar7 = Var32.f_5;
				break;
		}
		iVar39++;
	}
	func_157(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_ACCELERATION"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PLUS_VALUE", iVar8), 0, 0, 0, 0, 0, 0, 0, 0);
	func_157(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_SPEED"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PLUS_VALUE", iVar9), 0, 0, 0, 0, 0, 0, 0, 0);
	if (fVar5 >= 0f)
	{
		func_157(2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_REGEN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", BUILTIN::ROUND(fVar5)), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
	}
	else
	{
		func_157(2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_REGEN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_MINUS_VALUE", BUILTIN::ROUND(MISC::ABSF(fVar5))), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
	}
	if (fVar6 <= 0f)
	{
		func_157(3, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", BUILTIN::ROUND(fVar6)), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
		if (fVar6 < 0f)
		{
			func_167(3, "RPG_ARROW_DOWN", 0);
		}
	}
	else
	{
		func_157(3, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_MINUS_VALUE", BUILTIN::ROUND(MISC::ABSF(fVar6))), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
		func_167(3, "RPG_ARROW_UP", 0);
	}
	if (fVar7 <= 0f)
	{
		func_157(4, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", BUILTIN::ROUND(fVar7)), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Health");
		if (fVar7 < 0f)
		{
			func_167(4, "RPG_ARROW_DOWN", 0);
		}
	}
	else
	{
		func_157(4, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_MINUS_VALUE", BUILTIN::ROUND(MISC::ABSF(fVar7))), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Health");
		func_167(4, "RPG_ARROW_UP", 0);
	}
}

void func_192()
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	struct<4> Var6;
	int iVar10;
	int iVar11;
	float fVar12;
	struct<2> Var13;
	struct<6> Var35;
	int iVar42;

	Var2 = { func_19(0, 1, 0, -1) };
	iVar1 = func_241(Var2, -415648720, 0, 0);
	if (!func_203(iVar1, 0))
	{
		return;
	}
	Var6 = { func_242(iVar1, Var2, -415648720, 0) };
	iVar0 = func_184(Var6, 986998820, 0, -1);
	if (!func_203(iVar0, 0))
	{
		return;
	}
	Var13.f_1 = 20;
	ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iVar0, &Var13);
	iVar42 = 0;
	while (iVar42 < Var13)
	{
		ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(&(Var13.f_1[iVar42]), &Var35);
		switch (Var35.f_1)
		{
			case 2086291460:
				iVar10 = (iVar10 + BUILTIN::FLOOR((IntToFloat(Var35.f_2) * 0.01f)));
				break;
			case -1620444701:
				iVar11 = (iVar11 + BUILTIN::FLOOR((IntToFloat(Var35.f_2) * 0.01f)));
				break;
			case -845587290:
				fVar12 = (fVar12 + Var35.f_5);
				break;
		}
		iVar42++;
	}
	func_157(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_ACCELERATION"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PLUS_VALUE", iVar10), 0, 0, 0, 0, 0, 0, 0, 0);
	func_157(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_SPEED"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PLUS_VALUE", iVar11), 0, 0, 0, 0, 0, 0, 0, 0);
	if (fVar12 <= 0f)
	{
		func_157(2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", BUILTIN::ROUND(fVar12)), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
	}
	else
	{
		func_157(2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_MINUS_VALUE", BUILTIN::ROUND(MISC::ABSF(fVar12))), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
	}
}

char* func_193(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_243(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

int func_194(bool bParam0)
{
	if (func_244() == -1)
	{
		if (!bParam0 && INVENTORY::_0x7C7E4AB748EA3B07())
		{
			return 5;
		}
		return 1;
	}
	if (!bParam0 && INVENTORY::_0x13D234A2A3F66E63(PLAYER::PLAYER_PED_ID()) == 3)
	{
		return 3;
	}
	return 2;
}

struct<2> func_195(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

int func_196(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (iParam1 == -1)
	{
		return 0;
	}
	func_217(Global_1903929);
	switch (iParam1)
	{
		case 0:
		case 1:
			if (!func_245(iParam0, Global_1903929, &(Global_1903929->f_71), bParam3))
			{
				return 0;
			}
			break;
		case 2:
			if (!func_246(iParam0, Global_1903929, &(Global_1903929->f_100), bParam3))
			{
				return 0;
			}
			break;
	}
	if (bParam2)
	{
		func_220(Global_1903929);
	}
	return 1;
}

int func_197(int iParam0)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		return 0;
	}
	if (iParam0->f_10 == -1)
	{
		return 0;
	}
	return 1;
}

int func_198(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0 + 1;
		iVar2 = func_189(iParam0, iVar1);
		if (iParam1 < iVar2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4;
}

int func_199(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			*iParam1 = 16;
			break;
		case 1:
			*iParam1 = 8;
			break;
		case 2:
			*iParam1 = 13;
			break;
		default:
			return 0;
	}
	return 1;
}

int func_200(int iParam0)
{
	struct<4> Var0;
	struct<10> Var4;
	bool bVar18;
	int iVar19;

	Var0 = { func_77() };
	if (INVENTORY::_0x4C543D5DFCD2DAFD(iParam0, &Var0))
	{
		return 0;
	}
	Var4.f_9 = -1591664384;
	iVar19 = 0;
	while (iVar19 < 10)
	{
		if (INVENTORY::_0x4C543D5DFCD2DAFD(Global_17172.f_54.f_61.f_41[iVar19 /*54*/], iParam0))
		{
			bVar18 = true;
		}
		else if (INVENTORY::_0x4C543D5DFCD2DAFD(Global_17172.f_54.f_61.f_41[iVar19 /*54*/], &Var0))
		{
			func_247(Global_17172.f_54.f_61.f_41[iVar19 /*54*/]);
			*(Global_17172.f_54.f_61.f_41[iVar19 /*54*/]) = { *iParam0 };
			bVar18 = true;
		}
		else
		{
			if (func_248(*(Global_17172.f_54.f_61.f_41[iVar19 /*54*/]), &Var4, 1, 1, -1))
			{
			}
			else
			{
				func_247(Global_17172.f_54.f_61.f_41[iVar19 /*54*/]);
				*(Global_17172.f_54.f_61.f_41[iVar19 /*54*/]) = { *iParam0 };
				bVar18 = true;
			}
			else
			{
				iVar19++;
			}
		}
	}
	if (!bVar18)
	{
		return 0;
	}
	return 1;
}

int func_201(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar4;
	int iVar5;
	int iVar6;

	if (iParam0 != 0)
	{
		iVar5 = func_249(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_250(iParam0);
			iVar0 = 0;
			while (iVar0 < iVar6)
			{
				if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar5, iVar0, &iVar1))
				{
					iVar4 = iVar1;
					if (iVar4 == iParam1)
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

struct<4> func_202()
{
	struct<4> Var0;

	Var0 = { func_251(0) };
	return func_242(856287005, Var0, -218846335, 0);
}

bool func_203(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_204(int iParam0)
{
	int iVar0;

	if (!func_203(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_252(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return iParam0;
}

void func_205()
{
	int iVar0;
	int iVar1;

	iVar0 = Global_1572887->f_387.f_1;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 30)
	{
		if (MISC::IS_BIT_SET(iVar0, iVar1))
		{
		}
		iVar1++;
	}
	if (Global_1572887->f_387.f_2 != -1)
	{
	}
	if (Global_1572887->f_387.f_3 != -1)
	{
	}
	if (Global_1572887->f_387.f_4 != -1)
	{
	}
	if (Global_1572887->f_387.f_5 != -1)
	{
	}
	if (Global_1572887->f_387.f_6 != -1)
	{
	}
	if (Global_1572887->f_387.f_8 != 0)
	{
	}
}

int func_206()
{
	if (func_253())
	{
		return 1;
	}
	return 0;
}

int func_207(var uParam0, int iParam1, bool bParam2)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(&(uParam0->f_194.f_2[func_254(iParam1, 1)])))
	{
		return 0;
	}
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(&(uParam0->f_194.f_2[func_254(iParam1, 1)])) == bParam2)
	{
		return 0;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&(uParam0->f_194.f_2[func_254(iParam1, 1)]), bParam2);
	return 1;
}

int func_208()
{
	if (func_255())
	{
		return 1;
	}
	if (SOCIALCLUBFEED::_0x068332D20CB6F897())
	{
		return 1;
	}
	return 0;
}

void func_209(var uParam0)
{
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(&(uParam0->f_194[0]));
}

bool func_210(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_211(int iParam0)
{
	if (iParam0 == 395262693 || iParam0 == -933924539)
	{
		return 482206342;
	}
	return Global_524288->f_39792;
}

int func_212(int iParam0, int iParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case -504335712:
			if (func_256(iParam1))
			{
				iVar0 = 1;
			}
			else
			{
				iVar0 = 2;
			}
			break;
		case 395262693:
			iVar0 = 2;
			break;
		case -933924539:
			iVar0 = 0;
			break;
		default:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

bool func_213(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_214(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1185962->f_1 && iParam0) != 0;
}

bool func_215(int iParam0, int iParam1)
{
	if (!Global_1070356->f_3)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return false;
	}
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	return (Global_1185577[iParam1 /*12*/] && iParam0) != 0;
}

int func_216()
{
	if (&Global_1048576)
	{
		return 1;
	}
	if (Global_1572887->f_4)
	{
		return 1;
	}
	if (&Global_2883584)
	{
		return 1;
	}
	if (&Global_1048577)
	{
		return 1;
	}
	if (!func_7(*Global_1051163) && Global_1572887->f_7 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

void func_217(int iParam0)
{
	int iVar0;

	func_257(iParam0);
	iParam0->f_4 = 0;
	iParam0->f_5 = { func_77() };
	iParam0->f_9 = 0;
	iParam0->f_10 = -1;
	iParam0->f_11 = 0;
	StringCopy(&(iParam0->f_12), "", 64);
	iParam0->f_20 = 0;
	iParam0->f_22 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iParam0->f_23[iVar0] = 0f;
		iVar0++;
	}
	iParam0->f_27 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 13)
	{
		iParam0->f_28[iVar0] = 0;
		iVar0++;
	}
}

int func_218(int iParam0, int iParam1)
{
	func_258(&(Global_1903929->f_42));
	if (!func_245(iParam0, iParam1, &(Global_1903929->f_42), 0))
	{
		return 0;
	}
	return 1;
}

int func_219(int iParam0, int iParam1)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (!func_246(iParam0, iParam1, &Var0, 0))
	{
		return 0;
	}
	return 1;
}

void func_220(int iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;

	if (!func_259(iParam0->f_10))
	{
		return;
	}
	func_260(iParam0, 8);
	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		return;
	}
	iVar0 = func_194(0);
	iVar3 = 0;
	while (iVar3 < 13)
	{
		uVar1 = func_261(iVar3, 1);
		if (!INVENTORY::_0x6862E4D93F64CF01(iVar0, iParam0, uVar1, &uVar2))
		{
		}
		else
		{
			iParam0->f_28[iVar3] = uVar2;
		}
		iVar3++;
	}
}

bool func_221(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

char* func_222(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pm_player_mp";
		case 1:
			return "pm_player_mp";
		case 2:
			return "pm_player_mp";
		case 3:
			return "pm_player_mp";
		case 4:
			return "pm_player_mp";
		case 5:
			return "pausemenu_player";
		default:
			break;
	}
	return "";
}

char* func_223(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "RPG_Health";
		case 2:
			return "RPG_Stamina";
		case 3:
			return "RPG_Dead_Eye";
		default:
			break;
	}
	return "";
}

float func_224(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_86(1);
	}
	switch (iParam1)
	{
		case 0:
			return &(Global_1954472->f_1331.f_26[iParam0]);
		case 1:
			return &(Global_1954472->f_1465.f_2.f_26[iParam0]);
		default:
			break;
	}
	return -1f;
}

int func_225(float fParam0)
{
	if (fParam0 < IntToFloat(0))
	{
		return -1;
	}
	if (fParam0 < IntToFloat(100))
	{
		return 0;
	}
	if (fParam0 < IntToFloat(300))
	{
		return 1;
	}
	if (fParam0 < IntToFloat(700))
	{
		return 2;
	}
	if (fParam0 < IntToFloat(1500))
	{
		return 3;
	}
	if (fParam0 < IntToFloat(3100))
	{
		return 4;
	}
	return 5;
}

int func_226(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 0:
			return 0;
		case 1:
			return 100;
		case 2:
			return 300;
		case 3:
			return 700;
		case 4:
			return 1500;
		case 5:
			return 3100;
		default:
			break;
	}
	return 100;
}

struct<4> func_227(int iParam0, int iParam1)
{
	char cVar0[32];

	if (iParam0 >= 10)
	{
		iParam1 = 0;
	}
	else if (iParam1 >= 4)
	{
		iParam1 = 0;
	}
	StringCopy(&cVar0, "TOAST_RPG_LEVEL_", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	return cVar0;
}

char* func_228(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_229()
{
	return 0;
}

int func_230()
{
	return 1;
}

int func_231(int iParam0, int iParam1)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		return 0;
	}
	*iParam1 = 0;
	*iParam1 = 0;
	while (*iParam1 < 10)
	{
		if (!INVENTORY::_0x4C543D5DFCD2DAFD(Global_17172.f_54.f_61.f_41[*iParam1 /*54*/], iParam0))
		{
		}
		else
		{
			return 1;
		}
		*iParam1++;
	}
	return 0;
}

bool func_232(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, int iParam7)
{
	return func_262(&uParam0, bParam4, iParam5, bParam6, iParam7);
}

int func_233()
{
	return 5;
}

int func_234()
{
	return 6;
}

int func_235(int iParam0)
{
	int iVar0;

	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		return 0;
	}
	iVar0 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_RANK(iParam0, func_263());
	return iVar0;
}

int func_236(var uParam0, int iParam1)
{
	if (func_264(uParam0, -2147483648))
	{
		*iParam1 = 4;
	}
	else if (func_264(uParam0, 1073741824 /* Float: 2f */))
	{
		*iParam1 = 3;
	}
	else if (func_264(uParam0, 536870912))
	{
		*iParam1 = 2;
	}
	else if (func_264(uParam0, 268435456))
	{
		*iParam1 = 1;
	}
	else if (func_264(uParam0, 134217728))
	{
		*iParam1 = 0;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_237(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_262(iParam0, bParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

char* func_238(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE"):
		case joaat("BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE"):
		case joaat("BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO"):
			return "HORSE_CLASS_MULTI";
		case joaat("BREED_MUSTANG_GRULLODUN"):
		case joaat("BREED_MUSTANG_TIGERSTRIPEDBAY"):
		case joaat("BREED_MUSTANG_GOLDENDUN"):
		case joaat("BREED_MUSTANG_WILDBAY"):
			return "HORSE_CLASS_MULTI";
		case joaat("BREED_TURKOMAN_SILVER"):
		case joaat("BREED_TURKOMAN_GOLD"):
		case joaat("BREED_TURKOMAN_DARKBAY"):
			return "HORSE_CLASS_MULTI";
		case joaat("BREED_BRETON_STEELGREY"):
		case joaat("BREED_BRETON_REDROAN"):
		case joaat("BREED_BRETON_SEALBROWN"):
		case joaat("BREED_BRETON_MEALYDAPPLEBAY"):
		case joaat("BREED_BRETON_GRULLODUN"):
		case joaat("BREED_BRETON_SORREL"):
			return "HORSE_CLASS_MULTI";
		case joaat("BREED_CRIOLLO_SORRELOVERO"):
		case joaat("BREED_CRIOLLO_BAYFRAMEOVERO"):
		case joaat("BREED_CRIOLLO_BAYBRINDLE"):
		case joaat("BREED_CRIOLLO_DUN"):
		case joaat("BREED_CRIOLLO_MARBLESABINO"):
		case joaat("BREED_CRIOLLO_BLUEROANOVERO"):
			return "HORSE_CLASS_MULTI";
		case joaat("BREED_KLADRUBER_DAPPLEROSEGREY"):
		case joaat("BREED_KLADRUBER_WHITE"):
		case joaat("BREED_KLADRUBER_SILVER"):
		case joaat("BREED_KLADRUBER_CREMELLO"):
		case joaat("BREED_KLADRUBER_GREY"):
		case joaat("BREED_KLADRUBER_BLACK"):
			return "HORSE_CLASS_MULTI";
		case joaat("BREED_NORFOLKROADSTER_DAPPLEDBUCKSKIN"):
		case joaat("BREED_NORFOLKROADSTER_ROSEGREY"):
		case joaat("BREED_NORFOLKROADSTER_BLACK"):
		case joaat("BREED_NORFOLKROADSTER_PIEBALDROAN"):
		case joaat("BREED_NORFOLKROADSTER_SPECKLEDGREY"):
		case joaat("BREED_NORFOLKROADSTER_SPOTTEDTRICOLOR"):
			return "HORSE_CLASS_MULTI";
	}
	return "HORSE_CLASS_MULTI";
}

float func_239(struct<4> Param0, int iParam4)
{
	float fVar0;

	fVar0 = 0f;
	if (iParam4 == 0 && func_122(Param0, 0) > 50)
	{
		fVar0 = (fVar0 + 0.25f);
	}
	fVar0 = (fVar0 - func_265(iParam4));
	return fVar0;
}

char* func_240(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_241(struct<4> Param0, int iParam4, int iParam5, bool bParam6)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_266(Param0, iParam4, &Var0, iParam5, bParam6))
	{
		return Var0.f_4;
	}
	return 0;
}

struct<4> func_242(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, bool bParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_203(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_194(bParam6), &uParam1, iParam0, bParam5, &Var0);
	return Var0;
}

char* func_243(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_244()
{
	return Global_1572887->f_13;
}

int func_245(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_137(iParam0, iParam2, bParam3))
	{
		return 0;
	}
	if (!func_267(iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

int func_246(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_268(iParam0, iParam2, bParam3))
	{
		return 0;
	}
	if (!func_269(iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

void func_247(var uParam0)
{
	int iVar0;

	*uParam0 = { func_77() };
	iVar0 = 0;
	while (iVar0 < 24)
	{
		uParam0->f_4[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_29[iVar0 /*4*/] = 100;
		(uParam0->f_29[iVar0 /*4*/])->f_1 = 0f;
		(uParam0->f_29[iVar0 /*4*/])->f_2 = 0f;
		(uParam0->f_29[iVar0 /*4*/])->f_3 = 0;
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		switch (iVar0)
		{
			case 0:
				uParam0->f_38[iVar0 /*4*/] = 100;
				break;
			case 1:
				uParam0->f_38[iVar0 /*4*/] = 0;
				break;
			case 2:
				uParam0->f_38[iVar0 /*4*/] = 50;
				break;
		}
		(uParam0->f_38[iVar0 /*4*/])->f_1 = 0f;
		(uParam0->f_38[iVar0 /*4*/])->f_2 = 0f;
		(uParam0->f_38[iVar0 /*4*/])->f_3 = 0;
		iVar0++;
	}
	uParam0->f_51 = { 0f, 0f, 0f };
}

bool func_248(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_270(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_249(int iParam0)
{
	struct<2> Var0;

	if (!func_203(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_250(int iParam0)
{
	int iVar0;

	if (!func_203(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_249(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_COUNT(iVar0);
}

struct<4> func_251(bool bParam0)
{
	int iVar0;

	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_194(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1272170))
			{
				*Global_1272170 = { func_242(joaat("CHARACTER"), func_77(), -1591664384, bParam0) };
			}
			return *Global_1272170;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_12)))
			{
				Global_1272170->f_12 = { func_242(joaat("CHARACTER"), func_77(), -1591664384, 0) };
			}
			return Global_1272170->f_12;
		}
	}
	return func_242(joaat("CHARACTER"), func_77(), -1591664384, bParam0);
}

int func_252(int iParam0)
{
	switch (iParam0)
	{
		case joaat("KIT_POUCH_REMEDIES"):
			return MISC::GET_HASH_KEY("KIT_POUCH_REMEDIES_MP");
		case joaat("KIT_POUCH_INGREDIENTS"):
			return MISC::GET_HASH_KEY("KIT_POUCH_INGREDIENTS_MP");
		case joaat("KIT_POUCH_MATERIALS"):
			return MISC::GET_HASH_KEY("KIT_POUCH_MATERIALS_MP");
		case joaat("KIT_POUCH_VALUABLES"):
			return MISC::GET_HASH_KEY("KIT_POUCH_VALUABLES_MP");
		case joaat("KIT_POUCH_KIT"):
			return MISC::GET_HASH_KEY("KIT_POUCH_KIT_MP");
		case joaat("KIT_POUCH_PROVISIONS"):
			return MISC::GET_HASH_KEY("KIT_POUCH_PROVISIONS_MP");
	}
	return 0;
}

int func_253()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 4)
	{
		iVar0 = iVar1;
		if (!func_271(iVar0))
		{
		}
		else
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_254(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -359624034:
			return 1;
		case 1145633164:
			return 0;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

int func_255()
{
	int iVar0;
	int iVar1;
	struct<10> Var2;
	int iVar16;

	iVar1 = INVENTORY::_0x97A3646645727F42(&iVar0);
	Var2.f_9 = -1591664384;
	iVar16 = 0;
	while (iVar16 < iVar0)
	{
		if (!INVENTORY::_0x82FA24C3D3FCD9B7(iVar1, iVar16, &Var2))
		{
		}
		else if (!func_272(&Var2))
		{
		}
		else if (!func_273(Var2.f_9))
		{
		}
		else if (!func_274(&Var2))
		{
		}
		else
		{
			INVENTORY::_0x42A2F33A1942E865(iVar1);
			return 1;
		}
		iVar16++;
	}
	INVENTORY::_0x42A2F33A1942E865(iVar1);
	return 0;
}

bool func_256(int iParam0)
{
	return ((iParam0 == -1759663922 || iParam0 == -318976023) || iParam0 == 772881414);
}

void func_257(int iParam0)
{
	*iParam0 = 0;
	iParam0->f_1 = 0;
	iParam0->f_2 = 0;
	iParam0->f_3 = 0;
}

void func_258(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_5.f_1 = 0;
	uParam0->f_5.f_2 = 0;
	uParam0->f_5.f_3 = 0;
	uParam0->f_9 = -1591664384;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
	uParam0->f_14 = 0;
	uParam0->f_15 = 0;
	StringCopy(&(uParam0->f_16), "", 64);
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
	uParam0->f_28 = 0;
}

int func_259(int iParam0)
{
	var uVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	func_275();
	Global_1903929->f_124.f_2 = 834733495;
	Global_1903929->f_124.f_3 = func_276(iParam0);
	if (!DATAFILE::_DATAFILE_GET_BOOL(&uVar0, &(Global_1903929->f_124)))
	{
		return 0;
	}
	return uVar0;
}

void func_260(int iParam0, int iParam1)
{
	func_277(&(iParam0->f_20), iParam1);
}

int func_261(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return -742846258;
		case 2:
			return 131724934;
		case 3:
			return 325433051;
		case 4:
			return -1943296527;
		case 5:
			return 1586684911;
		case 6:
			return -1171161482;
		case 7:
			return 1038672528;
		case 8:
			return -1073329868;
		case 9:
			return 1263489075;
		case 10:
			return 966390205;
		case 11:
			return -2046198715;
		case 12:
			return 13;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

int func_262(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_194(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, iParam0, bParam1, &uVar0))
	{
		return 0;
	}
	if (!func_270(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_263()
{
	return 4;
}

bool func_264(var uParam0, int iParam1)
{
	return func_138(&(uParam0->f_20), iParam1);
}

float func_265(int iParam0)
{
	var uVar0;

	uVar0 = &Global_1270530->f_1490.f_3[iParam0];
	return uVar0;
}

int func_266(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4, var uParam5, int iParam6, bool bParam7)
{
	int iVar0;

	iVar0 = func_194(bParam7);
	if (INVENTORY::_0x033EE4B89F3AC545(iVar0, &uParam0, bParam4) <= iParam6)
	{
		return 0;
	}
	if (!INVENTORY::_0xBE012571B25F5ACA(iVar0, &uParam0, bParam4, iParam6, uParam5))
	{
		return 0;
	}
	return 1;
}

int func_267(int iParam0, int iParam1)
{
	*iParam0 = { *iParam1 };
	iParam0->f_4 = iParam1->f_4;
	iParam0->f_5 = { iParam1->f_5 };
	iParam0->f_9 = iParam1->f_9;
	iParam0->f_11 = iParam1->f_14;
	if (!STREAMING::IS_MODEL_VALID(iParam0->f_11))
	{
		return 0;
	}
	iParam0->f_22 = func_278(iParam0->f_11);
	if (iParam0->f_22 == 0)
	{
		return 0;
	}
	iParam0->f_12 = { iParam1->f_16 };
	iParam0->f_27 = iParam1->f_25;
	iParam0->f_20 = iParam1->f_24;
	iParam0->f_10 = 0;
	return 1;
}

int func_268(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		return 0;
	}
	iVar0 = func_194(bParam2);
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, iParam0, iParam1, 24, 1))
	{
		return 0;
	}
	return 1;
}

int func_269(int iParam0, int iParam1)
{
	*iParam0 = { *iParam1 };
	iParam0->f_4 = iParam1->f_4;
	iParam0->f_5 = { iParam1->f_5 };
	iParam0->f_9 = iParam1->f_9;
	iParam0->f_11 = iParam1->f_14;
	if (!STREAMING::IS_MODEL_VALID(iParam0->f_11))
	{
		return 0;
	}
	iParam0->f_22 = 0;
	iParam0->f_12 = { iParam1->f_15 };
	iParam0->f_20 = iParam1->f_23;
	iParam0->f_10 = 2;
	return 1;
}

int func_270(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_194(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, iParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

int func_271(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_279(iParam0);
	iVar1 = func_280(iVar0);
	if (!UNLOCK::_UNLOCK_IS_NEW(iVar1))
	{
		return 0;
	}
	if (func_281(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_272(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return 0;
	}
	return 1;
}

int func_273(int iParam0)
{
	if (iParam0 == 1045621973)
	{
		return 0;
	}
	return 1;
}

int func_274(var uParam0)
{
	struct<10> Var0;

	if (!func_272(uParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_248(*uParam0, &Var0, 1, 0, -1))
	{
		return 0;
	}
	if (!func_203(Var0.f_4, 0))
	{
		return 0;
	}
	return func_282(Var0.f_4);
}

void func_275()
{
	Global_1903929->f_124 = (Global_1070356->f_26934[48 /*4*/])->f_3;
	Global_1903929->f_124.f_1 = 0;
	Global_1903929->f_124.f_2 = 0;
	Global_1903929->f_124.f_3 = 0;
	Global_1903929->f_124.f_4 = 0;
}

int func_276(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1844561321;
		case 0:
			return 1653124001;
		case 1:
			return -430733995;
		case 2:
			return 1501387297;
		case 3:
			return -1143491563;
		case 4:
			return -1460176899;
		case 5:
			return 1003181529;
		default:
			break;
	}
	return 0;
}

void func_277(var uParam0, int iParam1)
{
	if (func_138(uParam0, iParam1))
	{
		return;
	}
	func_283(uParam0, iParam1);
}

int func_278(int iParam0)
{
	if (iParam0 == joaat("A_C_Horse_MP_Mangy_Backup"))
	{
		return joaat("BREED_MANGY_BACKUP");
	}
	switch (iParam0)
	{
		case joaat("A_C_Horse_AmericanPaint_Overo"):
			return joaat("BREED_AMERICANPAINT_OVERO");
		case joaat("A_C_Horse_AmericanPaint_Tobiano"):
			return joaat("BREED_AMERICANPAINT_TOBIANO");
		case joaat("A_C_Horse_AmericanPaint_SplashedWhite"):
			return joaat("BREED_AMERICANPAINT_SPLASHEDWHITE");
		case joaat("A_C_Horse_AmericanPaint_Greyovero"):
			return joaat("BREED_AMERICANPAINT_GREYOVERO");
		case joaat("A_C_Horse_AmericanStandardbred_Black"):
			return joaat("BREED_AMERICANSTANDARDBRED_BLACK");
		case joaat("A_C_Horse_AmericanStandardbred_Buckskin"):
			return joaat("BREED_AMERICANSTANDARDBRED_BUCKSKIN");
		case joaat("A_C_Horse_AmericanStandardbred_PalominoDapple"):
			return joaat("BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE");
		case joaat("A_C_Horse_AmericanStandardbred_SilverTailBuckskin"):
			return joaat("BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN");
		case joaat("A_C_Horse_Andalusian_DarkBay"):
			return joaat("BREED_ANDALUSIAN_DARKBAY");
		case joaat("A_C_Horse_Andalusian_RoseGray"):
			return joaat("BREED_ANDALUSIAN_ROSEGRAY");
		case joaat("A_C_Horse_Andalusian_Perlino"):
			return joaat("BREED_ANDALUSIAN_PERLINO");
		case joaat("A_C_Horse_Appaloosa_Blanket"):
			return joaat("BREED_APPALOOSA_BLANKET");
		case joaat("A_C_Horse_Appaloosa_LeopardBlanket"):
			return joaat("BREED_APPALOOSA_LEOPARDBLANKET");
		case joaat("A_C_Horse_Appaloosa_BrownLeopard"):
			return joaat("BREED_APPALOOSA_BROWNLEOPARD");
		case joaat("A_C_Horse_Appaloosa_Leopard"):
			return joaat("BREED_APPALOOSA_LEOPARD");
		case joaat("A_C_Horse_Arabian_Black"):
			return joaat("BREED_ARABIAN_BLACK");
		case joaat("A_C_Horse_Arabian_RoseGreyBay"):
			return joaat("BREED_ARABIAN_ROSEGREYBAY");
		case joaat("A_C_Horse_Arabian_White"):
			return joaat("BREED_ARABIAN_WHITE");
		case joaat("A_C_Horse_Ardennes_BayRoan"):
			return joaat("BREED_ARDENNES_BAYROAN");
		case joaat("A_C_Horse_Ardennes_StrawberryRoan"):
			return joaat("BREED_ARDENNES_STRAWBERRYROAN");
		case joaat("A_C_Horse_Ardennes_IronGreyRoan"):
			return joaat("BREED_ARDENNES_IRONGREYROAN");
		case joaat("A_C_Horse_Belgian_BlondChestnut"):
			return joaat("BREED_BELGIAN_BLONDCHESTNUT");
		case joaat("A_C_Horse_Belgian_MealyChestnut"):
			return joaat("BREED_BELGIAN_MEALYCHESTNUT");
		case joaat("A_C_Horse_DutchWarmblood_SootyBuckskin"):
			return joaat("BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN");
		case joaat("A_C_Horse_DutchWarmblood_SealBrown"):
			return joaat("BREED_DUTCHWARMBLOOD_SEALBROWN");
		case joaat("A_C_Horse_DutchWarmblood_ChocolateRoan"):
			return joaat("BREED_DUTCHWARMBLOOD_CHOCOLATEROAN");
		case joaat("A_C_Horse_HungarianHalfbred_FlaxenChestnut"):
			return joaat("BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT");
		case joaat("A_C_Horse_HungarianHalfbred_PiebaldTobiano"):
			return joaat("BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO");
		case joaat("A_C_Horse_HungarianHalfbred_DarkDappleGrey"):
			return joaat("BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY");
		case joaat("A_C_Horse_KentuckySaddle_Black"):
			return -1955947684;
		case joaat("A_C_HORSE_KENTUCKYSADDLE_ChestnutPinto"):
			return joaat("BREED_KENTUCKYSADDLE_CHESTNUTPINTO");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_Grey"):
			return joaat("BREED_KENTUCKYSADDLE_GREY");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_SilverBay"):
			return joaat("BREED_KENTUCKYSADDLE_SILVERBAY");
		case joaat("A_C_Horse_MissouriFoxTrotter_AmberChampagne"):
			return joaat("BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE");
		case joaat("A_C_Horse_MissouriFoxTrotter_SilverDapplePinto"):
			return joaat("BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO");
		case joaat("A_C_HORSE_Morgan_Bay"):
			return joaat("BREED_MORGAN_BAY");
		case joaat("A_C_HORSE_Morgan_BayRoan"):
			return joaat("BREED_MORGAN_BAYROAN");
		case joaat("A_C_Horse_Morgan_FlaxenChestnut"):
			return joaat("BREED_MORGAN_FLAXENCHESTNUT");
		case joaat("A_C_Horse_Morgan_Palomino"):
			return joaat("BREED_MORGAN_PALOMINO");
		case joaat("A_C_Horse_Mustang_GrulloDun"):
			return joaat("BREED_MUSTANG_GRULLODUN");
		case joaat("A_C_Horse_Mustang_WildBay"):
			return joaat("BREED_MUSTANG_WILDBAY");
		case joaat("A_C_Horse_Mustang_TigerStripedBay"):
			return joaat("BREED_MUSTANG_TIGERSTRIPEDBAY");
		case joaat("A_C_Horse_Nokota_BlueRoan"):
			return joaat("BREED_NOKOTA_BLUEROAN");
		case joaat("A_C_Horse_Nokota_WhiteRoan"):
			return joaat("BREED_NOKOTA_WHITEROAN");
		case joaat("A_C_HORSE_NOKOTA_REVERSEDAPPLEROAN"):
			return joaat("BREED_NOKOTA_REVERSEDAPPLEROAN");
		case joaat("A_C_Horse_Shire_DarkBay"):
			return joaat("BREED_SHIRE_DARKBAY");
		case joaat("A_C_Horse_Shire_LightGrey"):
			return joaat("BREED_SHIRE_LIGHTGREY");
		case joaat("A_C_Horse_SuffolkPunch_Sorrel"):
			return joaat("BREED_SUFFOLKPUNCH_SORREL");
		case joaat("A_C_Horse_SuffolkPunch_RedChestnut"):
			return joaat("BREED_SUFFOLKPUNCH_REDCHESTNUT");
		case joaat("A_C_Horse_TennesseeWalker_BlackRabicano"):
			return joaat("BREED_TENNESSEEWALKER_BLACKRABICANO");
		case joaat("A_C_Horse_TennesseeWalker_Chestnut"):
			return joaat("BREED_TENNESSEEWALKER_CHESTNUT");
		case joaat("A_C_HORSE_TENNESSEEWALKER_DAPPLEBAY"):
			return joaat("BREED_TENNESSEEWALKER_DAPPLEBAY");
		case joaat("A_C_Horse_TennesseeWalker_RedRoan"):
			return joaat("BREED_TENNESSEEWALKER_REDROAN");
		case joaat("A_C_Horse_TennesseeWalker_FlaxenRoan"):
			return joaat("BREED_TENNESSEEWALKER_FLAXENROAN");
		case joaat("A_C_Horse_Thoroughbred_BloodBay"):
			return joaat("BREED_THOROUGHBRED_BLOODBAY");
		case joaat("A_C_Horse_Thoroughbred_DappleGrey"):
			return joaat("BREED_THOROUGHBRED_DAPPLEGREY");
		case joaat("A_C_Horse_Thoroughbred_Brindle"):
			return joaat("BREED_THOROUGHBRED_BRINDLE");
		case joaat("A_C_Horse_Thoroughbred_BlackChestnut"):
			return joaat("BREED_THOROUGHBRED_BLACKCHESTNUT");
		case joaat("A_C_Horse_Thoroughbred_ReverseDappleBlack"):
			return joaat("BREED_THOROUGHBRED_REVERSEDAPPLEBLACK");
		case joaat("A_C_Horse_Turkoman_DarkBay"):
			return joaat("BREED_TURKOMAN_DARKBAY");
		case joaat("A_C_Horse_Turkoman_Gold"):
			return joaat("BREED_TURKOMAN_GOLD");
		case joaat("A_C_Horse_Turkoman_Silver"):
			return joaat("BREED_TURKOMAN_SILVER");
		case joaat("A_C_Horse_Breton_RedRoan"):
			return joaat("BREED_BRETON_REDROAN");
		case joaat("A_C_Horse_Breton_Sorrel"):
			return joaat("BREED_BRETON_SORREL");
		case joaat("A_C_Horse_Breton_GrulloDun"):
			return joaat("BREED_BRETON_GRULLODUN");
		case joaat("A_C_Horse_Breton_SealBrown"):
			return joaat("BREED_BRETON_SEALBROWN");
		case joaat("A_C_Horse_Breton_MealyDappleBay"):
			return joaat("BREED_BRETON_MEALYDAPPLEBAY");
		case joaat("A_C_Horse_Breton_SteelGrey"):
			return joaat("BREED_BRETON_STEELGREY");
		case joaat("A_C_Horse_Criollo_BlueRoanOvero"):
			return joaat("BREED_CRIOLLO_BLUEROANOVERO");
		case joaat("A_C_Horse_Criollo_Dun"):
			return joaat("BREED_CRIOLLO_DUN");
		case joaat("A_C_Horse_Criollo_BayBrindle"):
			return joaat("BREED_CRIOLLO_BAYBRINDLE");
		case joaat("A_C_Horse_Criollo_SorrelOvero"):
			return joaat("BREED_CRIOLLO_SORRELOVERO");
		case joaat("A_C_Horse_Criollo_BayFrameOvero"):
			return joaat("BREED_CRIOLLO_BAYFRAMEOVERO");
		case joaat("A_C_Horse_Criollo_MarbleSabino"):
			return joaat("BREED_CRIOLLO_MARBLESABINO");
		case joaat("A_C_Horse_Kladruber_Black"):
			return joaat("BREED_KLADRUBER_BLACK");
		case joaat("A_C_Horse_Kladruber_White"):
			return joaat("BREED_KLADRUBER_WHITE");
		case joaat("A_C_Horse_Kladruber_Cremello"):
			return joaat("BREED_KLADRUBER_CREMELLO");
		case joaat("A_C_Horse_Kladruber_Grey"):
			return joaat("BREED_KLADRUBER_GREY");
		case joaat("A_C_Horse_Kladruber_DappleRoseGrey"):
			return joaat("BREED_KLADRUBER_DAPPLEROSEGREY");
		case joaat("A_C_Horse_Kladruber_Silver"):
			return joaat("BREED_KLADRUBER_SILVER");
		case 1007570567:
			return joaat("BREED_NORFOLKROADSTER_BLACK");
		case 1029339151:
			return joaat("BREED_NORFOLKROADSTER_SPECKLEDGREY");
		case -1424767799:
			return joaat("BREED_NORFOLKROADSTER_PIEBALDROAN");
		case -217135948:
			return joaat("BREED_NORFOLKROADSTER_ROSEGREY");
		case -156439156:
			return joaat("BREED_NORFOLKROADSTER_DAPPLEDBUCKSKIN");
		case 1344011125:
			return joaat("BREED_NORFOLKROADSTER_SPOTTEDTRICOLOR");
		case joaat("A_C_Donkey_01"):
			return joaat("BREED_DONKEY");
		case joaat("A_C_HorseMule_01"):
			return joaat("BREED_MULE");
		case joaat("A_C_HorseMulePainted_01"):
			return joaat("BREED_MULE_PAINTED");
		case joaat("A_C_Horse_AmericanStandardbred_LightBuckskin"):
			return joaat("BREED_AMERICANSTANDARDBRED_LIGHTBUCKSKIN");
		case joaat("A_C_Horse_Appaloosa_BlackSnowflake"):
			return joaat("BREED_APPALOOSA_BLACKSNOWFLAKE");
		case joaat("A_C_Horse_Arabian_Grey"):
			return joaat("BREED_ARABIAN_GREY");
		case joaat("A_C_HORSE_ARABIAN_REDCHESTNUT"):
			return joaat("BREED_ARABIAN_REDCHESTNUT");
		case joaat("A_C_Horse_HungarianHalfbred_LiverChestnut"):
			return joaat("BREED_HUNGARIANHALFBRED_LIVERCHESTNUT");
		case joaat("A_C_Horse_MissouriFoxTrotter_SableChampagne"):
			return joaat("BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE");
		case joaat("A_C_Horse_Mustang_GoldenDun"):
			return joaat("BREED_MUSTANG_GOLDENDUN");
		case joaat("A_C_Horse_TennesseeWalker_MahoganyBay"):
			return joaat("BREED_TENNESSEEWALKER_MAHOGANYBAY");
		case joaat("A_C_Horse_Shire_RavenBlack"):
			return joaat("BREED_SHIRE_RAVENBLACK");
		case joaat("A_C_Horse_Buell_WarVets"):
			return joaat("BREED_BUELL_WARVETS");
		case joaat("A_C_Horse_John_EndlessSummer"):
			return joaat("BREED_JOHN_ENDLESSSUMMER");
		case joaat("A_C_Horse_MurfreeBrood_Mange_01"):
			return joaat("BREED_MURFREEBROOD_MANGE_01");
		case joaat("A_C_Horse_MurfreeBrood_Mange_02"):
			return joaat("BREED_MURFREEBROOD_MANGE_02");
		case joaat("A_C_Horse_MurfreeBrood_Mange_03"):
			return joaat("BREED_MURFREEBROOD_MANGE_03");
		case joaat("A_C_Horse_WINTER02_01"):
			return joaat("BREED_WINTER02_01");
		default:
			break;
	}
	return 0;
}

int func_279(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 12;
		case 2:
			return 7;
		case 1:
			return 11;
		case 0:
			return 15;
		default:
			break;
	}
	return -1;
}

int func_280(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("CHARACTER_RANK");
		case 7:
			return joaat("CHARACTER_RANK_BOUNTY_HUNTER");
		case 12:
			return joaat("CHARACTER_RANK_COLLECTOR");
		case 11:
			return joaat("CHARACTER_RANK_TRADER");
		case 13:
			return 705255263 /* GXTEntry: "Club Rewards" */;
		case 14:
			return -471215553 /* GXTEntry: "Club Rewards" */;
		case 15:
			return 1371028520;
		case 16:
			return 1479488426 /* GXTEntry: "Club Rewards" */;
		case 17:
			return -170363364 /* GXTEntry: "Club Rewards" */;
		default:
			break;
	}
	return 0;
}

int func_281(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-1348352077))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_282(var uParam0)
{
	return UNLOCK::_UNLOCK_IS_NEW(func_284(uParam0));
}

void func_283(var uParam0, int iParam1)
{
	func_285(uParam0, iParam1);
}

var func_284(var uParam0)
{
	return uParam0;
}

void func_285(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

