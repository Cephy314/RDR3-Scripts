#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	float fLocal_7 = 0f;
	float fLocal_8 = 0f;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	struct<14> Local_14 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 706334491;
	var uLocal_32 = 357863945;
	var uLocal_33 = 1071795929;
	var uLocal_34 = 1445750337;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
#endregion

void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_1();
	}
	Local_14 = ScriptParam_0;
	Local_14.f_6 = ScriptParam_0.f_1;
	Local_14.f_9 = func_2(Local_14.f_6);
	while (func_3())
	{
		func_4();
		BUILTIN::WAIT(0);
	}
	func_1();
}

void func_1()
{
	if (TASK::_DOES_SCENARIO_POINT_EXIST(Local_14.f_7))
	{
		TASK::_0x81948DFE4F5A0283(Local_14.f_7);
	}
	if (ANIMSCENE::_0x25557E324489393C(Local_14.f_1))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_14.f_1);
		func_5(0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_2) && Local_14.f_5 != 0)
	{
		if (ENTITY::_0x1FF441D7954F8709(Local_14.f_5))
		{
			ENTITY::_0xD2B9C78537ED5759(Local_14.f_5);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_3))
	{
		ENTITY::DELETE_ENTITY(&(Local_14.f_3));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_4) && !func_6(joaat("DOCUMENT_TREASURE_MAP_13"), 1, 0))
	{
		func_7(&(Local_14.f_4));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_12) && !func_6(joaat("DOCUMENT_TREASURE_MAP_13"), 1, 0))
	{
		OBJECT::DELETE_OBJECT(&(Local_14.f_12));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_13))
	{
		OBJECT::DELETE_OBJECT(&(Local_14.f_13));
	}
	func_8(&(Local_14.f_8), 1, 1);
	if (ANIMSCENE::_0x25557E324489393C(Local_14.f_1))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_14.f_1);
	}
	SCRIPTS::_0xE7282390542F570D(Local_14);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_2(int iParam0)
{
	int iVar0;
	int iVar1;

	if (TASK::_DOES_SCENARIO_POINT_EXIST(iParam0))
	{
		iVar1 = BUILTIN::ROUND(TASK::_0x6718F40313A2B5A6(iParam0));
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("TREASURE_HUNTER"), 0);
	}
	return iVar0;
}

int func_3()
{
	if (COLLECTION::_0xF83D3DDA4D3C8169(Local_14.f_9) > 0)
	{
	}
	else if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
	}
	else if (!TASK::_DOES_SCENARIO_POINT_EXIST(Local_14.f_6))
	{
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_4()
{
	int iVar0;

	switch (Local_14.f_10)
	{
		case 0:
			if (func_9(&Local_14))
			{
				func_10(&Local_14, 1);
			}
			break;
		case 1:
			if (func_11(&Local_14))
			{
				if (COLLECTION::_0x6052B4DE6657684F(Local_14.f_9) == 218622660)
				{
					func_10(&Local_14, 2);
				}
				else if (COLLECTION::_0x6052B4DE6657684F(Local_14.f_9) == 390004462 || COLLECTION::_0x6052B4DE6657684F(Local_14.f_9) == 6410548)
				{
					if (func_12())
					{
						func_10(&Local_14, 3);
					}
					else
					{
						func_10(&Local_14, 9);
					}
				}
				else
				{
					func_10(&Local_14, 3);
				}
			}
			break;
		case 2:
			if (DLC::IS_DLC_PRESENT(-679138445))
			{
				func_10(&Local_14, 3);
			}
			else
			{
				func_10(&Local_14, 9);
			}
			break;
		case 3:
			if (func_13(Local_14.f_9))
			{
				func_14(&Local_14, 1);
				if (Local_14.f_9 == joaat("TREASURE_HUNT_LOOT_01") || Local_14.f_9 == joaat("TREASURE_HUNT_LOOT_05"))
				{
					func_16(func_15(Local_14.f_9));
					func_10(&Local_14, 7);
				}
				else
				{
					func_10(&Local_14, 4);
				}
			}
			break;
		case 4:
			if (func_17(&Local_14))
			{
				func_10(&Local_14, 5);
			}
			break;
		case 5:
			if (func_18(&Local_14))
			{
				func_10(&Local_14, 6);
			}
			break;
		case 6:
			if (func_19(&Local_14))
			{
				func_10(&Local_14, 7);
			}
			break;
		case 7:
			if (Local_14.f_9 == joaat("TREASURE_HUNT_LOOT_03") && Global_1901328->f_95)
			{
				if (func_20())
				{
					func_21(Global_35, "RE_TH_PLAYER_MORE_MAPS_ALTA", -417894478, 0, 1, 0, 0, 1);
				}
				else if (func_22())
				{
					func_21(Global_35, "RE_TH_PLAYER_MORE_MAPS_ALTB", -417894478, 0, 1, 0, 0, 1);
				}
			}
			func_10(&Local_14, 8);
		case 8:
			if (!func_23(338))
			{
				func_24(338, 1);
			}
			if (!func_25(Local_14.f_9))
			{
				func_27(func_26(joaat("TREASURE_HUNTER_CHEST_LOOTED")), 1);
			}
			COLLECTION::_0x3EA62E56F386C997(Local_14.f_9, 1);
			if (func_28(Local_14.f_9))
			{
				switch (Local_14.f_9)
				{
					case joaat("TREASURE_HUNT_LOOT_04"):
						iVar0 = 499813453;
						break;
					case joaat("TREASURE_HUNT_LOOT_08"):
						iVar0 = 666607663;
						break;
					case joaat("TREASURE_HUNT_LOOT_12"):
						iVar0 = -220219788;
						break;
					case joaat("TREASURE_HUNT_LOOT_15"):
						iVar0 = 218622660;
						break;
					case joaat("TREASURE_HUNT_LOOT_19"):
						iVar0 = 390004462;
						break;
					case joaat("TREASURE_HUNT_LOOT_24"):
						iVar0 = 6410548;
						break;
				}
				func_29(COLLECTION::_0x6052B4DE6657684F(Local_14.f_9), Local_14.f_9, 1);
				func_30(iVar0, 1);
				func_31(Local_14.f_9);
			}
			func_32(0, 10);
			func_10(&Local_14, 9);
		case 9:
			break;
	}
}

void func_5(bool bParam0)
{
	func_33(13, 2, bParam0);
}

bool func_6(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_34(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_35(bParam0);
	if (iVar0 == joaat("WEAPON"))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, false))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (iVar0 == joaat("AMMO"))
	{
		if (!func_36(bParam0, 1))
		{
			return false;
		}
	}
	return func_37(bParam0, 0, bParam2) >= iParam1;
}

void func_7(int* iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (ENTITY::_0xA7E51B53309EAC97(*iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, false);
	}
	PED::DELETE_PED(iParam0);
}

void func_8(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_38(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_39(*uParam0);
	if (((*Global_1945938)[iVar0 /*18*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_40(iVar0);
	*uParam0 = 0;
}

int func_9(int iParam0)
{
	if (iParam0->f_9 == joaat("TREASURE_HUNT_LOOT_16"))
	{
		STREAMING::REQUEST_MODEL(iParam0->f_17, false);
		STREAMING::REQUEST_MODEL(iParam0->f_18, false);
		STREAMING::REQUEST_MODEL(iParam0->f_19, false);
		STREAMING::REQUEST_MODEL(iParam0->f_20, false);
	}
	return 1;
}

void func_10(int iParam0, int iParam1)
{
	iParam0->f_10 = iParam1;
}

int func_11(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	bool bVar4;
	int iVar5;
	struct<4> Var6;
	int iVar18;
	var uVar19;
	var uVar22;

	if (iParam0->f_9 == joaat("TREASURE_HUNT_LOOT_13") || iParam0->f_9 == joaat("TREASURE_HUNT_LOOT_14"))
	{
		if (iParam0->f_9 == joaat("TREASURE_HUNT_LOOT_13"))
		{
			func_41(-1121184106, 0, 0.8f, 1, 1, 0, 1, 0);
		}
		if (!DLC::IS_DLC_PRESENT(-679138445))
		{
			return 1;
		}
	}
	else if ((((((((iParam0->f_9 == joaat("TREASURE_HUNT_LOOT_16") || iParam0->f_9 == joaat("TREASURE_HUNT_LOOT_17")) || iParam0->f_9 == joaat("TREASURE_HUNT_LOOT_18")) || iParam0->f_9 == joaat("TREASURE_HUNT_LOOT_19")) || iParam0->f_9 == joaat("TREASURE_HUNT_LOOT_20")) || iParam0->f_9 == joaat("TREASURE_HUNT_LOOT_21")) || iParam0->f_9 == joaat("TREASURE_HUNT_LOOT_22")) || iParam0->f_9 == joaat("TREASURE_HUNT_LOOT_23")) || iParam0->f_9 == joaat("TREASURE_HUNT_LOOT_24"))
	{
		if (!func_12())
		{
			return 1;
		}
	}
	iVar0 = 1;
	if (func_42(iParam0->f_9) && !ENTITY::DOES_ENTITY_EXIST(iParam0->f_2))
	{
		switch (iParam0->f_9)
		{
			case joaat("TREASURE_HUNT_LOOT_04"):
				bVar4 = joaat("P_ROCK_STASH01");
				break;
			case joaat("TREASURE_HUNT_LOOT_09"):
				bVar4 = joaat("P_STRONGBOX_SNOW_01X");
				break;
			case joaat("TREASURE_HUNT_LOOT_19"):
				bVar4 = joaat("P_ROCK_STASH01");
				break;
			case joaat("TREASURE_HUNT_LOOT_24"):
				bVar4 = joaat("P_ROCK_STASH01");
				break;
		}
		iParam0->f_2 = func_44(iParam0, bVar4, func_43(iParam0->f_9));
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_2))
		{
			if (iParam0->f_9 == joaat("TREASURE_HUNT_LOOT_19"))
			{
				ENTITY::SET_ENTITY_ROTATION(iParam0->f_2, func_45(joaat("TREASURE_HUNT_LOOT_19")), 2, true);
			}
			else if (iParam0->f_9 == joaat("TREASURE_HUNT_LOOT_24"))
			{
				ENTITY::SET_ENTITY_ROTATION(iParam0->f_2, func_45(joaat("TREASURE_HUNT_LOOT_24")), 2, true);
				ENTITY::SET_ENTITY_COORDS(iParam0->f_2, func_43(joaat("TREASURE_HUNT_LOOT_24")), true, false, true, true);
			}
		}
		iVar0 = 0;
	}
	if ((((func_46(iParam0->f_9) && func_13(iParam0->f_9)) && iParam0->f_9 != joaat("TREASURE_HUNT_LOOT_19")) && iParam0->f_9 != joaat("TREASURE_HUNT_LOOT_24")) && !ENTITY::DOES_ENTITY_EXIST(iParam0->f_3))
	{
		if (iParam0->f_9 == joaat("TREASURE_HUNT_LOOT_08") || iParam0->f_9 == joaat("TREASURE_HUNT_LOOT_12"))
		{
			iVar5 = joaat("S_PICKUP_GOLDBAR01X");
		}
		else if (iParam0->f_9 == joaat("TREASURE_HUNT_LOOT_14"))
		{
			iVar5 = joaat("P_CS_BILLSTACK01X");
		}
		else
		{
			iVar5 = joaat("S_MAPROLLED04X");
		}
		STREAMING::REQUEST_MODEL(iVar5, false);
		if (STREAMING::HAS_MODEL_LOADED(iVar5))
		{
			if (iParam0->f_9 == joaat("TREASURE_HUNT_LOOT_09"))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_2))
				{
					if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iParam0->f_2))
					{
						iParam0->f_3 = OBJECT::CREATE_OBJECT(iVar5, func_47(iParam0->f_9), true, true, false, false, true);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iParam0->f_3, iParam0->f_2, 0, -0.045f, 0.03f, 0.05f, func_45(joaat("TREASURE_HUNT_LOOT_09")), false, false, false, false, 2, true, false, false);
					}
				}
			}
			else if (iParam0->f_9 == joaat("TREASURE_HUNT_LOOT_14"))
			{
				if (ANIMSCENE::_0x25557E324489393C(iParam0->f_1))
				{
					if (func_48())
					{
						if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iParam0->f_1, "CASH", &Var6, false, 0, 2))
						{
							iParam0->f_3 = OBJECT::CREATE_OBJECT(iVar5, Var6, true, true, false, false, true);
							ENTITY::SET_ENTITY_ROTATION(iParam0->f_3, Var6.f_3, 2, true);
						}
					}
				}
			}
			else
			{
				iParam0->f_3 = OBJECT::CREATE_OBJECT(iVar5, func_47(iParam0->f_9), true, true, false, false, true);
				ENTITY::SET_ENTITY_ROTATION(iParam0->f_3, func_45(iParam0->f_9), 2, true);
			}
		}
		iVar0 = 0;
	}
	if ((((iParam0->f_9 != joaat("TREASURE_HUNT_LOOT_01") && iParam0->f_9 != joaat("TREASURE_HUNT_LOOT_05")) && iParam0->f_9 != joaat("TREASURE_HUNT_LOOT_14")) && iParam0->f_9 != joaat("TREASURE_HUNT_LOOT_16")) && !TASK::_DOES_SCENARIO_POINT_EXIST(iParam0->f_7))
	{
		switch (iParam0->f_9)
		{
			case joaat("TREASURE_HUNT_LOOT_02"):
				iVar18 = joaat("RANSACK_CHIMNEY_GENERIC_01_GENERIC_PROMPT");
				break;
			case joaat("TREASURE_HUNT_LOOT_03"):
				iVar18 = joaat("RANSACK_REACH_IN_WALL_HOLE_0M3_GENERIC_PROMPT");
				break;
			case joaat("TREASURE_HUNT_LOOT_04"):
				iVar18 = joaat("PROP_PLAYER_TREASURE_HUNTER_ROCK_STASH_NEW_THCHAINS");
				break;
			case joaat("TREASURE_HUNT_LOOT_06"):
				iVar18 = joaat("RANSACK_REACH_IN_WALL_HOLE_0M3_GENERIC_PROMPT");
				break;
			case joaat("TREASURE_HUNT_LOOT_07"):
				iVar18 = joaat("RANSACK_REACH_IN_GROUND_HOLE_GENERIC_PROMPT");
				break;
			case joaat("TREASURE_HUNT_LOOT_08"):
				iVar18 = joaat("RANSACK_REACH_IN_WALL_HOLE_1M75_GENERIC_PROMPT");
				break;
			case joaat("TREASURE_HUNT_LOOT_09"):
				iVar18 = joaat("RANSACK_ATTACHED_LOCKBOX_MED_LOCKED_PULLOUT_TIGHT_0M0_0M80");
				break;
			case joaat("TREASURE_HUNT_LOOT_10"):
				iVar18 = joaat("RANSACK_CHIMNEY_GENERIC_01_GENERIC_PROMPT");
				break;
			case joaat("TREASURE_HUNT_LOOT_11"):
				iVar18 = joaat("RANSACK_REACH_IN_GROUND_HOLE_GENERIC_PROMPT");
				break;
			case joaat("TREASURE_HUNT_LOOT_12"):
				iVar18 = joaat("RANSACK_REACH_IN_WALL_HOLE_0M3_GENERIC_PROMPT");
				break;
			case joaat("TREASURE_HUNT_LOOT_13"):
				iVar18 = joaat("RANSACK_VOLUME_REACH_IN_TO_TABLE_OVER_PICKUP_0M5_0M8_2M0");
				break;
			case joaat("TREASURE_HUNT_LOOT_15"):
				iVar18 = joaat("PROP_PLAYER_TREASURE_HUNTER_PLAQUE_LOOT");
				break;
			case joaat("TREASURE_HUNT_LOOT_17"):
				iVar18 = joaat("RANSACK_CHIMNEY_GENERIC_01_GENERIC_PROMPT");
				break;
			case joaat("TREASURE_HUNT_LOOT_18"):
				iVar18 = joaat("RANSACK_REACH_IN_GROUND_HOLE_GENERIC_PROMPT");
				break;
			case joaat("TREASURE_HUNT_LOOT_19"):
				iVar18 = joaat("PROP_PLAYER_TREASURE_HUNTER_ROCK_STASH_NEW_THCHAINS_GRAVE");
				break;
			case joaat("TREASURE_HUNT_LOOT_20"):
				iVar18 = joaat("PROP_PLAYER_TREASURE_HUNTER_PLAQUE_STATUE_LOOT");
				break;
			case joaat("TREASURE_HUNT_LOOT_21"):
				iVar18 = joaat("RANSACK_CHIMNEY_GENERIC_01_GENERIC_PROMPT");
				break;
			case joaat("TREASURE_HUNT_LOOT_22"):
				iVar18 = joaat("RANSACK_CHIMNEY_GENERIC_01_GENERIC_PROMPT");
				break;
			case joaat("TREASURE_HUNT_LOOT_23"):
				iVar18 = joaat("RANSACK_CHIMNEY_GENERIC_01_GENERIC_PROMPT");
				break;
			case joaat("TREASURE_HUNT_LOOT_24"):
				iVar18 = joaat("PROP_PLAYER_TREASURE_HUNTER_ROCK_STASH_NEW_THCHAINS");
				break;
		}
		if (iParam0->f_9 == joaat("TREASURE_HUNT_LOOT_04") || iParam0->f_9 == joaat("TREASURE_HUNT_LOOT_24"))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_2))
			{
				iParam0->f_7 = TASK::CREATE_SCENARIO_POINT_ATTACHED_TO_ENTITY(iParam0->f_2, joaat("PROP_PLAYER_TREASURE_HUNTER_ROCK_STASH_NEW_THCHAINS"), 0f, 0f, 0f, 0, 0, 0, 1);
			}
		}
		else if (iParam0->f_9 == joaat("TREASURE_HUNT_LOOT_19"))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_2))
			{
				iParam0->f_7 = TASK::CREATE_SCENARIO_POINT_ATTACHED_TO_ENTITY(iParam0->f_2, joaat("PROP_PLAYER_TREASURE_HUNTER_ROCK_STASH_NEW_THCHAINS_GRAVE"), 0f, 0f, 0f, 0, 0, 0, 1);
			}
		}
		else if (iParam0->f_9 == joaat("TREASURE_HUNT_LOOT_09"))
		{
			iParam0->f_7 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(TASK::_GET_SCENARIO_POINT_COORDS(iParam0->f_6, true), joaat("RANSACK_ATTACHED_LOCKBOX_MED_LOCKED_PULLOUT_TIGHT_0M0_0M80"), 1.5f, 0, false);
		}
		else
		{
			vVar1 = { TASK::_GET_SCENARIO_POINT_COORDS(iParam0->f_6, true) };
			iParam0->f_7 = TASK::CREATE_SCENARIO_POINT(iVar18, vVar1, TASK::_GET_SCENARIO_POINT_HEADING(iParam0->f_6, true), 0f, 0, 0);
		}
		iVar0 = 0;
	}
	func_14(iParam0, 0);
	if (iParam0->f_9 == joaat("TREASURE_HUNT_LOOT_13"))
	{
		func_41(-1121184106, 0, 0.8f, 1, 1, 0, 1, 0);
	}
	else if (iParam0->f_9 == joaat("TREASURE_HUNT_LOOT_16"))
	{
		if (!func_49(iParam0))
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 1;
		}
	}
	else if (iParam0->f_9 == joaat("TREASURE_HUNT_LOOT_14") && func_13(iParam0->f_9))
	{
		if (!func_38(iParam0->f_8))
		{
			iParam0->f_8 = func_50(MISC::_CREATE_VAR_STRING(2, "GENERIC_SEARCH"), joaat("INPUT_CONTEXT_X"), TASK::_GET_SCENARIO_POINT_COORDS(iParam0->f_6, true), 1070386381 /* Float: 1.6f */, 1, 0, 0, 4, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
			iVar0 = 0;
		}
		else if (!ANIMSCENE::_0x25557E324489393C(iParam0->f_1))
		{
			iParam0->f_1 = ANIMSCENE::_CREATE_ANIM_SCENE("script@proc@loansharking@horsechase2@tree", 0, "pbl_Action", false, true);
			iVar0 = 0;
		}
		else if (!ANIMSCENE::_0x477122B8D05E7968(iParam0->f_1, 1, 0))
		{
			if (!ANIMSCENE::_0x59606519FF9D3EC2(iParam0->f_1, 1))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(iParam0->f_1);
			}
			iVar0 = 0;
		}
		else if (!func_48())
		{
			ANIMSCENE::_0xADF1D53F3B1FE0A7(iParam0->f_1, &uVar19, &uVar22, 2);
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iParam0->f_1, 2327.15f, -1512.469f, 40.7f, 0f, 0f, 120f, 2);
			func_5(1);
			iVar0 = 0;
		}
		else if (!ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_1, "pbl_Action"))
		{
			if (!ANIMSCENE::_0x0DF57F86FE71DBE5(iParam0->f_1, "pbl_Action"))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0->f_1, "pbl_Action");
			}
			iVar0 = 0;
		}
		else if (ANIMSCENE::_GET_ANIM_SCENE_PED(iParam0->f_1, "player", false) != Global_35)
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_1, "player", Global_35, 0);
			iVar0 = 0;
		}
		else if (ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iParam0->f_1, "CASH", false) != ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0->f_3))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_1, "CASH", iParam0->f_3, 0);
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_12()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"));
}

int func_13(int iParam0)
{
	switch (iParam0)
	{
		case joaat("TREASURE_HUNT_LOOT_02"):
		case joaat("TREASURE_HUNT_LOOT_01"):
			return func_6(joaat("DOCUMENT_TREASURE_MAP_01"), 1, 0);
		case joaat("TREASURE_HUNT_LOOT_03"):
			return func_6(joaat("DOCUMENT_TREASURE_MAP_02"), 1, 0);
		case joaat("TREASURE_HUNT_LOOT_04"):
			return func_6(joaat("DOCUMENT_TREASURE_MAP_03"), 1, 0);
		case joaat("TREASURE_HUNT_LOOT_05"):
		case joaat("TREASURE_HUNT_LOOT_06"):
			return func_6(joaat("DOCUMENT_TREASURE_MAP_04"), 1, 0);
		case joaat("TREASURE_HUNT_LOOT_07"):
			return func_6(joaat("DOCUMENT_TREASURE_MAP_05"), 1, 0);
		case joaat("TREASURE_HUNT_LOOT_08"):
			return func_6(joaat("DOCUMENT_TREASURE_MAP_06"), 1, 0);
		case joaat("TREASURE_HUNT_LOOT_09"):
			return 1;
		case joaat("TREASURE_HUNT_LOOT_10"):
			return func_6(joaat("DOCUMENT_TREASURE_MAP_07"), 1, 0);
		case joaat("TREASURE_HUNT_LOOT_11"):
			return func_6(joaat("DOCUMENT_TREASURE_MAP_08"), 1, 0);
		case joaat("TREASURE_HUNT_LOOT_12"):
			return func_6(joaat("DOCUMENT_TREASURE_MAP_09"), 1, 0);
		case joaat("TREASURE_HUNT_LOOT_13"):
			return 1;
		case joaat("TREASURE_HUNT_LOOT_14"):
			return func_6(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0);
		case joaat("TREASURE_HUNT_LOOT_15"):
			return func_6(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0);
		case joaat("TREASURE_HUNT_LOOT_16"):
			return 1;
		case joaat("TREASURE_HUNT_LOOT_17"):
			return func_6(joaat("DOCUMENT_TREASURE_MAP_13"), 1, 0);
		case joaat("TREASURE_HUNT_LOOT_18"):
			return func_6(joaat("DOCUMENT_TREASURE_MAP_14"), 1, 0);
		case joaat("TREASURE_HUNT_LOOT_19"):
			return func_6(joaat("DOCUMENT_TREASURE_MAP_15"), 1, 0);
		case joaat("TREASURE_HUNT_LOOT_20"):
			return 1;
		case joaat("TREASURE_HUNT_LOOT_21"):
			return func_6(joaat("DOCUMENT_TREASURE_MAP_16"), 1, 0);
		case joaat("TREASURE_HUNT_LOOT_22"):
			return func_6(joaat("DOCUMENT_TREASURE_MAP_17"), 1, 0);
		case joaat("TREASURE_HUNT_LOOT_23"):
			return func_6(joaat("DOCUMENT_TREASURE_MAP_18"), 1, 0);
		case joaat("TREASURE_HUNT_LOOT_24"):
			return func_6(joaat("DOCUMENT_TREASURE_MAP_19"), 1, 0);
		default:
			break;
	}
	return 0;
}

void func_14(int iParam0, bool bParam1)
{
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iParam0->f_7))
	{
		if (bParam1)
		{
			if (!TASK::_0x0CC36D4156006509(iParam0->f_7))
			{
				TASK::_SET_SCENARIO_POINT_ACTIVE(iParam0->f_7, true);
			}
		}
		else if (TASK::_0x0CC36D4156006509(iParam0->f_7))
		{
			TASK::_SET_SCENARIO_POINT_ACTIVE(iParam0->f_7, false);
		}
	}
}

int func_15(var uParam0)
{
	return func_51(uParam0, 5);
}

void func_16(var uParam0)
{
	Global_1935496->f_59.f_6 = 1;
	Global_1935496->f_59.f_7 = 0;
	Global_1935496->f_59.f_1 = uParam0;
	Global_1935496->f_59.f_5 = MISC::GET_GAME_TIMER();
}

int func_17(int iParam0)
{
	switch (iParam0->f_9)
	{
		case joaat("TREASURE_HUNT_LOOT_19"):
		case joaat("TREASURE_HUNT_LOOT_04"):
		case joaat("TREASURE_HUNT_LOOT_05"):
		case joaat("TREASURE_HUNT_LOOT_01"):
		case joaat("TREASURE_HUNT_LOOT_24"):
		case joaat("TREASURE_HUNT_LOOT_20"):
		case joaat("TREASURE_HUNT_LOOT_15"):
			return func_52(iParam0);
		case joaat("TREASURE_HUNT_LOOT_12"):
		case joaat("TREASURE_HUNT_LOOT_13"):
		case joaat("TREASURE_HUNT_LOOT_02"):
		case joaat("TREASURE_HUNT_LOOT_18"):
		case joaat("TREASURE_HUNT_LOOT_03"):
		case joaat("TREASURE_HUNT_LOOT_17"):
		case joaat("TREASURE_HUNT_LOOT_10"):
		case joaat("TREASURE_HUNT_LOOT_07"):
		case joaat("TREASURE_HUNT_LOOT_21"):
		case joaat("TREASURE_HUNT_LOOT_11"):
		case joaat("TREASURE_HUNT_LOOT_06"):
		case joaat("TREASURE_HUNT_LOOT_09"):
		case joaat("TREASURE_HUNT_LOOT_23"):
		case joaat("TREASURE_HUNT_LOOT_22"):
		case joaat("TREASURE_HUNT_LOOT_08"):
			if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_3))
			{
				TASK::_0xA6A76D666A281F2D(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0->f_3), joaat("DOCUMENT_GENERIC_MAP_ROLLED"));
			}
			return func_53(joaat("DOCUMENT_GENERIC_MAP_ROLLED"));
		case joaat("TREASURE_HUNT_LOOT_14"):
			if (func_38(iParam0->f_8))
			{
				if (func_55(Global_35, func_54(iParam0->f_8), 1.6f, 1, 1))
				{
					func_56(iParam0->f_8, -739709650, 0, 1);
					HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 1.6f, 1, 1, -739709650, "TH_ITEM_UNKNOWN", 0);
				}
			}
			func_57(iParam0->f_8, func_55(Global_35, func_54(iParam0->f_8), 1.6f, 1, 1), 1);
			func_58(iParam0->f_8, func_55(Global_35, func_54(iParam0->f_8), 1.6f, 1, 1), 1);
			if (func_59(iParam0->f_8, 1))
			{
				func_8(&(iParam0->f_8), 1, 1);
				return 1;
			}
			break;
		case joaat("TREASURE_HUNT_LOOT_16"):
			if (func_60(Global_35))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_18(int iParam0)
{
	switch (iParam0->f_9)
	{
		case joaat("TREASURE_HUNT_LOOT_12"):
		case joaat("TREASURE_HUNT_LOOT_13"):
		case joaat("TREASURE_HUNT_LOOT_02"):
		case joaat("TREASURE_HUNT_LOOT_18"):
		case joaat("TREASURE_HUNT_LOOT_03"):
		case joaat("TREASURE_HUNT_LOOT_19"):
		case joaat("TREASURE_HUNT_LOOT_04"):
		case joaat("TREASURE_HUNT_LOOT_17"):
		case joaat("TREASURE_HUNT_LOOT_05"):
		case joaat("TREASURE_HUNT_LOOT_10"):
		case joaat("TREASURE_HUNT_LOOT_07"):
		case joaat("TREASURE_HUNT_LOOT_21"):
		case joaat("TREASURE_HUNT_LOOT_01"):
		case joaat("TREASURE_HUNT_LOOT_11"):
		case joaat("TREASURE_HUNT_LOOT_06"):
		case joaat("TREASURE_HUNT_LOOT_24"):
		case joaat("TREASURE_HUNT_LOOT_20"):
		case joaat("TREASURE_HUNT_LOOT_09"):
		case joaat("TREASURE_HUNT_LOOT_23"):
		case joaat("TREASURE_HUNT_LOOT_22"):
		case joaat("TREASURE_HUNT_LOOT_08"):
		case joaat("TREASURE_HUNT_LOOT_15"):
			return !PED::IS_PED_USING_ANY_SCENARIO(Global_35);
		case joaat("TREASURE_HUNT_LOOT_16"):
			return !func_60(Global_35);
		case joaat("TREASURE_HUNT_LOOT_14"):
			if (ANIMSCENE::_0xD8254CB2C586412B(iParam0->f_1, 0))
			{
				return 1;
			}
			else if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(iParam0->f_1, 0))
			{
				if (!func_61(Global_35, 2326.918f, -1514.827f, 41.0862f, 19.5502f, 0.1f, 5f, 1))
				{
					if (!func_62(Global_35, 2106541073) && func_63(Global_35))
					{
						TASK::TASK_GO_STRAIGHT_TO_COORD(Global_35, 2326.918f, -1514.827f, 41.0862f, 1f, -1, 19.5502f, 0.1f, 0);
					}
				}
				else
				{
					ANIMSCENE::START_ANIM_SCENE(iParam0->f_1);
				}
			}
			break;
	}
	return 0;
}

int func_19(int iParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	switch (iParam0->f_9)
	{
		case joaat("TREASURE_HUNT_LOOT_01"):
			bVar0 = false;
			iVar1 = 0;
			break;
		case joaat("TREASURE_HUNT_LOOT_02"):
			bVar0 = joaat("PROVISION_NECKLACE_PEARL");
			iVar1 = 1;
			break;
		case joaat("TREASURE_HUNT_LOOT_03"):
			bVar0 = false;
			iVar1 = 1500;
			break;
		case joaat("TREASURE_HUNT_LOOT_04"):
			bVar0 = joaat("PROVISION_GOLDBAR_LARGE");
			iVar1 = 2;
			break;
		case joaat("TREASURE_HUNT_LOOT_05"):
			bVar0 = false;
			iVar1 = 0;
			break;
		case joaat("TREASURE_HUNT_LOOT_06"):
			bVar0 = false;
			iVar1 = 500;
			break;
		case joaat("TREASURE_HUNT_LOOT_07"):
			bVar0 = false;
			iVar1 = 1500;
			break;
		case joaat("TREASURE_HUNT_LOOT_08"):
			bVar0 = joaat("PROVISION_GOLDBAR_LARGE");
			iVar1 = 3;
			break;
		case joaat("TREASURE_HUNT_LOOT_09"):
			bVar0 = false;
			iVar1 = 0;
			break;
		case joaat("TREASURE_HUNT_LOOT_10"):
			bVar0 = false;
			iVar1 = 1000;
			break;
		case joaat("TREASURE_HUNT_LOOT_11"):
			bVar0 = joaat("PROVISION_BRACELET_PLATINUM");
			iVar1 = 1;
			break;
		case joaat("TREASURE_HUNT_LOOT_12"):
			bVar0 = joaat("PROVISION_GOLDBAR_LARGE");
			iVar1 = 4;
			break;
		case joaat("TREASURE_HUNT_LOOT_13"):
			bVar0 = false;
			iVar1 = 0;
			break;
		case joaat("TREASURE_HUNT_LOOT_14"):
			bVar0 = false;
			iVar1 = 3000;
			break;
		case joaat("TREASURE_HUNT_LOOT_15"):
			bVar0 = joaat("PROVISION_GOLDBAR_LARGE");
			iVar1 = 6;
			break;
		case joaat("TREASURE_HUNT_LOOT_16"):
			bVar0 = false;
			iVar1 = 0;
			break;
		case joaat("TREASURE_HUNT_LOOT_17"):
			bVar0 = joaat("CONSUMABLE_CRAFTED_SUPER_MEAL");
			iVar1 = 1;
			break;
		case joaat("TREASURE_HUNT_LOOT_18"):
			bVar0 = joaat("CONSUMABLE_HORSE_REVIVER");
			iVar1 = 1;
			break;
		case joaat("TREASURE_HUNT_LOOT_19"):
			bVar0 = false;
			iVar1 = 3;
			break;
		case joaat("TREASURE_HUNT_LOOT_20"):
			bVar0 = joaat("PROVISION_EARRING_GOLD");
			iVar1 = 1;
			break;
		case joaat("TREASURE_HUNT_LOOT_21"):
			bVar0 = joaat("PROVISION_EARRING_SILVER");
			iVar1 = 1;
			break;
		case joaat("TREASURE_HUNT_LOOT_22"):
			bVar0 = joaat("PROVISION_BRACELET_GOLD");
			iVar1 = 1;
			break;
		case joaat("TREASURE_HUNT_LOOT_23"):
			bVar0 = joaat("PROVISION_BRACELET_SILVER");
			iVar1 = 1;
			break;
		case joaat("TREASURE_HUNT_LOOT_24"):
			bVar0 = joaat("PROVISION_GOLDBAR_LARGE");
			iVar1 = 6;
			break;
		default:
			break;
	}
	if (iVar1 > 0)
	{
		if (bVar0 != 0)
		{
			MISC::_0xB1F6665AA54DCD5C(bVar0);
			func_64(bVar0, iVar1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		}
		else if (iParam0->f_9 == joaat("TREASURE_HUNT_LOOT_19"))
		{
			if (!iParam0->f_21)
			{
				func_64(joaat("CONSUMABLE_SPECIAL_HORSE_STIMULANT_CRAFTED"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				iParam0->f_21 = 1;
				return 0;
			}
			if (!iParam0->f_22)
			{
				func_64(joaat("CONSUMABLE_SPECIAL_HORSE_MEDICINE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				iParam0->f_22 = 1;
				return 0;
			}
			if (!iParam0->f_23)
			{
				func_64(joaat("PROVISION_GOLDBAR_LARGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				iParam0->f_23 = 1;
				return 0;
			}
			if (!iParam0->f_24)
			{
				func_64(joaat("PROVISION_TRINKET_CROW_BEAK"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				iParam0->f_24 = 1;
				return 1;
			}
		}
		else
		{
			func_65(iVar1, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
		}
	}
	if (!func_28(iParam0->f_9))
	{
		bVar2 = func_15(iParam0->f_9);
		func_64(bVar2, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	}
	return 1;
}

int func_20()
{
	if (func_66() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == joaat("PLAYER_ZERO"))
	{
		return 1;
	}
	return 0;
}

var func_21(bool bParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> Var0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_67(bParam0, &Var0);
}

int func_22()
{
	if (func_66() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return 1;
	}
	return 0;
}

bool func_23(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_66() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iVar1]), iVar2);
}

void func_24(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_68(iParam0, &iVar0, &iVar1);
	if (!func_69(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_70(iVar0, iVar1);
}

bool func_25(int iParam0)
{
	return (((((iParam0 == joaat("TREASURE_HUNT_LOOT_01") || iParam0 == joaat("TREASURE_HUNT_LOOT_05")) || iParam0 == joaat("TREASURE_HUNT_LOOT_09")) || iParam0 == joaat("TREASURE_HUNT_LOOT_13")) || iParam0 == joaat("TREASURE_HUNT_LOOT_16")) || iParam0 == joaat("TREASURE_HUNT_LOOT_20"));
}

struct<2> func_26(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

void func_27(var uParam0, bool bParam1, bool bParam2)
{
	STATS::_0x6A0184E904CDF25E(&uParam0, bParam2);
}

bool func_28(int iParam0)
{
	return (((((iParam0 == joaat("TREASURE_HUNT_LOOT_04") || iParam0 == joaat("TREASURE_HUNT_LOOT_08")) || iParam0 == joaat("TREASURE_HUNT_LOOT_12")) || iParam0 == joaat("TREASURE_HUNT_LOOT_15")) || iParam0 == joaat("TREASURE_HUNT_LOOT_19")) || iParam0 == joaat("TREASURE_HUNT_LOOT_24"));
}

void func_29(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	vector3 vVar4;

	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_JACK_HALL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = joaat("COL_TH_SUB_JACK_HALL");
			break;
		case 666607663:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_HIGH_STAKES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = joaat("COL_TH_SUB_HIGH_STAKES");
			break;
		case -220219788:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_POISONOUS_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = joaat("COL_TH_SUB_POISONOUS_TRAIL");
			break;
		case 218622660:
			sVar3 = "COL_TH_SUB_TRESOR_DES_MORTS";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = joaat("COL_TH_SUB_TRESOR_DES_MORTS");
			break;
		case 390004462:
			sVar3 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = joaat("COL_TH_SUB_ELEMENTAL_TRAIL");
			break;
		case 6410548:
			sVar3 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = joaat("COL_TH_SUB_LANDMARKS_OF_RICHES");
			break;
	}
	switch (iParam1)
	{
		case joaat("TREASURE_HUNT_LOOT_01"):
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_01";
			break;
		case joaat("TREASURE_HUNT_LOOT_02"):
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_02";
			break;
		case joaat("TREASURE_HUNT_LOOT_03"):
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_03";
			break;
		case joaat("TREASURE_HUNT_LOOT_04"):
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_04";
			break;
		case joaat("TREASURE_HUNT_LOOT_05"):
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_01";
			break;
		case joaat("TREASURE_HUNT_LOOT_06"):
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_02";
			break;
		case joaat("TREASURE_HUNT_LOOT_07"):
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_03";
			break;
		case joaat("TREASURE_HUNT_LOOT_08"):
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_04";
			break;
		case joaat("TREASURE_HUNT_LOOT_09"):
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_01";
			break;
		case joaat("TREASURE_HUNT_LOOT_10"):
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_02";
			break;
		case joaat("TREASURE_HUNT_LOOT_11"):
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_03";
			break;
		case joaat("TREASURE_HUNT_LOOT_12"):
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_04";
			break;
		case joaat("TREASURE_HUNT_LOOT_13"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_01";
			break;
		case joaat("TREASURE_HUNT_LOOT_14"):
			sVar1 = "COL_TH_OBJ_RDL";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_02";
			break;
		case joaat("TREASURE_HUNT_LOOT_15"):
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_03";
			break;
		case joaat("TREASURE_HUNT_LOOT_16"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_01";
			break;
		case joaat("TREASURE_HUNT_LOOT_17"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_02";
			break;
		case joaat("TREASURE_HUNT_LOOT_18"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_03";
			break;
		case joaat("TREASURE_HUNT_LOOT_19"):
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_04";
			break;
		case joaat("TREASURE_HUNT_LOOT_20"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_01";
			break;
		case joaat("TREASURE_HUNT_LOOT_21"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_02";
			break;
		case joaat("TREASURE_HUNT_LOOT_22"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_03";
			break;
		case joaat("TREASURE_HUNT_LOOT_23"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_04";
			break;
		case joaat("TREASURE_HUNT_LOOT_24"):
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_05";
			break;
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar0))
	{
		UILOG::_UILOG_REMOVE_ENTRY(3, iVar0);
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar0))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iVar0, vVar4, MISC::GET_HASH_KEY("COL_TH_TITLE"), MISC::GET_HASH_KEY(sVar2), 0);
	}
	if (bParam2)
	{
		switch (iParam0)
		{
			case 499813453:
				sVar1 = "COL_TH_JACK_HALL_COMPLETE";
				break;
			case 666607663:
				sVar1 = "COL_TH_HIGH_STAKES_COMPLETE";
				break;
			case -220219788:
				sVar1 = "COL_TH_POISONOUS_TRAIL_COMPLETE";
				break;
			case 218622660:
				sVar1 = "COL_TH_TRESOR_DES_MORTS_COMPLETE";
				break;
			case 390004462:
				sVar1 = "COL_TH_ELEMENTAL_TRAIL_COMPLETE";
				break;
			case 6410548:
				sVar1 = "COL_TH_LANDMARKS_OF_RICHES_COMPLETE";
				break;
		}
	}
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iVar0, MISC::GET_HASH_KEY(sVar1), sVar1, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iVar0, true);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iVar0, MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), MISC::GET_HASH_KEY("toast_log_blips"));
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iVar0, MISC::GET_HASH_KEY("MISSION_RETH"), MISC::GET_HASH_KEY("SP_MISSIONS_19"));
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iVar0, MISC::_CREATE_VAR_STRING(2, sVar3));
}

void func_30(int iParam0, bool bParam1)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;

	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_JACK_HALL";
			iVar0 = joaat("COL_TH_SUB_JACK_HALL");
			break;
		case 666607663:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_HIGH_STAKES";
			iVar0 = joaat("COL_TH_SUB_HIGH_STAKES");
			break;
		case -220219788:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_POISONOUS_TRAIL";
			iVar0 = joaat("COL_TH_SUB_POISONOUS_TRAIL");
			break;
		case 218622660:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_TRESOR_DES_MORTS";
			iVar0 = joaat("COL_TH_SUB_TRESOR_DES_MORTS");
			break;
		case 390004462:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			iVar0 = joaat("COL_TH_SUB_ELEMENTAL_TRAIL");
			break;
		case 6410548:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			iVar0 = joaat("COL_TH_SUB_LANDMARKS_OF_RICHES");
			break;
	}
	sVar3 = "COL_CTX_PLAYER_LOG";
	if (bParam1)
	{
		sVar1 = "MISSION_COMPLETE";
	}
	UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar0);
	func_71(MISC::_CREATE_VAR_STRING(2, sVar1), MISC::_CREATE_VAR_STRING(2, sVar2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar3), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_31(int iParam0)
{
	switch (iParam0)
	{
		case joaat("TREASURE_HUNT_LOOT_04"):
			func_72(8);
			break;
		case joaat("TREASURE_HUNT_LOOT_08"):
			func_73(8);
			break;
		case joaat("TREASURE_HUNT_LOOT_12"):
			func_74(8);
			break;
		case joaat("TREASURE_HUNT_LOOT_15"):
			func_75(4);
			break;
		case joaat("TREASURE_HUNT_LOOT_19"):
			func_76(8);
			break;
		case joaat("TREASURE_HUNT_LOOT_24"):
			func_77(16);
			break;
	}
}

void func_32(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_78(&Global_0, 8);
	}
	if (!func_79() || func_66() != -1)
	{
		return;
	}
	func_78(&Global_0, 1);
}

void func_33(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_80(iParam0, iParam1))
		{
			func_81((*Global_1901328)[iParam0], iParam1);
		}
	}
	else if (func_80(iParam0, iParam1))
	{
		func_82((*Global_1901328)[iParam0], iParam1);
	}
}

bool func_34(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(bParam0, iParam1);
}

int func_35(bool bParam0)
{
	vector3 vVar0;

	if (!func_34(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_36(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_34(bParam0, 0))
	{
		return 0;
	}
	if (Global_1935630->f_12)
	{
		return 0;
	}
	iVar0 = func_83(bParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_84("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_85(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_86(Var4.f_4))
			{
			}
			else if (WEAPON::_0x5C2EA6C44F515F34(Var4.f_4) == iVar0)
			{
				func_87(iVar1);
				return 1;
			}
			iVar3++;
		}
		func_87(iVar1);
	}
	return 0;
}

int func_37(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	if (!func_34(bParam0, 0))
	{
		return 0;
	}
	iVar0 = func_35(bParam0);
	if (iVar0 == joaat("AMMO") || (bParam1 && iVar0 == joaat("WEAPON")))
	{
		bVar1 = func_83(bParam0, 1);
		if (bVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, bVar1);
		}
	}
	else if (iVar0 == joaat("WEAPON"))
	{
		return func_88(bParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_89(bParam2), bParam0, 0);
	return iVar2;
}

bool func_38(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 48)
	{
		return false;
	}
	if (((*Global_1945938)[iParam0 /*18*/])->f_1 & 2 == 0)
	{
		return false;
	}
	return HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3);
}

int func_39(int iParam0)
{
	return iParam0;
}

void func_40(int iParam0)
{
	if (!func_90(iParam0))
	{
		return;
	}
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_DELETE(((*Global_1945938)[iParam0 /*18*/])->f_3);
	}
	((*Global_1945938)[iParam0 /*18*/])->f_4 = 0;
	(*Global_1945938)[iParam0 /*18*/] = 1;
	((*Global_1945938)[iParam0 /*18*/])->f_16 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_1 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_6 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_12 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_9 = 0f;
	((*Global_1945938)[iParam0 /*18*/])->f_10 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_11 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_2 = 1;
	((*Global_1945938)[iParam0 /*18*/])->f_15 = -1f;
}

void func_41(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_91(iParam0, 0, 0);
	if (func_92(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam2, iParam6);
		if (fParam5 > 0f)
		{
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_93(iParam0, fParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_94(iParam0, 1);
			}
			else
			{
				func_95(iParam0, 1);
			}
		}
		else
		{
			func_96(iParam0, 1);
		}
		if (bParam7)
		{
			OBJECT::_0x276AAF0F1C7F2494(iParam0, 1);
		}
	}
	else if (func_97())
	{
	}
	else if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
}

bool func_42(int iParam0)
{
	return (((iParam0 == joaat("TREASURE_HUNT_LOOT_04") || iParam0 == joaat("TREASURE_HUNT_LOOT_09")) || iParam0 == joaat("TREASURE_HUNT_LOOT_19")) || iParam0 == joaat("TREASURE_HUNT_LOOT_24"));
}

Vector3 func_43(int iParam0)
{
	switch (iParam0)
	{
		case joaat("TREASURE_HUNT_LOOT_12"):
		case joaat("TREASURE_HUNT_LOOT_13"):
		case joaat("TREASURE_HUNT_LOOT_02"):
		case joaat("TREASURE_HUNT_LOOT_18"):
		case joaat("TREASURE_HUNT_LOOT_03"):
		case joaat("TREASURE_HUNT_LOOT_16"):
		case joaat("TREASURE_HUNT_LOOT_17"):
		case joaat("TREASURE_HUNT_LOOT_05"):
		case joaat("TREASURE_HUNT_LOOT_10"):
		case joaat("TREASURE_HUNT_LOOT_07"):
		case joaat("TREASURE_HUNT_LOOT_21"):
		case joaat("TREASURE_HUNT_LOOT_01"):
		case joaat("TREASURE_HUNT_LOOT_11"):
		case joaat("TREASURE_HUNT_LOOT_06"):
		case joaat("TREASURE_HUNT_LOOT_20"):
		case joaat("TREASURE_HUNT_LOOT_23"):
		case joaat("TREASURE_HUNT_LOOT_22"):
		case joaat("TREASURE_HUNT_LOOT_08"):
		case joaat("TREASURE_HUNT_LOOT_14"):
		case joaat("TREASURE_HUNT_LOOT_15"):
			break;
		case joaat("TREASURE_HUNT_LOOT_04"):
			return 1619.196f, 1487.477f, 145.2347f;
		case joaat("TREASURE_HUNT_LOOT_09"):
			return -948.5673f, 2170.246f, 341.1542f;
		case joaat("TREASURE_HUNT_LOOT_19"):
			return -3309.31f, -2840.246f, -6.90814f;
		case joaat("TREASURE_HUNT_LOOT_24"):
			return -2154.84f, 78.2389f, 309.889f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_44(var uParam0, bool bParam1, vector3 vParam2)
{
	int iVar0;

	if (uParam0->f_5 == 0)
	{
		uParam0->f_5 = ENTITY::_0x6F3068258A499E52(bParam1, vParam2, 15);
	}
	if (uParam0->f_5 != 0)
	{
		if (ENTITY::_0x1FF441D7954F8709(uParam0->f_5))
		{
			iVar0 = ENTITY::_0x4735E2A4BB83D9DA(uParam0->f_5);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				uParam0->f_5 = 0;
				return iVar0;
			}
		}
	}
	return 0;
}

Vector3 func_45(int iParam0)
{
	switch (iParam0)
	{
		case joaat("TREASURE_HUNT_LOOT_01"):
			break;
		case joaat("TREASURE_HUNT_LOOT_02"):
			return 0.4038f, 72.004f, 94.3616f;
		case joaat("TREASURE_HUNT_LOOT_03"):
			return 28.6783f, 137.626f, 79.4364f;
		case joaat("TREASURE_HUNT_LOOT_04"):
			break;
		case joaat("TREASURE_HUNT_LOOT_05"):
			break;
		case joaat("TREASURE_HUNT_LOOT_06"):
			return 0f, 0f, 0f;
		case joaat("TREASURE_HUNT_LOOT_07"):
			return 90f, 0f, 0f;
		case joaat("TREASURE_HUNT_LOOT_08"):
			return 2.9422f, -89.7569f, -108.628f;
		case joaat("TREASURE_HUNT_LOOT_09"):
			return 5f, 0f, 110f;
		case joaat("TREASURE_HUNT_LOOT_10"):
			return 60.2193f, 22.7947f, 151.423f;
		case joaat("TREASURE_HUNT_LOOT_11"):
			return 90f, 0f, 0f;
		case joaat("TREASURE_HUNT_LOOT_12"):
			return 1.68002f, -26.8184f, -178.667f;
		case joaat("TREASURE_HUNT_LOOT_13"):
			return 0.0922233f, 0.0055108f, -158.9106f;
		case joaat("TREASURE_HUNT_LOOT_14"):
			return 22.85511f, -2.095421f, 170.8128f;
		case joaat("TREASURE_HUNT_LOOT_15"):
			break;
		case joaat("TREASURE_HUNT_LOOT_16"):
			return 0f, 0f, 90f;
		case joaat("TREASURE_HUNT_LOOT_17"):
			return 0f, 0f, 90f;
		case joaat("TREASURE_HUNT_LOOT_18"):
			return 0f, 0f, 90f;
		case joaat("TREASURE_HUNT_LOOT_19"):
			return 0f, 0f, -112.5f;
		case joaat("TREASURE_HUNT_LOOT_20"):
			return 0f, 0f, 90f;
		case joaat("TREASURE_HUNT_LOOT_21"):
			return 0f, 0f, 90f;
		case joaat("TREASURE_HUNT_LOOT_22"):
			return 0f, 0f, 18.7701f;
		case joaat("TREASURE_HUNT_LOOT_23"):
			return 60.2193f, 22.7947f, 151.423f;
		case joaat("TREASURE_HUNT_LOOT_24"):
			return 0f, 0f, -126.57f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_46(int iParam0)
{
	return ((((((((((((((((((iParam0 == joaat("TREASURE_HUNT_LOOT_02") || iParam0 == joaat("TREASURE_HUNT_LOOT_03")) || iParam0 == joaat("TREASURE_HUNT_LOOT_06")) || iParam0 == joaat("TREASURE_HUNT_LOOT_07")) || iParam0 == joaat("TREASURE_HUNT_LOOT_08")) || iParam0 == joaat("TREASURE_HUNT_LOOT_09")) || iParam0 == joaat("TREASURE_HUNT_LOOT_10")) || iParam0 == joaat("TREASURE_HUNT_LOOT_11")) || iParam0 == joaat("TREASURE_HUNT_LOOT_12")) || iParam0 == joaat("TREASURE_HUNT_LOOT_13")) || iParam0 == joaat("TREASURE_HUNT_LOOT_14")) || iParam0 == joaat("TREASURE_HUNT_LOOT_17")) || iParam0 == joaat("TREASURE_HUNT_LOOT_18")) || iParam0 == joaat("TREASURE_HUNT_LOOT_19")) || iParam0 == joaat("TREASURE_HUNT_LOOT_20")) || iParam0 == joaat("TREASURE_HUNT_LOOT_21")) || iParam0 == joaat("TREASURE_HUNT_LOOT_22")) || iParam0 == joaat("TREASURE_HUNT_LOOT_23")) || iParam0 == joaat("TREASURE_HUNT_LOOT_24"));
}

Vector3 func_47(int iParam0)
{
	switch (iParam0)
	{
		case joaat("TREASURE_HUNT_LOOT_01"):
			break;
		case joaat("TREASURE_HUNT_LOOT_02"):
			return -367.073f, 300.103f, 89.3992f;
		case joaat("TREASURE_HUNT_LOOT_03"):
			return 131.066f, 1828.48f, 199.709f;
		case joaat("TREASURE_HUNT_LOOT_04"):
			break;
		case joaat("TREASURE_HUNT_LOOT_05"):
			break;
		case joaat("TREASURE_HUNT_LOOT_06"):
			return -1043.863f, 422.0207f, 46.7672f;
		case joaat("TREASURE_HUNT_LOOT_07"):
			return -948.708f, 1634.25f, 243.932f;
		case joaat("TREASURE_HUNT_LOOT_08"):
			return 416.896f, 1603.25f, 186.269f;
		case joaat("TREASURE_HUNT_LOOT_09"):
			return -948.5673f, 2170.226f, 341.2442f;
		case joaat("TREASURE_HUNT_LOOT_10"):
			return 1099.8f, -648.547f, 97.8322f;
		case joaat("TREASURE_HUNT_LOOT_11"):
			return 2675.02f, 424.892f, 81.822f;
		case joaat("TREASURE_HUNT_LOOT_12"):
			return 2315.73f, 1051.17f, 66.8781f;
		case joaat("TREASURE_HUNT_LOOT_13"):
			return -323.0331f, -150.1928f, 50.8848f;
		case joaat("TREASURE_HUNT_LOOT_14"):
			return 2326.717f, -1513.747f, 42.9361f;
		case joaat("TREASURE_HUNT_LOOT_15"):
			break;
		case joaat("TREASURE_HUNT_LOOT_16"):
			return -6325.941f, -3671.488f, -13.46066f;
		case joaat("TREASURE_HUNT_LOOT_17"):
			return -2775.088f, -3209.429f, -7.9952f;
		case joaat("TREASURE_HUNT_LOOT_18"):
			return -5216.411f, -3442.451f, -16.056f;
		case joaat("TREASURE_HUNT_LOOT_19"):
			break;
		case joaat("TREASURE_HUNT_LOOT_20"):
			return -2936.589f, -138.6445f, 199.2321f;
		case joaat("TREASURE_HUNT_LOOT_21"):
			return 2415.474f, -738.765f, 45.443f;
		case joaat("TREASURE_HUNT_LOOT_22"):
			return 745.325f, 1819.233f, 241.2053f;
		case joaat("TREASURE_HUNT_LOOT_23"):
			return 1499.408f, -1836.724f, 56.8159f;
		case joaat("TREASURE_HUNT_LOOT_24"):
			break;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_48()
{
	return func_80(13, 2);
}

int func_49(int iParam0)
{
	if (!func_98(iParam0))
	{
		return 0;
	}
	if (!func_99(iParam0))
	{
		return 0;
	}
	if (!func_100(iParam0))
	{
		return 0;
	}
	if (!(ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(iParam0->f_4) && ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(iParam0->f_11)))
	{
		return 0;
	}
	if (!iParam0->f_16)
	{
		if (!func_101(iParam0))
		{
			return 0;
		}
		else
		{
			iParam0->f_16 = 1;
		}
	}
	if (!PED::IS_PED_RAGDOLL(iParam0->f_4))
	{
		PED::SET_PED_TO_RAGDOLL(iParam0->f_4, 0, 0, 0, true, true, false);
		return 1;
	}
	return 0;
}

int func_50(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13, int iParam14, bool bParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_0xBC0884BC590951C7(iParam1, 0))
	{
		return 0;
	}
	if (func_102(vParam2))
	{
		return 0;
	}
	if (fParam5 <= 0f)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_103(iVar0, 2))
		{
			if (func_104(vParam2, ((*Global_1945938)[iVar0 /*18*/])->f_6, 0.01f, 1) && iParam1 == ((*Global_1945938)[iVar0 /*18*/])->f_4)
			{
				iVar2 = iVar0;
				return iVar2;
			}
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_105(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, bParam13, iParam14, 1065353216 /* Float: 1f */, 0, 0, 0, bParam15, iParam16);
		return iVar1;
	}
	return 0;
}

int func_51(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;

	if (!func_106(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
	return uVar5;
}

int func_52(var uParam0)
{
	if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_7))
	{
		if (PED::IS_PED_USING_ANY_SCENARIO(Global_35))
		{
			if (TASK::_0xDF7993356F52359A(Global_35, 0) == uParam0->f_7)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_53(int iParam0)
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

Vector3 func_54(var uParam0)
{
	int iVar0;

	iVar0 = func_39(uParam0);
	return func_107(iVar0);
}

int func_55(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (bParam6)
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
		{
			return 1;
		}
	}
	else if (func_108(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return 1;
	}
	return 0;
}

void func_56(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_38(iParam0))
	{
		return;
	}
	iVar0 = func_39(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_GROUP(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam1, iParam2);
}

void func_57(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_38(iParam0))
	{
		return;
	}
	iVar0 = func_39(iParam0);
	func_109(iVar0, bParam1);
}

void func_58(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_38(iParam0))
	{
		return;
	}
	iVar0 = func_39(iParam0);
	if (bParam1)
	{
		func_110(iParam0, 4);
		func_109(iVar0, 1);
		func_111(iVar0, 1);
	}
	else
	{
		func_112(iParam0, 4);
		func_111(iVar0, 0);
	}
}

bool func_59(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_38(iParam0))
	{
		return false;
	}
	iVar0 = func_39(iParam0);
	if (HUD::_UIPROMPT_HAS_MASH_MODE(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

int func_60(bool bParam0)
{
	var uVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(bParam0))
	{
		return 0;
	}
	if (PED::_0x5463C962BC7777C3(bParam0, 0, &uVar0, 1, 1) != 0)
	{
		return 1;
	}
	if (PED::_0x5463C962BC7777C3(bParam0, 2, &uVar0, 1, 1) != 0)
	{
		return 1;
	}
	if (PED::_0x5463C962BC7777C3(bParam0, 1, &uVar0, 1, 1) != 0)
	{
		return 1;
	}
	if (PED::_0x758F081DB204DDDE(bParam0))
	{
		return 1;
	}
	return 0;
}

int func_61(int iParam0, vector3 vParam1, float fParam4, float fParam5, float fParam6, bool bParam7)
{
	float fVar0;

	fVar0 = func_113(ENTITY::GET_ENTITY_HEADING(iParam0));
	fParam4 = func_113(fParam4);
	if (ENTITY::IS_ENTITY_AT_COORD(iParam0, vParam1, fParam5, fParam5, 2f, false, bParam7, 0) && MISC::ABSF((fVar0 - fParam4)) <= fParam6)
	{
		return 1;
	}
	return 0;
}

int func_62(bool bParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		if (!PED::IS_PED_INJURED(bParam0))
		{
			if (iParam1 == 2104565373 && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(bParam0))
			{
				return 1;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(bParam0, iParam1, true) == 1 || TASK::GET_SCRIPT_TASK_STATUS(bParam0, iParam1, true) == 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_63(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 1;
	WEAPON::GET_CURRENT_PED_WEAPON(bParam0, &iVar1, true, 0, false);
	if (iVar1 != joaat("WEAPON_UNARMED"))
	{
		if (!func_62(bParam0, 716706914))
		{
			WEAPON::_0xFCCC886EDE3C63EC(bParam0, 2, false);
			WEAPON::SET_CURRENT_PED_WEAPON(bParam0, joaat("WEAPON_UNARMED"), false, 0, false, false);
			TASK::TASK_SWAP_WEAPON(bParam0, 0, 0, 0, 0);
		}
		iVar0 = 0;
	}
	WEAPON::GET_CURRENT_PED_WEAPON(bParam0, &iVar2, true, 1, false);
	if (iVar2 != joaat("WEAPON_UNARMED"))
	{
		if (!func_62(bParam0, 716706914))
		{
			WEAPON::_0xFCCC886EDE3C63EC(bParam0, 2, false);
			WEAPON::SET_CURRENT_PED_WEAPON(bParam0, joaat("WEAPON_UNARMED"), false, 1, false, false);
			TASK::TASK_SWAP_WEAPON(bParam0, 0, 0, 0, 0);
		}
		iVar0 = 0;
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(bParam0, 716706914, true) != 8)
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_64(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	struct<13> Var11;
	int iVar34;
	struct<2> Var35;
	bool bVar37;

	if (!func_34(bParam0, 0))
	{
		return 0;
	}
	if (!func_114(bParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_115(bParam0, &bVar0, iParam1))
	{
		return 0;
	}
	func_116(bParam0, bParam2);
	iVar2 = 0;
	if (func_37(bParam0, 0, 0) == 0)
	{
		if (func_117(bParam0))
		{
			iVar5 = func_118(bParam0);
			iVar6 = func_119(iVar5);
			iVar7 = func_120(iVar6) + 1;
			func_121(iVar5);
			if (func_122(38))
			{
				func_24(483, 0);
			}
			else
			{
				func_24(482, 0);
			}
			if (iVar7 == func_123(iVar6))
			{
				func_64(func_124(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_79() && func_125(4))
				{
					if (func_79() && (func_126(38) || func_122(38)))
					{
						func_128(38, func_124(iVar6), 0, 0, func_127(), 0, -1, 0);
						func_129(2);
					}
					else
					{
						func_128(38, func_124(iVar6), 0, 0, func_127(), 0, -1, 0);
						func_129(1);
					}
				}
			}
			else if (func_79() && func_125(4))
			{
				if (func_79() && (func_126(38) || func_122(38)))
				{
					func_128(38, 0, 0, 0, func_127(), 0, -1, 0);
					func_129(2);
				}
				else
				{
					func_128(38, 0, 0, 0, func_127(), 0, -1, 0);
					func_129(1);
				}
			}
			if (func_79() && func_125(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_79() && (func_126(38) || func_122(38)))
					{
						func_130(38, COLLECTION::_0x13AAECDA43318BFE(joaat("CIGARETTE_CARDS"), iVar6), COLLECTION::_0xD52D20B0C76BB26D(joaat("CIGARETTE_CARDS"), iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_130(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_35(bParam0) == joaat("CLOTHING"))
	{
		if ((!func_131(bParam0, 866047851) && !func_131(bParam0, -1979000645)) && !func_131(bParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_132(bParam0, 8388608) && !func_133(28))
	{
		func_134(28);
	}
	if (!bVar3)
	{
		if (func_131(bParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_135(bParam0) == -1447088266)
			{
				bVar1 = func_137(func_136(bParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(bVar1))
				{
					if (func_66() == -1)
					{
						func_138(bVar1);
					}
					if (func_139(0) && func_140(bVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_141(bParam0, bVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
			else
			{
				bVar1 = WEAPON::_0x5C2EA6C44F515F34(bParam0);
				if (WEAPON::_0x1F7977C9101F807F(bVar1))
				{
					if (func_66() == -1)
					{
						func_138(bParam0);
					}
					if (func_139(0) && func_140(bParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_141(bVar1, bVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_35(bParam0) == joaat("WEAPON"))
		{
			if (!func_142(bParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_35(bParam0) == joaat("AMMO") && func_143(bParam0))
		{
			if (!func_144(bParam0, &bVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_131(bParam0, 866047851))
		{
			func_145(bParam0);
		}
		else if (func_131(bParam0, 2000026003))
		{
			func_146(bParam0);
		}
		else if (func_131(bParam0, -103750053))
		{
			func_27(func_26(joaat("CLAWS_COLLECTED")), bVar0);
		}
		else if (bParam0 == joaat("PROVISION_ALLIGATOR_TOOTH"))
		{
			func_27(func_147(joaat("COLLECTED"), joaat("ALLIGATOR_TOOTH")), bVar0);
		}
		else if (func_131(bParam0, -121341956) && !func_131(bParam0, 606799272))
		{
			if (bParam0 != joaat("WEAPON_KIT_DETECTOR") && bParam0 != 1993672959)
			{
				if (func_148(((*Global_1835011)[4 /*74*/])->f_1, 1))
				{
					func_24(498, 0);
				}
			}
			if (func_131(bParam0, -2017733358) || func_131(bParam0, -1369131378))
			{
				func_149(bParam0);
			}
		}
		else if (func_131(bParam0, -136654233))
		{
			if (func_131(bParam0, -1021472396))
			{
			}
		}
		else if (func_131(bParam0, -1466706512) && func_131(bParam0, 1147021565))
		{
			func_24(484, 0);
		}
		else if (func_131(bParam0, 1147021565) && func_131(bParam0, -524514947))
		{
		}
		else if (func_131(bParam0, 554195525))
		{
		}
		else if (func_131(bParam0, 589988438))
		{
			if (func_150())
			{
				func_151(joaat("REWARD_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_131(bParam0, 787083290) && func_131(bParam0, 949916894))
		{
			func_152(bParam0);
		}
		else if (func_131(bParam0, -1718133314))
		{
			func_153(bParam0);
		}
		else if (func_131(bParam0, -1738650224))
		{
			func_154(bParam0);
		}
		else if (func_131(bParam0, -1112814642) && func_131(bParam0, 949916894))
		{
			func_155(bParam0);
		}
		else if (bParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_131(bParam0, 1841149704))
		{
			func_156();
		}
		else if (func_131(bParam0, 606799272))
		{
			func_157(bParam0, iParam1);
			func_158(bParam0);
		}
		else if (func_131(bParam0, -1112814642) && func_131(bParam0, -1697809989))
		{
			func_159(bParam0, 0, 0, 0);
		}
		else if (func_131(bParam0, -2017733358) || func_131(bParam0, -1369131378))
		{
			func_149(bParam0);
		}
		else if (func_131(bParam0, -1921346699))
		{
			if (func_66() != -1)
			{
				return 0;
			}
			func_160(bParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_131(bParam0, 1192444843))
		{
			switch (bParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!func_6(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0))
					{
						func_64(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!func_6(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_64(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!func_6(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_64(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!func_6(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_64(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!func_6(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_64(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!func_6(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_64(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_131(bParam0, -839724752) && func_132(bParam0, 4))
		{
			if (!func_122(42))
			{
				func_161(bParam0);
			}
		}
		else if (func_131(bParam0, 1399091007))
		{
			func_162(bParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_131(bParam0, 1248798204))
		{
			bVar8 = false;
			switch (bParam0)
			{
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_008_1"):
					bVar8 = joaat("KIT_POUCH_LEGENDARY");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_002_1"):
					bVar8 = joaat("KIT_POUCH_REMEDIES");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_003_1"):
					bVar8 = joaat("KIT_POUCH_INGREDIENTS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_004_1"):
					bVar8 = joaat("KIT_POUCH_KIT");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_005_1"):
					bVar8 = joaat("KIT_POUCH_PROVISIONS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_006_1"):
					bVar8 = joaat("KIT_POUCH_MATERIALS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_007_1"):
					bVar8 = joaat("KIT_POUCH_VALUABLES");
					break;
			}
			if (bVar8 != 0)
			{
				func_64(bVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		switch (bParam0)
		{
			case joaat("AMMO_ARROW_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("ARROW_BUNDLE");
				break;
			case joaat("AMMO_THROWING_KNIVES_POISON_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("THROWING_KNIVES_POISON_BUNDLE");
				break;
			case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("BAIT_CRICKETS");
				break;
			case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("BAIT_WORMS");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_POOR");
				break;
			case joaat("UPGRADE_OFFHAND_HOLSTER"):
				func_134(24);
				if (&Global_1946804->f_1497.f_1[27 /*3*/] == &Global_1946804->f_57[27 /*11*/])
				{
					func_163(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_OFFHAND_HOLSTER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (func_164(&bVar9, 0))
				{
					func_140(bVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case joaat("UPGRADE_BANDOLIER"):
				if (func_66() == -1 && &Global_1946804->f_1497.f_1[25 /*3*/] == &Global_1946804->f_57[25 /*11*/])
				{
					func_163(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_BANDOLIER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), 1, 1, 1, 0, 1, 0);
				}
				break;
			case joaat("WEAPON_KIT_BINOCULARS"):
				break;
			case joaat("CLOTHING_LEGENDARY_EAST_OUTFIT"):
				func_24(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_165();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_166();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_167();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_168();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_169();
				break;
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				bVar4 = true;
				break;
			case joaat("DOCUMENT_TREASURE_MAP_01"):
				func_29(499813453, joaat("TREASURE_HUNT_LOOT_01"), 0);
				func_30(499813453, 0);
				func_72(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_02"):
				func_29(499813453, joaat("TREASURE_HUNT_LOOT_02"), 0);
				func_30(499813453, 0);
				func_72(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_03"):
				func_29(499813453, joaat("TREASURE_HUNT_LOOT_03"), 0);
				func_30(499813453, 0);
				func_72(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_04"):
				func_29(666607663, joaat("TREASURE_HUNT_LOOT_05"), 0);
				func_30(666607663, 0);
				func_73(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_05"):
				func_29(666607663, joaat("TREASURE_HUNT_LOOT_06"), 0);
				func_30(666607663, 0);
				func_73(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_06"):
				func_29(666607663, joaat("TREASURE_HUNT_LOOT_07"), 0);
				func_30(666607663, 0);
				func_73(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_07"):
				func_29(-220219788, joaat("TREASURE_HUNT_LOOT_09"), 0);
				func_30(-220219788, 0);
				func_74(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_08"):
				func_29(-220219788, joaat("TREASURE_HUNT_LOOT_10"), 0);
				func_30(-220219788, 0);
				func_74(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_09"):
				func_29(-220219788, joaat("TREASURE_HUNT_LOOT_11"), 0);
				func_30(-220219788, 0);
				func_74(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_10"):
				func_29(218622660, joaat("TREASURE_HUNT_LOOT_13"), 0);
				func_30(218622660, 0);
				func_75(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_11"):
				func_29(218622660, joaat("TREASURE_HUNT_LOOT_14"), 0);
				func_30(218622660, 0);
				func_75(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_13"):
				func_29(390004462, joaat("TREASURE_HUNT_LOOT_16"), 0);
				func_30(390004462, 0);
				func_76(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_14"):
				func_29(390004462, joaat("TREASURE_HUNT_LOOT_17"), 0);
				func_30(390004462, 0);
				func_76(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_15"):
				func_29(390004462, joaat("TREASURE_HUNT_LOOT_18"), 0);
				func_30(390004462, 0);
				func_76(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_16"):
				func_29(6410548, joaat("TREASURE_HUNT_LOOT_20"), 0);
				func_30(6410548, 0);
				func_77(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_17"):
				func_29(6410548, joaat("TREASURE_HUNT_LOOT_21"), 0);
				func_30(6410548, 0);
				func_77(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_18"):
				func_29(6410548, joaat("TREASURE_HUNT_LOOT_22"), 0);
				func_30(6410548, 0);
				func_77(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_19"):
				func_29(6410548, joaat("TREASURE_HUNT_LOOT_23"), 0);
				func_30(6410548, 0);
				func_77(8);
				break;
			case joaat("CONSUMABLE_AGED_PIRATE_RUM"):
				func_171(242, func_170(joaat("CONSUMABLE_AGED_PIRATE_RUM")), 0);
				break;
			case joaat("CONSUMABLE_GINSENG_ELIXIER"):
				func_171(240, func_170(joaat("CONSUMABLE_GINSENG_ELIXIER")), 0);
				break;
			case joaat("CONSUMABLE_VALERIAN_ROOT"):
				func_171(241, func_170(joaat("CONSUMABLE_VALERIAN_ROOT")), 0);
				break;
			case -1080874779: /* GXTEntry: "Special Health Cure" */
			case joaat("CONSUMABLE_POTENT_MEDICINE"):
			case joaat("CONSUMABLE_MEDICINE"):
			case joaat("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_172(594, 1934060482 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health Bar." */, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_POTENT_RESTORATIVE"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM"):
			case joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"):
			case joaat("CONSUMABLE_RESTORATIVE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_172(594, 1110018439 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Stamina Bar." */, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SNAKE_OIL"):
			case joaat("CONSUMABLE_POTENT_SNAKE_OIL"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO"):
			case joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_172(594, 1408511260 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("CONSUMABLE_TONIC"):
			case joaat("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_172(594, -1228016946 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health, Stamina and Dea" +
    "d Eye Bars." */, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -2034071102: /* GXTEntry: "Lamb Heart" */
			case -1939600995: /* GXTEntry: "Prime Rib" */
			case -1760041550: /* GXTEntry: "High Quality Beef Stew" */
			case -1708424762: /* GXTEntry: "Regional Beef Stew" */
			case -1598782722: /* GXTEntry: "Consomme" */
			case -1505924449: /* GXTEntry: "Fried Catfish" */
			case -1403873319: /* GXTEntry: "Prairie Chicken" */
			case -1335566375: /* GXTEntry: "Lamb Fry" */
			case -1192685521: /* GXTEntry: "Oyster Stew" */
			case 144810727: /* GXTEntry: "Turtle Soup" */
			case 567164682: /* GXTEntry: "Oatmeal" */
			case 1174625611: /* GXTEntry: "Corned Beef Hash" */
			case 1955751248: /* GXTEntry: "Roast Beef" */
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_172(595, -103579 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1977068039: /* GXTEntry: "High Quality Beef and Eggs Stew" */
			case -399865011: /* GXTEntry: "Regional Beef and Eggs Stew" */
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_172(595, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_HAIR_TONIC"):
				func_24(488, 0);
				break;
			case joaat("CONSUMABLE_HAIR_GREASE"):
				func_24(491, 0);
				break;
			case joaat("CONSUMABLE_CIGARETTE_BOX"):
				func_24(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_64(func_173(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_64(func_174(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case joaat("CONSUMABLE_COFFEE_GNDS_REG"):
				if (func_133(1))
				{
					func_24(487, 0);
				}
				break;
			case joaat("KIT_GUN_OIL"):
				func_24(486, 0);
				break;
			case joaat("UPGRADE_UPG_MORTAR_PESTLE"):
				if (func_66() == -1)
				{
					bParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case joaat("UPGRADE_UPG_COFFEE_KIT"):
				func_24(496, 0);
				break;
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (bVar0 <= 0)
		{
			return 0;
		}
		bVar10 = bParam0;
		func_175(&bVar10);
		if (!func_176(bVar10, bVar0, iParam5))
		{
			return 0;
		}
		else if (!func_139(0))
		{
			return 1;
		}
		if (func_35(bParam0) == joaat("CLOTHING"))
		{
			func_177(bParam0);
		}
		if (func_131(bParam0, -1979000645))
		{
			func_178(bParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_139(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_64(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_179(iVar2, 0);
		}
	}
	Var35 = { func_180(bParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var35))
	{
		STATS::_0x6A0184E904CDF25E(&Var35, bVar0);
	}
	func_181(bParam0);
	if (fParam6 > 0f)
	{
		if (func_131(bParam0, -839724752))
		{
			func_182(bParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_183(bParam0, bVar0, 0, bVar37, 0);
	}
	return 1;
}

void func_65(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_184(iParam0, sParam4, iParam5);
	}
	func_185(iParam0, bParam1, fParam2, iParam3, iParam7);
}

int func_66()
{
	return Global_1572887->f_12;
}

var func_67(bool bParam0, var uParam1)
{
	return AUDIO::_PLAY_AMBIENT_SPEECH1(bParam0, uParam1);
}

void func_68(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

int func_69(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return 0;
	}
	if (func_186(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_187(iParam0))
	{
		return 0;
	}
	if (func_188(iParam0))
	{
		return 0;
	}
	if ((Global_1898164->f_163 && !func_189(iParam0, 1)) || func_190(32768))
	{
		if (!func_189(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return 0;
		}
	}
	if (!func_191())
	{
		return 0;
	}
	return 1;
}

void func_70(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

var func_71(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	struct<5> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = iParam7;
	Var0.f_1 = sParam8;
	Var0.f_2 = sParam9;
	Var0.f_3 = iParam11;
	Var0.f_4 = iParam4;
	Var0.f_4.f_1 = iParam6;
	Var0.f_4.f_2 = sParam5;
	Var13.f_7 = 1;
	Var13 = iParam10;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _NAMESPACE71::_SHOW_ADVANCED_NOTIFICATION(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

void func_72(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_73(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_74(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_75(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_76(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_77(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

void func_78(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_79()
{
	return 1;
	if (Global_1572887->f_12 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

bool func_80(int iParam0, int iParam1)
{
	return func_192(Global_1901328[iParam0], iParam1);
}

void func_81(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_82(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_83(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_34(bParam0, 0))
	{
		return 0;
	}
	iVar0 = func_35(bParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_0x5C2EA6C44F515F34(bParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_0x1F7977C9101F807F(bParam0))
	{
		return bParam0;
	}
	if (func_131(bParam0, 1399091007))
	{
		func_193(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_84(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_89(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_85(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return 0;
	}
	if (!INVENTORY::_0x82FA24C3D3FCD9B7(iParam2, iParam1, uParam0))
	{
		return 0;
	}
	return 1;
}

bool func_86(bool bParam0)
{
	return (WEAPON::IS_WEAPON_VALID(bParam0) && bParam0 != joaat("WEAPON_UNARMED"));
}

int func_87(int iParam0)
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

int func_88(bool bParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	Var0 = { func_194(bParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_196(&Var0, func_195(0));
	}
	if (!func_197(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_87(iVar14);
	return uVar15;
}

int func_89(bool bParam0)
{
	if (func_66() == -1)
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

bool func_90(int iParam0)
{
	return func_103(iParam0, 2);
}

int func_91(int iParam0, bool bParam1, bool bParam2)
{
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0))
	{
		if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::_DOES_THREAD_EXIST(&(Global_1051081->f_15[0]))) && bParam1)
		{
			OBJECT::_0xD99229FE93B46286(iParam0, 1, 1, 0, &(Global_1051081->f_15[0]), 0, 0);
		}
		else
		{
			OBJECT::_0xD99229FE93B46286(iParam0, 1, 0, 0, 0, 0, 0);
		}
	}
	else if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::_DOES_THREAD_EXIST(&(Global_1051081->f_15[0]))) && bParam1)
	{
		if (!OBJECT::_0xB5DED7B65C604FDF(iParam0))
		{
			OBJECT::_0xD99229FE93B46286(iParam0, 1, 1, 0, &(Global_1051081->f_15[0]), 0, 0);
		}
	}
	if (bParam2)
	{
		OBJECT::_0x1F1FABFE9B2A1254(iParam0, 1);
	}
	return iParam0;
}

int func_92(int iParam0)
{
	if (func_198(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return 0;
}

void func_93(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	if (func_92(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam1, iParam3);
	}
}

void func_94(int iParam0, bool bParam1)
{
	if (func_92(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 2 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 2);
		}
	}
}

void func_95(int iParam0, bool bParam1)
{
	if (func_92(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
	}
}

void func_96(int iParam0, bool bParam1)
{
	if (func_92(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 0 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 0);
		}
	}
}

int func_97()
{
	return 1;
}

int func_98(var uParam0)
{
	vector3 vVar0;

	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_17))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_18))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_19))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_20))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		uParam0->f_4 = func_200(uParam0->f_17, func_199(), 0, 0, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_12))
	{
		uParam0->f_12 = OBJECT::CREATE_OBJECT(uParam0->f_18, func_201(), true, true, false, false, false);
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_11))
	{
		uParam0->f_11 = OBJECT::CREATE_OBJECT(uParam0->f_19, func_201(), true, true, false, false, false);
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_11, false);
		ENTITY::SET_ENTITY_ROTATION(uParam0->f_11, func_202(), 2, false);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_11, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_13))
	{
		vVar0 = { -6322.675f, -3672.215f, -3.563f };
		uParam0->f_13 = OBJECT::CREATE_OBJECT(joaat("P_CRD_CHIPBLUE01X"), vVar0, true, true, false, false, false);
		OBJECT::SET_OBJECT_TARGETTABLE(uParam0->f_13, true);
		ENTITY::SET_ENTITY_COLLISION(uParam0->f_13, false, false);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_13, true);
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_13, false);
	}
	return 1;
}

int func_99(var uParam0)
{
	func_203(uParam0->f_4);
	func_204(uParam0->f_4, joaat("CONSUMABLE_HORSE_OINTMENT_CRAFTED"), 1, 0);
	ENTITY::_0x8C03CD6B5E0E85E8(uParam0->f_4, joaat("EMPTY"));
	WEAPON::REMOVE_ALL_PED_WEAPONS(uParam0->f_4, true, true);
	WEAPON::_0x1B83C0DEEBCBB214(uParam0->f_4);
	PED::SET_PED_CONFIG_FLAG(uParam0->f_4, 38, true);
	PED::SET_PED_CONFIG_FLAG(uParam0->f_4, 223, true);
	PED::_0xAE6004120C18DF97(uParam0->f_4, 1, false);
	ENTITY::_0x18FF3110CF47115D(uParam0->f_4, 7, false);
	func_205(uParam0->f_4, 0);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_4, true);
	ENTITY::_SET_ENTITY_SOMETHING(uParam0->f_4, false);
	return 1;
}

int func_100(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		func_206(uParam0->f_4, 1, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_101(var uParam0)
{
	if ((!ENTITY::DOES_ENTITY_EXIST(uParam0->f_12) || !ENTITY::DOES_ENTITY_EXIST(uParam0->f_11)) || !ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		return 0;
	}
	if (!(ENTITY::DOES_ENTITY_HAVE_PHYSICS(uParam0->f_12) && ENTITY::DOES_ENTITY_HAVE_PHYSICS(uParam0->f_11)))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_12, true);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_11, true);
		return 0;
	}
	OBJECT::_0xB6CBD40F8EA69E8A(uParam0->f_12);
	ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(uParam0->f_12, uParam0->f_4, -1, PED::GET_PED_BONE_INDEX(uParam0->f_4, 33646), 0.02f, -0.11f, 0f, 0f, 0f, 0f, 183f, 88.5f, 97f, -1f, 0, 1, 0, 0, 0, 1, 1065353216, 1065353216);
	uParam0->f_14 = PHYSICS::_0xE9C59F6809373A99(func_201(), 0f, 0f, 0f, 7f, 6, 0, -1, -1082130432);
	PHYSICS::_0xBB3E9B073E66C3C9(uParam0->f_14, 1, 0, 1, 0);
	PHYSICS::_0x522FA3F490E2F7AC(uParam0->f_14, 1, 1);
	PHYSICS::_0x462FF2A432733A44(uParam0->f_14, uParam0->f_11, uParam0->f_12, 0f, 0f, 0f, 0f, 0f, 0f, 0, "ropeAttach");
	PHYSICS::_0x3C6490D940FF5D0B(uParam0->f_14, 0, 0, 7f, 0);
	PHYSICS::_0x76BAD9D538BCA1AA(uParam0->f_14, 0f);
	PHYSICS::_0xB40EA9E0D2E2F7F3(uParam0->f_14, 1f);
	PHYSICS::_0xDEDE679ED29DD4E7(uParam0->f_14, 1);
	PHYSICS::_0xF1EA2A881EB7F2CD(uParam0->f_14, 1);
	AUDIO::_0xF092B6030D6FD49C(uParam0->f_14, "ROPE_SETTINGS_DEFAULT");
	AUDIO::_0x2651DDC0EA269073(uParam0->f_14, 1f);
	return 1;
}

int func_102(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_103(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1) != 0;
}

int func_104(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (MISC::ABSF((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (MISC::ABSF((vParam0.y - vParam3.y)) <= fParam6)
		{
			if (!bParam7 || MISC::ABSF((vParam0.z - vParam3.z)) <= fParam6)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_105(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, bool bParam16, int iParam17, bool bParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, bool bParam24, bool bParam25)
{
	int iVar0;

	((*Global_1945938)[iParam0 /*18*/])->f_4 = iParam1;
	(*Global_1945938)[iParam0 /*18*/] = iParam4;
	((*Global_1945938)[iParam0 /*18*/])->f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	((*Global_1945938)[iParam0 /*18*/])->f_2 = iParam5;
	((*Global_1945938)[iParam0 /*18*/])->f_6 = { vParam6 };
	((*Global_1945938)[iParam0 /*18*/])->f_9 = fParam9;
	((*Global_1945938)[iParam0 /*18*/])->f_10 = iParam10;
	((*Global_1945938)[iParam0 /*18*/])->f_11 = iParam11;
	((*Global_1945938)[iParam0 /*18*/])->f_12 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_5 = iParam12;
	((*Global_1945938)[iParam0 /*18*/])->f_1 = 2;
	((*Global_1945938)[iParam0 /*18*/])->f_17 = -1;
	iVar0 = HUD::_UIPROMPT_REGISTER_BEGIN();
	HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam1);
	if (iParam23 != 0)
	{
		HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam23);
	}
	HUD::_UIPROMPT_SET_TEXT(iVar0, sParam2);
	if (iParam3 == 4)
	{
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, vParam6);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	else if (iParam3 == 2)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam11);
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, 0f, 0f, 0f);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	HUD::_UIPROMPT_SET_PRIORITY(iVar0, iParam4);
	HUD::_UIPROMPT_SET_TRANSPORT_MODE(iVar0, iParam5);
	HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 18, 1);
	if (bParam22)
	{
		HUD::_0x53CE46C01A089DA1(iVar0, 1);
	}
	switch (iParam14)
	{
		case 0:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 0);
			break;
		case 2:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 1);
			break;
		case 1:
			HUD::_UIPROMPT_SET_PRESSED_TIMED_MODE(iVar0, bParam16);
			break;
		case 3:
			HUD::_UIPROMPT_SET_HOLD_INDEFINITELY_MODE(iVar0);
			break;
		case 6:
			HUD::_UIPROMPT_SET_HOLD_AUTO_FILL_MODE(iVar0, bParam16, iParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, 1);
			}
			break;
		case 7:
			HUD::_UIPROMPT_SET_MASH_MODE(iVar0, iParam17);
			break;
		case 8:
			HUD::_UIPROMPT_SET_MASH_AUTO_FILL_MODE(iVar0, bParam16, iParam17);
			break;
		case 13:
			HUD::_UIPROMPT_SET_MASH_INDEFINITELY_MODE(iVar0);
			break;
		case 15:
			HUD::_UIPROMPT_SET_TARGET_MODE(iVar0, 0.5f, 0.1f, 0);
			break;
		case 9:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_MODE(iVar0, iParam17, bParam18, iParam19);
			break;
		case 4:
		case 5:
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, bParam24);
			break;
		case 10:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(iVar0, iParam17, bParam18, iParam19);
			break;
		case 11:
			HUD::_UIPROMPT_SET_MASH_MANUAL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), bParam18, 0f, iParam19);
			break;
		case 12:
			HUD::_UIPROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), bParam18, 0f, iParam19);
			break;
		case 14:
			HUD::_UIPROMPT_SET_ROTATE_MODE(iVar0, iParam20, iParam21);
			HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 10, 1);
			break;
	}
	HUD::_UIPROMPT_REGISTER_END(iVar0);
	((*Global_1945938)[iParam0 /*18*/])->f_3 = iVar0;
	func_109(iParam0, 1);
	func_111(iParam0, 1);
	func_112(iParam0, 128);
}

int func_106(int iParam0, var uParam1)
{
	if (!func_207(iParam0))
	{
		return 0;
	}
	*uParam1 = Global_1914270[iParam0];
	if (*uParam1 == 0)
	{
		return 0;
	}
	return 1;
}

Vector3 func_107(int iParam0)
{
	if (((*Global_1945938)[iParam0 /*18*/])->f_5 == 1)
	{
		return VOLUME::_0xF70F00013A62F866(((*Global_1945938)[iParam0 /*18*/])->f_10);
	}
	else if (((*Global_1945938)[iParam0 /*18*/])->f_5 == 2)
	{
		return ((*Global_1945938)[iParam0 /*18*/])->f_6;
	}
	else if (((*Global_1945938)[iParam0 /*18*/])->f_5 == 3)
	{
		return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(((*Global_1945938)[iParam0 /*18*/])->f_11, ((*Global_1945938)[iParam0 /*18*/])->f_12);
	}
	return 0f, 0f, 0f;
}

float func_108(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_109(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		if (((*Global_1945938)[iParam0 /*18*/])->f_5 == 5 && !func_103(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, bParam1);
		}
	}
}

void func_110(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 - (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1));
}

void func_111(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1945938)[iParam0 /*18*/])->f_3, bParam1);
	}
}

void func_112(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 || iParam1);
}

float func_113(float fParam0)
{
	float fVar0;

	fVar0 = fParam0;
	if (fParam0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
	}
	else if (fParam0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	return fVar0;
}

int func_114(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_66() == -1)
	{
		if (func_208(bParam0) && func_209(bParam0))
		{
			func_210(bParam0, iParam1, 1, &bParam2, iParam3);
			return 0;
		}
	}
	else if (bParam0 == 1259508039)
	{
		bParam2 = true;
	}
	else if (bParam0 == joaat("WEAPON_UNARMED"))
	{
		return 0;
	}
	return 1;
}

int func_115(bool bParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	*bParam1 = iParam2;
	func_211(bParam0, bParam1);
	Var0 = { func_212(bParam0, 0, 1) };
	iVar5 = func_213(bParam0, &Var0, 0, 0);
	iVar6 = func_214(bParam0, 0);
	if ((iVar5 > 1 && !func_215()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_131(bParam0, -2051813666))
		{
			func_24(583, 1);
		}
		else
		{
			func_24(582, 0);
		}
	}
	if (func_216(bParam0, &Var0, *bParam1, 0, 0))
	{
		if (iVar6 < iVar5)
		{
			*bParam1 = (iVar5 - iVar6);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_116(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_217(bParam0, -949239683))
	{
		case -1565009253:
		case -1273369295:
		case -1239610997:
		case -1229959999:
		case -1050374492:
		case -873135685:
		case -164980960:
		case 10252101:
		case 24248412:
		case 82200319:
		case 632545869:
		case 733893097:
		case 871191033:
		case 1513351077:
		case 1712126263:
		case 1894156335:
			Global_1935496->f_59.f_6 = 1;
			Global_1935496->f_59.f_7 = 0;
			Global_1935496->f_59.f_1 = bParam0;
			Global_1935496->f_59.f_5 = MISC::GET_GAME_TIMER();
			break;
	}
}

bool func_117(bool bParam0)
{
	if (func_66() != -1)
	{
		return false;
	}
	return func_118(bParam0) != 0;
}

int func_118(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < func_218())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("CIGARETTE_CARDS"), 0);
		if (bParam0 == func_219(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_119(int iParam0)
{
	return COLLECTION::_0x6052B4DE6657684F(iParam0);
}

int func_120(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < func_218())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("CIGARETTE_CARDS"), 0);
		if (iParam0 == func_119(iVar0))
		{
			if (func_6(func_219(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_121(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	func_220(48);
	func_32(0, -1);
}

int func_122(int iParam0)
{
	if (func_66() != -1)
	{
		return 0;
	}
	return func_148(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
}

int func_123(int iParam0)
{
	return COLLECTION::_0x62CAB7DB62EAD434(joaat("CIGARETTE_CARDS"), iParam0);
}

bool func_124(int iParam0)
{
	return COLLECTION::_0x93F2E7B5DB85657B(joaat("CIGARETTE_CARDS"), iParam0);
}

int func_125(int iParam0)
{
	if (func_66() != -1)
	{
		return 0;
	}
	return func_148(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
}

int func_126(int iParam0)
{
	if (func_66() != -1)
	{
		return 0;
	}
	if (!func_221(iParam0))
	{
		return 0;
	}
	return func_222(((*Global_1347702)[iParam0 /*49*/])->f_15);
}

int func_127()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_6(func_223(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_128(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	vector3 vVar6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;

	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_79() && (func_126(38) || func_122(38)))
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_02";
				sVar5 = "COL_CC_INTRO";
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
				iVar13 = joaat("COL_CC_INTRO");
			}
			else
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_01";
				sVar5 = "COL_CC_INTRO_PRE";
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
				iVar13 = joaat("COL_CC_INTRO_PRE");
			}
			sVar4 = "COL_CC_TITLE";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = 12;
			iVar14 = joaat("CIGARETTE_CARDS");
			break;
		case 39:
			if (func_79() && (func_126(39) || func_122(39)))
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_02";
				sVar5 = "COL_DB_INTRO";
				iVar9 = 3;
				iVar11 = joaat("BLIP_RC_DEBORAH");
				iVar13 = joaat("COL_DB_INTRO");
			}
			else
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_01";
				sVar5 = "COL_DB_INTRO_PRE";
				iVar9 = 1;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
				iVar13 = joaat("COL_DB_INTRO_PRE");
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_DB_TITLE";
			vVar6 = { 122.7758f, -185.4978f, 116.4383f };
			iVar10 = 30;
			iVar14 = joaat("DINO_BONES");
			break;
		case 43:
			if (iParam3 == joaat("EXOTIC_STAGE_01"))
			{
				sVar0 = "MISSION_RCEXO1";
				sVar3 = "RCEXO1_DESC";
				iVar10 = 30;
			}
			else if (iParam3 == joaat("EXOTIC_STAGE_02"))
			{
				sVar0 = "MISSION_RCEXO2";
				sVar3 = "RCEXO2_DESC";
				iVar10 = 37;
			}
			else if (iParam3 == joaat("EXOTIC_STAGE_03"))
			{
				sVar0 = "MISSION_RCEXO3";
				sVar3 = "RCEXO3_DESC";
				iVar10 = 40;
			}
			else if (iParam3 == joaat("EXOTIC_STAGE_04"))
			{
				sVar0 = "MISSION_RCEXO4";
				sVar3 = "RCEXO4_DESC";
				iVar10 = 50;
			}
			else if (iParam3 == joaat("EXOTIC_STAGE_05"))
			{
				sVar0 = "MISSION_RCEXO5";
				sVar3 = "RCEXO5_DESC";
				iVar10 = 25;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_EX_TITLE";
			sVar5 = "COL_EX_INTRO";
			vVar6 = { 2585.668f, -1009.616f, 44.97972f };
			iVar9 = func_224(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = joaat("COL_EX_INTRO");
			break;
		case 41:
			if (func_79() && (func_126(41) || func_122(41)))
			{
				sVar0 = "MISSION_RCFSH2";
			}
			else
			{
				sVar0 = "MISSION_RCFSH1";
			}
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_RARE_FISH_01";
			sVar4 = "COL_LF_TITLE";
			sVar5 = "COL_LF_INTRO";
			vVar6 = { 337.3075f, -684.5404f, 41.8362f };
			iVar9 = 13;
			iVar14 = 1995362678;
			iVar11 = joaat("BLIP_RC_JEREMY_GILL");
			iVar13 = joaat("COL_LF_INTRO");
			break;
		case 49:
			if (func_79() && (func_126(49) || func_122(49)))
			{
				sVar0 = "MISSION_RCRKF2";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_02";
				sVar5 = "COL_RC_INTRO";
				iVar9 = 3;
				iVar11 = joaat("BLIP_SCM_FRANCES");
				iVar13 = joaat("COL_RC_INTRO");
			}
			else
			{
				sVar0 = "MISSION_RCRKF1";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_01";
				sVar5 = "COL_RC_INTRO_PRE";
				iVar9 = 1;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
				iVar13 = joaat("COL_RC_INTRO_PRE");
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_RC_TITLE";
			vVar6 = { -2178.646f, -245.6886f, 191.1569f };
			iVar10 = 10;
			iVar14 = joaat("ROCK_CARVINGS");
			break;
		case 51:
			sVar0 = "MISSION_RCTAX1";
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_TAXIDERMY_01";
			sVar4 = "COL_TX_TITLE";
			sVar5 = "COL_TX_INTRO";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = func_224(iParam3, 20);
			iVar14 = joaat("TAXIDERMY");
			iVar11 = joaat("BLIP_RC_HOBBS");
			iVar13 = joaat("COL_TX_INTRO");
			break;
	}
	sVar2 = func_225(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_226(iParam0, iVar13, iVar14))
	{
	}
	if (func_227(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_228(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_229(iParam0, iVar13, iVar14, iParam3, bParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_230(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_231(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_129(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_130(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = joaat("CIGARETTE_CARDS");
			if (func_79() && (func_126(38) || func_122(38)))
			{
				sVar1 = "COL_CC_INTRO";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
			}
			else
			{
				sVar1 = "COL_CC_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
			}
			iVar6 = joaat("COL_CC_INTRO");
			break;
		case 39:
			sVar0 = "COL_DB_TITLE";
			sVar3 = "COL_DB_FOUND";
			iVar7 = joaat("DINO_BONES");
			if (func_79() && (func_126(39) || func_122(39)))
			{
				sVar1 = "COL_DB_INTRO";
				iVar4 = joaat("BLIP_RC_DEBORAH");
			}
			else
			{
				sVar1 = "COL_DB_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
			}
			iVar6 = joaat("COL_DB_INTRO");
			break;
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			sVar0 = "COL_EX_TITLE";
			sVar3 = "COL_EX_ITEMS_COLLECTED";
			sVar1 = "COL_EX_INTRO";
			iVar7 = -1531394072;
			iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar6 = joaat("COL_EX_INTRO");
			break;
		case 41:
			sVar0 = "COL_LF_TITLE";
			sVar3 = "COL_LF_CAUGHT";
			sVar1 = "COL_LF_INTRO";
			iVar7 = 1995362678;
			iVar4 = joaat("BLIP_RC_JEREMY_GILL");
			iVar6 = joaat("COL_LF_INTRO");
			break;
		case 49:
			sVar0 = "COL_RC_TITLE";
			sVar3 = "COL_RC_FOUND";
			iVar7 = joaat("ROCK_CARVINGS");
			if (func_79() && (func_126(49) || func_122(49)))
			{
				sVar1 = "COL_RC_INTRO";
				iVar4 = joaat("BLIP_SCM_FRANCES");
			}
			else
			{
				sVar1 = "COL_RC_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
			}
			iVar6 = joaat("COL_RC_INTRO");
			break;
		case 51:
			sVar0 = "COL_TX_TITLE";
			sVar3 = "COL_TX_CARCASS_COLLECTED";
			sVar1 = "COL_TX_INTRO";
			iVar7 = joaat("TAXIDERMY");
			iVar4 = joaat("BLIP_RC_HOBBS");
			iVar6 = joaat("COL_TX_INTRO");
			break;
	}
	if (iParam5 == 2)
	{
		sVar0 = "MISSION_COMPLETE";
		iVar4 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar5 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar5 = MISC::GET_HASH_KEY("toast_log_blips");
		sVar1 = "COL_ALL_LOG_UPDATED";
	}
	sVar2 = "COL_CTX_PLAYER_LOG";
	if (iVar7 == joaat("CIGARETTE_CARDS"))
	{
		if (func_79() && (func_126(38) || func_122(38)))
		{
			iVar6 = joaat("COL_CC_INTRO");
		}
		else
		{
			iVar6 = joaat("COL_CC_INTRO_PRE");
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 0)
		{
			iVar5 = iParam1;
			iVar4 = iParam2;
		}
		if (iParam5 == 2)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			iParam3 = 12;
			iParam4 = 12;
			func_71(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_71(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_233(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, func_232(func_124(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_71(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_71(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == joaat("DINO_BONES"))
	{
		if (func_79() && (func_126(39) || func_122(39)))
		{
			iVar6 = joaat("COL_DB_INTRO");
		}
		else
		{
			iVar6 = joaat("COL_DB_INTRO_PRE");
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_71(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_71(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == joaat("ROCK_CARVINGS"))
	{
		if (func_79() && (func_126(49) || func_122(49)))
		{
			iVar6 = joaat("COL_RC_INTRO");
		}
		else
		{
			iVar6 = joaat("COL_RC_INTRO_PRE");
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_71(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_71(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_71(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_71(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_131(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(bParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

bool func_132(bool bParam0, int iParam1)
{
	if (!func_34(bParam0, 0))
	{
		return false;
	}
	return INVENTORY::_0x245D07651B1D183B(bParam0, iParam1);
}

int func_133(int iParam0)
{
	if (!func_234(iParam0))
	{
		return 0;
	}
	return func_235(iParam0);
}

void func_134(int iParam0)
{
	if (!func_234(iParam0))
	{
		return;
	}
	func_236(iParam0);
	func_237(iParam0);
}

int func_135(bool bParam0)
{
	struct<2> Var0;

	if (!func_34(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_136(bool bParam0, bool bParam1)
{
	bool bVar0;

	switch (bParam0)
	{
		case joaat("AMMO_THROWING_KNIVES"):
			bVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_IMPROVED"):
			bVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_POISON"):
			bVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_DYNAMITE"):
			bVar0 = joaat("WEAPON_THROWN_DYNAMITE");
			break;
		case joaat("AMMO_DYNAMITE_VOLATILE"):
			bVar0 = joaat("WEAPON_THROWN_DYNAMITE");
			break;
		case joaat("AMMO_MOLOTOV"):
			bVar0 = joaat("WEAPON_THROWN_MOLOTOV");
			break;
		case joaat("AMMO_MOLOTOV_VOLATILE"):
			bVar0 = joaat("WEAPON_THROWN_MOLOTOV");
			break;
		case joaat("AMMO_TOMAHAWK"):
			bVar0 = joaat("WEAPON_THROWN_TOMAHAWK");
			break;
		case joaat("AMMO_TOMAHAWK_ANCIENT"):
			bVar0 = joaat("WEAPON_THROWN_TOMAHAWK_ANCIENT");
			break;
		case joaat("AMMO_TOMAHAWK_HOMING"):
			bVar0 = joaat("WEAPON_THROWN_TOMAHAWK");
			break;
		case joaat("AMMO_TOMAHAWK_IMPROVED"):
			bVar0 = joaat("WEAPON_THROWN_TOMAHAWK");
			break;
		case joaat("AMMO_HATCHET"):
			bVar0 = joaat("WEAPON_MELEE_HATCHET");
			break;
		case joaat("AMMO_HATCHET_HUNTER"):
			bVar0 = joaat("WEAPON_MELEE_HATCHET_HUNTER");
			break;
		case joaat("AMMO_HATCHET_HUNTER_RUSTED"):
			bVar0 = joaat("WEAPON_MELEE_HATCHET_HUNTER_RUSTED");
			break;
		case joaat("AMMO_HATCHET_ANCIENT"):
			bVar0 = joaat("WEAPON_MELEE_ANCIENT_HATCHET");
			break;
		case joaat("AMMO_HATCHET_CLEAVER"):
			bVar0 = joaat("WEAPON_MELEE_CLEAVER");
			break;
		case joaat("AMMO_HATCHET_DOUBLE_BIT"):
			bVar0 = joaat("WEAPON_MELEE_HATCHET_DOUBLE_BIT");
			break;
		case joaat("AMMO_HATCHET_DOUBLE_BIT_RUSTED"):
			bVar0 = joaat("WEAPON_MELEE_HATCHET_DOUBLE_BIT_RUSTED");
			break;
		case joaat("AMMO_HATCHET_HEWING"):
			bVar0 = joaat("WEAPON_MELEE_HATCHET_HEWING");
			break;
		case joaat("AMMO_HATCHET_VIKING"):
			bVar0 = joaat("WEAPON_MELEE_HATCHET_VIKING");
			break;
		default:
			break;
	}
	if (func_34(bVar0, 0))
	{
		if (bParam1)
		{
			if (func_238(bVar0) || func_239(bVar0))
			{
				return bVar0;
			}
		}
		else
		{
			return bVar0;
		}
	}
	return bParam0;
}

int func_137(bool bParam0, bool bParam1)
{
	if (!func_34(bParam0, 0))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return bParam0;
	}
	if (!bParam1)
	{
	}
	return 0;
}

void func_138(bool bParam0)
{
	int iVar0;

	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_86(bParam0))
	{
		return;
	}
	iVar0 = WEAPON::_0x865F36299079FB75(bParam0);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(iVar0, true);
}

int func_139(bool bParam0)
{
	if (func_66() == -1)
	{
		return 1;
	}
	return INVENTORY::_0x0FBBFFC891A97C81(func_89(bParam0));
}

int func_140(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> Var0;
	int iVar5;
	struct<10> Var6;
	int iVar28;
	struct<4> Var29;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	if (WEAPON::_0x959383DCD42040DA(bParam0) && bParam1 > 0)
	{
		bParam1 = false;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, false))
	{
		Var0 = { func_212(bParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_240((375 + iVar28), 1);
			if (func_241(bParam0, &Var0, iVar5, 0))
			{
				if (func_242(bParam0, &Var6, iVar5))
				{
					Var29 = { func_243(bParam0, Var0, iVar5, 0) };
					func_244(bParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_139(0))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, false))
					{
						return 0;
					}
					func_141(WEAPON::_0x5C2EA6C44F515F34(bParam0), bParam1, iParam6);
					func_245(bParam0, bParam1);
					return 1;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, false))
				{
					return 0;
				}
				if (bParam1 > 0)
				{
				}
				WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return 1;
			}
		}
	}

int func_141(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam1 < 1)
	{
		return 1;
	}
	if (!func_143(bParam0))
	{
		return 0;
	}
	if (!func_139(0))
	{
		return 0;
	}
	WEAPON::_0x106A811C6D3035F3(Global_35, bParam0, bParam1, iParam2);
	return 1;
}

int func_142(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	var uVar1;
	bool bVar6;
	bool bVar7;

	bVar0 = func_137(bParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(bVar0))
	{
		if (func_66() == -1)
		{
			func_138(bVar0);
			if (iParam1 == 1248274121)
			{
				func_246(bVar0);
			}
		}
		if (!func_216(bParam0, &uVar1, 1, 0, 0))
		{
			func_210(bParam0, 1, 0, bParam2, iParam1);
			bVar6 = func_247(bVar0);
			if (WEAPON::_0x6AD66548840472E5(bVar0))
			{
				func_140(bVar0, bVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (bVar0 == joaat("WEAPON_FISHINGROD") || bVar0 == joaat("WEAPON_KIT_BINOCULARS"))
			{
				func_140(bVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (bVar0 == joaat("WEAPON_LASSO"))
			{
				func_140(bVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_0x959383DCD42040DA(bVar0))
			{
				if (bVar0 == joaat("WEAPON_MELEE_KNIFE_JOHN") && !func_22())
				{
					return 0;
				}
				if (WEAPON::_0x2C83212A7AA51D3D(bParam0))
				{
				}
				else if (!func_248(bVar0))
				{
					func_140(bVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_140(bVar0, WEAPON::_GET_WEAPON_CLIP_SIZE(bVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_0xD955FEE4B87AFA07(bVar0))
			{
				bVar7 = func_249(Global_35, 2, 0, 1);
				if ((((func_86(bVar7) && !Global_43890) && bVar7 != bVar0) && !func_6(joaat("UPGRADE_OFFHAND_HOLSTER"), 1, 0)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, bVar7);
				}
				if (func_86(bVar7) && func_6(joaat("UPGRADE_OFFHAND_HOLSTER"), 1, 0))
				{
					if (!func_140(bVar0, bVar6, bParam3, bParam4, 3, 1, iParam1, 0))
					{
						return 0;
					}
				}
				else if (!func_140(bVar0, bVar6, bParam3, bParam4, 0, 1, iParam1, 0))
				{
					return 0;
				}
			}
			else if (!func_140(bVar0, bVar6, bParam3, bParam4, 0, 0, iParam1, 0))
			{
				return 0;
			}
		}
	}
	else
	{
		return 0;
	}
	if (WEAPON::_0x9F0E1892C7F228A8(1) != 0 && iParam1 == 1248274121)
	{
		func_24(480, 1);
	}
	return 1;
}

bool func_143(bool bParam0)
{
	return WEAPON::_0x1F7977C9101F807F(bParam0);
}

int func_144(bool bParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;

	if (!func_143(bParam0))
	{
		return 0;
	}
	bVar4 = WEAPON::_0x7AA043F6C41D151E(bParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, bParam0);
	if (func_86(bVar4))
	{
		WEAPON::GET_MAX_AMMO(Global_35, &iVar2, bVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (bVar4 == joaat("WEAPON_BOW"))
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = WEAPON::_GET_WEAPON_CLIP_SIZE(bVar4);
	}
	if (*bParam1 > 0)
	{
		iVar6 = *bParam1;
	}
	else if (*bParam1 < 0)
	{
		iVar6 = (iVar1 * MISC::ABSI(*bParam1));
	}
	if (func_6(joaat("PROVISION_TRINKET_CROW_BEAK"), 1, 0) && iParam2 == -897553835)
	{
		iVar6 = BUILTIN::CEIL((IntToFloat(iVar6) * 1.1f));
	}
	if (iVar5 >= iVar6)
	{
		bVar0 = iVar6;
	}
	else if (iVar5 < iVar6 && iVar5 >= 1)
	{
		bVar0 = iVar5;
	}
	else
	{
		func_171(func_250(bParam0), func_170(bParam0), 1);
		return 0;
	}
	if (iVar2 == (iVar3 + bVar0))
	{
		if (func_66() == -1)
		{
			if (func_148(((*Global_1835011)[14 /*74*/])->f_1, 1))
			{
				func_24(416, 0);
			}
		}
	}
	if (bVar0 == 0)
	{
		return 0;
	}
	if (func_139(0))
	{
		if (func_141(bParam0, bVar0, iParam2))
		{
			*bParam1 = bVar0;
			return 1;
		}
	}
	else
	{
		return func_176(bParam0, *bParam1, iParam2);
	}
	return 0;
}

void func_145(bool bParam0)
{
	var uVar0;

	if ((bParam0 == joaat("PROVISION_TALISMAN_EAGLE_TALON") && !func_251()) || bParam0 != joaat("PROVISION_TALISMAN_EAGLE_TALON"))
	{
		if (func_252(Global_35, bParam0, &uVar0))
		{
			func_163(PLAYER::PLAYER_PED_ID(), bParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (bParam0)
	{
		case joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH"):
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_169();
			break;
		case joaat("PROVISION_TALISMAN_BEAR_CLAW"):
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_169();
			break;
		case joaat("PROVISION_TALISMAN_BUFFALO_HORN"):
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_169();
			break;
		case joaat("PROVISION_TALISMAN_EAGLE_TALON"):
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_167();
			break;
		case joaat("PROVISION_TALISMAN_RAVEN_CLAW"):
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_165();
			break;
	}
}

void func_146(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("PROVISION_TRINKET_BEAVER_TOOTH"):
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_165();
			break;
		case joaat("PROVISION_TRINKET_BISON_HORN"):
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_166();
			break;
		case joaat("PROVISION_TRINKET_COUGAR_FANG"):
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case joaat("PROVISION_TRINKET_COYOTE_FANG"):
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case joaat("PROVISION_TRINKET_FOX_CLAW"):
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_167();
			break;
		case joaat("PROVISION_TRINKET_IGUANA_SCALE"):
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_168();
			break;
		case joaat("PROVISION_TRINKET_LION_PAW"):
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case joaat("PROVISION_TRINKET_MOOSE_ANTLER"):
			Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
			break;
		case joaat("PROVISION_TRINKET_OWL_FEATHER"):
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.15f);
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.15f);
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.15f);
			func_169();
			break;
		case joaat("PROVISION_TRINKET_HAWK_TALON"):
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_253();
			break;
		case joaat("PROVISION_TRINKET_SHARK_TOOTH"):
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case joaat("PROVISION_TRINKET_TURTLE_SHELL"):
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_254();
			break;
		case joaat("PROVISION_TRINKET_CAT_EYE"):
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_147(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

int func_148(int iParam0, bool bParam1)
{
	switch (func_255(iParam0))
	{
		case 5:
			return 1;
		case 6:
			if (bParam1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_149(bool bParam0)
{
	bool bVar0;

	bVar0 = func_131(bParam0, -2017733358);
	if (func_256() < 3)
	{
		if (bVar0)
		{
			if (func_258(func_257(bParam0), bParam0))
			{
				func_171(79, func_170(func_257(bParam0)), 1);
			}
			else
			{
				func_171(78, func_170(func_257(bParam0)), 1);
			}
		}
		else
		{
			func_171(80, func_170(func_259(bParam0)), 1);
		}
	}
}

int func_150()
{
	if (((((func_260(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_1"), 400) || func_260(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_2"), 400)) || func_260(joaat("DOCUMENT_ARTHUR_HIGH_BOUNTY_1"), 400)) || func_260(joaat("DOCUMENT_ARTHUR_HIGH_BOUNTY_2"), 400)) || func_260(joaat("DOCUMENT_ARTHUR_HAS_POSTER_1"), 400)) || func_260(joaat("DOCUMENT_ARTHUR_HAS_POSTER_2"), 400))
	{
		return 1;
	}
	return 0;
}

int func_151(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;

	iVar0 = func_261(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_184(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_185(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_152(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("DOCUMENT_LETTER_TAXIDERMY"):
			func_128(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), 0, 0, 4, 0);
			func_130(51, 0, 0, 0, 0, -1, 0);
			func_262(8192);
			break;
		case joaat("DOCUMENT_NOTE_TAXIDERMY"):
			func_128(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), 0, 0, 1, 0);
			func_130(51, 0, 0, 0, 0, -1, 0);
			func_262(524288);
			break;
		case joaat("DOCUMENT_NOTE_DINO_BONES"):
			func_128(39, 0, 0, 0, 0, 0, 1, 0);
			func_130(39, 0, 0, 0, 0, -1, 0);
			func_263(16);
			break;
		case joaat("DOCUMENT_NOTE_RARE_FISH"):
			func_128(41, 0, 0, 0, 0, 0, 1, 0);
			func_130(41, 0, 0, 0, 0, -1, 0);
			func_264(8);
			break;
		case joaat("DOCUMENT_NOTE_ROCK_CARVINGS"):
			func_128(49, 0, 0, 0, 0, 0, 1, 0);
			func_130(49, 0, 0, 0, 0, -1, 0);
			func_265(16);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_01"):
			func_128(43, 0, 0, joaat("EXOTIC_STAGE_01"), func_266(1), 0, -1, 0);
			func_267(1);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_02"):
			func_128(43, 0, 0, joaat("EXOTIC_STAGE_02"), func_266(2), 0, -1, 0);
			func_267(2);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_03"):
			func_128(43, 0, 0, joaat("EXOTIC_STAGE_03"), func_266(4), 0, -1, 0);
			func_267(4);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_04"):
			func_128(43, 0, 0, joaat("EXOTIC_STAGE_04"), func_266(8), 0, -1, 0);
			func_267(8);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_05"):
			func_128(43, 0, 0, joaat("EXOTIC_STAGE_05"), func_266(16), 0, -1, 0);
			func_267(16);
			break;
	}
}

void func_153(bool bParam0)
{
	if (func_268() == 1)
	{
		if (func_122(39))
		{
			func_24(342, 0);
		}
		else
		{
			func_24(343, 0);
			func_263(1);
		}
	}
	if (func_268() >= 30)
	{
		func_24(344, 0);
	}
	func_128(39, 0, 0, 0, 0, 0, -1, 0);
	func_130(39, 0, 0, func_268(), 30, 1, 0);
}

void func_154(bool bParam0)
{
	if (func_269() == 1)
	{
		if (func_122(49))
		{
			func_24(409, 0);
		}
		else
		{
			func_24(410, 0);
			func_265(1);
		}
	}
	if (func_269() >= 10)
	{
		func_24(411, 0);
	}
	func_128(49, 0, 0, 0, 0, 0, -1, 0);
	func_130(49, 0, 0, func_269(), 10, 1, 0);
}

void func_155(bool bParam0)
{
	char* sVar0;

	switch (bParam0)
	{
		case joaat("DOCUMENT_TAXIDERMY_ORDER_1"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_01"), 1);
			func_24(437, 0);
			func_24(440, 0);
			func_270(joaat("TAXIDERMY_ORDER_01"), joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"), &sVar0, 1, 0, 0);
			func_128(51, 0, 0, joaat("TAXIDERMY_ORDER_01"), sVar0, 0, -1, 0);
			func_130(51, 0, 0, sVar0, func_224(joaat("TAXIDERMY_ORDER_01"), 20), 1, 0);
			func_262(1);
			func_271(-748969569, 0, 0);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_02"), 1);
			func_270(joaat("TAXIDERMY_ORDER_02"), joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &sVar0, 1, 0, 0);
			func_128(51, 0, 0, joaat("TAXIDERMY_ORDER_02"), sVar0, 0, -1, 0);
			func_130(51, 0, 0, sVar0, func_224(joaat("TAXIDERMY_ORDER_02"), 20), 1, 0);
			func_262(8);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_03"), 1);
			func_270(joaat("TAXIDERMY_ORDER_03"), joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &sVar0, 1, 0, 0);
			func_128(51, 0, 0, joaat("TAXIDERMY_ORDER_03"), sVar0, 0, -1, 0);
			func_130(51, 0, 0, sVar0, func_224(joaat("TAXIDERMY_ORDER_03"), 20), 1, 0);
			func_262(64);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_4"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_04"), 1);
			func_270(joaat("TAXIDERMY_ORDER_04"), joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &sVar0, 1, 0, 0);
			func_128(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), sVar0, 0, -1, 0);
			func_130(51, 0, 0, sVar0, func_224(joaat("TAXIDERMY_ORDER_04"), 20), 1, 0);
			func_262(512);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_5"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_05"), 1);
			func_24(438, 0);
			func_270(joaat("TAXIDERMY_ORDER_05"), joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &sVar0, 1, 0, 0);
			func_128(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), sVar0, 0, -1, 0);
			func_130(51, 0, 0, sVar0, func_224(joaat("TAXIDERMY_ORDER_05"), 20), 1, 0);
			func_262(32768);
			break;
		default:
			func_24(439, 0);
			break;
	}
}

void func_156()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(joaat("SP_CHAL_EXPL_ROOT")) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("SP_CHAL_EXPL_ROOT"), joaat("ACW_EXPL_RANK_01_TREASURE"), true);
	}
}

void func_157(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (func_66() == -1)
	{
		if (!func_122(43))
		{
			if (bParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE"))
			{
				func_24(348, 0);
			}
			else if (bParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH"))
			{
				func_24(350, 0);
			}
			else if (bParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY"))
			{
				func_24(352, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
			{
				func_24(400, 0);
			}
		}
		else if (func_131(bParam0, 412399755))
		{
			func_272(joaat("EXOTIC_STAGE_01"));
			if (func_273() == 0)
			{
				func_32(0, 10);
				iVar1 = func_274(bParam0, iParam1, 1);
				if (((bParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || bParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || bParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || bParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
				{
					if (func_275(bParam0) < func_276(bParam0))
					{
						func_128(43, bParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar1, 0, -1, 0);
						func_130(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_122(44))
		{
			if (bParam0 == joaat("PROVISION_HERON_FEATHER"))
			{
				func_24(354, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER"))
			{
				func_24(399, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
			{
				func_24(401, 0);
			}
		}
		else if (func_131(bParam0, 709057512))
		{
			func_272(joaat("EXOTIC_STAGE_02"));
			if (func_273() == 1)
			{
				func_32(0, 10);
				iVar1 = func_274(bParam0, iParam1, 2);
				if ((bParam0 == joaat("PROVISION_HERON_FEATHER") || bParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || bParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
				{
					if (func_275(bParam0) < func_276(bParam0))
					{
						func_128(43, bParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar1, 0, -1, 0);
						func_130(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_122(45))
		{
			if (bParam0 == joaat("PROVISION_GATOR_EGG"))
			{
				func_24(359, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR"))
			{
				func_24(394, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_CIGAR"))
			{
				func_24(395, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
			{
				func_24(398, 0);
			}
		}
		else if (func_131(bParam0, -1478961327))
		{
			func_272(joaat("EXOTIC_STAGE_03"));
			if (func_273() == 2)
			{
				func_32(0, 10);
				iVar1 = func_274(bParam0, iParam1, 4);
				if (bParam0 == joaat("PROVISION_GATOR_EGG"))
				{
					if (!func_277(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
					{
						func_278(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0), 1);
						func_220(48);
					}
					if (func_275(bParam0) < func_276(bParam0))
					{
						func_128(43, bParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						func_130(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((bParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR") || bParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || bParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
				{
					if (func_275(bParam0) < func_276(bParam0))
					{
						func_128(43, bParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						func_130(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_122(46))
		{
			if (bParam0 == joaat("PROVISION_SPOONBILL_FEATHER"))
			{
				func_24(356, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED"))
			{
				func_24(402, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL"))
			{
				func_24(404, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
			{
				func_24(406, 0);
			}
		}
		else if (func_131(bParam0, -1238404098))
		{
			func_272(joaat("EXOTIC_STAGE_04"));
			if (func_273() == 3)
			{
				func_32(0, 10);
				iVar1 = func_274(bParam0, iParam1, 8);
				if (((bParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || bParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || bParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || bParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
				{
					if (func_275(bParam0) < func_276(bParam0))
					{
						func_128(43, bParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar1, 0, -1, 0);
						func_130(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_122(47))
		{
			if (bParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL"))
			{
				func_24(396, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS"))
			{
				func_24(397, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS"))
			{
				func_24(405, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
			{
				func_24(403, 0);
			}
		}
		else if (func_131(bParam0, 1160548794))
		{
			func_272(joaat("EXOTIC_STAGE_05"));
			if (func_273() == 4)
			{
				func_32(0, 10);
				iVar1 = func_274(bParam0, iParam1, 16);
				if (((bParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || bParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || bParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || bParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
				{
					if (func_275(bParam0) < func_276(bParam0))
					{
						func_128(43, bParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar1, 0, -1, 0);
						func_130(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_158(bool bParam0)
{
	int iVar0;

	if (bParam0 == joaat("PROVISION_GATOR_EGG"))
	{
		if (!func_277(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
		{
			func_278(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0), 1);
			func_220(48);
		}
	}
}

void func_159(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("TAXIDERMY"), joaat("TAXIDERMY_ORDER"));
		if (func_6(func_51(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_279(bParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_280(bParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_160(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_66() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			iVar0 = MISC::_0x6F02B5E50511721E(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_151(0, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (bParam0)
	{
		case joaat("MONEY_ONE_DOLLAR"):
			func_151(joaat("REWARD_BILL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493: /* GXTEntry: "$5.00" */
			func_151(joaat("REWARD_FIVE_DOLLARS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_TEN_DOLLARS"):
			func_151(joaat("REWARD_TEN_DOLLARS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_BILLFOLD"):
			func_151(joaat("REWARD_BILLFOLD"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_BILLFOLD_SML"):
			func_151(joaat("REWARD_BILLFOLD_SML"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_BILLSTACK"):
			func_151(joaat("REWARD_BILLSTACK"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_COIN"):
			func_151(joaat("REWARD_COIN"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_COINPURSE"):
			func_151(joaat("REWARD_COINPURSE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_COINSACK"):
			func_151(joaat("REWARD_BOUNTYHUNTING_MEDIUM"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_COINSTACK"):
			func_151(joaat("REWARD_COINS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_MONEYCLIP"):
			func_151(joaat("REWARD_MONEYCLIP"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_MONEYSTACK"):
			func_151(joaat("REWARD_MONEYSTACK"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_MONEYSTACK_LARGE"):
			if (!func_281())
			{
				func_151(joaat("REWARD_MONEYSTACK_LARGE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case joaat("MONEY_COINCUP_SM"):
			func_151(joaat("REWARD_COINCUP_SM"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_COINCUP_LG"):
			func_151(joaat("REWARD_COINCUP_LG"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_CARD_SET_COMMON"):
			func_151(joaat("REWARD_CARD_SET_COMMON"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CARD_SET_RARE"):
			func_151(joaat("REWARD_CARD_SET_RARE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CARD_SET_ALL"):
			func_151(joaat("REWARD_CARD_SET_ALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_RARE_FISH"):
			func_151(joaat("REWARD_RARE_FISH"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_1"):
			func_151(joaat("REWARD_TAXIDERMY_STAGE_1"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_2"):
			func_151(joaat("REWARD_TAXIDERMY_STAGE_2"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_3"):
			func_151(joaat("REWARD_TAXIDERMY_STAGE_3"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_4"):
			func_151(joaat("REWARD_TAXIDERMY_STAGE_4"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_5"):
			func_151(joaat("REWARD_TAXIDERMY_STAGE_5"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CALLOWAY_LETTER"):
			func_151(joaat("REWARD_CALLOWAY_LETTER"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
	}
}

void func_161(bool bParam0)
{
	if (func_122(41))
	{
		func_24(363, 0);
	}
	else
	{
		func_24(362, 0);
	}
	switch (bParam0)
	{
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY"):
			func_282(joaat("LEGENDARY_FISH_01"));
			func_283(joaat("LEGENDARY_FISHING_SPOT_01"));
			func_284(joaat("LEGENDARY_FISHING_SPOT_01"));
			func_32(0, 10);
			break;
		case joaat("PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY"):
			func_282(joaat("LEGENDARY_FISH_02"));
			func_283(joaat("LEGENDARY_FISHING_SPOT_02"));
			func_284(joaat("LEGENDARY_FISHING_SPOT_02"));
			func_32(0, 10);
			break;
		case joaat("PROVISION_FISH_LAKE_STURGEON_LEGENDARY"):
			func_282(joaat("LEGENDARY_FISH_03"));
			func_283(joaat("LEGENDARY_FISHING_SPOT_03"));
			func_284(joaat("LEGENDARY_FISHING_SPOT_03"));
			func_32(0, 10);
			break;
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY"):
			func_282(joaat("LEGENDARY_FISH_04"));
			func_283(joaat("LEGENDARY_FISHING_SPOT_04"));
			func_284(joaat("LEGENDARY_FISHING_SPOT_04"));
			func_32(0, 10);
			break;
		case joaat("PROVISION_FISH_LONGNOSE_GAR_LEGENDARY"):
			func_282(joaat("LEGENDARY_FISH_05"));
			func_283(joaat("LEGENDARY_FISHING_SPOT_05"));
			func_284(joaat("LEGENDARY_FISHING_SPOT_05"));
			func_32(0, 10);
			break;
		case joaat("PROVISION_FISH_MUSKIE_LEGENDARY"):
			func_282(joaat("LEGENDARY_FISH_06"));
			func_283(joaat("LEGENDARY_FISHING_SPOT_06"));
			func_284(joaat("LEGENDARY_FISHING_SPOT_06"));
			func_32(0, 10);
			break;
		case joaat("PROVISION_FISH_PERCH_LEGENDARY"):
			func_282(joaat("LEGENDARY_FISH_07"));
			func_283(joaat("LEGENDARY_FISHING_SPOT_07"));
			func_284(joaat("LEGENDARY_FISHING_SPOT_07"));
			func_32(0, 10);
			break;
		case joaat("PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY"):
			func_282(joaat("LEGENDARY_FISH_08"));
			func_283(joaat("LEGENDARY_FISHING_SPOT_08"));
			func_284(joaat("LEGENDARY_FISHING_SPOT_08"));
			func_32(0, 10);
			break;
		case joaat("PROVISION_FISH_ROCK_BASS_LEGENDARY"):
			func_282(joaat("LEGENDARY_FISH_09"));
			func_283(joaat("LEGENDARY_FISHING_SPOT_09"));
			func_284(joaat("LEGENDARY_FISHING_SPOT_09"));
			func_32(0, 10);
			break;
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY"):
			func_282(joaat("LEGENDARY_FISH_10"));
			func_283(joaat("LEGENDARY_FISHING_SPOT_10"));
			func_284(joaat("LEGENDARY_FISHING_SPOT_10"));
			func_32(0, 10);
			break;
		case joaat("PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY"):
			func_282(joaat("LEGENDARY_FISH_11"));
			func_283(joaat("LEGENDARY_FISHING_SPOT_11"));
			func_284(joaat("LEGENDARY_FISHING_SPOT_11"));
			func_32(0, 10);
			break;
		case joaat("PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY"):
			func_282(joaat("LEGENDARY_FISH_12"));
			func_283(joaat("LEGENDARY_FISHING_SPOT_12"));
			func_284(joaat("LEGENDARY_FISHING_SPOT_12"));
			func_32(0, 10);
			break;
		case joaat("PROVISION_FISH_BLUEGILL_LEGENDARY"):
			func_282(joaat("LEGENDARY_FISH_13"));
			func_283(joaat("LEGENDARY_FISHING_SPOT_13"));
			func_284(joaat("LEGENDARY_FISHING_SPOT_13"));
			func_32(0, 10);
			break;
		case joaat("PROVISION_FISH_NORTHERN_PIKE_LEGENDARY"):
			func_282(joaat("LEGENDARY_FISH_14"));
			func_283(joaat("LEGENDARY_FISHING_SPOT_14"));
			func_284(joaat("LEGENDARY_FISHING_SPOT_14"));
			break;
	}
}

void func_162(bool bParam0, int iParam1)
{
	var uVar0;

	func_193(bParam0, iParam1, &uVar0);
}

int func_163(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;

	if (bParam3 == -358215195)
	{
		Var0 = { func_212(bParam1, 1, 0) };
		bParam3 = func_285(Var0.f_4);
		if (bParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_287(bParam1, iParam2, func_286(bParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_288(1, (func_66() == -1 && bParam5), 1);
	switch (bParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && bParam1 != &Global_1946804->f_57[func_286(bParam3, 1) /*11*/])
			{
				func_289(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_290(32768) && bParam1 != &Global_1946804->f_57[func_286(bParam3, 1) /*11*/])
			{
				func_291();
				func_289(22, bParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_289(22, bParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_292(bParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_289(19, 0, iVar5, 0, 0);
		if ((bParam3 == 1742327865 || bParam3 == 1108822547) || bParam3 == 1145151482)
		{
			func_293(0);
			func_294(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_289(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

int func_164(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	bool bVar17;
	bool bVar18;
	bool bVar19;

	Var3.f_9 = -1591664384;
	bVar17 = false;
	*bParam0 = 0;
	bVar18 = func_249(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, 1, 0);
	bVar19 = func_249(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, 1, 0);
	if (func_84("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_85(&Var3, iVar2, iVar0, iVar1))
			{
				if (WEAPON::_0xD955FEE4B87AFA07(Var3.f_4))
				{
					if (!bParam1)
					{
						if (Var3.f_4 == bVar18 || Var3.f_4 == bVar19)
						{
						}
						else
						{
							if (!bVar17)
							{
								*bParam0 = Var3.f_4;
								bVar17 = true;
							}
						}
						iVar2++;
						func_87(iVar0);
						if (*bParam0 != 0)
						{
							return 1;
						}
						return 0;
					}
				}
			}
		}
	}

void func_165()
{
	PLAYER::_0x11A7FF918EF6BC66(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_60));
}

void func_166()
{
	float fVar0;
	float fVar1;

	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	PLAYER::_0x497A6539BB0E8787(PLAYER::PLAYER_ID(), (1f - fVar0), (1f - fVar1));
}

void func_167()
{
	PLAYER::_0xE0D6C2A146A5C993(PLAYER::PLAYER_ID(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_168()
{
	PLAYER::_0xB427911EA6DFFEF3(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_63));
}

void func_169()
{
	func_295();
	func_296();
	func_297();
}

bool func_170(bool bParam0)
{
	if (!func_34(bParam0, 0))
	{
		return false;
	}
	return bParam0;
}

void func_171(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_68(iParam0, &iVar0, &iVar1);
	if (!func_69(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_189(iParam0, 1024))
	{
		return;
	}
	func_70(iVar0, iVar1);
	(Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/] = uParam1;
	((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 2;
}

void func_172(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_68(iParam0, &iVar0, &iVar1);
	if (!func_69(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_189(iParam0, 1024))
	{
		return;
	}
	func_70(iVar0, iVar1);
	(Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/] = iParam1;
	if (!bParam3)
	{
		((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 1;
	}
	else
	{
		((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 5;
	}
}

int func_173()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = COLLECTION::_0x5461C821D00FE15A(joaat("CIGARETTE_CARDS"), 0);
	if (iVar0 == func_218())
	{
		return func_174();
	}
	iVar4 = (func_218() - iVar0);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_218())
	{
		iVar1 = COLLECTION::_0x126CBEBBA46693CF(iVar2, joaat("CIGARETTE_CARDS"), 0);
		if (!func_298(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_219(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

bool func_174()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_218());
	return func_219(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("CIGARETTE_CARDS"), 0));
}

void func_175(bool bParam0)
{
	switch (*bParam0)
	{
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*bParam0 = joaat("CONSUMABLE_CIGARETTE_BOX");
			break;
		case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
			*bParam0 = joaat("CONSUMABLE_CHEWING_TOBACCO");
			break;
		case joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"):
			*bParam0 = joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP");
			break;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			*bParam0 = joaat("CONSUMABLE_COCAINE_CHEWING_GUM");
			break;
	}
}

int func_176(bool bParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_34(bParam0, 0))
	{
		return 0;
	}
	if (bParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_212(bParam0, 0, 1) };
	Var5 = { func_243(bParam0, Var0, Var0.f_4, 0) };
	return func_299(bParam0, &Var5, &Var0, bParam1, iParam2, 0);
}

void func_177(bool bParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	if (func_66() != -1)
	{
		return;
	}
	switch (func_135(bParam0))
	{
		case 81053684:
			if (bParam0 == joaat("KIT_BANDANA") && func_300(81053684, 0) <= 0)
			{
				func_289(32, bParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (bParam0 == joaat("CLOTHING_ITEM_HAT_PZERO_000") || bParam0 == joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"))
			{
				func_289(32, bParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_301(bParam0);
			if (func_302(iVar0))
			{
				func_303(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_289(30, bParam0, 0, 0, 0);
			}
			if (func_304() == -2125499975 || func_304() == -449205311)
			{
				switch (bParam0)
				{
					case 624063935: /* GXTEntry: "The Summer Gunslinger" */
					case 1160643979: /* GXTEntry: "The Winter Gunslinger" */
					case 1661121390: /* GXTEntry: "The Gunslinger" */
						func_289(32, bParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_304() == 1160113249)
			{
				switch (bParam0)
				{
					case -361635024: /* GXTEntry: "The Cowboy" */
						func_289(32, bParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_305(-525676072, 0))
			{
				if (func_306(-525676072, &bVar1))
				{
					func_289(33, bVar1, 0, 0, 0);
				}
			}
			func_289(32, bParam0, 0, 0, 0);
			break;
	}
	if ((bParam0 == joaat("CLOTHING_SP_OFFHAND_000") || bParam0 == -1515874150) || bParam0 == joaat("UPGRADE_OFFHAND_HOLSTER"))
	{
		if (!func_307(joaat("MP_COMPONENT_TYPE_LOADOUT_3")))
		{
			func_163(Global_35, bParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
		}
		func_134(24);
		if (func_164(&bVar2, 0))
		{
			func_140(bVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_178(bool bParam0)
{
	if (func_131(bParam0, 943695443))
	{
		func_308(0, bParam0);
	}
	else if (func_131(bParam0, -2096528786))
	{
		func_308(1, bParam0);
	}
	else if (func_131(bParam0, -1094167013))
	{
		func_308(2, bParam0);
	}
	else if (func_131(bParam0, 1936654645))
	{
		func_308(3, bParam0);
	}
	else if (func_131(bParam0, 1306489306))
	{
		func_308(4, bParam0);
	}
	else if (func_131(bParam0, 435762317))
	{
		func_308(5, bParam0);
	}
	else if (func_131(bParam0, 1259363210))
	{
		func_308(6, bParam0);
	}
	else if (func_131(bParam0, 881398259))
	{
		func_308(7, bParam0);
	}
	else if (func_131(bParam0, -541549214))
	{
		func_308(8, bParam0);
	}
	else if (func_131(bParam0, 130796156))
	{
		func_308(-1, bParam0);
	}
}

int func_179(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;

	Var4.f_1 = 10;
	func_309(&Var4, joaat("LOOT_TYPE_NORMAL"));
	return func_310(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_180(bool bParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_34(bParam0, 0))
	{
		return Var0;
	}
	if (func_131(bParam0, -305066475))
	{
		if (func_66() == -1)
		{
			if (func_131(bParam0, -537818634))
			{
				return func_311(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			}
			else
			{
				return func_311(joaat("DEADEYE_ITEMS"));
			}
		}
	}
	else if (func_131(bParam0, -537818634))
	{
		return func_311(joaat("MEDICINE_ITEMS"));
	}
	if (func_131(bParam0, 2084895747))
	{
		return func_311(joaat("LOCK_BREAKER_ITEMS"));
	}
	return Var2;
}

void func_181(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("PROVISION_BIRD_FEATHER_FLIGHT"):
			if (func_66() == -1)
			{
				if (func_148(((*Global_1835011)[4 /*74*/])->f_1, 1))
				{
					func_24(109, 1);
				}
			}
			break;
	}
}

void func_182(bool bParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_313(func_312(0));
	func_315(MISC::_CREATE_VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_314(bParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_183(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;
	char cVar2[32];
	int iVar6;
	struct<2> Var7;
	int iVar10;
	int iVar11;
	int iVar12;
	char* sVar13;
	int iVar14;
	char* sVar15;

	if (bParam0 == joaat("AMMO_MOONSHINEJUG"))
	{
		return;
	}
	if (!func_34(bParam0, 0))
	{
		return;
	}
	if (bParam0 == joaat("KIT_HANDHELD_CATALOG"))
	{
		return;
	}
	if (bParam1 == 0)
	{
		return;
	}
	if (!func_316())
	{
		func_317(bParam0, bParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(bParam1);
	StringCopy(&cVar2, func_318(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (bParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_318(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_132(bParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_35(bParam0);
	iVar10 = 0;
	iVar11 = joaat("INVENTORY");
	if ((iVar6 == joaat("AMMO") && bParam0 != joaat("AMMO_HATCHET")) && bParam0 != joaat("AMMO_HATCHET_CLEAVER"))
	{
		iVar10 = joaat("AMMO_TYPES");
		iVar11 = joaat("AMMO_TYPES");
	}
	if (iVar6 == joaat("WEAPON_MOD") || iVar6 == joaat("WEAPON_DECORATION"))
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_319(bParam0, &Var7, iVar11, iVar10, 0, joaat("UI_ITEMVIEWER")))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (MISC::GET_HASH_KEY(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Var7))
	{
		return;
	}
	iVar12 = joaat("COLOR_PURE_WHITE");
	sVar13 = "Transaction_Positive";
	iVar14 = 0;
	if (bVar0)
	{
		iVar12 = joaat("COLOR_GREYMID");
		sVar13 = "Transaction_Negative";
		iVar14 = 1;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_IS_OVERPOWERED_ITEM(bParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar12 = joaat("COLOR_RPG_SPECIAL_1");
		}
		else
		{
			iVar12 = joaat("COLOR_YELLOWDARK");
		}
	}
	sVar15 = func_320(MISC::_CREATE_VAR_STRING(10, &cVar2, MISC::_CREATE_VAR_STRING(0, func_170(bParam0)), iVar1), iVar12);
	if (((((bParam1 == 1 || func_131(bParam0, 1443104131)) || bParam0 == joaat("CONSUMABLE_CIGARETTE_BOX")) || bParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_USED")) || bParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP")) || bParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"))
	{
		sVar15 = MISC::_CREATE_VAR_STRING(0, func_170(bParam0));
	}
	func_315(sVar15, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

void func_184(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_315(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_185(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iParam0) * fParam2));
		bVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_321())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(bVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		bVar1 = (bVar1 + iVar2);
		func_315(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_TOTAL_TAKE"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_322(iVar0);
			func_323(iVar0, 0, 0);
		}
		func_315(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_PLAYER_EARN", bVar1), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		bVar1 = iParam0;
	}
	if (bVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(bVar1, iParam4);
		func_27(func_311(joaat("CAREER_CASH")), bVar1);
	}
}

bool func_186(int iParam0, int iParam1)
{
	if (func_66() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iParam0]), iParam1);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iParam0]), iParam1);
}

int func_187(int iParam0)
{
	if (func_66() != -1)
	{
		if (func_189(iParam0, 4))
		{
			return 0;
		}
	}
	else if (func_189(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_188(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_189(iParam0, 65536) && !func_189(iParam0, 32768))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if ((Global_40.f_7756[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_189(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0 /*3*/] - iVar1);
			if ((Global_40.f_7756[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && func_189(iParam0, 32768))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_189(int iParam0, int iParam1)
{
	return ((Global_1905944->f_22[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_190(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_191()
{
	return Global_1905944->f_5694;
}

bool func_192(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_193(bool bParam0, int iParam1, var uParam2)
{
	*iParam1 = 0;
	*uParam2 = 0;
	switch (bParam0)
	{
		case joaat("AMMO_REVOLVER_AMMOBOX"):
			*iParam1 = joaat("REVOLVER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_USED"):
			*iParam1 = joaat("REVOLVER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_EXPRESS"):
			*iParam1 = joaat("REVOLVER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REVOLVER_EXPRESS");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = joaat("REVOLVER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REVOLVER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX"):
			*iParam1 = joaat("PISTOL_AMMO_BOX");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_USED"):
			*iParam1 = joaat("PISTOL_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_EXPRESS"):
			*iParam1 = joaat("PISTOL_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_PISTOL_EXPRESS");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = joaat("PISTOL_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_PISTOL_HIGH_VELOCITY");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX"):
			*iParam1 = joaat("RIFLE_AMMO_BOX");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_USED"):
			*iParam1 = joaat("RIFLE_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_EXPRESS"):
			*iParam1 = joaat("RIFLE_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_RIFLE_EXPRESS");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = joaat("RIFLE_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_RIFLE_HIGH_VELOCITY");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX"):
			*iParam1 = joaat("REPEATER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_USED"):
			*iParam1 = joaat("REPEATER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_EXPRESS"):
			*iParam1 = joaat("REPEATER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REPEATER_EXPRESS");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = joaat("REPEATER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REPEATER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX"):
			*iParam1 = joaat("SHOTGUN_AMMO_BOX");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_USED"):
			*iParam1 = joaat("SHOTGUN_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_SLUG"):
			*iParam1 = joaat("SHOTGUN_AMMO_BOX_SLUG");
			*uParam2 = joaat("AMMO_SHOTGUN_SLUG");
			break;
		case joaat("AMMO_22_AMMOBOX"):
			*iParam1 = joaat("22_AMMO_BOX");
			*uParam2 = joaat("AMMO_22");
			break;
	}
}

struct<14> func_194(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	if (bParam0 != 0)
	{
		Var0 = bParam0;
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
	return Var0;
}

struct<4> func_195(bool bParam0)
{
	int iVar0;

	iVar0 = func_89(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224214))
		{
			*Global_1224214 = { func_243(923904168, func_324(bParam0), -740156546, bParam0) };
		}
		return *Global_1224214;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224222))
		{
			*Global_1224222 = { func_243(923904168, func_324(bParam0), -740156546, 0) };
		}
		return *Global_1224222;
	}
	return func_243(923904168, func_324(bParam0), -740156546, 0);
}

void func_196(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_197(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_89(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

bool func_198(int iParam0)
{
	return iParam0 != 0;
}

Vector3 func_199()
{
	return -6323.169f, -3671.669f, 1.19892f;
}

bool func_200(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	bool bVar0;

	bVar0 = PED::CREATE_PED(bParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		return false;
	}
	func_325(bVar0, bParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return bVar0;
}

Vector3 func_201()
{
	return -6322.69f, -3672.167f, 3.22559f;
}

Vector3 func_202()
{
	return 7.156243f, 49.48636f, 49.4864f;
}

void func_203(int iParam0)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return;
	}
	bVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	PED::_0x6569F31A01B4C097(bVar0, 7, true);
}

void func_204(bool bParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(bParam0) && ENTITY::IS_ENTITY_A_PED(bParam0))
	{
		iVar0 = func_326(bParam0);
		func_327(bParam0, iParam1, iParam2, iVar0);
	}
	else if (!DECORATOR::DECOR_EXIST_ON(bParam0, "loot_item_type1"))
	{
		DECORATOR::DECOR_SET_INT(bParam0, "loot_item_type1", iParam1);
		DECORATOR::DECOR_SET_INT(bParam0, "loot_item_amt1", iParam2);
		DECORATOR::DECOR_SET_INT(bParam0, "loot_item_model1", iParam3);
		return;
	}
	else if (!DECORATOR::DECOR_EXIST_ON(bParam0, "loot_item_type2"))
	{
		DECORATOR::DECOR_SET_INT(bParam0, "loot_item_type2", iParam1);
		DECORATOR::DECOR_SET_INT(bParam0, "loot_item_amt2", iParam2);
		DECORATOR::DECOR_SET_INT(bParam0, "loot_item_model2", iParam3);
		return;
	}
}

void func_205(int iParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "honor_block"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "honor_block");
		}
		iVar0 = (iVar0 || func_328(iParam1));
		DECORATOR::DECOR_SET_INT(iParam0, "honor_block", iVar0);
	}
}

void func_206(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (bParam1)
		{
			AUDIO::DISABLE_PED_PAIN_AUDIO(iParam0, true);
		}
		if (bParam2)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 243, true);
		}
		if (Global_35 == iParam0)
		{
		}
		ENTITY::_SET_ENTITY_HEALTH(iParam0, 0, 0);
	}
}

bool func_207(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

bool func_208(bool bParam0)
{
	return func_35(bParam0) == joaat("WEAPON");
}

int func_209(bool bParam0)
{
	var uVar0;

	if (func_66() != -1)
	{
		return 0;
	}
	if (func_132(bParam0, 1048576))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return func_216(bParam0, &uVar0, 1, 0, 0);
	}
	return func_6(bParam0, 1, 0);
}

void func_210(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	bool bVar0;

	if (func_35(bParam0) != joaat("WEAPON"))
	{
		return;
	}
	bVar0 = func_137(bParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(bVar0))
	{
		return;
	}
	if (bParam2 || !func_239(bVar0))
	{
		if (func_66() == -1)
		{
			func_138(bVar0);
		}
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, bVar0, 0, false) && func_37(bParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_183(bParam0, bParam1, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_211(bool bParam0, bool bParam1)
{
	int iVar0;

	if (func_131(bParam0, 58855631))
	{
		func_329(bParam0, -915411861, &iVar0, 1);
		*bParam1 = (*bParam1 * iVar0);
	}
}

struct<5> func_212(bool bParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;

	Var0 = { func_324(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_35(bParam0))
	{
		case joaat("CLOTHING"):
			if (!INVENTORY::_0x780C5B9AE2819807(bParam0, 1034665895))
			{
				Var0 = { func_243(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("WARDROBE"));
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case joaat("WEAPON"):
			Var0 = { func_195(bParam1) };
			if (bParam2 && func_330(bParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_241(bParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_241(bParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_242(bParam0, &Var5, 1728382685 /* GXTEntry: "Right" */))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
			}
			else
			{
				Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
			}
			break;
		case joaat("HORSE"):
			Var0.f_4 = 1782082944;
			break;
		case joaat("EMOTE"):
			Var0.f_4 = -813824107;
			Var0 = { func_331(bParam1) };
			switch (func_135(bParam0))
			{
				case 664784405:
					Var0.f_4 = -1150938404;
					break;
				case 2020212423:
					Var0.f_4 = -1756997214;
					break;
				case 874188557:
					Var0.f_4 = -241855024;
					break;
				case -2101244071:
					Var0.f_4 = -268116367;
					break;
			}
			break;
		case joaat("UPGRADE"):
			if (func_332(bParam0, -1823706425))
			{
				Var0 = { func_243(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("KIT_CAMP"));
			}
			else if (func_332(bParam0, -1483207246))
			{
				Var0 = { func_243(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_0x780C5B9AE2819807(bParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
		default:
			if (INVENTORY::_0x780C5B9AE2819807(bParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(bParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(bParam0, -833319691))
			{
				Var27.f_9 = -1591664384;
				if (!func_333(Var0, &Var27, bParam1, 0))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var27.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("CHARACTER"));
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

int func_213(bool bParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_34(bParam0, 0))
	{
		return 0;
	}
	if (!func_139(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_0xE80E50BEE276A54A(bParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_89(bParam3), bParam0);
}

int func_214(bool bParam0, bool bParam1)
{
	if (func_143(bParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, bParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_89(bParam1), bParam0, 0);
}

int func_215()
{
	if (func_66() != -1)
	{
		return 0;
	}
	if (!func_79())
	{
		return 0;
	}
	if (!func_148(((*Global_1835011)[1 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_148(((*Global_1835011)[2 /*74*/])->f_1, 1) && func_148(((*Global_1347702)[120 /*49*/])->f_15, 1)) && !func_148(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_148(((*Global_1835011)[37 /*74*/])->f_1, 1) && !func_148(((*Global_1835011)[39 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_148(((*Global_1835011)[57 /*74*/])->f_1, 1) && !func_148(((*Global_1835011)[60 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_148(((*Global_1835011)[26 /*74*/])->f_1, 1) && !func_148(((*Global_1347702)[67 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if ((func_148(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_148(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_148(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_148(((*Global_1835011)[75 /*74*/])->f_1, 1) && !func_148(((*Global_1347702)[1 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if (func_148(((*Global_1835011)[76 /*74*/])->f_1, 1) && !func_148(((*Global_1835011)[77 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_148(((*Global_1835011)[40 /*74*/])->f_1, 1) && func_148(((*Global_1835011)[41 /*74*/])->f_1, 1)) && !func_148(((*Global_1835011)[44 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_148(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_148(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_148(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_148(((*Global_1835011)[65 /*74*/])->f_1, 1) && func_148(((*Global_1835011)[66 /*74*/])->f_1, 1)) && !func_148(((*Global_1835011)[67 /*74*/])->f_1, 1))
	{
		return 1;
	}
	return 0;
}

int func_216(bool bParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	struct<4> Var0;
	struct<10> Var4;
	var uVar26;
	int iVar27;
	int iVar28;

	func_334(&bParam0);
	if (!func_34(bParam0, 0))
	{
		return 0;
	}
	if (!func_139(0))
	{
		bParam3 = true;
	}
	if (func_208(bParam0) && WEAPON::_0x705BE297EEBDB95D(bParam0))
	{
		if (WEAPON::_0xD955FEE4B87AFA07(bParam0))
		{
			Var0 = { func_195(0) };
			Var4.f_9 = -1591664384;
			if (!func_241(bParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
			{
				return 0;
			}
			else if (func_242(bParam0, &Var4, 1728382685 /* GXTEntry: "Right" */))
			{
				return 0;
			}
			if (func_330(bParam0, 1))
			{
				if (!func_241(bParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					return 0;
				}
				else if (func_242(bParam0, &Var4, -649335959 /* GXTEntry: "Left" */))
				{
					return 0;
				}
			}
		}
		else if (!func_335(bParam0, &uVar26, 0))
		{
			return 0;
		}
		return 1;
	}
	iVar27 = func_213(bParam0, uParam1, bParam3, bParam4);
	if (iVar27 < 0)
	{
		return 0;
	}
	else if (iVar27 == 0)
	{
		return 1;
	}
	if (bParam3)
	{
		iVar28 = func_336(bParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = INVENTORY::_0xE787F05DFC977BDE(func_89(bParam4), bParam0, 0);
	}
	if ((iVar28 + bParam2) > iVar27)
	{
		return 1;
	}
	return 0;
}

int func_217(bool bParam0, int iParam1)
{
	struct<2> Var0[20];
	int iVar41;
	int iVar42;

	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_TAG_DATA(bParam0, &Var0, &iVar41, 20))
	{
		iVar42 = 0;
		while (iVar42 < iVar41)
		{
			if ((Var0[iVar42 /*2*/])->f_1 == iParam1)
			{
				return &(Var0[iVar42 /*2*/]);
			}
			iVar42++;
		}
	}
	return 0;
}

int func_218()
{
	return COLLECTION::_0x62CAB7DB62EAD434(joaat("CIGARETTE_CARDS"), 0);
}

bool func_219(int iParam0)
{
	return COLLECTION::_0xEC3959E9950BF56B(iParam0);
}

void func_220(int iParam0)
{
	int iVar0;
	float fVar1;

	if (func_66() != -1)
	{
		return;
	}
	iVar0 = func_337(iParam0);
	fVar1 = func_338(iParam0);
	if ((Global_1347477->f_117 || !func_133(31)) || !func_339(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_340(iVar0) >= 7)
	{
		return;
	}
	if (iVar0 == 1)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_57));
	}
	else if (iVar0 == 0)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_55));
	}
	else if (iVar0 == 2)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_56));
	}
	fVar1 = (fVar1 * IntToFloat(Global_1347477->f_182));
	fVar1 = BUILTIN::TO_FLOAT(BUILTIN::ROUND(fVar1));
	func_341(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_315(MISC::_CREATE_VAR_STRING(6, func_342(iParam0), fVar1), "itemtype_textures", func_343(iVar0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

bool func_221(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_222(int iParam0)
{
	int iVar0;

	iVar0 = func_255(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_223(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("DOCUMENT_CIG_CARD_GUN_SET");
		case 1:
			return joaat("DOCUMENT_CIG_CARD_ART_SET");
		case 2:
			return joaat("DOCUMENT_CIG_CARD_LND_SET");
		case 3:
			return joaat("DOCUMENT_CIG_CARD_GRL_SET");
		case 4:
			return joaat("DOCUMENT_CIG_CARD_PLT_SET");
		case 5:
			return joaat("DOCUMENT_CIG_CARD_ACT_SET");
		case 6:
			return joaat("DOCUMENT_CIG_CARD_AML_SET");
		case 7:
			return joaat("DOCUMENT_CIG_CARD_VEH_SET");
		case 8:
			return joaat("DOCUMENT_CIG_CARD_SPT_SET");
		case 9:
			return joaat("DOCUMENT_CIG_CARD_INV_SET");
		case 10:
			return joaat("DOCUMENT_CIG_CARD_HOR_SET");
		case 11:
			return joaat("DOCUMENT_CIG_CARD_PAM_SET");
		default:
			break;
	}
	return 0;
}

int func_224(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;

	if (!func_106(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_INT(&uVar5, &Var0);
	return uVar5;
}

char* func_225(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
{
	switch (iParam1)
	{
		case joaat("CIGARETTE_CARDS"):
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_CC_COMPLETE";
			}
			else if (func_127() >= 12)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_344(), 12);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_345(), 12);
			}
			break;
		case joaat("DINO_BONES"):
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_DB_COMPLETE";
			}
			else if (func_268() >= 30)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_POSTED_OBJ", func_346(), 30);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_FOUND_OBJ", func_268(), 30);
			}
			break;
		case -1531394072:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_EX_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_EX_ITEMS_COLLECTED_OBJ", sParam4, sParam5);
			}
			break;
		case 1995362678:
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_LF_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_347(), 13);
			}
			break;
		case joaat("ROCK_CARVINGS"):
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_RC_COMPLETE";
			}
			else if (func_269() >= 10)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_POSTED_OBJ", func_348(), 10);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_FOUND_OBJ", func_269(), 10);
			}
			break;
		case joaat("TAXIDERMY"):
			if (iParam2 == 3)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 4)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_READ_VACATION");
			}
			else if (iParam2 == 5)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_ON_VACATION");
			}
			else if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_RETURN_POST_OFFICE";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_TX_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_224(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

int func_226(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == joaat("CIGARETTE_CARDS"))
	{
		if (iParam1 == joaat("COL_CC_INTRO"))
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, joaat("COL_CC_INTRO_PRE")))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, joaat("COL_CC_INTRO_PRE"));
			}
		}
	}
	else if (iParam2 == joaat("DINO_BONES"))
	{
		if (iParam1 == joaat("COL_DB_INTRO"))
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, joaat("COL_DB_INTRO_PRE")))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, joaat("COL_DB_INTRO_PRE"));
			}
		}
	}
	else if (iParam2 == joaat("ROCK_CARVINGS"))
	{
		if (iParam1 == joaat("COL_RC_INTRO"))
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, joaat("COL_RC_INTRO_PRE")))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, joaat("COL_RC_INTRO_PRE"));
			}
		}
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_REMOVE_ENTRY(3, iParam1);
	}
	return 1;
}

int func_227(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);
	}
	return 1;
}

int func_228(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(sParam2), sParam2, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iParam1, true);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iParam1, iParam6, iParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iParam1, MISC::_CREATE_VAR_STRING(2, sParam3));
	return 1;
}

int func_229(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == joaat("CIGARETTE_CARDS"))
		{
			bVar2 = func_349(iVar0);
			if (bParam4 == bVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_6(bVar2, 1, 0) || func_351(func_350(bVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_232(func_349(iVar0))), func_232(func_349(iVar0)), bVar1, true, false);
		}
		if (iParam2 == joaat("DINO_BONES"))
		{
			if (iVar0 == 0)
			{
				bVar1 = func_268() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_352(iVar0)), func_352(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_346() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_352(iVar0)), func_352(iVar0), bVar1, true, false);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_352(iVar0)), func_352(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			bVar2 = func_51(iParam3, func_353(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (bParam4 == bVar2)
				{
					bVar1 = (func_275(bVar2) - iParam7) >= func_224(iParam3, func_354(iVar0));
				}
				else
				{
					bVar1 = func_275(bVar2) >= func_224(iParam3, func_354(iVar0));
				}
			}
			else if (bParam4 == bVar2)
			{
				bVar1 = (func_275(bVar2) + iParam7) >= func_224(iParam3, func_354(iVar0));
			}
			else
			{
				bVar1 = func_275(bVar2) >= func_224(iParam3, func_354(iVar0));
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_355(bVar2)), func_355(bVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_356(COLLECTION::_0x126CBEBBA46693CF(iVar0, 1995362678, 0)))
			{
				bVar1 = true;
			}
			else if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = false;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_357(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0))), func_357(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == joaat("ROCK_CARVINGS"))
		{
			if (iVar0 == 0)
			{
				bVar1 = func_269() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_358(iVar0)), func_358(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_348() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_358(iVar0)), func_358(iVar0), bVar1, true, false);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_358(iVar0)), func_358(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == joaat("TAXIDERMY"))
		{
			bVar2 = func_51(iParam3, func_353(iVar0));
			if (bParam9)
			{
				if (bParam4 == bVar2)
				{
					bVar1 = (func_275(bVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_359(bVar2);
				}
			}
			else if (bParam4 == bVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_359(bVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_360(bVar2)), func_360(bVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return 1;
}

int func_230(int iParam0, int iParam1, int iParam2, int iParam3)
{
	bool bVar0;

	bVar0 = false;
	if (iParam3 == 8)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam2 == joaat("CIGARETTE_CARDS"))
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_CC_ITEMS_DELIVERED"), "COL_CC_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (iParam2 == -1531394072)
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_EX_ITEMS_DELIVERED"), "COL_EX_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (iParam2 == 1995362678)
	{
		if (func_347() >= 13)
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
		}
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_LF_ITEMS_DELIVERED"), "COL_LF_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (((((((iParam3 == 7 || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 0) || iParam3 == 1) || iParam3 == 2) || iParam3 == 8)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam2 == joaat("TAXIDERMY"))
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_TX_CARCASSES_MAILED"), "COL_TX_CARCASSES_MAILED", bVar0, true, false);
	}
	return 1;
}

int func_231(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_362(func_361(0)) && ((func_363(0) == 1 || func_363(0) == 8) || func_363(0) == 6))
	{
		iParam3 = 7;
	}
	if ((iParam2 == joaat("DINO_BONES") || iParam2 == 1995362678) || iParam2 == joaat("ROCK_CARVINGS"))
	{
		if (iParam3 == 7)
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(3, iParam1, 1, "");
		}
	}
	else if (iParam2 == joaat("TAXIDERMY"))
	{
		if (iParam3 == 7)
		{
			if (bParam4)
			{
			}
			else
			{
				UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(3, iParam1, 1, "");
			}
		}
	}
	return 1;
}

char* func_232(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("DOCUMENT_CIG_CARD_GUN_SET"):
			return "COL_CC_GUN_SET";
		case joaat("DOCUMENT_CIG_CARD_ART_SET"):
			return "COL_CC_ART_SET";
		case joaat("DOCUMENT_CIG_CARD_LND_SET"):
			return "COL_CC_LND_SET";
		case joaat("DOCUMENT_CIG_CARD_GRL_SET"):
			return "COL_CC_GRL_SET";
		case joaat("DOCUMENT_CIG_CARD_PLT_SET"):
			return "COL_CC_PLT_SET";
		case joaat("DOCUMENT_CIG_CARD_ACT_SET"):
			return "COL_CC_ACT_SET";
		case joaat("DOCUMENT_CIG_CARD_AML_SET"):
			return "COL_CC_AML_SET";
		case joaat("DOCUMENT_CIG_CARD_VEH_SET"):
			return "COL_CC_VEH_SET";
		case joaat("DOCUMENT_CIG_CARD_SPT_SET"):
			return "COL_CC_SPT_SET";
		case joaat("DOCUMENT_CIG_CARD_INV_SET"):
			return "COL_CC_INV_SET";
		case joaat("DOCUMENT_CIG_CARD_HOR_SET"):
			return "COL_CC_HOR_SET";
		case joaat("DOCUMENT_CIG_CARD_PAM_SET"):
			return "COL_CC_PAM_SET";
		default:
			break;
	}
	return "";
}

var func_233(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<4> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = iParam4;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam8;
	Var13.f_7 = 1;
	Var13 = iParam7;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _NAMESPACE71::_SHOW_ADVANCED_NOTIFICATION(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

int func_234(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_235(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_236(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	MISC::SET_BIT(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_237(int iParam0)
{
	bool bVar0;

	switch (iParam0)
	{
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 11:
			func_364(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			break;
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			func_365(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_365(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_365(3);
			break;
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
		case 22:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
		case 31:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 32:
			break;
		case 33:
			func_366(1);
			break;
		case 34:
			func_367(1);
			break;
		case 35:
			func_368(1);
			break;
		case 36:
			break;
		case 37:
			func_369(0);
			break;
		case 38:
			func_370(0);
			break;
		case 39:
			func_371(0);
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 43:
			break;
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 2:
			if ((!&Global_1879534 && func_79()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_233("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("HUD_TOASTS"), joaat("TOAST_PLAYER_DEADEYE"), -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_24(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_79()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_233("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("HUD_TOASTS"), joaat("TOAST_PLAYER_DEADEYE"), -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_24(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_79()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_233("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("HUD_TOASTS"), joaat("TOAST_PLAYER_DEADEYE"), -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_24(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_79()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_233("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("HUD_TOASTS"), joaat("TOAST_PLAYER_DEADEYE"), -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_24(589, 0);
			break;
		case 24:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_0x83B8D50EB9446BBA(PLAYER::PLAYER_PED_ID(), 1);
			if (func_66() == -1)
			{
				if (!func_307(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) || func_372(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) == 2110595215)
				{
					if (func_22())
					{
						bVar0 = -1515874150; /* GXTEntry: "John\'s Off-Hand Holster" */
					}
					else
					{
						bVar0 = joaat("CLOTHING_SP_OFFHAND_000");
					}
					if (!func_6(bVar0, 1, 0))
					{
						func_176(bVar0, 1, 752097756);
					}
					func_163(Global_35, bVar0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_66() == -1)
			{
				if (!func_6(1013902307, 1, 0))
				{
					func_176(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_66() == -1)
			{
				if (!func_6(1013902307, 1, 0))
				{
					func_176(1013902307, 1, 752097756);
				}
				if (!func_6(142640135, 1, 0))
				{
					func_176(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_66() == -1)
			{
				if (!func_6(786809402, 1, 0))
				{
					func_176(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_66() == -1)
			{
				if (!func_6(786809402, 1, 0))
				{
					func_176(786809402, 1, 752097756);
				}
				if (!func_6(-518019409, 1, 0))
				{
					func_176(-518019409, 1, 752097756);
				}
			}
			break;
		case 23:
			PLAYER::_0x5B9813ECF7633FE8(0);
			break;
		case 25:
			break;
		case 26:
			break;
		case 27:
			break;
		case 28:
			break;
		case 29:
			break;
		case 30:
			break;
		case 44:
			break;
		case 45:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER"), true);
			Global_1935630->f_47 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 46:
			func_373();
			break;
		case 47:
			PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 52:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_POST_GANG1"), true);
			break;
		case 53:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_RECEPTIVE"), true);
			break;
		case 54:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_TRUSTED"), true);
			break;
		case 55:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("COMPENDIUM"), true);
			break;
		case 56:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_PEDS_REACT_TO_SICK_ATHUR"), true);
			break;
	}
}

int func_238(bool bParam0)
{
	int iVar0;

	iVar0 = WEAPON::_0x865F36299079FB75(bParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (UNLOCK::_UNLOCK_IS_VISIBLE(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_239(bool bParam0)
{
	int iVar0;

	iVar0 = WEAPON::_0x865F36299079FB75(bParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_240(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1782082944;
		case 1:
			return 1704602624;
		case 2:
			return 1214181762;
		case 3:
			return -430578371;
		case 4:
			return -730381952;
		case 5:
			return -253503777;
		case 6:
			return 1352275534;
		case 7:
			return 1666399168;
		case 8:
			return -1911121386;
		case 9:
			return 1756656691;
		case 10:
			return -1774867076;
		case 11:
			return -421952220;
		case 12:
			return -1087003323;
		case 13:
			return 1231618917;
		case 14:
			return -1183777174;
		case 15:
			return -841767082;
		case 16:
			return 1043717005;
		case 17:
			return 142663787;
		case 18:
			return 1718143051;
		case 19:
			return -6605744;
		case 20:
			return 953047564;
		case 21:
			return 769706682;
		case 22:
			return 1635590003;
		case 23:
			return -2047978619;
		case 24:
			return -586319254;
		case 25:
			return 249896112;
		case 26:
			return -1060513333;
		case 27:
			return 1317351007;
		case 28:
			return -500478573;
		case 29:
			return -806573802;
		case 30:
			return -1109949204;
		case 31:
			return -740156546;
		case 32:
			return -684532710;
		case 33:
			return 1158805436;
		case 34:
			return -559473670;
		case 35:
			return -797147251;
		case 36:
			return -382216265;
		case 37:
			return 1419177114;
		case 38:
			return 1704297235;
		case 39:
			return -1139016418;
		case 40:
			return 897705377;
		case 41:
			return 17961769;
		case 42:
			return 205582207;
		case 43:
			return 900740963;
		case 44:
			return -1369589344;
		case 45:
			return -1695823795;
		case 46:
			return -41453074;
		case 47:
			return 539767227;
		case 48:
			return 1210490314;
		case 49:
			return -399684751;
		case 50:
			return 2138893455;
		case 51:
			return -1617010487;
		case 52:
			return -832377028;
		case 53:
			return -428040245;
		case 54:
			return 1279288897;
		case 55:
			return -594897905;
		case 56:
			return -1360459240;
		case 57:
			return 1838428396;
		case 58:
			return -1467846997;
		case 59:
			return -490610263;
		case 60:
			return -1885413079;
		case 61:
			return 708884155;
		case 62:
			return -134459952;
		case 63:
			return -1912136700;
		case 64:
			return -1268031552;
		case 65:
			return 1177953227;
		case 66:
			return 2130805296;
		case 67:
			return 38093490;
		case 68:
			return -269153218;
		case 69:
			return -1995068011;
		case 70:
			return -164284834;
		case 71:
			return 1446463345;
		case 72:
			return 1501315823;
		case 73:
			return -750379482;
		case 74:
			return -929560937;
		case 75:
			return 608323241;
		case 76:
			return 1030796013;
		case 77:
			return 1915057434;
		case 78:
			return -1582276476;
		case 79:
			return 692059311;
		case 80:
			return 2062839241;
		case 81:
			return -1884531872;
		case 82:
			return -866434534;
		case 83:
			return -1252192421;
		case 84:
			return 1243288963;
		case 85:
			return -1953772189;
		case 86:
			return 754411745;
		case 87:
			return 545309006;
		case 88:
			return -1089810811;
		case 89:
			return 1957869400;
		case 90:
			return -241412332;
		case 91:
			return -1548010959;
		case 92:
			return 550150488;
		case 93:
			return 946565453;
		case 94:
			return 434443248;
		case 95:
			return -1709914938;
		case 96:
			return 366686112;
		case 97:
			return -1370063350;
		case 98:
			return 2126829550;
		case 99:
			return 226552910;
		case 100:
			return 721193431;
		case 101:
			return -315672460;
		case 102:
			return 623544501;
		case 103:
			return 259556714;
		case 104:
			return -2125361825;
		case 105:
			return 1078230356;
		case 106:
			return 1885364811;
		case 107:
			return 1630382737;
		case 108:
			return 1738245512;
		case 109:
			return 1540262216;
		case 110:
			return 1016871472;
		case 111:
			return 13829069;
		case 112:
			return 737051352;
		case 113:
			return 1734614610;
		case 114:
			return -208715295;
		case 115:
			return 1435062936;
		case 116:
			return 1483055553;
		case 117:
			return 380335002;
		case 118:
			return -1079385677;
		case 119:
			return 676610411;
		case 120:
			return 2145419552;
		case 121:
			return 657238733;
		case 122:
			return 1850579281;
		case 123:
			return -1923957384;
		case 124:
			return -1142828108;
		case 125:
			return -1400618531;
		case 126:
			return -1433857135;
		case 127:
			return 209987206;
		case 128:
			return 1686943047;
		case 129:
			return -59178517;
		case 130:
			return 2134884601;
		case 131:
			return 651707517;
		case 132:
			return -633788535;
		case 133:
			return 116394463;
		case 134:
			return -1196973875;
		case 135:
			return 801752086;
		case 136:
			return 184475332;
		case 137:
			return -1880922659;
		case 138:
			return -898138634;
		case 139:
			return -2107418444;
		case 140:
			return -679970099;
		case 141:
			return -1531392549;
		case 142:
			return 1612483376;
		case 143:
			return 463930900;
		case 144:
			return -632148238;
		case 145:
			return 55303249;
		case 146:
			return 2108322089;
		case 147:
			return -1358896714;
		case 148:
			return 74475632;
		case 149:
			return -28710953;
		case 150:
			return -1791599168;
		case 151:
			return 1605938169;
		case 152:
			return 1255242276;
		case 153:
			return 636467727;
		case 154:
			return -1567688525;
		case 155:
			return -77886679;
		case 156:
			return -1057900679;
		case 157:
			return -1960888134;
		case 158:
			return -1719717295;
		case 159:
			return -1779244911;
		case 160:
			return -670540863;
		case 161:
			return 223362311;
		case 162:
			return 1150824567;
		case 163:
			return 974471191;
		case 164:
			return 1989683968;
		case 165:
			return 254804477;
		case 166:
			return 192057609;
		case 167:
			return 1553957817;
		case 168:
			return 2099829015;
		case 169:
			return -840300007 /* GXTEntry: "Extremely durable, hand tooled Off-Hand Holster with elaborate rattlesnake and sk" +
    "ull decoration." */;
		case 170:
			return -1948423372;
		case 171:
			return 981083654;
		case 172:
			return 1283289876;
		case 173:
			return -606884489;
		case 174:
			return -100418572;
		case 175:
			return 663645231;
		case 176:
			return 1442217033;
		case 177:
			return 1410986244;
		case 178:
			return 847409839;
		case 179:
			return 923926911;
		case 180:
			return 109995826;
		case 181:
			return -747412737;
		case 182:
			return 1114341727;
		case 183:
			return -539456939;
		case 184:
			return 45887121;
		case 185:
			return 913271624;
		case 186:
			return -1652812715;
		case 187:
			return -1791365775;
		case 188:
			return -979299941;
		case 189:
			return 713062001;
		case 190:
			return -575045963;
		case 191:
			return 1852965262;
		case 192:
			return -1398836354;
		case 193:
			return -1829885298;
		case 194:
			return -1773850357;
		case 195:
			return -564258009;
		case 196:
			return 2016532685;
		case 197:
			return -1070563798;
		case 198:
			return -1619221343;
		case 199:
			return -345571691;
		case 200:
			return 544288390;
		case 201:
			return 159578294;
		case 202:
			return -76852849;
		case 203:
			return 1110295244;
		case 204:
			return 2104563477;
		case 205:
			return 1947827651;
		case 206:
			return -933072766;
		case 207:
			return 2104388648;
		case 208:
			return -1677140601;
		case 209:
			return -2133097881;
		case 210:
			return -826678792;
		case 211:
			return -513522325;
		case 212:
			return 1970588249;
		case 213:
			return -2080032591;
		case 214:
			return 1758847745;
		case 215:
			return 895010282;
		case 216:
			return 1786352060;
		case 217:
			return -833319691;
		case 218:
			return 1591329969;
		case 219:
			return 2123222014;
		case 220:
			return -1578397674;
		case 221:
			return 1473261684;
		case 222:
			return -241855024;
		case 223:
			return 12999093;
		case 224:
			return -6796437;
		case 225:
			return -268116367;
		case 226:
			return -636470867;
		case 227:
			return 1737668280;
		case 228:
			return 892807236;
		case 229:
			return -733247890;
		case 230:
			return 24047176;
		case 231:
			return -1561999014;
		case 232:
			return -2052774042;
		case 233:
			return joaat("SLOTID_HORSE_BEDROLL");
		case 234:
			return joaat("SLOTID_HORSE_BLANKET");
		case 235:
			return joaat("SLOTID_HORSE_CANTLE");
		case 236:
			return joaat("SLOTID_HORSE_FENDER");
		case 237:
			return joaat("SLOTID_HORSE_HORN");
		case 238:
			return joaat("SLOTID_HORSE_INSURANCE");
		case 239:
			return 802754820;
		case 240:
			return joaat("SLOTID_HORSE_MANE");
		case 241:
			return -1886147520;
		case 242:
			return joaat("SLOTID_HORSE_REINS");
		case 243:
			return joaat("SLOTID_HORSE_SADDLE");
		case 244:
			return 1221327846;
		case 245:
			return 923162715;
		case 246:
			return 625423581;
		case 247:
			return 326668608;
		case 248:
			return 669530755;
		case 249:
			return 429759982;
		case 250:
			return -2111934838;
		case 251:
			return 1886178087;
		case 252:
			return 1587783573;
		case 253:
			return -279722001;
		case 254:
			return joaat("SLOTID_HORSE_SADDLEBAG");
		case 255:
			return 724026534;
		case 256:
			return joaat("SLOTID_HORSE_SEAT");
		case 257:
			return joaat("SLOTID_HORSE_SEX");
		case 258:
			return joaat("SLOTID_HORSE_SKIRT");
		case 259:
			return -1824203570;
		case 260:
			return -1654197998;
		case 261:
			return 798987653;
		case 262:
			return 976923323;
		case 263:
			return 1167442289;
		case 264:
			return joaat("SLOTID_HORSE_STIRRUP");
		case 265:
			return joaat("SLOTID_HORSE_TAIL");
		case 266:
			return -2015960939;
		case 267:
			return -1287636759;
		case 268:
			return -706917073;
		case 269:
			return -2166805;
		case 270:
			return -1391602433;
		case 271:
			return 1782075221;
		case 272:
			return 1282544585;
		case 273:
			return 1732594027;
		case 274:
			return -1058817012;
		case 275:
			return 1090546265;
		case 276:
			return -1783120823;
		case 277:
			return -1535745896;
		case 278:
			return -2086922122;
		case 279:
			return -1675198649;
		case 280:
			return 1189497682;
		case 281:
			return -1565675519;
		case 282:
			return -268973591;
		case 283:
			return 1039159916;
		case 284:
			return 1111816631;
		case 285:
			return 405591388;
		case 286:
			return 897456793;
		case 287:
			return 104187473;
		case 288:
			return 773808542;
		case 289:
			return -1120669954;
		case 290:
			return -1389278274;
		case 291:
			return 552979403;
		case 292:
			return -1571578784;
		case 293:
			return -708312114;
		case 294:
			return 688823508;
		case 295:
			return -1622147240;
		case 296:
			return 830292162;
		case 297:
			return 226276782;
		case 298:
			return -678416628;
		case 299:
			return -1098528034;
		case 300:
			return 316207340;
		case 301:
			return -1909200748;
		case 302:
			return -939652363;
		case 303:
			return joaat("SLOTID_PROGRESSION");
		case 304:
			return -375447933;
		case 305:
			return 537014919;
		case 306:
			return 1784584921;
		case 307:
			return 1084182731;
		case 308:
			return -1045471300;
		case 309:
			return 1617414719;
		case 310:
			return -787761753;
		case 311:
			return -490616606;
		case 312:
			return 1491346514;
		case 313:
			return -1311702610;
		case 314:
			return -904250715;
		case 315:
			return 1034665895;
		case 316:
			return -101524555;
		case 317:
			return 1419152594;
		case 318:
			return -451359317;
		case 319:
			return -1915385310;
		case 320:
			return 1315162488;
		case 321:
			return -361152079;
		case 322:
			return -2041626192;
		case 323:
			return -2077812539;
		case 324:
			return -1371514637;
		case 325:
			return 1730017037;
		case 326:
			return 892816668;
		case 327:
			return -1994943603;
		case 328:
			return 603133554;
		case 329:
			return -30160144;
		case 330:
			return -1248299493;
		case 331:
			return 727393558;
		case 332:
			return 755611221;
		case 333:
			return -170255458;
		case 334:
			return 1011151573;
		case 335:
			return 1122339631;
		case 336:
			return 454815308;
		case 337:
			return 990701735;
		case 338:
			return -246340825;
		case 339:
			return -1410671073;
		case 340:
			return 1547608292;
		case 341:
			return -714132970;
		case 342:
			return 732290690;
		case 343:
			return 971340545;
		case 344:
			return -234132662;
		case 345:
			return -2143057988;
		case 346:
			return -993947465;
		case 347:
			return -486552269;
		case 348:
			return -1156317860;
		case 349:
			return 1229625803;
		case 350:
			return -388596167;
		case 351:
			return -1204639465;
		case 352:
			return -1384685096;
		case 353:
			return -2026728113;
		case 354:
			return -1228057307;
		case 355:
			return 1835126290;
		case 356:
			return 1890833594;
		case 357:
			return -751549960;
		case 358:
			return -1682270750;
		case 359:
			return -1839865333;
		case 360:
			return -1990383629;
		case 361:
			return 1712094016;
		case 362:
			return 1532953697;
		case 363:
			return 1620318083;
		case 364:
			return -307230331;
		case 365:
			return -1034549620;
		case 366:
			return -1293064293;
		case 367:
			return -1540142553;
		case 368:
			return -1769886012;
		case 369:
			return -1983081126;
		case 370:
			return -1106117124;
		case 371:
			return -1873108338;
		case 372:
			return -2097543219;
		case 373:
			return 155413195;
		case 374:
			return -1162387149;
		case 375:
			return 1728382685 /* GXTEntry: "Right" */;
		case 376:
			return -649335959 /* GXTEntry: "Left" */;
		case 377:
			return -1876502240;
		case 378:
			return -2107032155;
		case 379:
			return 619103418;
		case 380:
			return 1355448197;
		case 381:
			return 1681762005;
		case 382:
			return 1026887814;
		case 383:
			return 354352628;
		case 384:
			return 1519366642;
		case 385:
			return -82757515;
		case 386:
			return 386306655;
		case 387:
			return 1243962119;
		case 388:
			return 756214903;
		case 389:
			return -718417579;
		case 390:
			return -1445516411;
		case 391:
			return -672392892;
		case 392:
			return 1465341584;
		case 393:
			return -427758369;
		case 394:
			return -735647142;
		case 395:
			return 1535838048;
		case 396:
			return -602272282;
		case 397:
			return 2051264661;
		case 398:
			return 487172188;
		case 399:
			return 282270687;
		case 400:
			return 1607708943;
		case 401:
			return 1686264939;
		case 402:
			return 314786149;
		case 403:
			return 1402841185;
		case 404:
			return 1099170772;
		case 405:
			return 2125676786;
		case 406:
			return -363896735;
		case 407:
			return -468790222;
		case 408:
			return -1779133048;
		case 409:
			return 1732537631;
		case 410:
			return 1755095401;
		case 411:
			return 835771095;
		case 412:
			return 1963317232;
		case 413:
			return 259627919;
		case 414:
			return 1299075397;
		case 415:
			return -1509094230;
		case 416:
			return 61132362;
		case 417:
			return 1549741908;
		case 418:
			return 288484254;
		case 419:
			return -1877032947;
		case 420:
			return -1395676456;
		case 421:
			return 1136146715;
		case 422:
			return 468034421;
		case 423:
			return 1079459546;
		case 424:
			return -140369351;
		case 425:
			return 1822341990;
		case 426:
			return 1219701681;
		case 427:
			return 1601295268;
		case 428:
			return -1692460667;
		case 429:
			return 1471419228;
		case 430:
			return 907446160;
		case 431:
			return -1126482585;
			return 1911050315;
			return -1343525599;
			return 1261891225;
			return 763162704;
			return 1335861197;
			return 526744654;
			return -1177461517;
			return -241638635;
			return 1024262875;
			return 853355463;
			return -337288221;
			return 361381308;
			return -1264898804;
			return -585289073;
			return 1423542233;
			return -948489286;
			return 2063859257;
			return -1652627327;
			return -1959697839;
			return -1532267859;
			return -1410062763;
			return -901428716;
			return -1628873469;
			return 144855571;
			return -617589883;
			return -1306457086;
			return 1713542477;
			return -305542365;
			return 1985390213;
			return -2145069367;
			return -1674390752;
			return -2117214398;
			return 1880805647;
			return -62390436;
			return 1815288415;
			return 196214097;
			return -201958220;
			return 1400281261;
			return 1601515402;
			return -940704970;
			return -548371721;
			return -1022384613;
			return -357406394;
			return 1077068189;
			return -782241404;
			return 1669853467;
			return 1592019450;
			return 635273153;
			return -1559225678;
			return -266425508;
			return 1117400455;
			return 454332195;
			return -1328061889;
			return 561650932;
			return 256105670;
			return 1976779618;
			return -269095126;
			return 2145617267;
			return 1150213537;
			return 1598825281;
			return -712527121;
			return 1308553072;
			return 852866398;
			return -1794417972;
			return 293062146;
			return 95360094;
			return 807631773;
			return 1603958275;
			return 860052020;
			return -1885979781;
			return 746147970;
			return 666663006;
			return -2096186453;
			return 859409444;
			return -671427187;
			return 100192478;
			return 307812616;
			return 1670843243;
			return 899615863;
			return -298901850;
			return 1379186917;
			return -817206030;
			return -1150323212;
			return -247466821;
			return 427124242;
			return 855418120;
			return -777015093;
			return -722462870;
			return -937454324;
			return -339438116;
			return 2135639035;
			return 1254273765;
			return -792172668;
			return 1905987493;
			return 495693044;
			return -1693422950;
			return -205873076;
			return -2143114654;
			return -1420574021;
			return -1959250381;
			return -1088328663;
			return 513602003;
			return 359221401;
			return 1005272;
			return 1583044470;
			return 348853959;
			return 1045621973;
			return 1084576580;
			return 1651573695;
			return 1463321587;
			return -997505963;
			return -1649851713;
			return -386012962;
			return 1386101789;
			return 1227915917;
			return -218846335;
			return -352578118;
			return 1426626782;
			return -714081520;
			return 74547781;
			return 1271463052;
			return 1983140194;
			return 677262775;
			return -832337898;
			return -319249747;
			return -16955722;
			return -1360128126;
			return -1535425646;
			return -1063641743;
			return -1041133401;
			return 1380479304;
			return 600890828;
			return 733333190;
			return 1843035435;
			return -304127320;
			return 122470371;
			return 0;
			return -1591664384;
			return -673000374;
			return -1150938404;
			return -1756997214;
			return -813824107;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
		}

bool func_241(bool bParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_336(bParam0, *uParam1, iParam2, bParam3) > 0;
}

int func_242(bool bParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_374(bParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_243(bool bParam0, var uParam1, int iParam2, bool bParam3, var uParam4, bool bParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_34(bParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_89(bParam6), &uParam1, bParam0, bParam5, &Var0);
	return Var0;
}

int func_244(bool bParam0, var uParam1, var uParam2, bool bParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (func_375(bParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_333(*uParam1, &Var0, bParam6, 0))
	{
		return 0;
	}
	if (bParam3 < 0)
	{
		bParam3 = Var0.f_11;
	}
	else if (bParam3 > Var0.f_11)
	{
		bParam3 = Var0.f_11;
	}
	if (!func_139(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_89(bParam6), uParam1, bParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

void func_245(bool bParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &bVar0, bParam0) && bVar0 < bParam1) && bVar0 < WEAPON::_GET_WEAPON_CLIP_SIZE(bParam0))
	{
		iVar1 = func_376(WEAPON::_GET_WEAPON_CLIP_SIZE(bParam0), bParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, bParam0, iVar1);
	}
}

void func_246(bool bParam0)
{
	char* sVar0;
	char* sVar1;
	int iVar2;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630->f_12)
	{
		return;
	}
	if (WEAPON::_0xC4DEC3CA8C365A5D(bParam0))
	{
		return;
	}
	sVar0 = "player_newWeaponType";
	sVar1 = "player_newWeaponTime";
	if (WEAPON::_0xDDC64F5E31EEDAB6(bParam0))
	{
		sVar0 = "player_newPistolWeaponType";
		sVar1 = "player_newPistolWeaponTime";
	}
	else if (WEAPON::_0xC212F1D05A8232BB(bParam0))
	{
		sVar0 = "player_newRevolverWeaponType";
		sVar1 = "player_newRevolverWeaponTime";
	}
	else if (WEAPON::_0x0A82317B7EBFC420(bParam0))
	{
		sVar0 = "player_newRifleWeaponType";
		sVar1 = "player_newRifleWeaponTime";
	}
	else if (WEAPON::_0xC75386174ECE95D5(bParam0))
	{
		sVar0 = "player_newShotgunWeaponType";
		sVar1 = "player_newShotgunWeaponTime";
	}
	DECORATOR::DECOR_SET_INT(Global_35, sVar0, bParam0);
	iVar2 = func_377();
	func_378(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_35, sVar1, iVar2);
}

int func_247(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (func_379(bParam0))
	{
		if (WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, joaat("AMMO_ARROW")) <= 0)
		{
			iVar0 = 10;
		}
		else
		{
			iVar0 = 0;
		}
	}
	else if (WEAPON::_0x705BE297EEBDB95D(bParam0))
	{
		if (WEAPON::_0x6AD66548840472E5(bParam0))
		{
			iVar0 = 12;
		}
		else
		{
			iVar0 = WEAPON::_GET_WEAPON_CLIP_SIZE(bParam0) * 4;
		}
		iVar1 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, WEAPON::_0x5C2EA6C44F515F34(bParam0));
		if (iVar1 >= iVar0)
		{
			iVar0 = 0;
		}
		else if (iVar1 > 0)
		{
			iVar0 = (iVar0 - iVar1);
		}
	}
	return iVar0;
}

bool func_248(bool bParam0)
{
	return WEAPON::_0x1F7977C9101F807F(WEAPON::_0x5C2EA6C44F515F34(bParam0));
}

int func_249(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_250(bool bParam0)
{
	bool bVar0;

	bVar0 = WEAPON::_0x7AA043F6C41D151E(bParam0);
	if (WEAPON::_0x705BE297EEBDB95D(bVar0))
	{
		if (WEAPON::_0x0556E9D2ECF39D01(bVar0))
		{
			if (!func_133(50))
			{
				if (!func_133(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (WEAPON::_0xD955FEE4B87AFA07(bVar0))
		{
			if (!func_133(51))
			{
				if (!func_133(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_251()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

int func_252(bool bParam0, bool bParam1, var uParam2)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	if (!func_34(bParam1, 0))
	{
		return 0;
	}
	if (func_35(bParam1) != joaat("CLOTHING"))
	{
		return 0;
	}
	bVar1 = func_66() != -1;
	iVar2 = PED::_GET_METAPED_TYPE(bParam0);
	if (func_135(bParam1) == -999503751)
	{
		return 1;
	}
	iVar4 = func_380(bParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return 0;
	}
	bVar7 = false;
	bVar8 = bParam1;
	if (func_131(bParam1, 866047851))
	{
		iVar5 = func_286(iVar4, 1);
		if (func_381(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5 /*3*/] != bVar8)
		{
			*uParam2 = -265166256; /* GXTEntry: "You are wearing too many of this item. Remove some before equipping more." */
			return 0;
		}
		bVar7 = true;
	}
	switch (iVar4)
	{
		case 1742327865:
			if (PED::_GET_PED_COMPONENT(bVar8, iVar2, bVar1) == joaat("NECKTIES") && PED::_0xFB4891BD7578CDC1(bParam0, -1455751347))
			{
				*uParam2 = 111371848; /* GXTEntry: "Your shirt does not support this type of neckwear." */
				return 0;
			}
			iVar5 = 10;
			iVar3 = func_135(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745; /* GXTEntry: "Your neckwear does not allow for changing your collar." */
				return 0;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5 /*3*/] != &Global_1946804->f_57[iVar5 /*11*/] && func_131(bParam1, -1638171711))
			{
				*uParam2 = 187275271; /* GXTEntry: "Your chaps do not support this." */
				return 0;
			}
			break;
		case 1900541263:
			iVar5 = 36;
			if (&Global_1946804->f_1497.f_1[iVar5 /*3*/] == &Global_1946804->f_57[iVar5 /*11*/])
			{
				*uParam2 = 2143522536; /* GXTEntry: "You are currently not wearing any boots." */
				return 0;
			}
			if (PED::_0xFB4891BD7578CDC1(bParam0, -1968556728))
			{
				*uParam2 = -849690042; /* GXTEntry: "Your boots do not support having spurs." */
				return 0;
			}
			break;
		case -1505978566:
			if (func_382(1868067663, &uVar0))
			{
				*uParam2 = 939463734; /* GXTEntry: "Item cannot be worn with coats." */
				return 0;
			}
		case -1130865351:
		case -426430150:
		case 1788623170:
			if (!bVar7)
			{
			}
			else
			{
				iVar11 = PED::_0x90403E8107B60E81(bParam0);
				iVar10 = func_383(bVar8, iVar4, iVar2, bVar1);
				iVar9 = func_383(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763; /* GXTEntry: "You are wearing too many items. Something must be removed to preview other items." +
    "" */
					return 0;
				}
				Jump @726; //curOff = 583
				iVar3 = func_135(bParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (bParam1 != &Global_1946804->f_57[iVar6 /*11*/] && func_131(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]), -1638171711))
				{
					*uParam2 = -357399012; /* GXTEntry: "Your boots do not support this." */
					return 0;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (&Global_1946804->f_1497.f_1[iVar5 /*3*/] == &Global_1946804->f_57[iVar5 /*11*/])
					{
						*uParam2 = 2143522536; /* GXTEntry: "You are currently not wearing any boots." */
						return 0;
					}
				}
			}
			*uParam2 = 0;
			return 1;
		}

void func_253()
{
	PLAYER::_0xFE7C9CF376D23342(PLAYER::PLAYER_ID(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_254()
{
	float fVar0;
	float fVar1;

	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	PLAYER::SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(PLAYER::PLAYER_ID(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	PLAYER::_0x08E22898A6AF4905(PLAYER::PLAYER_ID(), (1f - fVar0));
	PLAYER::_0xFECA17CF3343694B(PLAYER::PLAYER_ID(), (1f - fVar0));
	PLAYER::_0xBBADFB5E5E5766FB(PLAYER::PLAYER_ID(), (1f - fVar1));
}

int func_255(int iParam0)
{
	if (!func_362(iParam0))
	{
		return -1;
	}
	return func_384(iParam0);
}

int func_256()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_6(func_385(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_257(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("PROVISION_BRACELET_GOLD"):
		case joaat("PROVISION_CC_VINTAGE_HANDCUFFS"):
		case joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH"):
			return joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH");
		case joaat("PROVISION_BEAR_LEGENDARY_CLAW"):
		case joaat("PROVISION_BRACELET_SILVER"):
		case joaat("PROVISION_RC_QUARTZ_CHUNK"):
			return joaat("PROVISION_TALISMAN_BEAR_CLAW");
		case joaat("PROVISION_RF_WOOD_COBALT"):
		case joaat("PROVISION_EARRING_GOLD"):
		case joaat("PROVISION_BOAR_TUSK_LEGENDARY"):
			return joaat("PROVISION_TALISMAN_BOAR_TUSK");
		case joaat("PROVISION_BUFFALO_HORN_LEGENDARY"):
		case joaat("PROVISION_EARRING_SILVER"):
		case joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT"):
			return joaat("PROVISION_TALISMAN_BUFFALO_HORN");
		case joaat("PROVISION_OLD_BRASS_COMPASS"):
			return joaat("PROVISION_TALISMAN_RAVEN_CLAW");
	}
	return 0;
}

int func_258(bool bParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;

	switch (bParam0)
	{
		case joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH"):
			if (bParam1 == joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH"))
			{
				bVar0 = joaat("PROVISION_CC_VINTAGE_HANDCUFFS");
				bVar1 = joaat("PROVISION_BRACELET_GOLD");
			}
			else if (bParam1 == joaat("PROVISION_CC_VINTAGE_HANDCUFFS"))
			{
				bVar0 = joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH");
				bVar1 = joaat("PROVISION_BRACELET_GOLD");
			}
			else
			{
				bVar0 = joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH");
				bVar1 = joaat("PROVISION_CC_VINTAGE_HANDCUFFS");
			}
			break;
		case joaat("PROVISION_TALISMAN_BEAR_CLAW"):
			if (bParam1 == joaat("PROVISION_BEAR_LEGENDARY_CLAW"))
			{
				bVar0 = joaat("PROVISION_RC_QUARTZ_CHUNK");
				bVar1 = joaat("PROVISION_BRACELET_SILVER");
			}
			else if (bParam1 == joaat("PROVISION_RC_QUARTZ_CHUNK"))
			{
				bVar0 = joaat("PROVISION_BEAR_LEGENDARY_CLAW");
				bVar1 = joaat("PROVISION_BRACELET_SILVER");
			}
			else
			{
				bVar0 = joaat("PROVISION_BEAR_LEGENDARY_CLAW");
				bVar1 = joaat("PROVISION_RC_QUARTZ_CHUNK");
			}
			break;
		case joaat("PROVISION_TALISMAN_BOAR_TUSK"):
			if (bParam1 == joaat("PROVISION_BOAR_TUSK_LEGENDARY"))
			{
				bVar0 = joaat("PROVISION_RF_WOOD_COBALT");
				bVar1 = joaat("PROVISION_EARRING_GOLD");
			}
			else if (bParam1 == joaat("PROVISION_RF_WOOD_COBALT"))
			{
				bVar0 = joaat("PROVISION_BOAR_TUSK_LEGENDARY");
				bVar1 = joaat("PROVISION_EARRING_GOLD");
			}
			else
			{
				bVar0 = joaat("PROVISION_BOAR_TUSK_LEGENDARY");
				bVar1 = joaat("PROVISION_RF_WOOD_COBALT");
			}
			break;
		case joaat("PROVISION_TALISMAN_BUFFALO_HORN"):
			if (bParam1 == joaat("PROVISION_BUFFALO_HORN_LEGENDARY"))
			{
				bVar0 = joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT");
				bVar1 = joaat("PROVISION_EARRING_SILVER");
			}
			else if (bParam1 == joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT"))
			{
				bVar0 = joaat("PROVISION_BUFFALO_HORN_LEGENDARY");
				bVar1 = joaat("PROVISION_EARRING_SILVER");
			}
			else
			{
				bVar0 = joaat("PROVISION_BUFFALO_HORN_LEGENDARY");
				bVar1 = joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT");
			}
			break;
	}
	if (func_6(bVar0, 1, 0) && func_6(bVar1, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_259(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("PROVISION_BEAVER_TOOTH_LEGENDARY"):
			return joaat("PROVISION_TRINKET_BEAVER_TOOTH");
		case joaat("PROVISION_BISON_HORN_LEGENDARY"):
			return joaat("PROVISION_TRINKET_BISON_HORN");
		case joaat("PROVISION_BUCK_ANTLER_LEGENDARY"):
			return joaat("PROVISION_TRINKET_BUCK_ANTLER");
		case joaat("PROVISION_COUGAR_FANG_LEGENDARY"):
			return joaat("PROVISION_TRINKET_COUGAR_FANG");
		case joaat("PROVISION_COYOTE_FANG_LEGENDARY"):
			return joaat("PROVISION_TRINKET_COYOTE_FANG");
		case joaat("PROVISION_ELK_ANTLER_LEGENDARY"):
			return joaat("PROVISION_TRINKET_ELK_ANTLER");
		case joaat("PROVISION_FOX_CLAW_LEGENDARY"):
			return joaat("PROVISION_TRINKET_FOX_CLAW");
		case joaat("PROVISION_LIONS_PAW"):
			return joaat("PROVISION_TRINKET_LION_PAW");
		case joaat("PROVISION_MOOSE_ANTLER_LEGENDARY"):
			return joaat("PROVISION_TRINKET_MOOSE_ANTLER");
		case joaat("PROVISION_PANTHER_EYE_LEGENDARY"):
			return joaat("PROVISION_TRINKET_PANTHER_EYE");
		case joaat("PROVISION_PRONGHORN_ANTLER_LEGENDARY"):
			return joaat("PROVISION_TRINKET_PRONGHORN_ANTLER");
		case joaat("PROVISION_RAM_HORN_LEGENDARY"):
			return joaat("PROVISION_TRINKET_RAM_HORN");
		case joaat("PROVISION_WOLF_HEART_LEGENDARY"):
			return joaat("PROVISION_TRINKET_WOLF_HEART");
		default:
			break;
	}
	return 0;
}

int func_260(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_386(iParam0);
	if (iVar0 != -15)
	{
		func_378(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_387(iVar0, 1);
	}
	return 0;
}

int func_261(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	struct<13> Var1;
	int iVar24;
	bool bVar25;

	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_6(joaat("PROVISION_TRINKET_ELK_ANTLER"), 1, 0))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	Var1.f_1 = 10;
	Var1.f_12 = 10;
	MISC::_0x48E4D50F87A96AA5(Global_35, 1, 1, iParam0, &Var1, 0);
	iVar24 = 0;
	while (iVar24 < Var1)
	{
		if (&Var1.f_1[iVar24] == joaat("CURRENCY_CASH"))
		{
			return BUILTIN::CEIL((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
		}
		else
		{
			bVar25 = &Var1.f_1[iVar24];
			if (func_34(bVar25, 0) && func_131(bVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_262(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_263(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_264(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_265(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_266(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;

	iVar0 = 0;
	switch (iParam0)
	{
		case 1:
			bVar9 = joaat("PROVISION_EGRET_PLUME_LITTLE");
			bVar10 = joaat("PROVISION_EGRET_PLUME_REDDISH");
			bVar11 = joaat("PROVISION_EGRET_PLUME_SNOWY");
			bVar12 = joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT");
			break;
		case 2:
			bVar9 = joaat("PROVISION_HERON_FEATHER");
			bVar10 = joaat("PROVISION_RO_FLOWER_LADY_SLIPPER");
			bVar11 = joaat("PROVISION_RO_FLOWER_MOCCASIN");
			break;
		case 4:
			bVar9 = joaat("PROVISION_GATOR_EGG");
			bVar10 = joaat("PROVISION_RO_FLOWER_ACUNAS_STAR");
			bVar11 = joaat("PROVISION_RO_FLOWER_CIGAR");
			bVar12 = joaat("PROVISION_RO_FLOWER_GHOST");
			break;
		case 8:
			bVar9 = joaat("PROVISION_SPOONBILL_FEATHER");
			bVar10 = joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED");
			bVar11 = joaat("PROVISION_RO_FLOWER_RAT_TAIL");
			bVar12 = joaat("PROVISION_RO_FLOWER_SPIDER");
			break;
		case 16:
			bVar9 = joaat("PROVISION_RO_FLOWER_CLAMSHELL");
			bVar10 = joaat("PROVISION_RO_FLOWER_DRAGONS");
			bVar11 = joaat("PROVISION_RO_FLOWER_QUEENS");
			bVar12 = joaat("PROVISION_RO_FLOWER_SPARROWS");
			break;
	}
	iVar1 = func_275(bVar9);
	iVar2 = func_275(bVar10);
	iVar3 = func_275(bVar11);
	iVar5 = func_276(bVar9);
	iVar6 = func_276(bVar10);
	iVar7 = func_276(bVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_275(bVar12);
		iVar8 = func_276(bVar12);
	}
	if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam0 != 2)
	{
		if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

void func_267(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_268()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_388(COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("DINO_BONES"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_269()
{
	return COLLECTION::_0x5461C821D00FE15A(joaat("ROCK_CARVINGS"), 0);
}

int func_270(int iParam0, bool bParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	switch (iParam0)
	{
		case joaat("TAXIDERMY_ORDER_01"):
			if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT");
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_02"):
			if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT");
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT");
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_03"):
			if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_04"):
			if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				bVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				bVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				bVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				bVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				bVar3 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_05"):
			if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				bVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				bVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				bVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				bVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				bVar3 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
			}
			break;
	}
	if (iParam0 == joaat("TAXIDERMY_ORDER_01"))
	{
		if (bParam3)
		{
			if (func_359(bParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_359(bParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_359(bVar0))
		{
			*sParam2++;
		}
		if (func_359(bVar0))
		{
			return 1;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_02"))
	{
		if (bParam3)
		{
			if (func_359(bParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_359(bParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_359(bVar0))
		{
			*sParam2++;
		}
		if (func_359(bVar1))
		{
			*sParam2++;
		}
		if (func_359(bVar0) && func_359(bVar1))
		{
			return 1;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_03"))
	{
		if (bParam3)
		{
			if (func_359(bParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_359(bParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_359(bVar0))
		{
			*sParam2++;
		}
		if (func_359(bVar1))
		{
			*sParam2++;
		}
		if (func_359(bVar2))
		{
			*sParam2++;
		}
		if ((func_359(bVar0) && func_359(bVar1)) && func_359(bVar2))
		{
			return 1;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_359(bParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_359(bParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_359(bVar0))
		{
			*sParam2++;
		}
		if (func_359(bVar1))
		{
			*sParam2++;
		}
		if (func_359(bVar2))
		{
			*sParam2++;
		}
		if (func_359(bVar3))
		{
			*sParam2++;
		}
		if (((func_359(bVar0) && func_359(bVar1)) && func_359(bVar2)) && func_359(bVar3))
		{
			return 1;
		}
	}
	return 0;
}

void func_271(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_389(1497516462);
			func_390(2016141805);
			func_390(1010885152);
			func_390(-502324015);
			break;
		case 2016141805:
			func_390(1497516462);
			func_389(2016141805);
			func_390(1010885152);
			func_390(-502324015);
			break;
		case 1010885152:
			func_390(1497516462);
			func_390(2016141805);
			func_389(1010885152);
			func_390(-502324015);
			break;
		case -502324015:
			func_390(1497516462);
			func_390(2016141805);
			func_390(1010885152);
			func_389(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_390(-538889627);
			func_390(-538880323);
			func_390(-1056767524);
			func_389(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_391();
			func_389(iParam0);
			break;
		case -639037538:
		case -618620429:
		case -491981251:
		case 168171957:
		case 227918160:
		case 588987611:
		case 704802028:
		case 1193080109:
		case 1649996811:
		case 2008888900:
			func_392();
			func_389(iParam0);
			break;
		case 2019386373:
			func_390(-664252410);
			func_390(2109952320);
			func_389(2019386373);
			break;
		case -664252410:
			func_390(2019386373);
			func_390(2109952320);
			func_389(-664252410);
			break;
		case 2109952320:
			func_390(2019386373);
			func_390(-664252410);
			func_389(2109952320);
			break;
		case -1674179981:
			func_390(-1835851517);
			func_390(-1838352012);
			func_389(-1674179981);
			break;
		case -1835851517:
			func_390(-1674179981);
			func_390(-1838352012);
			func_389(-1835851517);
			break;
		case -1838352012:
			func_390(-1674179981);
			func_390(-1835851517);
			func_389(-1838352012);
			break;
		case -1717960576:
			func_390(210001842);
			func_389(-1717960576);
			break;
		case 210001842:
			func_390(-1717960576);
			func_389(210001842);
			break;
		case -150493654:
			func_390(-1271608261);
			func_390(1846061697);
			func_390(-1145519186);
			func_389(-150493654);
			break;
		case -1271608261:
			func_390(-150493654);
			func_390(1846061697);
			func_390(-1145519186);
			func_389(-1271608261);
			break;
		case 1846061697:
			func_390(-150493654);
			func_390(-1271608261);
			func_390(-1145519186);
			func_389(1846061697);
			break;
		case -1145519186:
			func_390(-150493654);
			func_390(-1271608261);
			func_390(1846061697);
			func_389(-1145519186);
			break;
		case 1766284049:
			func_390(280705402);
			func_390(1926308480);
			func_389(1766284049);
			break;
		case 280705402:
			func_390(1766284049);
			func_390(1926308480);
			func_389(280705402);
			break;
		case 1926308480:
			func_390(1766284049);
			func_390(280705402);
			func_389(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_390(439465264);
				func_389(1609506757);
			}
			else
			{
				func_390(1609506757);
				func_390(439465264);
			}
			break;
		case 439465264:
			if (func_393(1609506757))
			{
				if (bParam1)
				{
					func_389(439465264);
				}
				else
				{
					func_390(439465264);
				}
			}
			break;
		case 1822001510:
			func_390(-1612662716);
			func_389(1822001510);
			break;
		case -1612662716:
			func_390(1822001510);
			func_389(-1612662716);
			break;
		case 1306158345:
			func_390(1952610440);
			func_390(-223469678);
			func_390(-404698347);
			func_390(1517904467);
			func_389(1306158345);
			break;
		case 1952610440:
			func_390(1306158345);
			func_390(-223469678);
			func_390(-404698347);
			func_390(1517904467);
			func_389(1952610440);
			break;
		case -223469678:
			func_390(1306158345);
			func_390(1952610440);
			func_390(-404698347);
			func_390(1517904467);
			func_389(-223469678);
			break;
		case -404698347:
			func_390(1306158345);
			func_390(1952610440);
			func_390(-223469678);
			func_390(1517904467);
			func_389(-404698347);
			break;
		case 1517904467:
			func_390(1306158345);
			func_390(1952610440);
			func_390(-223469678);
			func_390(-404698347);
			func_389(1517904467);
			break;
		case 1376646519:
			func_390(931649776);
			func_390(-434590080);
			func_390(1743048395);
			func_390(449774763);
			func_389(1376646519);
			break;
		case 931649776:
			func_390(1376646519);
			func_390(-434590080);
			func_390(1743048395);
			func_390(449774763);
			func_389(931649776);
			break;
		case -434590080:
			func_390(1376646519);
			func_390(931649776);
			func_390(1743048395);
			func_390(449774763);
			func_389(-434590080);
			break;
		case 1743048395:
			func_390(1376646519);
			func_390(931649776);
			func_390(-434590080);
			func_390(449774763);
			func_389(1743048395);
			break;
		case 449774763:
			func_390(1376646519);
			func_390(931649776);
			func_390(-434590080);
			func_390(1743048395);
			func_389(449774763);
			break;
		case -1414537028:
			func_390(38162571);
			func_390(1350391819);
			func_390(54073871);
			func_389(-1414537028);
			break;
		case 38162571:
			func_390(-1414537028);
			func_390(1350391819);
			func_390(54073871);
			func_389(38162571);
			break;
		case 1350391819:
			func_390(-1414537028);
			func_390(38162571);
			func_390(54073871);
			func_389(1350391819);
			break;
		case 54073871:
			func_390(-1414537028);
			func_390(38162571);
			func_390(1350391819);
			func_389(54073871);
			break;
		case 198200492:
			func_389(198200492);
			func_390(-1124061431);
			func_390(52706132);
			func_390(-259123672);
			break;
		case -1124061431:
			func_390(198200492);
			func_389(-1124061431);
			func_390(52706132);
			func_390(-259123672);
			break;
		case 52706132:
			func_390(198200492);
			func_390(-1124061431);
			func_389(52706132);
			func_390(-259123672);
			break;
		case -259123672:
			func_390(198200492);
			func_390(-1124061431);
			func_390(52706132);
			func_389(-259123672);
			break;
		case -919512195:
			func_389(-919512195);
			func_390(-1925798111);
			func_390(420709909);
			func_390(1703426636);
			break;
		case -1925798111:
			func_389(-1925798111);
			func_390(-919512195);
			func_390(420709909);
			func_390(1703426636);
			break;
		case 420709909:
			func_389(420709909);
			func_390(-919512195);
			func_390(-1925798111);
			func_390(1703426636);
			break;
		case 1703426636:
			func_389(1703426636);
			func_390(-919512195);
			func_390(-1925798111);
			func_390(420709909);
			break;
		case -1223121209:
			func_389(-1223121209);
			func_390(630808005);
			break;
		case 630808005:
			func_389(630808005);
			func_390(-1223121209);
			break;
		case 1453909576:
			func_389(1453909576);
			func_390(1643531967);
			break;
		case 1643531967:
			func_389(1643531967);
			func_390(1453909576);
			break;
		case 0:
			func_389(0);
			func_390(473295046);
			func_390(-1738165526);
			break;
		case 473295046:
			func_389(473295046);
			func_390(0);
			func_390(-1738165526);
			break;
		case -1738165526:
			func_389(-1738165526);
			func_390(0);
			func_390(473295046);
			break;
		case 932909855:
			func_389(932909855);
			func_390(2051822093);
			break;
		case 2051822093:
			func_389(2051822093);
			func_390(932909855);
			break;
		case 405586984:
			func_389(405586984);
			func_390(1509509592);
			func_390(-959357075);
			func_390(-1311865656);
			break;
		case 1509509592:
			func_389(1509509592);
			func_390(405586984);
			func_390(-959357075);
			func_390(-1311865656);
			break;
		case -959357075:
			func_389(-959357075);
			func_390(1509509592);
			func_390(405586984);
			func_390(-1311865656);
			break;
		case -1311865656:
			func_389(-1311865656);
			func_390(1509509592);
			func_390(-959357075);
			func_390(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_389(-524145696);
			}
			else
			{
				func_390(-524145696);
			}
			func_390(1626481264);
			func_390(282809459);
			break;
		case 282809459:
			func_389(282809459);
			func_390(1626481264);
			func_390(-524145696);
			break;
		case 1626481264:
			func_389(1626481264);
			func_390(-524145696);
			func_390(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_389(885203519);
			}
			else
			{
				func_390(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_389(-1080627546);
			}
			else
			{
				func_390(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_393(iParam0))
				{
					func_389(iParam0);
				}
			}
			else if (func_393(iParam0))
			{
				func_390(iParam0);
			}
			break;
	}
}

void func_272(int iParam0)
{
	if (!func_394(iParam0))
	{
		func_396(func_395(iParam0));
	}
}

int func_273()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_394(COLLECTION::_0x126CBEBBA46693CF(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_274(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;

	iVar0 = 0;
	switch (iParam2)
	{
		case 1:
			bVar9 = joaat("PROVISION_EGRET_PLUME_LITTLE");
			bVar10 = joaat("PROVISION_EGRET_PLUME_REDDISH");
			bVar11 = joaat("PROVISION_EGRET_PLUME_SNOWY");
			bVar12 = joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT");
			break;
		case 2:
			bVar9 = joaat("PROVISION_HERON_FEATHER");
			bVar10 = joaat("PROVISION_RO_FLOWER_LADY_SLIPPER");
			bVar11 = joaat("PROVISION_RO_FLOWER_MOCCASIN");
			break;
		case 4:
			bVar9 = joaat("PROVISION_GATOR_EGG");
			bVar10 = joaat("PROVISION_RO_FLOWER_ACUNAS_STAR");
			bVar11 = joaat("PROVISION_RO_FLOWER_CIGAR");
			bVar12 = joaat("PROVISION_RO_FLOWER_GHOST");
			break;
		case 8:
			bVar9 = joaat("PROVISION_SPOONBILL_FEATHER");
			bVar10 = joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED");
			bVar11 = joaat("PROVISION_RO_FLOWER_RAT_TAIL");
			bVar12 = joaat("PROVISION_RO_FLOWER_SPIDER");
			break;
		case 16:
			bVar9 = joaat("PROVISION_RO_FLOWER_CLAMSHELL");
			bVar10 = joaat("PROVISION_RO_FLOWER_DRAGONS");
			bVar11 = joaat("PROVISION_RO_FLOWER_QUEENS");
			bVar12 = joaat("PROVISION_RO_FLOWER_SPARROWS");
			break;
	}
	iVar1 = func_275(bVar9);
	iVar2 = func_275(bVar10);
	iVar3 = func_275(bVar11);
	iVar5 = func_276(bVar9);
	iVar6 = func_276(bVar10);
	iVar7 = func_276(bVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_275(bVar12);
		iVar8 = func_276(bVar12);
	}
	if (bParam0 == bVar9)
	{
		if ((iVar1 + iParam1) >= iVar5)
		{
			iVar0 = (iVar0 + iVar5);
		}
		else
		{
			iVar0 = (iVar0 + (iVar1 + iParam1));
		}
	}
	else if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (bParam0 == bVar10)
	{
		if ((iVar2 + iParam1) >= iVar6)
		{
			iVar0 = (iVar0 + iVar6);
		}
		else
		{
			iVar0 = (iVar0 + (iVar2 + iParam1));
		}
	}
	else if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (bParam0 == bVar11)
	{
		if ((iVar3 + iParam1) >= iVar7)
		{
			iVar0 = (iVar0 + iVar7);
		}
		else
		{
			iVar0 = (iVar0 + (iVar3 + iParam1));
		}
	}
	else if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam2 != 2)
	{
		if (bParam0 == bVar12)
		{
			if ((iVar4 + iParam1) >= iVar8)
			{
				iVar0 = (iVar0 + iVar8);
			}
			else
			{
				iVar0 = (iVar0 + (iVar4 + iParam1));
			}
		}
		else if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

int func_275(bool bParam0)
{
	int iVar0;

	if (func_6(bParam0, 1, 0))
	{
		iVar0 = func_37(bParam0, 0, 0);
	}
	return iVar0;
}

int func_276(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("PROVISION_EGRET_PLUME_LITTLE"):
			return 5;
		case joaat("PROVISION_EGRET_PLUME_REDDISH"):
			return 5;
		case joaat("PROVISION_EGRET_PLUME_SNOWY"):
			return 5;
		case joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"):
			return 15;
		case joaat("PROVISION_HERON_FEATHER"):
			return 20;
		case joaat("PROVISION_RO_FLOWER_LADY_SLIPPER"):
			return 7;
		case joaat("PROVISION_RO_FLOWER_MOCCASIN"):
			return 10;
		case joaat("PROVISION_GATOR_EGG"):
			return 25;
		case joaat("PROVISION_RO_FLOWER_ACUNAS_STAR"):
			return 3;
		case joaat("PROVISION_RO_FLOWER_CIGAR"):
			return 7;
		case joaat("PROVISION_RO_FLOWER_GHOST"):
			return 5;
		case joaat("PROVISION_SPOONBILL_FEATHER"):
			return 30;
		case joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED"):
			return 5;
		case joaat("PROVISION_RO_FLOWER_RAT_TAIL"):
			return 10;
		case joaat("PROVISION_RO_FLOWER_SPIDER"):
			return 5;
		case joaat("PROVISION_RO_FLOWER_CLAMSHELL"):
			return 5;
		case joaat("PROVISION_RO_FLOWER_DRAGONS"):
			return 5;
		case joaat("PROVISION_RO_FLOWER_QUEENS"):
			return 5;
		case joaat("PROVISION_RO_FLOWER_SPARROWS"):
			return 10;
		default:
			break;
	}
	return 0;
}

int func_277(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0);
}

void func_278(int iParam0, int iParam1)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, iParam1);
}

void func_279(bool bParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((bParam0 == func_51(iParam1, 5) || bParam0 == func_51(iParam1, 6)) || bParam0 == func_51(iParam1, 7)) || bParam0 == func_51(iParam1, 8)) || bParam0 == func_51(iParam1, 9))
	{
		func_270(iParam1, bParam0, &sParam2, 0, iParam3, bParam4);
		func_128(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_130(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_280(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 1;
	if ((((bParam0 == func_51(iParam1, 5) || bParam0 == func_51(iParam1, 6)) || bParam0 == func_51(iParam1, 7)) || bParam0 == func_51(iParam1, 8)) || bParam0 == func_51(iParam1, 9))
	{
		if (func_270(iParam1, bParam0, &iVar0, 0, 0, 0))
		{
			func_128(51, bParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_130(51, 0, 0, iVar0, func_224(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_128(51, bParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_130(51, 0, 0, iVar0, func_224(iParam1, 20), 1, 0);
			}
		}
	}
}

int func_281()
{
	if (func_222(((*Global_1347702)[37 /*49*/])->f_15) && Global_1392388->f_7)
	{
		return 1;
	}
	return 0;
}

void func_282(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
}

void func_283(int iParam0)
{
	if (!func_397(iParam0))
	{
		COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	}
}

void func_284(int iParam0)
{
	COLLECTION::_0x398FAB9C96A81924(iParam0, 1);
}

int func_285(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if ((Global_1946804->f_57[iVar0 /*11*/])->f_8 == iParam0)
		{
			return func_398(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_286(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case -1944638739:
			return 36;
		case joaat("MP_COMPONENT_TYPE_HEAD"):
			return 0;
		case -1884748965:
			return 32;
		case -1586649372:
			return 33;
		case joaat("MP_COMPONENT_TYPE_BEARDS_CHIN"):
			return 5;
		case -1505978566:
			return 22;
		case -1489346253:
			return 38;
		case -1364808185:
			return 19;
		case joaat("MP_COMPONENT_TYPE_UPPER_BODY"):
			return 8;
		case -1197751823:
			return 20;
		case joaat("MP_COMPONENT_TYPE_SATCHEL"):
			return 24;
		case -1130865351:
			return 31;
		case joaat("MP_COMPONENT_TYPE_HAIR"):
			return 1;
		case -893163968:
			return 17;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_4"):
			return 28;
		case joaat("MP_COMPONENT_TYPE_BEARDS_CHOPS"):
			return 6;
		case -450913544:
			return 18;
		case -426430150:
			return 29;
		case -358215195:
			return 39;
		case -338487716:
			return 11;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
			return 26;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_3"):
			return 27;
		case 304805134:
			return 21;
		case joaat("MP_COMPONENT_TYPE_BEARDS_MUSTACHE"):
			return 7;
		case joaat("MP_COMPONENT_TYPE_EYES"):
			return 2;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_1"):
			return 25;
		case 788010710:
			return 34;
		case 1108822547:
			return 10;
		case 1145151482:
			return 23;
		case 1250092473:
			return 16;
		case joaat("MP_COMPONENT_TYPE_BEARD"):
			return 4;
		case joaat("MP_COMPONENT_TYPE_LOWER_BODY"):
			return 9;
		case 1600962399:
			return 13;
		case 1672288269:
			return 15;
		case 1742327865:
			return 12;
		case joaat("MP_COMPONENT_TYPE_TEETH"):
			return 3;
		case 1788623170:
			return 30;
		case 1849504272:
			return 14;
		case 1900541263:
			return 37;
		case 1958421083:
			return 35;
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

int func_287(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	func_399();
	if (iParam2 == 39)
	{
		Var0 = { func_212(bParam0, 1, 0) };
		iParam2 = func_286(func_285(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return 0;
	}
	if (func_131(bParam0, 866047851) && func_381(&(Global_1946804->f_1378)) >= 2)
	{
		return 0;
	}
	if ((func_290(32768) && iParam2 == 10) && bParam0 != &Global_1946804->f_57[iParam2 /*11*/])
	{
		func_400(func_398(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_401(iParam2);
	func_402(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2 /*3*/] != &Global_1946804->f_57[iParam2 /*11*/] && (Global_1946804->f_57[iParam2 /*11*/])->f_1 > 1)
	{
		func_403(Global_1946804->f_1378.f_1[iParam2 /*3*/], 4, 6);
		func_403(Global_1946804->f_1497.f_1[iParam2 /*3*/], 4, 6);
	}
	func_404(&(Global_1946804->f_1378), bParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = (Global_1946804->f_1378.f_1[iParam2 /*3*/])->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2 /*3*/] = bParam0;
	(Global_1946804->f_1378.f_1[iParam2 /*3*/])->f_1 = func_405(bParam0, iParam2, iParam1, func_66() != -1);
	if (bParam4)
	{
		func_406(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_406(&(Global_1946804->f_1378), 1, 0);
	}
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1946804->f_2589)
		{
			if (&Global_1946804->f_2589.f_2[iVar6 /*2*/] >= 0 && &Global_1946804->f_2589.f_2[iVar6 /*2*/] < 39)
			{
				Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6 /*2*/] /*2*/] = 0;
				(Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6 /*2*/] /*2*/])->f_1 = 0;
				func_407(func_398(&(Global_1946804->f_2589.f_2[iVar6 /*2*/]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return 1;
}

void func_288(bool bParam0, bool bParam1, bool bParam2)
{
	func_408(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

void func_289(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_409(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = bParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_410(Var0);
}

bool func_290(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_291()
{
	func_411(&(Global_1946804->f_2776));
	func_412(32768);
	func_407(1108822547, 8, 6);
}

int func_292(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_286(bParam0, 1);
	switch (bParam0)
	{
		case 1108822547:
			if (&Global_1946804->f_1497.f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/] || &Global_1946804->f_1378.f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
			{
				iVar0 = 48;
			}
			break;
	}
	return iVar0;
}

void func_293(int iParam0)
{
	struct<4> Var0;

	if (func_413(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_414(Var0);
}

void func_294(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;

	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_414(Var0);
}

float func_295()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;

	if (func_415())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_416(2);
	}
	if (Global_1347477->f_119)
	{
		return func_416(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_417();
	fVar2 = func_418();
	fVar3 = func_419();
	fVar4 = func_420();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_421()));
	fVar7 = (func_416(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_422(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_423(3, fVar9, fVar9 > 100f);
	return func_424(fVar7, -100f, 100f);
}

float func_296()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;

	if (func_415())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_416(1);
	}
	if (Global_1347477->f_119)
	{
		return func_416(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_417();
	fVar2 = func_418();
	fVar3 = func_419();
	fVar4 = func_420();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_421()));
	fVar7 = (func_416(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_422(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_423(2, fVar9, fVar9 > 100f);
	return func_424(fVar7, -100f, 100f);
}

float func_297()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;

	if (func_415())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_416(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_425())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_426())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_416(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_417();
	fVar2 = func_418();
	fVar3 = func_419();
	fVar4 = func_420();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_421()));
	fVar7 = (func_416(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_422(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_423(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && PLAYER::_0x0317C947D062854E(PLAYER::PLAYER_ID()) < 1f)
	{
		return func_416(0);
	}
	return func_424(fVar7, -100f, 100f);
}

bool func_298(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_299(bool bParam0, var uParam1, var uParam2, bool bParam3, int iParam4, bool bParam5)
{
	if (!func_34(bParam0, 0))
	{
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return 0;
	}
	if (func_216(bParam0, uParam2, bParam3, bParam5, 0))
	{
		return 0;
	}
	if (!func_139(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_89(0), uParam1, uParam2, bParam0, uParam2->f_4, bParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_300(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -2061583405:
			return Global_1946804->f_2657.f_21;
		case 81053684:
			return Global_1946804->f_2657.f_23;
		case -525676072:
			return Global_1946804->f_2657.f_22;
		case -1719060085:
			return Global_1946804->f_2657.f_24;
		case -413129408:
			return Global_1946804->f_2657.f_25;
		case -999503751:
			if (bParam1)
			{
				return Global_1946804->f_2657.f_20;
			}
			else
			{
				return func_427();
			}
			break;
	}
	return 0;
}

int func_301(bool bParam0)
{
	switch (bParam0)
	{
		case 439606975: /* GXTEntry: "Fancy Suit" */
			return 14;
		case 1661121390: /* GXTEntry: "The Gunslinger" */
			return 6;
		case 1164374808: /* GXTEntry: "Winter Outfit" */
			return 7;
		case 624063935: /* GXTEntry: "The Summer Gunslinger" */
			return 9;
		case -1476781101: /* GXTEntry: "Island Outfit" */
			return 10;
		case 1560492757: /* GXTEntry: "Robbery Outfit" */
			return 15;
		case -769081407: /* GXTEntry: "The Wittemore" */
			return 16;
		case 688004210: /* GXTEntry: "Police Outfit" */
			return 20;
		case 166243423: /* GXTEntry: "Custom Outfit" */
			return 0;
		case -1826731591: /* GXTEntry: "Brawler\'s Outfit" */
			return 24;
		case 2119049229: /* GXTEntry: "The Ruffian" */
			return 25;
		case 1352942778: /* GXTEntry: "The Rebel" */
			return 26;
		case 1964379549: /* GXTEntry: "The Innocent" */
			return 27;
		case 1201189539: /* GXTEntry: "The Pursuer" */
			return 28;
		case 1351927599: /* GXTEntry: "The Grizzlies Outlaw" */
			return 21;
		case 2032023096: /* GXTEntry: "The Nuevo Paraiso" */
			return 22;
		case 1784889667:
			return 13;
		case 1160643979: /* GXTEntry: "The Winter Gunslinger" */
			return 8;
		case 1383300684: /* GXTEntry: "Saved Custom Outfit One" */
			return 1;
		case 2051441678: /* GXTEntry: "Saved Custom Outfit Two" */
			return 2;
		case 162509669: /* GXTEntry: "Saved Custom Outfit Three" */
			return 3;
		case 635948769: /* GXTEntry: "Saved Custom Outfit Four" */
			return 4;
		case 274995506: /* GXTEntry: "Saved Custom Outfit Five" */
			return 5;
		case 1902428294: /* GXTEntry: "The Wittemore" */
			return 17;
		case -2114499732:
			return 18;
		case 800827126:
			return 19;
		case 294553332: /* GXTEntry: "Island Outfit" */
			return 11;
		case 1788874135: /* GXTEntry: "Island Outfit Shackles" */
			return 12;
		case -1243402388:
			return 66;
		case 65931886:
			return 67;
		case 1371678229:
			return 68;
		case 2102263084:
			return 69;
		case -272211555: /* GXTEntry: "The Homesteader" */
			return 61;
		case -55563408:
			return 64;
		case -1914506115:
			return 71;
		case 802495462:
			return 75;
		case 842905332:
			return 77;
		case 1511551084:
			return 79;
		case -1725704631:
			return 81;
		case 1257427489:
			return 83;
		case -659341240:
			return 85;
		case 2038771525:
			return 87;
		case -535599244:
			return 89;
		case -389591806:
			return 73;
		case -1205612021: /* GXTEntry: "The Winter Cowboy" */
			return 70;
		case 890706995: /* GXTEntry: "The Cowhand" */
			return 93;
		case 1156438275: /* GXTEntry: "The Rancher" */
			return 90;
		case -1611873049: /* GXTEntry: "The Rancher" */
			return 91;
		case 594312243:
			return 92;
		case -978578725:
			return 94;
		case -361635024: /* GXTEntry: "The Cowboy" */
			return 62;
		case -1951220140:
			return 78;
		case 1460520700:
			return 76;
		case 523337834:
			return 80;
		case -19271249:
			return 82;
		case 214175524:
			return 84;
		case -1303643297:
			return 86;
		case 411856831:
			return 88;
		case -926815459:
			return 72;
		case -1300731953:
			return 74;
		case -409616653: /* GXTEntry: "The Homesteader" */
			return 65;
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_H"):
			return 29;
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_L"):
			return 30;
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_H"):
			return 31;
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_L"):
			return 32;
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_H"):
			return 33;
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_L"):
			return 34;
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_H"):
			return 35;
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_L"):
			return 36;
		case joaat("CLOTHING_OUTFIT_AMDSHOP_001_H"):
			return 37;
		case joaat("CLOTHING_OUTFIT_AMDSHOP_001_L"):
			return 38;
		case joaat("CLOTHING_OUTFIT_AMDSHOP_002_H"):
			return 39;
		case joaat("CLOTHING_OUTFIT_AMDSHOP_002_L"):
			return 40;
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_H"):
			return 41;
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_L"):
			return 42;
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_H"):
			return 43;
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_L"):
			return 44;
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_H"):
			return 45;
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_L"):
			return 46;
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_H"):
			return 47;
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_L"):
			return 48;
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_H"):
			return 49;
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_L"):
			return 50;
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_H"):
			return 51;
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_L"):
			return 52;
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_H"):
			return 53;
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_L"):
			return 54;
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_H"):
			return 55;
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_L"):
			return 56;
		case joaat("CLOTHING_OUTFIT_NEW_SDSHOP_001_H"):
			return 57;
		case 1389254668: /* GXTEntry: "The Saint Denis" */
			return 58;
		case joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_H"):
			return 59;
		case joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_L"):
			return 60;
		case -291256376:
			return 23;
		default:
			break;
	}
	return -1;
}

int func_302(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return 0;
	}
	return 1;
}

void func_303(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	if (!func_302(iParam0))
	{
		return;
	}
	if (func_428(iParam0))
	{
		return;
	}
	if (!func_429(iParam0))
	{
		func_430(iParam0, 1, 0);
	}
	bVar0 = func_431(iParam0);
	if (bVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_432(iParam0, 512))
		{
			func_289(30, bVar0, 0, 0, 0);
		}
	}
	if ((!func_433() && !bParam1) && !func_434(0, 0, 1))
	{
		func_435(MISC::_CREATE_VAR_STRING(10, "OUT_JOURN_DONE", MISC::_CREATE_VAR_STRING(0, bVar0)), 10000, 0, 0, 0, 1);
	}
	func_436(iParam0, 6);
	if (bParam2)
	{
		if (!func_434(0, 0, 1))
		{
			func_32(1, 4);
		}
	}
}

int func_304()
{
	return Global_1946804->f_1;
}

bool func_305(int iParam0, bool bParam1)
{
	return func_300(iParam0, 0) < func_437(iParam0, bParam1);
}

int func_306(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		bVar1 = &Global_1946804->f_2657[iVar0];
		if (func_135(bVar1) == iParam0)
		{
			*bParam1 = bVar1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_307(bool bParam0)
{
	if (bParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_286(bParam0, 1) /*3*/] != &Global_1946804->f_57[func_286(bParam0, 1) /*11*/];
}

void func_308(int iParam0, bool bParam1)
{
	if (func_131(bParam1, 130796156))
	{
		func_438(bParam1, 0);
	}
	else if (func_131(bParam1, 930141731))
	{
		func_438(bParam1, 1);
		func_439(iParam0);
	}
}

void func_309(var uParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (&uParam0->f_1[iVar0] == iParam1)
		{
			return;
		}
		if ((((iParam1 == joaat("LOOTER_PED_IS_MALE") && &uParam0->f_1[iVar0] == joaat("LOOTER_PED_IS_FEMALE")) || (iParam1 == joaat("LOOTER_PED_IS_FEMALE") && &uParam0->f_1[iVar0] == joaat("LOOTER_PED_IS_MALE"))) || (iParam1 == joaat("LOOT_TYPE_NORMAL") && &uParam0->f_1[iVar0] == joaat("LOOT_TYPE_SKINNING"))) || (iParam1 == joaat("LOOT_TYPE_SKINNING") && &uParam0->f_1[iVar0] == joaat("LOOT_TYPE_NORMAL")))
		{
			uParam0->f_1[iVar0] = iParam1;
			return;
		}
		iVar0++;
	}
	if (*uParam0 >= 10)
	{
		return;
	}
	uParam0->f_1[*uParam0] = iParam1;
	*uParam0++;
}

int func_310(int iParam0, var uParam1, var uParam2, int iParam3)
{
	var uVar0;
	struct<14> Var1;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return 0;
	}
	func_440(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_441(uParam2, iParam0, Var1);
	return 1;
}

struct<2> func_311(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

int func_312(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_313(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_FISH_BLUEGILL";
		case 1:
			return "PROVISION_FISH_BULLHEAD_CATFISH";
		case 2:
			return "PROVISION_FISH_CHAIN_PICKEREL";
		case 3:
			return "PROVISION_FISH_CHANNEL_CATFISH";
		case 4:
			return "PROVISION_FISH_LAKE_STURGEON";
		case 5:
			return "PROVISION_FISH_LARGEMOUTH_BASS";
		case 6:
			return "PROVISION_FISH_LONGNOSE_GAR";
		case 7:
			return "PROVISION_FISH_MUSKIE";
		case 8:
			return "PROVISION_FISH_NORTHERN_PIKE";
		case 9:
			return "PROVISION_FISH_PERCH";
		case 10:
			return "PROVISION_FISH_REDFIN_PICKEREL";
		case 11:
			return "PROVISION_FISH_ROCK_BASS";
		case 12:
			return "PROVISION_FISH_SMALLMOUTH_BASS";
		case 13:
			return "PROVISION_FISH_SOCKEYE_SALMON";
		case 14:
			return "PROVISION_FISH_STEELHEAD_TROUT";
		default:
			break;
	}
	return "FISHTYPE_UNKNOWN";
}

int func_314(bool bParam0)
{
	var uVar0;

	if (!func_442(bParam0, &uVar0, joaat("INVENTORY"), 0, 0, joaat("UI_ITEMVIEWER")))
	{
		return joaat("_PLACEHOLDER");
	}
	return uVar0;
}

var func_315(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
{
	struct<4> Var0;
	struct<7> Var13;
	var uVar20;

	Var0 = -2;
	Var0.f_1 = sParam5;
	Var0.f_2 = sParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = _NAMESPACE71::_0xB249EBCB30DD88E0(&Var0, &Var13, iParam8);
	func_443(sParam0, sParam1, iParam2);
	return uVar20;
}

bool func_316()
{
	return !&Global_1911774;
}

void func_317(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	Global_1911774->f_4[Global_1911774->f_3 /*4*/] = bParam0;
	(Global_1911774->f_4[Global_1911774->f_3 /*4*/])->f_1 = bParam1;
	(Global_1911774->f_4[Global_1911774->f_3 /*4*/])->f_2 = bParam2;
	(Global_1911774->f_4[Global_1911774->f_3 /*4*/])->f_3 = iParam3;
	if (Global_1911774->f_3 < 20)
	{
		Global_1911774->f_3++;
	}
}

char* func_318(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_319(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;

	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(bParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(&(Var3.f_2[iVar0 /*3*/])))
			{
				Jump @227; //curOff = 56
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY((Var3.f_2[iVar0 /*3*/])->f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(&(Var3.f_2[iVar0 /*3*/]));
				iVar2 = MISC::GET_HASH_KEY((Var3.f_2[iVar0 /*3*/])->f_1);
				if (iParam2 != 0 && (Var3.f_2[iVar0 /*3*/])->f_2 != iParam2)
				{
					Jump @227; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @227; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @227; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = { *(Var3.f_2[iVar0 /*3*/]) };
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

char* func_320(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_321()
{
	if (func_251())
	{
		return DLC::_0x1DB9D61E505AE3FC();
	}
	return 0;
}

void func_322(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_444((Global_40.f_4283.f_325 + iParam0));
}

void func_323(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_321())
	{
		func_315(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GANG_SAVINGS_SPECIAL"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
	else
	{
		func_315(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GANG_SAVINGS"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
}

struct<4> func_324(bool bParam0)
{
	return func_243(joaat("CHARACTER"), func_445(), -1591664384, bParam0);
}

void func_325(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0) || ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return;
	}
	bVar0 = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(bParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(bParam1));
	if (!bParam7)
	{
		if (func_446(bParam1))
		{
			func_447(bParam0, joaat("META_OUTFIT_DEFAULT"));
		}
		else if (bParam5)
		{
			PED::_SET_RANDOM_OUTFIT_VARIATION(bParam0, true);
			bVar0 = true;
		}
	}
	if (PED::IS_PED_HUMAN(bParam0))
	{
		if (bParam6)
		{
			WEAPON::_0x899A04AFCC725D04(bParam0, WEAPON::_0xD42514C182121C23(bParam1));
		}
		if (PED::IS_PED_MALE(bParam0) && !bParam3)
		{
			func_448(bParam0, 0, 1);
		}
		PED::SET_PED_CONFIG_FLAG(bParam0, 502, true);
	}
	else if (PED::_0x772A1969F649E902(ENTITY::GET_ENTITY_MODEL(bParam0)))
	{
		if (!bParam5)
		{
			PED::_SET_PED_OUTFIT_PRESET(bParam0, 0, 0);
			bVar0 = true;
		}
		if (bParam4)
		{
			func_449(bParam0, 0);
			bVar0 = true;
		}
		func_450(bParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(bParam0, false, true, true, true, false);
	}
}

int func_326(bool bParam0)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(bParam0))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0);
			if (PED::IS_PED_HUMAN(iVar0))
			{
				if (PED::IS_PED_MALE(iVar0))
				{
					return 536905469;
				}
				else
				{
					return -352521166;
				}
			}
		}
	}
	return 205298116;
}

var func_327(bool bParam0, int iParam1, int iParam2, int iParam3)
{
	struct<13> Var0;
	int iVar23;

	Var0.f_1 = 10;
	Var0.f_12 = 10;
	Var0 = 1;
	Var0.f_1[0] = iParam1;
	Var0.f_12[0] = iParam2;
	iVar23 = 13;
	return ENTITY::_0xA88E215CEB0435C0(bParam0, &Var0, iParam3, iVar23, 2, 0);
}

int func_328(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case joaat("HONOR_EVENT_LOOT_INNOCENT"):
			return 1;
		case joaat("HONOR_EVENT_AMBIENT_KILL"):
			return 2;
		case joaat("HONOR_EVENT_AMBIENT_KO"):
			return 4;
		case joaat("HONOR_EVENT_SCARE"):
			return 32;
		case joaat("HONOR_EVENT_KILL_VERMIN"):
			return 64;
		case joaat("HONOR_EVENT_KILL_FARM_ANIMAL"):
			return 128;
		case joaat("HONOR_EVENT_KILL_HORSE"):
			return 256;
		case joaat("HONOR_EVENT_STEAL_HORSE"):
			return 512;
		case joaat("HONOR_EVENT_STEAL_DONKEY"):
			return 1024;
		case joaat("HONOR_EVENT_STEAL_MULE"):
			return 2048;
		case joaat("HONOR_EVENT_TRAMPLED_INNOCENT"):
			return 4096;
		case joaat("HONOR_EVENT_STEAL_WAGON"):
			return 8192;
		case joaat("HONOR_EVENT_ABANDON_ANIMALS"):
			return 16384;
		case joaat("HONOR_EVENT_ANIMAL_BLEEDOUT"):
			return 32768;
		case joaat("HONOR_EVENT_ANTAGONIZE"):
			return 65536;
		case joaat("HONOR_EVENT_THEFT"):
			return 131072;
		case joaat("HONOR_EVENT_INTERVENED"):
			return 262144;
		case joaat("HONOR_EVENT_WANTED_IN_CAMP"):
			return 524288;
		case joaat("HONOR_EVENT_DONATED_GAME"):
			return 1048576;
		case joaat("HONOR_EVENT_ITEM_REQUEST"):
			return 2097152;
		case joaat("HONOR_EVENT_LONG_ABSENCE"):
			return 4194304;
		default:
			break;
	}
	return 0;
}

int func_329(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_34(bParam0, 0))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(bParam0, bParam1, &Var0))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	if (!bParam3)
	{
	}
	*iParam2 = Var0.f_1;
	return 1;
}

int func_330(bool bParam0, bool bParam1)
{
	if (func_135(bParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_0xD955FEE4B87AFA07(bParam0))
	{
		if (bParam1)
		{
			return func_214(joaat("UPGRADE_OFFHAND_HOLSTER"), 0) > 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

struct<4> func_331(bool bParam0)
{
	int iVar0;

	iVar0 = func_89(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224218))
		{
			*Global_1224218 = { func_243(271701509, func_324(bParam0), 12999093, 0) };
		}
		return *Global_1224218;
	}
	return func_243(271701509, func_324(bParam0), 12999093, 0);
}

int func_332(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_135(bParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &bVar0))
		{
			if (ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(bParam0, iParam1, bVar0))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

int func_333(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(func_89(bParam5), &uParam0, uParam4, !bParam6))
	{
		return 0;
	}
	return 1;
}

int func_334(bool bParam0)
{
	if (!func_34(*bParam0, 0))
	{
		return 0;
	}
	switch (*bParam0)
	{
		case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
			*bParam0 = joaat("UPGRADE_FSH_BAIT_CRICKET");
			return 1;
		case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
			*bParam0 = joaat("UPGRADE_FSH_BAIT_WORM");
			return 1;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			*bParam0 = joaat("CONSUMABLE_COCAINE_CHEWING_GUM");
			return 1;
		case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
			*bParam0 = joaat("CONSUMABLE_CHEWING_TOBACCO");
			return 1;
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*bParam0 = joaat("CONSUMABLE_CIGARETTE_BOX");
			return 1;
		default:
			break;
	}
	return 0;
}

int func_335(bool bParam0, var uParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	bool bVar28;
	int iVar29;

	if (!func_34(bParam0, 0))
	{
		return 0;
	}
	Var0 = { func_212(bParam0, 0, 1) };
	iVar5 = 1728382685; /* GXTEntry: "Right" */
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_240((375 + iVar29), 1);
		if (func_241(bParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_242(bParam0, &Var6, iVar5);
			if ((bParam2 && bVar28) || !bVar28)
			{
				*uParam1 = iVar5;
				return 1;
			}
		}
		iVar29++;
	}
	return 0;
}

int func_336(bool bParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;

	if (!func_34(bParam0, 0))
	{
		return 0;
	}
	Var0 = { func_243(bParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_89(bParam6), &Var0, 0);
	return uVar4;
}

int func_337(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 1 && iVar0 <= 23)
	{
		return 0;
	}
	else if (iVar0 >= 24 && iVar0 <= 34)
	{
		return 1;
	}
	else if (iVar0 >= 35 && iVar0 <= 55)
	{
		return 2;
	}
	return 0;
}

float func_338(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 5f;
		case 2:
			return 20f;
		case 3:
			return 10f;
		case 4:
			return 10f;
		case 5:
			return 20f;
		case 6:
			return 10f;
		case 7:
			return 15f;
		case 8:
			return 15f;
		case 9:
			return 20f;
		case 10:
			return 5f;
		case 11:
			return 5f;
		case 12:
			return 10f;
		case 13:
			return 20f;
		case 14:
			return 30f;
		case 15:
			return 5f;
		case 16:
			return 5f;
		case 17:
			return 3f;
		case 18:
			return 20f;
		case 19:
			return func_451(iParam0);
		case 20:
			return 25f;
		case 21:
			return 50f;
		case 22:
			return 100f;
		case 23:
			return 150f;
		case 24:
			return 20f;
		case 25:
			return 10f;
		case 26:
			return 20f;
		case 27:
			return 20f;
		case 28:
			return 20f;
		case 29:
			return 20f;
		case 30:
			return func_451(iParam0);
		case 31:
			return 25f;
		case 32:
			return 50f;
		case 33:
			return 100f;
		case 34:
			return 150f;
		case 35:
			return 1f;
		case 36:
			return 5f;
		case 37:
			return 1f;
		case 38:
			return 3f;
		case 39:
			return 1f;
		case 40:
			return 1f;
		case 41:
			return 1f;
		case 42:
			return 5f;
		case 43:
			return 10f;
		case 49:
			return 20f;
		case 44:
			return 5f;
		case 45:
			return 5f;
		case 46:
			return 10f;
		case 47:
			return 10f;
		case 48:
			return 5f;
		case 50:
			return func_451(iParam0);
		case 51:
			return 25f;
		case 52:
			return 50f;
		case 53:
			return 100f;
		case 54:
			return 150f;
		case 55:
			return 5f;
		default:
			break;
	}
	return 0f;
}

int func_339(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_133(18);
		case 2:
			return func_133(20);
		case 1:
			return func_133(19);
		default:
			break;
	}
	return 1;
}

int func_340(int iParam0)
{
	return func_452(&(Global_40.f_11095.f_11[iParam0]));
}

void func_341(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	if (func_66() != -1)
	{
		return;
	}
	if (Global_1347477->f_117 || !func_133(31))
	{
		return;
	}
	iVar0 = func_340(iParam0);
	fVar1 = &Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_340(iParam0);
	if (func_453(iParam0) && func_454(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_455(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_456(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_24(func_457(iParam0), 0);
					}
					func_458(iParam0, iVar2, iVar3);
					func_459(iParam0, 7000);
				}
				Global_1347477->f_8 = 1;
			}
		}
	}
	Global_1347477->f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
}

char* func_342(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_343(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("ITEMTYPE_PLAYER_STAMINA");
		case 0:
			return joaat("ITEMTYPE_PLAYER_HEALTH");
		case 2:
			return joaat("ITEMTYPE_PLAYER_DEADEYE");
		default:
			break;
	}
	return 0;
}

int func_344()
{
	return func_460(Global_40.f_12018);
}

int func_345()
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		bVar2 = func_223(iVar1);
		if (func_6(bVar2, 1, 0) || func_351(func_350(bVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_346()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_461(COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("DINO_BONES"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_347()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_356(COLLECTION::_0x126CBEBBA46693CF(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_348()
{
	return COLLECTION::_0x3A65F4844913A047(joaat("ROCK_CARVINGS"), 0);
}

int func_349(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("DOCUMENT_CIG_CARD_GUN_SET");
		case 1:
			return joaat("DOCUMENT_CIG_CARD_ART_SET");
		case 2:
			return joaat("DOCUMENT_CIG_CARD_LND_SET");
		case 3:
			return joaat("DOCUMENT_CIG_CARD_GRL_SET");
		case 4:
			return joaat("DOCUMENT_CIG_CARD_PLT_SET");
		case 5:
			return joaat("DOCUMENT_CIG_CARD_ACT_SET");
		case 6:
			return joaat("DOCUMENT_CIG_CARD_AML_SET");
		case 7:
			return joaat("DOCUMENT_CIG_CARD_VEH_SET");
		case 8:
			return joaat("DOCUMENT_CIG_CARD_SPT_SET");
		case 9:
			return joaat("DOCUMENT_CIG_CARD_INV_SET");
		case 10:
			return joaat("DOCUMENT_CIG_CARD_HOR_SET");
		case 11:
			return joaat("DOCUMENT_CIG_CARD_PAM_SET");
		default:
			break;
	}
	return 0;
}

int func_350(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("DOCUMENT_CIG_CARD_ACT_SET"):
			return 1;
		case joaat("DOCUMENT_CIG_CARD_ART_SET"):
			return 8;
		case joaat("DOCUMENT_CIG_CARD_AML_SET"):
			return 4;
		case joaat("DOCUMENT_CIG_CARD_GRL_SET"):
			return 16;
		case joaat("DOCUMENT_CIG_CARD_GUN_SET"):
			return 32;
		case joaat("DOCUMENT_CIG_CARD_HOR_SET"):
			return 64;
		case joaat("DOCUMENT_CIG_CARD_INV_SET"):
			return 128;
		case joaat("DOCUMENT_CIG_CARD_LND_SET"):
			return 256;
		case joaat("DOCUMENT_CIG_CARD_PAM_SET"):
			return 2;
		case joaat("DOCUMENT_CIG_CARD_PLT_SET"):
			return 512;
		case joaat("DOCUMENT_CIG_CARD_SPT_SET"):
			return 1024;
		case joaat("DOCUMENT_CIG_CARD_VEH_SET"):
			return 2048;
		default:
			break;
	}
	return 0;
}

bool func_351(var uParam0)
{
	return (Global_40.f_12018 && uParam0) != 0;
}

char* func_352(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_DB_DINO_BONES_FOUND";
		case 1:
			return "COL_DB_SEND";
		case 2:
			return "COL_DB_COLLECT";
		default:
			break;
	}
	return "";
}

int func_353(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		case 1:
			return 6;
		case 2:
			return 7;
		case 3:
			return 8;
		case 4:
			return 9;
		default:
			break;
	}
	return 5;
}

int func_354(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15;
		case 1:
			return 16;
		case 2:
			return 17;
		case 3:
			return 18;
		case 4:
			return 19;
		default:
			break;
	}
	return 15;
}

char* func_355(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("PROVISION_EGRET_PLUME_LITTLE"):
			return "COL_EP_LITTLE_FOUND";
		case joaat("PROVISION_EGRET_PLUME_REDDISH"):
			return "COL_EP_REDDISH_FOUND";
		case joaat("PROVISION_EGRET_PLUME_SNOWY"):
			return "COL_EP_SNOWY_FOUND";
		case joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"):
			return "COL_RO_LADY_OF_NIGHT_FOUND";
		case joaat("PROVISION_HERON_FEATHER"):
			return "COL_HF_FOUND";
		case joaat("PROVISION_RO_FLOWER_LADY_SLIPPER"):
			return "COL_RO_LADY_SLIPPER_FOUND";
		case joaat("PROVISION_RO_FLOWER_MOCCASIN"):
			return "COL_RO_MOCCASIN_FOUND";
		case joaat("PROVISION_GATOR_EGG"):
			return "COL_GF_FOUND";
		case joaat("PROVISION_RO_FLOWER_ACUNAS_STAR"):
			return "COL_RO_ACUNAS_STAR_FOUND";
		case joaat("PROVISION_RO_FLOWER_CIGAR"):
			return "COL_RO_CIGAR_FOUND";
		case joaat("PROVISION_RO_FLOWER_GHOST"):
			return "COL_RO_GHOST_FOUND";
		case joaat("PROVISION_SPOONBILL_FEATHER"):
			return "COL_SF_FOUND";
		case joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED"):
			return "COL_RO_NIGHT_SCENTED_FOUND";
		case joaat("PROVISION_RO_FLOWER_RAT_TAIL"):
			return "COL_RO_RAT_TAIL_FOUND";
		case joaat("PROVISION_RO_FLOWER_SPIDER"):
			return "COL_RO_SPIDER_FOUND";
		case joaat("PROVISION_RO_FLOWER_CLAMSHELL"):
			return "COL_RO_CLAMSHELL_FOUND";
		case joaat("PROVISION_RO_FLOWER_DRAGONS"):
			return "COL_RO_DRAGONS_FOUND";
		case joaat("PROVISION_RO_FLOWER_QUEENS"):
			return "COL_RO_QUEENS_FOUND";
		case joaat("PROVISION_RO_FLOWER_SPARROWS"):
			return "COL_RO_SPARROWS_FOUND";
		default:
			break;
	}
	return "";
}

bool func_356(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

char* func_357(int iParam0)
{
	switch (iParam0)
	{
		case joaat("LEGENDARY_FISH_01"):
			return "PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY";
		case joaat("LEGENDARY_FISH_02"):
			return "PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY";
		case joaat("LEGENDARY_FISH_03"):
			return "PROVISION_FISH_LAKE_STURGEON_LEGENDARY";
		case joaat("LEGENDARY_FISH_04"):
			return "PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY";
		case joaat("LEGENDARY_FISH_05"):
			return "PROVISION_FISH_LONGNOSE_GAR_LEGENDARY";
		case joaat("LEGENDARY_FISH_06"):
			return "PROVISION_FISH_MUSKIE_LEGENDARY";
		case joaat("LEGENDARY_FISH_07"):
			return "PROVISION_FISH_PERCH_LEGENDARY";
		case joaat("LEGENDARY_FISH_08"):
			return "PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY";
		case joaat("LEGENDARY_FISH_09"):
			return "PROVISION_FISH_ROCK_BASS_LEGENDARY";
		case joaat("LEGENDARY_FISH_10"):
			return "PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY";
		case joaat("LEGENDARY_FISH_11"):
			return "PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY";
		case joaat("LEGENDARY_FISH_12"):
			return "PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY";
		case joaat("LEGENDARY_FISH_13"):
			return "PROVISION_FISH_BLUEGILL_LEGENDARY";
		default:
			break;
	}
	return "";
}

char* func_358(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_RC_ROCK_FACES_FOUND";
		case 1:
			return "COL_RC_SEND";
		case 2:
			return "COL_RC_COLLECT";
		default:
			break;
	}
	return "";
}

int func_359(bool bParam0)
{
	if (func_462(bParam0) && func_6(bParam0, 1, 0))
	{
		return 1;
	}
	else if (func_463(bParam0) && func_464(bParam0))
	{
		return 1;
	}
	return 0;
}

char* func_360(bool bParam0)
{
	if (!func_34(bParam0, 0))
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(func_170(bParam0));
}

int func_361(int iParam0)
{
	return &(Global_1898164->f_1[iParam0 /*5*/]);
}

bool func_362(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_363(int iParam0)
{
	return (Global_1898164->f_1[iParam0 /*5*/])->f_2;
}

void func_364(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (bParam0)
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, 1);
	}
	else
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, 0);
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 1, 1);
	}
}

void func_365(bool bParam0)
{
	int iVar0;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1955569->f_5.f_1))
	{
		return;
	}
	if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1955569->f_5.f_1) > bParam0)
	{
		iVar0 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(Global_1955569->f_5.f_1, bParam0);
		if (iVar0 == &Global_1955569->f_5.f_2[bParam0 /*36*/])
		{
			return;
		}
	}
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1955569->f_5.f_1, bParam0, "pause_info_panel_list", &(Global_1955569->f_5.f_2[bParam0 /*36*/]));
}

void func_366(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 440, !bParam0);
}

void func_367(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 439, !bParam0);
}

void func_368(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 438, !bParam0);
}

void func_369(bool bParam0)
{
	int iVar0;

	iVar0 = 398076311;
	if (bParam0)
	{
		HUD::_HIDE_HUD_COMPONENT(iVar0);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(iVar0);
	}
}

void func_370(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 50;
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 1);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 1);
	}
	else
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 0);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 0);
	}
}

void func_371(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 49;
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 1);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 1);
	}
	else
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 0);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 0);
	}
}

int func_372(bool bParam0)
{
	if (bParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_286(bParam0, 1) /*3*/]);
}

void func_373()
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		func_465();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), true);
		func_138(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"));
		func_176(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), true, 2, false, false);
		func_138(joaat("WEAPON_MELEE_KNIFE_JOHN"));
		func_176(joaat("WEAPON_MELEE_KNIFE_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_MELEE_KNIFE_JOHN"), true, 4, false, false);
	}
}

int func_374(bool bParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_89(0);
	*uParam1 = { func_243(bParam0, func_195(0), iParam3, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, uParam1, uParam2, 22, 1))
	{
		return 0;
	}
	return 1;
}

int func_375(bool bParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(bParam0))
	{
		return 1;
	}
	return 0;
}

int func_376(int iParam0, bool bParam1)
{
	if (iParam0 > bParam1)
	{
		return bParam1;
	}
	return iParam0;
}

int func_377()
{
	return &Global_1899515;
}

void func_378(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_466(*iParam0);
	iVar1 = func_467(*iParam0);
	iVar2 = func_468(*iParam0);
	iVar3 = func_469(*iParam0);
	iVar4 = func_470(*iParam0);
	iVar5 = func_471(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_472(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_472(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	if (!bParam7)
	{
		iVar0 = (iVar0 + iParam6);
	}
	func_473(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_379(bool bParam0)
{
	return WEAPON::_0xC4DEC3CA8C365A5D(bParam0);
}

bool func_380(bool bParam0)
{
	struct<5> Var0;

	Var0 = { func_212(bParam0, 1, 0) };
	return func_285(Var0.f_4);
}

int func_381(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_131(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_131(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_131(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_131(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_131(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_131(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

int func_382(int iParam0, var uParam1)
{
	bool bVar0;
	int iVar1;

	iVar1 = func_286(func_474(iParam0), 1);
	if (iVar1 >= 39)
	{
		return 0;
	}
	if (&Global_1946804->f_1497.f_1[iVar1 /*3*/] != 0 && &Global_1946804->f_1497.f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
	{
		bVar0 = &Global_1946804->f_1497.f_1[iVar1 /*3*/];
		if (func_135(bVar0) == iParam0)
		{
			*uParam1 = bVar0;
			return 1;
		}
	}
	*uParam1 = 0;
	return 0;
}

int func_383(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam0 == &Global_1946804->f_57[func_286(bParam1, 1) /*11*/])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_290(524288))
	{
		switch (bParam1)
		{
			case joaat("MP_COMPONENT_TYPE_LOADOUT_1"):
				iVar0++;
				break;
			case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
				iVar0++;
				break;
		}
	}
	iVar0 = (iVar0 + PED::_0x31B2E7F2E3C58B89(bParam0, joaat("BASE"), iParam2, bParam3));
	return iVar0;
}

int func_384(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_475(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

int func_385(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_BEAVER_TOOTH_LEGENDARY");
		case 1:
			return joaat("PROVISION_BISON_HORN_LEGENDARY");
		case 2:
			return joaat("PROVISION_BUCK_ANTLER_LEGENDARY");
		case 3:
			return joaat("PROVISION_COUGAR_FANG_LEGENDARY");
		case 4:
			return joaat("PROVISION_COYOTE_FANG_LEGENDARY");
		case 5:
			return joaat("PROVISION_ELK_ANTLER_LEGENDARY");
		case 6:
			return joaat("PROVISION_FOX_CLAW_LEGENDARY");
		case 7:
			return joaat("PROVISION_LIONS_PAW");
		case 8:
			return joaat("PROVISION_MOOSE_ANTLER_LEGENDARY");
		case 9:
			return joaat("PROVISION_PANTHER_EYE_LEGENDARY");
		case 10:
			return joaat("PROVISION_PRONGHORN_ANTLER_LEGENDARY");
		case 11:
			return joaat("PROVISION_RAM_HORN_LEGENDARY");
		case 12:
			return joaat("PROVISION_WOLF_HEART_LEGENDARY");
		case 13:
			return joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH");
		case 14:
			return joaat("PROVISION_CC_VINTAGE_HANDCUFFS");
		case 15:
			return joaat("PROVISION_BRACELET_GOLD");
		case 16:
			return joaat("PROVISION_BEAR_LEGENDARY_CLAW");
		case 17:
			return joaat("PROVISION_RC_QUARTZ_CHUNK");
		case 18:
			return joaat("PROVISION_BRACELET_SILVER");
		case 19:
			return joaat("PROVISION_BOAR_TUSK_LEGENDARY");
		case 20:
			return joaat("PROVISION_RF_WOOD_COBALT");
		case 21:
			return joaat("PROVISION_EARRING_GOLD");
		case 22:
			return joaat("PROVISION_BUFFALO_HORN_LEGENDARY");
		case 23:
			return joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT");
		case 24:
			return joaat("PROVISION_EARRING_SILVER");
		case 25:
			return joaat("PROVISION_OLD_BRASS_COMPASS");
		default:
			break;
	}
	return 0;
}

int func_386(int iParam0)
{
	return func_476(iParam0, -1);
}

bool func_387(int iParam0, bool bParam1)
{
	return func_477(func_377(), iParam0, bParam1);
}

bool func_388(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

void func_389(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_478(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		MISC::SET_BIT(Global_40.f_283[iVar1], iVar2);
	}
	else
	{
		iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			MISC::SET_BIT(Global_1058888->f_40567.f_14[iVar1], iVar2);
		}
		else
		{
			MISC::SET_BIT(((*Global_1055058)[iVar3 /*116*/])->f_72[iVar1], iVar2);
		}
		MISC::SET_BIT(Global_1058888->f_40567[iVar1], iVar2);
	}
	Global_1934765 = 0;
}

void func_390(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_478(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		MISC::CLEAR_BIT(Global_40.f_283[iVar1], iVar2);
	}
	else
	{
		iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			MISC::CLEAR_BIT(Global_1058888->f_40567.f_14[iVar1], iVar2);
		}
		else
		{
			MISC::CLEAR_BIT(((*Global_1055058)[iVar3 /*116*/])->f_72[iVar1], iVar2);
		}
	}
	Global_1934765 = 0;
}

void func_391()
{
	func_390(-939420910);
	func_390(-1187950766);
	func_390(356365161);
	func_390(753127042);
	func_390(-2038424081);
	func_390(1884271742);
	func_390(459290420);
}

void func_392()
{
	func_390(704802028);
	func_390(588987611);
	func_390(2008888900);
	func_390(1649996811);
	func_390(227918160);
	func_390(168171957);
	func_390(1193080109);
	func_390(-491981251);
	func_390(-639037538);
	func_390(-618620429);
}

bool func_393(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_478(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return MISC::IS_BIT_SET(&(Global_40.f_283[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_394(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_395(int iParam0)
{
	switch (iParam0)
	{
		case joaat("EXOTIC_STAGE_01"):
			return 1;
		case joaat("EXOTIC_STAGE_02"):
			return 2;
		case joaat("EXOTIC_STAGE_03"):
			return 4;
		case joaat("EXOTIC_STAGE_04"):
			return 8;
		case joaat("EXOTIC_STAGE_05"):
			return 16;
		default:
			break;
	}
	return 0;
}

void func_396(var uParam0)
{
	Global_40.f_12018.f_43 = (Global_40.f_12018.f_43 || uParam0);
}

bool func_397(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_398(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return joaat("MP_COMPONENT_TYPE_HEAD");
		case 1:
			return joaat("MP_COMPONENT_TYPE_HAIR");
		case 2:
			return joaat("MP_COMPONENT_TYPE_EYES");
		case 3:
			return joaat("MP_COMPONENT_TYPE_TEETH");
		case 4:
			return joaat("MP_COMPONENT_TYPE_BEARD");
		case 5:
			return joaat("MP_COMPONENT_TYPE_BEARDS_CHIN");
		case 6:
			return joaat("MP_COMPONENT_TYPE_BEARDS_CHOPS");
		case 7:
			return joaat("MP_COMPONENT_TYPE_BEARDS_MUSTACHE");
		case 8:
			return joaat("MP_COMPONENT_TYPE_UPPER_BODY");
		case 9:
			return joaat("MP_COMPONENT_TYPE_LOWER_BODY");
		case 10:
			return 1108822547;
		case 11:
			return -338487716;
		case 12:
			return 1742327865;
		case 13:
			return 1600962399;
		case 14:
			return 1849504272;
		case 15:
			return 1672288269;
		case 16:
			return 1250092473;
		case 17:
			return -893163968;
		case 18:
			return -450913544;
		case 19:
			return -1364808185;
		case 20:
			return -1197751823;
		case 21:
			return 304805134;
		case 22:
			return -1505978566;
		case 23:
			return 1145151482;
		case 24:
			return joaat("MP_COMPONENT_TYPE_SATCHEL");
		case 25:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_1");
		case 26:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_2");
		case 27:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_3");
		case 28:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_4");
		case 29:
			return -426430150;
		case 30:
			return 1788623170;
		case 31:
			return -1130865351;
		case 32:
			return -1884748965;
		case 33:
			return -1586649372;
		case 34:
			return 788010710;
		case 35:
			return 1958421083;
		case 36:
			return -1944638739;
		case 37:
			return 1900541263;
		case 38:
			return -1489346253;
		case 39:
			return -358215195;
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

void func_399()
{
	int iVar0;

	Global_1946804->f_1378 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*(Global_1946804->f_1378.f_1[iVar0 /*3*/]) = { *(Global_1946804->f_1497.f_1[iVar0 /*3*/]) };
		iVar0++;
	}
}

void func_400(int iParam0)
{
	func_407(iParam0, 8, 6);
}

void func_401(int iParam0)
{
	func_479(&(Global_1946804->f_2589), iParam0);
}

void func_402(int iParam0, int iParam1)
{
	func_480(&(Global_1946804->f_2589), iParam0, iParam1);
}

void func_403(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_404(var uParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 12;
	iVar2 = func_135(&(uParam0->f_1[iParam2 /*3*/]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_481(iParam2, 65536) && &uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
		(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
		if (bParam4)
		{
			func_402(iVar1, iVar3);
		}
	}
	if (func_307(-1586649372) && func_481(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
		(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
		if (bParam4)
		{
			func_402(iVar1, iVar3);
		}
	}
	switch (iVar2)
	{
		case 698653232:
			if (bParam1 == &Global_1946804->f_57[iParam2 /*11*/])
			{
				iVar1 = 12;
				if (&uParam0->f_1[iVar1 /*3*/] == joaat("CLOTHING_HL_PLAYER_NECKTIE_004_3"))
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_402(iVar1, iVar3);
					}
				}
			}
			func_482(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_482(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
			iVar1 = 22;
			if (&uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
			{
			}
			else
			{
				iVar0 = 16;
				if ((uParam0->f_1[iVar0 /*3*/])->f_1 == joaat("BASE") || (uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_402(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 525
				func_482(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1 /*3*/])->f_1 == joaat("BASE")
				{
					(uParam0->f_1[iVar1 /*3*/])->f_1 = -1539589426;
					if (bParam4)
					{
						func_402(iVar1, iVar3);
					}
				}
				if ((uParam0->f_1[iVar1 /*3*/])->f_1 == 1530758430)
				{
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 1334603721;
					if (bParam4)
					{
						func_402(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 656
				func_482(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1170; //curOff = 691
				func_482(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_402(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 786
				func_482(uParam0, (1 && bParam4), 0, 1, bParam3);
				Jump @1170; //curOff = 807
				if (bParam1 == &Global_1946804->f_57[iParam2 /*11*/])
				{
					iVar1 = 37;
					if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_402(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_402(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_135(&(uParam0->f_1[iVar1 /*3*/])))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_402(iVar1, iVar3);
						}
					}
				}
				Jump @1170; //curOff = 1025
				iVar1 = 36;
				if (&uParam0->f_1[iParam2 /*3*/] != &Global_1946804->f_57[iParam2 /*11*/] && func_131(&(Global_1946804->f_1497.f_1[iVar1 /*3*/]), -1638171711))
				{
					uParam0->f_1[iParam2 /*3*/] = &Global_1946804->f_57[iParam2 /*11*/];
					(uParam0->f_1[iParam2 /*3*/])->f_1 = 0;
				}
				Jump @1170; //curOff = 1110
				iVar1 = 36;
				if (&uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iParam2 /*3*/] = &Global_1946804->f_57[iParam2 /*11*/];
					(uParam0->f_1[iParam2 /*3*/])->f_1 = 0;
				}
			}
			switch (func_135(bParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_135(&(uParam0->f_1[iVar1 /*3*/])))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_402(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_135(&(uParam0->f_1[iVar1 /*3*/])) || func_131(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_402(iVar1, iVar3);
						}
					}
					break;
			}
		}

int func_405(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_483(0);
	if (iParam2 != 0 && func_484(bParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_485(bParam0, func_398(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_406(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	int iVar8;

	bVar6 = func_66() != -1;
	iVar7 = func_483(0);
	if (func_290(32768))
	{
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 39)
	{
		iVar0 = &Global_1946804->f_57.f_430[iVar2];
		if (iVar0 <= -1 || iVar0 >= 39)
		{
		}
		else
		{
			bVar5 = func_398(iVar0, 1);
			if (func_486(bVar5, 8))
			{
			}
			else if (&(Global_1946804->f_57[iVar0 /*11*/])->f_2[0] == joaat("MISSING") || &uParam0->f_1[iVar0 /*3*/] == 0)
			{
			}
			else if (func_486(bVar5, 6) || &uParam0->f_1[iVar0 /*3*/] == &Global_1946804->f_57[iVar0 /*11*/])
			{
			}
			else
			{
				iVar4 = func_383(&(uParam0->f_1[iVar0 /*3*/]), bVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_487(uParam0);
				if (iVar3 > 0)
				{
					if (!func_290(524288))
					{
						func_409(524288);
						iVar1 = (iVar1 - iVar8);
					}
					iVar2 = iVar3;
					while (iVar2 <= 38)
					{
						iVar0 = &Global_1946804->f_57.f_430[iVar2];
						if (iVar0 <= -1 || iVar0 >= 39)
						{
						}
						else
						{
							bVar5 = func_398(iVar0, 1);
							if (func_486(bVar5, 8))
							{
							}
							else if (&(Global_1946804->f_57[iVar0 /*11*/])->f_2[0] == joaat("MISSING") || &uParam0->f_1[iVar0 /*3*/] == 0)
							{
							}
							else if (func_486(bVar5, 6) || &uParam0->f_1[iVar0 /*3*/] == &Global_1946804->f_57[iVar0 /*11*/])
							{
							}
							else
							{
								iVar4 = func_383(&(uParam0->f_1[iVar0 /*3*/]), bVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
									(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
									if (bParam1)
									{
										func_402(iVar0, iParam2);
									}
								}
								iVar1 = (iVar1 + iVar4);
							}
						}
						iVar2++;
					}
				}
				if ((iVar1 + iVar8) < 31)
				{
					func_412(524288);
				}
			}
		}
	}

void func_407(bool bParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_286(bParam0, 1) /*11*/])->f_10 = ((Global_1946804->f_57[func_286(bParam0, 1) /*11*/])->f_10 - ((Global_1946804->f_57[func_286(bParam0, 1) /*11*/])->f_10 && iParam1));
}

void func_408(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_488(&(uParam0->f_2[iVar0 /*2*/]), bParam1, bParam2);
		iVar0++;
	}
	if (func_66() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_489(2, Global_26795.f_776)) || Global_1946804->f_1497 != func_431(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = (&Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= 4096;
				Global_1946804->f_1497 = func_431(Global_40.f_7729);
				Global_1946804->f_1378 = func_431(Global_40.f_7729);
				Global_26795.f_776 = 0;
				func_490(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_491(0, 1);
	}
}

void func_409(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_410(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	switch (Param0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 26:
			if (Global_1946804->f_850 >= 25)
			{
				return;
			}
			if (func_492(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1946804->f_850)
				{
					iVar1 = ((Global_1946804->f_855 + iVar0) % 25);
					if ((&Global_1946804->f_668[iVar1 /*4*/] == Param0 && (Global_1946804->f_668[iVar1 /*4*/])->f_1 == Param0.f_1) && (Global_1946804->f_668[iVar1 /*4*/])->f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_493(Param0);
			*(Global_1946804->f_668[Global_1946804->f_856 /*4*/]) = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_409(8);
			break;
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946804->f_851 >= 25)
			{
				return;
			}
			if (func_492(Param0))
			{
				return;
			}
			func_493(Param0);
			*(Global_1946804->f_567[Global_1946804->f_851 /*4*/]) = { Param0 };
			Global_1946804->f_851++;
			func_409(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_294(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

void func_411(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_8 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3[0] = 0;
	uParam0->f_3[1] = 0;
	uParam0->f_3[2] = 0;
	uParam0->f_3[3] = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	if (uParam0->f_12)
	{
		PED::_0x13E7320C762F0477(uParam0->f_13);
	}
	uParam0->f_12 = 0;
}

void func_412(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

bool func_413(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_414(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_492(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1 /*4*/] == Param0 && (Global_1946804->f_769[iVar1 /*4*/])->f_2 == Param0.f_2) && (Global_1946804->f_769[iVar1 /*4*/])->f_3 == Param0.f_3) && (Global_1946804->f_769[iVar1 /*4*/])->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1 /*4*/] == 34 && func_492(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_493(Param0);
	*(Global_1946804->f_769[Global_1946804->f_854 /*4*/]) = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_409(8);
}

int func_415()
{
	if (Global_1572887->f_12 != -1)
	{
		return 0;
	}
	return Global_1347477->f_203;
}

float func_416(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

float func_417()
{
	float fVar0;
	int iVar1;

	fVar0 = func_494(13);
	iVar1 = func_495(fVar0);
	if (iVar1 == 0)
	{
		return 0.15f;
	}
	if (iVar1 == 10 || iVar1 == -10)
	{
		return -0.25f;
	}
	return 0f;
}

float func_418()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_419()
{
	if (func_251())
	{
		if (DLC::_0xA16B4FBA7887D7BA())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_420()
{
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return 0f;
	}
	if (Global_40.f_11095.f_67 >= 9)
	{
		return -0.2f;
	}
	if (Global_40.f_11095.f_67 >= 7)
	{
		return -0.05f;
	}
	return 0f;
}

float func_421()
{
	return Global_1955565->f_3;
}

void func_422(int iParam0, char* sParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = func_496(iParam0, 1, 0, 0);
	bVar0 = MISC::_CREATE_VAR_STRING(2, bVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[1]), bVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[1]), bParam2);
}

void func_423(int iParam0, float fParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = func_496(iParam0, 2, 0, 0);
	bVar0 = MISC::_CREATE_VAR_STRING(2, bVar0, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[2]), bVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[2]), bParam2);
	if (fParam1 > 100f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_20[2]), "RPG_ARROW_DOWN");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_24[2]), "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_28[2]), joaat("COLOR_RED"));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_32[2]), true);
	}
	else if (fParam1 < 100f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_20[2]), "RPG_ARROW_UP");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_24[2]), "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_28[2]), joaat("COLOR_WHITE"));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_32[2]), true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_32[2]), false);
	}
}

float func_424(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_425()
{
	return func_494(12) <= -99f;
}

bool func_426()
{
	return func_494(12) >= 99f;
}

int func_427()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		bVar1 = &Global_1946804->f_2657[iVar0];
		if (func_135(bVar1) == -999503751)
		{
			if (func_497() != bVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

int func_428(int iParam0)
{
	if (!func_302(iParam0))
	{
		return 0;
	}
	if (func_432(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

int func_429(int iParam0)
{
	if (!func_302(iParam0))
	{
		return 0;
	}
	if (func_432(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

void func_430(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_302(iParam0))
	{
		return;
	}
	if (!func_429(iParam0))
	{
		func_436(iParam0, 2);
		if (bParam2)
		{
			if (!func_434(0, 0, 1))
			{
				func_32(1, 4);
			}
		}
		if ((!func_433() && !bParam1) && !func_434(0, 0, 1))
		{
			func_435(MISC::_CREATE_VAR_STRING(10, "OUT_JOURN_ADD", func_498(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

int func_431(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return 439606975 /* GXTEntry: "Fancy Suit" */;
		case 6:
			return 1661121390 /* GXTEntry: "The Gunslinger" */;
		case 7:
			return 1164374808 /* GXTEntry: "Winter Outfit" */;
		case 8:
			return 1160643979 /* GXTEntry: "The Winter Gunslinger" */;
		case 9:
			return 624063935 /* GXTEntry: "The Summer Gunslinger" */;
		case 10:
			return -1476781101 /* GXTEntry: "Island Outfit" */;
		case 11:
			return 294553332 /* GXTEntry: "Island Outfit" */;
		case 12:
			return 1788874135 /* GXTEntry: "Island Outfit Shackles" */;
		case 15:
			return 1560492757 /* GXTEntry: "Robbery Outfit" */;
		case 16:
			return -769081407 /* GXTEntry: "The Wittemore" */;
		case 17:
			return 1902428294 /* GXTEntry: "The Wittemore" */;
		case 18:
			return -2114499732;
		case 19:
			return 800827126;
		case 20:
			return 688004210 /* GXTEntry: "Police Outfit" */;
		case 0:
			return 166243423 /* GXTEntry: "Custom Outfit" */;
		case 1:
			return 1383300684 /* GXTEntry: "Saved Custom Outfit One" */;
		case 2:
			return 2051441678 /* GXTEntry: "Saved Custom Outfit Two" */;
		case 3:
			return 162509669 /* GXTEntry: "Saved Custom Outfit Three" */;
		case 4:
			return 635948769 /* GXTEntry: "Saved Custom Outfit Four" */;
		case 5:
			return 274995506 /* GXTEntry: "Saved Custom Outfit Five" */;
		case 24:
			return -1826731591 /* GXTEntry: "Brawler\'s Outfit" */;
		case 25:
			return 2119049229 /* GXTEntry: "The Ruffian" */;
		case 26:
			return 1352942778 /* GXTEntry: "The Rebel" */;
		case 27:
			return 1964379549 /* GXTEntry: "The Innocent" */;
		case 28:
			return 1201189539 /* GXTEntry: "The Pursuer" */;
		case 21:
			return 1351927599 /* GXTEntry: "The Grizzlies Outlaw" */;
		case 22:
			return 2032023096 /* GXTEntry: "The Nuevo Paraiso" */;
		case 23:
			return -291256376;
		case 66:
			return -1243402388;
		case 67:
			return 65931886;
		case 68:
			return 1371678229;
		case 69:
			return 2102263084;
		case 61:
			return -272211555 /* GXTEntry: "The Homesteader" */;
		case 64:
			return -55563408;
		case 71:
			return -1914506115;
		case 75:
			return 802495462;
		case 77:
			return 842905332;
		case 78:
			return -1951220140;
		case 79:
			return 1511551084;
		case 81:
			return -1725704631;
		case 83:
			return 1257427489;
		case 85:
			return -659341240;
		case 87:
			return 2038771525;
		case 89:
			return -535599244;
		case 73:
			return -389591806;
		case 70:
			return -1205612021 /* GXTEntry: "The Winter Cowboy" */;
		case 93:
			return 890706995 /* GXTEntry: "The Cowhand" */;
		case 90:
			return 1156438275 /* GXTEntry: "The Rancher" */;
		case 91:
			return -1611873049 /* GXTEntry: "The Rancher" */;
		case 92:
			return 594312243;
		case 94:
			return -978578725;
		case 13:
			return 1784889667;
		case 62:
			return -361635024 /* GXTEntry: "The Cowboy" */;
		case 76:
			return 1460520700;
		case 80:
			return 523337834;
		case 82:
			return -19271249;
		case 84:
			return 214175524;
		case 86:
			return -1303643297;
		case 88:
			return 411856831;
		case 72:
			return -926815459;
		case 74:
			return -1300731953;
		case 65:
			return -409616653 /* GXTEntry: "The Homesteader" */;
		case 29:
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_H");
		case 30:
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_L");
		case 31:
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_H");
		case 32:
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_L");
		case 33:
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_H");
		case 34:
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_L");
		case 35:
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_H");
		case 36:
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_L");
		case 37:
			return joaat("CLOTHING_OUTFIT_AMDSHOP_001_H");
		case 38:
			return joaat("CLOTHING_OUTFIT_AMDSHOP_001_L");
		case 39:
			return joaat("CLOTHING_OUTFIT_AMDSHOP_002_H");
		case 40:
			return joaat("CLOTHING_OUTFIT_AMDSHOP_002_L");
		case 41:
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_H");
		case 42:
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_L");
		case 43:
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_H");
		case 44:
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_L");
		case 45:
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_H");
		case 46:
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_L");
		case 47:
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_H");
		case 48:
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_L");
		case 49:
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_H");
		case 50:
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_L");
		case 51:
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_H");
		case 52:
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_L");
		case 53:
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_H");
		case 54:
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_L");
		case 55:
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_H");
		case 56:
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_L");
		case 57:
			return joaat("CLOTHING_OUTFIT_NEW_SDSHOP_001_H");
		case 58:
			return 1389254668 /* GXTEntry: "The Saint Denis" */;
		case 59:
			return joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_H");
		case 60:
			return joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_L");
		default:
			break;
	}
	return 0;
}

bool func_432(int iParam0, int iParam1)
{
	if (!func_302(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0 /*3*/] && iParam1) != 0;
}

bool func_433()
{
	int iVar0;

	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && _NAMESPACE71::_0x59FA676177DBE4C9(iVar0) == 4);
}

int func_434(int iParam0, bool bParam1, bool bParam2)
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
		if (func_499())
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
		iVar0 = func_500(&(Global_1898164->f_1[0 /*5*/]));
		if (func_221(iVar0) && func_501(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_362(&(Global_1898164->f_1[0 /*5*/])))
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

var func_435(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar15;

	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = _NAMESPACE71::_SHOW_TOOLTIP(&Var0, &Var13, iParam5);
	return uVar15;
}

void func_436(int iParam0, int iParam1)
{
	if (!func_302(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0 /*3*/] = (Global_40.f_7157[iParam0 /*3*/] || iParam1);
}

int func_437(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case -2061583405:
			iVar0 = Global_1946804->f_2657.f_26.f_1;
			break;
		case 81053684:
			iVar0 = 1;
			break;
		case -525676072:
			iVar0 = Global_1946804->f_2657.f_26.f_2;
			break;
		case -1719060085:
			iVar0 = 1;
			break;
		case -999503751:
			iVar0 = Global_1946804->f_2657.f_26;
			break;
		case -413129408:
			iVar0 = 1;
			break;
		default:
			return 0;
	}
	switch (iParam0)
	{
		case -999503751:
			if (iVar0 > 0 && !bParam1)
			{
				iVar0 = (iVar0 - 1);
			}
			break;
	}
	return iVar0;
}

void func_438(bool bParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_502(bParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_134(50);
			}
			else
			{
				func_134(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_134(51);
			}
			else
			{
				func_134(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_503(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_165();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_165();
			}
			break;
		case 3:
			func_134(24);
			if (bParam1)
			{
				if (!func_503(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_165();
				}
			}
			break;
	}
}

void func_439(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_504(0))
			{
				iVar0++;
			}
			if (func_504(2))
			{
				iVar0++;
			}
			if (func_504(4))
			{
				iVar0++;
			}
			if (!func_505(16))
			{
				if (iVar0 == 1)
				{
					func_506();
					func_24(456, 1);
					func_507(16);
				}
			}
			if (!func_505(32))
			{
				if (iVar0 >= 3)
				{
					func_506();
					func_24(456, 1);
					func_507(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_504(1))
			{
				iVar0++;
			}
			if (func_504(3))
			{
				iVar0++;
			}
			if (func_504(7))
			{
				iVar0++;
			}
			if (!func_505(1))
			{
				if (iVar0 == 1)
				{
					func_508();
					func_24(457, 1);
					func_507(1);
				}
			}
			if (!func_505(2))
			{
				if (iVar0 >= 3)
				{
					func_508();
					func_24(457, 1);
					func_507(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_504(5))
			{
				iVar0++;
			}
			if (func_504(6))
			{
				iVar0++;
			}
			if (func_504(8))
			{
				iVar0++;
			}
			if (!func_505(4))
			{
				if (iVar0 == 1)
				{
					func_509();
					func_24(455, 1);
					func_507(4);
				}
			}
			if (!func_505(8))
			{
				if (iVar0 >= 3)
				{
					func_509();
					func_24(455, 1);
					func_507(8);
				}
			}
			break;
	}
}

void func_440(var uParam0)
{
	func_309(uParam0, joaat("MULTIPLAYER_GAME"));
	if (Global_1946804->f_1 == joaat("MPC_PLAYER_TYPE_MP_MALE"))
	{
		func_309(uParam0, joaat("LOOTER_PED_IS_MALE"));
	}
	else
	{
		func_309(uParam0, joaat("LOOTER_PED_IS_FEMALE"));
	}
}

void func_441(var uParam0, int iParam1, struct<14> Param2)
{
	int iVar0;
	struct<21> Var1;

	if (!func_510(uParam0))
	{
		return;
	}
	if (&Global_1224865 < 20)
	{
		Global_1224865 = &Global_1224865 + 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*(Global_1224865->f_1[iVar0 /*21*/]) = { *(Global_1224865->f_1[iVar0 + 1 /*21*/]) };
			iVar0++;
		}
	}
	Var1.f_7.f_2.f_1 = 10;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_6 = 1;
	Var1.f_7 = { Param2 };
	*(Global_1224865->f_1[(&Global_1224865 - 1) /*21*/]) = { Var1 };
}

int func_442(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;

	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(bParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(&(Var3.f_2[iVar0 /*3*/])))
			{
				Jump @230; //curOff = 56
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY((Var3.f_2[iVar0 /*3*/])->f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(&(Var3.f_2[iVar0 /*3*/]));
				iVar2 = MISC::GET_HASH_KEY((Var3.f_2[iVar0 /*3*/])->f_1);
				if (iParam2 != 0 && (Var3.f_2[iVar0 /*3*/])->f_2 != iParam2)
				{
					Jump @230; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @230; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @230; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = iVar1;
					uParam1->f_1 = iVar2;
					uParam1->f_2 = iParam2;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_443(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

void func_444(int iParam0)
{
	struct<2> Var0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_311(joaat("GANG_SAVINGS_CASH")) };
	STATS::STAT_ID_SET_INT(&Var0, iParam0, true);
}

struct<4> func_445()
{
	struct<4> Var0;

	return Var0;
}

int func_446(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("CS_SISTERCALDERON"):
		case joaat("CS_STRSHERIFF_01"):
		case joaat("CS_MUD2BIGGUY"):
		case joaat("CS_RAINSFALL"):
		case joaat("CS_PENELOPEBRAITHWAITE"):
		case joaat("CS_SWAMPWEIRDOSONNY"):
		case joaat("CS_UNIDUSTERJAIL_01"):
		case joaat("CS_IANGRAY"):
		case joaat("CS_TINYHERMIT"):
		case joaat("CS_TIMOTHYDONAHUE"):
		case joaat("CS_PRINCESSISABEAU"):
		case joaat("CS_LEVITICUSCORNWALL"):
		case joaat("CS_DIDSBURY"):
		case joaat("CS_FEATHERSTONCHAMBERS"):
		case joaat("CS_FEATSOFSTRENGTH"):
		case joaat("CS_BANDPIANIST"):
		case joaat("CS_ESCAPEARTISTASSISTANT"):
		case joaat("CS_GARETHBRAITHWAITE"):
		case joaat("CS_CREOLEGUY"):
		case joaat("CS_LEIGHGRAY"):
		case joaat("CS_STRAWBERRYOUTLAW_02"):
		case joaat("CS_GLORIA"):
		case joaat("CS_WARVET"):
		case joaat("CS_JOCKGRAY"):
		case joaat("CS_DAVIDGEDDES"):
		case joaat("CS_GUIDOMARTELLI"):
		case joaat("CS_DUNCANGEDDES"):
		case joaat("CS_DUSTERINFORMANT_01"):
		case joaat("CS_PINKERTONGOON"):
		case joaat("CS_MICKEY"):
		case joaat("CS_TWINBROTHER_02"):
		case joaat("CS_HESTONJAMESON"):
		case joaat("CS_STRDEPUTY_01"):
		case joaat("CS_ABE"):
		case joaat("CS_ODDFELLOWSPINHEAD"):
		case joaat("CS_SWAMPFREAK"):
		case joaat("CS_MRADLER"):
		case joaat("CS_ABERDEENPIGFARMER"):
		case joaat("CS_HOBARTCRAWLEY"):
		case joaat("CS_FORMYARTBIGWOMAN"):
		case joaat("CS_NORRISFORSYTHE"):
		case joaat("CS_JULES"):
		case joaat("CS_TOMDICKENS"):
		case joaat("CS_GERALDBRAITHWAITE"):
		case joaat("CS_PAYTAH"):
		case joaat("CS_CANCAN_03"):
		case joaat("CS_GRIZZLEDJON"):
		case joaat("CS_WROBEL"):
		case joaat("CS_MEREDITH"):
		case joaat("CS_CREEPYOLDLADY"):
		case joaat("CS_NBXRECEPTIONIST_01"):
		case joaat("CS_NBXPOLICECHIEFFORMAL"):
		case joaat("CS_CORNWALLTRAINCONDUCTOR"):
		case joaat("CS_RHODEPUTY_01"):
		case joaat("CS_DRMALCOLMMACINTOSH"):
		case joaat("CS_LEON"):
		case joaat("CS_SHERIFFOWENS"):
		case joaat("CS_SDDOCTOR_01"):
		case joaat("CS_SCOTTGRAY"):
		case joaat("CS_CANCAN_01"):
		case joaat("CS_CREOLECAPTAIN"):
		case joaat("CS_BRONTESBUTLER"):
		case joaat("CS_JANSON"):
		case joaat("CS_FORGIVENWIFE_01"):
		case joaat("CS_TIGERHANDLER"):
		case joaat("CS_FRENCHARTIST"):
		case joaat("CS_GENSTORYMALE"):
		case joaat("CS_CLAY"):
		case joaat("CS_STRDEPUTY_02"):
		case joaat("CS_FAMOUSGUNSLINGER_03"):
		case joaat("CS_BIVCOACHDRIVER"):
		case joaat("CS_BRAITHWAITEBUTLER"):
		case joaat("CS_CLEET"):
		case joaat("CS_JOE"):
		case joaat("CS_SLAVECATCHER"):
		case joaat("CS_BRAITHWAITEMAID"):
		case joaat("CS_TWINGROUPIE_02"):
		case joaat("CS_MRSGEDDES"):
		case joaat("CS_SAMARITAN"):
		case joaat("CS_EXCONFEDINFORMANT"):
		case joaat("CS_FRENCHMAN_01"):
		case joaat("CS_BANDSINGER"):
		case joaat("CS_BAPTISTE"):
		case joaat("CS_ANGUSGEDDES"):
		case joaat("CS_MYSTERIOUSSTRANGER"):
		case joaat("CS_FAMOUSGUNSLINGER_01"):
		case joaat("CS_BARTHOLOMEWBRAITHWAITE"):
		case joaat("CS_MIXEDRACEKID"):
		case joaat("CS_BEATENUPCAPTAIN"):
		case joaat("CS_EDGARROSS"):
		case joaat("CS_TWINGROUPIE_01"):
		case joaat("CS_MRSWEATHERS"):
		case joaat("CS_JAMIE"):
		case joaat("CS_KARENSJOHN_01"):
		case joaat("CS_THOMASDOWN"):
		case joaat("CS_OBEDIAHHINTON"):
		case joaat("CS_AGNESDOWD"):
		case joaat("CS_CAVEHERMIT"):
		case joaat("CS_BRYNNTILDON"):
		case joaat("CS_GERMANSON"):
		case joaat("CS_BRENDACRAWLEY"):
		case joaat("CS_COLFAVOURS"):
		case joaat("CS_RHODESKIDNAPVICTIM"):
		case joaat("CS_EXCONFEDSLEADER_01"):
		case joaat("CS_CANCAN_04"):
		case joaat("CS_TOWNCRIER"):
		case joaat("CS_FAMOUSGUNSLINGER_04"):
		case joaat("CS_DALEMARONEY"):
		case joaat("CS_ANGRYHUSBAND"):
		case joaat("CS_LILLIANPOWELL"):
		case joaat("CS_ANDERSHELGERSON"):
		case joaat("CS_POORJOE"):
		case joaat("CS_BRAITHWAITESERVANT"):
		case joaat("CS_BROTHERDORKINS"):
		case joaat("CS_ALBERTMASON"):
		case joaat("CS_FAMOUSGUNSLINGER_05"):
		case joaat("CS_BALLOONOPERATOR"):
		case joaat("CS_ALBERTCAKEESQUIRE"):
		case joaat("CS_MRSFELLOWS"):
		case joaat("CS_CANCANMAN_01"):
		case joaat("CS_POISONWELLSHAMAN"):
		case joaat("CS_CANCAN_02"):
		case joaat("CS_MEREDITHSMOTHER"):
		case joaat("CS_ANGEL"):
		case joaat("CS_ARCHERFORDHAM"):
		case joaat("CS_DISGUISEDDUSTER_01"):
		case joaat("CS_CHELONIANMASTER"):
		case joaat("CS_TWINBROTHER_01"):
		case joaat("CS_GERMANDAUGHTER"):
		case joaat("CS_LEMIUXASSISTANT"):
		case joaat("CS_CREOLEDOCTOR"):
		case joaat("CS_CRACKPOTROBOT"):
		case joaat("CS_BANDBASSIST"):
		case joaat("CS_GENSTORYFEMALE"):
		case joaat("CS_MARYLINTON"):
		case joaat("CS_VALPRAYINGMAN"):
		case joaat("CS_JOHNTHEBAPTISINGMADMAN"):
		case joaat("CS_MRS_CALHOUN"):
		case joaat("CS_THEODORELEVIN"):
		case joaat("CS_NICHOLASTIMMINS"):
		case joaat("CS_DISGUISEDDUSTER_03"):
		case joaat("CS_DINOBONESLADY"):
		case joaat("CS_BEAUGRAY"):
		case joaat("CS_STRAWBERRYOUTLAW_01"):
		case joaat("CS_CRACKPOTINVENTOR"):
		case joaat("CS_HERCULE"):
		case joaat("CS_GAVIN"):
		case joaat("CS_LEVISIMON"):
		case joaat("CS_LONDONDERRYSON"):
		case joaat("CS_CAPTAINMONROE"):
		case joaat("CS_FAMOUSGUNSLINGER_02"):
		case joaat("CS_MRSLONDONDERRY"):
		case joaat("CS_SOOTHSAYER"):
		case joaat("CS_TAVISHGRAY"):
		case joaat("CS_JOEBUTLER"):
		case joaat("CS_BANDDRUMMER"):
		case joaat("CS_LILLYMILLET"):
		case joaat("CS_ANSEL_ATHERTON"):
		case joaat("CS_RHODEPUTY_02"):
		case joaat("CS_EDMUNDLOWRY"):
		case joaat("CS_DISGUISEDDUSTER_02"):
		case joaat("CS_MAGNIFICO"):
		case joaat("CS_ARTAPPRAISER"):
		case joaat("CS_FORGIVENHUSBAND_01"):
		case joaat("CS_REVERENDFORTHERINGHAM"):
		case joaat("CS_DAVEYCALLENDER"):
		case joaat("CS_DESMOND"):
		case joaat("CS_ADAMGRAY"):
		case joaat("CS_JIMCALLOWAY"):
		case joaat("CS_SDSALOONDRUNK_01"):
		case joaat("CS_NBXDRUNK"):
		case joaat("CS_GERMANMOTHER"):
		case joaat("CS_RINGMASTER"):
		case joaat("CS_LUCANAPOLI"):
		case joaat("CS_RHODESASSISTANT"):
		case joaat("CS_ABERDEENSISTER"):
		case joaat("CS_NBXEXECUTED"):
		case joaat("CS_FAMOUSGUNSLINGER_06"):
		case joaat("CS_JOHNWEATHERS"):
		case joaat("CS_PROFESSORBELL"):
		case joaat("CS_RHODESSALOONBOUNCER"):
			return 1;
		default:
			break;
	}
	return 0;
}

void func_447(bool bParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (func_511(bParam0, iParam1))
		{
			if (func_512(bParam0, iParam1))
			{
				if (func_513(bParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(bParam0, "metaped_outfit_request"), bParam0, true, false);
					func_514(bParam0);
				}
			}
			else
			{
				PED::_SET_PED_BODY_COMPONENT(bParam0, iParam1);
				PED::_UPDATE_PED_VARIATION(bParam0, false, true, true, true, false);
			}
			PED::_0xE3144B932DFDFF65(bParam0, 0f, -1, 1, 1);
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(bParam0, 10, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(bParam0, 3);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(bParam0, 0);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(bParam0, 5);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(bParam0, 7);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(bParam0, 8);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(bParam0, 9);
		}
	}
}

void func_448(bool bParam0, int iParam1, bool bParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return;
	}
	PED::_SET_PED_COMPONENT_DISABLED(bParam0, joaat("HATS"), 1);
	if (bParam2)
	{
		PED::_UPDATE_PED_VARIATION(bParam0, false, true, true, true, false);
	}
}

void func_449(bool bParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0) || PED::IS_PED_INJURED(bParam0))
	{
	}
	PED::_SET_PED_BODY_COMPONENT(bParam0, joaat("META_HORSE_SADDLE_ONLY"));
	if (bParam1)
	{
		PED::_UPDATE_PED_VARIATION(bParam0, false, true, true, true, false);
	}
}

void func_450(bool bParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		PED::_SET_PED_FACE_FEATURE(bParam0, 41611, 0f);
	}
	else
	{
		PED::_SET_PED_FACE_FEATURE(bParam0, 41611, 1f);
	}
}

float func_451(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar4 = func_337(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = &Global_40.f_11095.f_11[iVar4];
			iVar5 = func_452(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_515(iVar6) - func_515(iVar5));
			fVar2 = (IntToFloat(iVar1) * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1f;
}

int func_452(float fParam0)
{
	if (fParam0 <= IntToFloat(-1))
	{
		return -1;
	}
	if (fParam0 < IntToFloat(50))
	{
		return 0;
	}
	if (fParam0 < IntToFloat(100))
	{
		return 1;
	}
	if (fParam0 < IntToFloat(200))
	{
		return 2;
	}
	if (fParam0 < IntToFloat(350))
	{
		return 3;
	}
	if (fParam0 < IntToFloat(550))
	{
		return 4;
	}
	if (fParam0 < IntToFloat(800))
	{
		return 5;
	}
	if (fParam0 < IntToFloat(1100))
	{
		return 6;
	}
	return 7;
}

int func_453(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		case 4:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_454(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		case 8:
			return 1;
		case 9:
			return 1;
		case 10:
			return 1;
		case 11:
			return 1;
		case 12:
			return 1;
		case 13:
			return 1;
		case 14:
			return 1;
		case 16:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_455(float fParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_452(fParam0);
	fVar1 = BUILTIN::TO_FLOAT(func_515(iVar0));
	fVar2 = BUILTIN::TO_FLOAT(func_515(iVar0 + 1));
	fVar3 = (fVar2 - fVar1);
	iVar4 = BUILTIN::FLOOR((((fParam0 - fVar1) / fVar3) * 4f));
	iVar5 = BUILTIN::FLOOR((((fParam1 - fVar1) / fVar3) * 4f));
	if (iVar4 == iVar5)
	{
		return 0;
	}
	if (iVar5 >= 4 || iVar5 < 0)
	{
		return 0;
	}
	return iVar5;
}

int func_456(int iParam0)
{
	int iVar0;

	if (func_516(iParam0, &iVar0))
	{
		return func_515(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_517())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_517())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_517())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 4:
			return 0;
	}
	return 0;
}

int func_457(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 246;
		case 2:
			return 247;
		case 1:
			return 248;
		default:
			break;
	}
	return -1;
}

void func_458(int iParam0, int iParam1, int iParam2)
{
	char* sVar0;
	char* sVar1;
	bool bVar2;
	int iVar3;
	char* sVar4;
	char* sVar5;
	char* sVar6;
	char* sVar7;
	int iVar8;
	int iVar9;
	struct<6> Var10;

	if (iParam1 == 0)
	{
		return;
	}
	iVar3 = iParam1 + 1;
	if (iParam2 != 0)
	{
		sVar0 = "RPG_LEVEL_PROGRESS_TOAST";
		sVar1 = MISC::_CREATE_VAR_STRING(2, "RPG_LEVEL_PROGRESS_BODY", iParam2 * 25, iVar3 + 1);
	}
	else
	{
		sVar0 = "RPG_LEVEL_INCREASED_TOAST";
		sVar1 = MISC::_CREATE_VAR_STRING(2, "RPG_LEVEL_INCREASED_BODY", iVar3);
		bVar2 = true;
	}
	iVar3 = (iVar3 + func_518(iParam0));
	sVar4 = func_520(func_519(iVar3, iParam2));
	sVar6 = func_521(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = MISC::_CREATE_VAR_STRING(10, sVar0, func_522(iParam0));
	iVar8 = func_523(iParam0);
	iVar9 = MISC::GET_HASH_KEY(sVar4);
	if (bVar2)
	{
		Var10 = sVar7;
		Var10.f_1 = sVar1;
		Var10.f_3 = iVar9;
		Var10.f_2 = iVar8;
		Var10.f_4 = 1;
		Var10.f_5 = func_524(iParam0);
		UILOG::_UILOG_POST_NOTIFICATION(&Var10);
	}
	func_71(sVar7, sVar1, iVar8, iVar9, joaat("STATS_MENU"), "INPUT_FEED_INTERACT_GENERIC", func_525(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

void func_459(int iParam0, int iParam1)
{
	Global_1347477->f_9[iParam0 /*2*/] = (MISC::GET_GAME_TIMER() + iParam1);
}

int func_460(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 && (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

bool func_461(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

int func_462(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"):
			return 1;
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"):
			return 1;
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"):
			return 1;
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"):
			return 1;
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"):
			return 1;
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"):
			return 1;
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"):
			return 1;
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"):
			return 1;
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"):
			return 1;
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"):
			return 1;
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"):
			return 1;
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"):
			return 1;
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"):
			return 1;
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"):
			return 1;
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_463(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"):
			return 1;
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"):
			return 1;
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"):
			return 1;
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_464(bool bParam0)
{
	int iVar0;
	struct<11> Var1;
	int iVar95;

	Var1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_526(&iVar0, 0, iVar95, &Var1) && !func_526(&iVar0, 1, iVar95, &Var1))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(Var1))
		{
			func_527(iVar0, &Var1);
			if (func_34(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

void func_465()
{
	int iVar0;
	struct<4> Var30;

	if (!INVENTORY::_0x7C7E4AB748EA3B07())
	{
		return;
	}
	iVar0 = 29;
	func_528(Global_35, &iVar0);
	Var30 = { func_324(0) };
	INVENTORY::_0xE36D4A38D28D9CFB(0);
	INVENTORY::_0xC04F47D488EF9EBA(5, 1, &Var30, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	func_529(0);
	func_530(7);
	func_531(joaat("KIT_BANDANA"), 1, 1, 0);
	if (func_304() == 1160113249)
	{
		func_531(joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"), 1, 1, 1);
		func_531(-361635024 /* GXTEntry: "The Cowboy" */, 1, 1, 1);
	}
	func_532(Global_35, &iVar0);
}

int func_466(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_533(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_467(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_468(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_469(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_470(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_471(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_472(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
		default:
			break;
	}
	return 30;
}

void func_473(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_534(iParam0, iParam6);
	func_535(iParam0, iParam5);
	func_536(iParam0, iParam4);
	func_537(iParam0, iParam3);
	func_538(iParam0, iParam2);
	func_539(iParam0, iParam1);
}

int func_474(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_285(iVar0);
}

int func_475(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1058888->f_40501 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar1 = (Global_1058888->f_40501 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if (&Global_1058888->f_40501.f_1[iVar2 /*2*/] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if (&Global_1058888->f_40501.f_1[iVar2 /*2*/] < iParam0)
		{
			iVar0 = iVar2 + 1;
		}
		else
		{
			return iVar2;
		}
	}
	return -1;
}

int func_476(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;

	if (iParam1 < 0)
	{
		iParam1 = func_89(0);
	}
	if (!INVENTORY::_0x112BCA290D2EB53C(iParam1, iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	func_534(&uVar6, iVar0);
	func_535(&uVar6, iVar1);
	func_536(&uVar6, iVar2);
	func_537(&uVar6, iVar3);
	func_538(&uVar6, iVar4);
	func_539(&uVar6, iVar5);
	return uVar6;
}

bool func_477(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_540(iParam1) || !func_540(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

int func_478(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2106445152:
			return 292;
		case -2106214197:
			return 104;
		case -2101264851:
			return 195;
		case -2073072369:
			return 59;
		case -2069570138:
			return 25;
		case joaat("WS_MP_FETCH_OTH_TALL_TREES"):
			return 357;
		case -2058120606:
			return 197;
		case -2038424081:
			return 49;
		case -2034257789:
			return 92;
		case -2022369555:
			return 265;
		case -2021582629:
			return 112;
		case -2020023971:
			return 278;
		case -1957523409:
			return 208;
		case -1952856164:
			return 165;
		case -1949204933:
			return 276;
		case -1925798111:
			return 41;
		case joaat("WS_MP_CAMP_DEFEND_ROANOKE_CIRCLE"):
			return 353;
		case -1852605133:
			return 10;
		case -1847672446:
			return 376;
		case -1840704908:
			return 289;
		case -1838712533:
			return 26;
		case -1838352012:
			return 57;
		case -1835851517:
			return 56;
		case -1831552326:
			return 123;
		case -1825294305:
			return 266;
		case -1824738758:
			return 277;
		case -1818850842:
			return 253;
		case -1799960545:
			return 257;
		case -1764522338:
			return 372;
		case -1763509974:
			return 141;
		case -1741667789:
			return 64;
		case -1738165526:
			return 3;
		case -1718674470:
			return 23;
		case -1717960576:
			return 61;
		case -1711895055:
			return 13;
		case -1706438978:
			return 233;
		case -1700452710:
			return 53;
		case -1674179981:
			return 55;
		case -1666278201:
			return 33;
		case -1612662716:
			return 201;
		case joaat("WS_MP_HIDEOUT_CUMBERLAND_FALLS"):
			return 322;
		case -1582926490:
			return 146;
		case -1579419919:
			return 147;
		case -1558439474:
			return 301;
		case -1556423728:
			return 218;
		case -1532284567:
			return 116;
		case -1530132748:
			return 311;
		case -1524512402:
			return 209;
		case -1523910291:
			return 155;
		case joaat("WS_MP_HIDEOUT_SEA_OF_CORONADO"):
			return 338;
		case -1447311849:
			return 215;
		case -1436021162:
			return 172;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case -1419919497:
			return 22;
		case -1414537028:
			return 73;
		case -1405998267:
			return 105;
		case -1344601768:
			return 314;
		case joaat("WS_MP_HIDEOUT_ROCKY_SEVEN"):
			return 331;
		case -1329135070:
			return 140;
		case -1318987693:
			return 222;
		case -1311865656:
			return 37;
		case joaat("WS_MP_HIDEOUT_QUAKERS_COVE"):
			return 320;
		case joaat("WS_MP_HIDEOUT_THE_LOFT"):
			return 321;
		case -1282804314:
			return 270;
		case -1278074582:
			return 171;
		case -1271608261:
			return 98;
		case -1257057567:
			return 21;
		case -1241340344:
			return 300;
		case -1236261996:
			return 235;
		case -1232809834:
			return 113;
		case -1230112817:
			return 170;
		case -1223121209:
			return 126;
		case -1215445344:
			return 131;
		case -1209597203:
			return 333;
		case -1206122982:
			return 156;
		case -1187950766:
			return 45;
		case -1179948750:
			return 136;
		case -1170496998:
			return 46;
		case -1164215952:
			return 234;
		case -1151084372:
			return 124;
		case -1145519186:
			return 100;
		case -1124061431:
			return 242;
		case -1123615607:
			return 29;
		case -1080627546:
			return 378;
		case -1077783786:
			return 194;
		case -1063147448:
			return 151;
		case -1062490780:
			return 79;
		case -1060078174:
			return 239;
		case -1056767524:
			return 176;
		case -1053549743:
			return 58;
		case -1029225159:
			return 106;
		case -1014145132:
			return 288;
		case -978957786:
			return 251;
		case -959357075:
			return 36;
		case -950054349:
			return 152;
		case -939420910:
			return 44;
		case -939114198:
			return 221;
		case -919512195:
			return 40;
		case joaat("WS_MP_HIDEOUT_RATTLESNAKE_HOLLOW"):
			return 336;
		case joaat("WS_MP_HIDEOUT_CUERA_SECO"):
			return 334;
		case joaat("WS_MP_FETCH_OTH_SHEPHERDS_RISE"):
			return 356;
		case -879507474:
			return 236;
		case -868076593:
			return 84;
		case -857964358:
			return 83;
		case -853383233:
			return 65;
		case joaat("WS_MP_HIDEOUT_CHOLLA_SPRINGS"):
			return 339;
		case -828139293:
			return 260;
		case -811637947:
			return 245;
		case -796902762:
			return 88;
		case -792853067:
			return 254;
		case -789397228:
			return 262;
		case -785605431:
			return 250;
		case joaat("WS_MP_INTRO_HIDEOUT_RHODES"):
			return 345;
		case -764163380:
			return 228;
		case -748969569:
			return 78;
		case -741351766:
			return 60;
		case -736853952:
			return 366;
		case joaat("WS_MP_HIDEOUT_OLD_BACCHUS_PLACE"):
			return 340;
		case -699277634:
			return 4;
		case joaat("WS_MP_HIDEOUT_FORT_RIGGS"):
			return 323;
		case -683458244:
			return 80;
		case -666014935:
			return 157;
		case -664512648:
			return 67;
		case -664252410:
			return 191;
		case -644722288:
			return 261;
		case -640663440:
			return 214;
		case -639037538:
			return 185;
		case -628542779:
			return 71;
		case -622554983:
			return 370;
		case -618620429:
			return 187;
		case -545450213:
			return 377;
		case -538889627:
			return 175;
		case -538880323:
			return 174;
		case -534215902:
			return 130;
		case joaat("WS_MP_CAMP_DEFEND_GREAT_PLAINS_CIRCLE"):
			return 352;
		case -524145696:
			return 117;
		case -523522517:
			return 364;
		case -515561750:
			return 238;
		case -503955743:
			return 249;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_BLACKWATER"):
			return 343;
		case -502324015:
			return 8;
		case -491981251:
			return 186;
		case -468693731:
			return 111;
		case -464836488:
			return 268;
		case -460024530:
			return 316;
		case -434590080:
			return 225;
		case -404698347:
			return 205;
		case -397760715:
			return 143;
		case -389056691:
			return 272;
		case -360036154:
			return 368;
		case -356975260:
			return 103;
		case joaat("WS_MP_HIDEOUT_REPENTANCE"):
			return 337;
		case -351362068:
			return 220;
		case -350863510:
			return 162;
		case -349064220:
			return 362;
		case -334729750:
			return 69;
		case -333135263:
			return 361;
		case -330120947:
			return 360;
		case -306246697:
			return 375;
		case -299522880:
			return 213;
		case -270094635:
			return 267;
		case -261141318:
			return 30;
		case -259123672:
			return 244;
		case -254562075:
			return 132;
		case -238080464:
			return 121;
		case -233743613:
			return 273;
		case -223469678:
			return 204;
		case -220282381:
			return 139;
		case -191424539:
			return 149;
		case -182889087:
			return 177;
		case -154581735:
			return 309;
		case -150493654:
			return 97;
		case -144653976:
			return 219;
		case -129643890:
			return 11;
		case joaat("WS_MP_HIDEOUT_FARMHOUSE"):
			return 317;
		case -108307814:
			return 28;
		case -99303535:
			return 167;
		case -86199844:
			return 145;
		case -80522843:
			return 154;
		case -76237062:
			return 373;
		case -75024673:
			return 258;
		case -63926460:
			return 89;
		case joaat("WS_MP_HIDEOUT_COLTER"):
			return 325;
		case -35658630:
			return 24;
		case -25901845:
			return 290;
		case -9438024:
			return 129;
		case -1:
			return 0;
		case 0:
			return 1;
		case 2639906:
			return 153;
		case 8924991:
			return 297;
		case 26054262:
			return 248;
		case 26245360:
			return 237;
		case 38162571:
			return 74;
		case 52706132:
			return 243;
		case 54073871:
			return 76;
		case joaat("WS_MP_INTRO_HIDEOUT_TUMBLEWEED"):
			return 348;
		case joaat("WS_MP_FETCH_OTH_CASTORS"):
			return 358;
		case 94263042:
			return 291;
		case 106479759:
			return 101;
		case 141950038:
			return 114;
		case 153152452:
			return 86;
		case 168171957:
			return 183;
		case 171107021:
			return 381;
		case 171499483:
			return 283;
		case 187862543:
			return 16;
		case 192515737:
			return 14;
		case 198200492:
			return 241;
		case 210001842:
			return 62;
		case 224551212:
			return 142;
		case 227918160:
			return 182;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_TUMBLEWEED"):
			return 344;
		case 235928616:
			return 286;
		case 249726958:
			return 164;
		case 269047710:
			return 54;
		case 273461605:
			return 81;
		case 280705402:
			return 95;
		case 282809459:
			return 119;
		case 299694527:
			return 275;
		case 300221584:
			return 138;
		case 302205488:
			return 216;
		case 311708813:
			return 198;
		case 320943355:
			return 133;
		case 330026330:
			return 66;
		case 345808947:
			return 287;
		case 356365161:
			return 47;
		case 371850993:
			return 281;
		case 373691918:
			return 188;
		case 374115931:
			return 90;
		case 405586984:
			return 34;
		case 407136781:
			return 173;
		case 409602249:
			return 293;
		case 417081698:
			return 17;
		case 417525590:
			return 303;
		case 420709909:
			return 42;
		case 426191476:
			return 15;
		case 434558613:
			return 199;
		case 439465264:
			return 108;
		case 440043364:
			return 31;
		case 442317566:
			return 302;
		case 449774763:
			return 227;
		case 459290420:
			return 52;
		case 469053995:
			return 231;
		case 473295046:
			return 2;
		case 476714362:
			return 232;
		case 478884033:
			return 148;
		case 479419429:
			return 305;
		case joaat("WS_MP_CAMP_DEFEND_HEARTLANDS_CIRCLE"):
			return 350;
		case 514932331:
			return 246;
		case 522677506:
			return 279;
		case 526003171:
			return 355;
		case 527226204:
			return 159;
		case 544152906:
			return 115;
		case 559573222:
			return 252;
		case joaat("WS_MP_HIDEOUT_ABANDONED_MINING_STATION"):
			return 326;
		case 588987611:
			return 179;
		case 618699440:
			return 77;
		case 630808005:
			return 128;
		case 651395116:
			return 294;
		case 657241756:
			return 189;
		case 664571177:
			return 312;
		case 665676602:
			return 296;
		case 682839815:
			return 327;
		case 689024866:
			return 134;
		case 689930684:
			return 207;
		case 704802028:
			return 178;
		case 723021499:
			return 264;
		case joaat("WS_MP_CAMP_DEFEND_TWO_ROCKS"):
			return 354;
		case 753127042:
			return 48;
		case 757752139:
			return 109;
		case joaat("WS_MP_HIDEOUT_SHIP_ROCK"):
			return 330;
		case 791041526:
			return 18;
		case 817925178:
			return 240;
		case 868326136:
			return 285;
		case 885203519:
			return 379;
		case joaat("WS_MP_CAMP_DEFEND_GRIZZLIES_CIRCLE"):
			return 351;
		case 929582877:
			return 335;
		case 931649776:
			return 224;
		case 932909855:
			return 298;
		case 945612176:
			return 247;
		case 965986934:
			return 19;
		case 976539083:
			return 310;
		case 1010885152:
			return 7;
		case 1015669983:
			return 122;
		case 1050128548:
			return 284;
		case 1064154891:
			return 110;
		case 1067254646:
			return 319;
		case 1074873669:
			return 144;
		case 1140218954:
			return 27;
		case 1151197909:
			return 256;
		case joaat("WS_MP_HIDEOUT_TALL_TREES"):
			return 329;
		case 1160698568:
			return 135;
		case 1164928979:
			return 158;
		case joaat("WS_MP_INTRO_HIDEOUT_BLACKWATER"):
			return 347;
		case 1167397384:
			return 307;
		case 1177464213:
			return 38;
		case 1186594126:
			return 230;
		case 1193080109:
			return 184;
		case 1203043430:
			return 274;
		case 1205826474:
			return 85;
		case 1207048789:
			return 169;
		case 1213993593:
			return 160;
		case 1216784232:
			return 269;
		case 1221801385:
			return 374;
		case joaat("WS_MP_HIDEOUT_LAKAY"):
			return 313;
		case 1250636944:
			return 259;
		case joaat("WS_MP_HIDEOUT_BEAVER_HOLLOW"):
			return 315;
		case 1306158345:
			return 202;
		case joaat("WS_MP_HIDEOUT_STILLWATER_STRANDS"):
			return 324;
		case 1350371763:
			return 20;
		case 1350391819:
			return 75;
		case 1352699670:
			return 271;
		case 1358491857:
			return 263;
		case 1360745816:
			return 82;
		case 1376646519:
			return 223;
		case 1399676951:
			return 210;
		case 1410198831:
			return 217;
		case 1433244935:
			return 166;
		case 1441416901:
			return 211;
		case 1446719356:
			return 380;
		case 1453909576:
			return 125;
		case 1466547629:
			return 120;
		case 1478132521:
			return 367;
		case 1485195808:
			return 50;
		case 1485494263:
			return 102;
		case 1488286867:
			return 295;
		case 1488453464:
			return 212;
		case 1497516462:
			return 5;
		case 1500064347:
			return 72;
		case 1509509592:
			return 35;
		case 1512816328:
			return 168;
		case 1517904467:
			return 206;
		case 1522511407:
			return 280;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_VALENTINE"):
			return 342;
		case 1557082963:
			return 163;
		case 1582370975:
			return 359;
		case 1583012985:
			return 304;
		case 1591451572:
			return 365;
		case 1607768502:
			return 9;
		case 1609506757:
			return 107;
		case 1626481264:
			return 118;
		case 1643531967:
			return 127;
		case 1649996811:
			return 181;
		case 1660024373:
			return 150;
		case 1665756137:
			return 93;
		case 1672143046:
			return 383;
		case 1691618738:
			return 68;
		case 1698972798:
			return 318;
		case joaat("WS_MP_HIDEOUT_SOLOMONS_FOLLY"):
			return 332;
		case 1703426636:
			return 43;
		case joaat("WS_MP_INTRO_HIDEOUT_VALENTINE"):
			return 346;
		case 1713221411:
			return 137;
		case 1743048395:
			return 226;
		case joaat("WS_MP_CAMP_DEFEND_HEARTLANDS_HILLTOP"):
			return 349;
		case 1766284049:
			return 94;
		case 1776302352:
			return 363;
		case 1804403874:
			return 382;
		case 1822001510:
			return 200;
		case 1846061697:
			return 99;
		case 1850082804:
			return 196;
		case 1867912207:
			return 70;
		case 1884271742:
			return 51;
		case 1926308480:
			return 96;
		case joaat("WS_MP_HIDEOUT_CLEMENS_COVE"):
			return 328;
		case 1944170089:
			return 161;
		case 1947931439:
			return 229;
		case 1952610440:
			return 203;
		case 1954026328:
			return 371;
		case 1982676972:
			return 91;
		case 2008888900:
			return 180;
		case 2016141805:
			return 6;
		case 2019386373:
			return 190;
		case 2024121624:
			return 193;
		case 2024383613:
			return 369;
		case 2024769126:
			return 308;
		case 2037589949:
			return 63;
		case 2051822093:
			return 299;
		case 2077022393:
			return 306;
		case 2080210939:
			return 282;
		case 2091701359:
			return 39;
		case 2109952320:
			return 192;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_RHODES"):
			return 341;
		case 2127577956:
			return 255;
		case 2136753624:
			return 87;
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

void func_479(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	struct<2> Var4;

	Var2 = 39;
	Var4 = 10;
	Var4.f_1 = 39;
	Var4.f_1.f_2 = 39;
	Var4.f_1.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iVar0 < *uParam0)
		{
			if ((func_541(uParam0->f_2[iVar0 /*2*/], 2) || &uParam0->f_2[iVar0 /*2*/] == iParam1) || &uParam0->f_2[iVar0 /*2*/] == 39)
			{
				*(uParam0->f_2[iVar0 /*2*/]) = { Var2 };
			}
			else
			{
				if (func_541(uParam0->f_2[iVar0 /*2*/], 1))
				{
					func_542(uParam0->f_2[iVar0 /*2*/], 2, 6);
				}
				*(Var4[iVar1 /*2*/]) = { *(uParam0->f_2[iVar0 /*2*/]) };
				iVar1++;
				*(uParam0->f_2[iVar0 /*2*/]) = { Var2 };
			}
			iVar0++;
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				*(uParam0->f_2[iVar0 /*2*/]) = { *(Var4[iVar0 /*2*/]) };
				iVar0++;
			}
			*uParam0 = iVar1;
		}
	}

void func_480(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_543(uParam0, 1))
	{
		func_544(uParam0, 1);
	}
	(uParam0->f_2[*uParam0 /*2*/])->f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

bool func_481(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[iParam0 /*11*/])->f_9 && iParam1) != 0;
}

void func_482(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 0;
	if (bParam4)
	{
		iVar0 = 3;
	}
	iVar1 = 12;
	iVar2 = 20;
	iVar3 = 16;
	if ((uParam0->f_1[iVar3 /*3*/])->f_1 == 1216705912 || (uParam0->f_1[iVar3 /*3*/])->f_1 == 654181853)
	{
		if (&uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
		{
			(uParam0->f_1[iVar3 /*3*/])->f_1 = 1334603721;
		}
		else
		{
			(uParam0->f_1[iVar3 /*3*/])->f_1 = -1539589426;
			(uParam0->f_1[iVar1 /*3*/])->f_1 = joaat("BASE");
		}
		if (bParam2)
		{
			func_402(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_402(iVar3, iVar0);
		}
	}
	if ((uParam0->f_1[iVar2 /*3*/])->f_1 == -1333118809 || (uParam0->f_1[iVar2 /*3*/])->f_1 == joaat("CUSTOM"))
	{
		(uParam0->f_1[iVar2 /*3*/])->f_1 = joaat("BASE");
		if (bParam3)
		{
			func_402(iVar2, iVar0);
		}
	}
}

int func_483(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_304();
	}
	iVar0 = 0;
	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_484(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam2 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < PED::_0xFFCC2DB2D9953401(bParam0, iParam1, bParam3))
	{
		if (PED::_0x6243635AF2F1B826(bParam0, iVar0, iParam1, bParam3) == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_485(bool bParam0, bool bParam1, int iParam2)
{
	*iParam2 = joaat("BASE");
	return 1;
}

bool func_486(bool bParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_286(bParam0, 1) /*11*/])->f_10 && iParam1) != 0;
}

int func_487(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 25;
	iVar1 = 0;
	if (&uParam0->f_1[iVar0 /*3*/] != &Global_1946804->f_57[iVar0 /*11*/])
	{
		iVar1++;
	}
	iVar0 = 26;
	if (&uParam0->f_1[iVar0 /*3*/] != &Global_1946804->f_57[iVar0 /*11*/])
	{
		iVar1++;
	}
	return iVar1;
}

void func_488(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*(Global_1946804->f_1497.f_1[iParam0 /*3*/]) = { *(Global_1946804->f_1378.f_1[iParam0 /*3*/]) };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_66() == -1)
	{
		func_545(Global_1946804->f_1497.f_1[iParam0 /*3*/], iParam0, Global_26795.f_776);
	}
	else
	{
		func_546(Global_1946804->f_1497.f_1[iParam0 /*3*/], iParam0, Global_36637.f_45.f_350.f_1011);
	}
}

int func_489(int iParam0, int iParam1)
{
	if (func_66() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			return (Global_26795.f_26[iParam1 /*120*/] && iParam0) != 0;
		}
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		return (Global_36637.f_45.f_350.f_26[iParam1 /*120*/] && iParam0) != 0;
	}
	return 0;
}

void func_490(int iParam0, bool bParam1, int iParam2)
{
	func_547(&(Global_1946804->f_1378), iParam0);
	func_548(2, iParam0, 6);
	if (bParam1)
	{
		func_491(0, 1);
	}
}

void func_491(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_549(0);
	}
	if (bParam0)
	{
		func_409(8);
		func_409(512);
	}
	else
	{
		func_409(8);
		func_409(16);
	}
}

bool func_492(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_493(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

float func_494(int iParam0)
{
	return &(Global_40.f_11095.f_11[iParam0]);
}

int func_495(float fParam0)
{
	return BUILTIN::ROUND(((fParam0 / 100f) * BUILTIN::TO_FLOAT(10)));
}

char* func_496(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					if (bParam2)
					{
						return "PMPLAYER_CONDITION_TEMPERATURE_FAIR";
					}
					else
					{
						return func_318(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_318(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
			}
			break;
		case 1:
		case 2:
		case 3:
			switch (iParam1)
			{
				case 0:
					return "PMPLAYER_CORE_PC_VALUE";
				case 1:
					return "PMPLAYER_TIME_VALUE_MINUTES";
				case 2:
					return "PMPLAYER_CORE_PC_VALUE";
				default:
					break;
			}
			break;
	}
	return "";
}

int func_497()
{
	return Global_1946804->f_1497;
}

char* func_498(int iParam0)
{
	bool bVar0;

	bVar0 = func_431(iParam0);
	if (bVar0 == 0)
	{
		return "OUT_UNKNOWN";
	}
	return func_360(bVar0);
}

int func_499()
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

int func_500(int iParam0)
{
	if (!func_362(iParam0))
	{
		return -1;
	}
	return func_551(func_550(iParam0));
}

bool func_501(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_502(bool bParam0)
{
	int iVar0;

	if (func_552(bParam0))
	{
		iVar0 = 0;
	}
	else if (func_553(bParam0))
	{
		iVar0 = 1;
	}
	else if (func_554(bParam0))
	{
		iVar0 = 2;
	}
	else if (func_555(bParam0))
	{
		iVar0 = 3;
	}
	return iVar0;
}

int func_503(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_6(func_556(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 > 1)
	{
		return 1;
	}
	return 0;
}

int func_504(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_6(func_557(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= 4)
	{
		return 1;
	}
	return 0;
}

bool func_505(int iParam0)
{
	return (Global_40.f_12003 && iParam0) != 0;
}

void func_506()
{
	int iVar0;

	if (func_66() != -1)
	{
		return;
	}
	func_176(joaat("UPGRADE_STAMINA_TANK_1"), 1, 752097756);
	iVar0 = func_340(1);
	func_458(1, iVar0, 0);
}

void func_507(int iParam0)
{
	Global_40.f_12003 = (Global_40.f_12003 || iParam0);
}

void func_508()
{
	int iVar0;

	if (func_66() != -1)
	{
		return;
	}
	func_176(joaat("UPGRADE_DEADEYE_TANK_1"), 1, 752097756);
	iVar0 = func_340(2);
	func_458(2, iVar0, 0);
}

void func_509()
{
	int iVar0;

	if (func_66() != -1)
	{
		return;
	}
	func_176(joaat("UPGRADE_HEALTH_TANK_1"), 1, 752097756);
	iVar0 = func_340(0);
	func_458(0, iVar0, 0);
}

int func_510(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_511(bool bParam0, int iParam1)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	bVar0 = PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL(iParam1, ENTITY::GET_ENTITY_MODEL(bParam0));
	if (bVar0)
	{
	}
	return bVar0;
}

int func_512(bool bParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return 0;
	}
	if (!DECORATOR::DECOR_EXIST_ON(bParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(bParam0, "metaped_outfit_request_name"))
	{
		return 0;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(bParam0, "metaped_outfit_request_name");
	if (iVar0 == iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_513(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(bParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(bParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(bParam0, "metaped_outfit_request_name");
	if (!func_511(bParam0, iVar0))
	{
		return true;
	}
	if (iVar0 != iParam1)
	{
		return false;
	}
	iVar1 = DECORATOR::DECOR_GET_INT(bParam0, "metaped_outfit_request");
	return PED::_0x610438375E5D1801(iVar1);
}

void func_514(bool bParam0)
{
	DECORATOR::DECOR_REMOVE(bParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(bParam0, "metaped_outfit_request_name");
}

int func_515(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 0:
			return 0;
		case 1:
			return 50;
		case 2:
			return 100;
		case 3:
			return 200;
		case 4:
			return 350;
		case 5:
			return 550;
		case 6:
			return 800;
		case 7:
			return 1100;
		default:
			break;
	}
	return 0;
}

int func_516(int iParam0, int iParam1)
{
	return 0;
}

int func_517()
{
	return 0;
}

int func_518(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return INVENTORY::_0xE787F05DFC977BDE(func_89(0), joaat("UPGRADE_HEALTH_TANK_1"), 0);
		case 1:
			return INVENTORY::_0xE787F05DFC977BDE(func_89(0), joaat("UPGRADE_STAMINA_TANK_1"), 0);
		case 2:
			return INVENTORY::_0xE787F05DFC977BDE(func_89(0), joaat("UPGRADE_DEADEYE_TANK_1"), 0);
	}
	return 0;
}

struct<4> func_519(int iParam0, int iParam1)
{
	char cVar0[32];

	if (iParam0 >= 10)
	{
		iParam1 = 0;
	}
	StringCopy(&cVar0, "TOAST_RPG_LEVEL_", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	return cVar0;
}

char* func_520(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_521(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "health";
		case 0:
			return "stamina";
		case 2:
			return "dead_eye_level_up";
		default:
			break;
	}
	return "";
}

char* func_522(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "RPG_STAMINA";
		case 0:
			return "RPG_HEALTH";
		case 2:
			return "RPG_DEADEYE";
		default:
			break;
	}
	return "";
}

int func_523(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("TOAST_RPG_LEVEL_STAMINA");
		case 0:
			return joaat("TOAST_RPG_LEVEL_HEALTH");
		case 2:
			return joaat("TOAST_RPG_LEVEL_DEADEYE");
		default:
			break;
	}
	return 0;
}

int func_524(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 3;
		default:
			break;
	}
	return 0;
}

int func_525(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("STATS_HEALTH");
		case 1:
			return joaat("STATS_STAMINA");
		case 2:
			return joaat("STATS_DEADEYE");
		default:
			break;
	}
	return 0;
}

int func_526(int iParam0, int iParam1, int iParam2, var uParam3)
{
	bool bVar0;
	struct<4> Var1;
	int iVar5;

	if (func_558(iParam1) && !func_559(iParam1))
	{
		bVar0 = func_560(iParam1);
	}
	else
	{
		return 0;
	}
	func_561(uParam3);
	iVar5 = func_562(iParam2);
	if (!PED::_0x608BC6A6AACD5036(&Var1, bVar0, iVar5, 0))
	{
		return 0;
	}
	*iParam0 = Var1.f_3;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0) && !ENTITY::_0x88AD6CC10D8D35B2(*iParam0))
	{
		return 0;
	}
	*uParam3 = ENTITY::GET_ENTITY_MODEL(*iParam0);
	uParam3->f_2 = ENTITY::_0xD21C7418C590BB40(*iParam0);
	uParam3->f_3 = ENTITY::_GET_ENTITY_CARRY_CONFIG(*iParam0);
	return 1;
}

void func_527(int iParam0, int iParam1)
{
	bool bVar0;

	bVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		func_563(bVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_564(&(iParam1->f_1), bVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

void func_528(int iParam0, int* iParam1)
{
	var uVar0;
	int iVar30;
	bool bVar31;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	uVar0 = 29;
	MISC::_COPY_MEMORY(iParam1, &uVar0, 30);
	iVar30 = 0;
	while (iVar30 < 29)
	{
		bVar31 = false;
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &bVar31, false, iVar30, true);
		if (func_86(bVar31))
		{
			(*iParam1)[iVar30] = bVar31;
		}
		else
		{
			(*iParam1)[iVar30] = 0;
		}
		iVar30++;
	}
}

void func_529(bool bParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = 17;
	while (iVar0 >= 0)
	{
		bVar1 = &Global_1946804->f_2657[iVar0];
		if (func_34(bVar1, 0))
		{
			func_565(bVar1, 0, bParam0);
		}
		Global_1946804->f_2657[iVar0] = 0;
		iVar0 = (iVar0 + -1);
	}
	Global_1946804->f_2657.f_20 = 0;
	Global_1946804->f_2657.f_21 = 0;
	Global_1946804->f_2657.f_22 = 0;
	Global_1946804->f_2657.f_23 = 0;
	Global_1946804->f_2657.f_24 = 0;
	Global_1946804->f_2657.f_25 = 0;
	Global_1946804->f_2657.f_19 = 0;
	Global_1946804->f_2657.f_26.f_6 = 0;
}

void func_530(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	Global_1946804->f_2657.f_26.f_2 = 3;
	Global_1946804->f_2657.f_26.f_1 = 3;
	Global_1946804->f_2657.f_26 = 3;
	if (func_66() == -1)
	{
		func_566(352481484);
		iVar0 = 0;
		while (iVar0 < Global_26795.f_19)
		{
			Global_1946804->f_2657[iVar0] = &Global_26795[iVar0];
			iVar0++;
		}
		Global_1946804->f_2657.f_20 = Global_26795.f_20;
		Global_1946804->f_2657.f_21 = Global_26795.f_21;
		Global_1946804->f_2657.f_22 = Global_26795.f_22;
		Global_1946804->f_2657.f_23 = Global_26795.f_23;
		Global_1946804->f_2657.f_24 = Global_26795.f_24;
		Global_1946804->f_2657.f_25 = Global_26795.f_25;
		Global_1946804->f_2657.f_19 = Global_26795.f_19;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_36637.f_45.f_350.f_19)
		{
			Global_1946804->f_2657[iVar0] = &Global_36637.f_45.f_350[iVar0];
			iVar0++;
		}
		Global_1946804->f_2657.f_20 = Global_36637.f_45.f_350.f_20;
		Global_1946804->f_2657.f_21 = Global_36637.f_45.f_350.f_21;
		Global_1946804->f_2657.f_22 = Global_36637.f_45.f_350.f_22;
		Global_1946804->f_2657.f_23 = Global_36637.f_45.f_350.f_23;
		Global_1946804->f_2657.f_24 = Global_36637.f_45.f_350.f_24;
		Global_1946804->f_2657.f_25 = Global_36637.f_45.f_350.f_25;
		Global_1946804->f_2657.f_19 = Global_36637.f_45.f_350.f_19;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		bVar2 = &Global_1946804->f_2657[iVar0];
		if (func_135(bVar2) != -999503751)
		{
			func_567(&(Global_1946804->f_2657.f_26.f_26), bVar2, iVar0);
		}
		if (func_568(bVar2, 0))
		{
			func_569(bVar2, &Global_1946804->f_1497.f_1[iVar1 /*3*/] == &Global_1946804->f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_531(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;

	if (!func_570(bParam0))
	{
		return;
	}
	iVar0 = func_135(bParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_571(bParam0, &(Global_1946804->f_2657.f_21), Global_1946804->f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_571(bParam0, &(Global_1946804->f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_571(bParam0, &(Global_1946804->f_2657.f_20), Global_1946804->f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = func_571(bParam0, &(Global_1946804->f_2657.f_22), Global_1946804->f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_571(bParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_571(bParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (bParam0 == func_572(0))
	{
		func_573(bParam0, 1);
		if (func_304() == 1160113249)
		{
			func_573(func_572(-2125499975), 0);
		}
		else
		{
			func_573(func_572(1160113249), 0);
		}
	}
	func_574();
	if (func_575(iVar0))
	{
		INVENTORY::_0x766315A564594401(func_89(0), bParam0, 0);
	}
	func_569(bParam0, bParam3);
	if (bParam2)
	{
		func_491(0, 0);
	}
}

void func_532(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 29)
	{
		if (iParam1[iVar0] != 0)
		{
			if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam1[iVar0], 0, false))
			{
				if (func_239(iParam1[iVar0]))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, iParam1[iVar0], 0, false, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
			}
			iVar1 = 0;
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, false, iVar0, true);
			if (iVar1 != iParam1[iVar0])
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iParam1[iVar0], true, iVar0, false, false);
			}
		}
		iVar0++;
	}
}

int func_533(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_534(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT((1898 - iParam1), 26));
		*iParam0 |= -2147483648;
	}
	else
	{
		*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT((iParam1 - 1898), 26));
		*iParam0 = (*iParam0 - *iParam0 & -2147483648);
	}
}

void func_535(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_536(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_467(*iParam0);
	iVar1 = func_466(*iParam0);
	if (iParam1 < 1 || iParam1 > func_472(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_537(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_538(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_539(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

int func_540(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_471(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_470(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_469(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_466(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return 0;
	}
	iVar4 = func_467(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_468(iParam0);
	if (iVar5 < 1 || iVar5 > func_472(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

bool func_541(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_542(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_543(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_544(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_545(var uParam0, int iParam1, int iParam2)
{
	*((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/]) = { *uParam0 };
	((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 = (((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 - ((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 & 1);
}

void func_546(var uParam0, int iParam1, int iParam2)
{
	*((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/]) = { *uParam0 };
	((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 = (((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 - ((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 & 1);
}

void func_547(var uParam0, int iParam1)
{
	int iVar0;

	if (func_66() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		(Global_26795.f_26[iParam1 /*120*/])->f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_545(uParam0->f_1[iVar0 /*3*/], iVar0, iParam1);
			iVar0++;
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	(Global_36637.f_45.f_350.f_26[iParam1 /*120*/])->f_1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		func_546(uParam0->f_1[iVar0 /*3*/], iVar0, iParam1);
		iVar0++;
	}
}

void func_548(int iParam0, int iParam1, int iParam2)
{
	if (func_66() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			Global_26795.f_26[iParam1 /*120*/] = (Global_26795.f_26[iParam1 /*120*/] || iParam0);
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		Global_36637.f_45.f_350.f_26[iParam1 /*120*/] = (Global_36637.f_45.f_350.f_26[iParam1 /*120*/] || iParam0);
	}
}

void func_549(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

int func_550(int iParam0)
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

int func_551(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

int func_552(bool bParam0)
{
	if (!func_34(bParam0, 0))
	{
		return 0;
	}
	if (func_131(bParam0, -1066545920))
	{
		return 1;
	}
	return 0;
}

int func_553(bool bParam0)
{
	if (!func_34(bParam0, 0))
	{
		return 0;
	}
	if (func_131(bParam0, -284267618))
	{
		return 1;
	}
	return 0;
}

int func_554(bool bParam0)
{
	if (!func_34(bParam0, 0))
	{
		return 0;
	}
	if (func_131(bParam0, 363491182))
	{
		return 1;
	}
	return 0;
}

int func_555(bool bParam0)
{
	if (!func_34(bParam0, 0))
	{
		return 0;
	}
	if (func_131(bParam0, 1406113494))
	{
		return 1;
	}
	return 0;
}

int func_556(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_576(iParam0);
		case 1:
			return func_577(iParam0);
		case 2:
			return func_578(iParam0);
		case 3:
			return func_579(iParam0);
	}
	return 0;
}

int func_557(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_580(iParam0);
		case 1:
			return func_581(iParam0);
		case 2:
			return func_582(iParam0);
		case 3:
			return func_583(iParam0);
		case 4:
			return func_584(iParam0);
		case 5:
			return func_585(iParam0);
		case 6:
			return func_586(iParam0);
		case 7:
			return func_587(iParam0);
		case 8:
			return func_588(iParam0);
	}
	return 0;
}

int func_558(int iParam0)
{
	iParam0 = func_589(iParam0);
	if (iParam0 <= -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383[iParam0 /*45*/]))
	{
		return 1;
	}
	return 0;
}

int func_559(int iParam0)
{
	bool bVar0;

	iParam0 = func_589(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_558(iParam0))
	{
		return 0;
	}
	bVar0 = func_560(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(bVar0) || PED::IS_PED_INJURED(bVar0))
	{
		return 1;
	}
	return 0;
}

int func_560(int iParam0)
{
	iParam0 = func_589(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0 /*45*/];
}

void func_561(var uParam0)
{
	int iVar0;

	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = -1;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		uParam0->f_10[iVar0 /*8*/] = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_1 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_2 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_3 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_4 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_5 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_6 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_7 = 0;
		iVar0++;
	}
	uParam0->f_91 = 0;
	uParam0->f_92 = 0;
	uParam0->f_93 = 0;
}

int func_562(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4;
		case 1:
			return 5;
		case 2:
			return 6;
	}
	return 0;
}

void func_563(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam3 = PED::_GET_PED_CARCASS_QUALITY(bParam0);
	*uParam2 = FLOCK::_0xF8B48A361DC388AE(bParam0);
	if (*uParam2 == 2)
	{
		*uParam1 = 4;
	}
	else if (*uParam2 == 1)
	{
		*uParam1 = 3;
	}
	else
	{
		*uParam4 = PED::_GET_PED_QUALITY(bParam0);
		switch (*uParam4)
		{
			case 0:
				*uParam1 = 0;
				break;
			case 1:
				*uParam1 = 1;
				break;
			case -1:
			case 2:
				*uParam1 = 2;
				break;
		}
	}
}

bool func_564(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;

	iVar0 = iParam3;
	iVar1 = iParam2;
	if (iVar0 < iVar1)
	{
		iParam2 = iVar0;
	}
	uVar2 = PED::_0x9E7738B291706746(bParam0, bParam1, iParam2);
	return uVar2;
}

void func_565(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	switch (func_135(bParam0))
	{
		case -2061583405:
			bVar0 = func_590(bParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_590(bParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_590(bParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_590(bParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_590(bParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_590(bParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_574();
	}
	if (bParam1)
	{
		func_491(0, 0);
	}
}

void func_566(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<14> Var2;

	Var2 = -1;
	Var2.f_1 = -1;
	Var2.f_2 = -1;
	Var2.f_3 = -1;
	Var2.f_4 = -1;
	Var2.f_5 = -1;
	Var2.f_6 = -1;
	Var2.f_7 = -1;
	Var2.f_8 = -1;
	Var2.f_13 = -1;
	Var2 = { func_194(0, -1591664384, -1591664384, -1591664384, 0, iParam0) };
	if (func_197(&Var2, &iVar0, &iVar1, 0))
	{
		if (iVar1 > 0)
		{
			switch (iParam0)
			{
				case 352481484:
					Global_1946804->f_2657.f_26.f_2 = 5;
					Global_1946804->f_2657.f_26.f_1 = 5;
					Global_1946804->f_2657.f_26 = 5;
					break;
			}
		}
		func_87(iVar0);
	}
}

void func_567(var uParam0, bool bParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_591(iParam2, *uParam0);
	func_592(uParam0->f_1[*uParam0 /*5*/], bParam1, -1, 1, 0);
	*uParam0++;
}

int func_568(bool bParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_212(bParam0, 0, 0) };
	Var5 = { func_243(bParam0, Var0, Var0.f_4, 0) };
	if (func_336(bParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x9A113C660AEA3832(func_89(0), &Var5, iParam1);
	return 1;
}

void func_569(bool bParam0, bool bParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_212(bParam0, 0, 0) };
	Var5 = { func_243(bParam0, Var0, Var0.f_4, 0) };
	if (func_336(bParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(func_89(0), &Var5, bParam1);
}

int func_570(bool bParam0)
{
	if (func_66() == -1)
	{
		if (Global_40.f_4283 != 0)
		{
			if (bParam0 == 1164374808)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_571(bool bParam0, var uParam1, int iParam2, bool bParam3)
{
	var uVar0;
	bool bVar1;

	bVar1 = bParam0;
	if (Global_1946804->f_2657.f_19 >= 18)
	{
		return 0;
	}
	if (*uParam1 >= iParam2)
	{
		return 0;
	}
	if (func_593(bVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_568(bParam0, 0))
	{
		return 0;
	}
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = bVar1;
	if (func_135(bParam0) != -999503751)
	{
		func_567(&(Global_1946804->f_2657.f_26.f_26), bParam0, Global_1946804->f_2657.f_19);
	}
	Global_1946804->f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_572(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_304();
	}
	if (iParam0 == 1160113249)
	{
		return joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000");
	}
	return joaat("CLOTHING_ITEM_HAT_PZERO_000");
}

int func_573(bool bParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_212(bParam0, 0, 0) };
	Var5 = { func_243(bParam0, Var0, Var0.f_4, 0) };
	if (func_336(bParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x0349404A22736740(iParam1, func_89(0), &Var5);
	return 1;
}

void func_574()
{
	int iVar0;

	if (func_66() == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_2657.f_19)
		{
			Global_26795[iVar0] = &Global_1946804->f_2657[iVar0];
			iVar0++;
		}
		Global_26795.f_20 = Global_1946804->f_2657.f_20;
		Global_26795.f_21 = Global_1946804->f_2657.f_21;
		Global_26795.f_22 = Global_1946804->f_2657.f_22;
		Global_26795.f_23 = Global_1946804->f_2657.f_23;
		Global_26795.f_24 = Global_1946804->f_2657.f_24;
		Global_26795.f_19 = Global_1946804->f_2657.f_19;
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		Global_36637.f_45.f_350[iVar0] = &Global_1946804->f_2657[iVar0];
		iVar0++;
	}
	Global_36637.f_45.f_350.f_20 = Global_1946804->f_2657.f_20;
	Global_36637.f_45.f_350.f_21 = Global_1946804->f_2657.f_21;
	Global_36637.f_45.f_350.f_22 = Global_1946804->f_2657.f_22;
	Global_36637.f_45.f_350.f_23 = Global_1946804->f_2657.f_23;
	Global_36637.f_45.f_350.f_24 = Global_1946804->f_2657.f_24;
	Global_36637.f_45.f_350.f_19 = Global_1946804->f_2657.f_19;
}

bool func_575(int iParam0)
{
	return func_595(func_594(iParam0));
}

int func_576(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_GATOR");
		case 1:
			return joaat("PROVISION_REINFORCED_BANDOLIER_BEAR");
		case 2:
			return joaat("PROVISION_REINFORCED_BANDOLIER_BOAR");
		case 3:
			return joaat("PROVISION_REINFORCED_BANDOLIER_BUFFALO");
		case 4:
			return joaat("PROVISION_REINFORCED_BANDOLIER_COUGAR");
		case 5:
			return joaat("PROVISION_REINFORCED_BANDOLIER_DEER");
		case 6:
			return joaat("PROVISION_REINFORCED_BANDOLIER_PANTHER");
		case 7:
			return joaat("PROVISION_REINFORCED_BANDOLIER_RABBIT");
		case 8:
			return joaat("PROVISION_REINFORCED_BANDOLIER_SNAKE");
		default:
			break;
	}
	return 0;
}

int func_577(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_GUNBELT_GATOR");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_BEAR");
		case 2:
			return joaat("PROVISION_REINFORCED_GUNBELT_BOAR");
		case 3:
			return joaat("PROVISION_REINFORCED_GUNBELT_BUFFALO");
		case 4:
			return joaat("PROVISION_REINFORCED_GUNBELT_COUGAR");
		case 5:
			return joaat("PROVISION_REINFORCED_GUNBELT_DEER");
		case 6:
			return joaat("PROVISION_REINFORCED_GUNBELT_PANTHER");
		case 7:
			return joaat("PROVISION_REINFORCED_GUNBELT_RABBIT");
		case 8:
			return joaat("PROVISION_REINFORCED_GUNBELT_SNAKE");
		default:
			break;
	}
	return 0;
}

int func_578(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_HOLSTER_GATOR");
		case 1:
			return joaat("PROVISION_REINFORCED_HOLSTER_BEAR");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_BOAR");
		case 3:
			return joaat("PROVISION_REINFORCED_HOLSTER_BUFFALO");
		case 4:
			return joaat("PROVISION_REINFORCED_HOLSTER_COUGAR");
		case 5:
			return joaat("PROVISION_REINFORCED_HOLSTER_DEER");
		case 6:
			return joaat("PROVISION_REINFORCED_HOLSTER_PANTHER");
		case 7:
			return joaat("PROVISION_REINFORCED_HOLSTER_RABBIT");
		case 8:
			return joaat("PROVISION_REINFORCED_HOLSTER_SNAKE");
		default:
			break;
	}
	return 0;
}

int func_579(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_OFFHAND_GATOR");
		case 1:
			return joaat("PROVISION_REINFORCED_OFFHAND_BEAR");
		case 2:
			return joaat("PROVISION_REINFORCED_OFFHAND_BOAR");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_BUFFALO");
		case 4:
			return joaat("PROVISION_REINFORCED_OFFHAND_COUGAR");
		case 5:
			return joaat("PROVISION_REINFORCED_OFFHAND_DEER");
		case 6:
			return joaat("PROVISION_REINFORCED_OFFHAND_PANTHER");
		case 7:
			return joaat("PROVISION_REINFORCED_OFFHAND_RABBIT");
		case 8:
			return joaat("PROVISION_REINFORCED_OFFHAND_SNAKE");
		default:
			break;
	}
	return 0;
}

int func_580(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_GATOR");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_GATOR");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_GATOR");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_GATOR");
		default:
			break;
	}
	return 0;
}

int func_581(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_BEAR");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_BEAR");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_BEAR");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_BEAR");
		default:
			break;
	}
	return 0;
}

int func_582(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_BOAR");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_BOAR");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_BOAR");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_BOAR");
		default:
			break;
	}
	return 0;
}

int func_583(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_BUFFALO");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_BUFFALO");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_BUFFALO");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_BUFFALO");
		default:
			break;
	}
	return 0;
}

int func_584(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_COUGAR");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_COUGAR");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_COUGAR");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_COUGAR");
		default:
			break;
	}
	return 0;
}

int func_585(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_DEER");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_DEER");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_DEER");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_DEER");
		default:
			break;
	}
	return 0;
}

int func_586(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_PANTHER");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_PANTHER");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_PANTHER");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_PANTHER");
		default:
			break;
	}
	return 0;
}

int func_587(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_RABBIT");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_RABBIT");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_RABBIT");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_RABBIT");
		default:
			break;
	}
	return 0;
}

int func_588(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_SNAKE");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_SNAKE");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_SNAKE");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_SNAKE");
		default:
			break;
	}
	return 0;
}

int func_589(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_590(bool bParam0, var uParam1)
{
	int iVar0;
	bool bVar1;

	bVar1 = bParam0;
	if (!func_593(bVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_135(bParam0) != -999503751)
		{
			func_596(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_135(bParam0) != -999503751)
	{
		func_596(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_568(bParam0, 1);
	return 1;
}

void func_591(int iParam0, var uParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = uParam1;
}

void func_592(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	if (PED::_0x93FFD92F05EC32FD(uParam0->f_3.f_1))
	{
		func_597(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_286(func_380(bParam1), 1);
		if (uParam0->f_1 == -1)
		{
		}
	}
	else
	{
		uParam0->f_1 = iParam2;
	}
	uParam0->f_2 = iParam4;
	*uParam0 = bParam1;
	uParam0->f_3 = 0;
	if (bParam3)
	{
		func_598(uParam0);
	}
}

int func_593(bool bParam0, int iParam1)
{
	*iParam1 = 0;
	*iParam1 = 0;
	while (*iParam1 < Global_1946804->f_2657.f_19)
	{
		if (bParam0 == &Global_1946804->f_2657[*iParam1])
		{
			return 1;
		}
		*iParam1++;
	}
	return 0;
}

int func_594(int iParam0)
{
	switch (iParam0)
	{
		case -2061583405:
			return 2;
		case -1719060085:
			return 16;
		case -999503751:
			return 1;
		case -525676072:
			return 4;
		case 81053684:
			return 8;
		case -413129408:
			return 32;
		default:
			break;
	}
	return 0;
}

bool func_595(var uParam0)
{
	return (Global_1946804->f_2657.f_26.f_6 && uParam0) != 0;
}

void func_596(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = func_599(iParam1);
	func_600(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_601(&(uParam0->f_26), iVar1);
		if (func_602(uParam0->f_26, &iVar0))
		{
			func_603(iVar0, iVar1);
		}
	}
}

void func_597(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_604(&(uParam0->f_3));
}

void func_598(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	func_605(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

int func_599(int iParam0)
{
	return &(Global_1946804->f_2657.f_26.f_7[iParam0]);
}

void func_600(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = &Global_1946804->f_2657.f_26.f_7[iParam0];
	Global_1946804->f_2657.f_26.f_7[iParam0] = &Global_1946804->f_2657.f_26.f_7[iParam1];
	Global_1946804->f_2657.f_26.f_7[iParam1] = uVar0;
}

void func_601(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - 1);
	func_597(uParam0->f_1[iParam1 /*5*/]);
	*(uParam0->f_1[iParam1 /*5*/]) = { *(uParam0->f_1[*uParam0 /*5*/]) };
}

int func_602(int iParam0, int iParam1)
{
	*iParam1 = 0;
	*iParam1 = 0;
	while (*iParam1 < Global_1946804->f_2657.f_19)
	{
		if (&Global_1946804->f_2657.f_26.f_7[*iParam1] == iParam0)
		{
			return 1;
		}
		*iParam1++;
	}
	return 0;
}

void func_603(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = iParam1;
}

void func_604(var uParam0)
{
	if (*uParam0 && PED::_0x93FFD92F05EC32FD(uParam0->f_1))
	{
		PED::_0x13E7320C762F0477(uParam0->f_1);
		uParam0->f_1 = -1;
	}
	*uParam0 = 0;
}

void func_605(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_606(func_304());
	if (*uParam0)
	{
		func_604(uParam0);
	}
	uParam0->f_1 = PED::_0xF6D9E1F3560CBF8E(iVar0, iParam1, 0, func_66() != -1, iParam2);
	*uParam0 = 1;
}

int func_606(int iParam0)
{
	if (func_66() == -1)
	{
		switch (iParam0)
		{
			case -2125499975:
				return 0;
			case -449205311:
				return 0;
			case 1160113249:
				return 0;
			default:
				break;
		}
		return 0;
	}
	switch (iParam0)
	{
		case joaat("MPC_PLAYER_TYPE_MP_MALE"):
			return 0;
		case joaat("MPC_PLAYER_TYPE_MP_FEMALE"):
			return 1;
		default:
			break;
	}
	return 0;
}

