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
	var uLocal_15 = 0;
	float fLocal_16 = 0f;
	float fLocal_17 = 0f;
	struct<10> Local_18 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = -1;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion

void __EntryFunction__()
{
	fLocal_16 = 1f;
	fLocal_17 = 1f;
	func_1(&Local_18, vScriptParam_0);
	if (func_2() == -1)
	{
	}
	else
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		if (func_4(func_3(0)) != 7)
		{
		}
		else
		{
			func_5(&Local_18);
		}
	}
	if (func_2() == -1)
	{
		if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		{
			func_5(&Local_18);
		}
	}
	if (!TASK::_0x841475AC96E794D1(Local_18.f_9))
	{
		func_5(&Local_18);
	}
	while (func_6(&Local_18))
	{
		if (func_7())
		{
			func_5(&Local_18);
		}
		if (func_8(&Local_18))
		{
			func_5(&Local_18);
		}
		BUILTIN::WAIT(0);
	}
	func_5(&Local_18);
}

void func_1(var uParam0, vector3 vParam1)
{
	NETWORK::_0xE7DDA8BD3BCF751C(3);
	if (vParam1.z == 1260056893)
	{
		if (!func_9(uParam0, 4))
		{
			uParam0->f_16 = vParam1.x;
			vParam1.x = 0;
			func_10(uParam0, 4);
			if (MISC::ABSI(uParam0->f_16) <= 50)
			{
				uParam0->f_19 = func_11(MISC::ABSI(uParam0->f_16));
				func_10(uParam0, 1);
			}
			else
			{
				func_10(uParam0, 2);
			}
		}
	}
	*uParam0 = 3;
	uParam0->f_1 = func_12(vParam1, uParam0);
	if (!func_9(uParam0, 4))
	{
		uParam0->f_19 = func_13(uParam0);
		func_14(uParam0);
	}
	uParam0->f_20 = func_15();
	uParam0->f_12 = "script@mech@treasure_hunting@chest";
	uParam0->f_13 = "PBL_CHEST_01";
	if (!func_9(uParam0, 16))
	{
		func_10(uParam0, 16);
	}
	uParam0->f_2 = 0;
	uParam0->f_22 = func_16(uParam0);
	uParam0->f_5 = func_17(uParam0->f_22);
	uParam0->f_10 = vParam1.x;
	uParam0->f_9 = vParam1.y;
	uParam0->f_6 = { TASK::_0xA8452DD321607029(uParam0->f_9, 1) };
	func_18(&(uParam0->f_34), uParam0->f_6);
	func_19(*uParam0, uParam0->f_1);
	uParam0->f_17 = func_20(0);
	uParam0->f_18 = func_21();
	if (func_22(uParam0->f_6))
	{
		if (func_9(uParam0, 16))
		{
			if (func_23())
			{
				if (!func_9(uParam0, 64))
				{
					func_10(uParam0, 64);
				}
			}
		}
	}
}

int func_2()
{
	return Global_1572887->f_13;
}

struct<2> func_3(int iParam0)
{
	return *(Global_1900718->f_1[iParam0 /*2*/]);
}

int func_4(var uParam0, var uParam1)
{
	return uParam0;
}

void func_5(var uParam0)
{
	func_24(&(uParam0->f_14), 1, 1);
	func_25(uParam0);
	if (func_9(uParam0, 2))
	{
		func_26(uParam0->f_6);
	}
	func_27(*uParam0, uParam0->f_1, 1);
	func_28(*uParam0, uParam0->f_1, 1);
	func_28(*uParam0, uParam0->f_1, 16);
	func_28(*uParam0, uParam0->f_1, 32);
	func_29();
	func_30();
	func_31(&(uParam0->f_34));
	if (PED::_0x91A5F9CBEBB9D936(uParam0->f_29))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_29, false);
	}
	func_32(0);
	func_33(&(uParam0->f_34));
	if (!func_9(uParam0, 4))
	{
		SCRIPTS::_0xE7282390542F570D(uParam0->f_10);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_6(var uParam0)
{
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		func_5(uParam0);
		return 0;
	}
	return 1;
}

int func_7()
{
	return 0;
}

int func_8(var uParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	if (func_9(uParam0, 32))
	{
		if ((MISC::GET_FRAME_COUNT() % 5) == 0 && func_34(Global_34, uParam0->f_6, 3f, 1, 1))
		{
			if (!func_35(uParam0))
			{
				func_19(*uParam0, uParam0->f_1);
				((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_2 = uParam0->f_1;
			}
		}
	}
	if (func_36(uParam0) < 10)
	{
		if (func_9(uParam0, 16))
		{
			if (!func_37(*uParam0, uParam0->f_1, 16))
			{
				if (func_38(uParam0->f_6, &(uParam0->f_26), &(uParam0->f_24), &(uParam0->f_25), func_9(uParam0, 1), 1073741824 /* Float: 2f */))
				{
					func_39(*uParam0, uParam0->f_1, 16);
				}
			}
		}
		if (func_40(*uParam0) && func_35(uParam0))
		{
			func_41(uParam0, 11);
			if (func_42(uParam0->f_14))
			{
				func_24(&(uParam0->f_14), 1, 1);
			}
			func_30();
		}
		else if (func_36(uParam0) <= 6 && func_36(uParam0) > 1)
		{
			if (func_37(*uParam0, uParam0->f_1, 16))
			{
				func_41(uParam0, 12);
			}
		}
	}
	bVar1 = (func_36(uParam0) <= 6 && !func_43(uParam0->f_14, 1));
	bVar2 = !func_9(uParam0, 32);
	if (func_44(func_9(uParam0, 2)))
	{
		if (func_9(uParam0, 2))
		{
			func_45(uParam0->f_14, uParam0->f_6);
		}
		else
		{
			func_46(&(uParam0->f_34), uParam0->f_6, bVar1, bVar2, 1);
		}
	}
	func_47(uParam0->f_14);
	func_48(uParam0->f_6, *uParam0, uParam0->f_1, 1092616192 /* Float: 10f */);
	switch (func_36(uParam0))
	{
		case 0:
			STREAMING::REQUEST_MODEL(uParam0->f_17, false);
			STREAMING::REQUEST_MODEL(uParam0->f_20, false);
			STREAMING::REQUEST_MODEL(uParam0->f_18, false);
			if (func_9(uParam0, 1))
			{
				STREAMING::REQUEST_MODEL(uParam0->f_19, false);
			}
			func_49(&(uParam0->f_34.f_7), uParam0->f_6, 1.5f, 1, 319, 0);
			if (func_9(uParam0, 32))
			{
				if (!func_50((*Global_1201108)[*uParam0 /*1909*/][uParam0->f_1 /*9*/], 16))
				{
					func_41(uParam0, 1);
				}
				else if (func_51(&(uParam0->f_11), uParam0->f_12, "PBL_LOOTED", uParam0->f_6, uParam0->f_26, uParam0->f_19, uParam0->f_24, uParam0->f_17, uParam0->f_25, uParam0->f_20, func_9(uParam0, 1)))
				{
					func_41(uParam0, 12);
				}
			}
			else if (func_50((*Global_1201108)[*uParam0 /*1909*/][uParam0->f_1 /*9*/], 16))
			{
				if (func_51(&(uParam0->f_11), uParam0->f_12, "PBL_LOOTED", uParam0->f_6, uParam0->f_26, uParam0->f_19, uParam0->f_24, uParam0->f_17, uParam0->f_25, uParam0->f_20, func_9(uParam0, 1)))
				{
					if (Global_1201108->f_13365 != uParam0->f_1)
					{
						func_41(uParam0, 12);
					}
					else
					{
						func_41(uParam0, 15);
					}
				}
			}
			else if (!func_22(uParam0->f_6))
			{
				func_41(uParam0, 15);
			}
			else if (!func_9(uParam0, 64))
			{
				func_41(uParam0, 1);
			}
			break;
		case 1:
			if ((STREAMING::HAS_MODEL_LOADED(uParam0->f_17) && STREAMING::HAS_MODEL_LOADED(uParam0->f_20)) && STREAMING::HAS_MODEL_LOADED(uParam0->f_18))
			{
				if (func_9(uParam0, 1))
				{
					if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_19))
					{
						return 0;
					}
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_26))
					{
						uParam0->f_26 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_19, uParam0->f_6, true, true, false, true);
					}
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_26))
					{
						return 0;
					}
					if (!MISC::GET_GROUND_Z_AND_NORMAL_FOR_3D_COORD(uParam0->f_6 + Vector(1f, 0f, 0f), &(uParam0->f_33), &(uParam0->f_30)))
					{
						return 0;
					}
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_26))
					{
						ENTITY::SET_ENTITY_ROTATION(uParam0->f_26, func_52(uParam0->f_30, 0), 2, true);
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_24))
				{
					uParam0->f_24 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_17, uParam0->f_6 + Vector(-10f, 0f, 0f), true, true, false, true);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_25))
				{
					uParam0->f_25 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_20, uParam0->f_6 + Vector(-20f, 0f, 0f), true, true, false, true);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_27))
				{
					uParam0->f_27 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_18, uParam0->f_6 + Vector(-15f, 0f, 0f), false, true, false, true);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_24))
				{
					return 0;
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_25))
				{
					return 0;
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_27))
				{
					return 0;
				}
				func_41(uParam0, 2);
			}
			break;
		case 2:
			if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_11))
			{
				uParam0->f_11 = ANIMSCENE::_CREATE_ANIM_SCENE(uParam0->f_12, 64, uParam0->f_13, true, true);
			}
			if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_11))
			{
				return 0;
			}
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_11);
			func_41(uParam0, 3);
			break;
		case 3:
			if (ANIMSCENE::_0x477122B8D05E7968(uParam0->f_11, 1, 0))
			{
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_11, uParam0->f_6, 0f, 0f, 0f, 2);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_11, "player", PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_11, "CHEST", uParam0->f_24, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_11, "LOOT", uParam0->f_27, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_11, "DRESSING", uParam0->f_25, 0);
				if (func_9(uParam0, 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_26))
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_11, "MOUND", uParam0->f_26, 0);
					}
				}
				func_41(uParam0, 4);
			}
			break;
		case 4:
			if (func_44(func_9(uParam0, 2)))
			{
				if (func_9(uParam0, 1))
				{
					func_53(uParam0->f_26, uParam0->f_26, 0);
					MAP::_0x7563CBCA99253D1A(uParam0->f_26, joaat("BLIP_MP_ROLE_COLLECTOR_ILO"));
					func_41(uParam0, 5);
				}
				else
				{
					func_41(uParam0, 5);
				}
			}
			break;
		case 5:
			if (func_54(uParam0, 1097859072 /* Float: 15f */))
			{
				if (!func_42(uParam0->f_14))
				{
					uParam0->f_14 = func_55("UC_CLT_DIG", joaat("INPUT_CONTEXT_X"), uParam0->f_6, 1070386381 /* Float: 1.6f */, 3, 1, 0, 4, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
				}
				func_41(uParam0, 6);
			}
			break;
		case 6:
			if (func_42(uParam0->f_14))
			{
				if (Global_1099294->f_331)
				{
					if (func_56(uParam0->f_14, 0))
					{
						func_57(uParam0->f_14, 0, 1, 1);
					}
				}
				else if (!func_56(uParam0->f_14, 0))
				{
					func_57(uParam0->f_14, 1, 1, 1);
				}
				if (!func_9(uParam0, 32))
				{
					func_58(uParam0->f_14, &(uParam0->f_34.f_6));
				}
				if (func_59(uParam0->f_14, 1))
				{
					if (func_37(*uParam0, uParam0->f_1, 32))
					{
						func_32(1);
						if (PED::IS_PED_ON_MOUNT(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
						{
							TASK::TASK_DISMOUNT_ANIMAL(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, 0, 0, 0, 0);
						}
						func_24(&(uParam0->f_14), 1, 1);
						func_60(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()));
						WEAPON::_0xFCCC886EDE3C63EC(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 2, 0);
						func_28(*uParam0, uParam0->f_1, 32);
						func_41(uParam0, 7);
					}
				}
				else if (func_35(uParam0))
				{
					if (func_61(uParam0->f_14, 1) > 0f)
					{
						func_63(func_62(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_6, 1));
					}
					else if (func_61(uParam0->f_14, 1) == 0f)
					{
						func_30();
					}
				}
			}
			break;
		case 7:
			if (((func_64(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, 1, 0) == joaat("WEAPON_UNARMED") && func_64(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1, 1, 0) == joaat("WEAPON_UNARMED")) && !PED::IS_PED_ON_MOUNT(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()))) && !PED::_0xA911EE21EDF69DAF(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
			{
				func_25(uParam0);
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_11, uParam0->f_6, 0f, 0f, func_65(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), true, false), uParam0->f_6, 1), 2);
				func_41(uParam0, 8);
			}
			break;
		case 8:
			func_66();
			TASK::TASK_ENTER_ANIM_SCENE(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_11, "player", uParam0->f_13, 1069379748, 1, 128, 20000, -1082130432);
			uParam0->f_29 = PED::_0x4C39C95AE5DB1329(VOLUME::_CREATE_VOLUME_CYLINDER(uParam0->f_6, 0f, 0f, 0f, 1f, 1f, 1f), 1, 16);
			func_41(uParam0, 9);
			break;
		case 9:
			if (ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_11, 0))
			{
				func_41(uParam0, 10);
			}
			break;
		case 10:
			if (ANIMSCENE::_0xD8254CB2C586412B(uParam0->f_11, 0) || !ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_11, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_27))
				{
					ENTITY::SET_ENTITY_VISIBLE(uParam0->f_27, false);
				}
				if (!func_67(uParam0))
				{
					return 0;
				}
				func_68(uParam0->f_9);
				func_69(func_9(uParam0, 1), func_9(uParam0, 2));
				func_32(0);
				func_33(&(uParam0->f_34));
				if (func_9(uParam0, 2))
				{
					func_26(uParam0->f_6);
				}
				if (func_9(uParam0, 16))
				{
					DECORATOR::DECOR_SET_BOOL(uParam0->f_24, "ChestDugUp", true);
					TASK::_0x188F8071F244B9B8(uParam0->f_24, 1);
					func_39(*uParam0, uParam0->f_1, 16);
				}
				func_68(uParam0->f_9);
				func_30();
				if (func_9(uParam0, 2) && func_9(uParam0, 32))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), joaat("WEAPON_KIT_METAL_DETECTOR"), false, 0, false, false);
				}
				func_41(uParam0, 15);
			}
			break;
		case 11:
			if (func_37(*uParam0, uParam0->f_1, 1))
			{
				if (func_70())
				{
					func_28(*uParam0, uParam0->f_1, 1);
					func_41(uParam0, 12);
				}
				else if (!func_40(*uParam0))
				{
					func_41(uParam0, 4);
					func_28(*uParam0, uParam0->f_1, 1);
				}
			}
			break;
		case 12:
			if (func_42(uParam0->f_14))
			{
				func_24(&(uParam0->f_14), 1, 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_27))
			{
				if (ANIMSCENE::_0x25557E324489393C(uParam0->f_11))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_11, "LOOT", uParam0->f_27);
				}
				OBJECT::DELETE_OBJECT(&(uParam0->f_27));
			}
			if (func_9(uParam0, 4))
			{
				iVar0 = func_71();
				if (!func_72(iVar0, 0))
				{
					return 0;
				}
				uParam0->f_5 = iVar0;
				uParam0->f_22 = func_73(uParam0->f_5);
				if (!func_9(uParam0, 8))
				{
					func_10(uParam0, 8);
				}
			}
			if (func_9(uParam0, 16))
			{
				uParam0->f_21 = func_74(uParam0->f_5);
				STREAMING::REQUEST_MODEL(uParam0->f_21, false);
			}
			func_28(*uParam0, uParam0->f_1, 1);
			func_41(uParam0, 13);
			break;
		case 13:
			if (!func_40(*uParam0))
			{
				if (STREAMING::HAS_MODEL_LOADED(uParam0->f_21))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28))
					{
						uParam0->f_28 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_21, uParam0->f_6 + Vector(0.1f, 0f, 0f), false, true, false, true);
					}
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28))
					{
						return 0;
					}
					MAP::_0x1726963E6049DB53(uParam0->f_28);
					func_41(uParam0, 14);
				}
			}
			break;
		case 14:
			if (!ENTITY::IS_ENTITY_VISIBLE(uParam0->f_28) || !ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(uParam0->f_28))
			{
				uParam0->f_28 = 0;
				func_41(uParam0, 13);
				return 0;
			}
			if (TASK::_0x841475AC96E794D1(TASK::_0xD04241BBF6D03A5E(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()))))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(TASK::_0xA8452DD321607029(TASK::_0xD04241BBF6D03A5E(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())), 1), uParam0->f_6, true) < 1.5f)
				{
					func_68(uParam0->f_9);
					Global_1201108->f_13365 = uParam0->f_1;
					func_41(uParam0, 15);
				}
			}
			break;
	}
	return 0;
}

bool func_9(var uParam0, int iParam1)
{
	return func_50(uParam0->f_15, iParam1);
}

void func_10(var uParam0, int iParam1)
{
	if (!func_50(uParam0->f_15, iParam1))
	{
		func_75(&(uParam0->f_15), iParam1);
	}
}

int func_11(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 1:
			iVar0 = joaat("MP005_P_DIRTPILE_HEN_B_BURIED");
			break;
		case 2:
			iVar0 = joaat("MP005_P_DIRTPILE_HEN_B_BURIED");
			break;
		case 3:
			iVar0 = joaat("MP005_P_DIRTPILE_HEN_B_BURIED");
			break;
		case 4:
			iVar0 = joaat("MP005_P_DIRTPILE_HEN_B_BURIED");
			break;
		case 5:
			iVar0 = joaat("MP005_P_DIRTPILE_HEN_B_BURIED");
			break;
		case 6:
			iVar0 = joaat("MP005_P_DIRTPILE_HEN_B_BURIED");
			break;
		case 7:
			iVar0 = joaat("MP005_P_DIRTPILE_HEN_B_BURIED");
			break;
		case 8:
			iVar0 = joaat("MP005_P_DIRTPILE_RIO_BURIED");
			break;
		case 9:
			iVar0 = joaat("MP005_P_DIRTPILE_RIO_BURIED");
			break;
		case 10:
			iVar0 = joaat("MP005_P_DIRTPILE_HEN_B_BURIED");
			break;
		case 11:
			iVar0 = joaat("MP005_P_DIRTPILE_HEN_B_BURIED");
			break;
		case 12:
			iVar0 = joaat("MP005_P_DIRTPILE_HEN_B_BURIED");
			break;
		case 13:
			iVar0 = joaat("MP005_P_DIRTPILE_HEN_B_BURIED");
			break;
		case 14:
			iVar0 = joaat("MP005_P_DIRTPILE_RIO_BURIED");
			break;
		case 15:
			iVar0 = joaat("MP005_P_DIRTPILE_HEN_B_BURIED");
			break;
		case 16:
			iVar0 = joaat("MP005_P_DIRTPILE_HEN_B_BURIED");
			break;
		case 17:
			iVar0 = joaat("MP005_P_DIRTPILE_HEN_B_BURIED");
			break;
		case 18:
			iVar0 = joaat("MP005_P_DIRTPILE_GEN_BURIED");
			break;
		case 19:
			iVar0 = joaat("MP005_P_DIRTPILE_HEN_B_BURIED");
			break;
		case 20:
			iVar0 = joaat("MP005_P_DIRTPILE_HEN_B_BURIED");
			break;
		case 21:
			iVar0 = joaat("MP005_P_DIRTPILE_BIG01_BURIED");
			break;
		case 22:
			iVar0 = joaat("MP005_P_DIRTPILE_HEN_B_BURIED");
			break;
		case 23:
			iVar0 = joaat("MP005_P_DIRTPILE_HEN_B_BURIED");
			break;
		case 24:
			iVar0 = joaat("MP005_P_DIRTPILE_HEN_B_BURIED");
			break;
		case 25:
			iVar0 = joaat("MP005_P_DIRTPILE_HEN_B_BURIED");
			break;
		case 26:
			iVar0 = joaat("MP005_P_DIRTPILE_BAY_BURIED");
			break;
		case 27:
			iVar0 = joaat("MP005_P_DIRTPILE_GEN_BURIED");
			break;
		case 28:
			iVar0 = joaat("MP005_P_DIRTPILE_BIG01_BURIED");
			break;
		case 29:
			iVar0 = joaat("MP005_P_DIRTPILE_SCA02_BURIED");
			break;
		case 30:
			iVar0 = joaat("MP005_P_DIRTPILE_CUM_BURIED");
			break;
		case 31:
			iVar0 = joaat("MP005_P_DIRTPILE_CUM_BURIED");
			break;
		case 32:
			iVar0 = joaat("MP005_P_DIRTPILE_GEN_BURIED");
			break;
		case 33:
			iVar0 = joaat("MP005_P_DIRTPILE_HEN_B_BURIED");
			break;
		case 34:
			iVar0 = joaat("MP005_P_DIRTPILE_GEN_BURIED");
			break;
		case 35:
			iVar0 = joaat("MP005_P_DIRTPILE_SCA02_BURIED");
			break;
		case 36:
			iVar0 = joaat("MP005_P_DIRTPILE_SCA01_BURIED");
			break;
		case 37:
			iVar0 = joaat("MP005_P_DIRTPILE_SCA03_BURIED");
			break;
		case 38:
			iVar0 = joaat("MP005_P_DIRTPILE_SCA03_BURIED");
			break;
		case 39:
			iVar0 = joaat("MP005_P_DIRTPILE_SCA02_BURIED");
			break;
		case 40:
			iVar0 = joaat("MP005_P_DIRTPILE_BAY_BURIED");
			break;
		case 41:
			iVar0 = joaat("MP005_P_DIRTPILE_SCA02_BURIED");
			break;
		case 42:
			iVar0 = joaat("MP005_P_DIRTPILE_GEN_BURIED");
			break;
		case 43:
			iVar0 = joaat("MP005_P_DIRTPILE_GEN_BURIED");
			break;
		case 44:
			iVar0 = joaat("MP005_P_DIRTPILE_BAY_BURIED");
			break;
		case 45:
			iVar0 = joaat("MP005_P_DIRTPILE_BAY_BURIED");
			break;
		case 46:
			iVar0 = joaat("MP005_P_DIRTPILE_GEN_BURIED");
			break;
		case 47:
			iVar0 = joaat("MP005_P_DIRTPILE_GEN_BURIED");
			break;
		case 48:
			iVar0 = joaat("MP005_P_DIRTPILE_HEN_B_BURIED");
			break;
		case 49:
			iVar0 = joaat("MP005_P_DIRTPILE_HEN_B_BURIED");
			break;
		case 50:
			iVar0 = joaat("MP005_P_DIRTPILE_BIG01_BURIED");
			break;
	}
	return iVar0;
}

int func_12(struct<2> Param0, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	iVar2 = Param0.f_1;
	if (TASK::_0x841475AC96E794D1(iVar2))
	{
		iVar1 = BUILTIN::ROUND(TASK::_0x6718F40313A2B5A6(iVar2));
		iVar0 = BUILTIN::ROUND(TASK::_0xB93EA7184BAA85C3(iVar2, 1));
		bVar3 = iVar0 == 99;
		if (func_9(uParam3, 4))
		{
			iVar1 = ((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_2;
		}
		else if (bVar3)
		{
			func_10(uParam3, 32);
		}
		((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_2 = iVar1;
	}
	switch (iVar1)
	{
		case 200:
			return 0;
		case 201:
			return 1;
		case 202:
			return 2;
		case 203:
			return 3;
		case 204:
			return 4;
		case 205:
			return 5;
		case 206:
			return 6;
		case 207:
			return 7;
		case 208:
			return 8;
		case 209:
			return 9;
		case 210:
			return 10;
		case 211:
			return 11;
		case 212:
			return 12;
		case 213:
			return 13;
		case 214:
			return 14;
		case 215:
			return 15;
		case 216:
			return 16;
		case 217:
			return 17;
		case 218:
			return 18;
		case 219:
			return 19;
		case 220:
			return 20;
		case 221:
			return 21;
		case 222:
			return 22;
		case 223:
			return 23;
		case 224:
			return 24;
		case 225:
			return 25;
		case 226:
			return 26;
		case 227:
			return 27;
		case 228:
			return 28;
		case 229:
			return 29;
		case 4:
			return 30;
		case 230:
			return 31;
		case 5:
			return 32;
		case 231:
			return 33;
		case 9:
			return 34;
		case 232:
			return 35;
		case 10:
			return 36;
		case 11:
			return 37;
		case 233:
			return 38;
		case 6:
			return 39;
		case 7:
			return 40;
		case 8:
			return 41;
		case 1:
			return 42;
		case 2:
			return 43;
		case 3:
			return 44;
		case 12:
			return 45;
		case 13:
			return 46;
		case 14:
			return 47;
		case 15:
			return 48;
		case 16:
			return 49;
		case 17:
			return 50;
		case 18:
			return 51;
		case 19:
			return 52;
		case 20:
			return 53;
		case 21:
			return 54;
		case 22:
			return 55;
		default:
			break;
	}
	return 0;
}

int func_13(var uParam0)
{
	int iVar0;

	switch (uParam0->f_1)
	{
		case 42:
			iVar0 = joaat("MP005_P_DIRTPILE_BIG03_BURIED");
			break;
		case 43:
			iVar0 = joaat("MP005_P_DIRTPILE_CUM_BURIED");
			break;
		case 44:
			iVar0 = joaat("MP005_P_DIRTPILE_GEN_BURIED");
			break;
		case 30:
			iVar0 = joaat("MP005_P_DIRTPILE_BIG01_BURIED");
			break;
		case 32:
			iVar0 = joaat("MP005_P_DIRTPILE_SCA03_BURIED");
			break;
		case 39:
			iVar0 = joaat("MP005_P_DIRTPILE_HEN_B_BURIED");
			break;
		case 40:
			iVar0 = joaat("MP005_P_DIRTPILE_BAY_BURIED");
			break;
		case 41:
			iVar0 = joaat("MP005_P_DIRTPILE_ROA_BURIED");
			break;
		case 34:
			iVar0 = joaat("MP005_P_DIRTPILE_ROA_BURIED");
			break;
		case 36:
			iVar0 = joaat("MP005_P_DIRTPILE_BAY_BURIED");
			break;
		case 37:
			iVar0 = joaat("MP005_P_DIRTPILE_HEN_B_BURIED");
			break;
	}
	return iVar0;
}

void func_14(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 30:
		case 32:
		case 34:
		case 36:
		case 37:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
			func_10(uParam0, 1);
			break;
		default:
			func_10(uParam0, 2);
			break;
	}
}

int func_15()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 40000);
	if (iVar0 > 30000)
	{
		return joaat("MP005_P_DRESSINGLBMHAY04X");
	}
	else if (iVar0 > 20000)
	{
		return joaat("MP005_P_DRESSINGLBMHAY03X");
	}
	else if (iVar0 > 10000)
	{
		return joaat("MP005_P_DRESSINGLBMHAY02X");
	}
	return joaat("MP005_P_DRESSINGLBMHAY01X");
}

int func_16(var uParam0)
{
	int iVar0;

	switch (uParam0->f_1)
	{
		case 0:
		case 1:
		case 2:
			iVar0 = -1132845243;
			break;
		case 3:
		case 4:
		case 5:
			iVar0 = 1606281828;
			break;
		case 6:
		case 7:
		case 8:
			iVar0 = 530382704;
			break;
		case 9:
		case 10:
		case 11:
			iVar0 = -1519010704;
			break;
		case 12:
		case 13:
		case 14:
			iVar0 = 520232109;
			break;
		case 15:
		case 16:
		case 17:
			iVar0 = -364070233;
			break;
		case 18:
		case 19:
		case 20:
			iVar0 = -1296260337;
			break;
		case 21:
		case 22:
		case 23:
			iVar0 = 127681874;
			break;
		case 24:
		case 25:
		case 26:
			iVar0 = 1290286961;
			break;
		case 27:
		case 28:
		case 29:
			iVar0 = 1628530735;
			break;
		case 30:
		case 31:
		case 32:
		case 48:
		case 49:
			iVar0 = joaat("COLLECTIBLE_HRLM_HAIRPIN_EBONY");
			break;
		case 33:
		case 34:
		case 35:
		case 53:
			iVar0 = joaat("COLLECTIBLE_HRLM_HAIRPIN_IVORY");
			break;
		case 36:
		case 37:
		case 38:
		case 54:
		case 55:
			iVar0 = joaat("COLLECTIBLE_HRLM_HAIRPIN_JADE");
			break;
		case 39:
		case 40:
		case 41:
		case 50:
		case 51:
		case 52:
			iVar0 = joaat("COLLECTIBLE_HRLM_HAIRPIN_METAL");
			break;
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			iVar0 = joaat("COLLECTIBLE_HRLM_HAIRPIN_WOODEN");
			break;
	}
	return iVar0;
}

int func_17(int iParam0)
{
	switch (iParam0)
	{
		case joaat("COLLECTIBLE_ARROWHEAD_AGATE"):
			return joaat("PROVISION_ARROWHEAD_AGATE");
		case joaat("COLLECTIBLE_ARROWHEAD_BONE"):
			return joaat("PROVISION_ARROWHEAD_BONE");
		case joaat("COLLECTIBLE_ARROWHEAD_CHIPPED"):
			return joaat("PROVISION_ARROWHEAD_CHIPPED");
		case joaat("COLLECTIBLE_ARROWHEAD_CRUDE"):
			return joaat("PROVISION_ARROWHEAD_CRUDE");
		case joaat("COLLECTIBLE_ARROWHEAD_FELDSPAR"):
			return joaat("PROVISION_ARROWHEAD_FELDSPAR");
		case joaat("COLLECTIBLE_ARROWHEAD_FLINT"):
			return joaat("PROVISION_ARROWHEAD_FLINT");
		case joaat("COLLECTIBLE_ARROWHEAD_OBSIDIAN"):
			return joaat("PROVISION_ARROWHEAD_OBSIDIAN");
		case joaat("COLLECTIBLE_ARROWHEAD_QUARTZ"):
			return joaat("PROVISION_ARROWHEAD_QUARTZ");
		case joaat("COLLECTIBLE_ARROWHEAD_RAW"):
			return joaat("PROVISION_ARROWHEAD_RAW");
		case joaat("COLLECTIBLE_ARROWHEAD_ROUGH"):
			return joaat("PROVISION_ARROWHEAD_ROUGH");
		case joaat("COLLECTIBLE_ARROWHEAD_SLATE"):
			return joaat("PROVISION_ARROWHEAD_SLATE");
		case joaat("COLLECTIBLE_ARROWHEAD_SPLINTERED"):
			return joaat("PROVISION_ARROWHEAD_SPLINTERED");
		case -1132845243:
			return joaat("PROVISION_HRLM_BRUSH_BOAR");
		case 1606281828:
			return joaat("PROVISION_HRLM_BRUSH_EBONY");
		case 530382704:
			return joaat("PROVISION_HRLM_BRUSH_GOATHAIR");
		case -1519010704:
			return joaat("PROVISION_HRLM_BRUSH_HORSEHAIR");
		case 520232109:
			return joaat("PROVISION_HRLM_BRUSH_ROSEWOOD");
		case -364070233:
			return joaat("PROVISION_HRLM_BRUSH_ROSEWOOD_NG");
		case -1296260337:
			return joaat("PROVISION_HRLM_COMB_BOXWOOD");
		case 127681874:
			return joaat("PROVISION_HRLM_COMB_CHERRYWOOD");
		case 1290286961:
			return joaat("PROVISION_HRLM_COMB_IVORY");
		case 1628530735:
			return joaat("PROVISION_HRLM_COMB_TORTOISESHELL");
		case joaat("COLLECTIBLE_HRLM_HAIRPIN_EBONY"):
			return joaat("PROVISION_HRLM_HAIRPIN_EBONY");
		case joaat("COLLECTIBLE_HRLM_HAIRPIN_IVORY"):
			return joaat("PROVISION_HRLM_HAIRPIN_IVORY");
		case joaat("COLLECTIBLE_HRLM_HAIRPIN_JADE"):
			return joaat("PROVISION_HRLM_HAIRPIN_JADE");
		case joaat("COLLECTIBLE_HRLM_HAIRPIN_METAL"):
			return joaat("PROVISION_HRLM_HAIRPIN_METAL");
		case joaat("COLLECTIBLE_HRLM_HAIRPIN_WOODEN"):
			return joaat("PROVISION_HRLM_HAIRPIN_WOODEN");
		case joaat("COLLECTIBLE_JEWELRY_AMETHYST_NECKLACE"):
			return joaat("PROVISION_JEWELRY_AMETHYST_NECKLACE");
		case joaat("COLLECTIBLE_JEWELRY_BLCK_PEARL_NECKLACE"):
			return joaat("PROVISION_JEWELRY_BLCK_PEARL_NECKLACE");
		case joaat("COLLECTIBLE_JEWELRY_CARVED_BRACELET"):
			return joaat("PROVISION_JEWELRY_CARVED_BRACELET");
		case joaat("COLLECTIBLE_JEWELRY_CORAL_DNGL_EARRING"):
			return joaat("PROVISION_JEWELRY_CORAL_DNGL_EARRING");
		case joaat("COLLECTIBLE_JEWELRY_CORAL_RING"):
			return joaat("PROVISION_JEWELRY_CORAL_RING");
		case joaat("COLLECTIBLE_JEWELRY_DMND_BNGLE_BRACELET"):
			return joaat("PROVISION_JEWELRY_DMND_BNGLE_BRACELET");
		case joaat("COLLECTIBLE_JEWELRY_DMND_PENDT_EARRING"):
			return joaat("PROVISION_JEWELRY_DMND_PENDT_EARRING");
		case joaat("COLLECTIBLE_JEWELRY_DROP_EARRING"):
			return joaat("PROVISION_JEWELRY_DROP_EARRING");
		case joaat("COLLECTIBLE_JEWELRY_ELK_TOOTH_EARRING"):
			return joaat("PROVISION_JEWELRY_ELK_TOOTH_EARRING");
		case joaat("COLLECTIBLE_JEWELRY_EMERALD_EARRING"):
			return joaat("PROVISION_JEWELRY_EMERALD_EARRING");
		case joaat("COLLECTIBLE_JEWELRY_EMERALD_RING"):
			return joaat("PROVISION_JEWELRY_EMERALD_RING");
		case joaat("COLLECTIBLE_JEWELRY_FRENCH_DMND_RING"):
			return joaat("PROVISION_JEWELRY_FRENCH_DMND_RING");
		case joaat("COLLECTIBLE_JEWELRY_GLD_BNGLE_BRACELET"):
			return joaat("PROVISION_JEWELRY_GLD_BNGLE_BRACELET");
		case joaat("COLLECTIBLE_JEWELRY_GLD_CROSS_NECKLACE"):
			return joaat("PROVISION_JEWELRY_GLD_CROSS_NECKLACE");
		case joaat("COLLECTIBLE_JEWELRY_GLD_PEARL_NECKLACE"):
			return joaat("PROVISION_JEWELRY_GLD_PEARL_NECKLACE");
		case joaat("COLLECTIBLE_JEWELRY_GLD_PENDT_NECKLACE"):
			return joaat("PROVISION_JEWELRY_GLD_PENDT_NECKLACE");
		case joaat("COLLECTIBLE_JEWELRY_GRNET_BRACELET"):
			return joaat("PROVISION_JEWELRY_GRNET_BRACELET");
		case joaat("COLLECTIBLE_JEWELRY_GRNET_POST_EARRING"):
			return joaat("PROVISION_JEWELRY_GRNET_POST_EARRING");
		case joaat("COLLECTIBLE_JEWELRY_MOON_RING"):
			return joaat("PROVISION_JEWELRY_MOON_RING");
		case joaat("COLLECTIBLE_JEWELRY_MTHR_PEARL_NECKLACE"):
			return joaat("PROVISION_JEWELRY_MTHR_PEARL_NECKLACE");
		case joaat("COLLECTIBLE_JEWELRY_ONYX_RING"):
			return joaat("PROVISION_JEWELRY_ONYX_RING");
		case joaat("COLLECTIBLE_JEWELRY_PEARL_BRACELET"):
			return joaat("PROVISION_JEWELRY_PEARL_BRACELET");
		case joaat("COLLECTIBLE_JEWELRY_PEARL_EARRING"):
			return joaat("PROVISION_JEWELRY_PEARL_EARRING");
		case joaat("COLLECTIBLE_JEWELRY_PEARL_RING"):
			return joaat("PROVISION_JEWELRY_PEARL_RING");
		case joaat("COLLECTIBLE_JEWELRY_PERS_TURQ_RING"):
			return joaat("PROVISION_JEWELRY_PERS_TURQ_RING");
		case joaat("COLLECTIBLE_JEWELRY_PORCELAIN_NECKLACE"):
			return joaat("PROVISION_JEWELRY_PORCELAIN_NECKLACE");
		case joaat("COLLECTIBLE_JEWELRY_QN_DMND_EARRING"):
			return joaat("PROVISION_JEWELRY_QN_DMND_EARRING");
		case joaat("COLLECTIBLE_JEWELRY_RUDY_DNGL_EARRING"):
			return joaat("PROVISION_JEWELRY_RUDY_DNGL_EARRING");
		case joaat("COLLECTIBLE_JEWELRY_SLVR_PEARL_NECKLACE"):
			return joaat("PROVISION_JEWELRY_SLVR_PEARL_NECKLACE");
		case joaat("COLLECTIBLE_JEWELRY_SPHR_BNGLE_BRACELET"):
			return joaat("PROVISION_JEWELRY_SPHR_BNGLE_BRACELET");
		case joaat("COLLECTIBLE_JEWELRY_SPHR_BRACELET"):
			return joaat("PROVISION_JEWELRY_SPHR_BRACELET");
		case joaat("COLLECTIBLE_JEWELRY_TOPAZ_NECKLACE"):
			return joaat("PROVISION_JEWELRY_TOPAZ_NECKLACE");
		case joaat("COLLECTIBLE_JEWELRY_TOPAZ_RING"):
			return joaat("PROVISION_JEWELRY_TOPAZ_RING");
		case joaat("COLLECTIBLE_JEWELRY_TURQ_STUD_EARRING"):
			return joaat("PROVISION_JEWELRY_TURQ_STUD_EARRING");
		case joaat("COLLECTIBLE_JEWELRY_TURQUOISE_BRACELET"):
			return joaat("PROVISION_JEWELRY_TURQUOISE_BRACELET");
		case joaat("COLLECTIBLE_JEWELRY_TURQUOISE_RING"):
			return joaat("PROVISION_JEWELRY_TURQUOISE_RING");
		case joaat("COLLECTIBLE_JEWELRY_WHT_DMND_EARRING"):
			return joaat("PROVISION_JEWELRY_WHT_DMND_EARRING");
		case joaat("COLLECTIBLE_JEWELRY_WHTGLD_DMND_RING"):
			return joaat("PROVISION_JEWELRY_WHTGLD_DMND_RING");
		case joaat("COLLECTIBLE_JEWELRY_YLWGLD_DMND_RING"):
			return joaat("PROVISION_JEWELRY_YLWGLD_DMND_RING");
		case joaat("COLLECTIBLE_COIN_1700_NY_TKN"):
			return joaat("PROVISION_COIN_1700_NY_TKN");
		case joaat("COLLECTIBLE_COIN_1787_CENT_TKN"):
			return joaat("PROVISION_COIN_1787_CENT_TKN");
		case joaat("COLLECTIBLE_COIN_1789_PNY"):
			return joaat("PROVISION_COIN_1789_PNY");
		case joaat("COLLECTIBLE_COIN_1792_LIB_QTR"):
			return joaat("PROVISION_COIN_1792_LIB_QTR");
		case joaat("COLLECTIBLE_COIN_1792_NICKEL"):
			return joaat("PROVISION_COIN_1792_NICKEL");
		case joaat("COLLECTIBLE_COIN_1792_QTR"):
			return joaat("PROVISION_COIN_1792_LIB_QTR");
		case joaat("COLLECTIBLE_COIN_1794_SLV_DLR"):
			return joaat("PROVISION_COIN_1794_SLV_DLR");
		case joaat("COLLECTIBLE_COIN_1795_HLF_EAG"):
			return joaat("PROVISION_COIN_1795_HLF_EAG");
		case joaat("COLLECTIBLE_COIN_1796_HLF_PNY"):
			return joaat("PROVISION_COIN_1796_HLF_PNY");
		case joaat("COLLECTIBLE_COIN_1797_GLD_EAG"):
			return joaat("PROVISION_COIN_1797_GLD_EAG");
		case joaat("COLLECTIBLE_COIN_1798_SLV_DLR"):
			return joaat("PROVISION_COIN_1798_SLV_DLR");
		case joaat("COLLECTIBLE_COIN_1800_FIVE_DLR"):
			return joaat("PROVISION_COIN_1800_FIVE_DLR");
		case joaat("COLLECTIBLE_COIN_1800_GLD_DLR"):
			return joaat("PROVISION_COIN_1800_GLD_DLR");
		case joaat("COLLECTIBLE_COIN_1800_GLD_QTR"):
			return joaat("PROVISION_COIN_1800_GLD_QTR");
		case joaat("COLLECTIBLE_COIN_1800_HLF_DIME"):
			return joaat("PROVISION_COIN_1800_HLF_DIME");
		case 521036731:
			return joaat("PROVISION_CONDOR_EGG");
		case 1510925660:
			return joaat("PROVISION_DUCK_EGG");
		case -1667316569:
			return joaat("PROVISION_EAGLE_EGG");
		case 875971115:
			return joaat("PROVISION_EGRET_EGG");
		case -1390165137:
			return joaat("PROVISION_GOOSE_EGG");
		case 512666633:
			return joaat("PROVISION_HAWK_EGG");
		case 1056235591:
			return joaat("PROVISION_HERON_EGG");
		case 1824947548:
			return joaat("PROVISION_LOON_EGG");
		case -297415734:
			return joaat("PROVISION_SPOONBILL_EGG");
		case -744964659:
			return joaat("PROVISION_VULTURE_EGG");
		default:
			break;
	}
	return 0;
}

void func_18(var uParam0, vector3 vParam1)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_8))
	{
		uParam0->f_8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, 0f, 0f, 0f, 2f, 2f, 2f, "colleactable restriction volume");
		POPULATION::_0xB56D41A694E42E86(uParam0->f_8, 6, 0, 0, -1, -1, 0);
	}
}

void func_19(var uParam0, var uParam1)
{
	((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_1 = uParam0;
}

int func_20(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 4;
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0);
	if (bParam0)
	{
		return joaat("P_STRONGBOX_SNOW_01X");
	}
	switch (iVar1)
	{
		case 0:
			return joaat("P_STRONGBOX_MUDDY_01X");
		case 1:
			return joaat("P_STRONGBOX_SNOW_01X");
		case 2:
			return joaat("P_STRONGBOX_WATERLOGGED_01X");
		case 3:
			return joaat("P_STRONGBOX_RUSTED_01X");
		default:
			break;
	}
	return joaat("P_STRONGBOX_MUDDY_01X");
}

int func_21()
{
	int iVar0;
	int iVar1;

	iVar0 = 6;
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0);
	switch (iVar1)
	{
		case 0:
			return joaat("S_JEWLERYBOX_SM_FANCY01X");
		case 1:
			return joaat("S_JEWLERYBOX_SM_FANCY02X");
		case 2:
			return joaat("S_JEWLERYBOX_SM_PLAIN01X");
		case 3:
			return joaat("S_JEWLERYBOX_SM_PLAIN02X");
		case 4:
			return joaat("S_JEWLERYBOX_SM_POOR01X");
		case 5:
			return joaat("S_JEWLERYBOX_SM_POOR02X");
		default:
			break;
	}
	return joaat("S_JEWLERYBOX_SM_POOR01X");
}

bool func_22(vector3 vParam0)
{
	return !_NAMESPACE49::_0xB6E1A185C2B9319A(vParam0);
}

int func_23()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar2 = PLAYER::PLAYER_ID();
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (!NETWORK::_0x255A5EF65EDA9167(iVar1))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
		}
		else
		{
			iVar3 = iVar1;
			if (iVar3 != iVar2)
			{
				if (((*Global_1200815)[iVar3 /*9*/])->f_1 == ((*Global_1200815)[iVar2 /*9*/])->f_1)
				{
					if (((*Global_1200815)[iVar3 /*9*/])->f_2 == ((*Global_1200815)[iVar2 /*9*/])->f_2)
					{
						if (((*Global_1200815)[iVar3 /*9*/])->f_6)
						{
							return 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_24(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_42(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_76(*uParam0);
	if (((*Global_1949759)[iVar0 /*23*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_77(iVar0);
	*uParam0 = 0;
}

void func_25(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_26))
	{
		func_78(uParam0->f_26, uParam0->f_26, 0);
	}
}

void func_26(vector3 vParam0)
{
	if (func_79(*Global_1201104, vParam0))
	{
		*Global_1201104 = { 0f, 0f, 0f };
	}
}

void func_27(var uParam0, var uParam1, bool bParam2)
{
	var uVar0;
	struct<7> Var1;
	struct<19> Var8;

	if (!NETWORK::HAS_NETWORK_TIME_STARTED())
	{
		return;
	}
	uVar0 = func_80(1, 8);
	SCRIPTS::_0xD426E2E3288469D6(&uVar0, PLAYER::PLAYER_ID());
	Var1.f_4 = 1;
	Var1 = 40;
	Var1.f_4 = bParam2;
	Var1.f_5 = uParam0;
	Var1.f_6 = uParam1;
	Var1.f_1 = PLAYER::GET_PLAYER_INDEX();
	if (bParam2)
	{
		Var8.f_12 = -1;
		Var8.f_12.f_1 = -1;
		Var8.f_14 = 255;
		Var8.f_15 = 255;
		Var8.f_14 = &Global_1275573->f_154[&Global_1275573];
		Var8 = 0;
		Var8.f_1 = PLAYER::GET_PLAYER_INDEX();
		Var8.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		Var8.f_4 = 103;
		func_82(Var8, func_81(Global_35, 0f, 0f, 0f, 300f, 300f, 300f, -432403087, 0, 8), 0, 0);
	}
	func_83(&Var1, &uVar0);
}

void func_28(int iParam0, int iParam1, int iParam2)
{
	func_84((*(*Global_1201108)[iParam0 /*1909*/])[iParam1 /*9*/], iParam2);
}

void func_29()
{
	((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_1 = -1;
	((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_2 = -1;
	((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_8 = -1f;
	((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_4 = 0;
}

void func_30()
{
	if (((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_4)
	{
		((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_4 = 0;
		((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_5 = 0;
		((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_8 = -1f;
	}
}

void func_31(var uParam0)
{
	func_85(uParam0);
	func_86(&(uParam0->f_7), 1);
}

void func_32(bool bParam0)
{
	if (bParam0)
	{
		func_87(0, 6);
	}
	else
	{
		func_88(0, 6, 0);
	}
}

void func_33(var uParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_8))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_8);
	}
}

int func_34(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_89(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return 1;
	}
	return 0;
}

bool func_35(var uParam0)
{
	if (!func_9(uParam0, 32))
	{
		return ((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_1 == *uParam0;
	}
	return (((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_1 == *uParam0 && ((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_2 == uParam0->f_1);
}

int func_36(var uParam0)
{
	return uParam0->f_2;
}

bool func_37(int iParam0, int iParam1, int iParam2)
{
	return func_50((*Global_1201108)[iParam0 /*1909*/][iParam1 /*9*/], iParam2);
}

int func_38(vector3 vParam0, var uParam3, bool bParam4, int iParam5, bool bParam6, int iParam7)
{
	var uVar0[1];
	var uVar2[1];
	var uVar4[1];
	int iVar6[4];
	int iVar11[4];
	int iVar16[30];

	iVar6[0] = joaat("P_STRONGBOX_MUDDY_01X");
	iVar6[1] = joaat("P_STRONGBOX_SNOW_01X");
	iVar6[2] = joaat("P_STRONGBOX_WATERLOGGED_01X");
	iVar6[3] = joaat("P_STRONGBOX_RUSTED_01X");
	iVar11[0] = joaat("MP005_P_DRESSINGLBMHAY04X");
	iVar11[1] = joaat("MP005_P_DRESSINGLBMHAY03X");
	iVar11[2] = joaat("MP005_P_DRESSINGLBMHAY02X");
	iVar11[3] = joaat("MP005_P_DRESSINGLBMHAY01X");
	if (bParam6)
	{
		iVar16[0] = joaat("MP005_P_DIRTPILE_HEN_B_BURIED");
		iVar16[1] = joaat("MP005_P_DIRTPILE_GEN_BURIED");
		iVar16[2] = joaat("MP005_P_DIRTPILE_SCA03_BURIED");
		iVar16[3] = joaat("MP005_P_DIRTPILE_BAY_BURIED");
		iVar16[4] = joaat("MP005_P_DIRTPILE_BAY_UNBURIED");
		iVar16[5] = joaat("MP005_P_DIRTPILE_BIG01_BURIED");
		iVar16[6] = joaat("MP005_P_DIRTPILE_BIG01_UNBURIED");
		iVar16[7] = joaat("MP005_P_DIRTPILE_BIG02_MINE_BURIED");
		iVar16[8] = joaat("MP005_P_DIRTPILE_BIG02_MINE_UNBURIED");
		iVar16[9] = joaat("MP005_P_DIRTPILE_BIG03_BURIED");
		iVar16[10] = joaat("MP005_P_DIRTPILE_BIG03_UNBURIED");
		iVar16[11] = joaat("MP005_P_DIRTPILE_CUM_BURIED");
		iVar16[12] = joaat("MP005_P_DIRTPILE_CUM_UNBURIED");
		iVar16[13] = 369612903;
		iVar16[14] = joaat("MP005_P_DIRTPILE_GRI_MINES_UNBURIED");
		iVar16[15] = joaat("MP005_P_DIRTPILE_HEA_BURIED");
		iVar16[16] = joaat("MP005_P_DIRTPILE_HEA_UNBURIED");
		iVar16[17] = joaat("MP005_P_DIRTPILE_HEN_BURIED");
		iVar16[18] = joaat("MP005_P_DIRTPILE_HEN_UNBURIED");
		iVar16[19] = joaat("MP005_P_DIRTPILE_RIO_BURIED");
		iVar16[20] = joaat("MP005_P_DIRTPILE_RIO_UNBURIED");
		iVar16[21] = joaat("MP005_P_DIRTPILE_ROA_BURIED");
		iVar16[22] = joaat("MP005_P_DIRTPILE_ROA_UNBURIED");
		iVar16[23] = joaat("MP005_P_DIRTPILE_SCA01_BURIED");
		iVar16[24] = joaat("MP005_P_DIRTPILE_SCA01_UNBURIED");
		iVar16[25] = joaat("MP005_P_DIRTPILE_SCA02_BURIED");
		iVar16[26] = joaat("MP005_P_DIRTPILE_SCA02_UNBURIED");
		iVar16[27] = joaat("MP005_P_DIRTPILE_SHOVEL01X");
		iVar16[28] = joaat("MP005_P_DIRTPILE_TALL_BURIED");
		iVar16[29] = joaat("MP005_P_DIRTPILE_TALL_UNBURIED");
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam3))
		{
			if (func_90(&uVar0, &iVar16, 1, vParam0, iParam7) > 0)
			{
				*uParam3 = &uVar0[0];
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam3))
		{
			return 0;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam5))
	{
		if (func_90(&uVar4, &iVar11, 1, vParam0, iParam7) > 0)
		{
			*iParam5 = &uVar4[0];
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam5))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*bParam4))
	{
		if (func_90(&uVar2, &iVar6, 1, vParam0, iParam7) > 0)
		{
			if (DECORATOR::DECOR_EXIST_ON(&(uVar2[0]), "ChestDugUp"))
			{
				*bParam4 = &uVar2[0];
				return 1;
			}
		}
	}
	else if (func_90(&uVar2, &iVar6, 1, vParam0, iParam7) > 0)
	{
		if (DECORATOR::DECOR_EXIST_ON(&(uVar2[0]), "ChestDugUp"))
		{
			*bParam4 = &uVar2[0];
			return 1;
		}
	}
	return 0;
}

void func_39(int iParam0, int iParam1, int iParam2)
{
	func_75((*(*Global_1201108)[iParam0 /*1909*/])[iParam1 /*9*/], iParam2);
}

int func_40(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	fVar2 = -1f;
	iVar4 = PLAYER::PLAYER_ID();
	if (((*Global_1200815)[iVar4 /*9*/])->f_1 != iParam0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (!NETWORK::_0x255A5EF65EDA9167(iVar1))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
		}
		else
		{
			iVar5 = iVar1;
			if (((*Global_1200815)[iVar5 /*9*/])->f_1 == ((*Global_1200815)[iVar4 /*9*/])->f_1)
			{
				if (((*Global_1200815)[iVar5 /*9*/])->f_2 == ((*Global_1200815)[iVar4 /*9*/])->f_2)
				{
					if (((*Global_1200815)[iVar5 /*9*/])->f_4)
					{
						if (fVar2 == -1f || fVar2 >= ((*Global_1200815)[iVar5 /*9*/])->f_8)
						{
							fVar2 = ((*Global_1200815)[iVar5 /*9*/])->f_8;
							iVar3 = iVar5;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > 0f)
	{
		if (&Global_1275573->f_154[&Global_1275573] != &Global_1275573->f_154[iVar3])
		{
			if (!func_50((*Global_1201108)[((*Global_1200815)[iVar4 /*9*/])->f_1 /*1909*/][((*Global_1200815)[iVar4 /*9*/])->f_2 /*9*/], 1))
			{
				func_75((*(*Global_1201108)[((*Global_1200815)[iVar4 /*9*/])->f_1 /*1909*/])[((*Global_1200815)[iVar4 /*9*/])->f_2 /*9*/], 1);
			}
			return 1;
		}
		if (!func_50((*Global_1201108)[((*Global_1200815)[iVar4 /*9*/])->f_1 /*1909*/][((*Global_1200815)[iVar4 /*9*/])->f_2 /*9*/], 32))
		{
			func_75((*(*Global_1201108)[((*Global_1200815)[iVar4 /*9*/])->f_1 /*1909*/])[((*Global_1200815)[iVar4 /*9*/])->f_2 /*9*/], 32);
		}
	}
	return 0;
}

void func_41(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
}

bool func_42(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 60)
	{
		return false;
	}
	if (((*Global_1949759)[iParam0 /*23*/])->f_1 & 2 == 0)
	{
		return false;
	}
	return HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iParam0 /*23*/])->f_3);
}

bool func_43(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_42(iParam0))
	{
		return false;
	}
	iVar0 = func_76(iParam0);
	return HUD::_UIPROMPT_IS_ACTIVE(((*Global_1949759)[iVar0 /*23*/])->f_3);
}

int func_44(bool bParam0)
{
	if (func_91(joaat("KIT_COLLECTOR_SPADE"), 1))
	{
		if (bParam0)
		{
			if (func_91(joaat("WEAPON_KIT_METAL_DETECTOR"), 1))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_45(var uParam0, vector3 vParam1)
{
	if (!func_22(vParam1))
	{
		func_26(vParam1);
		return;
	}
	if (func_92(*Global_1201104))
	{
		*Global_1201104 = { vParam1 };
	}
	else if (!func_79(*Global_1201104, vParam1))
	{
		if (BUILTIN::VDIST2(Global_35, vParam1) < BUILTIN::VDIST2(Global_35, *Global_1201104))
		{
			*Global_1201104 = { vParam1 };
		}
	}
}

void func_46(var uParam0, vector3 vParam1, bool bParam4, bool bParam5, int iParam6)
{
	bool bVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;

	if (!func_91(joaat("KIT_COLLECTORS_BAG"), 1))
	{
		return;
	}
	if (func_93(0))
	{
		return;
	}
	if (func_94())
	{
		return;
	}
	if (&Global_1048576)
	{
		return;
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		return;
	}
	if (TASK::_0xEC7E480FF8BD0BED(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
	{
		return;
	}
	if (!bParam4 && uParam0->f_1 == 0)
	{
		return;
	}
	if (!func_92(*Global_1201104) && MISC::GET_DISTANCE_BETWEEN_COORDS(*Global_1201104, vParam1, true) <= 5f)
	{
		bVar0 = true;
	}
	if (bVar0 && uParam0->f_1 == 0)
	{
		return;
	}
	fVar1 = func_62(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), vParam1, 1);
	fVar2 = 10f;
	fVar2 = (fVar2 * (1f + func_95()));
	switch (uParam0->f_1)
	{
		case 0:
			if (fVar1 < fVar2)
			{
				if (bParam5)
				{
					if (AUDIO::_0xD9130842D7226045("RDRO_Collectible_Sounds_Travelling_Saleswoman", 0))
					{
						uParam0->f_5 = AUDIO::GET_SOUND_ID();
						if (func_64(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, 1, 0) != joaat("WEAPON_KIT_METAL_DETECTOR"))
						{
							AUDIO::_0xDCF5BA95BBF0FABA(uParam0->f_5, "collectible_lure", vParam1, "RDRO_Collectible_Sounds_Travelling_Saleswoman", 0, 0, iParam6);
						}
						func_96(uParam0, 1);
					}
				}
				else
				{
					func_96(uParam0, 1);
				}
			}
			break;
		case 1:
			iVar3 = BUILTIN::FLOOR((500f * ((fVar2 - fVar1) / fVar2)));
			iVar4 = BUILTIN::FLOOR((256f * ((fVar2 - fVar1) / fVar2)));
			if (iVar3 > 9999)
			{
				iVar3 = 9999;
			}
			PAD::SET_PAD_SHAKE(0, iVar3, iVar4);
			func_97(&(uParam0->f_2));
			func_96(uParam0, 2);
			break;
		case 2:
			if ((fVar1 >= (fVar2 + 5f) || !bParam4) || bVar0)
			{
				if (bParam5)
				{
					func_85(uParam0);
				}
				func_96(uParam0, 0);
			}
			else if (func_98(&(uParam0->f_2)) >= 2f)
			{
				func_96(uParam0, 1);
			}
			break;
	}
}

void func_47(int iParam0)
{
	if (func_42(iParam0))
	{
		if (func_56(iParam0, 0))
		{
			if (PED::_0xA911EE21EDF69DAF(Global_1275573->f_8))
			{
				func_57(iParam0, 0, 1, 1);
			}
		}
		else if (!PED::_0xA911EE21EDF69DAF(Global_1275573->f_8))
		{
			func_57(iParam0, 1, 1, 1);
		}
	}
}

void func_48(vector3 vParam0, int iParam3, int iParam4, float fParam5)
{
	if (func_62(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), vParam0, 1) < fParam5)
	{
		if (((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_1 != iParam3)
		{
			((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_1 = iParam3;
		}
		if (((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_2 != iParam4)
		{
			((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_2 = iParam4;
		}
	}
}

void func_49(var uParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7)
{
	if (!func_99(uParam0))
	{
		*uParam0 = GRAPHICS::_0xFA50F79257745E74(vParam1, fParam4, iParam5, iParam6, iParam7);
		if (func_99(uParam0))
		{
		}
	}
}

bool func_50(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_51(var uParam0, char* sParam1, char* sParam2, vector3 vParam3, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, int iParam11, bool bParam12)
{
	if (bParam12)
	{
		if (!STREAMING::HAS_MODEL_LOADED(iParam7))
		{
			STREAMING::REQUEST_MODEL(iParam7, false);
			return 0;
		}
	}
	if (!STREAMING::HAS_MODEL_LOADED(iParam9))
	{
		STREAMING::REQUEST_MODEL(iParam9, false);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iParam11))
	{
		STREAMING::REQUEST_MODEL(iParam11, false);
		return 0;
	}
	if (bParam12)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam6))
		{
			iParam6 = OBJECT::CREATE_OBJECT_NO_OFFSET(iParam7, vParam3, true, true, false, true);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam6))
		{
			return 0;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam8))
	{
		iParam8 = OBJECT::CREATE_OBJECT_NO_OFFSET(iParam9, vParam3, true, true, false, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam8))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam10))
	{
		bParam10 = OBJECT::CREATE_OBJECT_NO_OFFSET(iParam11, vParam3, true, true, false, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam10))
	{
		return 0;
	}
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam1, 64, sParam2, false, true);
	}
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		return 0;
	}
	if (!ANIMSCENE::_0x59606519FF9D3EC2(*uParam0, 1) && !ANIMSCENE::_0x477122B8D05E7968(*uParam0, 1, 0))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
	}
	else if (ANIMSCENE::_0x477122B8D05E7968(*uParam0, 1, 0))
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(*uParam0, vParam3, 0f, 0f, 0f, 2);
		if (ENTITY::DOES_ENTITY_EXIST(iParam6))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "MOUND", iParam6, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam8))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "CHEST", iParam8, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(bParam10))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "DRESSING", bParam10, 0);
		}
		if (ANIMSCENE::_GET_ANIM_SCENE_PED(*uParam0, "player", false) == Global_34)
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(*uParam0, "player", Global_34);
		}
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*uParam0, sParam2, true);
		ANIMSCENE::START_ANIM_SCENE(*uParam0);
		return 1;
	}
	return 0;
}

Vector3 func_52(vector3 vParam0, float fParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	vector3 vVar8;
	vector3 vVar11;
	float fVar14;

	vVar0 = { func_100(vParam0) };
	vVar3 = { func_102(func_102(vVar0, func_101((fParam3 - 90f))), vVar0) };
	fVar6 = MISC::ATAN2(vVar3.y, vVar3.x);
	fVar7 = -MISC::ATAN2(vVar3.z, BUILTIN::SQRT(((vVar3.x * vVar3.x) + (vVar3.y * vVar3.y))));
	vVar8 = { -vVar3.y, vVar3.x, 0f };
	vVar11 = { func_102(vVar8, vVar3) };
	fVar14 = (MISC::ATAN2((func_103(vVar8, vVar0) / BUILTIN::VMAG(vVar8)), (func_103(vVar11, vVar0) / BUILTIN::VMAG(vVar11))) + 180f);
	return fVar14, fVar7, fVar6;
}

int func_53(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ITEMSET::IS_ITEMSET_VALID(Global_1276326->f_31))
	{
		Global_1276326->f_31 = ITEMSET::CREATE_ITEMSET(true);
	}
	if (!ITEMSET::IS_IN_ITEMSET(iParam0, Global_1276326->f_31))
	{
		ITEMSET::ADD_TO_ITEMSET(iParam0, Global_1276326->f_31);
	}
	if (!func_104(iParam0))
	{
		PLAYER::_0x543DFE14BE720027(PLAYER::PLAYER_ID(), iParam0, 0);
		PLAYER::_0x6ECFC621A168424C(iParam0, iParam1, iParam2);
		PLAYER::_0x907B16B3834C69E2(iParam0, 500f);
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_1276326[iVar0 /*2*/]))
		{
			(*Global_1276326)[iVar0 /*2*/] = iParam0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_54(var uParam0, float fParam1)
{
	if (func_91(joaat("KIT_COLLECTOR_SPADE"), 1))
	{
		if (Global_1099294->f_331)
		{
			return 0;
		}
		if (func_62(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_6, 1) > fParam1)
		{
			return 0;
		}
		if (func_105(uParam0->f_5))
		{
			return 0;
		}
		if (func_9(uParam0, 2))
		{
			if (func_64(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, 1, 0) == joaat("WEAPON_KIT_METAL_DETECTOR") && func_62(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_6, 1) <= 1.6f)
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_55(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, int iParam16)
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
	if (func_92(vParam2))
	{
		return 0;
	}
	if (fParam5 <= 0f)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_106(iVar0, 2))
		{
			if (func_107(vParam2, ((*Global_1949759)[iVar0 /*23*/])->f_6, 0.01f, 1) && iParam1 == ((*Global_1949759)[iVar0 /*23*/])->f_4)
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
		func_108(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216 /* Float: 1f */, 0, 0, 0, bParam15, iParam16);
		return iVar1;
	}
	return 0;
}

bool func_56(int iParam0, bool bParam1)
{
	if (bParam1 && !func_42(iParam0))
	{
		return false;
	}
	return !func_106(iParam0, 4);
}

void func_57(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_42(iParam0))
	{
		return;
	}
	iVar0 = func_76(iParam0);
	if (bParam1)
	{
		func_109(iParam0, 4);
		if (bParam3)
		{
			func_110(iVar0, 1);
		}
		func_111(iVar0, 1);
	}
	else
	{
		func_112(iParam0, 4);
		func_111(iVar0, 0);
	}
}

void func_58(int iParam0, var uParam1)
{
	if (AUDIO::_0xD9130842D7226045("RDRO_Collectible_Sounds_Travelling_Saleswoman", 0))
	{
		if (func_43(iParam0, 1))
		{
			if (!*uParam1)
			{
				AUDIO::PLAY_SOUND_FRONTEND("collectible_found", "RDRO_Collectible_Sounds_Travelling_Saleswoman", true, 0);
				*uParam1 = 1;
			}
		}
		else if (*uParam1)
		{
			*uParam1 = 0;
		}
	}
}

bool func_59(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam1 && !func_42(iParam0))
	{
		return false;
	}
	iVar0 = func_76(iParam0);
	if (HUD::_UIPROMPT_HAS_HOLD_AUTO_FILL_MODE(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		if (((*Global_1949759)[iVar0 /*23*/])->f_20)
		{
			iVar1 = MISC::GET_GAME_TIMER();
		}
		else
		{
			iVar1 = MISC::_GET_SYSTEM_TIME();
		}
		uVar2 = HUD::_0x81801291806DBC50(((*Global_1949759)[iVar0 /*23*/])->f_3);
		if (!HUD::_UIPROMPT_IS_ACTIVE(((*Global_1949759)[iVar0 /*23*/])->f_3))
		{
			iVar3 = (iVar1 - ((*Global_1949759)[iVar0 /*23*/])->f_21);
			iVar4 = BUILTIN::FLOOR((IntToFloat(((*Global_1949759)[iVar0 /*23*/])->f_18) * (1f - ((*Global_1949759)[iVar0 /*23*/])->f_22)));
			if (iVar3 > iVar4)
			{
				return true;
			}
		}
		else
		{
			((*Global_1949759)[iVar0 /*23*/])->f_21 = iVar1;
			((*Global_1949759)[iVar0 /*23*/])->f_22 = uVar2;
		}
	}
	if (HUD::_0xCD072523791DDC1B(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(((*Global_1949759)[iVar0 /*23*/])->f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(((*Global_1949759)[iVar0 /*23*/])->f_3);
}

void func_60(int iParam0)
{
	int iVar0;

	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = PED::_0xD806CD2A4F2C2996(iParam0);
		if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0)) && ENTITY::IS_ENTITY_A_PED(iVar0))
		{
			PED::_0xED00D72F81CF7278(iVar0, 0, 0);
		}
	}
}

float func_61(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_42(iParam0))
	{
		return 0f;
	}
	iVar0 = func_76(iParam0);
	if (HUD::_0xCD072523791DDC1B(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		return HUD::_UIPROMPT_GET_MASH_MODE_PROGRESS(((*Global_1949759)[iVar0 /*23*/])->f_3);
	}
	return HUD::_0x81801291806DBC50(((*Global_1949759)[iVar0 /*23*/])->f_3);
}

float func_62(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_63(float fParam0)
{
	if (!((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_4)
	{
		((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_4 = 1;
		if (((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_8 < 0f)
		{
			((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_8 = fParam0;
		}
	}
}

int func_64(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

float func_65(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar1 = (Param3 - Param0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = MISC::ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

void func_66()
{
	if (((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_4)
	{
		((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_5 = 1;
	}
}

int func_67(var uParam0)
{
	var uVar0;
	int iVar4;
	int iVar5;

	if (!func_9(uParam0, 8))
	{
		if (func_9(uParam0, 4))
		{
			((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_7 = 1;
			if (func_9(uParam0, 1))
			{
				uParam0->f_22 = -990197142;
			}
			else
			{
				uParam0->f_22 = -795783582;
			}
		}
	}
	while (!func_113(uParam0->f_22, &uVar0))
	{
		return 0;
	}
	iVar5 = func_17(uParam0->f_22);
	iVar4 = 0;
	while (iVar4 < Global_17172.f_2954.f_1)
	{
		if (iVar5 == (Global_17172.f_2954.f_1[iVar4 /*5*/])->f_4)
		{
			Global_17172.f_2954.f_1[iVar4 /*5*/] = 1;
		}
		iVar4++;
	}
	func_115(func_114(joaat("COLLECTIBLES_COLLECTED"), joaat("W_SHOVEL")), 1);
	if (func_9(uParam0, 2))
	{
		func_115(func_114(joaat("COLLECTIBLES_COLLECTED"), joaat("W_METAL_DETECTOR")), 1);
	}
	return 1;
}

void func_68(int iParam0)
{
	_NAMESPACE49::_0x8245C1F3262F4AC2(iParam0);
}

void func_69(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_116(-753305330, 0, 255, 0, 0);
	}
	else if (bParam0)
	{
		func_116(11389876, 0, 255, 0, 0);
	}
}

int func_70()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar2 = PLAYER::PLAYER_ID();
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (!NETWORK::_0x255A5EF65EDA9167(iVar1))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
		}
		else
		{
			iVar3 = iVar1;
			if (iVar3 != iVar2)
			{
				if (((*Global_1200815)[iVar3 /*9*/])->f_1 == ((*Global_1200815)[iVar2 /*9*/])->f_1)
				{
					if (((*Global_1200815)[iVar3 /*9*/])->f_2 == ((*Global_1200815)[iVar2 /*9*/])->f_2)
					{
						if (((*Global_1200815)[iVar3 /*9*/])->f_5)
						{
							return 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

var func_71()
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar3 = PLAYER::PLAYER_ID();
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (!NETWORK::_0x255A5EF65EDA9167(iVar2))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
		}
		else
		{
			iVar4 = iVar2;
			if (iVar4 != iVar3)
			{
				if (((*Global_1200815)[iVar4 /*9*/])->f_1 == ((*Global_1200815)[iVar3 /*9*/])->f_1)
				{
					if (((*Global_1200815)[iVar4 /*9*/])->f_2 == ((*Global_1200815)[iVar3 /*9*/])->f_2)
					{
						if (((*Global_1200815)[iVar4 /*9*/])->f_6)
						{
							uVar1 = ((*Global_1200815)[iVar4 /*9*/])->f_3;
							return uVar1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return uVar1;
}

int func_72(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_73(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_ARROWHEAD_AGATE"):
			return joaat("COLLECTIBLE_ARROWHEAD_AGATE");
		case joaat("PROVISION_ARROWHEAD_BONE"):
			return joaat("COLLECTIBLE_ARROWHEAD_BONE");
		case joaat("PROVISION_ARROWHEAD_CHIPPED"):
			return joaat("COLLECTIBLE_ARROWHEAD_CHIPPED");
		case joaat("PROVISION_ARROWHEAD_CRUDE"):
			return joaat("COLLECTIBLE_ARROWHEAD_CRUDE");
		case joaat("PROVISION_ARROWHEAD_FELDSPAR"):
			return joaat("COLLECTIBLE_ARROWHEAD_FELDSPAR");
		case joaat("PROVISION_ARROWHEAD_FLINT"):
			return joaat("COLLECTIBLE_ARROWHEAD_FLINT");
		case joaat("PROVISION_ARROWHEAD_OBSIDIAN"):
			return joaat("COLLECTIBLE_ARROWHEAD_OBSIDIAN");
		case joaat("PROVISION_ARROWHEAD_QUARTZ"):
			return joaat("COLLECTIBLE_ARROWHEAD_QUARTZ");
		case joaat("PROVISION_ARROWHEAD_RAW"):
			return joaat("COLLECTIBLE_ARROWHEAD_RAW");
		case joaat("PROVISION_ARROWHEAD_ROUGH"):
			return joaat("COLLECTIBLE_ARROWHEAD_ROUGH");
		case joaat("PROVISION_ARROWHEAD_SLATE"):
			return joaat("COLLECTIBLE_ARROWHEAD_SLATE");
		case joaat("PROVISION_ARROWHEAD_SPLINTERED"):
			return joaat("COLLECTIBLE_ARROWHEAD_SPLINTERED");
		case joaat("PROVISION_HRLM_BRUSH_BOAR"):
			return -1132845243;
		case joaat("PROVISION_HRLM_BRUSH_EBONY"):
			return 1606281828;
		case joaat("PROVISION_HRLM_BRUSH_GOATHAIR"):
			return 530382704;
		case joaat("PROVISION_HRLM_BRUSH_HORSEHAIR"):
			return -1519010704;
		case joaat("PROVISION_HRLM_BRUSH_ROSEWOOD"):
			return 520232109;
		case joaat("PROVISION_HRLM_BRUSH_ROSEWOOD_NG"):
			return -364070233;
		case joaat("PROVISION_HRLM_COMB_BOXWOOD"):
			return -1296260337;
		case joaat("PROVISION_HRLM_COMB_CHERRYWOOD"):
			return 127681874;
		case joaat("PROVISION_HRLM_COMB_IVORY"):
			return 1290286961;
		case joaat("PROVISION_HRLM_COMB_TORTOISESHELL"):
			return 1628530735;
		case joaat("PROVISION_HRLM_HAIRPIN_EBONY"):
			return joaat("COLLECTIBLE_HRLM_HAIRPIN_EBONY");
		case joaat("PROVISION_HRLM_HAIRPIN_IVORY"):
			return joaat("COLLECTIBLE_HRLM_HAIRPIN_IVORY");
		case joaat("PROVISION_HRLM_HAIRPIN_JADE"):
			return joaat("COLLECTIBLE_HRLM_HAIRPIN_JADE");
		case joaat("PROVISION_HRLM_HAIRPIN_METAL"):
			return joaat("COLLECTIBLE_HRLM_HAIRPIN_METAL");
		case joaat("PROVISION_HRLM_HAIRPIN_WOODEN"):
			return joaat("COLLECTIBLE_HRLM_HAIRPIN_WOODEN");
		case joaat("PROVISION_JEWELRY_AMETHYST_NECKLACE"):
			return joaat("COLLECTIBLE_JEWELRY_AMETHYST_NECKLACE");
		case joaat("PROVISION_JEWELRY_BLCK_PEARL_NECKLACE"):
			return joaat("COLLECTIBLE_JEWELRY_BLCK_PEARL_NECKLACE");
		case joaat("PROVISION_JEWELRY_CARVED_BRACELET"):
			return joaat("COLLECTIBLE_JEWELRY_CARVED_BRACELET");
		case joaat("PROVISION_JEWELRY_CORAL_DNGL_EARRING"):
			return joaat("COLLECTIBLE_JEWELRY_CORAL_DNGL_EARRING");
		case joaat("PROVISION_JEWELRY_CORAL_RING"):
			return joaat("COLLECTIBLE_JEWELRY_CORAL_RING");
		case joaat("PROVISION_JEWELRY_DMND_BNGLE_BRACELET"):
			return joaat("COLLECTIBLE_JEWELRY_DMND_BNGLE_BRACELET");
		case joaat("PROVISION_JEWELRY_DMND_PENDT_EARRING"):
			return joaat("COLLECTIBLE_JEWELRY_DMND_PENDT_EARRING");
		case joaat("PROVISION_JEWELRY_DROP_EARRING"):
			return joaat("COLLECTIBLE_JEWELRY_DROP_EARRING");
		case joaat("PROVISION_JEWELRY_ELK_TOOTH_EARRING"):
			return joaat("COLLECTIBLE_JEWELRY_ELK_TOOTH_EARRING");
		case joaat("PROVISION_JEWELRY_EMERALD_EARRING"):
			return joaat("COLLECTIBLE_JEWELRY_EMERALD_EARRING");
		case joaat("PROVISION_JEWELRY_EMERALD_RING"):
			return joaat("COLLECTIBLE_JEWELRY_EMERALD_RING");
		case joaat("PROVISION_JEWELRY_FRENCH_DMND_RING"):
			return joaat("COLLECTIBLE_JEWELRY_FRENCH_DMND_RING");
		case joaat("PROVISION_JEWELRY_GLD_BNGLE_BRACELET"):
			return joaat("COLLECTIBLE_JEWELRY_GLD_BNGLE_BRACELET");
		case joaat("PROVISION_JEWELRY_GLD_CROSS_NECKLACE"):
			return joaat("COLLECTIBLE_JEWELRY_GLD_CROSS_NECKLACE");
		case joaat("PROVISION_JEWELRY_GLD_PEARL_NECKLACE"):
			return joaat("COLLECTIBLE_JEWELRY_GLD_PEARL_NECKLACE");
		case joaat("PROVISION_JEWELRY_GLD_PENDT_NECKLACE"):
			return joaat("COLLECTIBLE_JEWELRY_GLD_PENDT_NECKLACE");
		case joaat("PROVISION_JEWELRY_GRNET_BRACELET"):
			return joaat("COLLECTIBLE_JEWELRY_GRNET_BRACELET");
		case joaat("PROVISION_JEWELRY_GRNET_POST_EARRING"):
			return joaat("COLLECTIBLE_JEWELRY_GRNET_POST_EARRING");
		case joaat("PROVISION_JEWELRY_MOON_RING"):
			return joaat("COLLECTIBLE_JEWELRY_MOON_RING");
		case joaat("PROVISION_JEWELRY_MTHR_PEARL_NECKLACE"):
			return joaat("COLLECTIBLE_JEWELRY_MTHR_PEARL_NECKLACE");
		case joaat("PROVISION_JEWELRY_ONYX_RING"):
			return joaat("COLLECTIBLE_JEWELRY_ONYX_RING");
		case joaat("PROVISION_JEWELRY_PEARL_BRACELET"):
			return joaat("COLLECTIBLE_JEWELRY_PEARL_BRACELET");
		case joaat("PROVISION_JEWELRY_PEARL_EARRING"):
			return joaat("COLLECTIBLE_JEWELRY_PEARL_EARRING");
		case joaat("PROVISION_JEWELRY_PEARL_RING"):
			return joaat("COLLECTIBLE_JEWELRY_PEARL_RING");
		case joaat("PROVISION_JEWELRY_PERS_TURQ_RING"):
			return joaat("COLLECTIBLE_JEWELRY_PERS_TURQ_RING");
		case joaat("PROVISION_JEWELRY_PORCELAIN_NECKLACE"):
			return joaat("COLLECTIBLE_JEWELRY_PORCELAIN_NECKLACE");
		case joaat("PROVISION_JEWELRY_QN_DMND_EARRING"):
			return joaat("COLLECTIBLE_JEWELRY_QN_DMND_EARRING");
		case joaat("PROVISION_JEWELRY_RUDY_DNGL_EARRING"):
			return joaat("COLLECTIBLE_JEWELRY_RUDY_DNGL_EARRING");
		case joaat("PROVISION_JEWELRY_SLVR_PEARL_NECKLACE"):
			return joaat("COLLECTIBLE_JEWELRY_SLVR_PEARL_NECKLACE");
		case joaat("PROVISION_JEWELRY_SPHR_BNGLE_BRACELET"):
			return joaat("COLLECTIBLE_JEWELRY_SPHR_BNGLE_BRACELET");
		case joaat("PROVISION_JEWELRY_SPHR_BRACELET"):
			return joaat("COLLECTIBLE_JEWELRY_SPHR_BRACELET");
		case joaat("PROVISION_JEWELRY_TOPAZ_NECKLACE"):
			return joaat("COLLECTIBLE_JEWELRY_TOPAZ_NECKLACE");
		case joaat("PROVISION_JEWELRY_TOPAZ_RING"):
			return joaat("COLLECTIBLE_JEWELRY_TOPAZ_RING");
		case joaat("PROVISION_JEWELRY_TURQ_STUD_EARRING"):
			return joaat("COLLECTIBLE_JEWELRY_TURQ_STUD_EARRING");
		case joaat("PROVISION_JEWELRY_TURQUOISE_BRACELET"):
			return joaat("COLLECTIBLE_JEWELRY_TURQUOISE_BRACELET");
		case joaat("PROVISION_JEWELRY_TURQUOISE_RING"):
			return joaat("COLLECTIBLE_JEWELRY_TURQUOISE_RING");
		case joaat("PROVISION_JEWELRY_WHT_DMND_EARRING"):
			return joaat("COLLECTIBLE_JEWELRY_WHT_DMND_EARRING");
		case joaat("PROVISION_JEWELRY_WHTGLD_DMND_RING"):
			return joaat("COLLECTIBLE_JEWELRY_WHTGLD_DMND_RING");
		case joaat("PROVISION_JEWELRY_YLWGLD_DMND_RING"):
			return joaat("COLLECTIBLE_JEWELRY_YLWGLD_DMND_RING");
		case joaat("PROVISION_COIN_1700_NY_TKN"):
			return joaat("COLLECTIBLE_COIN_1700_NY_TKN");
		case joaat("PROVISION_COIN_1787_CENT_TKN"):
			return joaat("COLLECTIBLE_COIN_1787_CENT_TKN");
		case joaat("PROVISION_COIN_1789_PNY"):
			return joaat("COLLECTIBLE_COIN_1789_PNY");
		case joaat("PROVISION_COIN_1792_NICKEL"):
			return joaat("COLLECTIBLE_COIN_1792_NICKEL");
		case joaat("PROVISION_COIN_1792_LIB_QTR"):
			return joaat("COLLECTIBLE_COIN_1792_QTR");
		case joaat("PROVISION_COIN_1794_SLV_DLR"):
			return joaat("COLLECTIBLE_COIN_1794_SLV_DLR");
		case joaat("PROVISION_COIN_1795_HLF_EAG"):
			return joaat("COLLECTIBLE_COIN_1795_HLF_EAG");
		case joaat("PROVISION_COIN_1796_HLF_PNY"):
			return joaat("COLLECTIBLE_COIN_1796_HLF_PNY");
		case joaat("PROVISION_COIN_1797_GLD_EAG"):
			return joaat("COLLECTIBLE_COIN_1797_GLD_EAG");
		case joaat("PROVISION_COIN_1798_SLV_DLR"):
			return joaat("COLLECTIBLE_COIN_1798_SLV_DLR");
		case joaat("PROVISION_COIN_1800_FIVE_DLR"):
			return joaat("COLLECTIBLE_COIN_1800_FIVE_DLR");
		case joaat("PROVISION_COIN_1800_GLD_DLR"):
			return joaat("COLLECTIBLE_COIN_1800_GLD_DLR");
		case joaat("PROVISION_COIN_1800_GLD_QTR"):
			return joaat("COLLECTIBLE_COIN_1800_GLD_QTR");
		case joaat("PROVISION_COIN_1800_HLF_DIME"):
			return joaat("COLLECTIBLE_COIN_1800_HLF_DIME");
		case joaat("PROVISION_CONDOR_EGG"):
			return 521036731;
		case joaat("PROVISION_DUCK_EGG"):
			return 1510925660;
		case joaat("PROVISION_EAGLE_EGG"):
			return -1667316569;
		case joaat("PROVISION_EGRET_EGG"):
			return 875971115;
		case joaat("PROVISION_GOOSE_EGG"):
			return -1390165137;
		case joaat("PROVISION_HAWK_EGG"):
			return 512666633;
		case joaat("PROVISION_HERON_EGG"):
			return 1056235591;
		case joaat("PROVISION_LOON_EGG"):
			return 1824947548;
		case joaat("PROVISION_SPOONBILL_EGG"):
			return -297415734;
		case joaat("PROVISION_VULTURE_EGG"):
			return -744964659;
		default:
			break;
	}
	return joaat("COLLECTIBLE_ARROWHEAD_AGATE");
}

int func_74(int iParam0)
{
	struct<5> Var0;

	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_4;
}

void func_75(var uParam0, int iParam1)
{
	func_117(uParam0, iParam1);
}

int func_76(int iParam0)
{
	return iParam0;
}

void func_77(int iParam0)
{
	if (!func_118(iParam0))
	{
		return;
	}
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iParam0 /*23*/])->f_3))
	{
		HUD::_UIPROMPT_DELETE(((*Global_1949759)[iParam0 /*23*/])->f_3);
	}
	((*Global_1949759)[iParam0 /*23*/])->f_4 = 0;
	(*Global_1949759)[iParam0 /*23*/] = 1;
	((*Global_1949759)[iParam0 /*23*/])->f_16 = 0;
	((*Global_1949759)[iParam0 /*23*/])->f_1 = 0;
	((*Global_1949759)[iParam0 /*23*/])->f_6 = { 0f, 0f, 0f };
	((*Global_1949759)[iParam0 /*23*/])->f_12 = { 0f, 0f, 0f };
	((*Global_1949759)[iParam0 /*23*/])->f_9 = 0f;
	((*Global_1949759)[iParam0 /*23*/])->f_10 = 0;
	((*Global_1949759)[iParam0 /*23*/])->f_11 = 0;
	((*Global_1949759)[iParam0 /*23*/])->f_2 = 1;
	((*Global_1949759)[iParam0 /*23*/])->f_15 = -1f;
}

int func_78(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<2> Var1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ITEMSET::IS_ITEMSET_VALID(Global_1276326->f_31) && ITEMSET::IS_IN_ITEMSET(iParam0, Global_1276326->f_31))
	{
		ITEMSET::REMOVE_FROM_ITEMSET(iParam0, Global_1276326->f_31);
	}
	PLAYER::_0x9DAE1380CC5C6451(PLAYER::PLAYER_ID(), iParam0);
	PLAYER::_0xDC5E09D012D759C4(iParam0, iParam1, iParam2);
	Var1.f_1 = -1082130432;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1276326[iVar0 /*2*/]) && Global_1276326[iVar0 /*2*/] == iParam0)
		{
			MISC::_COPY_MEMORY((*Global_1276326)[iVar0 /*2*/], &Var1, 2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_79(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

var func_80(int iParam0, int iParam1)
{
	return func_81(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

var func_81(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	SCRIPTS::_0xDE544B7EC0C187CC(&uVar0);
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return uVar0;
	}
	if (func_119() != 0)
	{
		iVar1 = PLAYER::PLAYER_ID();
		if (iVar1 >= 0 && iVar1 < 32)
		{
			SCRIPTS::_0x31010318BA9897AC(&uVar0, iVar1);
		}
		return uVar0;
	}
	iVar2 = 0;
	bVar3 = false;
	bVar4 = false;
	iVar5 = Global_1275573->f_10;
	iVar6 = Global_1275573->f_15;
	bVar7 = true;
	iVar9 = iParam10;
	if (BUILTIN::VMAG2(vParam6) < 1f)
	{
		bVar7 = false;
	}
	else
	{
		switch (iParam9)
		{
			case 665633627:
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_120());
				break;
			case -432403087:
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_120());
				break;
			case -1612834106:
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_120());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_121(PLAYER::GET_PLAYER_TEAM(iVar5)));
	}
	if (iVar9 & 8 != 0 && iVar9 & 32768 != 0)
	{
		iVar9 |= 65536;
		iVar9 = (iVar9 - iVar9 & 40952);
	}
	if (iVar9 & 4 != 0)
	{
		if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iVar9 = (iVar9 - iVar9 & 4);
			iVar9 |= 0;
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Global_1275573->f_154[iVar2])))
		{
			iVar10 = &Global_1275573->f_154[iVar2];
			bVar3 = false;
			bVar4 = false;
			if (iVar9 & 1 != 0 && iVar10 == iVar5)
			{
				bVar3 = true;
			}
			if (func_122(iVar2))
			{
				bVar3 = true;
			}
			iVar11 = PLAYER::GET_PLAYER_PED(iVar10);
			if (!bVar3)
			{
				if (iVar9 & 2 != 0)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iVar11))
					{
						bVar3 = true;
					}
					else if (&Global_1275573->f_88[iVar2])
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8192 != 0 && func_123(iVar2) != 1)
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 16384 != 0 && PED::_0xB655DB7582AEC805(iVar11))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 4 != 0 && !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar10))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8176 != 0)
				{
					switch (PLAYER::GET_PLAYER_TEAM(iVar10))
					{
						case -1:
							if (iVar9 & 16 != 0)
							{
								bVar4 = true;
							}
							break;
						case 0:
							if (iVar9 & 32 != 0)
							{
								bVar4 = true;
							}
							break;
						case 1:
							if (iVar9 & 64 != 0)
							{
								bVar4 = true;
							}
							break;
						case 2:
							if (iVar9 & 128 != 0)
							{
								bVar4 = true;
							}
							break;
						case 3:
							if (iVar9 & 256 != 0)
							{
								bVar4 = true;
							}
							break;
						case 4:
							if (iVar9 & 512 != 0)
							{
								bVar4 = true;
							}
							break;
						case 5:
							if (iVar9 & 1024 != 0)
							{
								bVar4 = true;
							}
							break;
						case 6:
							if (iVar9 & 2048 != 0)
							{
								bVar4 = true;
							}
							break;
						case 8:
							if (iVar9 & 4096 != 0)
							{
								bVar4 = true;
							}
							break;
					}
					if (!bVar4)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 32768 != 0)
				{
					if (_NAMESPACE26::_0x901E0DC25080C8B9(iVar10) != iVar6)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 65536 != 0)
				{
					if (!func_124(iVar10))
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3 && bVar7)
			{
				if (!VOLUME::_0xF256A75210C5C0EB(iVar8, ENTITY::GET_ENTITY_COORDS(iVar11, false, false)))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				SCRIPTS::_0x31010318BA9897AC(&uVar0, iVar2);
			}
		}
		iVar2++;
	}
	if (bVar7)
	{
		VOLUME::_DELETE_VOLUME(iVar8);
	}
	return uVar0;
}

void func_82(struct<19> Param0, var uParam19, bool bParam20, bool bParam21)
{
	struct<21> Var0;

	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam19))
	{
		return;
	}
	Param0 = 0;
	Param0.f_1 = PLAYER::PLAYER_ID();
	Param0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (!bParam20)
	{
		if (Param0.f_18)
		{
			if (bParam21)
			{
				Var0.f_12 = -1;
				Var0.f_12.f_1 = -1;
				Var0.f_14 = 255;
				Var0.f_15 = 255;
				Var0.f_20 = -1;
				Var0 = { Param0 };
				Var0.f_19 = uParam19;
				Var0.f_20 = Param0.f_2;
				func_125(&(Global_1070356->f_21258), Var0);
				return;
			}
		}
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Param0, 19, 5, &uParam19);
}

void func_83(int* iParam0, float fParam1)
{
	if (SCRIPTS::_0x179A6F0EE2E79026(fParam1))
	{
		iParam0->f_1 = &Global_1275573->f_154[&Global_1275573];
		SCRIPTS::TRIGGER_SCRIPT_EVENT(1, iParam0, 7, 19, fParam1);
	}
}

void func_84(var uParam0, int iParam1)
{
	func_126(uParam0, iParam1);
}

void func_85(var uParam0)
{
	if (uParam0->f_5 != -1)
	{
		AUDIO::_0x0F2A2175734926D8("collectible_lure", "RDRO_Collectible_Sounds_Travelling_Saleswoman");
		AUDIO::RELEASE_SOUND_ID(uParam0->f_5);
		PAD::STOP_PAD_SHAKE(0);
		uParam0->f_5 = -1;
	}
	AUDIO::_0x531A78D6BF27014B("RDRO_Collectible_Sounds_Travelling_Saleswoman");
}

void func_86(var uParam0, int iParam1)
{
	if (func_99(uParam0))
	{
		GRAPHICS::_0x9CF1836C03FB67A2(uParam0, iParam1);
	}
}

void func_87(int iParam0, int iParam1)
{
	if (!func_127(iParam0, iParam1))
	{
		MISC::SET_BIT(Global_1070356->f_20795.f_353[iParam0 /*11*/], iParam1);
		(Global_1070356->f_20795.f_353[iParam0 /*11*/])->f_1[iParam1] = SCRIPTS::GET_ID_OF_THIS_THREAD();
		func_128();
	}
}

void func_88(int iParam0, int iParam1, bool bParam2)
{
	if (func_127(iParam0, iParam1) && (!bParam2 || &(Global_1070356->f_20795.f_353[iParam0 /*11*/])->f_1[iParam1] == SCRIPTS::GET_ID_OF_THIS_THREAD()))
	{
		MISC::CLEAR_BIT(Global_1070356->f_20795.f_353[iParam0 /*11*/], iParam1);
		(Global_1070356->f_20795.f_353[iParam0 /*11*/])->f_1[iParam1] = 0;
		func_128();
	}
}

float func_89(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_90(var uParam0, int iParam1, int iParam2, vector3 vParam3, float fParam6)
{
	int iVar0;
	var uVar1;

	iVar0 = VOLUME::_CREATE_VOLUME_SPHERE(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam6);
	uVar1 = func_129(uParam0, iParam1, iVar0, iParam2);
	func_130(iVar0);
	return uVar1;
}

bool func_91(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_72(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_131(iParam0);
	switch (iVar0)
	{
		case joaat("WEAPON"):
			if (WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, false))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case joaat("AMMO"):
			if (!func_132(iParam0, 1))
			{
				return false;
			}
			break;
		case joaat("CLOTHING"):
			if (func_133(iParam0))
			{
				return true;
			}
			break;
	}
	return func_134(iParam0, 0, 0, 0) >= iParam1;
}

int func_92(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_93(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915180->f_20136;
	}
	return (Global_1915180->f_20136 || Global_1915180->f_21989.f_1);
}

bool func_94()
{
	return func_135() != -1;
}

float func_95()
{
	return (Global_1140484->f_2001[82 /*192*/])->f_188;
}

void func_96(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_97(var uParam0)
{
	func_136(uParam0, 0f);
}

float func_98(var uParam0)
{
	if (!func_137(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_138(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_139() - uParam0->f_1);
}

bool func_99(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

Vector3 func_100(vector3 vParam0)
{
	float fVar0;
	float fVar1;

	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.f_1 = 0f;
		vParam0.f_2 = 0f;
	}
	return vParam0;
}

Vector3 func_101(float fParam0)
{
	return -BUILTIN::SIN(fParam0), BUILTIN::COS(fParam0), 0f;
}

Vector3 func_102(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.y * vParam3.z) - (vParam0.z * vParam3.y)), ((vParam0.z * vParam3.x) - (vParam0.x * vParam3.z)), ((vParam0.x * vParam3.y) - (vParam0.y * vParam3.x));
}

float func_103(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

int func_104(int iParam0)
{
	struct<5> Var0;
	var uVar5;
	int iVar13;
	int iVar14;
	int iVar15;

	if (func_140() == 0)
	{
		return 0;
	}
	if (!DATAFILE::_0x603AC35FD4602C76(func_140()))
	{
		return 0;
	}
	Var0 = func_140();
	Var0.f_2 = 0;
	Var0.f_3 = 0;
	Var0.f_4 = 0;
	Var0.f_1 = 0;
	iVar13 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar14 = 0;
	while (iVar14 < 30)
	{
		Var0.f_1 = 0;
		Var0.f_3 = iVar14;
		Var0.f_2 = 0;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			Var0.f_2 = 1;
			if (DATAFILE::_DATAFILE_GET_STRING(&uVar5, &Var0))
			{
				iVar15 = MISC::GET_HASH_KEY(&uVar5);
				if (iVar13 == iVar15)
				{
					return 1;
				}
			}
		}
		iVar14++;
	}
	return 0;
}

bool func_105(int iParam0)
{
	struct<4> Var0;

	Var0.f_4 = 1084182731;
	Var0 = { func_141(0) };
	return func_142(iParam0, &Var0, 1, 1, 0, -1, 0);
}

bool func_106(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1949759)[iParam0 /*23*/])->f_1 && iParam1) != 0;
}

int func_107(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_108(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, bool bParam24, bool bParam25)
{
	int iVar0;

	((*Global_1949759)[iParam0 /*23*/])->f_4 = iParam1;
	(*Global_1949759)[iParam0 /*23*/] = iParam4;
	((*Global_1949759)[iParam0 /*23*/])->f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	((*Global_1949759)[iParam0 /*23*/])->f_2 = iParam5;
	((*Global_1949759)[iParam0 /*23*/])->f_6 = { vParam6 };
	((*Global_1949759)[iParam0 /*23*/])->f_9 = fParam9;
	((*Global_1949759)[iParam0 /*23*/])->f_10 = iParam10;
	((*Global_1949759)[iParam0 /*23*/])->f_11 = iParam11;
	((*Global_1949759)[iParam0 /*23*/])->f_12 = { 0f, 0f, 0f };
	((*Global_1949759)[iParam0 /*23*/])->f_5 = iParam12;
	((*Global_1949759)[iParam0 /*23*/])->f_1 = 2;
	((*Global_1949759)[iParam0 /*23*/])->f_17 = -1;
	((*Global_1949759)[iParam0 /*23*/])->f_18 = iParam16;
	((*Global_1949759)[iParam0 /*23*/])->f_19 = iParam15;
	((*Global_1949759)[iParam0 /*23*/])->f_20 = bParam25;
	((*Global_1949759)[iParam0 /*23*/])->f_22 = 0f;
	if (bParam25)
	{
		((*Global_1949759)[iParam0 /*23*/])->f_21 = MISC::GET_GAME_TIMER();
	}
	else
	{
		((*Global_1949759)[iParam0 /*23*/])->f_21 = MISC::_GET_SYSTEM_TIME();
	}
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
	HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 18, true);
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
			HUD::_UIPROMPT_SET_PRESSED_TIMED_MODE(iVar0, iParam16);
			break;
		case 3:
			HUD::_UIPROMPT_SET_HOLD_INDEFINITELY_MODE(iVar0);
			break;
		case 6:
			HUD::_UIPROMPT_SET_HOLD_AUTO_FILL_MODE(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, true);
			}
			break;
		case 7:
			HUD::_0xA3F2149AA24F3D8E(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, true);
			}
			break;
		case 8:
			HUD::_UIPROMPT_SET_MASH_MODE(iVar0, iParam17);
			break;
		case 9:
			HUD::_UIPROMPT_SET_MASH_AUTO_FILL_MODE(iVar0, iParam16, iParam17);
			break;
		case 14:
			HUD::_UIPROMPT_SET_MASH_INDEFINITELY_MODE(iVar0);
			break;
		case 16:
			HUD::_UIPROMPT_SET_TARGET_MODE(iVar0, 0.5f, 0.1f, 0);
			break;
		case 10:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 4:
		case 5:
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, bParam24);
			break;
		case 11:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 12:
			HUD::_UIPROMPT_SET_MASH_MANUAL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 13:
			HUD::_UIPROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 15:
			HUD::_UIPROMPT_SET_ROTATE_MODE(iVar0, iParam20, iParam21);
			HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 10, true);
			break;
	}
	HUD::_UIPROMPT_REGISTER_END(iVar0);
	((*Global_1949759)[iParam0 /*23*/])->f_3 = iVar0;
	func_110(iParam0, 1);
	func_111(iParam0, 1);
	func_112(iParam0, 128);
}

void func_109(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1949759)[iParam0 /*23*/])->f_1 = (((*Global_1949759)[iParam0 /*23*/])->f_1 - (((*Global_1949759)[iParam0 /*23*/])->f_1 && iParam1));
}

void func_110(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iParam0 /*23*/])->f_3))
	{
		if (((*Global_1949759)[iParam0 /*23*/])->f_5 == 5 && !func_106(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1949759)[iParam0 /*23*/])->f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1949759)[iParam0 /*23*/])->f_3, bParam1);
		}
	}
}

void func_111(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iParam0 /*23*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1949759)[iParam0 /*23*/])->f_3, bParam1);
	}
}

void func_112(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1949759)[iParam0 /*23*/])->f_1 = (((*Global_1949759)[iParam0 /*23*/])->f_1 || iParam1);
}

bool func_113(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0.f_1 = 10;
	func_143(&Var0, 1356624740);
	return func_144(iParam0, &Var0, uParam1, 0);
}

struct<2> func_114(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_115(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

int func_116(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<2> Var0;
	struct<2> Var12;
	var uVar25;

	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_145(iParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

void func_117(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_118(int iParam0)
{
	return func_106(iParam0, 2);
}

int func_119()
{
	return Global_1051202->f_12;
}

char* func_120()
{
	return "unnamed";
}

int func_121(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case -1:
			iVar0 = 16;
			break;
		case 0:
			iVar0 = 32;
			break;
		case 1:
			iVar0 = 64;
			break;
		case 2:
			iVar0 = 128;
			break;
		case 3:
			iVar0 = 256;
			break;
		case 4:
			iVar0 = 512;
			break;
		case 5:
			iVar0 = 1024;
			break;
		case 6:
			iVar0 = 2048;
			break;
		case 8:
			iVar0 = 4096;
			break;
	}
	return iVar0;
}

int func_122(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return func_146(35, iParam0);
}

int func_123(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1099294->f_1;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 26;
	}
	if (&Global_1275573->f_22[iParam0])
	{
		return ((*Global_1097610)[iParam0 /*51*/])->f_1;
	}
	return 26;
}

bool func_124(int iParam0)
{
	if (func_147(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) != 1)
		{
			func_148(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) == 1;
}

int func_125(var uParam0, struct<21> Param1)
{
	if (!func_149(uParam0))
	{
		return 0;
	}
	*(uParam0->f_2[*uParam0 /*21*/]) = { Param1 };
	*uParam0++;
	return 1;
}

void func_126(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_127(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(&(Global_1070356->f_20795.f_353[iParam0 /*11*/]), iParam1);
}

void func_128()
{
	SCRIPTS::_0x20F4CB76689ACDBC(&(Global_1070356->f_19683.f_260));
}

int func_129(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar6 = ENTITY::_0x886171A12F400B89(iParam2, iVar0, 3);
	if (iVar6 >= iParam3)
	{
	}
	iVar4 = 0;
	while (iVar4 < iVar6)
	{
		iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar0);
		iVar2 = iVar1;
		if (ENTITY::IS_ENTITY_AN_OBJECT(iVar2))
		{
			iVar5 = 0;
			while (iVar5 < *iParam1)
			{
				if (iParam1[iVar5] == 0)
				{
					(*uParam0)[iVar3] = iVar1;
					iVar3++;
					iVar5 = *iParam1;
				}
				else if (ENTITY::GET_ENTITY_MODEL(iVar2) == iParam1[iVar5])
				{
					(*uParam0)[iVar3] = iVar1;
					iVar3++;
					iVar5 = *iParam1;
				}
				iVar5++;
			}
		}
		if (iVar3 >= iParam3)
		{
			ITEMSET::DESTROY_ITEMSET(iVar0);
			return iParam3;
		}
		iVar4++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar3;
}

void func_130(int iParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::_DELETE_VOLUME(iParam0);
	}
}

int func_131(int iParam0)
{
	vector3 vVar0;

	if (!func_72(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_132(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_72(iParam0, 0))
	{
		return 0;
	}
	if (Global_1939178->f_6)
	{
		return 0;
	}
	iVar0 = func_150(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_151("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_152(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_153(Var4.f_4))
			{
			}
			else if (WEAPON::_0x5C2EA6C44F515F34(Var4.f_4) == iVar0)
			{
				func_154(iVar1);
				return 1;
			}
			iVar3++;
		}
		func_154(iVar1);
	}
	return 0;
}

bool func_133(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_72(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_155(iParam0);
	switch (iVar0)
	{
		case -636562458:
		case 252325943:
		case 829857647:
		case 1216664798:
		case 1341188928:
			break;
		default:
			return false;
	}
	iVar1 = func_156(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_157(&(Global_17172.f_54.f_644.f_1353.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_158(iParam0);
	iVar2 = func_157(&(Global_17172.f_54.f_644.f_1353.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == &Global_17172.f_54.f_644.f_1353.f_5[iVar2 /*17*/];
}

int func_134(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_72(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_131(iParam0);
	if (iVar1 == joaat("AMMO") || (bParam1 && iVar1 == joaat("WEAPON")))
	{
		iVar2 = func_150(iParam0, 1);
		if (iVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iVar2);
		}
	}
	else if (iVar1 == joaat("WEAPON"))
	{
		return func_159(iParam0, 0);
	}
	if (func_160(iParam0, joaat("DEFAULT")) != 0)
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_161(bParam2), iParam0, bParam3);
	}
	else
	{
		Var3 = { func_162(iParam0, bParam2) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_161(bParam2), &Var3, bParam3);
	}
	return iVar0;
}

int func_135()
{
	return Global_1132549->f_137;
}

void func_136(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_139() - fParam1);
	func_163(uParam0, 1);
	func_164(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_137(var uParam0)
{
	return func_165(*uParam0, 1);
}

bool func_138(var uParam0)
{
	return func_165(*uParam0, 2);
}

float func_139()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

int func_140()
{
	return (Global_1070356->f_26934[46 /*4*/])->f_3;
}

struct<4> func_141(bool bParam0)
{
	int iVar0;

	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_161(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1272170))
			{
				*Global_1272170 = { func_167(joaat("CHARACTER"), func_166(), -1591664384, bParam0) };
			}
			return *Global_1272170;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_12)))
			{
				Global_1272170->f_12 = { func_167(joaat("CHARACTER"), func_166(), -1591664384, 0) };
			}
			return Global_1272170->f_12;
		}
	}
	return func_167(joaat("CHARACTER"), func_166(), -1591664384, bParam0);
}

int func_142(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	struct<4> Var0;
	struct<10> Var4;
	int iVar26;
	int iVar27;

	func_168(&iParam0);
	if (!func_72(iParam0, 0) && !func_170(func_169(iParam0), 2))
	{
		return 0;
	}
	if (!bParam3 && func_160(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam3 = true;
	}
	if (func_171(iParam0) && WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		Var0 = { func_172(0) };
		Var4.f_9 = -1591664384;
		if (!func_173(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
		{
			return 0;
		}
		else if (func_174(iParam0, &Var4, 1728382685 /* GXTEntry: "Right" */))
		{
			return 0;
		}
		if (func_175(iParam0, 1))
		{
			if (!func_173(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
			{
				return 0;
			}
			else if (func_174(iParam0, &Var4, -649335959 /* GXTEntry: "Left" */))
			{
				return 0;
			}
		}
		return 1;
	}
	iVar26 = iParam5;
	if (iParam5 < 0)
	{
		iVar26 = func_176(iParam0, uParam1, bParam3, bParam4);
	}
	if (iVar26 < 0)
	{
		return 0;
	}
	else if (iVar26 == 0)
	{
		return 1;
	}
	iVar27 = func_177(iParam0, *uParam1, uParam1->f_4, bParam4, bParam3, iParam6);
	if ((iVar27 + iParam2) > iVar26)
	{
		return 1;
	}
	return 0;
}

void func_143(var uParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	if (iParam1 == 0)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (&uParam0->f_1[iVar1] == iParam1)
		{
			return;
		}
		switch (iParam1)
		{
			case 291123060:
			case 617531372:
				if (&uParam0->f_1[iVar1] == 617531372 || &uParam0->f_1[iVar1] == 291123060)
				{
					bVar0 = true;
				}
				break;
			case 1356624740:
			case 1884295263:
				if (&uParam0->f_1[iVar1] == 1356624740 || &uParam0->f_1[iVar1] == 1884295263)
				{
					bVar0 = true;
				}
				break;
			case -1850666435:
			case 1551239286:
			case 1937393363:
				if ((&uParam0->f_1[iVar1] == 1551239286 || &uParam0->f_1[iVar1] == -1850666435) || &uParam0->f_1[iVar1] == 1937393363)
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			uParam0->f_1[iVar1] = iParam1;
			return;
		}
		iVar1++;
	}
	if (*uParam0 >= 10)
	{
		return;
	}
	uParam0->f_1[*uParam0] = iParam1;
	*uParam0++;
}

int func_144(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_178(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_179(uParam2, iParam0, Var1);
	return 1;
}

int func_145(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	var uVar2;
	struct<17> Var3;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return 0;
	}
	if (NETWORK::_0xFBE782B3165AC8EC(iParam0))
	{
		return 1;
	}
	if (bParam7)
	{
		bVar0 = (_NAMESPACE26::_0xD6F6ACF4392187FB(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) && _NAMESPACE26::_0x0F99F6436528A089(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())));
		bParam7 = bVar0;
	}
	POSSE::_0xC08AFF658B2E51DA(&iVar1);
	if (iVar1 != 0)
	{
		func_180(iParam2, -372840566);
	}
	if (!bParam7)
	{
		if (!NETWORK::_0x64A36BA85CE01A81(&uVar2, &(uParam3->f_1), &(iParam2->f_1), uParam1))
		{
			return 0;
		}
	}
	else if (!NETWORK::_0x7A8E8DF782B47EB0(&uVar2, &(iParam2->f_1), uParam1))
	{
		return 0;
	}
	Var3.f_1 = 11;
	Var3.f_16 = 255;
	Var3.f_13 = iParam4;
	Var3.f_16 = iParam5;
	Var3.f_14 = iParam6;
	Var3 = { *iParam2 };
	func_181(uParam1, iParam0, Var3);
	return 1;
}

int func_146(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_182(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 == func_183())
	{
		return func_182(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1275573->f_22[iParam1])
	{
		return func_182(&(((*Global_1097610)[iParam1 /*51*/])->f_4), iVar0, 5);
	}
	return 0;
}

int func_147(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26832), iParam0))
	{
		return 1;
	}
	return 0;
}

void func_148(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_16 != 0 || Global_1572887->f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (!&Global_1275573->f_22[iVar0])
	{
		func_184(iParam0);
		return;
	}
	if (&Global_1070356->f_19683.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_185(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 1;
}

int func_149(var uParam0)
{
	if (*uParam0 >= 40)
	{
		return 0;
	}
	return 1;
}

int func_150(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_72(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_131(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_0x5C2EA6C44F515F34(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_0x1F7977C9101F807F(iParam0))
	{
		return iParam0;
	}
	if (func_186(iParam0, 1399091007))
	{
		func_187(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_151(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_161(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_152(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_153(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

int func_154(int iParam0)
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

int func_155(int iParam0)
{
	struct<2> Var0;

	if (!func_72(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_156(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CLOTHING_BLEND_FRECKLES_NONE"):
			return 241235545;
		case joaat("CLOTHING_BLEND_MOLES_NONE"):
			return 1827902148;
		case joaat("CLOTHING_BLEND_SPOTS_NONE"):
			return 1301555144;
		case joaat("CLOTHING_BLEND_FOUNDATION_NONE"):
			return -2056583192;
		case joaat("CLOTHING_BLEND_BLUSHER_NONE"):
			return 1015239729;
		case joaat("CLOTHING_BLEND_EYELINER_NONE"):
			return -340627321;
		case joaat("CLOTHING_BLEND_EYESHADOW_NONE"):
			return -875805376;
		case joaat("CLOTHING_BLEND_LIPSTICK_NONE"):
			return -768760704;
		case -28107610:
			return -2118203104;
		case -896045342:
			return 1285634184;
		case -643819742:
			return -559080197;
		case joaat("CLOTHING_BLEND_COMPLEXION_NONE"):
			return -1180698265;
		case joaat("CLOTHING_BLEND_COMPLEXION_2_NONE"):
			return -487028314;
		case 1687431937:
			return -1811760631;
		case joaat("CLOTHING_BLEND_SCAR_NONE"):
			return 1858448324;
		default:
			break;
	}
	return 0;
}

int func_157(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (((*uParam0)[iVar0 /*17*/])->f_1 == -1)
		{
		}
		else
		{
			if (((*uParam0)[iVar0 /*17*/])->f_16 == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_158(int iParam0)
{
	int iVar0;

	iVar0 = func_155(iParam0);
	switch (iVar0)
	{
		case 1341188928:
			return -2056583192;
		case 1216664798:
			return 1015239729;
		case 829857647:
			return -340627321;
		case -636562458:
			return -875805376;
		case 252325943:
			return -768760704;
		default:
			break;
	}
	return 0;
}

int func_159(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_188(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_189(&Var0, func_172(0));
	}
	if (!func_190(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_154(iVar14);
	return uVar15;
}

int func_160(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

int func_161(bool bParam0)
{
	if (func_2() == -1)
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

struct<4> func_162(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_191(iParam0, bParam1, 0) };
	return func_167(iParam0, Var0, Var0.f_4, bParam1);
}

void func_163(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_164(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_165(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

struct<4> func_166()
{
	struct<4> Var0;

	return Var0;
}

struct<4> func_167(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, bool bParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_72(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_161(bParam6), &uParam1, iParam0, bParam5, &Var0);
	return Var0;
}

int func_168(var uParam0)
{
	if (!func_72(*uParam0, 0))
	{
		return 0;
	}
	if (!func_192(*uParam0))
	{
		return 0;
	}
	switch (*uParam0)
	{
		case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
			*uParam0 = joaat("UPGRADE_FSH_BAIT_CRICKET");
			break;
		case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
			*uParam0 = joaat("UPGRADE_FSH_BAIT_WORM");
			break;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			*uParam0 = joaat("CONSUMABLE_COCAINE_CHEWING_GUM");
			break;
		case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
			*uParam0 = joaat("CONSUMABLE_CHEWING_TOBACCO");
			break;
		case -1424823393: /* GXTEntry: "Opened Cigarettes" */
			*uParam0 = joaat("CONSUMABLE_CIGARETTE_BOX");
			break;
		default:
			return 0;
	}
	return 1;
}

int func_169(int iParam0)
{
	return iParam0;
}

int func_170(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(iParam0, iParam1);
}

bool func_171(int iParam0)
{
	return func_131(iParam0) == joaat("WEAPON");
}

struct<4> func_172(bool bParam0)
{
	int iVar0;

	iVar0 = func_161(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_4)))
		{
			Global_1272170->f_4 = { func_167(923904168, func_141(bParam0), -740156546, bParam0) };
		}
		return Global_1272170->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_16)))
		{
			Global_1272170->f_16 = { func_167(923904168, func_141(bParam0), -740156546, 0) };
		}
		return Global_1272170->f_16;
	}
	return func_167(923904168, func_141(bParam0), -740156546, 0);
}

bool func_173(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	return func_177(iParam0, *uParam1, iParam2, bParam3, 1, iParam4) > 0;
}

int func_174(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_193(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

int func_175(int iParam0, bool bParam1)
{
	if (func_155(iParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
	{
		if (bParam1)
		{
			return func_194();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_176(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_72(iParam0, 0) && !func_170(func_169(iParam0), 2))
	{
		return 0;
	}
	if (func_131(iParam0) == joaat("FEE"))
	{
		return -1;
	}
	if (!bParam2 && func_160(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_0xE80E50BEE276A54A(iParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_161(bParam3), iParam0);
}

int func_177(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_72(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_160(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_167(iParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_161(bParam6), &Var1, bParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_161(bParam6), iParam0, bParam8);
	}
	return iVar0;
}

void func_178(var uParam0)
{
	func_143(uParam0, 143479330);
	if (func_195() == 2026485318)
	{
		func_143(uParam0, 617531372);
	}
	else
	{
		func_143(uParam0, 291123060);
	}
}

void func_179(var uParam0, int iParam1, struct<14> Param2)
{
	int iVar0;
	struct<21> Var1;

	if (!func_196(uParam0))
	{
		return;
	}
	if (Global_1272170->f_2518 < 20)
	{
		Global_1272170->f_2518++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*(Global_1272170->f_2518.f_1[iVar0 /*21*/]) = { *(Global_1272170->f_2518.f_1[iVar0 + 1 /*21*/]) };
			iVar0++;
		}
	}
	Var1.f_7.f_2.f_1 = 10;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_6 = 1;
	Var1.f_7 = { Param2 };
	*(Global_1272170->f_2518.f_1[(Global_1272170->f_2518 - 1) /*21*/]) = { Var1 };
}

void func_180(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	if (RDR_RAGE_STORE_N_SR >= 11)
	{
		return;
	}
}

void func_181(var uParam0, int iParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_196(uParam0))
	{
		return;
	}
	if (Global_1272170->f_1991 < 20)
	{
		Global_1272170->f_1991++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*(Global_1272170->f_1991.f_1[iVar0 /*24*/]) = { *(Global_1272170->f_1991.f_1[iVar0 + 1 /*24*/]) };
			iVar0++;
		}
	}
	Var1.f_7.f_1 = 11;
	Var1.f_7.f_16 = 255;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_7 = { Param2 };
	Var1.f_6 = 1;
	*(Global_1272170->f_1991.f_1[(Global_1272170->f_1991 - 1) /*24*/]) = { Var1 };
}

bool func_182(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_183()
{
	return Global_1099294->f_339;
}

void func_184(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_16 != 0 || Global_1572887->f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (&Global_1070356->f_19683.f_1[iVar0 /*8*/] == 0)
	{
		return;
	}
	func_185(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 0;
}

void func_185(int iParam0)
{
	if ((Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 != 0)
	{
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_2 = 0;
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 = 0;
	}
}

int func_186(int iParam0, int iParam1)
{
	if (!func_72(iParam0, 0))
	{
		return func_197(func_169(iParam0), iParam1);
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(iParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

void func_187(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case 1234009870: /* GXTEntry: "Revolver Cartridges - Regular" */
			*uParam1 = joaat("REVOLVER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case -1202134084: /* GXTEntry: "Opened Revolver Cartridges" */
			*uParam1 = joaat("REVOLVER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case 1297050066: /* GXTEntry: "Revolver Cartridges - Express" */
			*uParam1 = joaat("REVOLVER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REVOLVER_EXPRESS");
			break;
		case -1780177928: /* GXTEntry: "Revolver Cartridges - High Velocity" */
			*uParam1 = joaat("REVOLVER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REVOLVER_HIGH_VELOCITY");
			break;
		case -1467836497: /* GXTEntry: "Pistol Cartridges - Regular" */
			*uParam1 = joaat("PISTOL_AMMO_BOX");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case 1723805622: /* GXTEntry: "Opened Pistol Cartridges" */
			*uParam1 = joaat("PISTOL_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case -153287664: /* GXTEntry: "Pistol Cartridges - Express" */
			*uParam1 = joaat("PISTOL_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_PISTOL_EXPRESS");
			break;
		case 1845082736: /* GXTEntry: "Pistol Cartridges - High Velocity" */
			*uParam1 = joaat("PISTOL_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_PISTOL_HIGH_VELOCITY");
			break;
		case 406755377: /* GXTEntry: "Rifle Cartridges - Regular" */
			*uParam1 = joaat("RIFLE_AMMO_BOX");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case 1469029564: /* GXTEntry: "Opened Rifle Cartridges" */
			*uParam1 = joaat("RIFLE_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case 45760211: /* GXTEntry: "Rifle Cartridges - Express" */
			*uParam1 = joaat("RIFLE_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_RIFLE_EXPRESS");
			break;
		case -276295943: /* GXTEntry: "Rifle Cartridges - High Velocity" */
			*uParam1 = joaat("RIFLE_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_RIFLE_HIGH_VELOCITY");
			break;
		case -2029793397: /* GXTEntry: "Repeater Cartridges - Regular" */
			*uParam1 = joaat("REPEATER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case 2120467495: /* GXTEntry: "Opened Repeater Cartridges" */
			*uParam1 = joaat("REPEATER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case -2075613923: /* GXTEntry: "Repeater Cartridges - Express" */
			*uParam1 = joaat("REPEATER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REPEATER_EXPRESS");
			break;
		case 122656217: /* GXTEntry: "Repeater Cartridges - High Velocity" */
			*uParam1 = joaat("REPEATER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REPEATER_HIGH_VELOCITY");
			break;
		case 2107187484: /* GXTEntry: "Shotgun Shells - Regular" */
			*uParam1 = joaat("SHOTGUN_AMMO_BOX");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case -791844268: /* GXTEntry: "Opened Shotgun Shells" */
			*uParam1 = joaat("SHOTGUN_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case 305770744: /* GXTEntry: "Shotgun - Slug" */
			*uParam1 = joaat("SHOTGUN_AMMO_BOX_SLUG");
			*uParam2 = joaat("AMMO_SHOTGUN_SLUG");
			break;
		case 550900979: /* GXTEntry: "Rifle Cartridges - Varmint" */
			*uParam1 = joaat("22_AMMO_BOX");
			*uParam2 = joaat("AMMO_22");
			break;
	}
}

struct<14> func_188(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

void func_189(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_190(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_161(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

struct<5> func_191(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_141(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_131(iParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_167(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			break;
		case joaat("WEAPON"):
			Var0 = { func_172(bParam1) };
			if (bParam2 && func_175(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_173(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_173(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_174(iParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
		case joaat("COACH"):
		case joaat("HORSE"):
			Var0.f_4 = 1782082944;
			break;
		case joaat("EMOTE"):
			Var0.f_4 = -1591664384;
			Var0 = { func_198(bParam1) };
			switch (func_155(iParam0))
			{
				case -1070622585:
					Var0.f_4 = -6796437;
					break;
				case -1057349201:
					Var0.f_4 = 1473261684;
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
		case joaat("DOG"):
			if (func_199(iParam0, -1823706425))
			{
				Var0 = { func_167(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_199(iParam0, -1483207246))
			{
				Var0 = { func_167(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1911121386))
			{
				Var0 = { func_167(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_199(iParam0, -1653629781))
			{
				Var0 = { func_167(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 1384535894);
			}
			break;
		default:
			if (INVENTORY::_0x780C5B9AE2819807(iParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -833319691))
			{
				Var28.f_9 = -1591664384;
				if (!func_200(Var0, &Var28, bParam1, 0, -1))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var28.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -718417579))
			{
				Var0.f_4 = -718417579;
			}
			else if (func_199(iParam0, -1653629781))
			{
				Var0 = { func_167(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 1384535894);
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("CHARACTER"));
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

bool func_192(int iParam0)
{
	return func_186(iParam0, 1279601681);
}

int func_193(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_161(0);
	*uParam1 = { func_167(iParam0, func_172(0), iParam3, 0) };
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

bool func_194()
{
	return (func_201(joaat("UPGRADE_OFFHAND_HOLSTER"), 0, 0, 0) > 0 && func_202(func_167(joaat("WARDROBE"), func_141(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_195()
{
	return Global_1951141->f_1;
}

int func_196(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return 0;
	}
	return 1;
}

int func_197(int iParam0, int iParam1)
{
	if (!func_170(iParam0, 2))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_0x99C6EA66DFE73757(iParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

struct<4> func_198(bool bParam0)
{
	int iVar0;

	iVar0 = func_161(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_8)))
		{
			Global_1272170->f_8 = { func_167(271701509, func_141(bParam0), 12999093, 0) };
		}
		return Global_1272170->f_8;
	}
	return func_167(271701509, func_141(bParam0), 12999093, 0);
}

int func_199(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_155(iParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &bVar0))
		{
			if (func_203(iParam0, iParam1, bVar0))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

bool func_200(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_204(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_201(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_205(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_161(bParam1), iParam0, bParam3);
}

int func_202(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, int iParam6)
{
	return func_206(&uParam0, bParam4, bParam5, iParam6);
}

int func_203(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2 == 487172188)
	{
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(iParam1, joaat("DEFAULT")) == -1925887917)
		{
			return 0;
		}
	}
	return ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iParam1, bParam2);
}

int func_204(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_161(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

bool func_205(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(iParam0);
}

int func_206(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_207(uParam0, bParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_207(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_161(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, uParam0, bParam1, &uVar0))
	{
		return 0;
	}
	if (!func_204(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return 0;
	}
	return 1;
}

