#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	bool bLocal_4 = false;
	float fLocal_5 = 0f;
	vector3 vLocal_6 = { 0f, 0f, 0f };
	vector3 vLocal_9 = { 0f, 0f, 0f };
	vector3 vLocal_12 = { 0f, 0f, 0f };
	vector3 vLocal_15 = { 0f, 0f, 0f };
	vector3 vLocal_18 = { 0f, 0f, 0f };
	bool bLocal_21 = false;
	bool bLocal_22 = false;
	bool bLocal_23 = false;
	bool bLocal_24 = false;
	int iLocal_25 = 0;
	var uLocal_26 = 24;
	var uLocal_27 = 0;
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
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	struct<5> Local_130[6];
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	struct<4> Local_164 = { 0, 0, 0, 0 } ;
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
	iLocal_3 = joaat("WAGON02X");
	bLocal_4 = joaat("A_M_M_LAGTOWNFOLK_01");
	fLocal_5 = 0f;
	vLocal_6 = { 2114.573f, -606.6023f, 40.60275f };
	vLocal_9 = { 2098.055f, -756.3578f, 40.55793f };
	vLocal_12 = { 2111.296f, -655.2276f, 41.16518f };
	vLocal_15 = { 2033.488f, -428.7332f, 41.63809f };
	vLocal_18 = { 2404.619f, -522.8186f, 40.49999f };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		func_1(&Local_164);
	}
	func_2(&Local_164, &uScriptParam_0);
	while (!func_3(&Local_164))
	{
		func_4(&Local_164);
		switch (func_5(Local_164))
		{
			case 0:
				if (func_6(&Local_164))
				{
					func_7(&Local_164, 1);
				}
				break;
			case 1:
				if (func_8(&Local_164))
				{
					func_7(&Local_164, 2);
				}
				break;
			case 2:
				if (func_9(&Local_164))
				{
					func_7(&Local_164, 3);
				}
				break;
			case 3:
				func_1(&Local_164);
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(&Local_164);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_10();
	func_11(uParam0);
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = iVar0;
		if (func_12(iVar1) && func_13(iVar1))
		{
			iVar2 = Global_1360165[iVar0 /*1157*/];
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (func_14(iVar1))
				{
					func_15(iVar1, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
				}
			}
		}
		iVar0++;
	}
	if (func_16(uParam0, 4))
	{
		MISC::CLEAR_BIT(&(Global_1956578->f_1), 5);
		func_17(uParam0, 4);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_2(var uParam0, var uParam1)
{
	uParam0->f_1 = uParam1->f_1;
	if (ANIMSCENE::_0x25557E324489393C(*uParam1))
	{
		uParam0->f_2 = *uParam1;
		ANIMSCENE::TAKE_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_2);
		func_18(uParam0, 1);
	}
	if (uParam1->f_3)
	{
		func_18(uParam0, 2);
	}
	func_19(uParam0);
	SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME());
	return 1;
}

int func_3(var uParam0)
{
	if (func_20(&Global_1935630, 16384))
	{
		return 1;
	}
	if (!func_16(uParam0, 8))
	{
		if (func_20(&Global_1935630, 32768))
		{
			return 1;
		}
	}
	return 0;
}

void func_4(var uParam0)
{
	if (!func_16(uParam0, 4))
	{
		if ((ANIMSCENE::_0x25557E324489393C(uParam0->f_2) && ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_2, 0)) && !CAM::IS_GAMEPLAY_CAM_RENDERING())
		{
			MISC::SET_BIT(&(Global_1956578->f_1), 5);
			func_18(uParam0, 4);
		}
	}
	else if ((!ANIMSCENE::_0x25557E324489393C(uParam0->f_2) || !ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_2, 0)) || CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		MISC::CLEAR_BIT(&(Global_1956578->f_1), 5);
		func_17(uParam0, 4);
	}
}

int func_5(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return uParam0;
}

int func_6(var uParam0)
{
	if (!PED::_0x5E420FF293EE5472())
	{
		return 0;
	}
	if ((!func_21(uParam0) || !func_22()) || !func_23())
	{
		return 0;
	}
	return 1;
}

void func_7(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_8(var uParam0)
{
	if ((!func_16(uParam0, 2) && SCRIPTS::_DOES_THREAD_EXIST(uParam0->f_1)) && SCRIPTS::IS_THREAD_ACTIVE(uParam0->f_1, false))
	{
		return 0;
	}
	return func_24(uParam0);
}

int func_9(var uParam0)
{
	int iVar0;

	iVar0 = 1;
	if (!func_25())
	{
		iVar0 = 0;
	}
	if (!func_26(uParam0))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_10()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_12(iVar0) && func_14(iVar0))
		{
			func_27(iVar0, 56, 1);
		}
		iVar0++;
	}
	func_28(&(Global_1359489->f_40), 1);
}

void func_11(var uParam0)
{
	func_29();
	func_30();
	func_31();
}

int func_12(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return 0;
	}
	return 1;
}

bool func_13(int iParam0)
{
	return func_32(iParam0, 16, 1);
}

bool func_14(int iParam0)
{
	if (!func_12(iParam0))
	{
		return false;
	}
	if (!func_13(iParam0))
	{
		return false;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_15(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (!func_12(iParam0))
	{
		return;
	}
	if (func_13(iParam0))
	{
		if (((*Global_1360165)[iParam0 /*1157*/])->f_129 != 0 && ((*Global_1360165)[iParam0 /*1157*/])->f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_27(iParam0, 56, 1);
		func_28(&(Global_1359489->f_40), 1);
	}
	func_33(iParam0, 0);
	func_34(iParam0, 4, 0);
	func_35(iParam0);
	func_36(iParam0);
	func_37(iParam0, 37, 1);
	bVar0 = func_38(Global_1360165[iParam0 /*1157*/], 0);
	iVar1 = func_39(iParam0, 0);
	bVar2 = PERSCHAR::_0x800DF3FC913355F3(iVar1);
	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, false);
	}
	if (func_40(iParam0, 64, 1))
	{
		func_37(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_37(iParam0, 33, 1);
		func_37(iParam0, 34, 1);
		func_41(iParam0, 1056964608 /* Float: 0.5f */, -1, 1061158912 /* Float: 0.75f */);
		func_42(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_27(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_27(iParam0, 35, 1);
			if (bParam8)
			{
				func_27(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_43(iParam0, 0);
			if (PED::IS_PED_IN_GROUP(Global_1360165[iParam0 /*1157*/]))
			{
				PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
			}
			POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/], 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], joaat("REL_GANG_DUTCHS"));
		}
		if (bVar2)
		{
			PERSCHAR::_0xBB68908CD11AEBDC(iVar1);
		}
		func_37(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
		}
		func_27(iParam0, 33, 1);
		func_42(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_133 = fParam4;
			func_28(&(((*Global_1360165)[iParam0 /*1157*/])->f_130), 1);
		}
		else
		{
			func_44(&(((*Global_1360165)[iParam0 /*1157*/])->f_130));
		}
		if (bParam9)
		{
			func_27(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		{
			func_45(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], false);
	}
	if (func_40(iParam0, 45, 1))
	{
		func_37(iParam0, 45, 1);
	}
	func_46(iParam0, 16, 1);
	func_37(iParam0, 44, 1);
	((*Global_1360165)[iParam0 /*1157*/])->f_129 = 0;
	(Global_40.f_4942[iParam0 /*60*/])->f_4 = 0;
	if (bParam5)
	{
		if (func_38(func_47(iParam0), 0))
		{
			func_48(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

bool func_16(var uParam0, int iParam1)
{
	return (uParam0->f_3 && iParam1) != 0;
}

void func_17(var uParam0, int iParam1)
{
	uParam0->f_3 = (uParam0->f_3 - (uParam0->f_3 && iParam1));
}

void func_18(var uParam0, int iParam1)
{
	uParam0->f_3 = (uParam0->f_3 || iParam1);
}

void func_19(var uParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_2))
	{
	}
	PED::_0xED9582B3DA8F02B4(2 + 6);
}

bool func_20(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_21(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bLocal_22))
	{
		bLocal_22 = ANIMSCENE::_GET_ANIM_SCENE_PED(uParam0->f_2, "CreoleCaptain", false);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bLocal_22, true, true);
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bLocal_24))
	{
		bLocal_24 = ANIMSCENE::_GET_ANIM_SCENE_VEHICLE(uParam0->f_2, "SKIFF", false);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bLocal_24, true, true);
		VEHICLE::_0x838C216C2B05A009(bLocal_22, bLocal_24);
		ENTITY::FREEZE_ENTITY_POSITION(bLocal_24, false);
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_25))
	{
		iLocal_25 = ANIMSCENE::_GET_ANIM_SCENE_OBJECT(uParam0->f_2, "p_skiff02x", false);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_25, true, true);
		OBJECT::_0xDFA1237F5228263F(iLocal_25, bLocal_22);
		return 0;
	}
	return 1;
}

int func_22()
{
	if (!ENTITY::DOES_ENTITY_EXIST(bLocal_23))
	{
		STREAMING::REQUEST_MODEL(iLocal_3, false);
		if (STREAMING::HAS_MODEL_LOADED(iLocal_3))
		{
			bLocal_23 = VEHICLE::CREATE_VEHICLE(iLocal_3, vLocal_9, 2.28f, true, true, false, false);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bLocal_23, true, true);
		}
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bLocal_21))
	{
		STREAMING::REQUEST_MODEL(bLocal_4, false);
		if (STREAMING::HAS_MODEL_LOADED(bLocal_4))
		{
			bLocal_21 = func_49(bLocal_4, vLocal_9, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bLocal_21, true, true);
		}
		return 0;
	}
	return 1;
}

int func_23()
{
	if (!func_50(Local_130[0 /*5*/], 650, "MOB4_CIVMAN2", "MOB4_POSTM2", "MOB4_IDLEM2"))
	{
		return 0;
	}
	if (!func_50(Local_130[1 /*5*/], 651, "MOB4_CIVMAN3", "MOB4_POSTM3", "MOB4_IDLEM3"))
	{
		return 0;
	}
	if (!func_50(Local_130[2 /*5*/], 644, "MOB4_CIVMAN1", "MOB4_POSTM1", "MOB4_IDLEM1"))
	{
		return 0;
	}
	if (!func_50(Local_130[3 /*5*/], 646, "MOB4_CIVWOMAN2", "MOB4_POSTW2", "MOB4_IDLEW2"))
	{
		return 0;
	}
	if (!func_50(Local_130[4 /*5*/], 647, "MOB4_CIVWOMAN3", "MOB4_POSTW3", "MOB4_IDLEW3"))
	{
		return 0;
	}
	if (!func_50(Local_130[5 /*5*/], 656, "MOB4_CIVWOMAN1", "MOB4_POSTW1", "MOB4_IDLEW1"))
	{
		return 0;
	}
	return 1;
}

int func_24(var uParam0)
{
	return 1;
}

int func_25()
{
	int iVar0;

	iVar0 = 1;
	return iVar0;
}

bool func_26(var uParam0)
{
	func_51();
	func_52();
	func_53();
	func_54();
	return func_55();
}

void func_27(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_56(iParam0))
		{
			return;
		}
	}
	func_57(iParam1, &iVar0, &iVar1);
	MISC::SET_BIT(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0], iVar1);
}

void func_28(var uParam0, bool bParam1)
{
	if (bParam1 || !func_58(uParam0))
	{
		func_59(uParam0);
	}
}

void func_29()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (func_60((Local_130[iVar0 /*5*/])->f_2))
		{
			if (func_61((Local_130[iVar0 /*5*/])->f_2))
			{
				AUDIO::STOP_PED_SPEAKING(&(Local_130[iVar0 /*5*/]), false);
				func_62((Local_130[iVar0 /*5*/])->f_2, 0, 1, 0, 0);
			}
		}
		iVar0++;
	}
}

void func_30()
{
	func_63(&bLocal_21, 1, 0, 1);
	func_64(&bLocal_23);
	iLocal_161 = 2;
}

void func_31()
{
	func_65(iLocal_25, bLocal_22);
	func_63(&bLocal_22, 1, 0, 1);
	func_64(&bLocal_24);
	iLocal_162 = 3;
}

bool func_32(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_56(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0 /*60*/] && iParam1) != 0;
}

void func_33(int iParam0, bool bParam1)
{
	if (!func_56(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_66(&(((*Global_1360165)[iParam0 /*1157*/])->f_12), 1))
		{
			func_34(iParam0, 1, 0);
		}
	}
	func_34(iParam0, 16, bParam1);
}

void func_34(int iParam0, int iParam1, bool bParam2)
{
	if (!func_56(iParam0))
	{
		return;
	}
	func_67(&(((*Global_1360165)[iParam0 /*1157*/])->f_13), iParam1, bParam2);
}

void func_35(int iParam0)
{
	func_34(iParam0, 8, 0);
}

void func_36(int iParam0)
{
	func_27(iParam0, 36, 1);
}

void func_37(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_56(iParam0))
		{
			return;
		}
	}
	func_57(iParam1, &iVar0, &iVar1);
	MISC::CLEAR_BIT(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0], iVar1);
}

int func_38(bool bParam0, int iParam1)
{
	int iVar0;

	if (bParam0 == 0)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return 0;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return 1;
	}
	if (func_68(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(bParam0))
		{
			return 0;
		}
	}
	if (func_68(iVar0, 2))
	{
		if (PED::_0x3AA24CCC0D451379(bParam0))
		{
			return 0;
		}
	}
	if (func_68(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(bParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_68(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(bParam0) && !PED::IS_PED_IN_ANY_VEHICLE(bParam0, false))
		{
			return 0;
		}
	}
	if (func_68(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(bParam0))
		{
			return 0;
		}
	}
	if (func_68(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(bParam0))
		{
			return 0;
		}
	}
	if (func_68(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(bParam0))
		{
			return 0;
		}
	}
	if (func_68(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(bParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_39(int iParam0, bool bParam1)
{
	if (!func_12(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!PERSCHAR::_0x800DF3FC913355F3(((*Global_1360165)[iParam0 /*1157*/])->f_1))
		{
			func_69(iParam0);
		}
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_1;
}

bool func_40(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_56(iParam0))
		{
			return false;
		}
	}
	func_57(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0]), iVar1);
}

void func_41(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (func_12(iParam0))
	{
		iVar1 = func_70(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			iVar0 = PED::GET_PED_MAX_HEALTH(iVar1);
			PED::SET_PED_CONFIG_FLAG(iVar1, 179, true);
			func_71(iParam0);
		}
	}
	if (func_40(iParam0, 5, 1))
	{
		PED::SET_PED_CONFIG_FLAG(func_70(iParam0), 137, true);
	}
}

void func_42(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_56(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_37(iParam0, 50, 1);
		func_37(iParam0, 48, 1);
		func_37(iParam0, 49, 1);
		func_37(iParam0, 51, 1);
		func_37(iParam0, 52, 1);
		func_37(iParam0, 54, 1);
		func_37(iParam0, 55, 1);
	}
	else
	{
		func_27(iParam0, 50, 1);
		func_27(iParam0, 48, 1);
		func_27(iParam0, 49, 1);
		func_27(iParam0, 51, 1);
		if (bParam3)
		{
			func_27(iParam0, 54, 1);
		}
		else
		{
			func_37(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_27(iParam0, 52, 1);
			if (bParam3)
			{
				func_27(iParam0, 55, 1);
			}
		}
		else
		{
			func_37(iParam0, 52, 1);
			if (!bParam3)
			{
				func_37(iParam0, 55, 1);
			}
		}
	}
}

void func_43(int iParam0, bool bParam1)
{
	if (!func_56(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(func_70(iParam0), 204, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(func_70(iParam0), 204, false);
	}
}

void func_44(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_45(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;

	if (!func_12(iParam0))
	{
		return;
	}
	if (func_13(iParam0))
	{
		if (!func_14(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_40(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_39(iParam0, 0);
	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(iVar0))
	{
		return;
	}
	bVar1 = func_70(iParam0);
	if (((ENTITY::DOES_ENTITY_EXIST(bVar1) && func_72(iParam0) < 10000f) && !bParam3) && !CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(bVar1) && ENTITY::IS_ENTITY_ATTACHED(bVar1))
	{
		if (((TASK::IS_PED_ACTIVE_IN_SCENARIO(bVar1, 1) || TASK::_0x0C3CB2E600C8977D(bVar1, 1)) || PED::IS_PED_ON_MOUNT(bVar1)) || PED::IS_PED_IN_ANY_VEHICLE(bVar1, false))
		{
			PED::_0xF1C03A5352243A30(bVar1);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(bVar1, true, true);
		}
		ENTITY::DETACH_ENTITY(bVar1, true, true);
	}
	if (bParam4)
	{
		func_27(iParam0, 2, 1);
	}
	else
	{
		func_73(iParam0);
		func_27(iParam0, 1, 1);
	}
}

void func_46(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_12(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (&Global_40.f_4942[iParam0 /*60*/] - (Global_40.f_4942[iParam0 /*60*/] && iParam1));
}

int func_47(int iParam0)
{
	if (!func_12(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(((*Global_1360165)[iParam0 /*1157*/])->f_70))
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_70 = 0;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_70;
}

void func_48(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;

	if (!func_56(iParam1))
	{
		return;
	}
	bVar0 = func_47(iParam1);
	if (func_74(iParam1))
	{
		if (!func_75(iParam1))
		{
			return;
		}
	}
	func_37(iParam1, 39, 1);
	func_76(iParam1, 64, 0);
	((*Global_1360165)[iParam1 /*1157*/])->f_70.f_11 = 0;
	func_76(iParam1, 8, 0);
	if (ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		if (!bParam2)
		{
			func_76(iParam1, 512, 1);
			PED::SET_PED_KEEP_TASK(bVar0, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(bVar0, false);
			func_27(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_77(iParam1, 0, 1, 1, 1);
		}
	}
}

bool func_49(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	bool bVar0;

	bVar0 = PED::CREATE_PED(bParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		return false;
	}
	func_78(bVar0, bParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return bVar0;
}

int func_50(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (uParam0->f_1 <= 0)
	{
		if (!func_38(*uParam0, 0))
		{
			*uParam0 = func_79(iParam1, 1, 0, 0, 1, 1);
			return 0;
		}
		func_80(&uLocal_26, *uParam0, sParam2, 1);
		AUDIO::STOP_PED_SPEAKING(*uParam0, true);
		uParam0->f_2 = iParam1;
		uParam0->f_3 = sParam3;
		uParam0->f_4 = sParam4;
		uParam0->f_1 = 1;
		return 0;
	}
	return 1;
}

void func_51()
{
	if (func_38(Global_35, 0))
	{
		switch (iLocal_163)
		{
			case 0:
				func_28(&uLocal_127, 0);
				iLocal_163 = 1;
				break;
			case 1:
				func_81();
				if ((func_82(&uLocal_127) > 20f || ENTITY::IS_ENTITY_IN_WATER(Global_35)) || !func_83(Global_35, 2140.869f, -649.5916f, 41.34281f, 18f, 1, 0))
				{
					iLocal_163 = 2;
				}
				break;
			case 2:
				break;
		}
	}
}

void func_52()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(Local_130[iVar0 /*5*/])))
		{
			switch ((Local_130[iVar0 /*5*/])->f_1)
			{
				case 1:
					if ((!func_58(&uLocal_124) && !AUDIO::_0xA2CAC9DEF0195E6F(1)) && func_84(&(Local_130[iVar0 /*5*/]), Global_35, 0.5f) == 0)
					{
						if (func_85(Local_130[iVar0 /*5*/], (Local_130[iVar0 /*5*/])->f_3))
						{
							TASK::TASK_LOOK_AT_ENTITY(&(Local_130[iVar0 /*5*/]), Global_35, 10000, 0, 51, 0);
							(Local_130[iVar0 /*5*/])->f_1 = 2;
						}
					}
					break;
				case 2:
					if (!AUDIO::_0x1ECC76792F661CF5((Local_130[iVar0 /*5*/])->f_3))
					{
						func_28(&uLocal_124, 0);
						fLocal_5 = MISC::GET_RANDOM_FLOAT_IN_RANGE(5f, 10f);
						func_86(&(Local_130[iVar0 /*5*/]));
						(Local_130[iVar0 /*5*/])->f_1 = 3;
					}
					break;
				case 3:
					if ((!func_58(&uLocal_124) && !AUDIO::_0xA2CAC9DEF0195E6F(1)) && func_84(&(Local_130[iVar0 /*5*/]), Global_35, 0.5f) == 0)
					{
						if (func_85(Local_130[iVar0 /*5*/], (Local_130[iVar0 /*5*/])->f_4))
						{
							TASK::TASK_LOOK_AT_ENTITY(&(Local_130[iVar0 /*5*/]), Global_35, 10000, 0, 51, 0);
							(Local_130[iVar0 /*5*/])->f_1 = 4;
						}
					}
					break;
				case 4:
					if (!AUDIO::_0x1ECC76792F661CF5((Local_130[iVar0 /*5*/])->f_4))
					{
						func_28(&uLocal_124, 0);
						fLocal_5 = MISC::GET_RANDOM_FLOAT_IN_RANGE(5f, 10f);
						func_86(&(Local_130[iVar0 /*5*/]));
						(Local_130[iVar0 /*5*/])->f_1 = 5;
					}
					break;
			}
		}
		iVar0++;
	}
	func_87();
}

void func_53()
{
	switch (iLocal_161)
	{
		case 0:
			if (!func_88(bLocal_21, bLocal_23, 1))
			{
				func_89(&bLocal_21, &bLocal_23, -1, 1);
			}
			else if (!func_83(bLocal_23, vLocal_12, 5f, 1, 1))
			{
				func_90(bLocal_23, vLocal_12, 2.28f, 2, 1073741824 /* Float: 2f */);
			}
			else if (!func_91(bLocal_21, 1199744105))
			{
				TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(bLocal_21, bLocal_23, vLocal_15, 5f, 524419, 6, 5f, 5f, 0);
			}
			else
			{
				iLocal_161 = 1;
			}
			break;
		case 1:
			if (!func_91(bLocal_21, 1199744105))
			{
				func_30();
			}
			break;
		case 2:
			break;
	}
}

void func_54()
{
	switch (iLocal_162)
	{
		case 0:
			if (!func_91(bLocal_22, 1199744105))
			{
				TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(bLocal_22, bLocal_24, vLocal_18, 1.5f, 524295, 6, 5f, 5f, 0);
			}
			else
			{
				iLocal_162 = 1;
			}
			break;
		case 1:
			if (!func_91(bLocal_22, 1199744105))
			{
				iLocal_162 = 2;
			}
			break;
		case 2:
			if (func_88(bLocal_22, bLocal_24, 0))
			{
				if (!func_91(bLocal_22, joaat("SCRIPT_TASK_LEAVE_VEHICLE")))
				{
					TASK::TASK_LEAVE_VEHICLE(bLocal_22, bLocal_24, 0, 0);
				}
			}
			else
			{
				func_31();
			}
			break;
		case 3:
			break;
	}
}

int func_55()
{
	if (!func_83(Global_35, vLocal_6, 75f, 1, 1) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_56(int iParam0)
{
	return iParam0 > -1;
}

int func_57(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

bool func_58(var uParam0)
{
	return func_92(*uParam0, 1);
}

void func_59(var uParam0)
{
	func_93(uParam0, 0f);
}

bool func_60(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

bool func_61(int iParam0)
{
	if (!func_60(iParam0))
	{
		return false;
	}
	return ((*Global_1895087)[iParam0 /*3*/])->f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_62(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_60(iParam0))
	{
		return;
	}
	if (!func_94(iParam0, 1))
	{
		return;
	}
	if (!func_94(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_61(iParam0)) && func_95(iParam0))
	{
		return;
	}
	func_96(iParam0, 1);
	func_97(iParam0);
	if (func_99(func_98(iParam0)))
	{
		iVar0 = func_100(iParam0);
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
		func_96(iParam0, 16);
	}
	if (func_94(iParam0, 128) && !bParam3)
	{
		func_101(iParam0, 0);
	}
}

void func_63(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*bParam0))
	{
		return;
	}
	if (ENTITY::_0xA7E51B53309EAC97(*bParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*bParam0, false))
	{
		return;
	}
	if (!PED::IS_PED_INJURED(*bParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*bParam0, false);
		if (!bParam3)
		{
			TASK::CLEAR_PED_SECONDARY_TASK(*bParam0);
		}
		PED::SET_PED_KEEP_TASK(*bParam0, bParam1);
		if (bParam2)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*bParam0, false);
		}
	}
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(bParam0);
}

void func_64(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*bParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*bParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*bParam0, true, false);
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*bParam0, false))
	{
		return;
	}
	ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(bParam0);
}

int func_65(int iParam0, bool bParam1)
{
	if (!ITEMSET::IS_ITEMSET_VALID(&Global_1396084))
	{
		return 0;
	}
	if (!PED::IS_PED_INJURED(bParam1) && ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		ITEMSET::ADD_TO_ITEMSET(iParam0, &Global_1396084);
		DECORATOR::DECOR_SET_BOOL(iParam0, "pedRoam_bInPedRoam", true);
		func_102(iParam0, bParam1);
		return 1;
	}
	return 0;
}

bool func_66(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_67(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		*uParam0 = (*uParam0 || iParam1);
	}
	else
	{
		*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	}
}

bool func_68(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_69(int iParam0)
{
	int iVar0;

	if (!func_56(iParam0))
	{
		return;
	}
	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(((*Global_1360165)[iParam0 /*1157*/])->f_1))
	{
		iVar0 = func_103(iParam0);
		if (iVar0 != 0)
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_1 = PERSCHAR::_CREATE_PERSISTENT_CHARACTER(iVar0);
			PERSCHAR::_0xFCC6DB8DBE709BC8(((*Global_1360165)[iParam0 /*1157*/])->f_1);
		}
		else
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_1 = 0;
		}
	}
}

int func_70(int iParam0)
{
	if (!func_56(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		(*Global_1360165)[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

void func_71(int iParam0)
{
	if (func_12(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_70(iParam0)))
		{
			func_104(iParam0, 67108864, 1);
			func_37(iParam0, 19, 1);
		}
	}
}

float func_72(int iParam0)
{
	if (!func_56(iParam0))
	{
		return 0f;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_134;
}

void func_73(int iParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	bVar0 = func_70(iParam0);
	iVar1 = func_39(iParam0, 0);
	func_105(iParam0, bVar0);
	if (ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(bVar0))
		{
			PED::_0xF008E0BA1FE1D644(1);
			bVar2 = true;
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bVar0, true, true);
		}
		PERSCHAR::_0x7B204F88F6C3D287(iVar1);
		if (bVar2)
		{
			PED::_0x7D4E70A67A651C71(1);
		}
	}
	PERSCHAR::_0xFCC6DB8DBE709BC8(iVar1);
}

int func_74(int iParam0)
{
	if (!func_56(iParam0))
	{
		return 0;
	}
	if (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == 0 || ((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == ((*Global_1360165)[iParam0 /*1157*/])->f_128)
	{
		return 0;
	}
	return 1;
}

bool func_75(int iParam0)
{
	if (!func_56(iParam0))
	{
		return false;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_76(int iParam0, int iParam1, bool bParam2)
{
	if (!func_56(iParam0))
	{
		return;
	}
	if (bParam2)
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 = (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 || iParam1);
	}
	else
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 = (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 - (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 && iParam1));
	}
}

int func_77(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (!func_56(iParam0))
	{
		return 0;
	}
	bVar0 = func_47(iParam0);
	if (func_38(bVar0, 0))
	{
		if (func_38(PED::_0xB676EFDA03DADA52(bVar0, 0), 0) && !bParam4)
		{
			return 0;
		}
		if ((bParam1 || !func_74(iParam0)) || func_75(iParam0))
		{
			if (bParam2 || !(ENTITY::IS_ENTITY_ON_SCREEN(bVar0) && func_106(PLAYER::PLAYER_PED_ID(), bVar0, 1) < 10000f))
			{
				iVar1 = func_107(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!ENTITY::_0x88AD6CC10D8D35B2(bVar0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bVar0, true, true);
					}
					func_108(iParam0);
					PERSCHAR::_0x7B204F88F6C3D287(func_109(iParam0, 0));
					PERSCHAR::_0xFCC6DB8DBE709BC8(func_109(iParam0, 0));
					func_110(iParam0);
				}
			}
			else
			{
				if (func_32(iParam0, 32768, 1))
				{
					iVar2 = func_109(iParam0, 0);
					PERSCHAR::_0xB65E7F733956CF25(iVar2);
					PERSCHAR::_0xFCC6DB8DBE709BC8(iVar2);
				}
				else
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&bVar0);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(bVar0, false);
			}
		}
		else
		{
			return 0;
		}
	}
	else if (bParam3)
	{
		if (func_38(((*Global_1360165)[iParam0 /*1157*/])->f_124, 0))
		{
			if (func_32(iParam0, 32768, 1))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(((*Global_1360165)[iParam0 /*1157*/])->f_124))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(((*Global_1360165)[iParam0 /*1157*/])->f_124, true, true);
				}
				func_108(iParam0);
				PERSCHAR::_0x7B204F88F6C3D287(func_109(iParam0, 0));
				PERSCHAR::_0xFCC6DB8DBE709BC8(func_109(iParam0, 0));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(((*Global_1360165)[iParam0 /*1157*/])->f_124, true, true);
				func_108(iParam0);
				PED::DELETE_PED(&(((*Global_1360165)[iParam0 /*1157*/])->f_124));
			}
		}
	}
	((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 = 0;
	func_111(iParam0, 0);
	return 1;
}

void func_78(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_112(bParam1))
		{
			func_113(bParam0, 41788943);
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
			func_114(bParam0, 0, 1);
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
			func_115(bParam0, 0);
			bVar0 = true;
		}
		func_116(bParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_0xCC8CA3E88256E58F(bParam0, false, true, true, true, false);
	}
}

int func_79(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	if (!func_117(iParam0, 1))
	{
		return 0;
	}
	if (func_99(func_98(iParam0)))
	{
		iVar1 = func_100(iParam0);
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
	if ((bParam4 && !func_61(iParam0)) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 171, bParam5);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	func_118(iParam0, 1);
	func_119(iParam0);
	if (bParam3)
	{
		func_118(iParam0, 16);
	}
	if (!bParam2)
	{
	}
	return iVar0;
}

void func_80(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_120(uParam0, iParam1, sParam2))
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1)))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam1, bParam3);
			}
		}
	}
}

void func_81()
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_EQUIP_ITEM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
}

float func_82(var uParam0)
{
	if (!func_58(uParam0))
	{
		return 0f;
	}
	if (func_121(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_122() - uParam0->f_1);
}

int func_83(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return 0;
	}
	if (bParam6)
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(bParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
		{
			return 1;
		}
	}
	else if (func_123(ENTITY::GET_ENTITY_COORDS(bParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return 1;
	}
	return 0;
}

int func_84(int iParam0, int iParam1, float fParam2)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_124(iParam0, vVar0, fParam2);
}

int func_85(var uParam0, bool bParam1)
{
	if (func_83(*uParam0, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 6.5f, 1, 0) && func_125(*uParam0, 0.25f, 0.75f, 0.25f, 0.75f))
	{
		if (func_126(&uLocal_26, bParam1, *uParam0, Global_35, 0, 0, 1, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_86(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		TASK::TASK_CLEAR_LOOK_AT(iParam0);
	}
}

void func_87()
{
	if (func_58(&uLocal_124))
	{
		if (func_82(&uLocal_124) > fLocal_5)
		{
			func_44(&uLocal_124);
		}
	}
}

int func_88(bool bParam0, bool bParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(bParam1, false, false))
		{
			if (!ENTITY::IS_ENTITY_DEAD(bParam0))
			{
				return PED::IS_PED_IN_VEHICLE(bParam0, bParam1, bParam2);
			}
		}
	}
	return 0;
}

int func_89(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (ENTITY::IS_ENTITY_DEAD(*bParam0))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*bParam1, false, false))
	{
		return 0;
	}
	if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(*bParam1, iParam2) != *bParam0)
	{
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(*bParam1, iParam2))
		{
			if (iParam3 && func_127(*bParam1))
			{
				iParam2 = func_128(*bParam1);
			}
			else
			{
				return 0;
			}
		}
		if (PED::IS_PED_ON_MOUNT(*bParam0))
		{
			PED::_REMOVE_PED_FROM_MOUNT(*bParam0, true, false);
		}
		PED::SET_PED_INTO_VEHICLE(*bParam0, *bParam1, iParam2);
	}
	return 1;
}

void func_90(bool bParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	bool bVar6;

	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return;
	}
	bVar4 = ENTITY::IS_ENTITY_A_PED(bParam0);
	if (bVar4)
	{
		bVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0);
		bVar3 = PED::_0xD5FE956C70FF370B(bVar1);
		if (PED::IS_PED_RAGDOLL(bVar1))
		{
			PED::_0x221F4D9912B7FE86(bVar1, 1);
		}
	}
	if (bParam0 == func_129(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (func_130(bParam0))
	{
		if (func_131(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0)))
		{
			PHYSICS::_0x0348469DAA17576C(bParam0);
		}
	}
	if (func_68(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(bParam0))
	{
		bVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0);
		if (PED::IS_PED_ON_VEHICLE(bVar1, false))
		{
			bVar0 = PED::GET_VEHICLE_PED_IS_IN(bVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(bVar0) && !ENTITY::IS_ENTITY_DEAD(bVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_90(bVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(bVar1))
		{
			bVar2 = PED::GET_MOUNT(bVar1);
			if (ENTITY::DOES_ENTITY_EXIST(bVar2) && !ENTITY::IS_ENTITY_DEAD(bVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_90(bVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_68(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(bParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0), false, true);
		}
	}
	if (func_68(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(bParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(bParam0, vParam1, fParam4, true, func_68(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(bParam0, vParam1, fParam4, true, func_68(iParam5, 32), true);
			ENTITY::_0x9587913B9E772D29(bParam0, 0);
		}
	}
	else if (func_68(iParam5, 129))
	{
		if (func_68(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(bParam0, vParam1, func_68(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(bParam0, fParam4);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(bParam0, vParam1, fParam4, true, func_68(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_68(iParam5, 16))
		{
			PED::_0x7DE9692C6F64CFE8(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0), bVar3, 0, false);
		}
		if (func_130(bParam0))
		{
			bVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0);
			PHYSICS::_0x0348469DAA17576C(bVar6);
			if (!func_68(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(bVar6, 1, 0);
				TASK::TASK_STAND_STILL(bVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PACKAGE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0), 1);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0) == Global_35 && !func_68(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

int func_91(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(bParam0, iParam1, 1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_92(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_93(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_122() - fParam1);
	func_132(uParam0, 1);
	func_133(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_94(int iParam0, int iParam1)
{
	if (func_134() != -1)
	{
		return false;
	}
	if (!func_60(iParam0))
	{
		return false;
	}
	return (Global_24886[iParam0 /*2*/] && iParam1) != 0;
}

bool func_95(int iParam0)
{
	if (!func_60(iParam0))
	{
		return false;
	}
	return SCRIPTS::_DOES_THREAD_EXIST(((*Global_1895087)[iParam0 /*3*/])->f_2);
}

void func_96(int iParam0, int iParam1)
{
	if (func_134() != -1)
	{
		return;
	}
	if (!func_60(iParam0))
	{
		return;
	}
	Global_24886[iParam0 /*2*/] = (&Global_24886[iParam0 /*2*/] - (Global_24886[iParam0 /*2*/] && iParam1));
}

void func_97(int iParam0)
{
	int iVar0;

	if (!func_60(iParam0))
	{
		return;
	}
	iVar0 = func_135(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
	((*Global_1895087)[iParam0 /*3*/])->f_2 = 0;
}

int func_98(int iParam0)
{
	if (!func_60(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

bool func_99(int iParam0)
{
	return iParam0 != 0;
}

int func_100(int iParam0)
{
	if (!func_60(iParam0))
	{
		return 0;
	}
	return ((*Global_1895087)[iParam0 /*3*/])->f_1;
}

int func_101(int iParam0, bool bParam1)
{
	if (!func_60(iParam0))
	{
		return 0;
	}
	if (!func_94(iParam0, 2))
	{
		return 0;
	}
	if (func_98(iParam0) == 0)
	{
		return 1;
	}
	if (!PERSCHAR::_0x800DF3FC913355F3(func_100(iParam0)))
	{
		return 1;
	}
	if (func_94(iParam0, 1) && !bParam1)
	{
		func_118(iParam0, 128);
		return 1;
	}
	func_96(iParam0, 129);
	func_97(iParam0);
	PERSCHAR::_0xFC77C5B44D5FF7C0(func_100(iParam0));
	func_136(iParam0, 0);
	return 1;
}

void func_102(int iParam0, bool bParam1)
{
	DECORATOR::DECOR_SET_INT(iParam0, "pedRoam_owner", bParam1);
}

int func_103(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("PERSCHAR_COMP_JOHN");
		case 0:
			return joaat("PERSCHAR_COMP_DUTCH");
		case 6:
			return joaat("PERSCHAR_COMP_MICAH");
		case 3:
			return joaat("PERSCHAR_COMP_BILL");
		case 7:
			return joaat("PERSCHAR_COMP_CHARLES");
		case 4:
			return joaat("PERSCHAR_COMP_UNCLE");
		case 2:
			return joaat("PERSCHAR_COMP_JAVIER");
		case 5:
			return joaat("PERSCHAR_COMP_HOSEA");
		case 8:
			return joaat("PERSCHAR_COMP_SEAN");
		case 9:
			return joaat("PERSCHAR_COMP_LENNY");
		case 13:
			return joaat("PERSCHAR_COMP_ABIGAIL");
		case 14:
			return joaat("PERSCHAR_COMP_JACK");
		case 15:
			return joaat("PERSCHAR_COMP_MARYBETH");
		case 16:
			return joaat("PERSCHAR_COMP_MOLLY");
		case 17:
			return joaat("PERSCHAR_COMP_PEARSON");
		case 18:
			return joaat("PERSCHAR_COMP_STRAUSS");
		case 19:
			return joaat("PERSCHAR_COMP_GRIMSHAW");
		case 20:
			return joaat("PERSCHAR_COMP_KAREN");
		case 21:
			return joaat("PERSCHAR_COMP_SWANSON");
		case 22:
			return joaat("PERSCHAR_COMP_TILLY");
		case 23:
			return joaat("PERSCHAR_COMP_TRELAWNY");
		case 10:
			return joaat("PERSCHAR_COMP_KIERAN");
		case 24:
			return -1960060437;
		case 25:
			return 1634371177;
		case 26:
			return joaat("PERSCHAR_COMP_EAGLEFLIES");
		case 11:
			return 683250525;
		case 12:
			return -814958461;
	}
	return 0;
}

void func_104(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_12(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (Global_40.f_4942[iParam0 /*60*/] || iParam1);
}

void func_105(int iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		func_137(bParam1);
	}
}

float func_106(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		return 0f;
	}
	if (bParam2)
	{
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(bParam1, false, false));
	}
	return func_123(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(bParam1, false, false));
}

int func_107(int iParam0, bool bParam1)
{
	if (!func_56(iParam0))
	{
		return 0;
	}
	if (((*Global_1360165)[iParam0 /*1157*/])->f_127 != 0)
	{
		return ((*Global_1360165)[iParam0 /*1157*/])->f_127;
	}
	switch (iParam0)
	{
		case 3:
			return joaat("PERSCHAR_COMP_HORSE_BILL");
		case 7:
			return joaat("PERSCHAR_COMP_HORSE_CHARLES");
		case 0:
			return joaat("PERSCHAR_COMP_HORSE_DUTCH");
		case 5:
			return joaat("PERSCHAR_COMP_HORSE_HOSEA");
		case 2:
			return joaat("PERSCHAR_COMP_HORSE_JAVIER");
		case 1:
			return joaat("PERSCHAR_COMP_HORSE_JOHN");
		case 9:
			return joaat("PERSCHAR_COMP_HORSE_LENNY");
		case 6:
			return joaat("PERSCHAR_COMP_HORSE_MICAH");
		case 11:
			return joaat("PERSCHAR_COMP_HORSE_SADIE");
		case 8:
			return joaat("PERSCHAR_COMP_HORSE_SEAN");
		case 23:
			return -1880884094;
		case 20:
			return joaat("PERSCHAR_COMP_HORSE_KAREN");
		case 4:
			return joaat("PERSCHAR_COMP_HORSE_UNCLE");
		case 10:
			return -1094022447;
		case 26:
			return -1484815615;
		case 12:
		case 14:
			return 0;
		default:
			break;
	}
	if (bParam1)
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_127 = func_138(iParam0);
		return ((*Global_1360165)[iParam0 /*1157*/])->f_127;
	}
	return 0;
}

void func_108(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	bVar0 = func_47(iParam0);
	if (!PED::_0xA911EE21EDF69DAF(bVar0))
	{
		return;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(bVar0, iVar1);
	iVar2 = 0;
	while (iVar2 < ITEMSET::GET_ITEMSET_SIZE(iVar1))
	{
		bVar3 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar1));
		if (!ENTITY::DOES_ENTITY_EXIST(bVar3))
		{
		}
		else
		{
			if (!ENTITY::_0x88AD6CC10D8D35B2(bVar3))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bVar3, true, true);
			}
			ENTITY::_0x0D0DB2B6AF19A987(&bVar3);
		}
		iVar2++;
	}
}

int func_109(int iParam0, bool bParam1)
{
	if (!func_56(iParam0))
	{
		return 0;
	}
	if (!PERSCHAR::_0x800DF3FC913355F3(((*Global_1360165)[iParam0 /*1157*/])->f_126) && bParam1)
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_126 = func_139(iParam0);
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_126;
}

void func_110(int iParam0)
{
	int iVar0;

	if (!func_56(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if ((Global_1357549->f_1675[iVar0 /*5*/])->f_1 == iParam0)
		{
			(Global_1357549->f_1675[iVar0 /*5*/])->f_1 = -1;
			((*Global_1360165)[iParam0 /*1157*/])->f_127 = 0;
		}
		iVar0++;
	}
}

void func_111(int iParam0, int iParam1)
{
	if (!func_56(iParam0))
	{
		return;
	}
	((*Global_1360165)[iParam0 /*1157*/])->f_70.f_12 = iParam1;
}

int func_112(bool bParam0)
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

void func_113(bool bParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (func_140(bParam0, iParam1))
		{
			if (func_141(bParam0, iParam1))
			{
				if (func_142(bParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(bParam0, "metaped_outfit_request"), bParam0, true, false);
					func_143(bParam0);
				}
			}
			else
			{
				PED::_0x1902C4CFCC5BE57C(bParam0, iParam1);
				PED::_0xCC8CA3E88256E58F(bParam0, false, true, true, true, false);
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

void func_114(bool bParam0, int iParam1, bool bParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return;
	}
	PED::_0xD710A5007C2AC539(bParam0, joaat("HATS"), 1);
	if (bParam2)
	{
		PED::_0xCC8CA3E88256E58F(bParam0, false, true, true, true, false);
	}
}

void func_115(bool bParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0) || PED::IS_PED_INJURED(bParam0))
	{
	}
	PED::_0x1902C4CFCC5BE57C(bParam0, 1268180497);
	if (bParam1)
	{
		PED::_0xCC8CA3E88256E58F(bParam0, false, true, true, true, false);
	}
}

void func_116(bool bParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		PED::_0x5653AB26C82938CF(bParam0, 41611, 0f);
	}
	else
	{
		PED::_0x5653AB26C82938CF(bParam0, 41611, 1f);
	}
}

int func_117(int iParam0, bool bParam1)
{
	if (!func_60(iParam0))
	{
		return 0;
	}
	if ((func_94(iParam0, 1) && !func_61(iParam0)) && func_95(iParam0))
	{
		return 0;
	}
	if (!func_94(iParam0, 2))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (!func_144(iParam0, 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_118(int iParam0, int iParam1)
{
	if (func_134() != -1)
	{
		return;
	}
	if (!func_60(iParam0))
	{
		return;
	}
	Global_24886[iParam0 /*2*/] = (Global_24886[iParam0 /*2*/] || iParam1);
}

void func_119(int iParam0)
{
	if (!func_60(iParam0))
	{
		return;
	}
	((*Global_1895087)[iParam0 /*3*/])->f_2 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

bool func_120(var uParam0, int iParam1, char* sParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < uParam0->f_97 && !bVar0)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam2, &(((*uParam0)[iVar1 /*4*/])->f_1)))
		{
			(*uParam0)[iVar1 /*4*/] = iParam1;
			bVar0 = true;
		}
		iVar1++;
	}
	if (!bVar0)
	{
		if (uParam0->f_97 < 24)
		{
			(*uParam0)[uParam0->f_97 /*4*/] = iParam1;
			StringCopy(&(((*uParam0)[uParam0->f_97 /*4*/])->f_1), sParam2, 24);
			uParam0->f_97++;
			bVar0 = true;
		}
	}
	return bVar0;
}

bool func_121(var uParam0)
{
	return func_92(*uParam0, 2);
}

float func_122()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

float func_123(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_124(int iParam0, vector3 vParam1, float fParam4)
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
	fVar9 = func_145(vVar3, vVar6);
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
	if (func_146(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

int func_125(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_147(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_126(var uParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	vector3 vVar0[24];
	int iVar3;

	bParam3 = bParam3;
	iParam4 = iParam4;
	if (!ENTITY::IS_ENTITY_DEAD(bParam2) && (func_148(bParam2, bParam3, 1, 1) < 70f || bParam5))
	{
		StringCopy(&cVar0, bParam1, 24);
		if (bParam7)
		{
			TASK::TASK_LOOK_AT_ENTITY(bParam2, bParam3, 7000, 0, 51, 0);
			if (func_148(bParam2, bParam3, 1, 1) < 25f)
			{
				TASK::TASK_LOOK_AT_ENTITY(bParam3, bParam2, 7000, 0, 51, 0);
			}
		}
		if (iParam4 > 0)
		{
			iVar3 = 1;
		}
		func_59(&uLocal_0);
		if (AUDIO::_0xD89504D9D7D5057D(bParam1))
		{
			if (func_149(bParam1))
			{
				return 1;
			}
		}
		else if (func_150(uParam0, cVar0, iVar3, iParam4, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_127(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 0))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 1))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

int func_128(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1))
	{
		return -1;
	}
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 0))
	{
		return 0;
	}
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 1))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 2))
	{
		return 2;
	}
	return -2;
}

bool func_129(var uParam0)
{
	return uParam0;
}

bool func_130(bool bParam0)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(bParam0))
	{
		return false;
	}
	bVar0 = ENTITY::GET_ENTITY_MODEL(bParam0);
	return PED::_0x772A1969F649E902(bVar0);
}

int func_131(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0) || PED::IS_PED_INJURED(bParam0))
	{
		return 0;
	}
	if (PED::_0x34D6AC1157C8226C(bParam0, -1805387726))
	{
		return 1;
	}
	return 0;
}

void func_132(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_133(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_134()
{
	return Global_1572887->f_12;
}

int func_135(int iParam0)
{
	int iVar0;

	iVar0 = func_100(iParam0);
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

void func_136(int iParam0, int iParam1)
{
	if (!func_60(iParam0))
	{
		return;
	}
	((*Global_1895087)[iParam0 /*3*/])->f_1 = iParam1;
}

void func_137(bool bParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (!DECORATOR::DECOR_EXIST_ON(bParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(bParam0, "metaped_outfit_request_name"))
	{
		return;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(bParam0, "metaped_outfit_request");
	if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(iVar0))
	{
		PED::_RELEASE_METAPED_OUTFIT_REQUEST(iVar0);
	}
	DECORATOR::DECOR_REMOVE(bParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(bParam0, "metaped_outfit_request_name");
}

int func_138(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (!func_56(iParam0))
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if ((Global_1357549->f_1675[iVar1 /*5*/])->f_1 == iParam0)
			{
				((*Global_1360165)[iParam0 /*1157*/])->f_126 = (Global_1357549->f_1675[iVar1 /*5*/])->f_4;
				return &(Global_1357549->f_1675[iVar1 /*5*/]);
			}
			iVar1++;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (&Global_1357549->f_1675[iVar1 /*5*/] != 0 && (Global_1357549->f_1675[iVar1 /*5*/])->f_1 == -1)
		{
			iVar0 = &Global_1357549->f_1675[iVar1 /*5*/];
			Jump @165; //curOff = 150
		}
		iVar1++;
	}
	if (!func_56(iParam0))
	{
		if (iVar0 != 0)
		{
			(Global_1357549->f_1675[iVar1 /*5*/])->f_1 = iParam0;
			((*Global_1360165)[iParam0 /*1157*/])->f_126 = (Global_1357549->f_1675[iVar1 /*5*/])->f_4;
		}
	}
	return iVar0;
}

int func_139(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_56(iParam0))
	{
		return 0;
	}
	if (!PERSCHAR::_0x800DF3FC913355F3(((*Global_1360165)[iParam0 /*1157*/])->f_126))
	{
		iVar0 = func_107(iParam0, 1);
		iVar1 = PERSCHAR::_0xA00DF706C60173D1(iVar0);
		if ((Global_40.f_4942[iParam0 /*60*/])->f_7 != 0 && iVar1 != (Global_40.f_4942[iParam0 /*60*/])->f_7)
		{
			PERSCHAR::_0x8BC555034A5A5E8C(iVar0, (Global_40.f_4942[iParam0 /*60*/])->f_7);
		}
		((*Global_1360165)[iParam0 /*1157*/])->f_126 = PERSCHAR::_CREATE_PERSISTENT_CHARACTER(iVar0);
		PERSCHAR::_0xFCC6DB8DBE709BC8(((*Global_1360165)[iParam0 /*1157*/])->f_126);
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_126;
}

bool func_140(bool bParam0, int iParam1)
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

int func_141(bool bParam0, int iParam1)
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

bool func_142(bool bParam0, int iParam1)
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
	if (!func_140(bParam0, iVar0))
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

void func_143(bool bParam0)
{
	DECORATOR::DECOR_REMOVE(bParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(bParam0, "metaped_outfit_request_name");
}

bool func_144(int iParam0, bool bParam1)
{
	if (func_134() != -1)
	{
		return false;
	}
	if (!func_60(iParam0))
	{
		return false;
	}
	if (!PERSCHAR::_0x800DF3FC913355F3(func_100(iParam0)))
	{
		return false;
	}
	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(func_135(iParam0)))
	{
		return false;
	}
	return !PERSCHAR::_0xEB98B38CA60742D7(func_100(iParam0));
}

float func_145(vector3 vParam0, vector3 vParam3)
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

bool func_146(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

int func_147(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

float func_148(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
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

int func_149(bool bParam0)
{
	if (AUDIO::_0xD89504D9D7D5057D(bParam0))
	{
		AUDIO::START_PRELOADED_CONVERSATION(bParam0);
		return 1;
	}
	return 0;
}

bool func_150(char[4] cParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!AUDIO::_0xD89504D9D7D5057D(&cParam1))
	{
		bVar0 = AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION(&cParam1);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_151(cParam1, cParam0);
		if (bParam6)
		{
			AUDIO::PRELOAD_SCRIPT_CONVERSATION(&cParam1, true, true, bParam7);
		}
		else
		{
			AUDIO::START_SCRIPT_CONVERSATION(&cParam1, true, true, bParam7);
		}
		if (bParam4)
		{
			AUDIO::_0x40CA665AB9D8D505(&cParam1, iParam5);
		}
	}
	return bVar0;
}

void func_151(char[4] cParam0, char[4] cParam1, char[4] cParam2, var uParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam3->f_97)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam3[iVar0 /*4*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam3[iVar0 /*4*/]))
			{
				AUDIO::ADD_PED_TO_CONVERSATION(&cParam0, uParam3[iVar0 /*4*/], &(((*uParam3)[iVar0 /*4*/])->f_1));
			}
		}
		iVar0++;
	}
}

