#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	struct<24> Local_5 = { 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1048576000, 1048576000, 1193033728, 1092616192, 1065353216, 0, 0 } ;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
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
	var uLocal_50 = -1;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 1097859072;
	var uLocal_60 = 1000;
	var uLocal_61 = 1067450368;
	var uLocal_62 = 5000;
	var uLocal_63 = 42;
	var uLocal_64 = 1103626240;
	var uLocal_65 = 1077936128;
	var uLocal_66 = 1106247680;
	var uLocal_67 = 1103101952;
	var uLocal_68 = 1097859072;
	var uLocal_69 = 1103626240;
	var uLocal_70 = 0;
	bool bLocal_71 = false;
	var uLocal_72[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_83 = false;
	var uLocal_84 = 1;
	var uLocal_85 = 0;
	int iLocal_86 = 0;
	bool bLocal_87 = false;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
#endregion

void __EntryFunction__()
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		if (func_2())
		{
			func_3(3);
		}
		switch (iLocal_3)
		{
			case 0:
				iLocal_38 = func_4(Global_1425351->f_18);
				func_5(&uLocal_42);
				if (!func_6(iLocal_38) || func_8(func_7(Global_1425351->f_18)))
				{
					func_3(3);
				}
				else
				{
					func_9(&uLocal_39);
					func_3(1);
				}
				break;
			case 1:
				if (func_10(&uLocal_39, 5f))
				{
					if (func_11())
					{
						func_12(&uLocal_39);
						func_3(2);
					}
				}
				break;
			case 2:
				if (func_13())
				{
					func_3(3);
				}
				break;
			case 3:
				func_1();
				break;
		}
		BUILTIN::WAIT(0);
	}
}

void func_1()
{
	if (func_14(bLocal_71, bLocal_83))
	{
		func_15(bLocal_83, 1, 1);
	}
	func_16(0);
	if (func_6(iLocal_38) && func_17(iLocal_38, 0))
	{
		func_18(iLocal_38, 0, 1, 0, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(bLocal_83))
	{
		func_19(&bLocal_83);
	}
	func_20();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_2()
{
	if (func_21() != Global_1425351->f_18)
	{
		if (iLocal_3 < 2)
		{
			return 1;
		}
		else if (!func_22(bLocal_71, 100f, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_3(int iParam0)
{
	iLocal_3 = iParam0;
}

int func_4(int iParam0)
{
	switch (iParam0)
	{
		case 105:
			return 82;
		default:
			break;
	}
	return -1;
}

void func_5(var uParam0)
{
	func_23(uParam0, 0);
	func_24(uParam0, 0);
	func_25(uParam0, 1);
	func_26(uParam0, 1);
	func_27(uParam0, 0);
	func_28(uParam0, 1);
	func_29(uParam0, 1, 1, 1);
}

bool func_6(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

Vector3 func_7(int iParam0)
{
	switch (iParam0)
	{
		case 105:
			return 1300.025f, -1319.031f, 75.5864f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_8(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_9(var uParam0)
{
	func_30(uParam0, 0f);
}

int func_10(var uParam0, float fParam1)
{
	if (!func_31(uParam0))
	{
		return 0;
	}
	if (func_32(uParam0) > fParam1)
	{
		return 1;
	}
	return 0;
}

int func_11()
{
	if (func_6(iLocal_38))
	{
		if (func_33(iLocal_38, 0))
		{
			bLocal_71 = func_34(iLocal_38, 0, 0, 0, 1, 1);
			if (ENTITY::DOES_ENTITY_EXIST(bLocal_71))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_12(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_13()
{
	int iVar0;

	func_35();
	switch (iLocal_4)
	{
		case 0:
			iLocal_86 = func_36();
			if (func_37(iLocal_86))
			{
				if (func_38(iLocal_86, Global_1425351->f_18))
				{
					func_16(1);
					func_39(1);
				}
				else
				{
					func_40(iLocal_86);
				}
			}
			else
			{
				func_39(7);
			}
			break;
		case 1:
			if (func_37(iLocal_86))
			{
				if (func_41())
				{
					PED::SET_PED_RESET_FLAG(bLocal_71, 49, true);
					TASK::CLEAR_PED_TASKS(bLocal_71, 1, 0);
					func_42();
					func_39(2);
				}
				else
				{
					func_40(iLocal_86);
					func_39(0);
				}
			}
			break;
		case 2:
			ENTITY::_0xC3ABCFBC7D74AFA5(bLocal_83, 7, 1);
			PED::SET_PED_RESET_FLAG(bLocal_71, 49, true);
			if (func_43(&Local_5, 106))
			{
				TASK::CLEAR_PED_TASKS(bLocal_71, 1, 0);
				if ((ENTITY::DOES_ENTITY_EXIST(bLocal_83) && func_44(bLocal_71, bLocal_83, 1, 1) < 50f) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(bLocal_83))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_GO_TO_ENTITY(0, bLocal_83, 20000, 0.5f, 1f, 2f, 0);
					TASK::TASK_PICKUP_CARRIABLE_ENTITY(0, bLocal_83);
					func_45(bLocal_71, &iVar0, 0, 0, 1, 1);
					func_39(3);
				}
				else
				{
					if (ENTITY::DOES_ENTITY_EXIST(bLocal_83))
					{
						func_19(&bLocal_83);
					}
					func_39(0);
				}
			}
			break;
		case 3:
			ENTITY::_0xC3ABCFBC7D74AFA5(bLocal_83, 7, 1);
			PED::SET_PED_RESET_FLAG(bLocal_71, 49, true);
			if (func_14(bLocal_71, bLocal_83))
			{
				TASK::CLEAR_PED_TASKS(bLocal_71, 1, 0);
				func_46();
				func_39(4);
			}
			break;
		case 4:
			PED::SET_PED_RESET_FLAG(bLocal_71, 49, true);
			if (func_43(&Local_5, 106))
			{
				TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(bLocal_71, bLocal_83, func_7(Global_1425351->f_18), 1f, 1);
				func_39(5);
			}
			break;
		case 5:
			PED::SET_PED_RESET_FLAG(bLocal_71, 49, true);
			if (!func_14(bLocal_71, bLocal_83))
			{
				func_19(&bLocal_83);
				func_39(0);
			}
			break;
		case 6:
			break;
		case 7:
			return 1;
	}
	return 0;
}

int func_14(bool bParam0, bool bParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		return 0;
	}
	if (PED::_0x09B83E68DE004CD4(bParam1) != bParam0)
	{
		return 0;
	}
	iVar0 = ENTITY::_0x61914209C36EFDDB(bParam1);
	if (iVar0 == 5)
	{
		return 1;
	}
	if (iVar0 == 7)
	{
		return 1;
	}
	return 0;
}

void func_15(bool bParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(bParam0))
		{
			ENTITY::DETACH_ENTITY(bParam0, bParam1, bParam2);
		}
	}
}

void func_16(bool bParam0)
{
	PED::SET_PED_CONFIG_FLAG(bLocal_71, 123, !bParam0);
	PED::SET_PED_CONFIG_FLAG(bLocal_71, 374, !bParam0);
}

int func_17(int iParam0, bool bParam1)
{
	if (func_47() != -1)
	{
		return 0;
	}
	if (!func_6(iParam0))
	{
		return 0;
	}
	if (!func_48(iParam0) && bParam1)
	{
		return 0;
	}
	return func_49(iParam0, 1);
}

void func_18(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_6(iParam0))
	{
		return;
	}
	if (!func_49(iParam0, 1))
	{
		return;
	}
	if (!func_49(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_48(iParam0)) && func_50(iParam0))
	{
		return;
	}
	func_51(iParam0, 1);
	func_52(iParam0);
	if (func_54(func_53(iParam0)))
	{
		iVar0 = func_55(iParam0);
		if (!PERSCHAR::_0x800DF3FC913355F3(iVar0))
		{
			return;
		}
		PERSCHAR::_0xBB68908CD11AEBDC(iVar0);
		PERSCHAR::_0xB65E7F733956CF25(iVar0);
		if (bParam2 && !PERSCHAR::_0xEB98B38CA60742D7(iVar0))
		{
			PERSCHAR::_0x631CD2D77FDC0316(iVar0);
		}
		iVar1 = PERSCHAR::_0x31C70A716CAE1FEE(iVar0);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			PED::SET_PED_CONFIG_FLAG(iVar1, 171, false);
		}
		if (bParam1)
		{
			PERSCHAR::_0x7B204F88F6C3D287(iVar0);
		}
		func_51(iParam0, 16);
	}
	if (func_49(iParam0, 128) && !bParam3)
	{
		func_56(iParam0, 0);
	}
}

void func_19(bool bParam0)
{
	DECORATOR::DECOR_REMOVE(*bParam0, func_57());
	PED::SET_PED_CONFIG_FLAG(*bParam0, 186, true);
}

void func_20()
{
	Global_1425351->f_17 = 0;
}

int func_21()
{
	return Global_1894899->f_2;
}

int func_22(bool bParam0, float fParam1, bool bParam2)
{
	if (ENTITY::IS_ENTITY_ON_SCREEN(bParam0) && func_58(Global_35, bParam0, 0, fParam1, bParam2))
	{
		return 1;
	}
	return 0;
}

void func_23(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_59(&(uParam0->f_1), 16384);
	}
	else
	{
		func_60(&(uParam0->f_1), 16384);
	}
}

void func_24(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_59(&(uParam0->f_1), 2048);
	}
	else
	{
		func_60(&(uParam0->f_1), 2048);
	}
}

void func_25(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_59(&(uParam0->f_1), 256);
	}
	else
	{
		func_60(&(uParam0->f_1), 256);
	}
}

void func_26(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_60(uParam0, 16);
	}
	else
	{
		func_59(uParam0, 67108864);
		func_59(uParam0, 16);
	}
}

void func_27(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_59(&(uParam0->f_1), 128);
	}
	else
	{
		func_60(&(uParam0->f_1), 128);
	}
}

void func_28(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_60(uParam0, 256);
	}
	else
	{
		func_59(uParam0, 256);
	}
}

void func_29(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_60(uParam0, 268435456);
	}
	else
	{
		func_59(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_60(uParam0, 1073741824 /* Float: 2f */);
	}
	else
	{
		func_59(uParam0, 1073741824 /* Float: 2f */);
	}
	if (!bParam3)
	{
		func_60(uParam0, 536870912);
	}
	else
	{
		func_59(uParam0, 536870912);
	}
}

void func_30(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_61() - fParam1);
	func_62(uParam0, 1);
	func_63(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_31(var uParam0)
{
	return func_64(*uParam0, 1);
}

float func_32(var uParam0)
{
	if (!func_31(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_65(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_61() - uParam0->f_1);
}

bool func_33(int iParam0, bool bParam1)
{
	if (func_47() != -1)
	{
		return false;
	}
	if (!func_6(iParam0))
	{
		return false;
	}
	if (!PERSCHAR::_0x800DF3FC913355F3(func_55(iParam0)))
	{
		return false;
	}
	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(func_66(iParam0)))
	{
		return false;
	}
	return !PERSCHAR::_0xEB98B38CA60742D7(func_55(iParam0));
}

int func_34(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	if (!func_67(iParam0, 1))
	{
		return 0;
	}
	if (func_54(func_53(iParam0)))
	{
		iVar1 = func_55(iParam0);
		if (!PERSCHAR::_0x800DF3FC913355F3(iVar1))
		{
			return 0;
		}
		if (bParam1)
		{
			if (PERSCHAR::_0xEB98B38CA60742D7(iVar1))
			{
				PERSCHAR::_0x49A8C2CD97815215(iVar1);
			}
		}
		PERSCHAR::_0x6759BEE6762E140B(iVar1);
		iVar0 = PERSCHAR::_0x0CADC3A977997472(iVar1, false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return 0;
		}
	}
	if ((bParam4 && !func_48(iParam0)) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 171, bParam5);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	func_68(iParam0, 1);
	func_69(iParam0);
	if (bParam3)
	{
		func_68(iParam0, 16);
	}
	if (!bParam2)
	{
	}
	return iVar0;
}

void func_35()
{
	int iVar0;

	if (!bLocal_87 && func_70(bLocal_71, 0, &uLocal_42, &uLocal_70, 0, 0))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		if (func_14(bLocal_71, bLocal_83))
		{
			TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(0, bLocal_83, ENTITY::GET_ENTITY_COORDS(bLocal_71, true, false), 2f, 3);
		}
		TASK::_TASK_SMART_FLEE_STYLE_PED(false, Global_35, 4, 0, -1082130432, -1, false);
		func_45(bLocal_71, &iVar0, 0, 0, 1, 1);
		bLocal_87 = true;
		func_39(6);
	}
}

int func_36()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!func_8(*((*Global_1425351)[iVar0 /*3*/])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_37(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return 0;
	}
	return 1;
}

bool func_38(int iParam0, int iParam1)
{
	return VOLUME::_0xF256A75210C5C0EB(func_71(iParam1), *((*Global_1425351)[iParam0 /*3*/]));
}

void func_39(int iParam0)
{
	iLocal_4 = iParam0;
}

void func_40(int iParam0)
{
	*((*Global_1425351)[iParam0 /*3*/]) = { 0f, 0f, 0f };
}

int func_41()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_72(&uLocal_72, &uLocal_84, 10, *((*Global_1425351)[iLocal_86 /*3*/]), 15f, 0, 0, 0, -1, 0, 0, -1082130432 /* Float: -1f */, 0, 0);
	if (iVar0 <= 0)
	{
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		if (!PED::IS_PED_A_PLAYER(&(uLocal_72[iVar2])))
		{
			if (ENTITY::IS_ENTITY_DEAD(&(uLocal_72[iVar2])))
			{
				if (DECORATOR::DECOR_EXIST_ON(&(uLocal_72[iVar2]), func_57()) && DECORATOR::DECOR_GET_BOOL(&(uLocal_72[iVar2]), func_57()))
				{
					iVar1 = 1;
					bLocal_83 = &uLocal_72[iVar2];
				}
				else
				{
					Jump @183; //curOff = 145
					func_73(&(uLocal_72[iVar2]), 1);
					PED::SET_PED_CONFIG_FLAG(&(uLocal_72[iVar2]), 288, false);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uLocal_72[iVar2]);
					iVar2++;
				}
				return iVar1;
			}
		}
	}

void func_42()
{
	func_74(&Local_5);
	Local_5.f_1 = bLocal_71;
	Local_5.f_8 = { *((*Global_1425351)[iLocal_86 /*3*/]) };
	Local_5.f_17 = 15f;
	Local_5.f_18 = 15f;
	Local_5.f_21 = 1f;
	func_60(&(Local_5.f_23), 128);
	func_43(&Local_5, 106);
}

int func_43(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;

	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1) && !func_75(uParam0->f_23, 4))
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_1, 179, true);
	}
	switch (*uParam0)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1))
			{
				func_9(&(uParam0->f_5));
				if (PED::IS_PED_A_PLAYER(uParam0->f_1))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, uParam0->f_3, false);
					if (func_75(uParam0->f_23, 2048))
					{
						HUD::_0x8BC7C1F929D07BF3(724769646);
					}
				}
				if (uParam0->f_24 == 0)
				{
					PED::_0x7DE9692C6F64CFE8(Global_35, false, 0, false);
				}
				if (!func_75(uParam0->f_23, 4))
				{
					TASK::CLEAR_PED_SECONDARY_TASK(uParam0->f_1);
				}
				if (!func_75(uParam0->f_23, 2))
				{
					uParam0->f_2 = PED::_0x4C8B59171957BCF7(uParam0->f_1);
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2) && func_76(uParam0->f_1))
					{
						func_77(uParam0->f_1);
						iVar0 = func_78(uParam0->f_1, uParam0->f_8, 1f);
						switch (iVar0)
						{
							case 3:
								iVar1 = 131072;
								break;
							case 2:
								iVar1 = 262144;
								break;
						}
						TASK::TASK_DISMOUNT_ANIMAL(uParam0->f_1, iVar1, 0, 0, 0, false);
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_1, true))
					{
						iVar2 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_1, true);
						VEHICLE::BRING_VEHICLE_TO_HALT(iVar2, 5f, -1, false);
						iVar3 = func_78(uParam0->f_1, uParam0->f_8, 1f);
						switch (iVar3)
						{
							case 3:
								iVar4 = 131072;
								break;
							case 2:
								iVar4 = 262144;
								break;
						}
						TASK::TASK_LEAVE_ANY_VEHICLE(uParam0->f_1, 0, iVar4);
					}
					else
					{
						func_60(&(uParam0->f_23), 2);
					}
				}
				if (func_8(uParam0->f_14))
				{
					uParam0->f_14 = { uParam0->f_8 };
				}
				func_79(uParam0, 1, iParam1);
			}
			else
			{
				func_79(uParam0, 6, iParam1);
			}
			break;
		case 1:
			if (func_80(uParam0, iParam1))
			{
				func_9(&(uParam0->f_5));
				if (!func_81(uParam0, iParam1))
				{
					func_82();
				}
				func_79(uParam0, 2, iParam1);
			}
			break;
		case 2:
			if (func_81(uParam0, iParam1))
			{
				func_9(&(uParam0->f_5));
				if (!func_75(uParam0->f_23, 4))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_1, joaat("WEAPON_UNARMED"), false, 0, false, false);
					WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_1, joaat("WEAPON_UNARMED"), false, 1, false, false);
					TASK::TASK_SWAP_WEAPON(uParam0->f_1, 1, func_75(uParam0->f_23, 512), 0, 0);
				}
				func_79(uParam0, 3, iParam1);
			}
			break;
		case 3:
			if (func_83(uParam0, iParam1))
			{
				func_9(&(uParam0->f_5));
				if (!PED::_0xA911EE21EDF69DAF(uParam0->f_1))
				{
					func_60(&(uParam0->f_23), 256);
				}
				if (func_75(uParam0->f_23, 4096) && !PED::_0xA911EE21EDF69DAF(uParam0->f_1))
				{
					func_60(&(uParam0->f_23), 256);
					bVar6 = PED::_0x4C8B59171957BCF7(uParam0->f_1);
					if (func_44(bVar6, uParam0->f_1, 1, 1) < 5f)
					{
						iVar5 = func_84(bVar6);
						TASK::TASK_PICKUP_CARRIABLE_ENTITY(uParam0->f_1, iVar5);
					}
				}
				else if (!func_75(uParam0->f_23, 256))
				{
					iVar5 = PED::_0xD806CD2A4F2C2996(uParam0->f_1);
					TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(uParam0->f_1, iVar5, uParam0->f_14, uParam0->f_21, uParam0->f_4);
				}
				func_79(uParam0, 4, iParam1);
			}
			break;
		case 4:
			if (func_85(uParam0, iParam1))
			{
				func_9(&(uParam0->f_5));
				if (func_75(uParam0->f_23, 8192))
				{
					if (func_75(uParam0->f_23, 1024))
					{
						iVar7 = 64;
					}
					else
					{
						iVar7 = 2;
					}
					TASK::TASK_ENTER_ANIM_SCENE(uParam0->f_1, uParam0->f_25, &(uParam0->f_30), &(uParam0->f_26), uParam0->f_21, false, iVar7, 20000, -1082130432);
				}
				else
				{
					if (!func_8(uParam0->f_11))
					{
					}
					bVar8 = false;
					if (!func_75(uParam0->f_23, 1024))
					{
						bVar8 = (bVar8 || 1);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar9);
					if (!func_8(uParam0->f_11))
					{
						if (func_75(uParam0->f_23, 16))
						{
							TASK::TASK_GO_STRAIGHT_TO_COORD(false, uParam0->f_11, uParam0->f_21, func_86(!func_75(uParam0->f_23, 128), 20000, -1), uParam0->f_19, uParam0->f_17, 0);
						}
						else
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_11, uParam0->f_21, func_86(!func_75(uParam0->f_23, 128), 20000, -1), uParam0->f_17, bVar8, uParam0->f_19);
						}
					}
					if (func_75(uParam0->f_23, 16))
					{
						TASK::TASK_GO_STRAIGHT_TO_COORD(false, uParam0->f_8, uParam0->f_21, func_86(!func_75(uParam0->f_23, 128), 20000, -1), uParam0->f_19, uParam0->f_17, 0);
					}
					else
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_8, uParam0->f_21, func_86(!func_75(uParam0->f_23, 128), 20000, -1), uParam0->f_17, bVar8, uParam0->f_19);
					}
					if (func_75(uParam0->f_23, 1))
					{
						TASK::TASK_ACHIEVE_HEADING(0, uParam0->f_19, 0);
					}
					func_45(uParam0->f_1, &iVar9, 0, 0, 1, 1);
				}
				func_79(uParam0, 5, iParam1);
			}
			break;
		case 5:
			if (func_75(uParam0->f_23, 8192))
			{
				if (ANIMSCENE::_0x337F1CC8EE895601(uParam0->f_25, &(uParam0->f_30)))
				{
					iVar10 = 1;
				}
			}
			else if (!func_75(uParam0->f_23, 1))
			{
				uParam0->f_19 = ENTITY::GET_ENTITY_HEADING(uParam0->f_1);
			}
			if (!func_75(uParam0->f_23, 128) && func_87(&(uParam0->f_5), 15f))
			{
				iVar10 = 1;
			}
			if (!func_75(uParam0->f_23, 8192))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_1, 242628503, 1) == 8)
				{
					iVar10 = 1;
				}
				if ((func_8(uParam0->f_11) || !func_88(uParam0->f_1, 242628503)) || TASK::GET_SEQUENCE_PROGRESS(uParam0->f_1) > 0)
				{
					iVar11 = 1;
				}
				if (func_89(uParam0->f_1, uParam0->f_8, uParam0->f_19, uParam0->f_18, uParam0->f_20, func_75(uParam0->f_23, 8)) && (!func_75(uParam0->f_23, 64) || MISC::ABSF(func_90(uParam0->f_1, uParam0->f_8)) < uParam0->f_22))
				{
					iVar12 = 1;
				}
			}
			if ((iVar11 && iVar12) || iVar10)
			{
				if (func_75(uParam0->f_23, 32))
				{
					TASK::TASK_TURN_PED_TO_FACE_COORD(uParam0->f_1, uParam0->f_8, 0);
				}
				func_12(&(uParam0->f_5));
				func_79(uParam0, 6, iParam1);
				return 1;
			}
			break;
		case 6:
			return 1;
	}
	return 0;
}

float func_44(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0) && bParam3)
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam1) && bParam3)
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(bParam0, false, false), ENTITY::GET_ENTITY_COORDS(bParam1, false, false), bParam2);
}

void func_45(bool bParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
{
	TASK::CLOSE_SEQUENCE_TASK(*iParam1);
	if (!bParam5 || !ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (fParam2 > 0f)
		{
			if (fParam3 < fParam2)
			{
				fParam3 = fParam2;
			}
			TASK::_TASK_PERFORM_SEQUENCE_2(bParam0, *iParam1, fParam2, fParam3);
		}
		else
		{
			TASK::TASK_PERFORM_SEQUENCE(bParam0, *iParam1);
		}
	}
	if (bParam4)
	{
		TASK::CLEAR_SEQUENCE_TASK(iParam1);
	}
}

void func_46()
{
	func_74(&Local_5);
	Local_5.f_1 = bLocal_71;
	Local_5.f_8 = { func_7(Global_1425351->f_18) };
	Local_5.f_18 = 5f;
	Local_5.f_21 = 1f;
	func_60(&(Local_5.f_23), 128);
	func_43(&Local_5, 106);
}

int func_47()
{
	return Global_1572887->f_12;
}

bool func_48(int iParam0)
{
	if (!func_6(iParam0))
	{
		return false;
	}
	return ((*Global_1895087)[iParam0 /*3*/])->f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

bool func_49(int iParam0, int iParam1)
{
	if (func_47() != -1)
	{
		return false;
	}
	if (!func_6(iParam0))
	{
		return false;
	}
	return (Global_24886[iParam0 /*2*/] && iParam1) != 0;
}

bool func_50(int iParam0)
{
	if (!func_6(iParam0))
	{
		return false;
	}
	return SCRIPTS::_DOES_THREAD_EXIST(((*Global_1895087)[iParam0 /*3*/])->f_2);
}

void func_51(int iParam0, int iParam1)
{
	if (func_47() != -1)
	{
		return;
	}
	if (!func_6(iParam0))
	{
		return;
	}
	Global_24886[iParam0 /*2*/] = (&Global_24886[iParam0 /*2*/] - (Global_24886[iParam0 /*2*/] && iParam1));
}

void func_52(int iParam0)
{
	int iVar0;

	if (!func_6(iParam0))
	{
		return;
	}
	iVar0 = func_66(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
	((*Global_1895087)[iParam0 /*3*/])->f_2 = 0;
}

int func_53(int iParam0)
{
	if (!func_6(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

bool func_54(int iParam0)
{
	return iParam0 != 0;
}

int func_55(int iParam0)
{
	if (!func_6(iParam0))
	{
		return 0;
	}
	return ((*Global_1895087)[iParam0 /*3*/])->f_1;
}

int func_56(int iParam0, bool bParam1)
{
	if (!func_6(iParam0))
	{
		return 0;
	}
	if (!func_49(iParam0, 2))
	{
		return 0;
	}
	if (func_53(iParam0) == 0)
	{
		return 1;
	}
	if (!PERSCHAR::_0x800DF3FC913355F3(func_55(iParam0)))
	{
		return 1;
	}
	if (func_49(iParam0, 1) && !bParam1)
	{
		func_68(iParam0, 128);
		return 1;
	}
	func_51(iParam0, 129);
	func_52(iParam0);
	PERSCHAR::_0xFC77C5B44D5FF7C0(func_55(iParam0));
	func_91(iParam0, 0);
	return 1;
}

char* func_57()
{
	return "bPickupThisCorpse";
}

bool func_58(bool bParam0, bool bParam1, bool bParam2, float fParam3, bool bParam4)
{
	if (bParam2)
	{
		if (!func_92(bParam0, bParam1, 0f))
		{
			return false;
		}
	}
	if (!func_93(bParam0, bParam1, fParam3, 1))
	{
		return false;
	}
	if (bParam4 && ENTITY::IS_ENTITY_A_PED(bParam1))
	{
		return PED::_0x9D9473CB82D83A30(bParam0, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam1), 0) == 1;
	}
	return PED::_0x7F9B9791D4CB71F6(bParam0, bParam1, bParam2, 0) == 1;
}

void func_59(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_60(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_61()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_62(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_63(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_64(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_65(var uParam0)
{
	return func_64(*uParam0, 2);
}

int func_66(int iParam0)
{
	int iVar0;

	iVar0 = func_55(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!PERSCHAR::_0x800DF3FC913355F3(iVar0))
	{
		return 0;
	}
	return PERSCHAR::_0x31C70A716CAE1FEE(iVar0);
}

int func_67(int iParam0, bool bParam1)
{
	if (!func_6(iParam0))
	{
		return 0;
	}
	if ((func_49(iParam0, 1) && !func_48(iParam0)) && func_50(iParam0))
	{
		return 0;
	}
	if (!func_49(iParam0, 2))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (!func_33(iParam0, 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_68(int iParam0, int iParam1)
{
	if (func_47() != -1)
	{
		return;
	}
	if (!func_6(iParam0))
	{
		return;
	}
	Global_24886[iParam0 /*2*/] = (Global_24886[iParam0 /*2*/] || iParam1);
}

void func_69(int iParam0)
{
	if (!func_6(iParam0))
	{
		return;
	}
	((*Global_1895087)[iParam0 /*3*/])->f_2 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

int func_70(bool bParam0, bool bParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_94(uParam2, 1, iVar0);
	}
	if (!Global_1935630->f_12 && !ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_12 = fParam5;
		}
		else
		{
			uParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(bParam0, true, false));
		}
		if (!uParam2->f_1 & 128 != 0)
		{
			if (func_95(bParam0, uParam2))
			{
				*uParam3 = 128;
				func_96(bParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_97(bParam0, uParam2))
				{
					*uParam3 = 8;
					func_96(bParam0, uParam2, *uParam3);
					return 1;
				}
				else if (func_98(bParam0, bParam1, uParam2))
				{
					*uParam3 = 8;
					func_96(bParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_99(bParam0, uParam2))
				{
					*uParam3 = 64;
					func_96(bParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_26 && func_100(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_96(bParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_101(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_102(Global_35, bParam0, uParam2))
					{
						*uParam3 = 4;
						func_96(bParam0, uParam2, *uParam3);
						return 1;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_103(Global_35, bParam0, uParam2))
					{
						*uParam3 = 256;
						func_96(bParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_104(Global_35, bParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_96(bParam0, uParam2, *uParam3);
					return 1;
				}
			}
			else if (func_104(Global_35, bParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_96(bParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_105(bParam0, uParam2))
				{
					*uParam3 = 32;
					func_96(bParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || uParam2->f_12 < 20f)
			{
				if (func_106(&bParam0, uParam2))
				{
					*uParam3 = 4096;
					func_96(bParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_107(uParam2, 4000))
				{
					if ((func_108(bParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_109(uParam2, bParam0)) && func_110(uParam2, bParam0))
					{
						*uParam3 = 2;
						func_96(bParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_108(bParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_109(uParam2, bParam0)) && func_110(uParam2, bParam0))
				{
					*uParam3 = 2;
					func_96(bParam0, uParam2, *uParam3);
					return 1;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_111(bParam0, Global_1935630->f_41))
							{
								func_112();
								*uParam3 = 2;
								func_96(bParam0, uParam2, *uParam3);
								return 1;
							}
						}
					}
				}
			}
			else if (Global_1935630->f_40 == 0)
			{
				if (Global_1935630->f_41 != 0)
				{
					if (*uParam2 & 131072 == 0)
					{
						if (func_111(bParam0, Global_1935630->f_41))
						{
							func_112();
							*uParam3 = 2;
							func_96(bParam0, uParam2, *uParam3);
							return 1;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_113(uParam2, bParam0) || (uParam2->f_9 > 0 && (func_114() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(bParam0))
					{
						func_112();
						*uParam3 = 2;
						func_96(bParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_115())
					{
						if (func_111(bParam0, Global_1935630->f_42))
						{
							func_112();
							*uParam3 = 2;
							func_96(bParam0, uParam2, *uParam3);
							return 1;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_116(uParam2, bParam0))
			{
				*uParam3 = 1024;
				func_96(bParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_117(bParam0, bParam1, uParam2))
				{
					*uParam3 = 2048;
					func_96(bParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_118(bParam0, uParam2))
					{
						*uParam3 = 8192;
						func_96(bParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_119(bParam0, uParam2))
				{
					*uParam3 = 32768;
					func_96(bParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_120(uParam2, 4000))
				{
					if (func_121(&bParam0, uParam2))
					{
						*uParam3 = 512;
						func_96(bParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_122(bParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_96(bParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(bParam0))
		{
			if (func_123(uParam2, bParam0))
			{
				*uParam3 = 1;
				func_96(bParam0, uParam2, *uParam3);
				return 1;
			}
		}
	}
	return 0;
}

int func_71(int iParam0)
{
	if (!func_124(iParam0))
	{
		return 0;
	}
	return ((*Global_1888801)[iParam0 /*35*/])->f_3;
}

var func_72(var uParam0, var uParam1, int iParam2, vector3 vParam3, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
{
	bool bVar0;
	var uVar1;

	if (bParam13 <= 0f)
	{
		bVar0 = VOLUME::_CREATE_VOLUME_SPHERE(vParam3, 0f, 0f, 0f, bParam6, bParam6, bParam6);
	}
	else
	{
		bVar0 = VOLUME::_CREATE_VOLUME_CYLINDER(vParam3, 0f, 0f, 0f, bParam6, bParam6, bParam13);
	}
	uVar1 = func_125(uParam0, uParam1, iParam2, bVar0, bParam7, bParam8, bParam9, iParam10, bParam11, bParam12, bParam14, bParam15);
	func_126(bVar0);
	return uVar1;
}

void func_73(int iParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 130, !bParam1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178, bParam1);
}

void func_74(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 256;
	uParam0->f_4 = 0;
	func_12(&(uParam0->f_5));
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = 0.25f;
	uParam0->f_18 = 0.25f;
	uParam0->f_19 = 40000f;
	uParam0->f_20 = 10f;
	uParam0->f_21 = 1f;
	uParam0->f_22 = 0f;
	uParam0->f_23 = 0;
	uParam0->f_25 = 0;
	StringCopy(&(uParam0->f_30), "", 24);
	StringCopy(&(uParam0->f_26), "", 32);
}

bool func_75(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_76(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

void func_77(int iParam0)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	if (!PED::IS_PED_ON_MOUNT(iParam0))
	{
		return;
	}
	bVar0 = PED::GET_MOUNT(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bVar0) || PED::IS_PED_INJURED(bVar0))
	{
		return;
	}
	TASK::CLEAR_PED_TASKS(bVar0, 1, 0);
	TASK::TASK_STAND_STILL(bVar0, -1);
}

int func_78(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
		vVar3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = func_127(vVar3, vVar6);
	if (MISC::ABSF(fVar9) > fParam4)
	{
		if (fVar9 > 0f)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (func_128(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

void func_79(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam1;
}

int func_80(var uParam0, int iParam1)
{
	if (func_87(&(uParam0->f_5), 5f))
	{
		return 1;
	}
	if (func_75(uParam0->f_23, 2))
	{
		return 1;
	}
	if (((!func_76(uParam0->f_1) && !func_88(uParam0->f_1, 501393341)) && !PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_1, true)) && !func_88(uParam0->f_1, -828834893))
	{
		return 1;
	}
	return 0;
}

int func_81(var uParam0, int iParam1)
{
	var uVar0;

	if (func_87(&(uParam0->f_5), 4f))
	{
		return 1;
	}
	if (!func_75(uParam0->f_23, 16384))
	{
		return 1;
	}
	if (uParam0->f_1 != Global_35)
	{
		return 1;
	}
	if (!func_129(&uVar0))
	{
		return 1;
	}
	return 0;
}

int func_82()
{
	bool bVar0;

	if (!func_130())
	{
		return 0;
	}
	if (!func_131(&bVar0))
	{
		return 0;
	}
	if (!func_132(bVar0))
	{
		return 0;
	}
	return func_133(bVar0, 0);
}

int func_83(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (func_87(&(uParam0->f_5), 4f))
	{
		return 1;
	}
	if (func_75(uParam0->f_23, 4))
	{
		return 1;
	}
	WEAPON::GET_CURRENT_PED_WEAPON(uParam0->f_1, &iVar0, true, 0, false);
	WEAPON::GET_CURRENT_PED_WEAPON(uParam0->f_1, &iVar1, true, 1, false);
	if (func_75(uParam0->f_23, 512) || (iVar0 == joaat("WEAPON_UNARMED") && iVar1 == joaat("WEAPON_UNARMED")))
	{
		return 1;
	}
	return 0;
}

int func_84(bool bParam0)
{
	bool bVar0;

	bVar0 = func_134(bParam0);
	if (ENTITY::IS_ENTITY_DEAD(bVar0))
	{
		return 0;
	}
	if (PED::_0x3AA24CCC0D451379(bVar0))
	{
		return bVar0;
	}
	return 0;
}

int func_85(var uParam0, int iParam1)
{
	if (func_87(&(uParam0->f_5), 15f))
	{
		return 1;
	}
	if (func_75(uParam0->f_23, 4096) && func_88(uParam0->f_1, 1245594896))
	{
		return 0;
	}
	if (func_75(uParam0->f_23, 256))
	{
		return 1;
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_1, -208384378, 1) == 8)
	{
		return 1;
	}
	return 0;
}

int func_86(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_87(var uParam0, float fParam1)
{
	if (func_10(uParam0, fParam1))
	{
		func_12(uParam0);
		return 1;
	}
	return 0;
}

int func_88(bool bParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		if (!PED::IS_PED_INJURED(bParam0))
		{
			if (iParam1 == 2104565373 && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(bParam0))
			{
				return 1;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(bParam0, iParam1, 1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(bParam0, iParam1, 1) == 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_89(int iParam0, vector3 vParam1, float fParam4, bool bParam5, float fParam6, bool bParam7)
{
	float fVar0;

	fVar0 = func_135(ENTITY::GET_ENTITY_HEADING(iParam0));
	fParam4 = func_135(fParam4);
	if (ENTITY::IS_ENTITY_AT_COORD(iParam0, vParam1, bParam5, bParam5, 2f, false, bParam7, 0) && MISC::ABSF((fVar0 - fParam4)) <= fParam6)
	{
		return 1;
	}
	return 0;
}

float func_90(int iParam0, vector3 vParam1)
{
	vector3 vVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	return (vVar0.z - vParam1.z);
}

void func_91(int iParam0, int iParam1)
{
	if (!func_6(iParam0))
	{
		return;
	}
	((*Global_1895087)[iParam0 /*3*/])->f_1 = iParam1;
}

bool func_92(int iParam0, int iParam1, float fParam2)
{
	return func_136(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, false, false), fParam2);
}

int func_93(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return 1;
	}
	return 0;
}

void func_94(var uParam0, bool bParam1, int iParam2)
{
	func_137(iParam2);
	if (Global_1572887->f_12 == -1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			return;
		}
		if (Global_1935630->f_12)
		{
			return;
		}
	}
	else
	{
		if (!Global_1225638->f_11)
		{
			return;
		}
		if (Global_1225638->f_12)
		{
			return;
		}
	}
	if (bParam1)
	{
		uParam0->f_10 = 0;
	}
	uParam0->f_5 = iParam2;
	if (Global_1572887->f_12 == -1)
	{
		uParam0->f_13 = Global_1935630->f_44;
	}
	else
	{
		uParam0->f_13 = func_138(0);
	}
	switch (uParam0->f_6)
	{
		case 0:
			if (*uParam0 & 16 != 0)
			{
				if (!*uParam0 & 33554432 != 0)
				{
					if (uParam0->f_13 == joaat("WEAPON_THROWN_DYNAMITE"))
					{
						if (PED::IS_PED_PLANTING_BOMB(Global_35))
						{
							func_60(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_139(1))
						{
							func_60(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_139(1) || *uParam0 & 8192 != 0))
				{
					func_59(uParam0, 33554432);
				}
			}
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
	if (!uParam0->f_1 & 1024 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
		{
			if (func_140(uParam0))
			{
				uParam0->f_15 = func_114();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_114() - uParam0->f_15) > 500)
			{
				if (!PED::IS_PED_ON_MOUNT(uParam0->f_14))
				{
					uParam0->f_14 = 0;
					uParam0->f_15 = 0;
				}
			}
		}
	}
	uParam0->f_6++;
	if (uParam0->f_6 >= 4)
	{
		uParam0->f_6 = 0;
		uParam0->f_7++;
		if (uParam0->f_7 > 4)
		{
			uParam0->f_7 = 0;
		}
	}
	func_141(uParam0);
}

int func_95(bool bParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!EVENT::_0x1D1B448D719415AB(bParam0))
	{
		return 0;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(bParam0, 0, 0);
	if (iVar0 == 0)
	{
		return 0;
	}
	switch (iVar0)
	{
		case joaat("EVENT_ACQUAINTANCE_PED_DEAD"):
		case joaat("EVENT_PED_SEEN_DEAD_PED"):
		case joaat("EVENT_SHOCKING_DEAD_BODY"):
		case joaat("EVENT_DEAD_PED_FOUND"):
			iVar1 = EVENT::_0x822A001BCEA5BD81(bParam0, iVar0, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar1))
			{
				return 0;
			}
			iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
			if (!PED::IS_PED_HUMAN(iVar2))
			{
				return 0;
			}
			if (DECORATOR::DECOR_EXIST_ON(iVar2, "bIgnoreDamageChecking"))
			{
				return 0;
			}
			if (iVar2 == Global_1935630->f_33)
			{
				return 0;
			}
			if (iVar2 == Global_1935630->f_32)
			{
				return 0;
			}
			if (!func_142(bParam0, uParam1, iVar2))
			{
				return 0;
			}
			if (func_143(bParam0, iVar2) <= func_144(uParam1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_96(bool bParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = bParam0;
	}
	if (func_145(iParam2, 1, 1, 1, 0))
	{
		func_60(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_146(uParam1, 1);
	func_147();
}

int func_97(bool bParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (func_148(bParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_149(uParam1);
			if (func_150(uParam1, bParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_151(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_146(uParam1, 1);
						return 1;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_146(uParam1, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_98(bool bParam0, bool bParam1, var uParam2)
{
	float fVar0;
	float fVar1;

	if (bParam1 == 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		return 0;
	}
	fVar0 = 85f;
	if (func_152(bParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_149(uParam2);
		if (func_150(uParam2, bParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_151(uParam2)
				{
					func_146(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_99(bool bParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	float fVar3;

	if (!PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar0))
	{
		return 0;
	}
	if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, false, false))
	{
		if (iVar2 == iVar0)
		{
			return 0;
		}
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		return 0;
	}
	if (Global_1935630->f_40 != 0)
	{
		if (PED::_0xB676EFDA03DADA52(Global_1935630->f_40, 1) == bParam0)
		{
			return 0;
		}
	}
	bVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (func_142(bParam0, uParam1, bVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_151(uParam1)
		{
			fVar3 = func_149(uParam1);
			if (uParam1->f_12 < fVar3)
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, Global_35, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, bVar1, 17))
				{
					if (PED::_0x06087579E7AA85A9(bParam0, Global_35, -1f, fVar3, -1f, -1f) && PED::_0x06087579E7AA85A9(bParam0, bVar1, -1f, fVar3, -1f, -1f))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_100(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_153(bParam1, bParam2, bParam3);
	}
	if (Global_1572887->f_12 != -1)
	{
		if (iParam0 == Global_1225638->f_10)
		{
			if (!Global_1225638->f_11)
			{
				return 0;
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
		{
			return 0;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		return 0;
	}
	if (LAW::_0xAD401C63158ACBAA(iParam0))
	{
		LAW::_0xCBFB4951F2E3934C(iParam0, &Var0);
		if ((bParam3 || Var0.f_10 > 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(iParam0) > 0)
		{
			return 1;
		}
	}
	else if (bParam2 && !LAW::_0x148E7AC8141C9E64(iParam0) == 1370593166)
	{
		return 0;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (LAW::_0x532C5FDDB986EE5C(iParam0, iVar17, &Var18))
		{
			if (Var18.f_10 && (bParam3 || LAW::_0xDAEFDFDB2AEECE37(Var18, Var18.f_7) > 0))
			{
				return 1;
			}
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (LAW::_0x69E181772886F48B(iParam0) || LAW::_0xF0FBFB9AB15F7734(iParam0, 0, 0))
		{
			if (bParam3 || LAW::_0xE083BEDA81709891(iParam0) > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_101(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_114();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return 1;
	}
	return 0;
}

int func_102(var uParam0, bool bParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_154(uParam2);
			if (!WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) || Global_1935630->f_46 == joaat("WEAPON_UNARMED"))
			{
				PED::_0xD355E2F1BB41087E(bParam1, fVar0);
			}
			else if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && WEAPON::_0xEA522F991E120D45(Global_1935630->f_46))
			{
				PED::_0xD355E2F1BB41087E(bParam1, 5f);
			}
			else
			{
				PED::_0xD355E2F1BB41087E(bParam1, fVar0);
			}
		}
		if ((!WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) || Global_1935630->f_46 == joaat("WEAPON_UNARMED")) || (WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && WEAPON::_0x5809DBCA0A37C82B(Global_1935630->f_46)))
		{
			fVar2 = 3f;
			iVar1 = 3000;
		}
		else
		{
			fVar2 = 1f;
			iVar1 = 1000;
		}
		if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), bParam1, iVar1) && PED::_0x285D36C5C72B0569(uParam0) <= fVar2)
		{
			if (func_110(uParam2, bParam1))
			{
				func_146(uParam2, 1);
				return 1;
			}
		}
	}
	return 0;
}

int func_103(var uParam0, bool bParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_12 < IntToFloat(func_155(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && !WEAPON::_0x5809DBCA0A37C82B(Global_1935630->f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_110(uParam2, bParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_146(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_104(var uParam0, bool bParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(bParam1, false, true) };
	iVar3 = func_156(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, uParam2->f_22))
				{
					func_146(uParam2, 1);
					return 1;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), vVar0, uParam2->f_27))
				{
					func_146(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(bParam1, joaat("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar4, 0, 0);
					if (func_157(bParam1, vVar0, vVar4))
					{
						func_146(uParam2, 1);
						return 1;
					}
				}
				break;
		}
	}
	else
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, uParam2->f_22))
				{
					func_146(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(bParam1, joaat("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar7, 0, 0);
					if (func_157(bParam1, vVar0, vVar7))
					{
						func_146(uParam2, 1);
						return 1;
					}
				}
				break;
		}
	}
	return 0;
}

int func_105(bool bParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	vector3 vVar2[2];
	vector3 vVar9;
	bool bVar12;
	bool bVar13;

	vVar9 = { ENTITY::GET_ENTITY_COORDS(bParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_142(bParam0, uParam1, &(Global_1935630->f_34[iVar0])) || bParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_158(&(Global_1935630->f_34[iVar0]));
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_159(&(Global_1935630->f_34[iVar0])))
			{
				if (fVar1 < 35f)
				{
					if ((DECORATOR::DECOR_EXIST_ON(&(Global_1935630->f_34[iVar0]), "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(bParam0, "HorseOwnerTeamA")) || (DECORATOR::DECOR_EXIST_ON(&(Global_1935630->f_34[iVar0]), "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(bParam0, "HorseOwnerTeamB")))
					{
						*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
						*(vVar2[1 /*3*/]) = { vVar9 };
						uParam1->f_10 = bParam0;
						return 1;
					}
				}
			}
			if (func_160(uParam1, bParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = bParam0;
				return 1;
			}
			else if (func_161(uParam1, bParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = bParam0;
				return 1;
			}
			else if (func_162(uParam1, bParam0, fVar1, iVar0))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = bParam0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_106(bool bParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar5;
	vector3 vVar8;

	if (!EVENT::_0x1D1B448D719415AB(*bParam0))
	{
		return 0;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(*bParam0, 0, 0);
	switch (iVar0)
	{
		case joaat("EVENT_SHOCKING_PROPERTY_DAMAGE"):
		case joaat("EVENT_SHOCKING_WINDOW_SMASHED"):
			iVar1 = EVENT::_0x822A001BCEA5BD81(*bParam0, iVar0, 0, 0);
			iVar2 = EVENT::_0x38497F139981C5C9(*bParam0, iVar0, 0, 0);
			vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar1, false, false) };
			vVar8 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) };
			EVENT::_0x1A5C5D350068A673(*bParam0, 0);
			return 1;
	}
	return 0;
}

int func_107(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_114();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

int func_108(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	bVar0 = PLAYER::PLAYER_PED_ID();
	if (!bParam3)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(bParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(bParam0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bParam0, bVar0, 1, 1))
			{
				return 1;
			}
			bVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			if (!ENTITY::IS_ENTITY_DEAD(bVar1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bParam0, bVar1, 1, 1))
				{
					return 1;
				}
			}
			if (PED::IS_PED_ON_MOUNT(bVar0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(bVar0)))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bParam0, PED::GET_MOUNT(bVar0), 1, 1))
					{
						return 1;
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(bParam1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(bParam1))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bParam0, bParam1, 1, 1))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (!bParam2)
	{
		if (func_163(bVar0, &iVar2))
		{
			if ((PED::IS_PED_RAGDOLL(bParam0) || PED::_0x947E43F544B6AB34(bParam0, PLAYER::PLAYER_ID(), 10, 1000)) || (!bParam4 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar2, bParam0)))
			{
				return 1;
			}
		}
	}
	if (!bParam2)
	{
		if (PED::_0x29FCE825613FEFCA(bParam0, 400))
		{
			return 1;
		}
	}
	if (func_164(bVar0, bParam0))
	{
		return 1;
	}
	if (PED::_0xD0B7AEB56229D317(PLAYER::PLAYER_PED_ID()) == bParam0)
	{
		if (PED::_0x0E99E3BF11BB6367(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (PED::IS_PED_BEING_JACKED(bParam0))
		{
			if (PED::GET_PEDS_JACKER(bParam0) == bVar0)
			{
				return 1;
			}
		}
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(bVar0, 8, 0))
	{
		if (PED::GET_PED_CONFIG_FLAG(bParam0, 9, true) || PED::IS_PED_BEING_STEALTH_KILLED(bParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_109(var uParam0, bool bParam1)
{
	int iVar0;

	if (!DECORATOR::DECOR_EXIST_ON(bParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(bParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (DECORATOR::DECOR_SET_INT(bParam1, "iDamageFrame", uParam0->f_5))
		{
		}
	}
	else if (uParam0->f_5 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

int func_110(var uParam0, bool bParam1)
{
	if (func_165(uParam0))
	{
		return 1;
	}
	if (PED::_0x29FCE825613FEFCA(bParam1, 400))
	{
		return 1;
	}
	if (PED::IS_PED_DEAD_OR_DYING(bParam1, true))
	{
		return 0;
	}
	if ((PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 8, 0) || PED::GET_PED_CONFIG_FLAG(bParam1, 9, true)) || PED::IS_PED_BEING_STEALTH_KILLED(bParam1))
	{
		return 0;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 16, 0) || PED::GET_PED_CONFIG_FLAG(bParam1, 10, true))
	{
		return 0;
	}
	if (PED::_0xB65A4DAB460A19BD(Global_35) != 0)
	{
		return 1;
	}
	if (!PED::IS_PED_RAGDOLL(bParam1))
	{
		return 1;
	}
	return 0;
}

int func_111(bool bParam0, bool bParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bParam0, bParam1, 1, 1))
		{
			return 1;
		}
		if (func_44(bParam0, bParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(bParam0, bParam1) && PED::IS_PED_RAGDOLL(bParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_112()
{
}

int func_113(var uParam0, bool bParam1)
{
	bool bVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;

	bVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
	if (bVar0 != 0 && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(bVar0)))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(bParam1, false, false) };
		if (func_166(bVar0, bParam1, vVar1))
		{
			uParam0->f_9 = func_114();
			return 1;
		}
		else if (VEHICLE::_0xA19447D83294E29F(bVar0, &iVar5, &iVar4))
		{
			if (iVar5 <= 0)
			{
				return 0;
			}
			else if (iVar4 == iVar5)
			{
				iVar6 = 0;
				while (iVar6 < iVar4)
				{
					bVar7 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(bVar0, iVar6);
					if (ENTITY::DOES_ENTITY_EXIST(bVar7))
					{
						if (func_167(bVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(bVar7, bParam1))
							{
								uParam0->f_9 = func_114();
								return 1;
							}
						}
					}
					iVar6++;
				}
			}
		}
	}
	return 0;
}

int func_114()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

int func_115()
{
	if (Global_1935630->f_42 == 0)
	{
		return 0;
	}
	if (Global_1935630->f_42 == Global_1935630->f_40)
	{
		return 0;
	}
	if (Global_1935630->f_43 <= 0)
	{
		return 0;
	}
	if ((func_114() - Global_1935630->f_43) >= 10000)
	{
		return 0;
	}
	return 1;
}

int func_116(var uParam0, bool bParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
	{
		return 0;
	}
	if (!PED::IS_PED_HUMAN(bParam1))
	{
		return 0;
	}
	fVar0 = func_144(uParam0);
	if (uParam0->f_12 > func_168(uParam0) && uParam0->f_12 > fVar0)
	{
		return 0;
	}
	iVar2 = func_169(bParam1);
	iVar1 = func_170(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(bParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam1, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(bParam1, Global_35, true, 0) == 1)) || ((PED::_0x06087579E7AA85A9(bParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam1, uParam0->f_14, 17)) && PED::_0x7F9B9791D4CB71F6(bParam1, uParam0->f_14, true, 0) == 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_117(bool bParam0, bool bParam1, var uParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (uParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_171(bParam0, bParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

int func_118(bool bParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;

	if (*uParam1 & 67108864 != 0)
	{
		return 1;
	}
	if (Global_1935630->f_24)
	{
		return 1;
	}
	if (*uParam1 & 33554432 != 0)
	{
		if (func_172(bParam0, uParam1, 1))
		{
			return 1;
		}
		if ((PED::_0x06087579E7AA85A9(bParam0, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(bParam0, Global_35, true, 0) == 1)
		{
			return 1;
		}
	}
	iVar0 = PED::GET_JACK_TARGET(Global_35);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, true))
	{
		if (PED::_0x06087579E7AA85A9(bParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return 1;
		}
	}
	if (!EVENT::_0x1D1B448D719415AB(bParam0))
	{
		return 0;
	}
	iVar1 = EVENT::_0x796EECFF0C6D39BE(bParam0, 0, 0);
	if (iVar1 == 0)
	{
		return 0;
	}
	switch (iVar1)
	{
		case joaat("EVENT_SHOCKING_SEEN_PED_ROBBED"):
		case joaat("EVENT_SHOCKING_SEEN_PED_INTIMIDATED"):
		case joaat("EVENT_SHOCKING_SEEN_CAR_STOLEN"):
		case joaat("EVENT_SHOCKING_MOUNT_STOLEN"):
			iVar2 = EVENT::_0x822A001BCEA5BD81(bParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(bParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(bParam0, 0);
				return 0;
			}
			bVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			bVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (bVar4 != Global_35)
			{
				EVENT::_0x1A5C5D350068A673(bParam0, 0);
				return 0;
			}
			if (ENTITY::_0x88AD6CC10D8D35B2(bVar5))
			{
				EVENT::_0x1A5C5D350068A673(bParam0, 0);
				return 0;
			}
			return 1;
		case joaat("EVENT_SHOCKING_ENTITY_HOGTIED"):
			iVar2 = EVENT::_0x822A001BCEA5BD81(bParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(bParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(bParam0, 0);
				return 0;
			}
			bVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			bVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (PED::_0x06087579E7AA85A9(bParam0, bVar4, -1f, -1f, -1f, -1f) && PED::_0x06087579E7AA85A9(bParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, bVar4, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, Global_35, 17))
				{
					if (!func_173(uParam1, bParam0))
					{
						if (func_167(bVar4, Global_36, 1) < 7f)
						{
							return 1;
						}
					}
				}
			}
			break;
	}
	return 0;
}

int func_119(bool bParam0, var uParam1)
{
	if (!func_174(0))
	{
		return 0;
	}
	if (PED::IS_PED_FACING_PED(bParam0, Global_35, 90f))
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, Global_35, 17))
		{
			return 1;
		}
	}
	return 0;
}

int func_120(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_114();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_121(bool bParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*bParam0, PLAYER::PLAYER_ID(), 0);
}

int func_122(bool bParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(bParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_114();
	}
	else if (func_114() - uParam1->f_4) > func_175(uParam1)
	{
		return func_176(bParam0, uParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

int func_123(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PED::GET_PED_SOURCE_OF_DEATH(bParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(bParam1, "bIgnoreDamageChecking"))
	{
		return 0;
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (Global_35 == iVar1 || Global_1935630->f_40 == iVar1)
	{
		return 1;
	}
	return 0;
}

bool func_124(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_125(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar6 = ENTITY::_0x886171A12F400B89(bParam3, iVar0, 1);
	if (iVar6 > 0)
	{
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, iVar0);
			bVar2 = iVar1;
			if ((ENTITY::DOES_ENTITY_EXIST(bVar2) && iVar4 < *uParam0) && iVar4 < iParam2)
			{
				if (func_177(bVar2, bParam4, bParam6, bParam8, bParam9, bParam10) && !DECORATOR::DECOR_EXIST_ON(bVar2, "bIgnoreThisPed"))
				{
					if (!func_178(bVar2, uParam1))
					{
						bVar3 = false;
						if (iParam7 != -1)
						{
							iVar7 = 0;
							iVar7 = 0;
							while (iVar7 < POPULATION::GET_NUM_MODELS_IN_POPULATION_SET(iParam7))
							{
								if (PED::IS_PED_MODEL(bVar2, POPULATION::GET_PED_MODEL_NAME_IN_POPULATION_SET(iParam7, iVar7)))
								{
									bVar3 = true;
								}
								else
								{
									iVar7++;
								}
							}
						}
						else
						{
							bVar3 = true;
						}
						if (bVar3)
						{
							if (!bParam11)
							{
								if (!ENTITY::IS_ENTITY_DEAD(bVar2))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(bVar2, bParam5);
								}
							}
							(*uParam0)[iVar4] = bVar2;
							iVar4++;
						}
					}
				}
			}
			iVar5++;
		}
	}
	if (iVar4 >= (iParam2 - 1) && iVar6 >= iParam2)
	{
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar4;
}

void func_126(bool bParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(bParam0))
	{
		VOLUME::_DELETE_VOLUME(bParam0);
	}
}

float func_127(vector3 vParam0, vector3 vParam3)
{
	float fVar0;

	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		vParam0.x = (vParam0.x / fVar0);
		vParam0.f_1 = (vParam0.y / fVar0);
	}
	fVar0 = BUILTIN::VMAG(vParam3);
	if (fVar0 != 0f)
	{
		vParam3.x = (vParam3.x / fVar0);
		vParam3.f_1 = (vParam3.y / fVar0);
	}
	return ((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y));
}

bool func_128(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

int func_129(bool bParam0)
{
	if (-1829635046 == func_179(81053684))
	{
		if (func_131(bParam0))
		{
			return 1;
		}
	}
	else if (func_180(-525676072, bParam0))
	{
		if (func_131(bParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_130()
{
	return Global_1946804->f_2792;
}

int func_131(bool bParam0)
{
	if (func_180(81053684, bParam0))
	{
		return 1;
	}
	if (func_180(-525676072, bParam0))
	{
		return 1;
	}
	return 0;
}

int func_132(bool bParam0)
{
	if (func_181())
	{
		return 0;
	}
	if (!func_182(bParam0, 0))
	{
		return 0;
	}
	if (!func_183(bParam0, 1, 0))
	{
		HUD::_0xBFFF81E12A745A5F();
		return 0;
	}
	return 1;
}

int func_133(bool bParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	bVar3 = func_184(bParam0);
	if (func_185(bParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_129(&bVar2))
		{
			if (bVar1)
			{
				iVar0 = func_186();
			}
			else
			{
				iVar0 = func_187();
			}
		}
		else if (func_188(bParam1, 1))
		{
			iVar0 = 0;
		}
		else if (bVar1)
		{
			iVar0 = func_189();
		}
		else
		{
			iVar0 = func_190();
		}
	}
	else if (func_131(&bVar2))
	{
		if (func_185(bVar2, -1303648999))
		{
			iVar0 = func_186();
		}
		else
		{
			iVar0 = func_187();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_189();
	}
	else
	{
		iVar0 = func_190();
	}
	if (iVar0 != 0)
	{
		Global_1946804->f_2791 = MISC::GET_GAME_TIMER();
		TASK::_TASK_ITEM_INTERACTION(Global_35, bParam0, iVar0, 1, bParam1, -1082130432);
		return 1;
	}
	return 0;
}

int func_134(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return 0;
	}
	iVar0 = PED::_0xD806CD2A4F2C2996(bParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar0))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			return iVar1;
		}
	}
	return 0;
}

float func_135(float fParam0)
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

bool func_136(bool bParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(bParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(bParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

void func_137(int iParam0)
{
	int iVar0;
	var uVar1;

	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_191();
	if (Global_1935630->f_27)
	{
		Global_1935630->f_28 = MISC::GET_GAME_TIMER();
	}
	if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_44))
	{
		if (PED::IS_PED_SHOOTING(Global_35))
		{
			if (WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar1))
			{
			}
			else
			{
				uVar1 = Global_1935630->f_44;
			}
			Global_1935630->f_46 = uVar1;
		}
	}
	switch (iVar0)
	{
		case 0:
			func_192(&(Global_1935630->f_34), &(Global_1935630->f_39));
			Global_1935630->f_38 = iParam0;
			break;
		case 1:
			Global_1935630->f_30 = PLAYER::_0x72AD59F7B7FB6E24(PLAYER::PLAYER_ID(), 4000);
			if (!Global_1935630->f_30)
			{
				if (Global_1935630->f_44 == joaat("WEAPON_LASSO"))
				{
					Global_1935630->f_30 = PED::_0xB65A4DAB460A19BD(Global_35) != 0;
				}
			}
			break;
		case 2:
			switch (Global_1935630->f_46)
			{
				case joaat("WEAPON_LASSO"):
					Global_1935630->f_25 = 0;
					break;
				default:
					if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && WEAPON::_0x5809DBCA0A37C82B(Global_1935630->f_46))
					{
						Global_1935630->f_25 = PED::_0x285D36C5C72B0569(Global_35) <= 3f;
					}
					else
					{
						Global_1935630->f_25 = PED::_0x285D36C5C72B0569(Global_35) <= 1f;
					}
					if (Global_1935630->f_25)
					{
						Global_1935630->f_29 = MISC::GET_FRAME_COUNT();
					}
					break;
			}
			break;
		default:
			Global_1935630->f_38 = iParam0 + 1;
			break;
	}
	Global_22 |= 4;
}

var func_138(int iParam0)
{
	return &(Global_1109400->f_275[iParam0 /*3*/]);
}

int func_139(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_193(bParam0, &uVar0, &uVar1))
	{
		return 1;
	}
	return 0;
}

int func_140(var uParam0)
{
	int iVar0;

	iVar0 = Global_1935630->f_40;
	if (func_47() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_194(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_194(uParam0);
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_170(iVar0) == -1)
	{
		return 0;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iVar0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(iVar0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
	{
		return 0;
	}
	uParam0->f_14 = iVar0;
	return 1;
}

void func_141(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_195(uParam0);
	}
}

int func_142(bool bParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam2))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_HUMAN(bParam2))
	{
		iVar1 = func_170(bParam2);
	}
	else
	{
		iVar1 = func_169(bParam2);
	}
	if (!PED::IS_PED_HUMAN(bParam0))
	{
		iVar0 = func_170(bParam0);
	}
	else
	{
		iVar0 = func_169(bParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return 1;
		}
	}
	if (func_75(*uParam1, 8388608))
	{
		return 1;
	}
	iVar2 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(bParam0);
	iVar3 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(bParam2);
	switch (iVar2)
	{
		case joaat("REL_CIVMALE"):
		case joaat("REL_RE_VICTIM"):
		case joaat("REL_CIVNATIVE"):
		case joaat("REL_PINKERTONS"):
		case joaat("REL_GUAMA_LAW"):
		case joaat("REL_COP"):
		case joaat("REL_CIVFEMALE"):
			switch (iVar3)
			{
				case joaat("REL_CIVMALE"):
				case joaat("REL_RE_VICTIM"):
				case joaat("REL_CIVNATIVE"):
				case joaat("REL_CIVFEMALE"):
					return 1;
			}
			break;
	}
	if (iVar2 == iVar3)
	{
		return 1;
	}
	return 0;
}

float func_143(bool bParam0, bool bParam1)
{
	return func_44(bParam0, bParam1, 1, 1);
}

float func_144(var uParam0)
{
	return uParam0->f_26;
}

int func_145(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam0)
	{
		case 8:
			return iParam2;
		case 4:
		case 16:
			return iParam1;
		case 32:
		case 64:
		case 128:
			return iParam3;
		case 1:
		case 2:
		case 2048:
			return 1;
		case 8192:
			return iParam4;
		default:
			break;
	}
	return 0;
}

void func_146(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_60(uParam0, 134217728);
	}
	else
	{
		func_59(uParam0, 134217728);
	}
}

void func_147()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

int func_148(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return 0;
	}
	bVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(bVar0))
	{
		return 0;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return 0;
	}
	if (Global_1935630->f_44 == joaat("WEAPON_LASSO") && Global_1935630->f_27)
	{
	}
	else if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, false, false))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar2) && bParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2))
		{
			return 0;
		}
	}
	if (Global_1935630->f_40 != 0)
	{
		if (PED::_0xB676EFDA03DADA52(Global_1935630->f_40, 1) == bParam0)
		{
			return 0;
		}
	}
	if (bParam3)
	{
		if (((WEAPON::_0xCB690F680A3EA971(bVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, bParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, bParam0)) && func_44(bVar0, bParam0, 1, 1) <= 4f)
		{
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, bParam0, bParam5) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, bParam0))
	{
		if ((bParam1 && WEAPON::_0xCB690F680A3EA971(bVar0, 4)) || (bParam2 && WEAPON::_0xCB690F680A3EA971(bVar0, 2)))
		{
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_0x6AD66548840472E5(func_196(bVar0, 0)))
		{
			if (func_197(bParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_149(var uParam0)
{
	return uParam0->f_17;
}

int func_150(var uParam0, bool bParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_12 > fParam3)
	{
		return 0;
	}
	fVar0 = -1f;
	if (!func_75(*uParam0, 4194304))
	{
		fVar0 = fParam3;
	}
	if (PED::_0x06087579E7AA85A9(bParam1, Global_35, -1f, fParam3, -1f, fVar0))
	{
		return 1;
	}
	if (*uParam0 & 32768 != 0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam1, Global_35, 17))
		{
			return 1;
		}
	}
	return 0;
}

int func_151(var uParam0)
{
	return uParam0->f_18;
}

int func_152(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return 0;
	}
	bVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(bVar0))
	{
		return 0;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return 0;
	}
	if (bParam3)
	{
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, bParam0, false) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, bParam0))
	{
		if ((bParam1 && WEAPON::_0xCB690F680A3EA971(bVar0, 4)) || (bParam2 && WEAPON::_0xCB690F680A3EA971(bVar0, 2)))
		{
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_0x6AD66548840472E5(func_196(bVar0, 0)))
		{
			if (func_198(ENTITY::GET_ENTITY_COORDS(bParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_153(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1935630->f_18)
	{
		if ((bParam2 || Global_1935630->f_19 > 0) || Global_1935630->f_17 > 0)
		{
			return 1;
		}
	}
	else if (bParam1 && !Global_1935630->f_15 == 1370593166)
	{
		return 0;
	}
	if (Global_1935630->f_20 > 0 || (bParam2 && Global_1935630->f_20 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1935630->f_13)
		{
			if (bParam2 || Global_1935630->f_21 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_154(var uParam0)
{
	return uParam0->f_23;
}

int func_155(var uParam0)
{
	return uParam0->f_21;
}

int func_156(var uParam0)
{
	int iVar0;

	switch (uParam0->f_7)
	{
		case 0:
			switch (uParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 2:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 1:
			switch (uParam0->f_6)
			{
				case 3:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
		case 2:
			switch (uParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 1:
					iVar0 = 2;
					break;
			}
			break;
		case 3:
			switch (uParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 4:
			switch (uParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
	}
	if (*uParam0 & 16777216 != 0)
	{
		if (iVar0 == 2)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_157(bool bParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_136(bParam0, vParam4, 0.5f))
	{
		if (ENTITY::_0x0C9DBF48C6BA6E4C(bParam0, vParam4, 17))
		{
			return 1;
		}
	}
	if (BUILTIN::VDIST(vParam1, vParam4) < 5f)
	{
		return 1;
	}
	return 0;
}

int func_158(bool bParam0)
{
	if (PED::GET_PED_CONFIG_FLAG(bParam0, 9, false))
	{
		if (Global_1935630->f_44 == joaat("WEAPON_UNARMED"))
		{
			return 1;
		}
		if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_46))
		{
			if (WEAPON::_0x959383DCD42040DA(Global_1935630->f_46) || WEAPON::_0xC4DEC3CA8C365A5D(Global_1935630->f_46))
			{
				return 1;
			}
		}
	}
	if (func_199(bParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_159(int iParam0)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	bVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (PED::_0x772A1969F649E902(bVar0))
	{
		return 1;
	}
	return 0;
}

int func_160(var uParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_200(bParam1))
		{
			return 0;
		}
	}
	fVar0 = 5f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(bParam1);
	}
	if (fParam2 < fVar0)
	{
		return 1;
	}
	return 0;
}

int func_161(var uParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_200(bParam1))
		{
			return 0;
		}
	}
	fVar0 = 10f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(bParam1);
	}
	if (fParam2 < fVar0)
	{
		return 1;
	}
	return 0;
}

int func_162(var uParam0, bool bParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40f;
	if (func_200(bParam1))
	{
		return 0;
	}
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x2BA9D7BF629F920C(bParam1);
	}
	if (fParam2 < fVar0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam1, &(Global_1935630->f_34[iParam3]), 17))
		{
			if (PED::_0x06087579E7AA85A9(bParam1, &(Global_1935630->f_34[iParam3]), -1f, -1f, -1f, -1f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_163(bool bParam0, int iParam1)
{
	if (!TASK::_0xEFC4303DDC6E60D3(bParam0))
	{
		return 0;
	}
	*iParam1 = TASK::_0xED1F514AF4732258(bParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		return 0;
	}
	if (PED::IS_PED_DEAD_OR_DYING(*iParam1, true))
	{
		return 0;
	}
	if (!PED::_0x2D64376CF437363E(*iParam1))
	{
		return 0;
	}
	return 1;
}

int func_164(bool bParam0, bool bParam1)
{
	if (PED::_0xB65A4DAB460A19BD(bParam0) == bParam1)
	{
		return 1;
	}
	if (func_201(bParam0, 1, 0, 0) != joaat("WEAPON_LASSO"))
	{
		return 0;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(bParam0, 16, 0))
	{
		if (PED::GET_MELEE_TARGET_FOR_PED(bParam0) == bParam1)
		{
			return 1;
		}
	}
	return 0;
}

bool func_165(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

int func_166(bool bParam0, bool bParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_167(bParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(bParam0, bParam1))
		{
			return 1;
		}
	}
	return 0;
}

float func_167(bool bParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(bParam0, false, false), vParam1, bParam4);
}

float func_168(var uParam0)
{
	return uParam0->f_24;
}

int func_169(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(bParam0, true))
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(bParam0, "HorseOwnerTeamA") && DECORATOR::DECOR_GET_BOOL(bParam0, "HorseOwnerTeamA"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(bParam0, "HorseOwnerTeamB") && DECORATOR::DECOR_GET_BOOL(bParam0, "HorseOwnerTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_170(bool bParam0)
{
	if (!DECORATOR::DECOR_EXIST_ON(bParam0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(bParam0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(bParam0, "HorseTeamA") && DECORATOR::DECOR_GET_BOOL(bParam0, "HorseTeamA"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(bParam0, "HorseTeamB") && DECORATOR::DECOR_GET_BOOL(bParam0, "HorseTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_171(bool bParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	float fVar2;

	if (Global_1935630->f_40 != 0)
	{
		bVar0 = true;
	}
	if (!ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bParam1, PLAYER::PLAYER_PED_ID(), 1, 1))
		{
			return 1;
		}
	}
	if (bVar0)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bParam0, Global_1935630->f_40, 1, 1))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (PED::_0x947E43F544B6AB34(bParam0, PLAYER::GET_PLAYER_INDEX(), 10, 400))
		{
			if (PED::IS_PED_RAGDOLL(bParam0))
			{
				return 1;
			}
		}
		if (PED::_0x947E43F544B6AB34(bParam0, PLAYER::GET_PLAYER_INDEX(), 11, 400))
		{
			if (PED::IS_PED_RAGDOLL(bParam0))
			{
				return 1;
			}
		}
		if (bParam3)
		{
			if (func_163(Global_35, &iVar1))
			{
				if (fParam4 < 4f)
				{
					if (PED::IS_PED_RAGDOLL(bParam0) || (!bParam2 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar1, bParam0)))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (PED::_0x29FCE825613FEFCA(bParam0, 400))
		{
			return 1;
		}
	}
	if (fParam4 <= 0f)
	{
		fVar2 = func_44(bParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
	}
	else
	{
		fVar2 = fParam4;
	}
	if (fVar2 < 1f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), bParam0))
		{
			if (!bParam2)
			{
				return 1;
			}
			else if (PED::IS_PED_RAGDOLL(bParam0))
			{
				return 1;
			}
		}
	}
	if (bVar0)
	{
		if (func_44(bParam0, Global_1935630->f_40, 0, 1) < 2.5f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_1935630->f_40, bParam0))
			{
				if (!bParam2)
				{
					return 1;
				}
				else if (PED::IS_PED_RAGDOLL(bParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_172(bool bParam0, var uParam1, bool bParam2)
{
	bool bVar0;
	bool bVar1;

	func_193(1, &bVar0, &bVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(bVar0) && !ENTITY::DOES_ENTITY_EXIST(bVar1))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		if (bVar0 != bParam0)
		{
			if (PED::_0x06087579E7AA85A9(bParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, Global_35, 17))
				{
					if (!bParam2 || !func_173(uParam1, bVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(bVar1))
	{
		if (bVar1 != bParam0)
		{
			if (PED::_0x06087579E7AA85A9(bParam0, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, Global_35, 17))
			{
				if (!bParam2 || !func_173(uParam1, bVar1))
				{
					if (func_167(bVar1, Global_36, 1) < 5f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_173(var uParam0, bool bParam1)
{
	int iVar0;

	if (DECORATOR::DECOR_EXIST_ON(bParam1, "bIsCriminal") && DECORATOR::DECOR_GET_BOOL(bParam1, "bIsCriminal"))
	{
		return 1;
	}
	if (PED::GET_PED_CONFIG_FLAG(bParam1, 4, false))
	{
		return 1;
	}
	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(bParam1);
	switch (iVar0)
	{
		case joaat("REL_GANG_ODRISCOLL"):
		case joaat("REL_GANG_SKINNER_BROTHERS"):
		case joaat("REL_GUNSLINGERS"):
		case joaat("REL_GANG_CREOLE"):
		case joaat("REL_GANG_LEMOYNE_RAIDERS"):
		case joaat("REL_GANG_MURFREE_BROOD"):
		case joaat("REL_CRIMINALS"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_174(int iParam0)
{
	if (func_202())
	{
		return 0;
	}
	return func_203(((*Global_1347702)[58 /*49*/])->f_15, 1);
}

int func_175(var uParam0)
{
	return uParam0->f_20;
}

int func_176(bool bParam0, var uParam1, bool bParam2, float fParam3)
{
	if (!bParam2)
	{
		if (uParam1->f_4 == 0)
		{
			return 0;
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = uParam1->f_12;
	}
	if (PED::IS_PED_FACING_PED(bParam0, Global_35, 90f))
	{
		if (PED::_0x06087579E7AA85A9(bParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return 1;
		}
	}
	else if (fParam3 < 1.5f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(bParam0, Global_35))
		{
			return 1;
		}
	}
	return 0;
}

int func_177(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (bParam3 && ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return 0;
	}
	if (!bParam5 && !PED::IS_PED_HUMAN(bParam0))
	{
		return 0;
	}
	if (PED::IS_PED_A_PLAYER(bParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(bParam0))
		{
			return 0;
		}
	}
	if (bParam3 && func_204(bParam0))
	{
		return 0;
	}
	if (bParam4)
	{
		if (PED::IS_PED_ON_MOUNT(bParam0))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		if (func_205(bParam0, 0) != -1)
		{
			return 0;
		}
	}
	return 1;
}

int func_178(bool bParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (bParam0 == uParam1[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_179(int iParam0)
{
	int iVar0;

	iVar0 = func_207(func_206(iParam0), 1);
	if (iVar0 != 39)
	{
		return (Global_1946804->f_1497.f_1[iVar0 /*3*/])->f_1;
	}
	return 0;
}

int func_180(int iParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;

	iVar1 = func_207(func_206(iParam0), 1);
	if (iVar1 >= 39)
	{
		return 0;
	}
	if (&Global_1946804->f_1497.f_1[iVar1 /*3*/] != 0 && &Global_1946804->f_1497.f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
	{
		bVar0 = &Global_1946804->f_1497.f_1[iVar1 /*3*/];
		if (func_208(bVar0) == iParam0)
		{
			*bParam1 = bVar0;
			return 1;
		}
	}
	*bParam1 = 0;
	return 0;
}

int func_181()
{
	if (Global_1946804->f_2793)
	{
		return 1;
	}
	if (MISC::ABSI((MISC::GET_GAME_TIMER() - Global_1946804->f_2791)) < 1250)
	{
		return 1;
	}
	if (func_209())
	{
		return 1;
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_35))
	{
		return 1;
	}
	return 0;
}

bool func_182(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(bParam0, iParam1);
}

bool func_183(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_182(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_210(bParam0);
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
		if (!func_211(bParam0, 1))
		{
			return false;
		}
	}
	return func_212(bParam0, 0, bParam2) >= iParam1;
}

int func_184(bool bParam0)
{
	int iVar0;

	if (bParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (func_131(&iVar0))
	{
		if (bParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_185(bool bParam0, int iParam1)
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

int func_186()
{
	int iVar0;

	iVar0 = joaat("MASK_OFF_LEFT_HAND");
	switch (func_213())
	{
		case 0:
			iVar0 = joaat("MASK_OFF_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("MASK_OFF_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("MASK_OFF_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_187()
{
	int iVar0;

	iVar0 = joaat("BANDANA_OFF_LEFT_HAND");
	switch (func_213())
	{
		case 0:
			iVar0 = joaat("BANDANA_OFF_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("BANDANA_OFF_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("BANDANA_OFF_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

bool func_188(bool bParam0, bool bParam1)
{
	return (bParam0 && bParam1) != 0;
}

int func_189()
{
	int iVar0;

	iVar0 = joaat("MASK_ON_LEFT_HAND");
	switch (func_213())
	{
		case 0:
			iVar0 = joaat("MASK_ON_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("MASK_ON_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("MASK_ON_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_190()
{
	int iVar0;

	iVar0 = joaat("BANDANA_ON_LEFT_HAND");
	switch (func_213())
	{
		case 0:
			iVar0 = joaat("BANDANA_ON_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("BANDANA_ON_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("BANDANA_ON_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_191()
{
	if (func_214())
	{
		return 0;
	}
	if (Global_1572887->f_12 == -1)
	{
		if (Global_1935630->f_44 == joaat("WEAPON_LASSO"))
		{
			return PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_ATTACK"));
		}
		return PED::GET_PED_RESET_FLAG(Global_35, 311);
	}
	else
	{
		return &(Global_1955569->f_992[2]);
	}
	return 0;
}

void func_192(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = PLAYER::PLAYER_ID();
	if (!PLAYER::_0x72AD59F7B7FB6E24(iVar2, 200))
	{
		*uParam1 = 0;
		return;
	}
	if (PLAYER::_0x1A6E84F13C952094(iVar2, 200, uParam0))
	{
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0[iVar1]))
			{
			}
			else if (!PED::IS_PED_HUMAN(uParam0[iVar1]) && !(DECORATOR::DECOR_EXIST_ON(uParam0[iVar1], "HorseTeamA") || DECORATOR::DECOR_EXIST_ON(uParam0[iVar1], "HorseTeamB")))
			{
			}
			else if (DECORATOR::DECOR_EXIST_ON(uParam0[iVar1], "bIgnoreDamageChecking"))
			{
			}
			else
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	*uParam1 = iVar0;
}

int func_193(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1935630->f_32))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1935630->f_32))
		{
			*iParam1 = Global_1935630->f_32;
			iVar0 = 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1935630->f_33))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1935630->f_33))
		{
			if (PED::_0x3AA24CCC0D451379(Global_1935630->f_33) || ENTITY::IS_ENTITY_DEAD(Global_1935630->f_33))
			{
				*iParam2 = Global_1935630->f_33;
				iVar0 = 1;
			}
		}
	}
	if (Global_1935630->f_30 && !PED::IS_PED_INJURED(Global_35))
	{
		iVar1 = PED::_0xB65A4DAB460A19BD(Global_35);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (!bParam0 || PED::IS_PED_HUMAN(iVar1))
			{
				*iParam1 = iVar1;
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

int func_194(var uParam0)
{
	int iVar0;
	int iVar1;

	if (iVar0 == 0)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_INTERACT_LOCKON_DETACH_HORSE")))
		{
			if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar1, false, false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						if (PED::_0x772A1969F649E902(ENTITY::GET_ENTITY_MODEL(iVar1)))
						{
							iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
							return iVar0;
						}
					}
				}
			}
		}
	}
	if (uParam0->f_6 == 3)
	{
		if (iVar0 == 0)
		{
			if (!Global_1935630->f_12)
			{
				iVar0 = PED::_0x4B19F171450E0D4F(Global_35);
			}
		}
		if (iVar0 == 0)
		{
			iVar0 = PED::_0xB65A4DAB460A19BD(Global_35);
		}
		if (iVar0 != 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!PED::_0x772A1969F649E902(ENTITY::GET_ENTITY_MODEL(iVar0)))
				{
					iVar0 = 0;
				}
			}
		}
	}
	return iVar0;
}

void func_195(var uParam0)
{
	int iVar0;

	if (Global_1935630->f_38 == 0)
	{
		func_59(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(Global_1935630->f_34[iVar0])))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(&(Global_1935630->f_34[iVar0])))
				{
					func_60(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}

var func_196(bool bParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(bParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

int func_197(bool bParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (func_198(ENTITY::GET_ENTITY_COORDS(bParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_198(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	bVar2 = HUD::GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(vParam0, &fVar0, &fVar1);
	if (bVar2 == 0)
	{
		if (((fVar0 > fParam3 && fVar0 < fParam4) && fVar1 > fParam5) && fVar1 < fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_199(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3 || !ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (WEAPON::_0x9E2D5D6BC97A5F1E(bParam0, joaat("WEAPON_UNARMED"), iParam1))
		{
			return 1;
		}
		else if (!bParam2)
		{
			if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_44))
			{
				if (WEAPON::_0x959383DCD42040DA(Global_1935630->f_44) || Global_1935630->f_44 == joaat("WEAPON_MELEE_KNIFE"))
				{
					if (WEAPON::_0x9E2D5D6BC97A5F1E(bParam0, Global_1935630->f_44, iParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_200(bool bParam0)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(bParam0))
	{
		return 0;
	}
	iVar0 = TASK::_0x2D0571BB55879DA2(bParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if ((((((((iVar0 == joaat("WORLD_PLAYER_SLEEP_GROUND") || iVar0 == 1690225020) || iVar0 == joaat("WORLD_HUMAN_SLEEP_GROUND_ARM")) || iVar0 == joaat("WORLD_HUMAN_SLEEP_GROUND_PILLOW")) || iVar0 == joaat("WORLD_ANIMAL_DOG_SLEEPING")) || iVar0 == joaat("PROP_HUMAN_SLEEP_BED_PILLOW")) || iVar0 == joaat("PROP_PLAYER_PRPTY_SAVE_GAME")) || iVar0 == joaat("PROP_HUMAN_SLEEP_BED_PILLOW_LEFT")) || iVar0 == joaat("PROP_HUMAN_SLEEP_BED_PILLOW_RIGHT"))
	{
		return 1;
	}
	if (iVar0 == joaat("PROP_PLAYER_SLEEP_TENT_A_FRAME") || iVar0 == joaat("WORLD_PLAYER_SLEEP_BEDROLL"))
	{
		iVar0 = PED::_0xC22AA08A8ADB87D4(bParam0);
		if (iVar0 == joaat("PROP_PLAYER_SLEEP_TENT_MALE_A"))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_201(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = joaat("WEAPON_UNARMED");
	if (ENTITY::IS_ENTITY_DEAD(bParam0) || !PED::IS_PED_HUMAN(bParam0))
	{
		return iVar0;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(bParam0, &iVar0, bParam1, iParam2, bParam3))
	{
		return iVar0;
	}
	return iVar0;
}

int func_202()
{
	if (func_47() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return 1;
	}
	return 0;
}

int func_203(int iParam0, bool bParam1)
{
	switch (func_215(iParam0))
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

int func_204(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return 0;
	}
	if (PED::IS_PED_GROUP_MEMBER(bParam0, func_216(), 1))
	{
		return 1;
	}
	return 0;
}

int func_205(bool bParam0, bool bParam1)
{
	return func_217(bParam0, Global_1894899->f_2, bParam1);
}

int func_206(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_218(iVar0);
}

int func_207(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1944638739:
			return 36;
		case -1889597427:
			return 0;
		case -1884748965:
			return 32;
		case -1586649372:
			return 33;
		case -1506259487:
			return 5;
		case -1505978566:
			return 22;
		case -1489346253:
			return 38;
		case -1364808185:
			return 19;
		case -1292426046:
			return 8;
		case -1197751823:
			return 20;
		case -1176744536:
			return 24;
		case -1130865351:
			return 31;
		case -1130352927:
			return 1;
		case -893163968:
			return 17;
		case -735900586:
			return 28;
		case -676503695:
			return 6;
		case -450913544:
			return 18;
		case -426430150:
			return 29;
		case -358215195:
			return 39;
		case -338487716:
			return 11;
		case -207860920:
			return 26;
		case 99217379:
			return 27;
		case 304805134:
			return 21;
		case 383349088:
			return 7;
		case 389988485:
			return 2;
		case 673166414:
			return 25;
		case 788010710:
			return 34;
		case 1108822547:
			return 10;
		case 1145151482:
			return 23;
		case 1250092473:
			return 16;
		case 1367443060:
			return 4;
		case 1422688607:
			return 9;
		case 1600962399:
			return 13;
		case 1672288269:
			return 15;
		case 1742327865:
			return 12;
		case 1780904876:
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

int func_208(bool bParam0)
{
	struct<2> Var0;

	if (!func_182(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_209()
{
	int iVar0;

	iVar0 = &Global_1946804->f_529[9];
	iVar0 = (&Global_1946804->f_529[4] + iVar0);
	iVar0 = (&Global_1946804->f_529[10] + iVar0);
	iVar0 = (&Global_1946804->f_529[1] + iVar0);
	iVar0 = (&Global_1946804->f_529[2] + iVar0);
	iVar0 = (&Global_1946804->f_529[6] + iVar0);
	iVar0 = (&Global_1946804->f_529[29] + iVar0);
	iVar0 = (&Global_1946804->f_529[26] + iVar0);
	iVar0 = (&Global_1946804->f_529[18] + iVar0);
	iVar0 = (&Global_1946804->f_529[19] + iVar0);
	return iVar0 > 0;
}

int func_210(bool bParam0)
{
	vector3 vVar0;

	if (!func_182(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_211(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_182(bParam0, 0))
	{
		return 0;
	}
	if (Global_1935630->f_12)
	{
		return 0;
	}
	iVar0 = func_219(bParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_220("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_221(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_222(Var4.f_4))
			{
			}
			else if (WEAPON::_0x5C2EA6C44F515F34(Var4.f_4) == iVar0)
			{
				func_223(iVar1);
				return 1;
			}
			iVar3++;
		}
		func_223(iVar1);
	}
	return 0;
}

int func_212(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	if (!func_182(bParam0, 0))
	{
		return 0;
	}
	iVar0 = func_210(bParam0);
	if (iVar0 == joaat("AMMO") || (bParam1 && iVar0 == joaat("WEAPON")))
	{
		bVar1 = func_219(bParam0, 1);
		if (bVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, bVar1);
		}
	}
	else if (iVar0 == joaat("WEAPON"))
	{
		return func_224(bParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_225(bParam2), bParam0, 0);
	return iVar2;
}

int func_213()
{
	bool bVar0;
	int iVar1;

	if (PED::_0xA911EE21EDF69DAF(Global_35))
	{
		return 1;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &bVar0, true, 0, false))
	{
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, true, 1, false))
	{
	}
	if (iVar1 == joaat("WEAPON_UNARMED"))
	{
		if (bVar0 == joaat("WEAPON_UNARMED"))
		{
			return 1;
		}
		else if ((((WEAPON::IS_WEAPON_VALID(bVar0) && WEAPON::_0x0556E9D2ECF39D01(bVar0)) && !func_226(bVar0)) && !PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true)) && !(PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && !CAM::_0xA24C1D341C6E0D53(1, 0, 0)))
		{
			return 3;
		}
		else if (bVar0 == joaat("WEAPON_KIT_BINOCULARS"))
		{
			return 1;
		}
		else if ((WEAPON::IS_WEAPON_VALID(bVar0) && func_226(bVar0)) || bVar0 == joaat("WEAPON_LASSO"))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (bVar0 == joaat("WEAPON_UNARMED"))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_214()
{
	switch (Global_1935630->f_44)
	{
		case joaat("WEAPON_MELEE_LANTERN"):
		case joaat("WEAPON_KIT_BINOCULARS"):
		case joaat("WEAPON_MELEE_LANTERN_ELECTRIC"):
		case joaat("WEAPON_MELEE_DAVY_LANTERN"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_215(int iParam0)
{
	if (!func_227(iParam0))
	{
		return -1;
	}
	return func_228(iParam0);
}

int func_216()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

int func_217(bool bParam0, int iParam1, bool bParam2)
{
	var uVar0;
	int iVar1;

	if (iParam1 == -1)
	{
		return -1;
	}
	if (!func_229(iParam1, &uVar0, &iVar1, 0, 0))
	{
		return -1;
	}
	return func_230(bParam0, uVar0, iVar1, bParam2);
}

int func_218(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if ((Global_1946804->f_57[iVar0 /*11*/])->f_8 == iParam0)
		{
			return func_231(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_219(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_182(bParam0, 0))
	{
		return 0;
	}
	iVar0 = func_210(bParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_0x5C2EA6C44F515F34(bParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_0x1F7977C9101F807F(bParam0))
	{
		return bParam0;
	}
	if (func_185(bParam0, 1399091007))
	{
		func_232(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_220(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_225(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_221(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_222(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

int func_223(int iParam0)
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

int func_224(bool bParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	Var0 = { func_233(bParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_235(&Var0, func_234(0));
	}
	if (!func_236(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_223(iVar14);
	return uVar15;
}

int func_225(bool bParam0)
{
	if (func_47() == -1)
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

bool func_226(bool bParam0)
{
	return WEAPON::_0xC4DEC3CA8C365A5D(bParam0);
}

bool func_227(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_228(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_237(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

int func_229(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;

	bVar0 = func_47() != -1;
	switch (iParam0)
	{
		case 76:
			*uParam1 = 0;
			if (bParam3)
			{
				*iParam2 = 47;
			}
			else
			{
				*iParam2 = 63;
			}
			if (bVar0)
			{
				*iParam2 = 5;
			}
			break;
		case 105:
			*uParam1 = 69;
			if (bParam3)
			{
				*iParam2 = 127;
			}
			else
			{
				*iParam2 = 136;
			}
			if (bVar0)
			{
				*iParam2 = 72;
			}
			break;
		case 5:
			*uParam1 = 137;
			*iParam2 = 324;
			if (bVar0)
			{
				*iParam2 = 142;
			}
			break;
		case 61:
			*uParam1 = 380;
			*iParam2 = 381;
			if (bVar0)
			{
				*iParam2 = 380;
			}
			break;
		case 78:
			*uParam1 = 382;
			*iParam2 = 431;
			if (bVar0)
			{
				*iParam2 = 384;
			}
			break;
		case 92:
			*uParam1 = 443;
			*iParam2 = 471;
			if (bVar0)
			{
				*iParam2 = 443;
			}
			break;
		case 26:
			*uParam1 = 472;
			if (bParam3)
			{
				*iParam2 = 500;
			}
			else
			{
				*iParam2 = 502;
			}
			if (bVar0)
			{
				*iParam2 = 472;
			}
			break;
		case 38:
			*uParam1 = 508;
			*iParam2 = 553;
			if (bVar0)
			{
				*iParam2 = 509;
			}
			break;
		case 68:
			*uParam1 = 554;
			*iParam2 = 565;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 65:
			*uParam1 = 566;
			*iParam2 = 588;
			if (bVar0)
			{
				*iParam2 = 566;
			}
			break;
		case 69:
			*uParam1 = 589;
			if (bParam3)
			{
				*iParam2 = 598;
			}
			else
			{
				*iParam2 = 612;
			}
			if (bVar0)
			{
				*iParam2 = 590;
			}
			break;
		case 75:
			*uParam1 = 503;
			*iParam2 = 506;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 93:
			*uParam1 = 613;
			*iParam2 = 625;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 95:
			*uParam1 = 626;
			*iParam2 = 641;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 97:
			*uParam1 = 642;
			*iParam2 = 643;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 3:
			*uParam1 = 644;
			*iParam2 = 656;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 6:
			*uParam1 = 657;
			*iParam2 = 658;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 32:
			*uParam1 = 325;
			*iParam2 = 344;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 82:
			*uParam1 = 659;
			if (bParam3)
			{
				*iParam2 = 673;
			}
			else
			{
				*iParam2 = 690;
			}
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 35:
			*uParam1 = 691;
			*iParam2 = 700;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 56:
			*uParam1 = 701;
			*iParam2 = 708;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 22:
			if (bParam4)
			{
				*uParam1 = 715;
			}
			else
			{
				*uParam1 = 715;
			}
			*iParam2 = 723;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 110:
			*uParam1 = 724;
			*iParam2 = 730;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 64:
			*uParam1 = 736;
			*iParam2 = 740;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 66:
			*uParam1 = 745;
			*iParam2 = 750;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 70:
			*uParam1 = 751;
			*iParam2 = 754;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 77:
			*uParam1 = 731;
			*iParam2 = 732;
			break;
		case 96:
			*uParam1 = 741;
			*iParam2 = 743;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 29:
			*uParam1 = 744;
			*iParam2 = 744;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 100:
			*uParam1 = 755;
			*iParam2 = 763;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 102:
			*uParam1 = 764;
			*iParam2 = 767;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 72:
			*uParam1 = 733;
			*iParam2 = 735;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 124:
			*uParam1 = 791;
			*iParam2 = 793;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 86:
			*uParam1 = 768;
			*iParam2 = 772;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 126:
			*uParam1 = 773;
			*iParam2 = 779;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 120:
			*uParam1 = 432;
			*iParam2 = 442;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 115:
			*uParam1 = 345;
			*iParam2 = 375;
			if (bVar0)
			{
				*iParam2 = 375;
			}
			break;
		case 125:
			*uParam1 = 376;
			*iParam2 = 379;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 116:
			*uParam1 = 783;
			*iParam2 = 790;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 21:
			*uParam1 = 780;
			*iParam2 = 782;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 42:
			*uParam1 = 794;
			*iParam2 = 798;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 89:
			*uParam1 = 799;
			*iParam2 = 800;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 23:
			*uParam1 = 801;
			*iParam2 = 801;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 28:
			*uParam1 = 802;
			*iParam2 = 803;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 101:
			*uParam1 = 804;
			*iParam2 = 806;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 117:
			*uParam1 = 507;
			*iParam2 = 507;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 11:
			*uParam1 = 807;
			*iParam2 = 833;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 128:
			*uParam1 = 834;
			*iParam2 = 857;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		default:
			*uParam1 = -1;
			*iParam2 = -1;
			break;
	}
	if (*uParam1 == -1 || *iParam2 == -1)
	{
		return 0;
	}
	return 1;
}

int func_230(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (ENTITY::IS_ENTITY_DEAD(bParam0) && !bParam3)
	{
		return -1;
	}
	iVar0 = PERSCHAR::_0x32A1E3B83D501096(bParam0);
	if (!PERSCHAR::_0x800DF3FC913355F3(iVar0))
	{
		return -1;
	}
	iVar1 = iParam1;
	iVar1 = iParam1;
	while (iVar1 <= iParam2)
	{
		iVar2 = iVar1;
		if (func_53(iVar2) != 0 && PERSCHAR::_0x800DF3FC913355F3(func_55(iVar2)))
		{
			if (func_55(iVar2) == iVar0)
			{
				return iVar2;
			}
		}
		iVar1++;
	}
	return -1;
}

int func_231(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1889597427;
		case 1:
			return -1130352927;
		case 2:
			return 389988485;
		case 3:
			return 1780904876;
		case 4:
			return 1367443060;
		case 5:
			return -1506259487;
		case 6:
			return -676503695;
		case 7:
			return 383349088;
		case 8:
			return -1292426046;
		case 9:
			return 1422688607;
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
			return -1176744536;
		case 25:
			return 673166414;
		case 26:
			return -207860920;
		case 27:
			return 99217379;
		case 28:
			return -735900586;
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

void func_232(bool bParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	switch (bParam0)
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

struct<14> func_233(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> func_234(bool bParam0)
{
	int iVar0;

	iVar0 = func_225(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224214))
		{
			*Global_1224214 = { func_239(923904168, func_238(bParam0), -740156546, bParam0) };
		}
		return *Global_1224214;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224222))
		{
			*Global_1224222 = { func_239(923904168, func_238(bParam0), -740156546, 0) };
		}
		return *Global_1224222;
	}
	return func_239(923904168, func_238(bParam0), -740156546, 0);
}

void func_235(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_236(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_225(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_237(int iParam0)
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

struct<4> func_238(bool bParam0)
{
	return func_239(joaat("CHARACTER"), func_240(), -1591664384, bParam0);
}

struct<4> func_239(bool bParam0, var uParam1, int iParam2, bool bParam3, var uParam4, bool bParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_182(bParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_225(bParam6), &uParam1, bParam0, bParam5, &Var0);
	return Var0;
}

struct<4> func_240()
{
	struct<4> Var0;

	return Var0;
}

