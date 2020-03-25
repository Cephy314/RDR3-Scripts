#region Local Var
	struct<7> Local_0 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 1;
	var uLocal_10 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
#endregion

void __EntryFunction__()
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_1(&ScriptParam_0, &Local_0);
	}
	if (!TASK::_0x841475AC96E794D1(ScriptParam_0.f_1))
	{
		func_1(&ScriptParam_0, &Local_0);
	}
	while (func_2(&ScriptParam_0, &Local_0))
	{
		switch (Local_0)
		{
			case 0:
				if (func_3(&ScriptParam_0, &Local_0))
				{
					func_4(&Local_0, 1);
				}
				break;
			case 1:
				if (func_5(&ScriptParam_0, &Local_0))
				{
					func_4(&Local_0, 2);
				}
				break;
			case 2:
				if (func_6(&ScriptParam_0, &Local_0))
				{
					func_4(&Local_0, 3);
				}
				break;
			case 3:
				if (func_7(&ScriptParam_0, &Local_0))
				{
					if (Local_0.f_3 >= Local_0.f_4)
					{
						func_8(&Local_0);
						func_4(&Local_0, 4);
					}
					else
					{
						Local_0.f_6 = 0;
						func_4(&Local_0, 2);
					}
				}
				break;
			case 4:
				func_1(&ScriptParam_0, &Local_0);
				func_4(&Local_0, 5);
				break;
			case 5:
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(&ScriptParam_0, &Local_0);
}

void func_1(var uParam0, int iParam1)
{
	func_8(iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_7))
	{
		PLAYER::_0x9DAE1380CC5C6451(PLAYER::PLAYER_ID(), iParam1->f_7);
		PLAYER::_0xDC5E09D012D759C4(iParam1->f_7, iParam1->f_7, 0);
	}
	if (ENTITY::_0x1FF441D7954F8709(iParam1->f_8))
	{
		ENTITY::_0xD2B9C78537ED5759(iParam1->f_8);
	}
	SCRIPTS::_0xE7282390542F570D(*uParam0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_2(var uParam0, var uParam1)
{
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		return 0;
	}
	if (!TASK::_0x841475AC96E794D1(uParam0->f_1))
	{
		return 0;
	}
	if (func_9(0, 0, 1))
	{
		return 0;
	}
	return 1;
}

int func_3(var uParam0, int iParam1)
{
	vector3 vVar0;

	vVar0 = { func_10(uParam0) };
	if (!TASK::_0x841475AC96E794D1(&(iParam1->f_9[0])))
	{
		iParam1->f_9[0] = TASK::CREATE_SCENARIO_POINT(-1843735114, vVar0 - Vector(0f, 0.3f, 0f), 0f, 0f, 0, 0);
	}
	STREAMING::REQUEST_MODEL(func_11(), false);
	iParam1->f_4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	iParam1->f_1 = func_12(uParam0->f_1);
	return 1;
}

void func_4(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

int func_5(var uParam0, int iParam1)
{
	if (!STREAMING::HAS_MODEL_LOADED(func_11()))
	{
		return 0;
	}
	return 1;
}

int func_6(var uParam0, int iParam1)
{
	vector3 vVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_6))
	{
		vVar0 = { func_13(uParam0) };
		if (!func_14(vVar0))
		{
			iParam1->f_6 = OBJECT::CREATE_OBJECT(func_11(), vVar0, true, true, false, false, true);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_6))
	{
		return 0;
	}
	if (iParam1->f_1 != -1 && !func_15(iParam1, 1065353216 /* Float: 1f */))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_7))
	{
		PLAYER::_0x543DFE14BE720027(PLAYER::PLAYER_ID(), iParam1->f_7, 0);
		PLAYER::_0x6ECFC621A168424C(iParam1->f_7, iParam1->f_7, 0);
	}
	return 1;
}

int func_7(var uParam0, int iParam1)
{
	struct<2> Var0;

	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return 0;
	}
	if (func_16(joaat("UPGRADE_FSH_BAIT_CRAYFISH")) && !iParam1->f_5)
	{
		iParam1->f_3++;
		iParam1->f_5 = 1;
	}
	if (iParam1->f_5 && func_17())
	{
		iParam1->f_5 = 0;
		func_19(joaat("AT_CRAYFISH"), joaat("a_c_crawfish_01"), func_18(PLAYER::PLAYER_ID()), 1, 1);
		Var0 = { func_20(joaat("collected"), joaat("AT_CRAYFISH")) };
		STATS::_0x6A0184E904CDF25E(&Var0, 1);
		return 1;
	}
	return 0;
}

void func_8(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (1 - 1))
	{
		iVar1 = iVar0;
		if (TASK::_0x841475AC96E794D1(&(iParam0->f_9[iVar1])))
		{
			TASK::_0x81948DFE4F5A0283(&(iParam0->f_9[iVar1]));
		}
		iVar0++;
	}
}

int func_9(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (Global_1572887->f_12 != -1)
	{
		if ((bParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1898164->f_163;
		}
		if ((bParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1898164->f_164;
		}
		if (func_21())
		{
			return 1;
		}
		if (Global_1058888->f_3 && !Global_1572887->f_8)
		{
			if (((*Global_1055058)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*116*/])->f_114 && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			{
				return 1;
			}
		}
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1898164->f_163;
		}
		else
		{
			return Global_1898164->f_164;
		}
	}
	if ((Global_1898164->f_1[0 /*5*/])->f_2 == 8)
	{
		iVar0 = func_22(&(Global_1898164->f_1[0 /*5*/]));
		if (func_23(iVar0) && func_24(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_25(&(Global_1898164->f_1[0 /*5*/])))
	{
		return 1;
	}
	if ((Global_1935630 && 40959 & (-1 - iParam0)) != 0)
	{
		return 1;
	}
	if (!bParam1)
	{
		if ((MISC::GET_GAME_TIMER() - 5000) < &Global_1898438)
		{
			return 1;
		}
	}
	switch ((Global_1898164->f_1[0 /*5*/])->f_2)
	{
		case 0:
			return 0;
		case 1:
			return iParam0 & 1 == 0;
		case 4:
			return iParam0 & 2 == 0;
		case 6:
			return iParam0 & 4 == 0;
		case 2:
			return iParam0 & 16 == 0;
		case 5:
			return iParam0 & 32 == 0;
		case 9:
			return iParam0 & 64 == 0;
		case 8:
			return iParam0 & 8 == 0;
		case 10:
			return iParam0 & 512 == 0;
		case 3:
			return iParam0 & 128 == 0;
		case 11:
			return iParam0 & 256 == 0;
		default:
			break;
	}
	return 0;
}

Vector3 func_10(var uParam0)
{
	if (TASK::_0x841475AC96E794D1(uParam0->f_1))
	{
		return TASK::_0xA8452DD321607029(uParam0->f_1, 1);
	}
	return 0f, 0f, 0f;
}

int func_11()
{
	return joaat("p_crayfish01x");
}

int func_12(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	int iVar7;

	if (!TASK::_0x841475AC96E794D1(iParam0))
	{
		return -1;
	}
	vVar0 = { TASK::_0xA8452DD321607029(iParam0, 1) };
	fVar5 = 9999999f;
	fVar6 = 9999999f;
	iVar7 = 0;
	iVar7 = 0;
	while (iVar7 <= (17 - 1))
	{
		iVar3 = iVar7;
		fVar5 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, func_26(iVar3), true);
		if (fVar5 < fVar6)
		{
			fVar6 = fVar5;
			iVar4 = iVar3;
		}
		iVar7++;
	}
	return iVar4;
}

Vector3 func_13(var uParam0)
{
	vector3 vVar0;
	float fVar3;

	vVar0 = { func_10(uParam0) };
	fVar3 = 0f;
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &fVar3, true))
	{
		vVar0.f_2 = (fVar3 + 0.1f);
		return vVar0;
	}
	return 0f, 0f, 0f;
}

int func_14(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_15(int iParam0, int iParam1)
{
	if (iParam0->f_8 == 0)
	{
		iParam0->f_8 = ENTITY::_0x6F3068258A499E52(func_27(iParam0->f_1), func_26(iParam0->f_1), 11);
	}
	else if (ENTITY::_0x1FF441D7954F8709(iParam0->f_8))
	{
		iParam0->f_7 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iParam0->f_8));
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_7))
	{
		return 0;
	}
	return 1;
}

int func_16(int iParam0)
{
	vector3 vVar0;
	int iVar10;

	if (TASK::_0xD04241BBF6D03A5E(Global_35) != 0)
	{
		iVar10 = 0;
		while (iVar10 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
		{
			if (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar10) == -1730772208)
			{
				if (SCRIPTS::GET_EVENT_DATA(0, iVar10, &vVar0, 10))
				{
					if (vVar0.z == iParam0 || iParam0 == 0)
					{
						return 1;
					}
				}
			}
			iVar10++;
		}
	}
	return 0;
}

int func_17()
{
	if (TASK::_0xD04241BBF6D03A5E(Global_35) == 0)
	{
		return 1;
	}
	return 0;
}

Vector3 func_18(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

void func_19(int iParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = COMPENDIUM::COMPENDIUM_GET_MAP_DISCOVERABLE_FROM_STAT_ITEM(iParam0, vParam2);
	iVar1 = iVar0;
	if (iVar1 != 0 && !MAP::_0x3F81EA4275D39D6F(iVar1))
	{
		MAP::_0xD8C7162AB2E2AF45(iVar1);
	}
	if (bParam5 && joaat("AT_HORSE") != iParam0)
	{
		COMPENDIUM::COMPENDIUM_ANIMAL_OBSERVED_BY_STAT_NAME(iParam0, iParam6);
	}
	if (Global_1572887->f_12 == -1)
	{
		if (Global_40.f_39 == joaat("player_zero"))
		{
			iVar2 = func_28(iParam0, iParam1, 1);
			if (iVar2 != 0)
			{
				func_29(iVar2, 0);
			}
		}
		else
		{
			iVar2 = func_28(iParam0, iParam1, 1);
			if (iVar2 != 0)
			{
				if (HUD::_JOURNAL_CAN_WRITE_ENTRY(iVar2))
				{
					iVar2 = func_28(iParam0, iParam1, 0);
					if (iVar2 != 0)
					{
						func_29(iVar2, 0);
					}
				}
			}
		}
	}
}

struct<2> func_20(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

int func_21()
{
	if (&Global_1048576)
	{
		return 1;
	}
	if (Global_1572887->f_4)
	{
		return 1;
	}
	if (&Global_524298)
	{
		return 1;
	}
	if (&Global_1048577)
	{
		return 1;
	}
	if (&Global_1051043 == -1 && Global_1572887->f_6 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

int func_22(int iParam0)
{
	if (!func_25(iParam0))
	{
		return -1;
	}
	return func_31(func_30(iParam0));
}

bool func_23(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_24(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_25(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

Vector3 func_26(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2027.162f, -1722.432f, 40.62656f;
		case 1:
			return 2045.327f, -1785.859f, 40.69251f;
		case 2:
			return 2021.431f, -1789.314f, 40.40718f;
		case 3:
			return 2087.09f, -1859.742f, 40.49999f;
		case 4:
			return 2058.266f, -1866.586f, 40.5274f;
		case 5:
			return 2042.225f, -1885.971f, 40.49999f;
		case 6:
			return 1672.345f, -826.9699f, 39.77722f;
		case 7:
			return 1710.503f, -850.5192f, 40.24175f;
		case 8:
			return 1693.874f, -942.7992f, 40.27774f;
		case 9:
			return 1756.451f, -1017.704f, 40.73364f;
		case 10:
			return 2339.37f, -544.2522f, 40.72062f;
		case 11:
			return 2301.896f, -515.7421f, 40.62392f;
		case 12:
			return 2253.715f, -549.9788f, 40.5689f;
		case 13:
			return 2281.221f, -640.3717f, 40.46832f;
		case 14:
			return 2215.952f, -679.2456f, 40.62037f;
		case 15:
			return 2176.255f, -693.6794f, 40.68019f;
		case 16:
			return 2258.821f, -720.3987f, 40.47908f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_27(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("dis_bay_catfishhole01_decal");
		case 1:
			return joaat("dis_bay_catfishhole02_decal");
		case 2:
			return joaat("dis_bay_catfishhole03_decal");
		case 3:
			return joaat("dis_bay_catfishhole04_decal");
		case 4:
			return joaat("dis_bay_catfishhole05_decal");
		case 5:
			return joaat("dis_bay_catfishhole06_decal");
		case 6:
			return joaat("dis_bay_catfishhole07_decal");
		case 7:
			return joaat("dis_bay_catfishhole08_decal");
		case 8:
			return joaat("dis_bay_catfishhole09_decal");
		case 9:
			return joaat("dis_bay_catfishhole10_decal");
		case 10:
			return joaat("dis_bay_catfishhole11_decal");
		case 11:
			return joaat("dis_bay_catfishhole12_decal");
		case 12:
			return joaat("dis_bay_catfishhole13_decal");
		case 13:
			return joaat("dis_bay_catfishhole14_decal");
		case 14:
			return joaat("dis_bay_catfishhole15_decal");
		case 15:
			return joaat("dis_bay_catfishhole16_decal");
		case 16:
			return joaat("dis_bay_catfishhole17_decal");
		default:
			break;
	}
	return 0;
}

int func_28(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case -43987615: /* GXTEntry: "Armadillo" */
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_ARMADILLO_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_ARMADILLO_JN");
			}
			break;
		case 597440621: /* GXTEntry: "Badger" */
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BADGER_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BADGER_JN");
			}
			break;
		case joaat("AT_BAT"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BAT_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BAT_JN");
			}
			break;
		case joaat("AT_BEAR_BLACK"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BLACK_BEAR_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BLACK_BEAR_JN");
			}
			break;
		case joaat("AT_BEAR_GRIZZLY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_GRIZZLY_BEAR_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_GRIZZLY_BEAR_JN");
			}
			break;
		case joaat("AT_BEAR_LEGENDARY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_BEAR_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_BEAR_JN");
			}
			break;
		case 1297902195: /* GXTEntry: "Beaver" */
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BEAVER_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BEAVER_JN");
			}
			break;
		case 636730081:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_BEAVER_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_BEAVER_JN");
			}
			break;
		case 1516275256: /* GXTEntry: "Blue Jay" */
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BLUE_JAY_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BLUE_JAY_JN");
			}
			break;
		case 640966621: /* GXTEntry: "Boar" */
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_WILD_BOAR_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_WILD_BOAR_JN");
			}
			break;
		case 950257367:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_BOAR_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_BOAR_JN");
			}
			break;
		case -1055552242: /* GXTEntry: "Buck" */
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_WHITETAIL_BUCK_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_WHITETAIL_BUCK_JN");
			}
			break;
		case -1894468643:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_BUCK_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_BUCK_JN");
			}
			break;
		case 1489890323: /* GXTEntry: "Bison" */
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BISON_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BISON_JN");
			}
			break;
		case 2111267495:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_BUFFALO_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_BUFFALO_JN");
			}
			break;
		case -1550790546:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_WHITE_BUFFALO_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_WHITE_BUFFALO_JN");
			}
			break;
		case 1028084064:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BULL_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BULL_JN");
			}
			break;
		case -1327130182:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_DEVON_BULL_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_DEVON_BULL_JN");
			}
			break;
		case -375262254:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_HEREFORD_BULL_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_HEREFORD_BULL_JN");
			}
			break;
		case 1339926283: /* GXTEntry: "Bullfrog" */
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BULLFROG_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BULLFROG_JN");
			}
			break;
		case -1847199476: /* GXTEntry: "Californian Condor" */
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_CALIFORNIAN_CONDOR_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_CALIFORNIAN_CONDOR_JN");
			}
			break;
		case 1075520399: /* GXTEntry: "Cardinal" */
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_CARDINAL_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_CARDINAL_JN");
			}
			break;
		case joaat("AT_CAT"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_CAT_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_CAT_JN");
			}
			break;
		case -1273168083: /* GXTEntry: "Cedar Waxwing" */
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_CEDAR_WAXWING_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_CEDAR_WAXWING_JN");
			}
			break;
		case 2059272711: /* GXTEntry: "Chicken" */
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_DOMINIQUE_CHICKEN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_DOMINIQUE_CHICKEN_JN");
			}
			break;
		case -943371758: /* GXTEntry: "Chicken" */
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_PRARIE_CHICKEN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_PRARIE_CHICKEN_JN");
			}
			break;
		case 1190285160:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGHORN_CHICKEN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGHORN_CHICKEN_JN");
			}
			break;
		case -674936781:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_JAVA_CHICKEN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_JAVA_CHICKEN_JN");
			}
			break;
		case -2045434273: /* GXTEntry: "Chipmunk" */
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_CHIPMUNK_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_CHIPMUNK_JN");
			}
			break;
		case 1677450645: /* GXTEntry: "Cormorant" */
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_DOUBLE_CRESTED_CORMORANT_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_DOUBLE_CRESTED_CORMORANT_JN");
			}
			break;
		case -2069413633:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_NEOTROPIC_CORMORANT_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_NEOTROPIC_CORMORANT_JN");
			}
			break;
		case -1071812884: /* GXTEntry: "Cougar" */
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_COUGAR_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_COUGAR_JN");
			}
			break;
		case -973690007:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_COUGAR_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_COUGAR_JN");
			}
			break;
		case joaat("AT_COW"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_CRACKER_COW_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_CRACKER_COW_JN");
			}
			break;
		case -564442545: /* GXTEntry: "Coyote" */
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_COYOTE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_COYOTE_JN");
			}
			break;
		case 1210759497:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_COYOTE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_COYOTE_JN");
			}
			break;
		case 1220494366: /* GXTEntry: "Crab" */
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_CRAB_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_CRAB_JN");
			}
			break;
		case -1923720634: /* GXTEntry: "Crane" */
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_WHOOPING_CRANE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_WHOOPING_CRANE_JN");
			}
			break;
		case -1136838805:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SANDHILL_CRANE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SANDHILL_CRANE_AR");
			}
			break;
		case joaat("AT_CRAYFISH"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_CRAYFISH_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_CRAYFISH_JN");
			}
			break;
		case 613321581: /* GXTEntry: "Crow" */
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_AMERICAN_CROW_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_AMERICAN_CROW_JN");
			}
			break;
		case -510702611: /* GXTEntry: "Deer" */
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_DEER_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_DEER_JN");
			}
			break;
		case joaat("AT_DOG_AUSTRALIAN"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_AUSTRALIAN_SHEPHERD_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_AUSTRALIAN_SHEPHERD_JN");
			}
			break;
		case joaat("AT_DOG_BLOODHOUND"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BLOODHOUND_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BLOODHOUND_JN");
			}
			break;
		case joaat("AT_DOG_BLUETICK"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_COONHOUND_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_COONHOUND_JN");
			}
			break;
		case joaat("AT_DOG_BORDER"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_COLLIE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_COLLIE_JN");
			}
			break;
		case joaat("AT_DOG_CATAHOULA"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_CATAHOULA_CUR_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_CATAHOULA_CUR_JN");
			}
			break;
		case joaat("AT_DOG_CHESAPEAKE"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_CHESAPEAKEBAY_RET_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_CHESAPEAKEBAY_RET_JN");
			}
			break;
		case joaat("AT_DOG_FOXHOUND"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_FOX_HOUND_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_FOX_HOUND_JN");
			}
			break;
		case joaat("AT_DOG_HUSKY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_HUSKY_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_HUSKY_JN");
			}
			break;
		case joaat("AT_DOG_LAB"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LABRADOR_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LABRADOR_JN");
			}
			break;
		case joaat("AT_DOG_MUTT"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_MUTT_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_MUTT_JN");
			}
			break;
		case joaat("AT_DOG"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_MONGREL_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_MONGREL_JN");
			}
			break;
		case joaat("AT_DOG_POODLE"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_POODLE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_POODLE_JN");
			}
			break;
		case joaat("AT_DONKEY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_DONKEY_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_DONKEY_JN");
			}
			break;
		case -1350246467: /* GXTEntry: "Duck" */
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_MALLARD_DUCK_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_MALLARD_DUCK_JN");
			}
			break;
		case -2146232868:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_PEKING_DUCK_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_PEKING_DUCK_JN");
			}
			break;
		case 2104011353: /* GXTEntry: "Eagle" */
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BALD_EAGLE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BALD_EAGLE_JN");
			}
			break;
		case -1673415831:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_GOLDEN_EAGLE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_GOLDEN_EAGLE_JN");
			}
			break;
		case 1157397403: /* GXTEntry: "Egret" */
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_REDDISH_EGRET_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_REDDISH_EGRET_JN");
			}
			break;
		case 1374755253:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LITTLE_EGRET_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LITTLE_EGRET_JN");
			}
			break;
		case -1203519405:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SNOWY_EGRET_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SNOWY_EGRET_JN");
			}
			break;
		case -74829863: /* GXTEntry: "Elk" */
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_ELK_F_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_ELK_F_JN");
			}
			break;
		case 702805627:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_ELK_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_ELK_JN");
			}
			break;
		case 1895708243:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_ELK_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_ELK_JN");
			}
			break;
		case -1003674917: /* GXTEntry: "Fox" */
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_FOX_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_FOX_JN");
			}
			break;
		case -487429551:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_GREY_FOX_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_GREY_FOX_JN");
			}
			break;
		case -853417084:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SILVER_FOX_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SILVER_FOX_JN");
			}
			break;
		case 225698625:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_FOX_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_FOX_JN");
			}
			break;
		case joaat("AT_GATOR"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_ALIGATOR_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_ALIGATOR_JN");
			}
			break;
		case 1044478494:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_BULLGATOR_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_BULLGATOR_JN");
			}
			break;
		case 1735171971: /* GXTEntry: "Lizard" */
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_GILA_MONSTER_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_GILA_MONSTER_JN");
			}
			break;
		case joaat("AT_GOAT"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_ALPINE_GOAT_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_ALPINE_GOAT_JN");
			}
			break;
		case 731537518: /* GXTEntry: "Goose" */
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_CANADA_GOOSE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_CANADA_GOOSE_JN");
			}
			break;
		case 1859834293:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_HAWK_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_HAWK_JN");
			}
			break;
		case 524696643: /* GXTEntry: "Hawk" */
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_FERRUGINIOUS_HAWK_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_FERRUGINIOUS_HAWK_JN");
			}
			break;
		case 132914876:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_ROUGH_LEGGED_HAWK_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_ROUGH_LEGGED_HAWK_JN");
			}
			break;
		case 768271981: /* GXTEntry: "Heron" */
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BLUE_HERON_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BLUE_HERON_JN");
			}
			break;
		case -1245666683:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BLUE_HERON_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BLUE_HERON_JN");
			}
			break;
		case joaat("AT_HORSE"):
			if (((iParam1 == joaat("a_c_horse_americanpaint_overo") || iParam1 == joaat("a_c_horse_americanpaint_splashedwhite")) || iParam1 == joaat("a_c_horse_americanpaint_tobiano")) || iParam1 == joaat("a_c_horse_americanpaint_greyovero"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_AMERICAN_PAINT_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_AMERICAN_PAINT_JN");
				}
			}
			else if (((iParam1 == joaat("a_c_horse_americanstandardbred_black") || iParam1 == joaat("a_c_horse_americanstandardbred_buckskin")) || iParam1 == joaat("a_c_horse_americanstandardbred_palominodapple")) || iParam1 == joaat("a_c_horse_americanstandardbred_silvertailbuckskin"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_AMERICAN_STANDARDBRED_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_AMERICAN_STANDARDBRED_JN");
				}
			}
			else if ((iParam1 == joaat("a_c_horse_andalusian_darkbay") || iParam1 == joaat("a_c_horse_andalusian_perlino")) || iParam1 == joaat("a_c_horse_andalusian_rosegray"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_ANDALUSIAN_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_ANDALUSIAN_JN");
				}
			}
			else if ((((iParam1 == joaat("a_c_horse_appaloosa_blanket") || iParam1 == joaat("a_c_horse_appaloosa_leopard")) || iParam1 == joaat("a_c_horse_appaloosa_leopardblanket")) || iParam1 == joaat("a_c_horse_appaloosa_brownleopard")) || iParam1 == joaat("a_c_horse_appaloosa_fewspotted_pc"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_APPALOOSA_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_APPALOOSA_JN");
				}
			}
			else if ((((iParam1 == joaat("a_c_horse_arabian_black") || iParam1 == joaat("a_c_horse_arabian_redchestnut")) || iParam1 == joaat("a_c_horse_arabian_rosegreybay")) || iParam1 == joaat("a_c_horse_arabian_warpedbrindle_pc")) || iParam1 == joaat("a_c_horse_arabian_white"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_ARABIAN_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_ARABIAN_JN");
				}
			}
			else if ((iParam1 == joaat("a_c_horse_ardennes_bayroan") || iParam1 == joaat("a_c_horse_ardennes_irongreyroan")) || iParam1 == joaat("a_c_horse_ardennes_strawberryroan"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_ARDENNES_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_ARDENNES_JN");
				}
			}
			else if (iParam1 == joaat("a_c_horse_belgian_blondchestnut") || iParam1 == joaat("a_c_horse_belgian_mealychestnut"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_BELGIAN_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_BELGIAN_JN");
				}
			}
			else if ((iParam1 == joaat("a_c_horse_dutchwarmblood_chocolateroan") || iParam1 == joaat("a_c_horse_dutchwarmblood_sealbrown")) || iParam1 == joaat("a_c_horse_dutchwarmblood_sootybuckskin"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_DUTCH_WARMBLOOD_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_DUTCH_WARMBLOOD_JN");
				}
			}
			else if ((iParam1 == joaat("a_c_horse_hungarianhalfbred_darkdapplegrey") || iParam1 == joaat("a_c_horse_hungarianhalfbred_flaxenchestnut")) || iParam1 == joaat("a_c_horse_hungarianhalfbred_piebaldtobiano"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_HUNGARIAN_HALFBRED_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_HUNGARIAN_HALFBRED_JN");
				}
			}
			else if ((((iParam1 == joaat("a_c_horse_kentuckysaddle_black") || iParam1 == joaat("a_c_horse_kentuckysaddle_buttermilkbuckskin_pc")) || iParam1 == joaat("a_c_horse_kentuckysaddle_chestnutpinto")) || iParam1 == joaat("a_c_horse_kentuckysaddle_grey")) || iParam1 == joaat("a_c_horse_kentuckysaddle_silverbay"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_KENTUCKY_SADDLER_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_KENTUCKY_SADDLER_JN");
				}
			}
			else if (iParam1 == joaat("a_c_horse_missourifoxtrotter_amberchampagne") || iParam1 == joaat("a_c_horse_missourifoxtrotter_silverdapplepinto"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_MISSOURI_FOXTROTTER_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_MISSOURI_FOXTROTTER_JN");
				}
			}
			else if ((((iParam1 == joaat("a_c_horse_morgan_bay") || iParam1 == joaat("a_c_horse_morgan_bayroan")) || iParam1 == joaat("a_c_horse_morgan_liverchestnut_pc")) || iParam1 == joaat("a_c_horse_morgan_flaxenchestnut")) || iParam1 == joaat("a_c_horse_morgan_palomino"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_MORGAN_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_MORGAN_JN");
				}
			}
			else if ((iParam1 == joaat("a_c_horse_mustang_grullodun") || iParam1 == joaat("a_c_horse_mustang_tigerstripedbay")) || iParam1 == joaat("a_c_horse_mustang_wildbay"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_MUSTANG_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_MUSTANG_JN");
				}
			}
			else if ((iParam1 == joaat("a_c_horse_nokota_blueroan") || iParam1 == joaat("a_c_horse_nokota_reversedappleroan")) || iParam1 == joaat("a_c_horse_nokota_whiteroan"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_NOKOTA_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_NOKOTA_JN");
				}
			}
			else if ((iParam1 == joaat("a_c_horse_shire_darkbay") || iParam1 == joaat("a_c_horse_shire_lightgrey")) || iParam1 == joaat("a_c_horse_shire_ravenblack"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_SHIRE_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_SHIRE_JN");
				}
			}
			else if (iParam1 == joaat("a_c_horse_suffolkpunch_redchestnut") || iParam1 == joaat("a_c_horse_suffolkpunch_sorrel"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_SUFFOLK_PUNCH_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_SUFFOLK_PUNCH_JN");
				}
			}
			else if ((((((iParam1 == joaat("a_c_horse_tennesseewalker_blackrabicano") || iParam1 == joaat("a_c_horse_tennesseewalker_chestnut")) || iParam1 == joaat("a_c_horse_tennesseewalker_dapplebay")) || iParam1 == joaat("a_c_horse_tennesseewalker_goldpalomino_pc")) || iParam1 == joaat("a_c_horse_tennesseewalker_mahoganybay")) || iParam1 == joaat("a_c_horse_tennesseewalker_redroan")) || iParam1 == joaat("a_c_horse_tennesseewalker_flaxenroan"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_TENNESSEE_WALKER_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_TENNESSEE_WALKER_JN");
				}
			}
			else if ((((iParam1 == joaat("a_c_horse_thoroughbred_blackchestnut") || iParam1 == joaat("a_c_horse_thoroughbred_bloodbay")) || iParam1 == joaat("a_c_horse_thoroughbred_brindle")) || iParam1 == joaat("a_c_horse_thoroughbred_dapplegrey")) || iParam1 == joaat("a_c_horse_thoroughbred_reversedappleblack"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_THOROUGHBRED_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_THOROUGHBRED_JN");
				}
			}
			else if ((iParam1 == joaat("a_c_horse_turkoman_darkbay") || iParam1 == joaat("a_c_horse_turkoman_gold")) || iParam1 == joaat("a_c_horse_turkoman_silver"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_TURKOMAN_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_TURKOMAN_JN");
				}
			}
			break;
		case 843200239: /* GXTEntry: "Iguana" */
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_IGUANA_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_IGUANA_JN");
			}
			break;
		case -557089338:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_DESERT_IGUANA_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_DESERT_IGUANA_JN");
			}
			break;
		case -409730157: /* GXTEntry: "Javelina" */
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_PECCARY_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_PECCARY_JN");
			}
			break;
		case -1453172462: /* GXTEntry: "Loon" */
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_COMMON_LOON_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_COMMON_LOON_JN");
			}
			break;
		case 2084223993:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_PACIFIC_LOON_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_PACIFIC_LOON_JN");
			}
			break;
		case 1449149245:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_YELLOW_BILLED_LOON_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_YELLOW_BILLED_LOON_JN");
			}
			break;
		case 230694645:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_MOOSE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_MOOSE_JN");
			}
			break;
		case -1998732171:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_MOOSE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_MOOSE_JN");
			}
			break;
		case joaat("AT_MULE"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_MULE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_MULE_JN");
			}
			break;
		case 1053713682: /* GXTEntry: "Muskrat" */
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_MUSKRAT_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_MUSKRAT_JN");
			}
			break;
		case 562612880: /* GXTEntry: "Oriole" */
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_ORIOLE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_ORIOLE_JN");
			}
			break;
		case 1488906430:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_HOODED_ORIOLE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_HOODED_ORIOLE_JN");
			}
			break;
		case -1002311676:
		case 313926162: /* GXTEntry: "Owl" */
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_HORNED_OWL_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_HORNED_OWL_JN");
			}
			break;
		case 1434063188:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_GREAT_HORNED_OWL_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_GREAT_HORNED_OWL_JN");
			}
			break;
		case 1296784312: /* GXTEntry: "Ox" */
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_OXEN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_OXEN_JN");
			}
			break;
		case -1192335484:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_DEVON_OXEN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_DEVON_OXEN_JN");
			}
			break;
		case 184430925: /* GXTEntry: "Panther" */
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_FLORIDA_PANTHER_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_FLORIDA_PANTHER_JN");
			}
			break;
		case 1631667828:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_PANTHER_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_PANTHER_JN");
			}
			break;
		case 1623821606: /* GXTEntry: "Parrot" */
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_PARROT_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_PARROT_JN");
			}
			break;
		case 631108475:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_GREAT_GREEN_MACAW_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_GREAT_GREEN_MACAW_JN");
			}
			break;
		case -679868805:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SCARLET_MACAW_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SCARLET_MACAW_JN");
			}
			break;
		case -454952368: /* GXTEntry: "Pelican" */
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_PELICAN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_PELICAN_JN");
			}
			break;
		case 512575690:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BROWN_PELICAN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BROWN_PELICAN_JN");
			}
			break;
		case -1315516671: /* GXTEntry: "Pheasant" */
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_RING_NECKED_PHEASANT_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_RING_NECKED_PHEASANT_JN");
			}
			break;
		case -2032722392:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_PHEASANT_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_PHEASANT_JN");
			}
			break;
		case 238849077: /* GXTEntry: "Pig" */
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_PIG_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_PIG_JN");
			}
			break;
		case -812395905:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_CHINA_PIG_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_CHINA_PIG_JN");
			}
			break;
		case 1252173965:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_OLD_SPOT_PIG_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_OLD_SPOT_PIG_JN");
			}
			break;
		case 1948286917: /* GXTEntry: "Pigeon" */
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_PIGEON_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_PIGEON_JN");
			}
			break;
		case 886717998:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BAND_TAILED_PIGEON_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BAND_TAILED_PIGEON_JN");
			}
			break;
		case joaat("AT_POSSUM"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_POSSUM_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_POSSUM_JN");
			}
			break;
		case -10873946: /* GXTEntry: "Pronghorn" */
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_PRONGHORN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_PRONGHORN_JN");
			}
			break;
		case -1850027464:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BAJA_CALIFORNIAN_PRONGHORN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BAJA_CALIFORNIAN_PRONGHORN_JN");
			}
			break;
		case -1559343651:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SONORAN_PRONGHORN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SONORAN_PRONGHORN_JN");
			}
			break;
		case -908129790:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_PRONGHORN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_PRONGHORN_JN");
			}
			break;
		case -756458312: /* GXTEntry: "Quail" */
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_QUAIL_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_QUAIL_JN");
			}
			break;
		case -1523680261: /* GXTEntry: "Rabbit" */
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_RABBIT_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_RABBIT_JN");
			}
			break;
		case 915670869: /* GXTEntry: "Raccoon" */
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_RACCOON_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_RACCOON_JN");
			}
			break;
		case 1241049848:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BIGHORN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BIGHORN_JN");
			}
			break;
		case 1642062303:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_DESERT_BIG_HORN_SHEEP_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_DESERT_BIG_HORN_SHEEP_JN");
			}
			break;
		case -868889795:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_DESERT_BIGHORN_RAM_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_DESERT_BIGHORN_RAM_JN");
			}
			break;
		case -245437166:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_ROCKY_MOUNTAIN_BIGHORN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_ROCKY_MOUNTAIN_BIGHORN_JN");
			}
			break;
		case -587357648:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SIERRA_NEVADA_BIGHORN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SIERRA_NEVADA_BIGHORN_JN");
			}
			break;
		case 1161966186:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SIERRA_NEVADA_BIGHORN_SHEEP_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SIERRA_NEVADA_BIGHORN_SHEEP_JN");
			}
			break;
		case -795241033:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_LONG_HORN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_LONG_HORN_JN");
			}
			break;
		case -366264193:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_RAT_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_RAT_JN");
			}
			break;
		case -705312705: /* GXTEntry: "Rat" */
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BROWN_RAT_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BROWN_RAT_JN");
			}
			break;
		case -1592962144: /* GXTEntry: "Raven" */
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_RAVEN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_RAVEN_JN");
			}
			break;
		case 886059398: /* GXTEntry: "Bird" */
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_RED_FOOTED_BOOBY_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_RED_FOOTED_BOOBY_JN");
			}
			break;
		case 2018874380: /* GXTEntry: "Robin" */
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_ROBIN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_ROBIN_JN");
			}
			break;
		case -1467886026:
		case -262717989: /* GXTEntry: "Rooster" */
		case 1100342668:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_ROOSTER_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_ROOSTER_JN");
			}
			break;
		case -1181288733: /* GXTEntry: "Spoonbill" */
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SPOONBILL_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SPOONBILL_JN");
			}
			break;
		case 1398366530:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SEAGULL_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SEAGULL_JN");
			}
			break;
		case 1145409805:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LAUGHING_GULL_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LAUGHING_GULL_JN");
			}
			break;
		case 733223128:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_HERRING_GULL_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_HERRING_GULL_JN");
			}
			break;
		case joaat("AT_SHEEP"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SHEEP_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SHEEP_JN");
			}
			break;
		case -998653403: /* GXTEntry: "Skunk" */
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SKUNK_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SKUNK_JN");
			}
			break;
		case -547357240: /* GXTEntry: "Snake" */
		case 491620790:
		case 888613388:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_RED_BOA_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_RED_BOA_JN");
			}
			break;
		case -764925634: /* GXTEntry: "Snake" */
		case -518676029:
		case -21336386:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_FERDELANCE_SNAKE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_FERDELANCE_SNAKE_JN");
			}
			break;
		case -946474842: /* GXTEntry: "Black-tailed Rattlesnake" */
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BLACK_TAIL_RATTLESNAKE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BLACKTAILED_RATTLE_SNAKE_JN");
			}
			break;
		case -1363455176:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_COTTONMOUTH_SNAKE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_COTTONMOUTH_SNAKE_JN");
			}
			break;
		case 234935858:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_RATTLESNAKE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_RATTLESNAKE_JN");
			}
			break;
		case 395345271: /* GXTEntry: "Songbird" */
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SONGBIRD_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SONGBIRD_JN");
			}
			break;
		case -1049737813:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SCARLET_TANAGER_SONGBIRD_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SCARLET_TANAGER_SONGBIRD_JN");
			}
			break;
		case -143561573: /* GXTEntry: "Sparrow" */
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SPARROW_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SPARROW_JN");
			}
			break;
		case -1099435331:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_EURASIAN_TREE_SPARROW_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_EURASIAN_TREE_SPARROW_JN");
			}
			break;
		case -2058116954:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_GOLDEN_CROWNED_SPARROW_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_GOLDEN_CROWNED_SPARROW_JN");
			}
			break;
		case -581264978: /* GXTEntry: "Squirrel" */
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SQUIRREL_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SQUIRREL_JN");
			}
			break;
		case -1851619259:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_RED_SQUIRREL_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_RED_SQUIRREL_JN");
			}
			break;
		case -1055590463:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BLACK_SQUIRREL_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BLACK_SQUIRREL_JN");
			}
			break;
		case 725092441: /* GXTEntry: "Toad" */
		case 1202456973:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_TOAD_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_TOAD_JN");
			}
			break;
		case -2087684184: /* GXTEntry: "Turkey" */
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_TURKEY_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_TURKEY_JN");
			}
			break;
		case -1771094723:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_RIO_GRANDE_TURKEY_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_RIO_GRANDE_TURKEY_JN");
			}
			break;
		case joaat("AT_TURTLE_SEA"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SEA_TURTLE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SEA_TURTLE_JN");
			}
			break;
		case 288450344:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SNAPPING_TURTLE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SNAPPING_TURTLE_JN");
			}
			break;
		case -1914955935:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_EASTERN_TURKEY_VULTURE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_EASTERN_TURKEY_VULTURE_JN");
			}
			break;
		case 848629876: /* GXTEntry: "Vulture" */
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_WESTERN_VULTURE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_WESTERN_VULTURE_JN");
			}
			break;
		case -439919843: /* GXTEntry: "Wolf" */
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_WOLF_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_WOLF_JN");
			}
			break;
		case -377162693:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_WOLF_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_WOLF_JN");
			}
			break;
		case 330512330:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_TIMBER_WOLF_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_TIMBER_WOLF_JN");
			}
			break;
		case 595771513:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_WOOD_PECKER_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_WOOD_PECKER_JN");
			}
			break;
		case -391309265:
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_WOOD_PECKER_02_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_WOOD_PECKER_02_JN");
			}
			break;
		default:
			break;
	}
	return 0;
}

void func_29(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 1)
	{
		func_32(iParam0, 0);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (&Global_40.f_11922[iVar0] == 0)
			{
				Global_40.f_11922[iVar0] = iParam0;
				return;
			}
			iVar0++;
		}
		func_33(1);
		Global_40.f_11922[0] = iParam0;
	}
}

int func_30(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_12105[iParam0 /*7*/]);
	}
	if (iParam0 < 0 || iParam0 >= 20001)
	{
		return 0;
	}
	return &(Global_1058888->f_498[iParam0 /*2*/]);
}

int func_31(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

void func_32(int iParam0, int iParam1)
{
	HUD::_JOURNAL_WRITE_ENTRY(iParam0);
	if (iParam1 == 1)
	{
		func_34(1);
	}
}

void func_33(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (iParam0 == 0 && Global_43890 == 1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (&Global_40.f_11922[iVar0] == 0)
		{
			Jump @96; //curOff = 52
		}
		else
		{
			func_32(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_34(1);
	}
}

void func_34(bool bParam0)
{
	if (bParam0)
	{
		func_35(&(Global_40.f_12018.f_42), 1);
	}
	else
	{
		func_36(&(Global_40.f_12018.f_42), 1);
	}
}

void func_35(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_36(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

