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
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	bool bLocal_24 = false;
	bool bLocal_25 = false;
#endregion

void __EntryFunction__()
{
	bool bVar0;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	func_1();
	func_2();
	func_3(&uLocal_14, 6);
	bVar0 = true;
	while (bVar0)
	{
		func_4(&uLocal_14);
		BUILTIN::WAIT(0);
	}
	func_5();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1()
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	}
	else if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		if (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
		}
		func_5();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_2()
{
	bLocal_24 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-4212.5f, -3455f, 35f, 0f, 0f, 0f, 110f, 110f, 15f, "m_volFortMercer_Restriction");
	func_6(bLocal_24, 1);
	bLocal_25 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-5270.212f, -3465.903f, -21.0166f, 0f, 0f, 0f, 101.75f, 130f, 50f, "m_volBenedictPoint_Restriction");
	func_6(bLocal_25, 1);
}

void func_3(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
	*uParam0 = 0;
	uParam0->f_2 = func_7(iParam1);
	uParam0->f_5 = { func_8(iParam1) };
}

void func_4(var uParam0)
{
	float fVar0;

	switch (*uParam0)
	{
		case 0:
			fVar0 = func_9(Global_35, uParam0->f_5, 1);
			if (fVar0 > BUILTIN::POW(400f, 2f) || fVar0 < BUILTIN::POW(100f, 2f))
			{
				return;
			}
			if (func_10(uParam0->f_1))
			{
				func_11(uParam0, 1);
			}
			else
			{
				func_11(uParam0, 6);
			}
			break;
		case 1:
			TASK::SET_SCENARIO_GROUP_ENABLED("Special_Ambient_Horse", true);
			STREAMING::REQUEST_MODEL(func_12(uParam0->f_1), false);
			PED::_0xED9582B3DA8F02B4(1);
			uParam0->f_9 = 1;
			func_11(uParam0, 2);
			break;
		case 2:
			if (!STREAMING::HAS_MODEL_LOADED(func_12(uParam0->f_1)))
			{
				return;
			}
			if (!PED::_0x5E420FF293EE5472())
			{
				return;
			}
			fVar0 = func_9(Global_35, uParam0->f_5, 1);
			if (fVar0 < BUILTIN::POW(100f, 2f))
			{
				func_13(uParam0);
				func_11(uParam0, 6);
				return;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
			{
				uParam0->f_3 = func_14(func_12(uParam0->f_1), uParam0->f_5, 0, 0, 1, uParam0->f_2, 0, 0, 0, 0, 1, 0, 0);
				return;
			}
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_3, false);
			func_15(uParam0);
			func_11(uParam0, 3);
		case 3:
			func_16(uParam0->f_3);
			PED::_0xCC8CA3E88256E58F(uParam0->f_3, false, true, true, true, false);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_3, true, false);
			FLOCK::_0xAEB97D84CDF3C00B(uParam0->f_3, 1);
			TASK::TASK_ANIMAL_UNALERTED(uParam0->f_3, -1, uParam0->f_4, 0, 0);
			FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_3, 44, 5f);
			FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_3, 45, 40f);
			FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_3, 35, 5f);
			FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_3, 36, 20f);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_3, true);
			ENTITY::_0xA91E6CF94404E8C9(uParam0->f_3);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_12(uParam0->f_1));
			func_11(uParam0, 4);
			break;
		case 4:
			if (func_17(uParam0))
			{
				func_11(uParam0, 5);
			}
			break;
		case 5:
			func_18(uParam0->f_1);
			uParam0->f_8 = 1;
			func_13(uParam0);
			func_11(uParam0, 6);
			break;
		case 6:
			break;
	}
}

void func_5()
{
	func_13(&uLocal_14);
}

void func_6(bool bParam0, bool bParam1)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(bParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(bParam0, 2228479, 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(bParam0, 2228479, 16384, 0, -1, -1, 0);
	if (bParam1)
	{
		POPULATION::_0x2161278C6322F740(2228479, 16384, 0, -1, -1, bParam0);
	}
}

int func_7(int iParam0)
{
	int iVar0;

	iVar0 = 2;
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 6:
			if (func_19())
			{
				iVar0 = 1;
			}
			break;
	}
	return iVar0;
}

Vector3 func_8(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 2681.173f, 1935.781f, 101.8587f;
		case 3:
			return -2828.721f, -422.1472f, 186.4498f;
		case 4:
			return 289.5062f, 2288.324f, 313.0248f;
		case 5:
			return -1940.045f, 1743.173f, 234.5481f;
		case 6:
			return -3916.118f, -3672.374f, 47.1305f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_9(int iParam0, vector3 vParam1, bool bParam4)
{
	vector3 vVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	}
	if (bParam4)
	{
		return BUILTIN::VDIST2(vVar0, vParam1);
	}
	return func_20(vVar0, vParam1);
}

int func_10(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_21() != -1)
	{
		return 0;
	}
	if (!func_22(15))
	{
		return 0;
	}
	iVar0 = func_12(iParam0);
	if (func_23(iVar0))
	{
		if (!func_24())
		{
			return 0;
		}
	}
	iVar1 = &Global_40.f_11945[iParam0];
	func_26(&iVar1, 0, 0, 0, func_25(iParam0), 0, 0, 0);
	if (!func_27(iVar1, 1))
	{
		return 0;
	}
	if (func_28(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_11(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_12(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("A_C_Horse_AmericanPaint_SplashedWhite");
		case 1:
			return joaat("A_C_Horse_Andalusian_Perlino");
		case 2:
			return joaat("A_C_HORSE_APPALOOSA_FEWSPOTTED_PC");
		case 3:
			return joaat("A_C_HORSE_ARABIAN_REDCHESTNUT_PC");
		case 4:
			return joaat("A_C_HORSE_ARABIAN_WARPEDBRINDLE_PC");
		case 5:
			return joaat("A_C_Horse_Arabian_White");
		case 6:
			return joaat("A_C_Horse_Mustang_TigerStripedBay");
		default:
			break;
	}
	return 0;
}

void func_13(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		if (uParam0->f_8)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_3));
			uParam0->f_8 = 0;
		}
		else
		{
			PED::DELETE_PED(&(uParam0->f_3));
		}
		uParam0->f_3 = 0;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_4))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_4);
	}
	if (uParam0->f_9)
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("Special_Ambient_Horse", false);
		PED::_0x7D4E70A67A651C71(1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_12(uParam0->f_1));
		uParam0->f_9 = 0;
	}
}

bool func_14(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	bool bVar0;

	bVar0 = PED::CREATE_PED(bParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		return false;
	}
	func_29(bVar0, bParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return bVar0;
}

void func_15(var uParam0)
{
	var uVar0;
	vector3 vVar1;

	uVar0 = func_30(uParam0->f_1);
	vVar1 = { uVar0, uVar0, uVar0 };
	uParam0->f_4 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(uParam0->f_5, func_31(), vVar1, "Special Ambient Horse Unalerted");
}

void func_16(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
	}
	if (PED::IS_PED_INJURED(bParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(bParam0))
	{
	}
	PED::_0xDF631E4BCE1B1FC4(bParam0, joaat("horse_blankets"), 0, false);
	PED::_0xDF631E4BCE1B1FC4(bParam0, joaat("horse_saddles"), 0, false);
	PED::_0xDF631E4BCE1B1FC4(bParam0, joaat("saddle_horns"), 0, false);
	PED::_0xDF631E4BCE1B1FC4(bParam0, joaat("saddle_stirrups"), 0, false);
	PED::_0xDF631E4BCE1B1FC4(bParam0, joaat("horse_bedrolls"), 0, false);
	PED::_0xDF631E4BCE1B1FC4(bParam0, -2142954459, 0, false);
}

int func_17(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		return 0;
	}
	if (PED::IS_PED_DEAD_OR_DYING(uParam0->f_3, true))
	{
		return 1;
	}
	if (PED::_0x77525BBF433F2CD6(uParam0->f_3))
	{
		return 1;
	}
	if (PED::IS_PED_RESPONDING_TO_EVENT(uParam0->f_3, joaat("EVENT_ANIMAL_DETECTED_THREAT")))
	{
		return 1;
	}
	if (PED::IS_PED_RESPONDING_TO_EVENT(uParam0->f_3, 1379175797))
	{
		return 1;
	}
	if (PED::IS_PED_RESPONDING_TO_EVENT(uParam0->f_3, 1312307149))
	{
		return 1;
	}
	if (func_28(uParam0->f_1))
	{
		return 1;
	}
	return 0;
}

void func_18(int iParam0)
{
	Global_40.f_11945[iParam0] = func_32();
}

int func_19()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
	{
		return 1;
	}
	return 0;
}

float func_20(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_21()
{
	return Global_1572887->f_12;
}

bool func_22(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_33(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
	}
	return (UNLOCK::_UNLOCK_IS_UNLOCKED(((*Global_1835011)[iParam0 /*74*/])->f_2) && !UNLOCK::_UNLOCK_IS_VISIBLE(((*Global_1835011)[iParam0 /*74*/])->f_2));
}

int func_23(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("A_C_HORSE_ARABIAN_REDCHESTNUT_PC"):
		case joaat("A_C_HORSE_KENTUCKYSADDLE_BUTTERMILKBUCKSKIN_PC"):
		case joaat("A_C_HORSE_MORGAN_LIVERCHESTNUT_PC"):
		case joaat("A_C_HORSE_APPALOOSA_FEWSPOTTED_PC"):
		case joaat("A_C_Horse_Andalusian_Perlino"):
		case joaat("A_C_HORSE_TENNESSEEWALKER_GOLDPALOMINO_PC"):
		case joaat("A_C_HORSE_ARABIAN_WARPEDBRINDLE_PC"):
			return 1;
	}
	return 0;
}

bool func_24()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(99890643);
}

int func_25(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 1;
		case 3:
			return 2;
		case 4:
			return 2;
		case 5:
			return 2;
		case 6:
			return 2;
		default:
			break;
	}
	return 0;
}

void func_26(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_34(*uParam0);
	iVar1 = func_35(*uParam0);
	iVar2 = func_36(*uParam0);
	iVar3 = func_37(*uParam0);
	iVar4 = func_38(*uParam0);
	iVar5 = func_39(*uParam0);
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
	iVar6 = func_40(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_40(iVar1, iVar0);
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
	func_41(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_27(int iParam0, bool bParam1)
{
	return func_43(func_42(), iParam0, bParam1);
}

int func_28(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_12(iParam0);
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (func_44(iVar1) == iVar0)
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

void func_29(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_45(bParam1))
		{
			func_46(bParam0, 41788943);
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
			func_47(bParam0, 0, 1);
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
			func_48(bParam0, 0);
			bVar0 = true;
		}
		func_49(bParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_0xCC8CA3E88256E58F(bParam0, false, true, true, true, false);
	}
}

float func_30(int iParam0)
{
	float fVar0;

	fVar0 = 50f;
	switch (iParam0)
	{
		case 1:
		case 5:
		case 6:
			fVar0 = 20f;
			break;
	}
	return fVar0;
}

Vector3 func_31()
{
	return 0f, 0f, 0f;
}

var func_32()
{
	return &Global_1899515;
}

int func_33(int iParam0, bool bParam1)
{
	switch (func_50(iParam0))
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

var func_34(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_51(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_35(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_36(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_37(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_38(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_39(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_40(int iParam0, int iParam1)
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

void func_41(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_52(uParam0, iParam6);
	func_53(uParam0, iParam5);
	func_54(uParam0, iParam4);
	func_55(uParam0, iParam3);
	func_56(uParam0, iParam2);
	func_57(uParam0, iParam1);
}

int func_42()
{
	return &Global_1899515;
}

bool func_43(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_58(iParam1) || !func_58(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

int func_44(int iParam0)
{
	iParam0 = func_59(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_9;
}

int func_45(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("CS_sistercalderon"):
		case joaat("CS_strsheriff_01"):
		case joaat("CS_mud2bigguy"):
		case joaat("CS_rainsfall"):
		case joaat("CS_penelopebraithwaite"):
		case joaat("CS_SWAMPWEIRDOSONNY"):
		case joaat("CS_UNIDUSTERJAIL_01"):
		case joaat("CS_IANGRAY"):
		case joaat("CS_TINYHERMIT"):
		case joaat("CS_TimothyDonahue"):
		case joaat("CS_PrincessIsabeau"):
		case joaat("CS_leviticuscornwall"):
		case joaat("CS_DIDSBURY"):
		case joaat("CS_FEATHERSTONCHAMBERS"):
		case joaat("CS_FeatsOfStrength"):
		case joaat("CS_bandpianist"):
		case joaat("CS_EscapeArtistAssistant"):
		case joaat("CS_garethbraithwaite"):
		case joaat("CS_creoleguy"):
		case joaat("CS_leighgray"):
		case joaat("CS_strawberryoutlaw_02"):
		case joaat("cs_GLORIA"):
		case joaat("CS_warvet"):
		case joaat("CS_jockgray"):
		case joaat("CS_DavidGeddes"):
		case joaat("CS_GuidoMartelli"):
		case joaat("CS_DUNCANGEDDES"):
		case joaat("CS_DusterInformant_01"):
		case joaat("CS_PinkertonGoon"):
		case joaat("CS_Mickey"):
		case joaat("CS_twinbrother_02"):
		case joaat("CS_HestonJameson"):
		case joaat("CS_strdeputy_01"):
		case joaat("CS_abe"):
		case joaat("CS_oddfellowspinhead"):
		case joaat("CS_SwampFreak"):
		case joaat("CS_mradler"):
		case joaat("CS_AberdeenPigFarmer"):
		case joaat("CS_hobartcrawley"):
		case joaat("CS_FORMYARTBIGWOMAN"):
		case joaat("CS_NorrisForsythe"):
		case joaat("CS_Jules"):
		case joaat("CS_TomDickens"):
		case joaat("CS_geraldbraithwaite"):
		case joaat("CS_PAYTAH"):
		case joaat("CS_cancan_03"):
		case joaat("CS_GrizzledJon"):
		case joaat("CS_WROBEL"):
		case joaat("CS_Meredith"):
		case joaat("CS_creepyoldlady"):
		case joaat("CS_nbxreceptionist_01"):
		case joaat("CS_NbxPoliceChiefFormal"):
		case joaat("CS_CornwallTrainConductor"):
		case joaat("CS_rhodeputy_01"):
		case joaat("CS_DrMalcolmMacIntosh"):
		case joaat("CS_leon"):
		case joaat("CS_SheriffOwens"):
		case joaat("CS_SDDOCTOR_01"):
		case joaat("CS_SCOTTGRAY"):
		case joaat("CS_cancan_01"):
		case joaat("CS_CREOLECAPTAIN"):
		case joaat("CS_BrontesButler"):
		case joaat("CS_JANSON"):
		case joaat("CS_forgivenwife_01"):
		case joaat("CS_TigerHandler"):
		case joaat("CS_frenchartist"):
		case joaat("CS_genstorymale"):
		case joaat("CS_clay"):
		case joaat("CS_strdeputy_02"):
		case joaat("CS_famousgunslinger_03"):
		case joaat("CS_BivCoachDriver"):
		case joaat("CS_braithwaitebutler"):
		case joaat("CS_CLEET"):
		case joaat("CS_Joe"):
		case joaat("CS_slavecatcher"):
		case joaat("CS_braithwaitemaid"):
		case joaat("CS_twingroupie_02"):
		case joaat("CS_mrsgeddes"):
		case joaat("CS_samaritan"):
		case joaat("CS_EXCONFEDINFORMANT"):
		case joaat("CS_FRENCHMAN_01"):
		case joaat("CS_bandsinger"):
		case joaat("CS_baptiste"):
		case joaat("CS_ANGUSGEDDES"):
		case joaat("CS_MysteriousStranger"):
		case joaat("CS_famousgunslinger_01"):
		case joaat("CS_bartholomewbraithwaite"):
		case joaat("CS_MIXEDRACEKID"):
		case joaat("CS_BeatenUpCaptain"):
		case joaat("CS_edgarross"):
		case joaat("CS_twingroupie_01"):
		case joaat("CS_MrsWeathers"):
		case joaat("CS_JAMIE"):
		case joaat("CS_KarensJohn_01"):
		case joaat("CS_thomasdown"):
		case joaat("CS_obediahhinton"):
		case joaat("CS_AgnesDowd"):
		case joaat("cs_CAVEHERMIT"):
		case joaat("CS_brynntildon"):
		case joaat("CS_GermanSon"):
		case joaat("CS_brendacrawley"):
		case joaat("CS_colfavours"):
		case joaat("CS_rhodeskidnapvictim"):
		case joaat("CS_exconfedsleader_01"):
		case joaat("CS_cancan_04"):
		case joaat("CS_TownCrier"):
		case joaat("CS_famousgunslinger_04"):
		case joaat("CS_dalemaroney"):
		case joaat("CS_angryhusband"):
		case joaat("CS_LillianPowell"):
		case joaat("CS_AndersHelgerson"):
		case joaat("CS_POORJOE"):
		case joaat("CS_braithwaiteservant"):
		case joaat("CS_brotherdorkins"):
		case joaat("CS_albertmason"):
		case joaat("CS_FamousGunslinger_05"):
		case joaat("CS_balloonoperator"):
		case joaat("CS_albertcakeesquire"):
		case joaat("CS_MrsFellows"):
		case joaat("CS_CanCanMan_01"):
		case joaat("CS_POISONWELLSHAMAN"):
		case joaat("CS_cancan_02"):
		case joaat("CS_MeredithsMother"):
		case joaat("CS_ANGEL"):
		case joaat("CS_archerfordham"):
		case joaat("CS_DisguisedDuster_01"):
		case joaat("CS_ChelonianMaster"):
		case joaat("CS_twinbrother_01"):
		case joaat("CS_GermanDaughter"):
		case joaat("CS_LemiuxAssistant"):
		case joaat("CS_creoledoctor"):
		case joaat("cs_crackpotRobot"):
		case joaat("CS_bandbassist"):
		case joaat("CS_genstoryfemale"):
		case joaat("CS_marylinton"):
		case joaat("CS_ValPrayingMan"):
		case joaat("CS_JOHNTHEBAPTISINGMADMAN"):
		case joaat("CS_Mrs_Calhoun"):
		case joaat("CS_theodorelevin"):
		case joaat("CS_NicholasTimmins"):
		case joaat("CS_DisguisedDuster_03"):
		case joaat("CS_DinoBonesLady"):
		case joaat("CS_beaugray"):
		case joaat("CS_strawberryoutlaw_01"):
		case joaat("CS_crackpotinventor"):
		case joaat("CS_hercule"):
		case joaat("CS_GAVIN"):
		case joaat("CS_LeviSimon"):
		case joaat("CS_LondonderrySon"):
		case joaat("CS_captainmonroe"):
		case joaat("CS_famousgunslinger_02"):
		case joaat("CS_MrsLondonderry"):
		case joaat("CS_SOOTHSAYER"):
		case joaat("CS_tavishgray"):
		case joaat("CS_JoeButler"):
		case joaat("CS_banddrummer"):
		case joaat("CS_lillymillet"):
		case joaat("CS_ansel_atherton"):
		case joaat("CS_RhoDeputy_02"):
		case joaat("CS_EDMUNDLOWRY"):
		case joaat("CS_DisguisedDuster_02"):
		case joaat("CS_Magnifico"):
		case joaat("CS_ARTAPPRAISER"):
		case joaat("CS_forgivenhusband_01"):
		case joaat("CS_ReverendFortheringham"):
		case joaat("CS_DaveyCallender"):
		case joaat("CS_DESMOND"):
		case joaat("CS_adamgray"):
		case joaat("CS_jimcalloway"):
		case joaat("CS_SDSALOONDRUNK_01"):
		case joaat("CS_NbxDrunk"):
		case joaat("CS_GermanMother"):
		case joaat("CS_ringmaster"):
		case joaat("cs_LUCANAPOLI"):
		case joaat("CS_RhodesAssistant"):
		case joaat("CS_AberdeenSister"):
		case joaat("CS_NbxExecuted"):
		case joaat("CS_FamousGunslinger_06"):
		case joaat("CS_JohnWeathers"):
		case joaat("CS_professorbell"):
		case joaat("CS_rhodessaloonbouncer"):
			return 1;
		default:
			break;
	}
	return 0;
}

void func_46(bool bParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (func_60(bParam0, iParam1))
		{
			if (func_61(bParam0, iParam1))
			{
				if (func_62(bParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(bParam0, "metaped_outfit_request"), bParam0, true, false);
					func_63(bParam0);
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

void func_47(bool bParam0, int iParam1, bool bParam2)
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

void func_48(bool bParam0, bool bParam1)
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

void func_49(bool bParam0, int iParam1)
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

int func_50(int iParam0)
{
	if (!func_64(iParam0))
	{
		return -1;
	}
	return func_65(iParam0);
}

int func_51(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_52(var uParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT((1898 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT((iParam1 - 1898), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_53(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 62914560);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_54(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_35(*uParam0);
	iVar1 = func_34(*uParam0);
	if (iParam1 < 1 || iParam1 > func_40(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_55(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_56(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_57(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

int func_58(int iParam0)
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
	iVar0 = func_39(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_38(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_37(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_34(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return 0;
	}
	iVar4 = func_35(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_36(iParam0);
	if (iVar5 < 1 || iVar5 > func_40(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_59(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

bool func_60(bool bParam0, int iParam1)
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

int func_61(bool bParam0, int iParam1)
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

bool func_62(bool bParam0, int iParam1)
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
	if (!func_60(bParam0, iVar0))
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

void func_63(bool bParam0)
{
	DECORATOR::DECOR_REMOVE(bParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(bParam0, "metaped_outfit_request_name");
}

bool func_64(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_65(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_66(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

int func_66(int iParam0)
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

