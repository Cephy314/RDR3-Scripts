#region Local Var
	struct<100> Local_0 = { 0, 0, 0, 0, 0, 0, -1, 0, 0, 2, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 2 } ;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	struct<13> Local_102[32];
	struct<208> Local_519 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1061997773, 0, 0, -1, 255, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 1 } ;
	var uLocal_727 = 1;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 7;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = -1;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	float fLocal_750 = 0f;
	float fLocal_751 = 0f;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_750 = 1f;
	fLocal_751 = 1f;
	iVar0 = ScriptParam_0;
	func_1(iVar0);
	func_2(ScriptParam_0);
	while (!func_3())
	{
		func_4();
		BUILTIN::WAIT(0);
	}
	func_5();
	func_6();
}

void func_1(int iParam0)
{
	func_7(32, iParam0);
	func_8();
	func_9();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_0, 102, 40);
	func_10(NETWORK::_0xBA24095EA96DFE17(&Local_0), 102, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_102, 417, 41);
	func_11(NETWORK::_0x690806BC83BC8CA2(Local_102[0 /*13*/]), 417, "m_clientData");
	func_12(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
}

void func_2(struct<5> Param0)
{
	if (Local_0 == 6)
	{
		return;
	}
	func_13(Param0);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_14();
		func_15();
	}
}

int func_3()
{
	if (func_16(0, 0))
	{
		return 1;
	}
	else if (func_17(Local_519.f_9, 0, 1))
	{
		return 1;
	}
	else if (!func_18())
	{
		return 1;
	}
	else if (!func_19(Local_519.f_12))
	{
		return 1;
	}
	else if (!func_21(func_20(Local_519.f_12), Local_519.f_9))
	{
		return 1;
	}
	else if (Local_519.f_8 == 6)
	{
		return 1;
	}
	return 0;
}

void func_4()
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_22();
	}
	func_23();
}

void func_5()
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_24();
		func_25();
	}
	func_26();
	func_27();
}

void func_6()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_7(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_6();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
}

int func_8()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	iVar1 = MISC::GET_GAME_TIMER();
	iVar2 = NETWORK::NETWORK_GET_TIMEOUT_TIME();
	if (iVar2 < 50000)
	{
		iVar2 = 50000;
	}
	while (iVar0 != 2)
	{
		if (MISC::GET_GAME_TIMER() - iVar1) > (iVar2 - 5000)
		{
		}
		if ((MISC::GET_GAME_TIMER() - iVar1) > 300000)
		{
			func_6();
		}
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
			{
				case 0:
					break;
				case 1:
					func_6();
					break;
				case 2:
					func_6();
					break;
				case 4:
					func_6();
					break;
				case 3:
					func_6();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_6();
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_6();
		}
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			func_6();
		}
		if (func_28() == 0)
		{
			if (func_29())
			{
				func_6();
			}
		}
		BUILTIN::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_6();
	}
	return 1;
}

void func_9()
{
}

int func_10(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

int func_11(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_12(bool bParam0)
{
	int iVar0;
	struct<8> Var1;
	int iVar9;

	iVar0 = (MISC::_GET_SYSTEM_TIME() + 180000);
	iVar9 = 0;
	Var1 = { Var1 };
	while (true)
	{
		iVar9++;
		if (bParam0)
		{
			NETWORK::_0x236905C700FDB54D();
		}
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
			{
				case 0:
					break;
				case 1:
					func_6();
					break;
				case 2:
					func_6();
					break;
				case 4:
					func_6();
					break;
				case 3:
					func_6();
					break;
				default:
					break;
			}
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			StringCopy(&Var1, "HOST", 64);
		}
		else
		{
			StringCopy(&Var1, "CLIENT", 64);
		}
		if (NETWORK::_0x5D10B3795F3FC886())
		{
			return;
		}
		if (MISC::_GET_SYSTEM_TIME() >= iVar0)
		{
			func_6();
			return;
		}
		BUILTIN::WAIT(0);
	}
}

void func_13(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	struct<12> Var0;
	int iVar17;
	bool bVar18;
	int iVar19;

	Var0.f_10 = 1106247680;
	iVar17 = 255;
	MISC::_COPY_MEMORY(&Local_519, &uParam0, 5);
	iVar19 = func_30(&bVar18, Local_519.f_1, Local_519.f_2);
	if (bVar18 || iVar19 == -1)
	{
		return;
	}
	Local_519.f_12 = iVar19;
	iVar17 = (Global_1186267->f_231.f_1066[iVar19 /*17*/])->f_5;
	func_31(&Var0, Local_519.f_1, Local_519.f_2, Local_519.f_3, iVar17);
	Local_519.f_9 = { func_32(Var0.f_5, 8) };
	Local_519.f_14 = Var0.f_5;
	Local_519.f_15 = { Var0.f_11 };
	func_33();
	func_34();
}

void func_14()
{
	func_35();
}

void func_15()
{
	func_36();
}

int func_16(bool bParam0, bool bParam1)
{
	int iVar0;

	if (Global_1572887->f_12)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bParam1 && NETWORK::_0xF2CBC969C4F090C7())
		{
		}
		else if (bParam1 && NETWORK::NETWORK_IS_SESSION_ACTIVE())
		{
		}
		else if (bParam1 && &Global_1572887 < 39)
		{
		}
		else
		{
			return 1;
		}
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
		{
			case 0:
				return 1;
			case 1:
				return 1;
			case 2:
				if (!bParam0)
				{
					return 1;
				}
				break;
			case 4:
				return 1;
			case 3:
				return 1;
			default:
				return 1;
		}
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		if (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0) == 1976253964)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_17(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265331->f_124445.f_134 & 8 != 0)
	{
		Global_1070356->f_26837 = 1;
		return 1;
	}
	if (func_37(*Global_1051163) && !func_21(*Global_1051163, Param0))
	{
		Global_1070356->f_26837 = 2;
		return 1;
	}
	if (iParam2 != 0 && func_38(iParam2))
	{
		return 1;
	}
	if (iParam3 != 0 && func_39(iParam3, 255))
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
	if (func_40())
	{
		Global_1070356->f_26837 = 7;
		return 1;
	}
	if (Global_1572887->f_7 & 1 != 0)
	{
		if (!func_37(*Global_1051163))
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

int func_18()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return 1;
	}
	return 0;
}

bool func_19(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 71);
}

struct<2> func_20(int iParam0)
{
	return (Global_1198382->f_1[iParam0 /*10*/])->f_4;
}

bool func_21(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

void func_22()
{
	if (Local_0 <= 5)
	{
		func_41();
	}
	switch (Local_0)
	{
		case 0:
			func_42();
			break;
		case 1:
			func_43();
			break;
		case 2:
			func_44();
			break;
		case 3:
			func_45();
			break;
		case 4:
			func_46();
			break;
		case 5:
			func_47();
			break;
	}
}

void func_23()
{
	func_48();
	if (Local_519.f_8 <= 5)
	{
		func_49();
	}
	switch (Local_519.f_8)
	{
		case 0:
			func_50();
			break;
		case 1:
			func_51();
			break;
		case 2:
			func_52();
			break;
		case 3:
			func_53();
			break;
		case 4:
			func_54();
			break;
		case 5:
			func_55();
			break;
	}
}

void func_24()
{
	func_56();
}

void func_25()
{
	if (func_57())
	{
		if (VOLUME::_0xF6A8A652A6B186CD(Local_0.f_3.f_1))
		{
			VOLUME::_0xFDFECC6EE4491E11(Local_0.f_3.f_1);
		}
	}
	func_58();
}

void func_26()
{
	func_59();
	func_60();
}

void func_27()
{
	if (Local_519.f_12 != -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1)
		{
			func_61(Local_519.f_12, 4);
		}
	}
	func_62();
	if (func_63(32))
	{
		func_64(Local_0.f_6);
	}
	func_65();
}

int func_28()
{
	return Global_1572887->f_13;
}

bool func_29()
{
	return Global_1051202->f_8;
}

int func_30(var uParam0, int iParam1, int iParam2)
{
	struct<10> Var0;
	struct<15> Var10;
	int iVar25;
	struct<17> Var26;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_6.f_1 = -1;
	Var0.f_9 = 2;
	Var10 = 2;
	Var10.f_1 = -1;
	Var10.f_5 = -1;
	Var10.f_5.f_1 = -1;
	Var10.f_5.f_3 = -1;
	Var10.f_5.f_4 = -1;
	Var10.f_5.f_5 = -1;
	Var10.f_5.f_6 = -1;
	Var10.f_5.f_6.f_1 = -1;
	Var10.f_5.f_9 = 2;
	Var26.f_10 = 1106247680;
	func_31(&Var26, iParam1, iParam2, -1, 255);
	func_66(&Var0, Var26);
	iVar25 = func_67(&Var0);
	if (func_19(iVar25))
	{
		Var10 = { func_68(iVar25) };
		if (Var10 == 2)
		{
			return iVar25;
		}
		else
		{
			*uParam0 = 1;
			return -1;
		}
	}
	return -1;
}

void func_31(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	struct<11> Var0;
	int iVar17;

	Var0.f_10 = 1106247680;
	MISC::_COPY_MEMORY(iParam0, &Var0, 17);
	if (iParam4 == 255)
	{
		iParam4 = PLAYER::PLAYER_ID();
	}
	switch (iParam1)
	{
		case 0:
			*iParam0 = 0;
			iParam0->f_1 = 0;
			iParam0->f_2 = 0;
			break;
		case 1:
			iParam0->f_6 = 1;
			*iParam0 = 10;
			iParam0->f_1 = 4;
			iParam0->f_2 = 7;
			func_69(iParam0, iParam2);
			switch (iParam2)
			{
				case 0:
					iParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_ROANOKE_RIDGE_1");
					iParam0->f_11 = { 2150.374f, 1728.215f, 125.2313f };
					break;
				case 1:
					iParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_ROANOKE_RIDGE_2");
					iParam0->f_11 = { 2179.106f, -25.3714f, 51.3658f };
					break;
				case 2:
					iParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_BIG_VALLEY_1");
					iParam0->f_11 = { -1055.963f, -794.308f, 59.2567f };
					break;
				case 3:
					iParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_BIG_VALLEY_2");
					iParam0->f_11 = { -1158.078f, -155.114f, 88.889f };
					break;
				case 4:
					iParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_BIG_VALLEY_3");
					iParam0->f_11 = { -1370.712f, -515.7384f, 125.267f };
					break;
				case 5:
					iParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_BIG_VALLEY_4");
					iParam0->f_11 = { -1029.465f, -492.4087f, 101.0615f };
					break;
				case 6:
					iParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_HEARTLANDS_1");
					iParam0->f_11 = { -319.5499f, 203.8464f, 62.1121f };
					break;
				case 7:
					iParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_HEARTLANDS_2");
					iParam0->f_11 = { -513.8f, 345.2f, 49.8945f };
					break;
				case 8:
					iParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_GREAT_PLAINS_1");
					iParam0->f_11 = { -1234.665f, -1371.778f, 80.796f };
					break;
				case 9:
					iParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_GRIZZLIES_WEST_1");
					iParam0->f_11 = { -1525.164f, 1722.86f, 239.152f };
					break;
			}
			break;
		case 2:
			iParam0->f_6 = 1;
			*iParam0 = 20;
			iParam0->f_1 = 2;
			iParam0->f_2 = 1;
			func_70(iParam0);
			switch (iParam2)
			{
				case 0:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_MACFARLANES");
					iParam0->f_11 = { -1925.343f, -2119.336f, 52.16934f };
					break;
				case 1:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_HEARTLANDS_1");
					iParam0->f_11 = { 136.298f, 35.34337f, 101.2795f };
					break;
				case 2:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_GRIZZLIES_1");
					iParam0->f_11 = { -910.7408f, 860.8453f, 134.6651f };
					break;
				case 3:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_ROANOKE_1");
					iParam0->f_11 = { 2788.779f, 1077.284f, 57.99089f };
					break;
				case 4:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_BAYOU_1");
					iParam0->f_11 = { 1751.914f, -1117.739f, 40.70011f };
					break;
				case 5:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_SCARLETT_1");
					iParam0->f_11 = { 1290.432f, -836.7289f, 77.47561f };
					break;
				case 6:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_CUMBERLAND_1");
					iParam0->f_11 = { 308.1141f, 1187.807f, 180.1746f };
					break;
				case 7:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_STRAWBERRY_1");
					iParam0->f_11 = { -1779.538f, -235.3894f, 181.2029f };
					break;
				case 8:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_PLAINS_1");
					iParam0->f_11 = { -1290.399f, -1179.199f, 72.33453f };
					break;
				case 9:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_TALL_TREES_1");
					iParam0->f_11 = { -2306.89f, -1546.208f, 152.0187f };
					break;
				case 10:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_HENNIGANS_1");
					iParam0->f_11 = { -2724.458f, -2521.524f, 64.76124f };
					break;
				case 11:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_RIO_1");
					iParam0->f_11 = { -4461.883f, -3271.474f, 14.54459f };
					break;
				case 12:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_CHOLLA_1");
					iParam0->f_11 = { -4631.054f, -2738.483f, -12.13559f };
					break;
				case 13:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_GAPTOOTH_1");
					iParam0->f_11 = { -5678.259f, -3182.939f, -22.66476f };
					break;
				case 14:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_THIEVES_1");
					iParam0->f_11 = { -1688.868f, -2272.091f, 44.12061f };
					break;
				case 15:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_GRIZZLIES_2");
					iParam0->f_11 = { -1621.917f, 1628.208f, 235.9645f };
					break;
				case 16:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_GRIZZLIES_3");
					iParam0->f_11 = { 420.3633f, 2020.91f, 230.4423f };
					break;
				case 17:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_VALENTINE_1");
					iParam0->f_11 = { -517.4607f, 510.5349f, 102.2307f };
					break;
				case 18:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_EMERALD_1");
					iParam0->f_11 = { 1775.601f, 546.3866f, 106.6334f };
					break;
				case 19:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_BOLGER_1");
					iParam0->f_11 = { 1612.415f, -1715.397f, 52.91364f };
					break;
			}
			break;
		case 3:
			iParam0->f_6 = 1;
			*iParam0 = 21;
			iParam0->f_1 = 8;
			iParam0->f_2 = 1;
			func_70(iParam0);
			switch (iParam2)
			{
				case 0:
					func_72(iParam0, 2);
					func_72(iParam0, 3);
					func_72(iParam0, 5);
					iParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_ROANOKE_RIDGE_1");
					iParam0->f_11 = { 2252.035f, 1342.706f, 84.5573f };
					break;
				case 1:
					func_72(iParam0, 2);
					func_72(iParam0, 3);
					func_72(iParam0, 5);
					iParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_ROANOKE_RIDGE_2");
					iParam0->f_11 = { 2280.7f, 1608.79f, 84.32f };
					break;
				case 2:
					func_72(iParam0, 0);
					func_72(iParam0, 1);
					func_72(iParam0, 2);
					func_72(iParam0, 3);
					func_72(iParam0, 5);
					iParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_ROANOKE_RIDGE_3");
					iParam0->f_11 = { 2438.612f, 960.3168f, 73.0963f };
					break;
				case 3:
					func_72(iParam0, 0);
					func_72(iParam0, 2);
					func_72(iParam0, 3);
					func_72(iParam0, 4);
					func_72(iParam0, 5);
					func_72(iParam0, 7);
					iParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_HEARTLANDS_1");
					iParam0->f_11 = { 1130.541f, 575.7938f, 86.66257f };
					break;
				case 4:
					func_72(iParam0, 0);
					func_72(iParam0, 2);
					func_72(iParam0, 3);
					func_72(iParam0, 5);
					func_72(iParam0, 7);
					iParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_HEARTLANDS_2");
					iParam0->f_11 = { -754.3893f, -399.1133f, 40.84306f };
					break;
				case 5:
					func_72(iParam0, 0);
					func_72(iParam0, 2);
					func_72(iParam0, 3);
					func_72(iParam0, 5);
					func_72(iParam0, 7);
					iParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_HEARTLANDS_3");
					iParam0->f_11 = { -410.6756f, -63.938f, 40.7762f };
					break;
				case 6:
					func_72(iParam0, 0);
					func_72(iParam0, 2);
					func_72(iParam0, 4);
					func_72(iParam0, 5);
					func_72(iParam0, 6);
					iParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BIG_VALLEY_1");
					iParam0->f_11 = { -2085.777f, -161.9067f, 208.0633f };
					break;
				case 7:
					func_72(iParam0, 0);
					func_72(iParam0, 2);
					func_72(iParam0, 4);
					func_72(iParam0, 5);
					func_72(iParam0, 6);
					iParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BIG_VALLEY_2");
					iParam0->f_11 = { -1678.304f, -517.8369f, 140.867f };
					break;
				case 8:
					func_72(iParam0, 0);
					func_72(iParam0, 2);
					func_72(iParam0, 4);
					func_72(iParam0, 5);
					func_72(iParam0, 6);
					iParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BIG_VALLEY_3");
					iParam0->f_11 = { -2624.881f, -339.7662f, 141.8102f };
					break;
				case 9:
					func_72(iParam0, 0);
					func_72(iParam0, 1);
					iParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GREAT_PLAINS_1");
					iParam0->f_11 = { -926.5729f, -924.4639f, 41.1771f };
					break;
				case 10:
					func_72(iParam0, 0);
					func_72(iParam0, 2);
					func_72(iParam0, 5);
					func_72(iParam0, 7);
					iParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GREAT_PLAINS_2");
					iParam0->f_11 = { -722.9517f, -1718.81f, 41.41f };
					break;
				case 11:
					func_72(iParam0, 0);
					func_72(iParam0, 1);
					iParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GREAT_PLAINS_3");
					iParam0->f_11 = { -1069.18f, -1919.616f, 42.3447f };
					break;
				case 12:
					func_72(iParam0, 0);
					func_72(iParam0, 2);
					func_72(iParam0, 3);
					func_72(iParam0, 4);
					func_72(iParam0, 5);
					func_72(iParam0, 6);
					iParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GRIZZLIES_1");
					iParam0->f_11 = { 1673.672f, 1440.046f, 146.0849f };
					break;
				case 13:
					func_72(iParam0, 0);
					func_72(iParam0, 1);
					iParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GRIZZLIES_2");
					iParam0->f_11 = { 1562.434f, 1445.237f, 145.2842f };
					break;
				case 14:
					func_72(iParam0, 3);
					func_72(iParam0, 4);
					func_72(iParam0, 5);
					func_72(iParam0, 6);
					iParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GRIZZLIES_3");
					iParam0->f_11 = { 1244.927f, 1177.251f, 148.8856f };
					break;
				case 15:
					func_72(iParam0, 2);
					func_72(iParam0, 3);
					func_72(iParam0, 5);
					func_72(iParam0, 7);
					iParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BLUEWATER_MARSH_1");
					iParam0->f_11 = { 1926.703f, -362.3477f, 42.4864f };
					break;
				case 16:
					func_72(iParam0, 0);
					func_72(iParam0, 1);
					func_72(iParam0, 3);
					func_72(iParam0, 5);
					func_72(iParam0, 7);
					iParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BLUEWATER_MARSH_2");
					iParam0->f_11 = { 2192.489f, -318.3198f, 40.7232f };
					break;
				case 17:
					func_72(iParam0, 0);
					func_72(iParam0, 1);
					func_72(iParam0, 3);
					func_72(iParam0, 5);
					func_72(iParam0, 7);
					iParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BLUEWATER_MARSH_3");
					iParam0->f_11 = { 2408.447f, -490.4562f, 40.9243f };
					break;
				case 18:
					func_72(iParam0, 0);
					func_72(iParam0, 1);
					func_72(iParam0, 2);
					func_72(iParam0, 3);
					func_72(iParam0, 5);
					iParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_NEW_AUSTIN_1");
					iParam0->f_11 = { -3243.502f, -3187.141f, -9.3137f };
					break;
				case 19:
					func_72(iParam0, 0);
					func_72(iParam0, 1);
					iParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_NEW_AUSTIN_2");
					iParam0->f_11 = { -1745.01f, -2929.141f, -12.3355f };
					break;
				case 20:
					func_72(iParam0, 0);
					func_72(iParam0, 1);
					func_72(iParam0, 2);
					func_72(iParam0, 3);
					func_72(iParam0, 5);
					iParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_NEW_AUSTIN_3");
					iParam0->f_11 = { -1735.07f, -2378.355f, 41.289f };
					break;
			}
			break;
		case 4:
			iParam0->f_6 = 1;
			*iParam0 = 11;
			iParam0->f_1 = 1;
			iParam0->f_2 = 2;
			func_70(iParam0);
			iParam0->f_15 = joaat("22_TO_4");
			switch (iParam2)
			{
				case 0:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_GRAVEROBBER_VALENTINE_1");
					iParam0->f_11 = { -228.7198f, 824.1839f, 123.3019f };
					break;
				case 1:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_GRAVEROBBER_RHODES_1");
					iParam0->f_11 = { 1274.578f, -1218.286f, 80.6496f };
					break;
				case 2:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_GRAVEROBBER_BLACKWATER_1");
					iParam0->f_11 = { -954.4733f, -1203.246f, 54.5241f };
					break;
				case 3:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_GRAVEROBBER_TUMBLEWEED_1");
					iParam0->f_11 = { -5442.537f, -2904.509f, -0.0668f };
					break;
				case 4:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_GRAVEROBBER_ODDFELLOWS_REST_1");
					iParam0->f_11 = { -4438.908f, -2693.073f, -12.033f };
					break;
				case 5:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_GRAVEROBBER_COOTS_CHAPEL_1");
					iParam0->f_11 = { -3339.601f, -2869.283f, -6.9507f };
					break;
				case 6:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_GRAVEROBBER_RINGNECK_CREEK_1");
					iParam0->f_11 = { 1396.14f, -643.1758f, 70.4818f };
					break;
				case 7:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_GRAVEROBBER_PLEASANCE_1");
					iParam0->f_11 = { 1735.865f, -422.7769f, 47.1349f };
					break;
				case 8:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_GRAVEROBBER_SHADY_BELLE_1");
					iParam0->f_11 = { 1978.501f, -1902.647f, 41.0487f };
					break;
				case 9:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_GRAVEROBBER_SAINT_DENIS_1");
					iParam0->f_11 = { 2757.999f, -1078.666f, 45.8905f };
					break;
				case 10:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_GRAVEROBBER_OLD_TOMS_BLIND_1");
					iParam0->f_11 = { -1762.115f, -237.9833f, 181.9701f };
					break;
			}
			break;
		case 12:
			iParam0->f_6 = 1;
			*iParam0 = 15;
			iParam0->f_1 = 3;
			iParam0->f_2 = 1;
			func_70(iParam0);
			switch (iParam2)
			{
				case 0:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_HOBO_DOG_VAN_HORN_1");
					iParam0->f_11 = { 2777.227f, 463.4025f, 65.2501f };
					break;
				case 1:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_HOBO_DOG_BOLGER_1");
					iParam0->f_11 = { 1428.817f, -1812.995f, 57.37384f };
					break;
				case 2:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_HOBO_DOG_BAYOU_1");
					iParam0->f_11 = { 2578.893f, -852.3694f, 41.3078f };
					break;
				case 3:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_HOBO_DOG_ANNESBURG_1");
					iParam0->f_11 = { 2798.119f, 1432.187f, 77.71185f };
					break;
				case 4:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_HOBO_DOG_EMERALD_1");
					iParam0->f_11 = { 1243.455f, 526.5765f, 87.43867f };
					break;
				case 5:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_HOBO_DOG_CUMBERLAND_1");
					iParam0->f_11 = { -28.69774f, 1111.23f, 167.9945f };
					break;
				case 6:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_HOBO_DOG_FLATNECK_1");
					iParam0->f_11 = { -546.6091f, -298.2057f, 52.56811f };
					break;
				case 7:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_HOBO_DOG_WALLACE_1");
					iParam0->f_11 = { -1403.688f, 383.7506f, 102.2472f };
					break;
				case 8:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_HOBO_DOG_STRAWBERRY_1");
					iParam0->f_11 = { -1510.116f, -883.8221f, 88.72778f };
					break;
				case 9:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_HOBO_DOG_QUAKER_1");
					iParam0->f_11 = { -1459.752f, -1915.602f, 50.93545f };
					break;
				case 10:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_HOBO_DOG_MACFARLENE_1");
					iParam0->f_11 = { -2470.018f, -2426.993f, 59.1458f };
					break;
				case 11:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_HOBO_DOG_DON_JULIO_1");
					iParam0->f_11 = { -3092.935f, -3166.527f, -1.36638f };
					break;
				case 12:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_HOBO_DOG_ARMADILLO_1");
					iParam0->f_11 = { -3685.624f, -2769.247f, -15.14988f };
					break;
				case 13:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_HOBO_DOG_PLAINVIEW_1");
					iParam0->f_11 = { -4668.993f, -3706.819f, 12.54352f };
					break;
				case 14:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_HOBO_DOG_TUMBLEWEED_1");
					iParam0->f_11 = { -5194.483f, -2883.913f, 2.32447f };
					break;
			}
			break;
		case 6:
			iParam0->f_6 = 1;
			*iParam0 = 16;
			iParam0->f_1 = 2;
			iParam0->f_2 = 8;
			switch (iParam3)
			{
				case 0:
					func_73(iParam0, 0);
					func_73(iParam0, 1);
					func_73(iParam0, 4);
					func_73(iParam0, 5);
					break;
				case 1:
					func_73(iParam0, 2);
					func_73(iParam0, 3);
					func_73(iParam0, 6);
					func_73(iParam0, 7);
					func_74(iParam0, 2);
					break;
			}
			switch (iParam2)
			{
				case 0:
					func_72(iParam0, 0);
					iParam0->f_5 = joaat("BEAT_KIDNAPPED_CUMBERLAND_FOREST_1");
					iParam0->f_11 = { 498.9236f, 1191.276f, 179.5016f };
					break;
				case 1:
					func_72(iParam0, 1);
					iParam0->f_5 = joaat("BEAT_KIDNAPPED_CUMBERLAND_FOREST_2");
					iParam0->f_11 = { 114.87f, 1097.69f, 177.97f };
					break;
				case 2:
					func_72(iParam0, 0);
					iParam0->f_5 = joaat("BEAT_KIDNAPPED_BLUEWATER_MARSH_1");
					iParam0->f_11 = { 2271.753f, -440.5277f, 40.82026f };
					break;
				case 3:
					func_72(iParam0, 1);
					iParam0->f_5 = joaat("BEAT_KIDNAPPED_BLUEWATER_MARSH_2");
					iParam0->f_11 = { 2000.58f, -499.0656f, 41.0245f };
					break;
				case 4:
					func_72(iParam0, 0);
					iParam0->f_5 = joaat("BEAT_KIDNAPPED_BAYOU_NWA_1");
					iParam0->f_11 = { 2299.81f, -898.4015f, 41.04434f };
					break;
				case 5:
					func_72(iParam0, 1);
					iParam0->f_5 = joaat("BEAT_KIDNAPPED_BAYOU_NWA_2");
					iParam0->f_11 = { 2369.292f, -673.8396f, 41.36789f };
					break;
				case 6:
					func_72(iParam0, 0);
					iParam0->f_5 = joaat("BEAT_KIDNAPPED_GRIZZLIES_EAST_1");
					iParam0->f_11 = { 1531.33f, 1578.837f, 147.4066f };
					break;
				case 7:
					func_72(iParam0, 1);
					iParam0->f_5 = joaat("BEAT_KIDNAPPED_GRIZZLIES_EAST_2");
					iParam0->f_11 = { 945.3031f, 1142.541f, 147.4809f };
					break;
				case 8:
					func_72(iParam0, 0);
					iParam0->f_5 = joaat("BEAT_KIDNAPPED_GRIZZLIES_WEST_1");
					iParam0->f_11 = { -1126.469f, 815.3829f, 117.6536f };
					break;
				case 9:
					func_72(iParam0, 1);
					iParam0->f_5 = joaat("BEAT_KIDNAPPED_GRIZZLIES_WEST_2");
					iParam0->f_11 = { -2063.813f, 935.3212f, 147.0808f };
					break;
				case 10:
					func_72(iParam0, 0);
					iParam0->f_5 = joaat("BEAT_KIDNAPPED_GREAT_PLAINS_1");
					iParam0->f_11 = { -1589.688f, -1425.319f, 80.34965f };
					break;
				case 11:
					func_72(iParam0, 1);
					iParam0->f_5 = joaat("BEAT_KIDNAPPED_GREAT_PLAINS_2");
					iParam0->f_11 = { -910.3301f, -1815.748f, 61.71241f };
					break;
				case 12:
					func_72(iParam0, 0);
					iParam0->f_5 = joaat("BEAT_KIDNAPPED_HENNIGANS_STEAD_1");
					iParam0->f_11 = { -2690.104f, -2892.627f, 64.73759f };
					break;
				case 13:
					func_72(iParam0, 1);
					iParam0->f_5 = joaat("BEAT_KIDNAPPED_HENNIGANS_STEAD_2");
					iParam0->f_11 = { -2914.53f, -2558.967f, 61.66708f };
					break;
				case 14:
					func_72(iParam0, 0);
					iParam0->f_5 = joaat("BEAT_KIDNAPPED_RIO_BRAVO_1");
					iParam0->f_11 = { -4545.762f, -3673.932f, 17.87756f };
					break;
				case 15:
					func_72(iParam0, 1);
					iParam0->f_5 = joaat("BEAT_KIDNAPPED_RIO_BRAVO_2");
					iParam0->f_11 = { -4720.841f, -3357f, 8.61745f };
					break;
			}
			break;
		case 7:
			iParam0->f_6 = 1;
			*iParam0 = 10;
			iParam0->f_1 = 12;
			iParam0->f_2 = 3;
			switch (iParam2)
			{
				case 0:
					func_72(iParam0, 0);
					func_72(iParam0, 1);
					func_72(iParam0, 2);
					func_72(iParam0, 9);
					func_72(iParam0, 10);
					func_72(iParam0, 11);
					func_75(iParam0, iParam3);
					iParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_HEARTLANDS_CLIFF_1");
					iParam0->f_11 = { 468.6932f, 60.0849f, 134.4816f };
					break;
				case 1:
					func_72(iParam0, 1);
					func_72(iParam0, 2);
					func_72(iParam0, 8);
					func_72(iParam0, 9);
					func_72(iParam0, 10);
					func_72(iParam0, 11);
					func_75(iParam0, iParam3);
					iParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_HEARTLANDS_RIVER_1");
					iParam0->f_11 = { -408.7124f, 154.0742f, 40.84526f };
					break;
				case 2:
					func_72(iParam0, 1);
					func_72(iParam0, 2);
					func_72(iParam0, 3);
					func_72(iParam0, 4);
					func_72(iParam0, 5);
					func_72(iParam0, 6);
					func_72(iParam0, 9);
					func_72(iParam0, 10);
					func_72(iParam0, 11);
					func_75(iParam0, iParam3);
					iParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_TALL_TREES_1");
					iParam0->f_11 = { -1929.655f, -1348.338f, 105.84f };
					break;
				case 3:
					func_72(iParam0, 0);
					func_72(iParam0, 1);
					func_72(iParam0, 2);
					func_72(iParam0, 9);
					func_72(iParam0, 10);
					func_72(iParam0, 11);
					func_75(iParam0, iParam3);
					iParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_TALL_TREES_2");
					iParam0->f_11 = { -2003.943f, -2158.135f, 54.2301f };
					break;
				case 4:
					func_72(iParam0, 0);
					func_72(iParam0, 1);
					func_72(iParam0, 2);
					func_72(iParam0, 9);
					func_72(iParam0, 10);
					func_72(iParam0, 11);
					func_75(iParam0, iParam3);
					iParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_BIG_VALLEY_1");
					iParam0->f_11 = { -1272.226f, 97.47642f, 70.53004f };
					break;
				case 5:
					func_72(iParam0, 1);
					func_72(iParam0, 2);
					func_72(iParam0, 3);
					func_72(iParam0, 4);
					func_72(iParam0, 7);
					func_72(iParam0, 8);
					func_72(iParam0, 9);
					func_72(iParam0, 10);
					func_72(iParam0, 11);
					func_75(iParam0, iParam3);
					iParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_BIG_VALLEY_2");
					iParam0->f_11 = { -2350.861f, -359.485f, 143.7474f };
					break;
				case 6:
					func_72(iParam0, 1);
					func_72(iParam0, 2);
					func_72(iParam0, 3);
					func_72(iParam0, 6);
					func_72(iParam0, 7);
					func_72(iParam0, 9);
					func_72(iParam0, 10);
					func_72(iParam0, 11);
					func_75(iParam0, iParam3);
					iParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_BIG_VALLEY_3");
					iParam0->f_11 = { -1736.757f, 306.2781f, 108.1355f };
					break;
				case 7:
					func_72(iParam0, 1);
					func_72(iParam0, 2);
					func_72(iParam0, 4);
					func_72(iParam0, 5);
					func_72(iParam0, 6);
					func_72(iParam0, 9);
					func_72(iParam0, 10);
					func_72(iParam0, 11);
					func_75(iParam0, iParam3);
					iParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_RIO_BRAVO_1");
					iParam0->f_11 = { -4964.499f, -3399.889f, 7.97322f };
					break;
				case 8:
					func_72(iParam0, 0);
					func_72(iParam0, 1);
					func_72(iParam0, 2);
					func_72(iParam0, 9);
					func_72(iParam0, 10);
					func_72(iParam0, 11);
					func_75(iParam0, iParam3);
					iParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_HENNIGANS_STEAD_1");
					iParam0->f_11 = { -2192.805f, -2778.977f, 69.01174f };
					break;
				case 9:
					func_72(iParam0, 1);
					func_72(iParam0, 2);
					func_72(iParam0, 5);
					func_72(iParam0, 9);
					func_72(iParam0, 10);
					func_72(iParam0, 11);
					func_75(iParam0, iParam3);
					iParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_CHOLLA_SPRINGS_1");
					iParam0->f_11 = { -4603.166f, -2701.434f, -10.12116f };
					break;
			}
			break;
		case 5:
			iParam0->f_6 = 1;
			*iParam0 = 21;
			iParam0->f_1 = 1;
			iParam0->f_2 = 1;
			func_70(iParam0);
			switch (iParam2)
			{
				case 0:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_BOLGER_GLADE_1");
					iParam0->f_11 = { 1452.25f, -1695.116f, 64.9668f };
					break;
				case 1:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_ERIS_FIELD_1");
					iParam0->f_11 = { 1163.55f, -324.0086f, 97.10712f };
					break;
				case 2:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_ROANOKE_RIDGE_1");
					iParam0->f_11 = { 2682.104f, 858.447f, 85.90118f };
					break;
				case 3:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_MOONSTONE_POND_1");
					iParam0->f_11 = { 1311.333f, 1183.934f, 151.5859f };
					break;
				case 4:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_COTORRA_SPRINGS_1");
					iParam0->f_11 = { 40.99253f, 1813.064f, 189.5056f };
					break;
				case 5:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_CUMBERLAND_1");
					iParam0->f_11 = { 109.9411f, 1282.256f, 176.292f };
					break;
				case 6:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_BEARTOOTH_1");
					iParam0->f_11 = { -1450.859f, 1686.266f, 255.2526f };
					break;
				case 7:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_FLATNECK_1");
					iParam0->f_11 = { 66.91456f, -445.5748f, 72.15018f };
					break;
				case 8:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_LITTLE_CREEK_1");
					iParam0->f_11 = { -1698.036f, 380.6171f, 106.0826f };
					break;
				case 9:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_UPPER_MONTANA_1");
					iParam0->f_11 = { -2016.359f, -909.5917f, 84.91344f };
					break;
				case 10:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_BLACKWATER_1");
					iParam0->f_11 = { -1362.091f, -1267.624f, 82.41972f };
					break;
				case 11:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_AURORA_BASIN_1");
					iParam0->f_11 = { -2449.051f, -1457.942f, 148.705f };
					break;
				case 12:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_GREAT_PLAINS_1");
					iParam0->f_11 = { -1559.339f, -1930.728f, 50.99157f };
					break;
				case 13:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_MANTECA_FALLS_1");
					iParam0->f_11 = { -1764.444f, -2717.768f, 62.81413f };
					break;
				case 14:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_MACFARLANES_RANCH_1");
					iParam0->f_11 = { -2190.544f, -2200.288f, 64.42333f };
					break;
				case 15:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_SAN_LUIS_1");
					iParam0->f_11 = { -2803.26f, -3142.291f, 5.88098f };
					break;
				case 16:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_HENNIGANS_STEAD_1");
					iParam0->f_11 = { -3175.168f, -2402.267f, 22.72451f };
					break;
				case 17:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_JORGES_GAP_1");
					iParam0->f_11 = { -4220.611f, -2690.138f, 0.65931f };
					break;
				case 18:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_FORT_MERCER_1");
					iParam0->f_11 = { -4372.619f, -3274.055f, 20.26154f };
					break;
				case 19:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_BENEDICT_POINT_1");
					iParam0->f_11 = { -5456.922f, -3562.744f, -21.1142f };
					break;
				case 20:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_GAPTOOTH_RIDGE_1");
					iParam0->f_11 = { -5796.222f, -2650.145f, -16.68393f };
					break;
			}
			break;
		case 11:
			iParam0->f_6 = 1;
			*iParam0 = 10;
			iParam0->f_1 = 4;
			iParam0->f_2 = 1;
			func_70(iParam0);
			func_74(iParam0, 2);
			switch (iParam2)
			{
				case 0:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_EMERALD_RANCH_1");
					iParam0->f_11 = { 959.0613f, 383.9384f, 111.0409f };
					break;
				case 1:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_LEMOYNE_1");
					iParam0->f_11 = { 1465.514f, -821.0334f, 50.2372f };
					break;
				case 2:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_RIGGS_STATION_1");
					iParam0->f_11 = { -1082.332f, -696.7548f, 70.5432f };
					break;
				case 3:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_BLACKWATER_1");
					iParam0->f_11 = { -1462.952f, -1929.859f, 48.4187f };
					break;
				case 4:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_RIO_BRAVO_1");
					iParam0->f_11 = { -4988.295f, -3902.346f, -0.03286f };
					break;
				case 5:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_HENNIGANS_1");
					iParam0->f_11 = { -2770.473f, -2936.506f, 64.84297f };
					break;
				case 6:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_GREAT_PLAINS_1");
					iParam0->f_11 = { -1209.61f, -1812.165f, 61.23543f };
					break;
				case 7:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_STRAWBERRY_1");
					iParam0->f_11 = { -1706.993f, -580.9286f, 149.93f };
					break;
				case 8:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_SCARLETT_1");
					iParam0->f_11 = { 803.0057f, -584.7925f, 79.32288f };
					break;
				case 9:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_BOLGER_1");
					iParam0->f_11 = { 1778.236f, -1731.359f, 48.27552f };
					break;
			}
			break;
		case 9:
			iParam0->f_6 = 1;
			*iParam0 = 12;
			iParam0->f_1 = 4;
			iParam0->f_2 = 5;
			switch (iParam2)
			{
				case 0:
					func_76(iParam0, iParam3);
					iParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_0");
					iParam0->f_11 = { -1159.115f, 397.0877f, 60.4953f };
					break;
				case 1:
					func_76(iParam0, iParam3);
					iParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_1");
					iParam0->f_11 = { -1278.359f, 291.4224f, 76.6652f };
					break;
				case 2:
					func_76(iParam0, iParam3);
					iParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_2");
					iParam0->f_11 = { -1371.28f, 283.4114f, 86.0114f };
					break;
				case 3:
					func_76(iParam0, iParam3);
					iParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_3");
					iParam0->f_11 = { -1117.687f, 406.6783f, 55.3681f };
					break;
				case 4:
					func_76(iParam0, iParam3);
					iParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_4");
					iParam0->f_11 = { -1288.323f, 148.5012f, 71.7864f };
					break;
				case 5:
					func_76(iParam0, iParam3);
					iParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_5");
					iParam0->f_11 = { -1648.447f, -114.858f, 170.0504f };
					break;
				case 6:
					func_76(iParam0, iParam3);
					iParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_6");
					iParam0->f_11 = { -1081.189f, -405.0457f, 97.0153f };
					break;
				case 7:
					func_76(iParam0, iParam3);
					iParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_HEARTLANDS_0");
					iParam0->f_11 = { 206.8413f, -170.3653f, 130.5284f };
					break;
				case 8:
					func_76(iParam0, iParam3);
					iParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_HEARTLANDS_1");
					iParam0->f_11 = { -621.2297f, 186.8452f, 41.2741f };
					break;
				case 9:
					func_76(iParam0, iParam3);
					iParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_HEARTLANDS_2");
					iParam0->f_11 = { 44.3784f, 388.2357f, 129.8287f };
					break;
				case 10:
					func_76(iParam0, iParam3);
					iParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_HEARTLANDS_3");
					iParam0->f_11 = { 752.9834f, -58.1133f, 157.6479f };
					break;
				case 11:
					func_76(iParam0, iParam3);
					iParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_HEARTLANDS_4");
					iParam0->f_11 = { 817.7247f, 566.3447f, 114.3761f };
					break;
			}
			break;
		case 10:
			iParam0->f_6 = 1;
			*iParam0 = 20;
			iParam0->f_1 = 1;
			iParam0->f_2 = 1;
			func_70(iParam0);
			switch (iParam2)
			{
				case 0:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_TREE_MAP_MACFARLANES_1");
					iParam0->f_11 = { -2058.13f, -2493.143f, 63.51377f };
					break;
				case 1:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_TREE_MAP_THEIVES_LANDING_1");
					iParam0->f_11 = { -1541.353f, -2334.611f, 43.10187f };
					break;
				case 2:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_TREE_MAP_HANGING_ROCK_1");
					iParam0->f_11 = { -3456.39f, -2262.339f, 0.01624f };
					break;
				case 3:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_TREE_MAP_DEL_LOBO_1");
					iParam0->f_11 = { -3703.712f, -3594.224f, 45.18983f };
					break;
				case 4:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_TREE_MAP_BEECHERS_1");
					iParam0->f_11 = { -1581.551f, -1656.278f, 78.51012f };
					break;
				case 5:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_TREE_MAP_BLACKWATER_1");
					iParam0->f_11 = { -1236.292f, -1118.55f, 68.58572f };
					break;
				case 6:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_TREE_MAP_MONTANA_RIVER_1");
					iParam0->f_11 = { -1264.125f, -773.2117f, 91.83559f };
					break;
				case 7:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_TREE_MAP_MONTOS_REST_1");
					iParam0->f_11 = { -1414.607f, -234.2123f, 99.22668f };
					break;
				case 8:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_TREE_MAP_WATSONS_1");
					iParam0->f_11 = { -1721.402f, 553.6f, 112.524f };
					break;
				case 9:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_TREE_MAP_DAKOTA_RIVER_1");
					iParam0->f_11 = { -484.7991f, -70.36918f, 42.94242f };
					break;
				case 10:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_TREE_MAP_FLATNECK_1");
					iParam0->f_11 = { -458.5839f, -346.5686f, 80.66556f };
					break;
				case 11:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_TREE_MAP_EMERALD_RANCH_1");
					iParam0->f_11 = { 1089.583f, 23.75282f, 88.22131f };
					break;
				case 12:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_TREE_MAP_EMERALD_RANCH_2");
					iParam0->f_11 = { 1000.131f, 417.5909f, 107.9082f };
					break;
				case 13:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_TREE_MAP_DREAMCATCHER_TREE_1");
					iParam0->f_11 = { 713.7332f, 23.52884f, 152.0797f };
					break;
				case 14:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_TREE_MAP_CUMBERLAND_1");
					iParam0->f_11 = { 63.77304f, 1023.487f, 201.9749f };
					break;
				case 15:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_TREE_MAP_FORT_WALLACE_1");
					iParam0->f_11 = { 366.667f, 1408.665f, 175.0605f };
					break;
				case 16:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_TREE_MAP_OCREAGHS_RUN_1");
					iParam0->f_11 = { 1785.934f, 1522.009f, 155.1442f };
					break;
				case 17:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_TREE_MAP_MOONSTONE_POND_1");
					iParam0->f_11 = { 1279.07f, 1164.678f, 149.2508f };
					break;
				case 18:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_TREE_MAP_KAMASA_RIVER_1");
					iParam0->f_11 = { 2106.456f, 207.6169f, 72.68985f };
					break;
				case 19:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_TREE_MAP_VAN_HORN_1");
					iParam0->f_11 = { 2675.549f, 179.9657f, 54.14579f };
					break;
			}
			break;
		case 8:
			iParam0->f_6 = 1;
			*iParam0 = 9;
			iParam0->f_1 = 2;
			iParam0->f_2 = 1;
			func_70(iParam0);
			iParam0->f_10 = 60f;
			switch (iParam2)
			{
				case 0:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_1");
					iParam0->f_11 = { 1562.246f, -2047.412f, 47.3446f };
					break;
				case 1:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_2");
					iParam0->f_11 = { 1379.948f, -1696.249f, 66.86113f };
					break;
				case 2:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_3");
					iParam0->f_11 = { 1621.706f, -1650.367f, 56.03105f };
					break;
				case 3:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_4");
					iParam0->f_11 = { 1504.868f, -1470.025f, 71.38271f };
					break;
				case 4:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_5");
					iParam0->f_11 = { 1082.685f, -1265.978f, 67.5664f };
					break;
				case 5:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_6");
					iParam0->f_11 = { 682.6295f, -992.2614f, 52.4207f };
					break;
				case 6:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_7");
					iParam0->f_11 = { 707.7728f, -885.6594f, 48.26217f };
					break;
				case 7:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_8");
					iParam0->f_11 = { 879.6264f, -537.9133f, 88.03556f };
					break;
				case 8:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_9");
					iParam0->f_11 = { 1012.322f, -394.373f, 90.43443f };
					break;
			}
			break;
		case 13:
			iParam0->f_6 = 1;
			*iParam0 = 1;
			iParam0->f_1 = 6;
			iParam0->f_2 = 1;
			func_70(iParam0);
			func_74(iParam0, 1);
			func_74(iParam0, 4);
			func_74(iParam0, 8);
			func_74(iParam0, 16);
			switch (iParam2)
			{
				case 0:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_WILD_MAN_PLAYER_CAMP_1");
					iParam0->f_11 = { func_78(func_77(iParam4)) };
					break;
			}
			break;
		case 14:
			iParam0->f_6 = 1;
			*iParam0 = 10;
			iParam0->f_1 = 5;
			iParam0->f_2 = 6;
			switch (iParam2)
			{
				case 0:
					func_79(iParam0, iParam3);
					iParam0->f_5 = joaat("BEAT_DUEL_VALENTINE_1");
					iParam0->f_11 = { -347.4531f, 740.8643f, 116.4549f };
					break;
				case 1:
					func_79(iParam0, iParam3);
					iParam0->f_5 = joaat("BEAT_DUEL_VALENTINE_2");
					iParam0->f_11 = { -360.6497f, 824.0327f, 115.4768f };
					break;
				case 2:
					func_79(iParam0, iParam3);
					iParam0->f_5 = joaat("BEAT_DUEL_VAN_HORN_1");
					iParam0->f_11 = { 2957.225f, 524.4706f, 43.66619f };
					break;
				case 3:
					func_79(iParam0, iParam3);
					iParam0->f_5 = joaat("BEAT_DUEL_VAN_HORN_2");
					iParam0->f_11 = { 2975.885f, 537.2245f, 42.42131f };
					break;
				case 4:
					func_79(iParam0, iParam3);
					iParam0->f_5 = joaat("BEAT_DUEL_RHODES_1");
					iParam0->f_11 = { 1444.633f, -1417.982f, 78.22246f };
					break;
				case 5:
					func_79(iParam0, iParam3);
					iParam0->f_5 = joaat("BEAT_DUEL_RHODES_2");
					iParam0->f_11 = { 1394.169f, -1422.854f, 78.97552f };
					break;
				case 6:
					func_79(iParam0, iParam3);
					iParam0->f_5 = joaat("BEAT_DUEL_ANNESBURG_1");
					iParam0->f_11 = { 2996.145f, 1351.808f, 42.95977f };
					break;
				case 7:
					func_79(iParam0, iParam3);
					iParam0->f_5 = joaat("BEAT_DUEL_ANNESBURG_2");
					iParam0->f_11 = { 2915.743f, 1231.952f, 43.5792f };
					break;
				case 8:
					func_79(iParam0, iParam3);
					iParam0->f_5 = joaat("BEAT_DUEL_BLACKWATER_1");
					iParam0->f_11 = { -833.5609f, -1543.917f, 59.6274f };
					break;
				case 9:
					func_79(iParam0, iParam3);
					iParam0->f_5 = joaat("BEAT_DUEL_BLACKWATER_2");
					iParam0->f_11 = { -1019.64f, -1138.944f, 56.39161f };
					break;
			}
			break;
		case 15:
			iParam0->f_6 = 1;
			iParam0->f_7 = 1;
			*iParam0 = 12;
			iParam0->f_1 = 2;
			iParam0->f_2 = 1;
			func_70(iParam0);
			switch (iParam2)
			{
				case 0:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_BAYOU_1");
					iParam0->f_11 = { 2208.668f, -350.9536f, 41.488f };
					break;
				case 1:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_BAYOU_2");
					iParam0->f_11 = { 1733.923f, -727.6727f, 40.8996f };
					break;
				case 2:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_BIG_VALLEY_1");
					iParam0->f_11 = { -2028.171f, 421.7315f, 123.1801f };
					break;
				case 3:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_CUMBERLAND_1");
					iParam0->f_11 = { 238.8146f, 1242.903f, 185.8171f };
					break;
				case 4:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_CUMBERLAND_2");
					iParam0->f_11 = { 646.006f, 1304.928f, 193.4366f };
					break;
				case 5:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_HEARTLANDS_1");
					iParam0->f_11 = { 438.9673f, 831.1111f, 145.7085f };
					break;
				case 6:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_HEARTLANDS_2");
					iParam0->f_11 = { -545.762f, 393.6189f, 87.0076f };
					break;
				case 7:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_HEARTLANDS_3");
					iParam0->f_11 = { 1017.37f, 1062.322f, 158.965f };
					break;
				case 8:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_ROANOKE_1");
					iParam0->f_11 = { 2226.213f, -248.6621f, 42.5431f };
					break;
				case 9:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_ROANOKE_2");
					iParam0->f_11 = { 2566.893f, -71.0977f, 49.3333f };
					break;
				case 10:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_SCARLETT_MEADOWS_1");
					iParam0->f_11 = { 1389.072f, -2196.696f, 48.3307f };
					break;
				case 11:
					func_71(iParam0);
					iParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_SCARLETT_MEADOWS_2");
					iParam0->f_11 = { 906.9065f, -987.0414f, 56.96f };
					break;
			}
			break;
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
			switch (iParam1)
			{
				case 16:
					iParam0->f_8 = joaat("HIDEOUT");
					break;
				case 17:
					iParam0->f_8 = joaat("DYNAMIC_AMBUSH");
					break;
				case 18:
					iParam0->f_8 = joaat("DYNAMIC_RESCUE_PED_MULTIPLE");
					break;
				case 19:
					iParam0->f_8 = joaat("DYNAMIC_ESCORT");
					break;
				case 20:
					iParam0->f_8 = joaat("DYNAMIC_CAMPSITE_DEFEND");
					break;
				case 21:
					iParam0->f_8 = joaat("MOONSHINE_DYNAMIC_SABOTAGE");
					break;
				case 22:
					iParam0->f_8 = joaat("MOONSHINE_DYNAMIC_DESTROY");
					break;
				case 23:
					iParam0->f_8 = joaat("MOONSHINE_DYNAMIC_ROADBLOCK");
					break;
			}
			iVar17 = func_80(iParam1);
			if (iVar17 == -1)
			{
				return;
			}
			if ((iParam1 == 22 || iParam1 == 23) || iParam1 == 21)
			{
				iParam0->f_7 = 1;
			}
			*iParam0 = func_81(iVar17);
			iParam0->f_1 = 0;
			iParam0->f_6 = 2;
			func_74(iParam0, 32);
			if (iParam2 != -1)
			{
				iParam0->f_9 = func_83(func_82(iVar17), iParam2);
				iParam0->f_15 = func_84(func_82(iVar17), iParam2);
				iParam0->f_5 = func_85(iVar17, iParam2);
				iParam0->f_11 = { func_86(iVar17, iParam2) };
			}
			break;
	}
}

struct<2> func_32(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = iParam1;
	switch (iParam1)
	{
		case 2:
			Var0.f_1 = func_88(iParam0, &(Global_1070356->f_634), func_87(iParam1));
			break;
		case 3:
			Var0.f_1 = func_88(iParam0, &(Global_1070356->f_634.f_602), func_87(iParam1));
			break;
		case 4:
			Var0.f_1 = func_88(iParam0, &(Global_1070356->f_634.f_2104), func_87(iParam1));
			break;
		case 5:
			Var0.f_1 = func_88(iParam0, &(Global_1070356->f_634.f_12606), func_87(iParam1));
			break;
		case 6:
			Var0.f_1 = func_88(iParam0, &(Global_1070356->f_634.f_12908), func_87(iParam1));
			break;
		case 7:
			Var0.f_1 = func_88(iParam0, &(Global_1070356->f_634.f_15910), func_87(iParam1));
			break;
		case 8:
			Var0.f_1 = func_88(iParam0, &(Global_1070356->f_634.f_15981), func_87(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_89();
	}
	return Var0;
}

void func_33()
{
	func_90();
}

void func_34()
{
	if (Local_519.f_12 >= 0 && Local_519.f_12 < 71)
	{
		Local_519.f_18.f_41 = (Global_1186267->f_231.f_1066[Local_519.f_12 /*17*/])->f_5;
	}
	func_91(&(Local_519.f_18.f_7));
	func_92();
}

void func_35()
{
}

void func_36()
{
	int iVar0;

	iVar0 = 2;
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(iVar0);
}

int func_37(struct<2> Param0)
{
	if (!func_93(Param0))
	{
		return 0;
	}
	if (Param0.f_1 < 0)
	{
		return 0;
	}
	if (Param0.f_1 >= func_87(Param0))
	{
		return 0;
	}
	return 1;
}

bool func_38(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1185962->f_1 && iParam0) != 0;
}

bool func_39(int iParam0, int iParam1)
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

int func_40()
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
	if (!func_37(*Global_1051163) && Global_1572887->f_7 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

void func_41()
{
}

void func_42()
{
	int iVar0;
	struct<11> Var1;

	iVar0 = (Global_1186267->f_231.f_1066[Local_519.f_12 /*17*/])->f_5;
	Var1.f_10 = 1106247680;
	func_31(&Var1, Local_519.f_1, Local_519.f_2, Local_519.f_3, iVar0);
	if (!func_94(&Var1, 1))
	{
		func_95(1);
		return;
	}
	Local_0.f_6 = func_77(_NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(iVar0)));
	func_96(256);
	if (func_97(Local_0.f_6))
	{
		func_98(5);
		func_95(6);
	}
	else
	{
		func_95(1);
	}
}

void func_43()
{
	struct<17> Var0;
	bool bVar17;

	Var0.f_10 = 1106247680;
	func_31(&Var0, Local_519.f_1, Local_519.f_2, -1, 255);
	if (func_94(&Var0, 1))
	{
		func_95(2);
		return;
	}
	if (func_99(Var0, &bVar17))
	{
		MISC::CLEAR_AREA(Local_519.f_15, Var0.f_10, 2442122);
		func_95(2);
	}
	else if (bVar17)
	{
		func_98(3);
		func_95(6);
	}
	if (!func_100(Local_0.f_3.f_2))
	{
		func_101(&(Local_0.f_3.f_2));
	}
	else if (func_102(Local_0.f_3.f_2) > 45000)
	{
		func_98(4);
		func_95(6);
	}
}

void func_44()
{
	if (func_103(1, 255))
	{
		if (!func_104(1))
		{
			if (func_105())
			{
				func_96(1);
			}
		}
		else
		{
			func_106();
			func_95(3);
		}
	}
}

void func_45()
{
	bool bVar0;

	if (func_103(2, 255))
	{
		if (!func_104(2))
		{
			bVar0 = true;
			if (!func_107())
			{
				bVar0 = false;
			}
			if (!func_108())
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				func_96(2);
			}
		}
		else
		{
			func_109();
			func_95(4);
		}
	}
}

void func_46()
{
	func_110();
	func_111();
	func_112();
	if (func_113() || Local_0.f_2 != 0)
	{
		func_114();
		func_95(5);
	}
}

void func_47()
{
	if (func_103(4, 255))
	{
		if (func_115())
		{
			func_96(4);
			func_95(6);
		}
	}
}

void func_48()
{
	if (!func_104(256))
	{
		return;
	}
	if (func_104(512))
	{
		if (func_63(32) && func_77(PLAYER::PLAYER_ID()) == Local_0.f_6)
		{
			func_64(Local_0.f_6);
			func_116(32);
		}
	}
	else if (!func_63(32))
	{
		if (func_77(PLAYER::PLAYER_ID()) == Local_0.f_6)
		{
			func_117(Local_0.f_6, 1, 1);
			func_118(32);
		}
	}
	else if (func_77(PLAYER::PLAYER_ID()) != Local_0.f_6)
	{
		func_64(Local_0.f_6);
		func_116(32);
	}
}

void func_49()
{
}

void func_50()
{
	if (Local_0 == 6)
	{
		func_119(6);
	}
	else if (Local_0 > 0)
	{
		func_48();
		func_119(1);
	}
}

void func_51()
{
	if (Local_0 == 6)
	{
		func_119(6);
	}
	else if (Local_0 > 1)
	{
		func_119(2);
	}
}

void func_52()
{
	bool bVar0;
	int iVar1;

	if (!func_103(1, 255))
	{
		bVar0 = true;
		if (!func_120())
		{
			bVar0 = false;
		}
		if (!func_121())
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			func_122(1);
		}
		else
		{
			iVar1 = Global_1901929->f_230.f_63;
			if (!func_100(Local_519.f_11))
			{
				func_101(&(Local_519.f_11));
			}
			if (func_102(Local_519.f_11) >= iVar1)
			{
				func_119(6);
			}
		}
	}
	else if (Local_0 > 2)
	{
		func_123(&(Local_519.f_11));
		func_124();
		func_119(3);
	}
}

void func_53()
{
	int iVar0;

	if (!func_103(2, 255))
	{
		if (func_125())
		{
			func_122(2);
		}
		else
		{
			iVar0 = Global_1901929->f_230.f_63;
			if (!func_100(Local_519.f_11))
			{
				func_101(&(Local_519.f_11));
			}
			if (func_126(Local_519.f_11) >= iVar0)
			{
				func_119(6);
			}
		}
	}
	else if (Local_0 > 3)
	{
		func_123(&(Local_519.f_11));
		func_127();
		func_128();
		func_129();
		func_130();
		func_119(4);
	}
}

void func_54()
{
	if (Local_0 >= 5)
	{
		func_131();
		func_119(5);
		return;
	}
	func_132();
	func_133();
	func_134();
	func_135();
	func_136();
	func_137();
}

void func_55()
{
	if (!func_103(4, 255))
	{
		if (func_138())
		{
			func_139();
			func_61(Local_519.f_12, 4);
			func_122(4);
		}
	}
	else if (Local_0 > 5)
	{
		func_119(6);
	}
}

void func_56()
{
}

bool func_57()
{
	return (func_104(4) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1));
}

void func_58()
{
}

void func_59()
{
	int iVar0;
	int iVar1;

	if (func_57())
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_0.f_99[iVar1])))
			{
				iVar0 = NETWORK::NET_TO_PED(&(Local_0.f_99[iVar1]));
				func_140(iVar1);
				EVENT::_0xAD8F2424C6E1E3A8(iVar0);
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
					PED::_0x39A2FC5AF55A52B1(iVar0, -1);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
				}
			}
			iVar1++;
		}
	}
}

void func_60()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			if (!func_141(((*Local_519.f_207[iVar0 /*8*/])[iVar1 /*7*/])->f_3))
			{
				if (func_142((*Local_519.f_207[iVar0 /*8*/])[iVar1 /*7*/]))
				{
					GRAPHICS::_0x9CF1836C03FB67A2((*Local_519.f_207[iVar0 /*8*/])[iVar1 /*7*/], 1);
				}
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_61(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (func_143(iParam0, iVar0, iParam1))
	{
		return;
	}
	MISC::SET_BIT((*(*Global_1196005)[iVar0 /*72*/])[iParam0], iParam1);
}

void func_62()
{
	int iVar0;
	bool bVar1;

	if (!func_63(1))
	{
		return;
	}
	if (func_63(4))
	{
		return;
	}
	if (!func_63(2))
	{
		iVar0 = -1;
	}
	else if (!func_63(8))
	{
		iVar0 = 2;
	}
	else if (func_63(16))
	{
		iVar0 = 0;
		bVar1 = true;
	}
	else
	{
		iVar0 = 1;
		bVar1 = true;
	}
	func_144(Local_519.f_9, iVar0, 0);
	func_118(4);
	if (bVar1)
	{
		func_145(Local_519.f_1, Local_519.f_2);
	}
}

bool func_63(int iParam0)
{
	return func_146(Local_519.f_7, iParam0);
}

void func_64(int iParam0)
{
	int iVar0;

	if (!func_147(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	((*Global_1128435)[iVar0 /*83*/])->f_70 = iParam0;
	((*Global_1128435)[iVar0 /*83*/])->f_70.f_2 = 0;
}

void func_65()
{
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = func_57();
	if (Local_519.f_18.f_41 == PLAYER::GET_PLAYER_INDEX())
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		}
	}
	if (bVar0)
	{
		if (func_148(256))
		{
			if (func_149(7))
			{
				func_150(13, 0);
			}
		}
	}
	iVar1 = 0;
	while (iVar1 <= 1)
	{
		func_151(iVar1);
		if ((bVar0 && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_0.f_7.f_2[iVar1]))) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_0.f_7.f_2[iVar1])))
		{
			if (iVar1 == 1)
			{
				func_152(func_77(Local_519.f_18.f_41));
			}
			else
			{
				iVar2 = NETWORK::NET_TO_ENT(&(Local_0.f_7.f_2[iVar1]));
				ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar2);
			}
		}
		iVar1++;
	}
}

void func_66(var uParam0, struct<6> Param1, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17)
{
	uParam0->f_9 = 2;
	*uParam0 = { func_32(Param1.f_5, 8) };
	uParam0->f_2 = 0;
	uParam0->f_4 = -1;
}

int func_67(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!func_153(uParam0))
	{
		return -1;
	}
	iVar0 = func_154(uParam0, uParam0->f_9);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (iVar1 == uParam0->f_9)
		{
		}
		else
		{
			iVar0 = func_154(uParam0, iVar1);
			if (iVar0 != -1)
			{
				return iVar0;
			}
		}
		iVar1++;
	}
	return -1;
}

struct<15> func_68(int iParam0)
{
	struct<15> Var0;

	Var0 = 2;
	Var0.f_1 = -1;
	Var0.f_5 = -1;
	Var0.f_5.f_1 = -1;
	Var0.f_5.f_3 = -1;
	Var0.f_5.f_4 = -1;
	Var0.f_5.f_5 = -1;
	Var0.f_5.f_6 = -1;
	Var0.f_5.f_6.f_1 = -1;
	Var0.f_5.f_9 = 2;
	if (!func_19(iParam0))
	{
		return Var0;
	}
	return *(Global_1186267->f_231[iParam0 /*15*/]);
}

void func_69(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_155(iParam0);
			break;
		case 1:
			func_155(iParam0);
			break;
		case 2:
			func_155(iParam0);
			break;
		case 3:
			func_156(iParam0);
			break;
		case 4:
			func_155(iParam0);
			break;
		case 5:
			func_155(iParam0);
			break;
		case 6:
			func_156(iParam0);
			break;
		case 7:
			func_156(iParam0);
			break;
		case 8:
			func_156(iParam0);
			break;
		case 9:
			func_155(iParam0);
			break;
		default:
			func_71(iParam0);
			func_70(iParam0);
			break;
	}
}

void func_70(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (iParam0->f_2 - 1))
	{
		func_73(iParam0, iVar0);
		iVar0++;
	}
}

void func_71(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (iParam0->f_1 - 1))
	{
		func_72(iParam0, iVar0);
		iVar0++;
	}
}

void func_72(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(iParam0->f_3), iParam1);
}

void func_73(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(iParam0->f_4), iParam1);
}

void func_74(int iParam0, int iParam1)
{
	func_157(&(iParam0->f_16), iParam1);
}

void func_75(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_73(iParam0, 0);
			break;
		case 1:
		case 2:
			func_73(iParam0, 1);
			func_73(iParam0, 2);
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			func_73(iParam0, 0);
			func_73(iParam0, 2);
			break;
		case 8:
			func_73(iParam0, 1);
			break;
		case 9:
		case 10:
		case 11:
			func_73(iParam0, 1);
			break;
		default:
			func_70(iParam0);
			break;
	}
}

void func_76(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_158(iParam0);
			break;
		case 1:
			func_159(iParam0);
			break;
		case 2:
			func_160(iParam0);
			break;
		case 3:
			func_161(iParam0);
			break;
		default:
			func_71(iParam0);
			func_70(iParam0);
			break;
	}
}

int func_77(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return ((*Global_1128435)[iVar0 /*83*/])->f_38.f_3;
	}
	return -1;
}

Vector3 func_78(int iParam0)
{
	if (!func_147(iParam0))
	{
		return 0f, 0f, 0f;
	}
	return ((*Global_1125276)[iParam0 /*27*/])->f_20;
}

void func_79(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_162(iParam0);
			break;
		case 1:
		case 2:
			func_163(iParam0);
			break;
		case 3:
		case 4:
			func_164(iParam0);
			break;
		default:
			func_70(iParam0);
			break;
	}
	func_71(iParam0);
}

int func_80(int iParam0)
{
	return &(Global_1245803->f_2073[iParam0]);
}

int func_81(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return ((*Global_1234391)[iParam0 /*5*/])->f_3;
}

int func_82(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1234391[iParam0 /*5*/];
}

var func_83(var uParam0, int iParam1)
{
	var uVar0;
	struct<5> Var1;

	if (func_165(&Var1, uParam0) && func_166(&Var1, iParam1))
	{
		func_167(Var1, 1099008783, &uVar0, 0);
	}
	return uVar0;
}

int func_84(var uParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 0;
	if (func_165(&Var1, uParam0) && func_166(&Var1, iParam1))
	{
		func_167(Var1, -1052341598, &iVar0, 0);
	}
	return iVar0;
}

int func_85(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_168(iParam0, iParam1);
	return &(Global_1234391->f_401[iVar0 /*7*/]);
}

Vector3 func_86(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = func_168(iParam0, iParam1);
	return (Global_1234391->f_401[iVar0 /*7*/])->f_3;
}

int func_87(int iParam0)
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

int func_88(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = (iParam2 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if (uParam1[iVar2 /*3*/] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if (uParam1[iVar2 /*3*/] < iParam0)
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

struct<2> func_89()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

void func_90()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			(Local_102[iVar1 /*13*/])->f_8.f_2[iVar0] = 9000f;
			iVar0++;
		}
		iVar1++;
	}
}

void func_91(var uParam0)
{
	func_169(uParam0, 0);
	func_170(uParam0, 0);
	func_171(uParam0, 1);
	func_172(uParam0, 1);
	func_173(uParam0, 0);
	func_174(uParam0, 1);
	func_175(uParam0, 1, 1, 1);
}

void func_92()
{
	func_177(0, 0, func_176(), 3f, -1, 1);
}

int func_93(int iParam0)
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

bool func_94(var uParam0, int iParam1)
{
	return func_178(uParam0->f_16, iParam1);
}

void func_95(int iParam0)
{
	if (Local_0 != iParam0)
	{
		Local_0 = iParam0;
	}
}

void func_96(int iParam0)
{
	if (!func_104(iParam0))
	{
		func_179(&(Local_0.f_1), iParam0);
	}
}

bool func_97(int iParam0)
{
	if (!func_147(iParam0))
	{
		return false;
	}
	return (func_180(iParam0) && ((*Global_1125276)[iParam0 /*27*/])->f_18.f_1 != 0);
}

void func_98(int iParam0)
{
	if (Local_0.f_2 != iParam0)
	{
		Local_0.f_2 = iParam0;
	}
}

int func_99(struct<17> Param0, var uParam17)
{
	int iVar0;
	var uVar1;

	if (VOLUME::_0xF6A8A652A6B186CD(Local_0.f_3.f_1))
	{
		return 1;
	}
	if (func_141(Local_519.f_15))
	{
		*uParam17 = 1;
		return 0;
	}
	if (!VOLUME::_0xA4A4359320345B34(Local_0.f_3))
	{
		if (VOLUME::_0x397769175A7DBB30(Local_519.f_15, Param0.f_10, 0, 0, 0))
		{
			VOLUME::_0xFA15C9A320E707B0();
			*uParam17 = 1;
			return 0;
		}
		func_181(&uVar1, Param0);
		Local_0.f_3 = VOLUME::_0x183C0B6CFEFFCAE4(&uVar1);
		func_122(128);
	}
	else if (!func_103(128, 255))
	{
		Local_0.f_3.f_1 = func_182(Param0);
		if (VOLUME::_0xF6A8A652A6B186CD(Local_0.f_3.f_1))
		{
			return 1;
		}
		return 0;
	}
	iVar0 = VOLUME::_0xB33A604345F58202(Local_0.f_3);
	switch (iVar0)
	{
		case 3:
			Local_0.f_3.f_1 = VOLUME::_0x351D71B8B72B858B(Local_0.f_3);
			return 1;
		case 4:
			Local_0.f_3 = 0;
			return 0;
		default:
			break;
	}
	return 0;
}

bool func_100(int iParam0)
{
	return iParam0 != 0;
}

void func_101(var uParam0)
{
	*uParam0 = Global_1275573->f_21;
}

int func_102(int iParam0)
{
	return (Global_1275573->f_21 - iParam0) * 1000;
}

bool func_103(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	return func_146(&(Local_102[iParam1 /*13*/]), iParam0);
}

bool func_104(int iParam0)
{
	return func_146(Local_0.f_1, iParam0);
}

int func_105()
{
	return 1;
}

void func_106()
{
}

int func_107()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;

	iVar0 = 1;
	iVar2 = 0;
	while (iVar2 <= 1)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_0.f_7.f_2[iVar2])))
		{
			if (iVar2 == 1)
			{
				if (func_148(1))
				{
					iVar3 = 0;
					while (iVar3 < 32)
					{
						iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar3);
						if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
						{
							if (&(Local_102[iVar3 /*13*/])->f_1.f_2[iVar2] != 0)
							{
								Local_0.f_7.f_2[iVar2] = &(Local_102[iVar3 /*13*/])->f_1.f_2[iVar2];
							}
						}
						iVar3++;
					}
				}
				iVar0 = 0;
				Jump @186; //curOff = 130
			}
			else if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_0.f_7.f_2[1])))
			{
				if (func_183(iVar2, &bVar1) || bVar1)
				{
					iVar0 = 0;
				}
				else
				{
					iVar2++;
				}
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_0.f_7.f_2[0])))
				{
					vVar5 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(&(Local_0.f_7.f_2[0])), true, false) };
				}
				if (bVar1)
				{
					func_184();
				}
				return iVar0;
			}
		}
	}

int func_108()
{
	bool bVar0;

	if (!func_185(&bVar0))
	{
		if (bVar0)
		{
			func_184();
		}
		return 0;
	}
	return 1;
}

void func_109()
{
}

void func_110()
{
	if (!func_104(32) && func_186(32))
	{
		func_96(32);
	}
	if (!func_104(64) && func_186(64))
	{
		func_96(64);
	}
	if (!func_104(16) && func_187(16))
	{
		func_96(16);
	}
	if ((!func_104(2048) && func_186(2048)) && !func_186(4096))
	{
		func_96(2048);
	}
}

void func_111()
{
	bool bVar0;

	if (!bVar0 && func_104(16))
	{
		func_98(1);
		return;
	}
	if (func_104(2048) && !func_186(4096))
	{
		func_98(6);
		return;
	}
}

void func_112()
{
}

int func_113()
{
	if (func_188())
	{
		return 1;
	}
	func_189();
	func_190();
	switch (Local_0.f_7)
	{
		case 0:
			func_191();
			break;
		case 1:
			func_192();
			break;
		case 2:
			func_193();
			break;
		case 3:
			func_194();
			break;
		case 4:
			func_195();
			break;
		case 5:
			func_196();
			break;
		case 6:
			func_197();
			break;
	}
	return 0;
}

void func_114()
{
}

int func_115()
{
	return 1;
}

void func_116(int iParam0)
{
	if (func_63(iParam0))
	{
		func_198(&(Local_519.f_7), iParam0);
	}
}

int func_117(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_147(iParam0))
	{
		return 0;
	}
	iVar0 = func_199(iParam0);
	if (iVar0 != 0)
	{
		return 0;
	}
	iVar1 = PLAYER::PLAYER_ID();
	((*Global_1128435)[iVar1 /*83*/])->f_70 = iParam0;
	((*Global_1128435)[iVar1 /*83*/])->f_70.f_2 = iParam1;
	if (bParam2)
	{
		func_157(&(((*Global_1128435)[iVar1 /*83*/])->f_70.f_1), 1);
	}
	else
	{
		func_200(&(((*Global_1128435)[iVar1 /*83*/])->f_70.f_1), 1);
	}
	return 1;
}

void func_118(int iParam0)
{
	if (!func_63(iParam0))
	{
		func_179(&(Local_519.f_7), iParam0);
	}
}

void func_119(int iParam0)
{
	if (Local_519.f_8 != iParam0)
	{
		Local_519.f_8 = iParam0;
	}
}

int func_120()
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	sVar0 = "OREWM";
	sVar1 = "OREWMAU";
	iVar2 = 1;
	if (HUD::_DOES_TEXT_DATABASE_EXIST(sVar0) && HUD::_DOES_TEXT_DATABASE_EXIST(sVar1))
	{
		HUD::_TEXT_DATABASE_REQUEST(sVar0);
		HUD::_TEXT_DATABASE_REQUEST(sVar1);
		if (!HUD::_TEXT_DATABASE_HAS_LOADED(sVar0) || !HUD::_TEXT_DATABASE_HAS_LOADED(sVar1))
		{
			iVar2 = 0;
		}
	}
	iVar3 = 0;
	while (iVar3 <= 0)
	{
		if (!func_202(func_201(iVar3)))
		{
			iVar2 = 0;
		}
		iVar3++;
	}
	iVar4 = 0;
	while (iVar4 <= 0)
	{
		STREAMING::REQUEST_ANIM_DICT(func_203(iVar4));
		if (!STREAMING::HAS_ANIM_DICT_LOADED(func_203(iVar4)))
		{
			iVar2 = 0;
		}
		iVar4++;
	}
	if (!func_205(func_204(), &(Local_519.f_18.f_40), &(Local_0.f_7.f_90), 64, "pbl_handover"))
	{
		iVar2 = 0;
	}
	return iVar2;
}

bool func_121()
{
	bool bVar0;

	bVar0 = false;
	if (!func_206())
	{
		bVar0 = true;
	}
	return !bVar0;
}

void func_122(int iParam0)
{
	if (!func_103(iParam0, 255))
	{
		func_179(Local_102[NETWORK::PARTICIPANT_ID_TO_INT() /*13*/], iParam0);
	}
}

void func_123(var uParam0)
{
	*uParam0 = 0;
}

void func_124()
{
}

int func_125()
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	func_207();
	if (Local_519.f_18.f_41 == PLAYER::GET_PLAYER_INDEX())
	{
		if (func_208(13, 0))
		{
			func_209(256);
		}
	}
	iVar1 = 0;
	while (iVar1 <= 1)
	{
		if (iVar1 == 1)
		{
			if (!func_148(1))
			{
				if (!ENTITY::DOES_ENTITY_EXIST((Local_519.f_18.f_1[1 /*2*/])->f_1))
				{
					if (func_210(func_77(Local_519.f_18.f_41), (Local_102[NETWORK::PARTICIPANT_ID_TO_INT() /*13*/])->f_1.f_2[1], 1))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(&((Local_102[NETWORK::PARTICIPANT_ID_TO_INT() /*13*/])->f_1.f_2[1])), true);
						func_209(1);
					}
					else
					{
						iVar0 = 0;
					}
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_126(int iParam0)
{
	return (iParam0 - Global_1275573->f_21) * 1000;
}

void func_127()
{
	if (!func_63(1))
	{
		func_211(Local_519.f_9);
		func_118(1);
	}
}

void func_128()
{
	func_212();
	func_213();
}

void func_129()
{
	int iVar0;
	int iVar1;

	func_207();
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_0.f_7.f_2[iVar0])))
		{
			(Local_519.f_18.f_1[iVar0 /*2*/])->f_1 = NETWORK::NET_TO_PED(&(Local_0.f_7.f_2[iVar0]));
			func_214(iVar0, (Local_519.f_18.f_1[iVar0 /*2*/])->f_1);
			iVar1 = func_215(iVar0);
			func_217(&(Local_519.f_18.f_43), iVar1, func_216(iVar0), 0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
			{
				switch (iVar0)
				{
					case 0:
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, true);
						WEAPON::REMOVE_ALL_PED_WEAPONS(iVar1, true, true);
						PED::_0x1902C4CFCC5BE57C(iVar1, func_218(iVar0));
						break;
				}
			}
		}
		iVar0++;
	}
}

void func_130()
{
}

void func_131()
{
}

void func_132()
{
	float fVar0;

	if (func_141(Local_519.f_15))
	{
		return;
	}
	if (func_219())
	{
		return;
	}
	if (func_220(Local_519.f_1, 600))
	{
		fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false), Local_519.f_15);
		if (fVar0 < 200f)
		{
			func_122(4096);
		}
		else if (fVar0 < 400f)
		{
			func_221(4096);
			func_122(2048);
		}
		else
		{
			func_221(4096);
			func_221(2048);
		}
	}
}

void func_133()
{
	func_222();
	func_223();
	func_224();
}

void func_134()
{
	if (func_225())
	{
		func_122(8);
	}
	else
	{
		func_221(8);
	}
}

void func_135()
{
	if (PLAYER::GET_PLAYER_INDEX() == Local_519.f_18.f_41)
	{
		func_226();
	}
	func_207();
	func_227();
	func_228();
	func_229(Local_0.f_7);
	func_230();
	func_231();
	func_232();
	switch (Local_519.f_18)
	{
		case 0:
			func_233();
			break;
		case 1:
			func_234();
			break;
		case 2:
			func_235();
			break;
		case 3:
			func_236();
			break;
		case 4:
			func_237();
			break;
		case 5:
			func_238();
			break;
		case 6:
			func_239();
			break;
	}
}

void func_136()
{
	if (!func_103(8, 255))
	{
		func_122(16);
	}
	else
	{
		func_221(16);
	}
}

void func_137()
{
	int iVar0;

	Local_519.f_6 = -1;
	Local_519.f_5 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_519.f_5 = (Local_519.f_5 || Local_102[iVar0 /*13*/]) /* PointerArith */;
			Local_519.f_6 = (Local_519.f_6 && Local_102[iVar0 /*13*/]) /* PointerArith */;
		}
		iVar0++;
	}
}

int func_138()
{
	return 1;
}

void func_139()
{
}

void func_140(int iParam0)
{
	if (MAP::DOES_BLIP_EXIST((Local_519.f_167.f_7[iParam0 /*11*/])->f_1))
	{
		MAP::REMOVE_BLIP(&((Local_519.f_167.f_7[iParam0 /*11*/])->f_1));
	}
}

int func_141(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_142(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

bool func_143(int iParam0, int iParam1, int iParam2)
{
	if (!NETWORK::_0x255A5EF65EDA9167(iParam1))
	{
		return false;
	}
	return MISC::IS_BIT_SET((*Global_1196005)[iParam1 /*72*/][iParam0], iParam2);
}

void func_144(struct<2> Param0, int iParam2, int iParam3)
{
	var uVar0;
	int iVar1;
	vector3 vVar2;

	uVar0 = func_241(func_240(Param0));
	iVar1 = func_242(Param0);
	vVar2.f_1 = iParam3;
	vVar2.x = 0;
	vVar2.f_2 = 0;
	if (func_28() == 0)
	{
		vVar2.x = Global_265331->f_124445.f_70.f_17;
		func_243(Param0, &vVar2);
	}
	STATS::_0xD5910ECF81A2278C(uVar0, iVar1, iParam2, &vVar2);
}

void func_145(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_244(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	func_245(iVar0);
}

bool func_146(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_147(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return 1;
}

bool func_148(int iParam0)
{
	return func_146(Local_519.f_18.f_146, iParam0);
}

bool func_149(int iParam0)
{
	return MISC::IS_BIT_SET(Local_519.f_18.f_42, iParam0);
}

void func_150(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_246(iParam0, iParam1))
	{
		return;
	}
	iVar0 = func_247(iParam1);
	func_248(iVar0, iParam0);
}

void func_151(int iParam0)
{
	if (!MAP::DOES_BLIP_EXIST(&(Local_519.f_18.f_1[iParam0 /*2*/])))
	{
		return;
	}
	MAP::REMOVE_BLIP(Local_519.f_18.f_1[iParam0 /*2*/]);
}

int func_152(int iParam0)
{
	if (!func_147(iParam0))
	{
		return 0;
	}
	func_249(iParam0);
	return 1;
}

int func_153(var uParam0)
{
	if (func_37(*uParam0))
	{
		return 1;
	}
	if (uParam0->f_2 != 0)
	{
		if (uParam0->f_3 != -1)
		{
			return 1;
		}
		if (uParam0->f_4 != -1)
		{
			return 1;
		}
		if (uParam0->f_5 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_154(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;

	iVar0 = func_250(iParam1);
	iVar1 = ((&Global_1186267->f_3[iParam1] + iVar0) - 1);
	if (&Global_1186267->f_23[iParam1] != 0)
	{
		iVar1 = ((iVar0 + func_251(iParam1)) - 1);
	}
	bVar2 = func_37(*uParam0);
	bVar3 = (uParam0->f_2 != 0 && uParam0->f_3 != -1);
	bVar4 = (uParam0->f_2 != 0 && uParam0->f_4 != -1);
	bVar5 = (uParam0->f_2 != 0 && uParam0->f_5 != -1);
	iVar6 = iVar0;
	while (iVar6 <= iVar1)
	{
		if (bVar2)
		{
			if (func_21((Global_1186267->f_231[iVar6 /*15*/])->f_5, *uParam0))
			{
				return iVar6;
			}
		}
		if (bVar3)
		{
			if ((Global_1186267->f_231[iVar6 /*15*/])->f_5.f_2 == uParam0->f_2 && (Global_1186267->f_231[iVar6 /*15*/])->f_5.f_3 == uParam0->f_3)
			{
				return iVar6;
			}
		}
		if (bVar4)
		{
			if ((Global_1186267->f_231[iVar6 /*15*/])->f_5.f_2 == uParam0->f_2 && (Global_1186267->f_231[iVar6 /*15*/])->f_5.f_4 == uParam0->f_4)
			{
				return iVar6;
			}
		}
		if (bVar5)
		{
			if ((Global_1186267->f_231[iVar6 /*15*/])->f_5.f_2 == uParam0->f_2 && (Global_1186267->f_231[iVar6 /*15*/])->f_5.f_5 == uParam0->f_5)
			{
				return iVar6;
			}
		}
		iVar6++;
	}
	return -1;
}

void func_155(int iParam0)
{
	func_72(iParam0, 0);
	func_72(iParam0, 1);
	func_72(iParam0, 3);
	func_70(iParam0);
}

void func_156(int iParam0)
{
	func_71(iParam0);
	func_252(iParam0, 0, 3);
}

void func_157(var uParam0, int iParam1)
{
	func_253(uParam0, iParam1);
}

void func_158(int iParam0)
{
	func_72(iParam0, 0);
	func_73(iParam0, 0);
	func_73(iParam0, 1);
	func_73(iParam0, 2);
}

void func_159(int iParam0)
{
	func_72(iParam0, 1);
	func_70(iParam0);
}

void func_160(int iParam0)
{
	func_72(iParam0, 2);
	func_73(iParam0, 3);
}

void func_161(int iParam0)
{
	func_72(iParam0, 3);
	func_73(iParam0, 4);
}

void func_162(int iParam0)
{
	func_73(iParam0, 0);
	func_73(iParam0, 1);
}

void func_163(int iParam0)
{
	func_73(iParam0, 2);
	func_73(iParam0, 3);
}

void func_164(int iParam0)
{
	func_73(iParam0, 4);
	func_73(iParam0, 5);
}

bool func_165(var uParam0, var uParam1)
{
	*uParam0 = Global_1234391->f_8113;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = uParam1;
	return (DATAFILE::_0x603AC35FD4602C76(*uParam0) && DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0));
}

bool func_166(var uParam0, int iParam1)
{
	uParam0->f_2 = 333456427;
	uParam0->f_3 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_167(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;

	vParam0.f_2 = iParam5;
	uVar0 = *iParam6;
	if (DATAFILE::_DATAFILE_GET_HASH(&uVar0, &vParam0))
	{
		*iParam6 = uVar0;
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_168(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return (((*Global_1234391)[iParam0 /*5*/])->f_4 + iParam1);
}

void func_169(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_198(&(uParam0->f_1), 16384);
	}
	else
	{
		func_179(&(uParam0->f_1), 16384);
	}
}

void func_170(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_198(&(uParam0->f_1), 2048);
	}
	else
	{
		func_179(&(uParam0->f_1), 2048);
	}
}

void func_171(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_198(&(uParam0->f_1), 256);
	}
	else
	{
		func_179(&(uParam0->f_1), 256);
	}
}

void func_172(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_179(uParam0, 16);
	}
	else
	{
		func_198(uParam0, 67108864);
		func_198(uParam0, 16);
	}
}

void func_173(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_198(&(uParam0->f_1), 128);
	}
	else
	{
		func_179(&(uParam0->f_1), 128);
	}
}

void func_174(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_179(uParam0, 256);
	}
	else
	{
		func_198(uParam0, 256);
	}
}

void func_175(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_179(uParam0, 268435456);
	}
	else
	{
		func_198(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_179(uParam0, 1073741824 /* Float: 2f */);
	}
	else
	{
		func_198(uParam0, 1073741824 /* Float: 2f */);
	}
	if (!bParam3)
	{
		func_179(uParam0, 536870912);
	}
	else
	{
		func_198(uParam0, 536870912);
	}
}

Vector3 func_176()
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { func_78(func_77(Local_519.f_18.f_41)) };
	vVar0 = { func_254(vVar0, Global_1126368->f_1995.f_1, 2f) };
	vVar3 = { func_78(func_77(Local_519.f_18.f_41)) };
	return vVar0;
}

void func_177(int iParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7)
{
	((*Local_519.f_207[iParam0 /*8*/])[iParam1 /*7*/])->f_1 = iParam6;
	((*Local_519.f_207[iParam0 /*8*/])[iParam1 /*7*/])->f_2 = iParam7;
	((*Local_519.f_207[iParam0 /*8*/])[iParam1 /*7*/])->f_3 = { vParam2 };
	((*Local_519.f_207[iParam0 /*8*/])[iParam1 /*7*/])->f_6 = fParam5;
}

bool func_178(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_179(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_180(int iParam0)
{
	int iVar0;

	if (!func_147(iParam0))
	{
		return false;
	}
	iVar0 = func_255(iParam0);
	return (iVar0 != 0 && iVar0 != 3);
}

void func_181(var uParam0, struct<12> Param1, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17)
{
	*uParam0 = { Param1.f_11 };
	uParam0->f_4 = Param1.f_10;
	uParam0->f_6 = -653740250;
	uParam0->f_7 = Param1.f_5;
}

var func_182(struct<17> Param0)
{
	var uVar0;

	func_181(&uVar0, Param0);
	return VOLUME::_0x77A6E4AD0C496F81(&uVar0);
}

int func_183(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(2))
	{
		*uParam1 = 1;
		return 0;
	}
	if (!func_258(Local_0.f_7.f_2[iParam0], func_201(iParam0), func_256(iParam0), func_257(iParam0), 1, 0, 1, 1, 1))
	{
		*uParam1 = 1;
		return 0;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(&(Local_0.f_7.f_2[iParam0])), true, false) };
	return 1;
}

void func_184()
{
	func_98(2);
}

int func_185(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(2))
	{
		*uParam0 = 1;
		return 0;
	}
	bVar0 = false;
	bVar1 = false;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 2)
	{
		if (func_259(iVar2, 4))
		{
		}
		else if (!func_260(iVar2, uParam0, &bVar1))
		{
			if (*uParam0)
			{
				return 0;
			}
			if (bVar1)
			{
				bVar0 = true;
			}
			else
			{
				iVar2++;
			}
			if (bVar0)
			{
				return 0;
			}
			return 1;
		}
	}

bool func_186(int iParam0)
{
	return func_146(Local_519.f_5, iParam0);
}

bool func_187(int iParam0)
{
	return func_146(Local_519.f_6, iParam0);
}

int func_188()
{
	int iVar0;

	if (Local_0.f_7 == 7)
	{
		return 1;
	}
	iVar0 = func_215(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 1;
	}
	return 0;
}

void func_189()
{
	if (func_261())
	{
		func_262(0);
		func_263(6);
	}
}

void func_190()
{
	if (func_264(1))
	{
		if (!func_148(4))
		{
			func_265(1, 1);
		}
	}
}

void func_191()
{
	if (func_219())
	{
		func_263(1);
	}
}

void func_192()
{
	int iVar0;

	if (func_266(0))
	{
		if (!func_267(Local_0.f_7.f_7[1 /*3*/]))
		{
			func_268(1);
		}
	}
	if (func_148(256))
	{
		iVar0 = 7;
	}
	else
	{
		iVar0 = 6;
	}
	if (func_266(iVar0))
	{
		func_263(2);
	}
}

void func_193()
{
	int iVar0;
	int iVar1;

	iVar0 = func_215(0);
	iVar1 = func_215(1);
	if (((ENTITY::DOES_ENTITY_EXIST(iVar0) && TASK::_0x916B8E075ABC8B4E(iVar0, 1)) && func_266(10)) && !TASK::_0x916B8E075ABC8B4E(iVar1, 1))
	{
		func_262(4);
		func_263(3);
	}
}

void func_194()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_269();
	if (!func_270(1))
	{
		if (!func_266(13))
		{
			if (func_267(Local_0.f_7.f_7[13 /*3*/]))
			{
			}
			if (func_271(Local_0.f_7.f_7[13 /*3*/], 15000))
			{
				func_272(13);
			}
		}
		else if (!func_266(14))
		{
			if (func_267(Local_0.f_7.f_7[14 /*3*/]))
			{
			}
			if (func_271(Local_0.f_7.f_7[14 /*3*/], 15000))
			{
				func_272(14);
			}
		}
	}
	if (NETWORK::_0x255A5EF65EDA9167(iVar0))
	{
		iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
		{
			iVar2 = iVar1;
			switch ((Local_102[iVar2 /*13*/])->f_1.f_6)
			{
				case 0:
					Local_0.f_7.f_91 = iVar0;
					func_263(4);
					func_262(0);
					break;
				case 1:
					Local_0.f_7.f_91 = iVar0;
					func_263(5);
					func_262(0);
					break;
			}
		}
	}
}

void func_195()
{
	if (func_148(8) || func_148(16))
	{
		func_263(5);
	}
}

void func_196()
{
	int iVar0;

	iVar0 = func_215(0);
	if ((((ENTITY::DOES_ENTITY_EXIST(iVar0) && func_266(17)) && func_266(18)) && func_273(64)) || func_273(64))
	{
		func_263(7);
	}
}

void func_197()
{
	if (func_273(64))
	{
		func_263(7);
	}
}

void func_198(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_199(int iParam0)
{
	if (!func_147(iParam0))
	{
		return 0;
	}
	if (!func_180(iParam0))
	{
		return 0;
	}
	return ((*Global_1125276)[iParam0 /*27*/])->f_18.f_1;
}

void func_200(var uParam0, int iParam1)
{
	func_274(uParam0, iParam1);
}

int func_201(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("MP_RE_WILDMAN_MALES_01");
		default:
			break;
	}
	return 0;
}

bool func_202(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam0, false);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

char* func_203(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script_common@handover@generic@player_handover@money";
		default:
			break;
	}
	return "";
}

char* func_204()
{
	return "script@beat@town@townrobbery@handover_money";
}

int func_205(char* sParam0, var uParam1, var uParam2, int iParam3, char* sParam4)
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam2))
		{
			if (!ANIMSCENE::_0x25557E324489393C(*uParam1))
			{
				*uParam1 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam0, iParam3, sParam4, true, true);
			}
			if (ANIMSCENE::_0x25557E324489393C(*uParam1))
			{
				if (!NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(*uParam1))
				{
					if (!NETWORK::_NETWORK_REQUEST_CONTROL_OF_ANIM_SCENE(*uParam1))
					{
						return 0;
					}
				}
				if (!ANIMSCENE::_0x477122B8D05E7968(*uParam1, 0, 0))
				{
					if (!ANIMSCENE::_0x59606519FF9D3EC2(*uParam1, 0))
					{
						ANIMSCENE::LOAD_ANIM_SCENE(*uParam1);
					}
					return 0;
				}
				else
				{
					*uParam2 = NETWORK::_0xE0D73CDDEA79DDCD(*uParam1);
				}
			}
			return 0;
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam2))
	{
		return 0;
	}
	*uParam1 = NETWORK::_0xD7F6781A0ABAF6FB(*uParam2);
	if (!ANIMSCENE::_0x25557E324489393C(*uParam1))
	{
		return 0;
	}
	return 1;
}

int func_206()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (MISC::IS_BIT_SET(Local_519.f_167.f_3, iVar0))
		{
		}
		else
		{
			iVar2 = func_275(iVar0);
			if (iVar2 == 0)
			{
				Jump @128; //curOff = 53
			}
			else
			{
				if (!MISC::IS_BIT_SET(Local_519.f_167.f_4, iVar0))
				{
					STREAMING::REQUEST_MODEL(iVar2, false);
					MISC::SET_BIT(&(Local_519.f_167.f_4), iVar0);
				}
				if (!STREAMING::HAS_MODEL_LOADED(iVar2))
				{
					bVar1 = true;
					Jump @128; //curOff = 109
				}
				else
				{
					MISC::SET_BIT(&(Local_519.f_167.f_3), iVar0);
				}
			}
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 0;
	}
	return 1;
}

void func_207()
{
	int iVar0;

	Local_519.f_18.f_145 = -1;
	Local_519.f_18.f_146 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_519.f_18.f_145 = (Local_519.f_18.f_145 && (Local_102[iVar0 /*13*/])->f_1);
			Local_519.f_18.f_146 = (Local_519.f_18.f_146 || (Local_102[iVar0 /*13*/])->f_1);
		}
		iVar0++;
	}
}

int func_208(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_246(iParam0, iParam1))
	{
		return 0;
	}
	iVar0 = func_247(iParam1);
	return func_276(iVar0, iParam0);
}

void func_209(int iParam0)
{
	func_179(&((Local_102[NETWORK::PARTICIPANT_ID_TO_INT() /*13*/])->f_1), iParam0);
}

int func_210(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_147(iParam0))
	{
		return 0;
	}
	if (!func_277(iParam0, &iVar0))
	{
		return 0;
	}
	if (func_278(iParam0, 128))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (!NETWORK::_0xB07D3185E11657A5(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	iVar1 = NETWORK::_0xF260AF6F43953316(iVar0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iVar1))
	{
		*uParam1 = iVar1;
	}
	else
	{
		return 0;
	}
	if (bParam2)
	{
		func_279(iParam0);
	}
	return 1;
}

void func_211(struct<2> Param0)
{
	if (func_242(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_242(Param0)))
	{
		STATS::_0x99230691875FC218(func_240(Param0), func_242(Param0), Global_35);
	}
}

void func_212()
{
	int iVar0;
	int iVar1;

	iVar1 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_280(iVar0, iVar1, 0);
		iVar0++;
	}
}

void func_213()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			if (!func_141(((*Local_519.f_207[iVar0 /*8*/])[iVar1 /*7*/])->f_3))
			{
				if (!func_142((*Local_519.f_207[iVar0 /*8*/])[iVar1 /*7*/]))
				{
					vVar2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_519.f_15, 0f, ((*Local_519.f_207[iVar0 /*8*/])[iVar1 /*7*/])->f_3) };
					(*Local_519.f_207[iVar0 /*8*/])[iVar1 /*7*/] = GRAPHICS::_0xFA50F79257745E74(vVar2, ((*Local_519.f_207[iVar0 /*8*/])[iVar1 /*7*/])->f_6, ((*Local_519.f_207[iVar0 /*8*/])[iVar1 /*7*/])->f_2, ((*Local_519.f_207[iVar0 /*8*/])[iVar1 /*7*/])->f_1, 0);
				}
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_214(int iParam0, var uParam1)
{
	Local_519.f_167.f_7[iParam0 /*11*/] = uParam1;
}

int func_215(int iParam0)
{
	return (Local_519.f_18.f_1[iParam0 /*2*/])->f_1;
}

char* func_216(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "RE005_MALE6";
		case 1:
			return "CRIPPS";
		default:
			break;
	}
	return "";
}

void func_217(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_281(uParam0, iParam1, sParam2))
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

int func_218(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1703424209;
		default:
			break;
	}
	return 0;
}

bool func_219()
{
	return (func_104(32) || func_103(32, 255));
}

int func_220(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	if (iParam0 == 0)
	{
		return 0;
	}
	Var0 = { func_282(iParam0, joaat("LAST_INTERACTION_TIMESTAMP")) };
	if (!STATS::STAT_ID_GET_INT(&Var0, &iVar2))
	{
		return 0;
	}
	if (iVar2 != 0 && (Global_1275573->f_21 - iVar2) < iParam1)
	{
		return 1;
	}
	return 0;
}

void func_221(int iParam0)
{
	if (func_146(&(Local_102[NETWORK::PARTICIPANT_ID_TO_INT() /*13*/]), iParam0))
	{
		func_198(Local_102[NETWORK::PARTICIPANT_ID_TO_INT() /*13*/], iParam0);
	}
}

void func_222()
{
	func_283();
}

void func_223()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
		func_284(iVar0, bVar1, iVar2);
		iVar0++;
	}
}

void func_224()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;

	if (!NETWORK::_0x255A5EF65EDA9167(PLAYER::PLAYER_ID()))
	{
		return;
	}
	iVar2 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		return;
	}
	iVar3 = NETWORK::PARTICIPANT_ID_TO_INT();
	bVar4 = false;
	bVar5 = false;
	bVar6 = false;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (Local_519.f_167.f_30 >= 2)
		{
			Local_519.f_167.f_30 = 0;
		}
		iVar0 = Local_519.f_167.f_30;
		Local_519.f_167.f_30++;
		iVar7 = func_285(iVar0);
		iVar1 = &Local_519.f_167.f_7[iVar0 /*11*/];
		bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		if (func_259(iVar7, 4))
		{
			func_280(iVar7, iVar3, 1);
			bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		}
		if (bVar4)
		{
			if (&(Local_102[iVar3 /*13*/])->f_8.f_2[iVar0] > -1f)
			{
				(Local_102[iVar3 /*13*/])->f_8.f_2[iVar0] = -1f;
			}
			if (MISC::IS_BIT_SET(Local_519.f_167.f_5, iVar0))
			{
				MISC::CLEAR_BIT(&(Local_519.f_167.f_5), iVar0);
				MISC::CLEAR_BIT(&(Local_519.f_167.f_6), iVar0);
				MISC::CLEAR_BIT(&(Local_519.f_167.f_31), iVar0);
			}
		}
		if (MISC::IS_BIT_SET(Local_519.f_167.f_31, iVar0))
		{
			if (bVar4 || !func_286(iVar2, iVar1, iVar0))
			{
				MISC::CLEAR_BIT(&(Local_519.f_167.f_31), iVar0);
			}
		}
		else if (!bVar4)
		{
			if (func_286(iVar2, iVar1, iVar0))
			{
				MISC::SET_BIT(&(Local_519.f_167.f_31), iVar0);
			}
		}
		if (!bVar4)
		{
			if (AUDIO::IS_ANY_SPEECH_PLAYING(iVar1))
			{
				if (!MISC::IS_BIT_SET((Local_102[iVar3 /*13*/])->f_8.f_1, iVar0))
				{
					MISC::SET_BIT(&((Local_102[iVar3 /*13*/])->f_8.f_1), iVar0);
				}
				func_287(Local_519.f_167.f_32[iVar0 /*3*/]);
			}
		}
		if (MISC::IS_BIT_SET((Local_102[iVar3 /*13*/])->f_8.f_1, iVar0))
		{
			if (bVar4 || (!AUDIO::IS_ANY_SPEECH_PLAYING(iVar1) && (!func_288(Local_519.f_167.f_32[iVar0 /*3*/]) || func_289(Local_519.f_167.f_32[iVar0 /*3*/], 0.5f))))
			{
				func_290(Local_519.f_167.f_32[iVar0 /*3*/]);
				MISC::CLEAR_BIT(&((Local_102[iVar3 /*13*/])->f_8.f_1), iVar0);
			}
		}
		if (func_259(iVar7, 4))
		{
			if (bVar4)
			{
				if (!bVar6)
				{
					if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
					{
						if (func_291(iVar7))
						{
							if (!func_260(iVar7, &bVar5, &bVar6))
							{
								if (bVar5)
								{
									func_292(iVar7, 4);
								}
								else if (bVar6)
								{
								}
							}
						}
					}
				}
			}
			else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1) && !func_259(iVar7, 8))
			{
				if (!func_291(iVar7))
				{
					PED::_0x7043D0681285BA2D(&iVar1);
				}
			}
		}
		iVar0++;
	}
	if (Local_519.f_167.f_31 != 0)
	{
		if (!func_293(1, -1))
		{
			func_294(1);
		}
	}
	else if (func_293(1, -1))
	{
		func_295(1);
	}
}

int func_225()
{
	bool bVar0;

	bVar0 = true;
	if (bVar0 && !UNLOCK::_UNLOCK_IS_UNLOCKED(Local_519.f_14))
	{
		return 0;
	}
	return 1;
}

void func_226()
{
	struct<10> Var0;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;

	Var0 = { func_296(-1591664384, -1591664384, 0, 0, 0, 0, -1, -1238310989, 0) };
	if (func_297(Var0, &iVar10, &iVar11, 0))
	{
		iVar13 = 99;
		iVar14 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(PLAYER::GET_PLAYER_INDEX());
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar14))
		{
			iVar15 = iVar14;
			if ((Local_102[iVar15 /*13*/])->f_1.f_5 != 0)
			{
				if (!func_298((Local_102[iVar15 /*13*/])->f_1.f_5, 1))
				{
					(Local_102[iVar15 /*13*/])->f_1.f_5 = 0;
				}
			}
			iVar12 = 0;
			while (iVar12 < iVar11)
			{
				iVar16 = func_299(iVar12, iVar10);
				if (func_298(iVar16, 1))
				{
					if (func_300(iVar16) < iVar13)
					{
						iVar13 = func_300(iVar16);
						(Local_102[iVar15 /*13*/])->f_1.f_5 = iVar16;
					}
				}
				iVar12++;
			}
		}
		func_301(iVar10);
	}
}

void func_227()
{
	int iVar0;

	Local_519.f_18.f_147 = -1;
	Local_519.f_18.f_148 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_519.f_18.f_147 = (Local_519.f_18.f_147 && (Local_102[iVar0 /*13*/])->f_1.f_1);
			Local_519.f_18.f_148 = (Local_519.f_18.f_148 || (Local_102[iVar0 /*13*/])->f_1.f_1);
		}
		iVar0++;
	}
}

void func_228()
{
	if (func_302(func_215(0), 0, &(Local_519.f_18.f_7), &(Local_519.f_18.f_38), 0, 0))
	{
		if (!func_261())
		{
			func_303(0);
			func_304(1, 0, 0);
			func_305();
		}
		if (Local_519.f_18.f_41 == PLAYER::GET_PLAYER_INDEX())
		{
			func_306(13, 0);
		}
	}
}

void func_229(int iParam0)
{
	if (Local_519.f_18 != iParam0)
	{
		if (iParam0 == 6)
		{
			func_140(0);
		}
		Local_519.f_18 = iParam0;
	}
}

void func_230()
{
	if (Local_519.f_18.f_41 != PLAYER::GET_PLAYER_INDEX())
	{
		return;
	}
	if (func_264(1))
	{
		if (func_307(4, 255))
		{
			func_308(4);
			(Local_102[NETWORK::PARTICIPANT_ID_TO_INT() /*13*/])->f_1.f_6 = -1;
		}
	}
	if (Local_0.f_7.f_5 != Local_519.f_18.f_39)
	{
		Local_519.f_18.f_39 = Local_0.f_7.f_5;
		if (func_307(2, 255))
		{
			func_309(Local_0.f_7.f_5);
		}
	}
}

void func_231()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(Local_519.f_18.f_41);
	iVar1 = iVar0;
	iVar2 = PLAYER::GET_PLAYER_PED(Local_519.f_18.f_41);
	switch (Local_0.f_7.f_5)
	{
		case 2:
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
			{
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if ((Local_102[iVar1 /*13*/])->f_1.f_5 != 0)
					{
						func_262(4);
					}
				}
			}
			break;
		case 3:
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
			{
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if ((Local_102[iVar1 /*13*/])->f_1.f_5 == 0)
					{
						func_262(2);
					}
					else if (!func_310(iVar2))
					{
						func_262(4);
					}
				}
			}
			break;
		case 4:
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
			{
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if ((Local_102[iVar1 /*13*/])->f_1.f_5 == 0)
					{
						func_262(2);
					}
					else if (func_310(iVar2))
					{
						func_262(3);
					}
				}
			}
			break;
	}
	if (Local_519.f_18.f_41 != PLAYER::GET_PLAYER_INDEX())
	{
		return;
	}
	iVar3 = func_215(0);
	if (func_307(2, 255))
	{
		if (!func_311(0, 10f, -1, 0) || Local_0.f_7.f_5 == 0)
		{
			if (func_313(func_312(0)))
			{
				MISC::_0xE98D55C5983F2509(func_215(0));
				PED::SET_PED_CONFIG_FLAG(iVar3, 297, true);
				func_314();
				func_308(2);
			}
		}
		else if (func_315(0, 0, 0))
		{
			if (!func_316(2))
			{
				if (func_313(func_312(0)))
				{
					func_309(Local_519.f_18.f_39);
					func_317(2);
				}
			}
		}
		else if (func_316(2))
		{
			if (func_313(func_312(0)))
			{
				func_309(Local_519.f_18.f_39);
				func_318(2);
			}
		}
	}
	else if (func_311(0, 10f, -1, 0) && Local_0.f_7.f_5 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar3) && !ENTITY::IS_ENTITY_DEAD(iVar3))
		{
			if (func_313(func_312(0)))
			{
				if (MISC::_0x870708A6E147A9AD(iVar3, "", 7f, 0, 16, 0, 0, 0, 0, -1))
				{
					PED::SET_PED_CONFIG_FLAG(iVar3, 130, true);
					PED::SET_PED_CONFIG_FLAG(iVar3, 178, false);
					PED::SET_PED_CONFIG_FLAG(iVar3, 297, true);
					PED::SET_PED_CONFIG_FLAG(iVar3, 301, false);
					func_209(2);
				}
			}
		}
	}
}

void func_232()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 26)
	{
		if (func_320(func_319(iVar0)))
		{
			if (!func_149(iVar0))
			{
				if (func_321(iVar0))
				{
					func_322(iVar0);
					func_304(1, 0, 0);
				}
				if (func_323(iVar0))
				{
					if (func_324(iVar0))
					{
						func_325(-296154796, func_215(0), 1);
					}
					func_326(iVar0);
					if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
					{
						func_327(iVar0);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_233()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	iVar2 = 255;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		iVar1 = func_215(iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (BUILTIN::VDIST(Global_35, ENTITY::GET_ENTITY_COORDS(iVar1, false, false)) < 10f)
			{
				if (Local_519.f_18.f_41 == PLAYER::GET_PLAYER_INDEX())
				{
					switch (iVar0)
					{
						case 0:
							func_328();
							if (TASK::_0x916B8E075ABC8B4E(iVar1, 1))
							{
								TASK::_0x541E5B41DCA45828(iVar1, 1, 0);
							}
							break;
						case 1:
							func_328();
							break;
					}
				}
				else if (!func_149(19))
				{
					func_272(19);
				}
				else
				{
					func_329(20, 12000, 0);
				}
			}
			else
			{
				switch (iVar0)
				{
					case 0:
						func_329(5, 12000, 1);
						break;
				}
			}
			if (iVar0 == 0)
			{
				if (func_330(iVar1, 993674639, 1, 0))
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iVar1, func_256(iVar0), func_257(iVar0), true, false, true);
					TASK::_TASK_START_SCENARIO_IN_PLACE(iVar1, joaat("WORLD_HUMAN_SIT_GROUND"), 0, false, 0, -1f, false);
				}
				if (func_332(func_331(5)))
				{
					STREAMING::REQUEST_CLIP_SET("AI_GESTURES@INSTRUMENTS@WHISTLING@120BPM");
					PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(iVar1, 1, 1);
					PED::SET_PED_RESET_FLAG(iVar1, 209, true);
					PED::SET_PED_GESTURE_GROUP(iVar1, "AI_GESTURES@INSTRUMENTS@WHISTLING@120BPM", 1);
				}
				if (func_149(19))
				{
					iVar2 = func_333(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), &uVar3, 1203982208 /* Float: 99999f */, 0, 0, 0);
					if (!TASK::_0x916B8E075ABC8B4E(iVar1, 1) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
					{
						TASK::_0xE7FA07624574B79A(iVar1, PLAYER::GET_PLAYER_PED(iVar2), 3, 1, 1000f, 1, 0, 0, 0);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_234()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	if (func_148(256))
	{
		iVar2 = 7;
	}
	else
	{
		iVar2 = 6;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		iVar1 = func_215(iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (BUILTIN::VDIST(Global_35, ENTITY::GET_ENTITY_COORDS(iVar1, false, false)) < 10f)
			{
				if (Local_519.f_18.f_41 == PLAYER::GET_PLAYER_INDEX())
				{
					switch (iVar0)
					{
						case 0:
							if (!func_149(iVar2))
							{
								if (func_334(19))
								{
									func_335(19);
								}
								func_272(iVar2);
							}
							break;
						case 1:
							bVar3 = false;
							if (BUILTIN::VDIST(Global_35, ENTITY::GET_ENTITY_COORDS(func_215(0), false, false)) < 10f)
							{
								bVar3 = true;
							}
							if (((!func_149(0) && !func_149(iVar2)) && !func_334(iVar2)) && !bVar3)
							{
								func_272(0);
							}
							if (((((func_149(0) && !func_149(1)) && !func_149(iVar2)) && !func_334(iVar2)) && !bVar3) && !func_270(1))
							{
								if (func_336(1) > 11000)
								{
									func_272(1);
								}
							}
							break;
					}
				}
				switch (iVar0)
				{
					case 0:
						if (!TASK::_0x916B8E075ABC8B4E(iVar1, 1) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
						{
							TASK::_0xE7FA07624574B79A(iVar1, PLAYER::GET_PLAYER_PED(Local_519.f_18.f_41), 3, 1, 5000f, 1, 0, 0, 0);
						}
						break;
					case 1:
						if (!TASK::_0x916B8E075ABC8B4E(iVar1, 1) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
						{
							TASK::_0xE7FA07624574B79A(iVar1, PLAYER::GET_PLAYER_PED(Local_519.f_18.f_41), 3, 1, 5000f, 1, 0, 0, 0);
						}
						break;
				}
			}
		}
		iVar0++;
	}
	func_337(0, 0);
}

void func_235()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = func_215(0);
	iVar2 = func_215(1);
	iVar0 = PLAYER::GET_PLAYER_PED(Local_519.f_18.f_41);
	if (func_148(256))
	{
		iVar3 = 7;
	}
	else
	{
		iVar3 = 6;
	}
	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), ENTITY::GET_ENTITY_COORDS(iVar1, false, false)) < 10f)
	{
		if (!func_149(iVar3))
		{
			func_272(iVar3);
		}
		else if (!func_149(9))
		{
			func_272(9);
		}
		else if (!func_149(10))
		{
			func_272(10);
		}
		if ((func_149(iVar3) || func_149(9)) || func_149(10))
		{
			if (!TASK::_0x916B8E075ABC8B4E(iVar1, 1) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
			{
				TASK::_0xE7FA07624574B79A(iVar1, iVar0, 3, 1, 5000f, 1, 0, 0, 0);
			}
		}
	}
	else if (func_149(iVar3) || func_149(9))
	{
		if (!func_149(8))
		{
			func_272(8);
		}
	}
	if (func_149(10))
	{
		if (TASK::_0x916B8E075ABC8B4E(iVar2, 1) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
		{
			TASK::_0x541E5B41DCA45828(iVar2, 1, 0);
		}
	}
}

void func_236()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = func_215(0);
	iVar2 = func_338();
	iVar0 = Global_34;
	if (BUILTIN::VDIST(Global_35, ENTITY::GET_ENTITY_COORDS(iVar1, false, false)) < 10f)
	{
		if (!TASK::_0x916B8E075ABC8B4E(iVar1, 1) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
		{
			TASK::_0xE7FA07624574B79A(iVar1, iVar0, 3, 1, 5000f, 1, 0, 0, 0);
		}
		if (Local_519.f_18.f_41 == PLAYER::GET_PLAYER_INDEX())
		{
			if (!func_149(12))
			{
				if (func_339(16384))
				{
					func_272(12);
				}
			}
		}
	}
	else if (TASK::_0x916B8E075ABC8B4E(iVar1, 1) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
	{
		TASK::_0x541E5B41DCA45828(iVar1, 1, 0);
	}
	switch (iVar2)
	{
		case 0:
			func_272(25);
			if (Local_519.f_18.f_41 == PLAYER::GET_PLAYER_INDEX())
			{
				func_340();
			}
			break;
		case 1:
			if (!func_266(15))
			{
				func_272(26);
				func_272(15);
			}
			if (!func_148(32))
			{
				func_209(32);
			}
			if (Local_519.f_18.f_41 == PLAYER::GET_PLAYER_INDEX())
			{
				func_340();
			}
			break;
	}
}

void func_237()
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;

	iVar0 = func_215(0);
	iVar1 = PLAYER::GET_PLAYER_PED(Local_519.f_18.f_41);
	if (Local_519.f_18.f_41 == PLAYER::GET_PLAYER_INDEX() && !NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_519.f_18.f_40))
	{
		NETWORK::_NETWORK_REQUEST_CONTROL_OF_ANIM_SCENE(Local_519.f_18.f_40);
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		if (PED::_0x34D6AC1157C8226C(iVar0, joaat("WORLD_HUMAN_SIT_GROUND")))
		{
			func_341(iVar0, ENTITY::GET_ENTITY_COORDS(iVar1, true, false), 5, 1, 2);
			TASK::TASK_TURN_PED_TO_FACE_COORD(iVar0, ENTITY::GET_ENTITY_COORDS(iVar1, true, false), 0);
		}
	}
	if (ANIMSCENE::_0x25557E324489393C(Local_519.f_18.f_40))
	{
		if (Local_519.f_18.f_41 == PLAYER::GET_PLAYER_INDEX() && NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_519.f_18.f_40))
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 256, false);
			}
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), true);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), true);
			if (func_342(iVar0, 1464580341))
			{
			}
			if (TASK::_0x0C3CB2E600C8977D(iVar0, 1))
			{
			}
			if (PED::_0x34D6AC1157C8226C(iVar0, joaat("WORLD_HUMAN_SIT_GROUND")))
			{
			}
			if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar0, 0))
			{
			}
			if (ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_519.f_18.f_40, 0))
			{
			}
			if (((((!TASK::_0x0C3CB2E600C8977D(iVar0, 1) && !PED::_0x34D6AC1157C8226C(iVar0, joaat("WORLD_HUMAN_SIT_GROUND"))) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar0, 0)) && !ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_519.f_18.f_40, 0)) && !ANIMSCENE::_0xD8254CB2C586412B(Local_519.f_18.f_40, 0)) && !func_342(iVar1, 1369124074))
			{
				if (PED::IS_PED_MALE(iVar1))
				{
					sVar2 = "pedPlayer";
				}
				else
				{
					sVar2 = "pedPlayer_female";
				}
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_519.f_18.f_40, sVar2, iVar1, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_519.f_18.f_40, "pedStranger", iVar0, 0);
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_519.f_18.f_40, ENTITY::GET_ENTITY_COORDS(iVar0, true, false), ENTITY::GET_ENTITY_ROTATION(iVar0, 2) + Vector(180f, 180f, 180f), 2);
				TASK::TASK_ENTER_ANIM_SCENE(iVar1, Local_519.f_18.f_40, sVar2, "pbl_handover", 1069379748, 1, 8, 20000, -1082130432);
			}
			if (PED::IS_PED_INJURED(iVar1))
			{
				if (ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_519.f_18.f_40, 0))
				{
					ANIMSCENE::ABORT_ANIM_SCENE(Local_519.f_18.f_40, true);
				}
				func_209(16);
			}
			if (ANIMSCENE::_0xD8254CB2C586412B(Local_519.f_18.f_40, 0))
			{
				if (!func_148(8))
				{
					if (PLAYER::GET_PLAYER_INDEX() == Local_519.f_18.f_41 && !func_307(16, 255))
					{
						iVar3 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(PLAYER::GET_PLAYER_INDEX());
						if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
						{
							iVar4 = iVar3;
							func_343((Local_102[iVar4 /*13*/])->f_1.f_5, 1, 0, -142743235);
						}
						func_344();
					}
					func_209(8);
				}
			}
		}
	}
}

void func_238()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;

	iVar0 = func_215(0);
	iVar1 = func_215(1);
	iVar2 = PLAYER::GET_PLAYER_PED(Local_519.f_18.f_41);
	func_151(0);
	if (Local_519.f_18.f_41 == PLAYER::GET_PLAYER_INDEX())
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		}
	}
	if (!func_148(32))
	{
		if (func_148(16))
		{
			if (!func_266(16))
			{
				func_272(16);
			}
		}
		else if (!func_266(17))
		{
			func_272(17);
			if (Local_519.f_18.f_41 == PLAYER::GET_PLAYER_INDEX())
			{
				func_345(joaat("PERSONA_HONOR_ACTION__NB_WILDMAN_FEED"), 0, 0);
			}
		}
		else if (!func_266(18))
		{
			func_272(18);
		}
		else if (func_278(func_77(Local_519.f_18.f_41), 128))
		{
			if (!func_266(2))
			{
				func_272(2);
			}
		}
	}
	if (func_330(iVar0, -1665583462, 1, 0))
	{
		TASK::_TASK_MOVE_IN_TRAFFIC(iVar0, 1f, 0, 0);
		TASK::TASK_LOOK_AT_ENTITY(iVar0, iVar2, 8000, 48, 51, 1);
	}
	fVar3 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, false, false), ENTITY::GET_ENTITY_COORDS(iVar0, false, false));
	if (fVar3 > 50f)
	{
		if (NETWORK::_0xB07D3185E11657A5(iVar1))
		{
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				func_152(func_77(Local_519.f_18.f_41));
				func_346();
			}
		}
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(iVar0, 2f);
		}
	}
	if (!func_307(64, 255))
	{
		fVar4 = BUILTIN::VDIST(Global_35, ENTITY::GET_ENTITY_COORDS(iVar0, false, false));
		if (fVar4 > 100f)
		{
			func_209(64);
		}
	}
}

void func_239()
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	bool bVar6;

	iVar1 = func_215(0);
	iVar2 = func_215(1);
	iVar4 = 255;
	iVar4 = func_333(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), &uVar0, 80f, 0, 0, 1);
	iVar3 = PLAYER::GET_PLAYER_PED(iVar4);
	func_151(0);
	if (PED::_0x9682F850056C9ADE(iVar1))
	{
		if (!func_149(24))
		{
			func_329(24, 12000, 0);
		}
	}
	else if (PED::_0x3AA24CCC0D451379(iVar1))
	{
		if (!func_149(23))
		{
			func_329(23, 12000, 0);
		}
	}
	else if (func_347(Local_519.f_18.f_38, 1, 0, 0, 0))
	{
		if (!func_149(22))
		{
			func_272(22);
		}
	}
	else if (!func_149(21))
	{
		func_272(21);
	}
	if (NETWORK::_0xB07D3185E11657A5(iVar2))
	{
		if (Local_519.f_18.f_38 == 2)
		{
			if (!func_149(3))
			{
				func_272(3);
				if (!TASK::_0x916B8E075ABC8B4E(iVar2, 1) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
				{
					TASK::_0xE7FA07624574B79A(iVar2, iVar3, 2, 1, 5000f, 1, 0, 0, 0);
				}
			}
		}
		else if (Local_519.f_18.f_38 == 1)
		{
			if (!func_149(4))
			{
				func_272(4);
				if (!TASK::_0x916B8E075ABC8B4E(iVar2, 1) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
				{
					TASK::_0xE7FA07624574B79A(iVar2, iVar3, 2, 1, 5000f, 1, 0, 0, 0);
				}
			}
		}
	}
	if (!func_316(8))
	{
		if (func_348(iVar1, Global_34))
		{
			func_345(joaat("PERSONA_HONOR_ACTION__NB_WILDMAN_KILL"), 0, 0);
			func_317(8);
		}
	}
	if (func_330(iVar1, 518218985, 1, 0) && !PED::IS_PED_INJURED(iVar1))
	{
		func_341(iVar1, ENTITY::GET_ENTITY_COORDS(iVar3, true, false), 2, 1, 1);
		TASK::_TASK_SMART_FLEE_STYLE_COORD(iVar1, ENTITY::GET_ENTITY_COORDS(iVar1, false, false), 3, 0, -1082130432, -1, 0);
	}
	if (!func_307(64, 255))
	{
		fVar5 = BUILTIN::VDIST(Global_35, ENTITY::GET_ENTITY_COORDS(iVar1, false, false));
		if (fVar5 > 100f)
		{
			func_209(64);
		}
		if (PED::IS_PED_INJURED(iVar1))
		{
			bVar6 = true;
			if (NETWORK::_0xB07D3185E11657A5(iVar2))
			{
				if (func_334(3))
				{
					if (!func_149(3))
					{
						bVar6 = false;
					}
					else if (func_270(1))
					{
						bVar6 = false;
					}
				}
				if (func_334(4))
				{
					if (!func_149(4))
					{
						bVar6 = false;
					}
					else if (func_270(1))
					{
						bVar6 = false;
					}
				}
			}
			if (bVar6)
			{
				func_209(64);
			}
		}
	}
}

int func_240(var uParam0, var uParam1)
{
	return uParam0;
}

int func_241(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return joaat("UNLOCK_GROUP__MISSION_STORY");
		case 3:
			return joaat("UNLOCK_GROUP__MISSION_PROCEDURAL");
		case 4:
			return joaat("UNLOCK_GROUP__MISSION_FETCH");
		case 5:
			return joaat("UNLOCK_GROUP__MISSION_MINIGAME");
		case 8:
			return 634321112;
		case 7:
			return joaat("UNLOCK_GROUP__MISSION_UGC");
		case 6:
			return joaat("UNLOCK_GROUP__MISSION_FREE_MODE_EVENT");
		default:
			break;
	}
	return 0;
}

int func_242(struct<2> Param0)
{
	return func_349(Param0);
}

void func_243(struct<2> Param0, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	iVar2 = -1;
	iVar3 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (iVar3 == 0)
	{
		return;
	}
	switch (func_240(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_351(func_350(Param0));
			iVar5 = func_352(iVar4);
			if (!func_353(iVar5, 0))
			{
				return;
			}
			break;
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (&Global_1100950->f_33[iVar1 /*16*/] == iVar3)
		{
			iVar2 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	if (iVar2 == -1)
	{
		return;
	}
	iVar0 = (Global_1100950->f_33[iVar2 /*16*/])->f_3.f_1;
	if (iVar0 == -1)
	{
		return;
	}
	uParam2->f_2 = Global_1111121[iVar0 /*42*/];
}

int func_244(int iParam0, int iParam1)
{
	int iVar0;
	struct<11> Var1;
	int iVar18;
	int iVar19;

	Var1.f_10 = 1106247680;
	iVar19 = 1;
	while (iVar19 <= 23)
	{
		iVar18 = iVar19;
		if (iVar18 == iParam0)
		{
			return (iVar0 + iParam1);
		}
		else
		{
			func_31(&Var1, iVar18, -1, -1, 255);
			iVar0 = (iVar0 + Var1);
		}
		iVar19++;
	}
	return -1;
}

void func_245(int iParam0)
{
	struct<6> Var0;

	Var0.f_4 = 3;
	Var0.f_5 = iParam0;
	func_354(&Var0);
}

int func_246(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > (func_355(iParam0) - 1))
	{
		return 0;
	}
	return 1;
}

var func_247(int iParam0)
{
	return iParam0 + 8;
}

void func_248(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	Var0 = { func_282(iParam1, joaat("CHARACTER_MEMORY")) };
	if (!STATS::STAT_ID_GET_INT(&Var0, &iVar2))
	{
		return;
	}
	if (!MISC::IS_BIT_SET(iVar2, iParam0))
	{
		return;
	}
	MISC::CLEAR_BIT(&iVar2, iParam0);
	if (!STATS::STAT_ID_SET_INT(&Var0, iVar2, true))
	{
	}
}

void func_249(int iParam0)
{
	struct<14> Var0;

	Var0.f_8 = iParam0;
	func_357(2, Var0, func_356(0, 8));
}

int func_250(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 3;
		case 2:
			return 35;
		case 3:
			return 55;
		default:
			break;
	}
	return 0;
}

int func_251(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			if (&Global_1186267->f_3[iParam0] * 2 <= 32)
			{
				return &Global_1186267->f_3[iParam0] * 2;
			}
			return 32;
		case 2:
			if (&Global_1186267->f_3[iParam0] * 2 <= 20)
			{
				return &Global_1186267->f_3[iParam0] * 2;
			}
			return 20;
		case 3:
			if (&Global_1186267->f_3[iParam0] * 2 <= 16)
			{
				return &Global_1186267->f_3[iParam0] * 2;
			}
			return 16;
		default:
			break;
	}
	return 0;
}

void func_252(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	if (iParam2 < iParam1)
	{
		iParam2 = (iParam0->f_2 - 1);
	}
	iVar0 = iParam1;
	while (iVar0 <= iParam2)
	{
		func_73(iParam0, iVar0);
		iVar0++;
	}
}

void func_253(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

Vector3 func_254(vector3 vParam0, vector3 vParam3, float fParam6)
{
	vector3 vVar0;

	vVar0 = { func_358(vParam0, vParam3, fParam6) };
	return vParam0 + vVar0;
}

int func_255(int iParam0)
{
	if (!func_147(iParam0))
	{
		return 0;
	}
	return (Global_1126368->f_1[iParam0 /*62*/])->f_3;
}

Vector3 func_256(int iParam0)
{
	var uVar0[1];
	int iVar2[1];
	int iVar4;
	int iVar5;

	switch (iParam0)
	{
		case 0:
			iVar2[0] = joaat("P_BENCH_LOG07X");
			iVar4 = func_359(&uVar0, &iVar2, 1, func_78(func_77(Local_519.f_18.f_41)), 1101004800 /* Float: 20f */);
			if (iVar4 > 0)
			{
				iVar5 = 0;
				while (iVar5 < iVar4)
				{
					if (ENTITY::GET_ENTITY_MODEL(&(uVar0[iVar5])) == &iVar2[0])
					{
						return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(&(uVar0[iVar5]), -3.1316f, 0.9043f, 0.2994f);
					}
					iVar5++;
				}
			}
			else
			{
				return func_176();
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_257(int iParam0)
{
	var uVar0[1];
	int iVar2[1];
	int iVar4;
	vector3 vVar5;
	int iVar8;

	switch (iParam0)
	{
		case 0:
			iVar2[0] = joaat("P_BENCH_LOG07X");
			iVar4 = func_359(&uVar0, &iVar2, 1, func_78(func_77(Local_519.f_18.f_41)), 1101004800 /* Float: 20f */);
			if (iVar4 > 0)
			{
				iVar8 = 0;
				while (iVar8 < iVar4)
				{
					if (ENTITY::GET_ENTITY_MODEL(&(uVar0[iVar8])) == &iVar2[0])
					{
						vVar5 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(&(uVar0[iVar8]), -3.1316f, 0.9043f, 0.2994f) };
						return func_360(vVar5, func_78(func_77(Local_519.f_18.f_41)));
					}
					iVar8++;
				}
			}
			else
			{
				return func_361();
			}
			break;
	}
	return 0f;
}

int func_258(var uParam0, int iParam1, vector3 vParam2, int iParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	int iVar0;

	if (bParam6)
	{
		if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			return 0;
		}
	}
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	if (NETWORK::_0x0E2C3AEE6CE603B7())
	{
		return 0;
	}
	if (!func_202(iParam1))
	{
		return 0;
	}
	iVar0 = func_362(iParam1, vParam2, iParam5, bParam8, 1, bParam6, bParam7, bParam9);
	*uParam0 = NETWORK::PED_TO_NET(iVar0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (bParam9)
		{
			WEAPON::_0x899A04AFCC725D04(iVar0, WEAPON::_0xD42514C182121C23(iParam1));
		}
		if (bParam10)
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam1));
		}
		if (bParam6)
		{
			NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
		}
		return 1;
	}
	return 0;
}

bool func_259(int iParam0, int iParam1)
{
	return func_146((Local_519.f_167.f_7[iParam0 /*11*/])->f_2, iParam1);
}

int func_260(int iParam0, int iParam1, bool bParam2)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	int iVar9;

	fVar0 = 0f;
	vVar1 = { 0f, 0f, 0f };
	vVar4 = { Local_519.f_15 };
	iVar7 = 0;
	iVar8 = func_275(iParam0);
	iVar9 = func_363(iParam0);
	*bParam2 = 0;
	if (iVar8 != 0)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_0.f_99[iParam0])))
		{
			iVar9 = func_363(iParam0);
			fVar0 = func_364(iParam0);
			if (!func_146((Local_519.f_167.f_7[iParam0 /*11*/])->f_2, 2))
			{
				vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar4, 0f, func_365(iParam0)) };
			}
			else
			{
				vVar1 = { func_365(iParam0) };
			}
			if (!func_258(Local_0.f_99[iParam0], iVar8, vVar1, fVar0, 1, 0, (iVar9 == 0 || PED::_0x772A1969F649E902(iVar8)), 1, 1))
			{
				*iParam1 = 1;
			}
			else
			{
				iVar7 = NETWORK::NET_TO_PED(&(Local_0.f_99[iParam0]));
				if (ENTITY::DOES_ENTITY_EXIST(iVar7))
				{
					ENTITY::_0xA91E6CF94404E8C9(iVar7);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar7, true);
					PED::SET_PED_CONFIG_FLAG(iVar7, 178, false);
					if (iVar9 != 0)
					{
						PED::_0x1902C4CFCC5BE57C(iVar7, iVar9);
						PED::_0xCC8CA3E88256E58F(iVar7, func_259(iParam0, 1), true, true, true, false);
					}
					else if (PED::_0x772A1969F649E902(iVar8))
					{
						if (PED::_0xA0BC8FAED8CFEB3C(iVar7))
						{
						}
						func_366(iVar7, 1);
					}
					*bParam2 = 1;
					return 0;
				}
				else
				{
					*iParam1 = 1;
				}
			}
		}
		else if (PED::_0xA0BC8FAED8CFEB3C(NETWORK::NET_TO_PED(&(Local_0.f_99[iParam0]))))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_261()
{
	return (func_104(64) || func_103(64, 255));
}

void func_262(int iParam0)
{
	Local_0.f_7.f_5 = iParam0;
}

void func_263(int iParam0)
{
	if (Local_0.f_7 != iParam0)
	{
		Local_0.f_7 = iParam0;
	}
}

bool func_264(int iParam0)
{
	return func_146(Local_0.f_7.f_1, iParam0);
}

void func_265(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			return;
		}
	}
	func_198(&(Local_0.f_7.f_1), iParam0);
}

bool func_266(int iParam0)
{
	return MISC::IS_BIT_SET(Local_0.f_7.f_6, iParam0);
}

bool func_267(var uParam0)
{
	return func_367(*uParam0, 1);
}

void func_268(int iParam0)
{
	func_368(Local_0.f_7.f_7[iParam0 /*3*/]);
}

int func_269()
{
	int iVar0;
	int iVar1;

	if (!func_148(4))
	{
		return 255;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
		{
			if (func_146((Local_102[iVar0 /*13*/])->f_1, 4))
			{
				if ((Local_102[iVar0 /*13*/])->f_1.f_6 != -1)
				{
					return NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1);
				}
			}
		}
		iVar0++;
	}
	return 255;
}

bool func_270(int iParam0)
{
	return AUDIO::_0xA2CAC9DEF0195E6F(iParam0);
}

int func_271(var uParam0, int iParam1)
{
	if (!func_267(uParam0))
	{
		func_369(uParam0, 0);
		return 0;
	}
	if (func_370(uParam0, iParam1))
	{
		func_371(uParam0);
		return 1;
	}
	return 0;
}

void func_272(int iParam0)
{
	if (func_320(func_319(iParam0)))
	{
		return;
	}
	else
	{
		func_372(func_319(iParam0));
	}
}

bool func_273(int iParam0)
{
	return func_146(Local_519.f_18.f_145, iParam0);
}

void func_274(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_275(int iParam0)
{
	return (Local_519.f_167.f_7[iParam0 /*11*/])->f_3;
}

bool func_276(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	Var0 = { func_282(iParam1, joaat("CHARACTER_MEMORY")) };
	if (!STATS::STAT_ID_GET_INT(&Var0, &iVar2))
	{
		return false;
	}
	return MISC::IS_BIT_SET(iVar2, iParam0);
}

int func_277(int iParam0, var uParam1)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (!func_147(iParam0))
	{
		return 0;
	}
	vVar0 = { func_78(iParam0) };
	iVar3 = VOLUME::_CREATE_VOLUME_SPHERE(vVar0, 0f, 0f, 0f, 100f, 100f, 100f);
	iVar4 = ITEMSET::CREATE_ITEMSET(false);
	iVar5 = ENTITY::_0x84CCF9A12942C83D(iVar3, iVar4, 1, 1, 0, "iCampFollowerCamp");
	iVar7 = 0;
	iVar7 = 0;
	while (iVar7 <= (iVar5 - 1))
	{
		iVar6 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar7, iVar4));
		if (ENTITY::DOES_ENTITY_EXIST(iVar6) && DECORATOR::DECOR_GET_INT(iVar6, "iCampFollowerCamp") == iParam0)
		{
			*uParam1 = iVar6;
		}
		else
		{
			iVar7++;
		}
	}
	VOLUME::_DELETE_VOLUME(iVar3);
	ITEMSET::DESTROY_ITEMSET(iVar4);
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return 0;
	}
	return 1;
}

int func_278(int iParam0, int iParam1)
{
	if (!func_147(iParam0))
	{
		return 0;
	}
	return func_178(((*Global_1125276)[iParam0 /*27*/])->f_7, iParam1);
}

void func_279(int iParam0)
{
	struct<14> Var0;

	Var0.f_8 = iParam0;
	func_357(1, Var0, func_356(0, 8));
}

void func_280(int iParam0, int iParam1, bool bParam2)
{
	char* sVar0;
	int iVar1;

	if (!MISC::IS_BIT_SET(Local_519.f_167.f_5, iParam0))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_0.f_99[iParam0])))
		{
			iVar1 = NETWORK::NET_TO_PED(&(Local_0.f_99[iParam0]));
			Local_519.f_167.f_7[iParam0 /*11*/] = iVar1;
			(Local_102[iParam1 /*13*/])->f_8.f_2[iParam0] = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false));
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				EVENT::_0xBB1E41DD3D3C6250(iVar1, "MpRandomEvent", 1);
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
				{
					func_373(iVar1, 1f, 0);
				}
				sVar0 = func_374(iParam0);
				if (!MISC::_0x375F5870A7B8BEC1(sVar0))
				{
					func_375(iVar1, sVar0, 1);
				}
				MISC::SET_BIT(&(Local_519.f_167.f_5), iParam0);
				if (bParam2)
				{
					func_376(iParam0);
				}
			}
		}
	}
}

bool func_281(var uParam0, int iParam1, char* sParam2)
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

struct<2> func_282(int iParam0, int iParam1)
{
	struct<2> Var0;
	struct<2> Var2;
	int iVar4;

	if (iParam1 == 0)
	{
		return Var2;
	}
	iVar4 = func_377(iParam0);
	if (iVar4 == 0)
	{
		return Var2;
	}
	Var0 = { func_378(iParam1, iVar4) };
	if (!STATS::_STAT_ID_IS_VALID(&Var0))
	{
		return Var2;
	}
	return Var0;
}

void func_283()
{
	Local_519.f_167.f_6 = 0;
	Local_519.f_167.f_2 = 0;
	Local_519.f_167.f_1 = -1;
}

void func_284(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		Local_519.f_167.f_2 = (Local_519.f_167.f_2 || (Local_102[iParam0 /*13*/])->f_8);
		Local_519.f_167.f_1 = (Local_519.f_167.f_1 && (Local_102[iParam0 /*13*/])->f_8);
		Local_519.f_167.f_6 = (Local_519.f_167.f_6 || (Local_102[iParam0 /*13*/])->f_8.f_1);
	}
}

int func_285(int iParam0)
{
	return iParam0;
}

int func_286(int iParam0, int iParam1, int iParam2)
{
	float fVar0;

	fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), ENTITY::GET_ENTITY_COORDS(iParam1, true, false));
	(Local_102[NETWORK::PARTICIPANT_ID_TO_INT() /*13*/])->f_8.f_2[iParam2] = fVar0;
	if (fVar0 > (Local_519.f_167.f_7[iParam2 /*11*/])->f_9)
	{
		return 0;
	}
	return 1;
}

void func_287(var uParam0)
{
	func_379(uParam0, 0f);
}

bool func_288(var uParam0)
{
	return func_367(*uParam0, 1);
}

int func_289(var uParam0, float fParam1)
{
	if (!func_288(uParam0))
	{
		return 0;
	}
	if (func_380(uParam0) > fParam1)
	{
		return 1;
	}
	return 0;
}

void func_290(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_291(int iParam0)
{
	return 1;
}

void func_292(int iParam0, int iParam1)
{
	func_198(&((Local_519.f_167.f_7[iParam0 /*11*/])->f_2), iParam1);
}

bool func_293(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	return func_146((Local_102[iParam1 /*13*/])->f_8, iParam0);
}

void func_294(int iParam0)
{
	func_179(&((Local_102[NETWORK::PARTICIPANT_ID_TO_INT() /*13*/])->f_8), iParam0);
}

void func_295(int iParam0)
{
	func_198(&((Local_102[NETWORK::PARTICIPANT_ID_TO_INT() /*13*/])->f_8), iParam0);
}

struct<10> func_296(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<10> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	if (iParam0 != 0 && iParam0 != -1591664384)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0)
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
	if (iParam6 != -1)
	{
		Var0.f_6 = iParam6;
	}
	if (iParam7 != 0)
	{
		Var0.f_8 = iParam7;
	}
	if (iParam8 != 0)
	{
		Var0.f_7 = iParam8;
	}
	return Var0;
}

int func_297(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, int iParam12)
{
	*uParam10 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&uParam0, iParam11, iParam12);
	if (*uParam10 >= 0)
	{
		return 1;
	}
	return 0;
}

bool func_298(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_381(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_382(iParam0);
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
			if (!func_383(iParam0, 1))
			{
				return false;
			}
			break;
		case joaat("CLOTHING"):
			if (func_384(iParam0))
			{
				return true;
			}
			break;
	}
	return func_385(iParam0, 0, 0, 0) >= iParam1;
}

int func_299(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 < 0)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= ITEMDATABASE::_0xD389A2549C4EFB30(iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	if (!ITEMDATABASE::_0x8750F69A720C2E41(iParam1, iParam0, &iVar0))
	{
		return 0;
	}
	return iVar0;
}

int func_300(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case joaat("CONSUMABLE_BIG_GAME_MEAT_WILD_MINT_COOKED"):
			iVar0 = 48;
			break;
		case joaat("CONSUMABLE_BIG_GAME_MEAT_OREGANO_COOKED"):
			iVar0 = 47;
			break;
		case joaat("CONSUMABLE_BIG_GAME_MEAT_THYME_COOKED"):
			iVar0 = 46;
			break;
		case joaat("CONSUMABLE_BIG_GAME_MEAT_COOKED"):
			iVar0 = 45;
			break;
		case joaat("CONSUMABLE_EXOTIC_BIRD_WILD_MINT_COOKED"):
			iVar0 = 44;
			break;
		case joaat("CONSUMABLE_GAME_MEAT_WILD_MINT_COOKED"):
			iVar0 = 43;
			break;
		case joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"):
			iVar0 = 42;
			break;
		case joaat("CONSUMABLE_PRIME_BEEF_WILD_MINT_COOKED"):
			iVar0 = 41;
			break;
		case joaat("CONSUMABLE_SUCCULENT_FISH_WILD_MINT_COOKED"):
			iVar0 = 40;
			break;
		case joaat("CONSUMABLE_MATURE_VENISON_WILD_MINT_COOKED"):
			iVar0 = 39;
			break;
		case joaat("CONSUMABLE_EXOTIC_BIRD_OREGANO_COOKED"):
			iVar0 = 38;
			break;
		case joaat("CONSUMABLE_GAME_MEAT_OREGANO_COOKED"):
			iVar0 = 37;
			break;
		case joaat("CONSUMABLE_TENDER_PORK_OREGANO_COOKED"):
			iVar0 = 36;
			break;
		case joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"):
			iVar0 = 35;
			break;
		case joaat("CONSUMABLE_SUCCULENT_FISH_OREGANO_COOKED"):
			iVar0 = 34;
			break;
		case joaat("CONSUMABLE_MATURE_VENISON_OREGANO_COOKED"):
			iVar0 = 33;
			break;
		case joaat("CONSUMABLE_EXOTIC_BIRD_THYME_COOKED"):
			iVar0 = 32;
			break;
		case joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"):
			iVar0 = 31;
			break;
		case joaat("CONSUMABLE_TENDER_PORK_THYME_COOKED"):
			iVar0 = 30;
			break;
		case joaat("CONSUMABLE_PRIME_BEEF_THYME_COOKED"):
			iVar0 = 29;
			break;
		case joaat("CONSUMABLE_SUCCULENT_FISH_THYME_COOKED"):
			iVar0 = 28;
			break;
		case joaat("CONSUMABLE_MATURE_VENISON_THYME_COOKED"):
			iVar0 = 27;
			break;
		case joaat("CONSUMABLE_CRUSTACEAN_MEAT_MINT_COOKED"):
			iVar0 = 26;
			break;
		case joaat("CONSUMABLE_FLAKEY_FISH_WILD_MINT_COOKED"):
			iVar0 = 25;
			break;
		case joaat("CONSUMABLE_GRISTLY_MUTTON_WILD_MINT_COOKED"):
			iVar0 = 24;
			break;
		case joaat("CONSUMABLE_PLUMP_BIRD_WILD_MINT_COOKED"):
			iVar0 = 23;
			break;
		case joaat("CONSUMABLE_CRUSTACEAN_MEAT_OREGANO_COOKED"):
			iVar0 = 22;
			break;
		case joaat("CONSUMABLE_FLAKEY_FISH_OREGANO_COOKED"):
			iVar0 = 21;
			break;
		case joaat("CONSUMABLE_GRISTLY_MUTTON_OREGANO_COOKED"):
			iVar0 = 20;
			break;
		case joaat("CONSUMABLE_PLUMP_BIRD_OREGANO_COOKED"):
			iVar0 = 19;
			break;
		case joaat("CONSUMABLE_CRUSTACEAN_MEAT_THYME_COOKED"):
			iVar0 = 18;
			break;
		case joaat("CONSUMABLE_FLAKEY_FISH_THYME_COOKED"):
			iVar0 = 17;
			break;
		case joaat("CONSUMABLE_GRISTLY_MUTTON_THYME_COOKED"):
			iVar0 = 16;
			break;
		case joaat("CONSUMABLE_PLUMP_BIRD_THYME_COOKED"):
			iVar0 = 15;
			break;
		case joaat("CONSUMABLE_EXOTIC_BIRD_COOKED"):
			iVar0 = 14;
			break;
		case joaat("CONSUMABLE_GAME_MEAT_COOKED"):
			iVar0 = 13;
			break;
		case joaat("CONSUMABLE_MATURE_VENISON_COOKED"):
			iVar0 = 12;
			break;
		case joaat("CONSUMABLE_SUCCULENT_FISH_COOKED"):
			iVar0 = 11;
			break;
		case joaat("CONSUMABLE_PRIME_BEEF_COOKED"):
			iVar0 = 10;
			break;
		case joaat("CONSUMABLE_TENDER_PORK_COOKED"):
			iVar0 = 9;
			break;
		case joaat("CONSUMABLE_GRISTLY_MUTTON_COOKED"):
			iVar0 = 8;
			break;
		case joaat("CONSUMABLE_CRUSTACEAN_MEAT_COOKED"):
			iVar0 = 7;
			break;
		case joaat("CONSUMABLE_PLUMP_BIRD_COOKED"):
			iVar0 = 6;
			break;
		case joaat("CONSUMABLE_FLAKEY_FISH_COOKED"):
			iVar0 = 5;
			break;
		case joaat("CONSUMABLE_GAMEY_BIRD_COOKED"):
			iVar0 = 4;
			break;
		case joaat("CONSUMABLE_STRING_MEAT_COOKED"):
			iVar0 = 3;
			break;
		case joaat("CONSUMABLE_GRITTY_FISH_MEAT_COOKED"):
			iVar0 = 2;
			break;
		case joaat("CONSUMABLE_HERPTILE_MEAT_COOKED"):
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_301(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!ITEMDATABASE::_0xCBB7B6EDFA933ADE(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_302(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_386(uParam2, 1, iVar0);
	}
	if (!Global_1939178->f_6 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_12 = fParam5;
		}
		else
		{
			uParam2->f_12 = BUILTIN::VDIST(Global_35, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!uParam2->f_1 & 128 != 0)
		{
			if (func_387(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_388(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1939178->f_21)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_389(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_388(iParam0, uParam2, *uParam3);
					return 1;
				}
				else if (func_390(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_388(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_391(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_388(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1939178->f_20 && func_392(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_388(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1939178->f_19)
		{
			if (func_393(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_394(Global_34, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_388(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_395(Global_34, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_388(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1939178->f_23) < 300)
			{
				if (func_396(Global_34, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_388(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			else if (func_396(Global_34, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_388(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1939178->f_33 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_397(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_388(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1939178->f_19 || uParam2->f_12 < 20f)
			{
				if (func_398(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_388(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1939178->f_24 || Global_1939178->f_25)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_399(uParam2, 4000))
				{
					if ((func_400(iParam0, Global_1939178->f_35, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_401(uParam2, iParam0)) && func_402(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_388(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_400(iParam0, Global_1939178->f_35, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_401(uParam2, iParam0)) && func_402(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_388(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			else if (Global_1939178->f_34 == 0)
			{
				if (Global_1939178->f_35 != 0)
				{
					if (func_403(iParam0, Global_1939178->f_35))
					{
						func_404();
						*uParam3 = 2;
						func_388(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_405(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_406() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_404();
						*uParam3 = 2;
						func_388(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (Global_1939178->f_36 != 0)
			{
				if (func_407())
				{
					if (func_403(iParam0, Global_1939178->f_36))
					{
						func_404();
						*uParam3 = 2;
						func_388(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_408(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_388(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1939178->f_50)
		{
			if (*uParam2 & -2147483648 != 0)
			{
				if (func_410(func_409(PLAYER::PLAYER_ID()), ENTITY::GET_ENTITY_COORDS(iParam0, true, false)) <= uParam2->f_30)
				{
					if (func_411(PLAYER::PLAYER_PED_ID(), iParam0, 1060437492 /* Float: 0.707f */) == 0)
					{
						*uParam3 = 1048576;
						func_388(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_28)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_412(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_388(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_413(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_388(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_414(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_388(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_415(uParam2, 4000))
				{
					if (func_416(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_388(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_20)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_417(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_388(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_418(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_388(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
	}
	return 0;
}

void func_303(bool bParam0)
{
	int iVar0;

	if (!func_103(64, 255))
	{
		iVar0 = func_244(Local_519.f_1, Local_519.f_2);
		func_419(iVar0);
		if (!func_103(1024, 255))
		{
			func_420(Local_519.f_1);
			func_122(1024);
		}
		func_421(iVar0);
		if (bParam0)
		{
			func_306(Local_519.f_1, Local_519.f_4);
		}
		func_122(64);
	}
}

void func_304(int iParam0, bool bParam1, int iParam2)
{
	AUDIO::_0x36559148B78853B3(iParam0, bParam1, iParam2);
}

void func_305()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			(Local_102[iVar0 /*13*/])->f_1.f_1 = 0;
		}
		iVar0++;
	}
}

void func_306(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_246(iParam0, iParam1))
	{
		return;
	}
	iVar0 = func_247(iParam1);
	func_422(iVar0, iParam0);
}

int func_307(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1)))
	{
		return func_146((Local_102[iParam1 /*13*/])->f_1, iParam0);
	}
	return 0;
}

void func_308(int iParam0)
{
	func_198(&((Local_102[NETWORK::PARTICIPANT_ID_TO_INT() /*13*/])->f_1), iParam0);
}

void func_309(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(PLAYER::GET_PLAYER_INDEX());
	iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(Local_519.f_18.f_41);
	iVar2 = iVar0;
	iVar3 = iVar1;
	switch (iParam0)
	{
		case 0:
			func_314();
			break;
		case 1:
			if (Local_519.f_18.f_41 == PLAYER::GET_PLAYER_INDEX())
			{
				func_423(0, "NB_WILD_MAN_GIVE_MEAT", joaat("INPUT_INTERACT_LOCKON_POS"), 3, 0);
				func_423(1, "NB_WILD_MAN_LEAVE_ILO", joaat("INPUT_INTERACT_LOCKON_NEG"), 3, 0);
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
				{
					func_425(&(Local_519.f_18.f_142[0]), "ITEM_TITHE", func_424((Local_102[iVar2 /*13*/])->f_1.f_5), 1);
				}
				func_426(0);
			}
			break;
		case 2:
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
			{
			}
			if (Local_519.f_18.f_41 == PLAYER::GET_PLAYER_INDEX())
			{
				func_423(0, "NB_WILD_MAN_NO_MEAT", joaat("INPUT_INTERACT_LOCKON_POS"), 3, 0);
				func_423(1, "NB_WILD_MAN_LEAVE_ILO", joaat("INPUT_INTERACT_LOCKON_NEG"), 3, 0);
				func_427(0, 0);
				func_427(1, 1);
				if (func_428(13) < 1)
				{
					func_429("NB_WILDMAN_GIVE_HELP", 10000, 0, 0, 0, 1);
					func_430(13);
				}
			}
			break;
		case 3:
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
			{
			}
			if (Local_519.f_18.f_41 == PLAYER::GET_PLAYER_INDEX() && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
			{
				if ((Local_102[iVar2 /*13*/])->f_1.f_5 != 0)
				{
					func_423(0, "NB_WILD_MAN_GIVE_MEAT", joaat("INPUT_INTERACT_LOCKON_POS"), 3, 0);
					func_423(1, "NB_WILD_MAN_LEAVE_ILO", joaat("INPUT_INTERACT_LOCKON_NEG"), 3, 0);
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
					{
						func_425(&(Local_519.f_18.f_142[0]), "ITEM_TITHE", func_424((Local_102[iVar3 /*13*/])->f_1.f_5), 1);
					}
					func_427(0, 0);
					func_427(1, 1);
				}
			}
			break;
		case 4:
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
			{
			}
			if (Local_519.f_18.f_41 == PLAYER::GET_PLAYER_INDEX() && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
			{
				if ((Local_102[iVar2 /*13*/])->f_1.f_5 != 0)
				{
					func_423(0, "NB_WILD_MAN_GIVE_MEAT", joaat("INPUT_INTERACT_LOCKON_POS"), 3, 0);
					func_423(1, "NB_WILD_MAN_LEAVE_ILO", joaat("INPUT_INTERACT_LOCKON_NEG"), 3, 0);
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
					{
						func_425(&(Local_519.f_18.f_142[0]), "ITEM_TITHE", func_424((Local_102[iVar3 /*13*/])->f_1.f_5), 1);
					}
					func_426(1);
				}
			}
			break;
	}
}

int func_310(int iParam0)
{
	bool bVar0;

	if (func_431(iParam0))
	{
		bVar0 = true;
	}
	if (PED::_0x34D6AC1157C8226C(iParam0, joaat("PROP_PLAYER_SEAT_CHAIR_DYNAMIC")))
	{
		bVar0 = true;
	}
	if (PED::_0x34D6AC1157C8226C(iParam0, joaat("PROP_PLAYER_SEAT_CHAIR_GENERIC")))
	{
		bVar0 = true;
	}
	if (PED::_0x34D6AC1157C8226C(iParam0, joaat("PROP_PLAYER_SEAT_CHAIR_PLAYER_CAMP")))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		return 1;
	}
	return 0;
}

bool func_311(int iParam0, float fParam1, int iParam2, bool bParam3)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (iParam2 == -1)
	{
		iParam2 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	fVar0 = &(Local_102[iParam2 /*13*/])->f_8.f_2[iParam0];
	if (fVar0 < 0f)
	{
		if (bParam3)
		{
			iVar1 = func_432(iParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam2));
				if (NETWORK::_0x255A5EF65EDA9167(iVar2))
				{
					fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), func_409(iVar2));
					if (fVar0 < 0f)
					{
						return false;
					}
					(Local_102[iParam2 /*13*/])->f_8.f_2[iParam0] = fVar0;
				}
			}
		}
		return false;
	}
	return fVar0 <= fParam1;
}

int func_312(int iParam0)
{
	return &(Local_0.f_7.f_2[iParam0]);
}

int func_313(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0) || (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
		{
			if (func_433(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_314()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_434(&(Local_519.f_18.f_142[iVar0])))
		{
			func_435(Local_519.f_18.f_142[iVar0], 1, 1);
		}
		iVar0++;
	}
}

int func_315(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
	{
		if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar0, iParam1, iParam2))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar0))
				{
					return ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0) == func_215(iParam0);
				}
			}
		}
	}
	return 0;
}

bool func_316(int iParam0)
{
	return func_146(Local_519.f_18.f_6, iParam0);
}

void func_317(int iParam0)
{
	func_179(&(Local_519.f_18.f_6), iParam0);
}

void func_318(int iParam0)
{
	func_198(&(Local_519.f_18.f_6), iParam0);
}

int func_319(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 4;
		case 3:
			return 8;
		case 4:
			return 16;
		case 5:
			return 32;
		case 6:
			return 64;
		case 7:
			return 128;
		case 8:
			return 256;
		case 9:
			return 512;
		case 10:
			return 1024;
		case 11:
			return 2048;
		case 12:
			return 4096;
		case 13:
			return 8192;
		case 14:
			return 16384;
		case 15:
			return 32768;
		case 16:
			return 65536;
		case 17:
			return 131072;
		case 18:
			return 262144;
		case 19:
			return 524288;
		case 20:
			return 16777216;
		case 21:
			return 1048576;
		case 22:
			return 2097152;
		case 23:
			return 4194304;
		case 24:
			return 8388608;
		case 25:
			return 33554432;
		case 26:
			return 67108864;
		default:
			break;
	}
	return 1;
}

bool func_320(int iParam0)
{
	return func_146(Local_519.f_18.f_148, iParam0);
}

int func_321(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 6:
		case 7:
			if (!func_332(func_331(0)) && !func_332(func_331(1)))
			{
				iVar0 = 1;
			}
			break;
		case 24:
			if ((!func_149(23) && !func_149(21)) && !func_149(22))
			{
				iVar0 = 1;
			}
			break;
		case 23:
			if ((!func_149(24) && !func_149(21)) && !func_149(22))
			{
				iVar0 = 1;
			}
			break;
		case 21:
			if ((!func_149(23) && !func_149(24)) && !func_149(22))
			{
				iVar0 = 1;
			}
			break;
		case 22:
			if ((!func_149(23) && !func_149(21)) && !func_149(24))
			{
				iVar0 = 1;
			}
			break;
	}
	return iVar0;
}

void func_322(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 24)
	{
		if (iVar0 != iParam0)
		{
			if (func_436(func_319(iVar0), 255))
			{
				func_437(func_319(iVar0));
			}
		}
		iVar0++;
	}
}

int func_323(int iParam0)
{
	var uVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4[24];

	if (func_438(iParam0))
	{
		sVar1 = func_331(iParam0);
		iVar2 = PLAYER::GET_PLAYER_PED(Local_519.f_18.f_41);
		iVar3 = func_215(0);
		uVar0 = func_439(iVar2, sVar1, 291934926, iVar3, 1, 0, 0, 1);
		return uVar0;
	}
	else if (!func_270(1))
	{
		StringCopy(&cVar4, func_331(iParam0), 24);
		uVar0 = func_440(&(Local_519.f_18.f_43), cVar4, 0, -1, 0, 0);
		return uVar0;
	}
	return 0;
}

int func_324(int iParam0)
{
	bool bVar0;
	int iVar1;
	float fVar2;

	bVar0 = false;
	switch (iParam0)
	{
		case 5:
		case 6:
			bVar0 = true;
			break;
	}
	if (bVar0)
	{
		iVar1 = func_215(0);
		func_333(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), &fVar2, 1203982208 /* Float: 99999f */, 0, 0, 0);
		if (fVar2 > 7f)
		{
			return 1;
		}
	}
	return 0;
}

void func_325(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	}
	MAP::_TRIGGER_SONAR_BLIP_2(iParam0, iParam1);
}

void func_326(int iParam0)
{
	MISC::SET_BIT(&(Local_519.f_18.f_42), iParam0);
}

void func_327(int iParam0)
{
	MISC::SET_BIT(&(Local_0.f_7.f_6), iParam0);
}

void func_328()
{
	int iVar0;

	if (!func_103(32, 255))
	{
		func_441(Local_519.f_1, Local_519.f_3);
		if (!func_103(1024, 255))
		{
			func_420(Local_519.f_1);
			func_122(1024);
		}
		iVar0 = func_244(Local_519.f_1, Local_519.f_2);
		func_419(iVar0);
		func_421(iVar0);
		func_118(2);
		func_442(Local_519.f_9);
		func_443(Local_519.f_1);
		func_122(32);
	}
}

void func_329(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0[24];

	if (func_370(Local_0.f_7.f_7[iParam0 /*3*/], iParam1))
	{
		if (!func_266(iParam0))
		{
			func_272(iParam0);
		}
		else
		{
			func_371(Local_0.f_7.f_7[iParam0 /*3*/]);
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				func_444(iParam0);
			}
			func_445(iParam0);
			func_446(func_319(iParam0));
			if (bParam2)
			{
				StringCopy(&cVar0, func_331(iParam0), 24);
				AUDIO::_0xEF51242E35242B47(&cVar0);
			}
		}
	}
	else if (!func_267(Local_0.f_7.f_7[iParam0 /*3*/]))
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_447(Local_0.f_7.f_7[iParam0 /*3*/], 0);
		}
	}
	if (func_267(Local_0.f_7.f_7[iParam0 /*3*/]))
	{
	}
}

int func_330(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (bParam2 && !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		return 0;
	}
	if (!bParam3 && func_448(iParam0, iParam1))
	{
		return 0;
	}
	if (iParam1 == -1794415470 && PED::IS_PED_BEING_JACKED(iParam0))
	{
		return 0;
	}
	return 1;
}

char* func_331(int iParam0)
{
	char* sVar0;
	char cVar1[64];

	StringCopy(&cVar1, "OREWM_", 64);
	StringConCat(&cVar1, func_449(iParam0), 64);
	switch (iParam0)
	{
		case 0:
			sVar0 = "_CALLOUT";
			break;
		case 1:
			sVar0 = "_IDLE";
			break;
		case 2:
			sVar0 = "_CRIPPS";
			break;
		case 3:
			sVar0 = "_CATTCK1";
			break;
		case 4:
			sVar0 = "_CATTCK2";
			break;
		case 5:
			sVar0 = "_SIDLE";
			break;
		case 6:
			sVar0 = "_CALL";
			break;
		case 7:
			sVar0 = "_PREANT";
			break;
		case 8:
			sVar0 = "_NAPPRCH";
			break;
		case 9:
			sVar0 = "_APPRCH";
			break;
		case 10:
			sVar0 = "_HELP";
			break;
		case 11:
			sVar0 = "_RAW";
			break;
		case 12:
			sVar0 = "_COOKS";
			break;
		case 13:
			sVar0 = "_WAIT1";
			break;
		case 14:
			sVar0 = "_WAIT2";
			break;
		case 15:
			sVar0 = "_DECLINE";
			break;
		case 16:
			sVar0 = "_LEAVES";
			break;
		case 17:
			sVar0 = "_THANKS";
			break;
		case 18:
			sVar0 = "_ITLEAVE";
			break;
		case 19:
			sVar0 = "_OWNER";
			break;
		case 20:
			sVar0 = "_PASIDLE";
			break;
		case 21:
			sVar0 = "_ANTG1";
			break;
		case 22:
			sVar0 = "_ANTG2";
			break;
		case 23:
			sVar0 = "_HOGTIE1";
			break;
		case 24:
			sVar0 = "_HOGTIE2";
			break;
		case 25:
			sVar0 = "SILENT_GENERIC_AGREE";
			break;
		case 26:
			sVar0 = "SILENT_GENERIC_DISAGREE";
			break;
		case -1:
			return "";
	}
	StringConCat(&cVar1, sVar0, 64);
	if (func_438(iParam0))
	{
		StringCopy(&cVar1, sVar0, 64);
	}
	return func_450(cVar1);
}

int func_332(char* sParam0)
{
	if (AUDIO::_0xD89504D9D7D5057D(sParam0) && AUDIO::_0x1ECC76792F661CF5(sParam0))
	{
		return 1;
	}
	return 0;
}

int func_333(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	fVar1 = iParam4;
	iVar3 = 255;
	*iParam3 = iParam4;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar2))
		{
		}
		else if (bParam7 && !func_451(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar2), 1, 1))
		{
		}
		else
		{
			iVar4 = PLAYER::GET_PLAYER_PED(iVar2);
			if ((iParam5 == 0 || iParam6 == 0) || PED::GET_RELATIONSHIP_BETWEEN_PEDS(iParam6, iVar4) == iParam5)
			{
				fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar4, false, false), vParam0);
				if (fVar1 < *iParam3)
				{
					iVar3 = iVar2;
					*iParam3 = fVar1;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

bool func_334(int iParam0)
{
	return func_320(func_319(iParam0));
}

void func_335(int iParam0)
{
	if (func_320(func_319(iParam0)))
	{
		func_437(func_319(iParam0));
	}
}

int func_336(int iParam0)
{
	if (!func_267(Local_0.f_7.f_7[iParam0 /*3*/]))
	{
		return 0;
	}
	return func_452(Local_0.f_7.f_7[iParam0 /*3*/]);
}

void func_337(int iParam0, int iParam1)
{
	if (!func_453(255))
	{
		func_151(iParam0);
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(&(Local_519.f_18.f_1[iParam0 /*2*/])))
	{
		Local_519.f_18.f_1[iParam0 /*2*/] = MAP::_BLIP_ADD_FOR_ENTITY(-89429847, func_215(0));
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(&(Local_519.f_18.f_1[iParam0 /*2*/]), "NB_WILDMAN_BLIP_NAME");
	}
	if (iParam1 != 0)
	{
		MAP::_0x662D364ABF16DE2F(&(Local_519.f_18.f_1[iParam0 /*2*/]), 942020339);
	}
}

int func_338()
{
	int iVar0;

	if (func_307(2, 255))
	{
		if (func_307(4, 255))
		{
			return (Local_102[NETWORK::PARTICIPANT_ID_TO_INT() /*13*/])->f_1.f_6;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (func_454(&(Local_519.f_18.f_142[iVar0]), 1))
			{
				(Local_102[NETWORK::PARTICIPANT_ID_TO_INT() /*13*/])->f_1.f_6 = iVar0;
				func_209(4);
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

bool func_339(int iParam0)
{
	return (Global_1956172 && iParam0) != 0;
}

void func_340()
{
	if (!func_63(2))
	{
		return;
	}
	func_118(8);
}

void func_341(int iParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6)
{
	if (!func_455(iParam0, 0))
	{
		return;
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0))
	{
		return;
	}
	if (iParam5 && PED::_0xF9331B3A314EB49D(iParam0))
	{
		PED::_0xF1C03A5352243A30(iParam0);
		return;
	}
	if (func_141(vParam1))
	{
	}
	switch (iParam4)
	{
		case 3:
			PED::_0x802092B07E3B1EEA(iParam0, vParam1, iParam6);
			break;
		case 5:
			PED::_0x463803429297117C(iParam0, vParam1, iParam6, 0);
			break;
		case 6:
			PED::_0x62FDAD5E01D2DD47(iParam0, vParam1, iParam6, 0);
			break;
		case 4:
			PED::_0xEC6935EBE0847B90(iParam0, vParam1);
			break;
		case 2:
			PED::_0xEEED8FAFEC331A70(iParam0, vParam1, iParam6);
			break;
		case 1:
			PED::_0xF1C03A5352243A30(iParam0);
			break;
		case 7:
			PED::_0xA3A9299C4F2ADB98(iParam0);
			break;
		default:
			PED::_0xA3A9299C4F2ADB98(iParam0);
			break;
	}
}

int func_342(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam1 == 2104565373 && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iParam0))
			{
				return 1;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1) == 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_343(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	struct<5> Var7;

	if (!func_381(iParam0, 0))
	{
		return 0;
	}
	if (iParam3 == -142743235)
	{
		if (func_456(iParam0))
		{
			iParam3 = 562618531;
		}
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_457(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return 0;
		}
		WEAPON::_0xB6CFEC32E3742779(Global_34, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_458(iParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
		}
		return 0;
	}
	if (!func_298(iParam0, 1))
	{
		return 0;
	}
	Var5 = { func_459(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((func_385(iParam0, 0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((func_385(iParam0, 0, 0, 0) - iParam1) < 0)
		{
			func_343(iParam0, func_385(iParam0, 0, 0, 0), bParam2, iParam3);
			return 0;
		}
	}
	if (func_382(iParam0) == joaat("WEAPON"))
	{
		if (!func_460(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_461(iParam0, iParam1, iParam3, bParam2, 0))
	{
		return 0;
	}
	else
	{
		Var7 = { func_462(iParam0, 0, 0) };
		if (func_463(0) && Var7.f_4 == 1084182731)
		{
			func_464(1, 0, 0);
		}
	}
	if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
	{
		Global_1939067->f_21 = 0;
	}
	if (!func_463(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_458(iParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
	}
	return 1;
}

void func_344()
{
	if (!func_63(8))
	{
		return;
	}
	func_118(16);
}

void func_345(int iParam0, bool bParam1, bool bParam2)
{
	struct<7> Var0;
	var uVar7;
	int iVar8;

	if (func_28() != 0)
	{
		return;
	}
	if (func_465())
	{
		return;
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (!bParam1)
	{
		if (!&Global_1132968->f_4641.f_2[func_466(iParam0, 1) /*4*/])
		{
			return;
		}
	}
	(Global_1132968->f_4641.f_2[func_466(iParam0, 1) /*4*/])->f_2++;
	if (!bParam2)
	{
		return;
	}
	if (Global_1275573->f_16 != &Global_1275573)
	{
		return;
	}
	Var0.f_5 = -1;
	Var0.f_4 = 0;
	Var0.f_5 = iParam0;
	Var0.f_6 = bParam1;
	iVar8 = 0;
	iVar8 = 0;
	while (iVar8 < 32)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Global_1275573->f_154[iVar8])))
		{
		}
		else if (!_NAMESPACE26::_0x9BE7DCB22D32CCBE(Global_1275573->f_15, &(Global_1275573->f_154[iVar8])))
		{
		}
		else if (&Global_1275573->f_154[iVar8] == Global_1275573->f_10)
		{
		}
		else
		{
			SCRIPTS::_0x31010318BA9897AC(&uVar7, &(Global_1275573->f_154[iVar8]));
		}
		iVar8++;
	}
	func_467(&Var0, uVar7);
}

void func_346()
{
	if (!func_104(256))
	{
		return;
	}
	func_96(512);
}

int func_347(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

int func_348(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			if (ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				if (PED::GET_PED_SOURCE_OF_DEATH(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)) == iParam1)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_349(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_468(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_350(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_468(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_351(var uParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_165(&Var1, uParam0))
	{
		iVar0 = ((func_469() - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_352(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return ((*Global_1234391)[iParam0 /*5*/])->f_2;
}

int func_353(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("BOUNTY_BOARD"):
		case joaat("GUN_FOR_HIRE"):
		case joaat("CAMP_RESUPPLY"):
		case joaat("MOONSHINE_SETUP_GET_SUPPLIES"):
		case joaat("MOONSHINE_MARKETING"):
		case joaat("CAMP_SETUP"):
		case joaat("MOONSHINE_SELL"):
		case joaat("MOONSHINE_SETUP_RESCUE_COOK"):
		case joaat("CAMP_SELL"):
			return 1;
		case joaat("DYNAMIC"):
			return iParam1;
		default:
			break;
	}
	return 0;
}

void func_354(var uParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (&Global_1051202->f_16[15] == 0 || !SCRIPTS::_DOES_THREAD_EXIST(&(Global_1051202->f_16[15])))
	{
		return;
	}
	*uParam0 = 176;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::_0x8B61C950A148FFA2(uParam0, 6, 11, &(Global_1051202->f_16[15]));
	func_470(uParam0, uParam0->f_1);
}

int func_355(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return 4;
		case 4:
			return 2;
		default:
			break;
	}
	return 8;
}

var func_356(int iParam0, int iParam1)
{
	return func_471(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("VOLCYLINDER"), iParam0, iParam1);
}

void func_357(int iParam0, struct<5> Param1, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam15))
	{
		return;
	}
	if (!func_472(0))
	{
		return;
	}
	Param1 = 10;
	Param1.f_1 = PLAYER::PLAYER_ID();
	Param1.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Param1.f_4 = iParam0;
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Param1, 14, 6, &uParam15);
}

Vector3 func_358(vector3 vParam0, vector3 vParam3, float fParam6)
{
	return func_473(vParam3 - vParam0) * Vector(fParam6, fParam6, fParam6);
}

int func_359(var uParam0, int iParam1, int iParam2, vector3 vParam3, float fParam6)
{
	int iVar0;
	var uVar1;

	iVar0 = VOLUME::_CREATE_VOLUME_SPHERE(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam6);
	uVar1 = func_474(uParam0, iParam1, iVar0, iParam2);
	func_475(iVar0);
	return uVar1;
}

float func_360(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

var func_361()
{
	var uVar0;
	vector3 vVar1;

	uVar0 = func_360(Global_1126368->f_1995.f_1, func_78(func_77(Local_519.f_18.f_41)));
	vVar1 = { func_78(func_77(Local_519.f_18.f_41)) };
	return uVar0;
}

int func_362(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam6, bParam7, false, !bParam9);
	if (bParam5)
	{
		PED::_SET_RANDOM_OUTFIT_VARIATION(iVar0, true);
	}
	return iVar0;
}

int func_363(int iParam0)
{
	return (Local_519.f_167.f_7[iParam0 /*11*/])->f_4;
}

float func_364(int iParam0)
{
	return (Local_519.f_167.f_7[iParam0 /*11*/])->f_5;
}

Vector3 func_365(int iParam0)
{
	return (Local_519.f_167.f_7[iParam0 /*11*/])->f_6;
}

void func_366(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	PED::_0x1902C4CFCC5BE57C(iParam0, joaat("META_HORSE_SADDLE_ONLY"));
	if (bParam1)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, false, true, true, true, false);
	}
}

bool func_367(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_368(var uParam0)
{
	func_447(uParam0, 0);
}

void func_369(var uParam0, bool bParam1)
{
	if (bParam1 || !func_267(uParam0))
	{
		func_368(uParam0);
	}
}

int func_370(var uParam0, int iParam1)
{
	if (!func_267(uParam0))
	{
		return 0;
	}
	if (func_452(uParam0) > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_371(var uParam0)
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	*uParam0 = 0;
}

void func_372(int iParam0)
{
	func_179(&((Local_102[NETWORK::PARTICIPANT_ID_TO_INT() /*13*/])->f_1.f_1), iParam0);
}

void func_373(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		fParam1 = func_476(fParam1, 0f, 1f);
		iVar0 = BUILTIN::FLOOR((fParam1 * IntToFloat(ENTITY::GET_ENTITY_MAX_HEALTH(iParam0, bParam2))));
		ENTITY::_SET_ENTITY_HEALTH(iParam0, iVar0, 0);
	}
}

var func_374(int iParam0)
{
	return (Local_519.f_167.f_7[iParam0 /*11*/])->f_10;
}

void func_375(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "HAS_VOICE", true);
			AUDIO::SET_AMBIENT_VOICE_NAME(iParam0, sParam1);
		}
	}
}

void func_376(int iParam0)
{
}

int func_377(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("NET_BEAT_ANIMAL_ATTACK");
		case 2:
			return joaat("NET_BEAT_ARROWHEAD_INJURY");
		case 14:
			return joaat("NET_BEAT_DUEL");
		case 4:
			return joaat("NET_BEAT_GRAVEROBBER");
		case 5:
			return joaat("NET_BEAT_RIVAL_COLLECTOR");
		case 6:
			return joaat("NET_BEAT_KIDNAPPED");
		case 7:
			return joaat("NET_BEAT_PHOTOGRAPHY");
		case 8:
			return joaat("NET_BEAT_TIED_UP_PED");
		case 9:
			return joaat("NET_BEAT_TREASURE_HUNTER");
		case 10:
			return joaat("NET_BEAT_TREE_MAP");
		case 11:
			return joaat("NET_BEAT_RUNAWAY_WAGON");
		case 12:
			return joaat("NET_BEAT_HOBO_DOG");
		case 13:
			return joaat("NET_BEAT_WILDMAN");
		case 3:
			return joaat("NET_BEAT_EGG_PROTECTOR");
		case 15:
			return joaat("NET_BEAT_MOONSHINE_CAMP");
		default:
			break;
	}
	return 0;
}

struct<2> func_378(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_379(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_477() - fParam1);
	func_478(uParam0, 1);
	func_479(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_380(var uParam0)
{
	if (!func_288(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_480(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_477() - uParam0->f_1);
}

int func_381(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_382(int iParam0)
{
	vector3 vVar0;

	if (!func_381(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_383(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_381(iParam0, 0))
	{
		return 0;
	}
	if (Global_1939178->f_6)
	{
		return 0;
	}
	iVar0 = func_457(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_481("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_482(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_483(Var4.f_4))
			{
			}
			else if (WEAPON::_0x5C2EA6C44F515F34(Var4.f_4) == iVar0)
			{
				func_484(iVar1);
				return 1;
			}
			iVar3++;
		}
		func_484(iVar1);
	}
	return 0;
}

bool func_384(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_381(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_485(iParam0);
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
	iVar1 = func_486(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_487(&(Global_17172.f_54.f_644.f_1353.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_488(iParam0);
	iVar2 = func_487(&(Global_17172.f_54.f_644.f_1353.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == &Global_17172.f_54.f_644.f_1353.f_5[iVar2 /*17*/];
}

int func_385(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_381(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_382(iParam0);
	if (iVar1 == joaat("AMMO") || (bParam1 && iVar1 == joaat("WEAPON")))
	{
		iVar2 = func_457(iParam0, 1);
		if (iVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iVar2);
		}
	}
	else if (iVar1 == joaat("WEAPON"))
	{
		return func_489(iParam0, 0);
	}
	if (func_490(iParam0, joaat("DEFAULT")) != 0)
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_491(bParam2), iParam0, bParam3);
	}
	else
	{
		Var3 = { func_492(iParam0, bParam2) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_491(bParam2), &Var3, bParam3);
	}
	return iVar0;
}

void func_386(var uParam0, bool bParam1, int iParam2)
{
	func_493(iParam2);
	if (Global_1572887->f_13 == -1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
		{
			return;
		}
		if (Global_1939178->f_6)
		{
			return;
		}
	}
	else
	{
		if (!Global_1275573->f_11)
		{
			return;
		}
		if (Global_1275573->f_12)
		{
			return;
		}
	}
	if (bParam1)
	{
		uParam0->f_10 = 0;
	}
	uParam0->f_5 = iParam2;
	if (Global_1572887->f_13 == -1)
	{
		uParam0->f_13 = Global_1939178->f_38;
	}
	else
	{
		uParam0->f_13 = func_494(0);
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
						if (PED::IS_PED_PLANTING_BOMB(Global_34))
						{
							func_179(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_495(1, 1))
						{
							func_179(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_34) && (!func_495(1, 1) || *uParam0 & 8192 != 0))
				{
					func_198(uParam0, 33554432);
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
			if (func_496(uParam0))
			{
				uParam0->f_15 = func_406();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_406() - uParam0->f_15) > 500)
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
	func_497(uParam0);
}

int func_387(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!EVENT::_0x1D1B448D719415AB(iParam0))
	{
		return 0;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(iParam0, 0, 0);
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
			iVar1 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar0, 0, 0);
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
			if (iVar2 == Global_1939178->f_27)
			{
				return 0;
			}
			if (iVar2 == Global_1939178->f_26)
			{
				return 0;
			}
			if (!func_498(iParam0, uParam1, iVar2))
			{
				return 0;
			}
			if (func_499(iParam0, iVar2) <= func_500(uParam1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_388(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_347(iParam2, 1, 1, 1, 0))
	{
		func_179(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_501(uParam1, 1);
	func_502();
}

int func_389(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_503(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_504(uParam1);
			if (func_505(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_506(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_501(uParam1, 1);
						return 1;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > func_507(uParam1))
						{
							func_501(uParam1, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_390(int iParam0, int iParam1, var uParam2)
{
	float fVar0;
	float fVar1;

	if (iParam1 == 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	fVar0 = 85f;
	if (func_508(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_504(uParam2);
		if (func_505(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_506(uParam2)
				{
					func_501(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_391(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	if (!PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar0))
	{
		return 0;
	}
	if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, 0, 0))
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
	if (Global_1939178->f_34 != 0)
	{
		if (PED::_0xB676EFDA03DADA52(Global_1939178->f_34, 1) == iParam0)
		{
			return 0;
		}
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (func_498(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_506(uParam1)
		{
			fVar3 = func_504(uParam1);
			if (uParam1->f_12 < fVar3)
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_34, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar1, 17))
				{
					if (PED::_0x06087579E7AA85A9(iParam0, Global_34, -1f, fVar3, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, iVar1, -1f, fVar3, -1f, -1f))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_392(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_509(bParam1, bParam2, bParam3);
	}
	if (Global_1572887->f_13 != -1)
	{
		if (iParam0 == Global_1275573->f_10)
		{
			if (!Global_1275573->f_11)
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

int func_393(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_406();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return 1;
	}
	return 0;
}

int func_394(int iParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_510(uParam2);
			if (!WEAPON::IS_WEAPON_VALID(Global_1939178->f_40) || Global_1939178->f_40 == joaat("WEAPON_UNARMED"))
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
			else if (WEAPON::IS_WEAPON_VALID(Global_1939178->f_40) && WEAPON::_0xEA522F991E120D45(Global_1939178->f_40))
			{
				PED::_0xD355E2F1BB41087E(iParam1, 5f);
			}
			else
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
		}
		if ((!WEAPON::IS_WEAPON_VALID(Global_1939178->f_40) || Global_1939178->f_40 == joaat("WEAPON_UNARMED")) || (WEAPON::IS_WEAPON_VALID(Global_1939178->f_40) && WEAPON::_0x5809DBCA0A37C82B(Global_1939178->f_40)))
		{
			fVar2 = 3f;
			iVar1 = 3000;
		}
		else
		{
			fVar2 = 1f;
			iVar1 = 1000;
		}
		if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), iParam1, iVar1) && PED::_0x285D36C5C72B0569(iParam0) <= fVar2)
		{
			if (func_402(uParam2, iParam1))
			{
				func_501(uParam2, 1);
				return 1;
			}
		}
	}
	return 0;
}

int func_395(int iParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_12 < IntToFloat(func_511(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1939178->f_40) && !WEAPON::_0x5809DBCA0A37C82B(Global_1939178->f_40)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_34, &uVar0))
		{
			if (func_402(uParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(iParam0) <= 1f)
				{
					func_501(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_396(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_512(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, uParam2->f_23))
				{
					func_501(uParam2, 1);
					return 1;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), vVar0, uParam2->f_29))
				{
					func_501(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_23))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), uParam2->f_28, &vVar4, 0, 0);
					if (func_513(iParam1, vVar0, vVar4))
					{
						func_501(uParam2, 1);
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
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, uParam2->f_23))
				{
					func_501(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_23))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), uParam2->f_28, &vVar7, 0, 0);
					if (func_513(iParam1, vVar0, vVar7))
					{
						func_501(uParam2, 1);
						return 1;
					}
				}
				break;
		}
	}
	return 0;
}

int func_397(int iParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	vector3 vVar2[2];
	vector3 vVar9;
	bool bVar12;
	bool bVar13;

	vVar9 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1939178->f_33)
	{
		if (!func_498(iParam0, uParam1, &(Global_1939178->f_28[iVar0])) || iParam0 == &Global_1939178->f_28[iVar0])
		{
		}
		else
		{
			bVar13 = func_514(&(Global_1939178->f_28[iVar0]));
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(&(Global_1939178->f_28[iVar0]), false, false), vVar9);
			if (func_515(&(Global_1939178->f_28[iVar0])))
			{
				if (fVar1 < 35f)
				{
					if ((DECORATOR::DECOR_EXIST_ON(&(Global_1939178->f_28[iVar0]), "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA")) || (DECORATOR::DECOR_EXIST_ON(&(Global_1939178->f_28[iVar0]), "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB")))
					{
						*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1939178->f_28[iVar0]), false, false) };
						*(vVar2[1 /*3*/]) = { vVar9 };
						uParam1->f_10 = iParam0;
						return 1;
					}
				}
			}
			if (func_516(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1939178->f_28[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_517(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1939178->f_28[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_518(uParam1, iParam0, fVar1, iVar0))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1939178->f_28[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_398(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar5;
	vector3 vVar8;

	if (!EVENT::_0x1D1B448D719415AB(*iParam0))
	{
		return 0;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(*iParam0, 0, 0);
	switch (iVar0)
	{
		case joaat("EVENT_SHOCKING_PROPERTY_DAMAGE"):
		case joaat("EVENT_SHOCKING_WINDOW_SMASHED"):
			iVar1 = EVENT::_0x822A001BCEA5BD81(*iParam0, iVar0, 0, 0);
			iVar2 = EVENT::_0x38497F139981C5C9(*iParam0, iVar0, 0, 0);
			vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar1, false, false) };
			vVar8 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) };
			EVENT::_0x1A5C5D350068A673(*iParam0, 0);
			return 1;
	}
	return 0;
}

int func_399(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_406();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

int func_400(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!bParam3)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iParam0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1, 1) || DECORATOR::DECOR_EXIST_ON(iParam0, "DamagedByPlayer"))
			{
				return 1;
			}
			iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar1, 1, 1))
				{
					return 1;
				}
			}
			if (PED::IS_PED_ON_MOUNT(iVar0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(iVar0)))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PED::GET_MOUNT(iVar0), 1, 1))
					{
						return 1;
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (!bParam2)
	{
		if (func_519(iVar0, &iVar2))
		{
			if ((PED::IS_PED_RAGDOLL(iParam0) || PED::_0x947E43F544B6AB34(iParam0, PLAYER::PLAYER_ID(), 10, 1000)) || (!bParam4 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar2, iParam0)))
			{
				return 1;
			}
		}
	}
	if (!bParam2)
	{
		if (PED::_0x29FCE825613FEFCA(iParam0, 400))
		{
			return 1;
		}
	}
	if (func_520(iVar0, iParam0))
	{
		return 1;
	}
	if (PED::_0xD0B7AEB56229D317(PLAYER::PLAYER_PED_ID()) == iParam0)
	{
		if (PED::_0x0E99E3BF11BB6367(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_BEING_JACKED(iParam0))
		{
			if (PED::GET_PEDS_JACKER(iParam0) == iVar0)
			{
				return 1;
			}
		}
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iVar0, 8, 0))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, true) || PED::IS_PED_BEING_STEALTH_KILLED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_401(var uParam0, int iParam1)
{
	int iVar0;

	if (!DECORATOR::DECOR_EXIST_ON(iParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (DECORATOR::DECOR_SET_INT(iParam1, "iDamageFrame", uParam0->f_5))
		{
		}
	}
	else if (uParam0->f_5 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

int func_402(var uParam0, int iParam1)
{
	if (func_521(uParam0))
	{
		return 1;
	}
	if (PED::_0x29FCE825613FEFCA(iParam1, 400))
	{
		return 1;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iParam1, true))
	{
		return 0;
	}
	if ((PED::IS_PED_PERFORMING_MELEE_ACTION(Global_34, 8, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 9, true)) || PED::IS_PED_BEING_STEALTH_KILLED(iParam1))
	{
		return 0;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_34, 16, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 10, true))
	{
		return 0;
	}
	if (PED::_0xB65A4DAB460A19BD(Global_34) != 0)
	{
		return 1;
	}
	if (WEAPON::_0x8D50F43298AB9545(Global_34, iParam1))
	{
		return 1;
	}
	if (!PED::IS_PED_RAGDOLL(iParam1))
	{
		return 1;
	}
	return 0;
}

int func_403(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return 1;
		}
		if (func_522(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_404()
{
}

int func_405(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_34);
	if (iVar0 != 0 && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iVar0)))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
		if (func_523(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_406();
			return 1;
		}
		else if (VEHICLE::_0xA19447D83294E29F(iVar0, &iVar5, &iVar4))
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
					iVar7 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar0, iVar6);
					if (ENTITY::DOES_ENTITY_EXIST(iVar7))
					{
						if (func_524(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_9 = func_406();
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

int func_406()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

int func_407()
{
	if (Global_1939178->f_36 == 0)
	{
		return 0;
	}
	if (Global_1939178->f_36 == Global_1939178->f_34)
	{
		return 0;
	}
	if (Global_1939178->f_37 <= 0)
	{
		return 0;
	}
	if ((func_406() - Global_1939178->f_37) >= 10000)
	{
		return 0;
	}
	return 1;
}

int func_408(var uParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
	{
		return 0;
	}
	if (!PED::IS_PED_HUMAN(iParam1))
	{
		return 0;
	}
	fVar0 = func_500(uParam0);
	if (uParam0->f_12 > func_525(uParam0) && uParam0->f_12 > fVar0)
	{
		return 0;
	}
	iVar2 = func_526(iParam1);
	iVar1 = func_527(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || PED::_0x9D9473CB82D83A30(iParam1, Global_34, 0) == 1) || PED::_0x9D9473CB82D83A30(iParam1, uParam0->f_14, 0) == 1)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_409(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

float func_410(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

int func_411(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_528(iParam0, vVar0, iParam2);
}

int func_412(int iParam0, int iParam1, var uParam2)
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
	return func_529(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

int func_413(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (*uParam1 & 67108864 != 0)
	{
		return 1;
	}
	if (Global_1939178->f_18)
	{
		return 1;
	}
	if (*uParam1 & 33554432 != 0)
	{
		if (func_530(iParam0, uParam1, 1))
		{
			return 1;
		}
		if ((PED::_0x06087579E7AA85A9(iParam0, Global_34, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_34, 17)) && PED::_0x7F9B9791D4CB71F6(iParam0, Global_34, true, 0) == 1)
		{
			return 1;
		}
	}
	iVar0 = PED::GET_JACK_TARGET(Global_34);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, true))
	{
		if (PED::_0x06087579E7AA85A9(iParam0, Global_34, -1f, -1f, -1f, -1f))
		{
			return 1;
		}
	}
	if (!EVENT::_0x1D1B448D719415AB(iParam0))
	{
		return 0;
	}
	iVar1 = EVENT::_0x796EECFF0C6D39BE(iParam0, 0, 0);
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
			if (func_531(uParam1))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (iVar4 != Global_34)
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			if (ENTITY::_0x88AD6CC10D8D35B2(iVar5))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			return 1;
		case joaat("EVENT_SHOCKING_ENTITY_HOGTIED"):
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (PED::_0x06087579E7AA85A9(iParam0, iVar4, -1f, -1f, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, Global_34, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar4, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_34, 17))
				{
					if (!func_532(uParam1, iParam0))
					{
						if (func_524(iVar4, Global_35, 1) < 7f)
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

int func_414(int iParam0, var uParam1)
{
	if (!func_533(0))
	{
		return 0;
	}
	if (PED::IS_PED_FACING_PED(iParam0, Global_34, 90f))
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_34, 17))
		{
			return 1;
		}
	}
	return 0;
}

int func_415(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_406();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_416(int iParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_417(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_406();
	}
	else if (func_406() - uParam1->f_4) > func_534(uParam1)
	{
		return func_535(iParam0, uParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

int func_418(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PED::GET_PED_SOURCE_OF_DEATH(iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bIgnoreDamageChecking"))
	{
		return 0;
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (Global_34 == iVar1 || Global_1939178->f_34 == iVar1)
	{
		return 1;
	}
	return 0;
}

void func_419(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<11> Var2;
	int iVar19;
	struct<2> Var20;
	int iVar22;
	struct<2> Var23;

	if (func_100(Global_1245803[iParam0 /*4*/]))
	{
		return;
	}
	func_536(iParam0, &iVar0, &iVar1);
	Var2.f_10 = 1106247680;
	func_31(&Var2, iVar0, iVar1, -1, 255);
	func_101((*Global_1245803)[iParam0 /*4*/]);
	iVar19 = Var2.f_5;
	if (iVar19 != 0)
	{
		Var20 = { func_537(joaat("MP_FETCH_LAST_ATTEMPTED_DYNAMIC_MISSION_UNLOCK")) };
		STATS::STAT_ID_SET_INT(&Var20, iVar19, true);
		Var20 = { func_537(joaat("MP_FETCH_LAST_ATTEMPTED_DYNAMIC_MISSION_TIMESTAMP")) };
		STATS::STAT_ID_SET_INT(&Var20, Global_1275573->f_21, true);
	}
	iVar22 = Var2.f_9;
	if (iVar22 != 0)
	{
		Var23 = { func_537(joaat("MP_FETCH_LAST_ATTEMPTED_COOLDOWN_TAG_ID")) };
		STATS::STAT_ID_SET_INT(&Var23, iVar22, true);
		Var23 = { func_537(joaat("MP_FETCH_LAST_ATTEMPTED_COOLDOWN_TAG_TIMESTAMP")) };
		STATS::STAT_ID_SET_INT(&Var23, Global_1275573->f_21, true);
	}
}

void func_420(int iParam0)
{
	func_538();
	func_539(iParam0);
}

void func_421(int iParam0)
{
	struct<6> Var0;

	Var0.f_4 = 2;
	Var0.f_5 = iParam0;
	func_354(&Var0);
}

void func_422(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	Var0 = { func_282(iParam1, joaat("CHARACTER_MEMORY")) };
	if (!STATS::STAT_ID_GET_INT(&Var0, &iVar2))
	{
		return;
	}
	if (MISC::IS_BIT_SET(iVar2, iParam0))
	{
		return;
	}
	MISC::SET_BIT(&iVar2, iParam0);
	if (!STATS::STAT_ID_SET_INT(&Var0, iVar2, true))
	{
	}
}

void func_423(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_435(Local_519.f_18.f_142[iParam0], 1, 1);
	iVar0 = func_215(0);
	iVar1 = func_540(sParam1, iParam2, iVar0, iParam3, iParam4, 0, 0, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
	iVar2 = func_541(iVar1);
	func_542(iVar1, 18, 0, 1);
	func_542(iVar1, 17, 0, 1);
	HUD::_UIPROMPT_SET_GROUP(((*Global_1949759)[iVar2 /*23*/])->f_3, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iVar0), 0);
	func_544(iVar1, func_543(iParam0), 1, 1);
	Local_519.f_18.f_142[iParam0] = iVar1;
}

int func_424(int iParam0)
{
	int iVar0;

	if (!func_381(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_545(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return iParam0;
}

void func_425(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_434(iParam0))
	{
		return;
	}
	iVar0 = func_541(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1949759)[iVar0 /*23*/])->f_3, MISC::_CREATE_VAR_STRING(10, sParam1, MISC::_CREATE_VAR_STRING(0, sParam2)));
}

void func_426(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_427(iVar0, bParam0);
		iVar0++;
	}
}

void func_427(int iParam0, bool bParam1)
{
	func_544(&(Local_519.f_18.f_142[iParam0]), bParam1, 1, 1);
	if (bParam1)
	{
		MISC::SET_BIT(&(Local_519.f_18.f_141), iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&(Local_519.f_18.f_141), iParam0);
	}
}

int func_428(int iParam0)
{
	struct<2> Var0;
	var uVar2;

	Var0 = { func_282(iParam0, joaat("NUM_TIMES_HELP_TEXT_SEEN")) };
	if (!STATS::STAT_ID_GET_INT(&Var0, &uVar2))
	{
		return -1;
	}
	return uVar2;
}

var func_429(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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
	uVar15 = _NAMESPACE71::_0x049D5C615BD38BAD(&Var0, &Var13, bParam5);
	return uVar15;
}

void func_430(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_282(iParam0, joaat("NUM_TIMES_HELP_TEXT_SEEN")) };
	STATS::_0x6A0184E904CDF25E(&Var0, 1);
}

bool func_431(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

var func_432(int iParam0)
{
	return &(Local_519.f_167.f_7[iParam0 /*11*/]);
}

int func_433(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0);
	}
	return 0;
}

bool func_434(int iParam0)
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

void func_435(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_434(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_541(*uParam0);
	if (((*Global_1949759)[iVar0 /*23*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_546(iVar0);
	*uParam0 = 0;
}

int func_436(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1)))
	{
		return func_146((Local_102[iParam1 /*13*/])->f_1.f_1, iParam0);
	}
	return 0;
}

void func_437(int iParam0)
{
	func_198(&((Local_102[NETWORK::PARTICIPANT_ID_TO_INT() /*13*/])->f_1.f_1), iParam0);
}

int func_438(int iParam0)
{
	if (iParam0 == 25 || iParam0 == 26)
	{
		return 1;
	}
	return 0;
}

var func_439(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	return func_547(iParam0, &Var0);
}

bool func_440(char[4] cParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_548(cParam1, cParam0);
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

void func_441(int iParam0, int iParam1)
{
	struct<11> Var0;
	struct<2> Var17;
	int iVar19;

	Var0.f_10 = 1106247680;
	func_31(&Var0, iParam0, -1, -1, 255);
	Var17 = { func_282(iParam0, joaat("VARIATIONS_SEEN")) };
	if (!STATS::STAT_ID_GET_INT(&Var17, &iVar19))
	{
		return;
	}
	if (iParam1 > 15)
	{
		return;
	}
	MISC::SET_BIT(&iVar19, iParam1);
	if (!func_94(&Var0, 4) && func_549(iVar19) == Var0.f_1)
	{
		iVar19 = 0;
	}
	if (!STATS::STAT_ID_SET_INT(&Var17, iVar19, true))
	{
	}
	((*Global_1244010)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*56*/])->f_36[iParam0] = iVar19;
}

void func_442(struct<2> Param0)
{
	struct<32> Var0;

	if (func_242(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_242(Param0)))
	{
	}
	else
	{
		STATS::_0xB2A38826E5886E83(func_242(Param0), Global_265331->f_124445.f_70.f_17);
		if (func_550(Param0, &Var0))
		{
			if (Var0.f_29 == joaat("RACE_IMPROMPTU"))
			{
				STATS::_0xF21A5D66874FCEDD(Var0.f_2, 0, joaat("RACE"));
			}
			STATS::_0xF21A5D66874FCEDD(Var0.f_2, Var0.f_29, 0);
			STATS::_0xF21A5D66874FCEDD(Var0.f_2, Var0.f_30, 0);
			STATS::_0xF21A5D66874FCEDD(Var0.f_2, Var0.f_31, 0);
		}
	}
}

void func_443(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_282(iParam0, joaat("NUM_TIMES_SEEN")) };
	STATS::_0x6A0184E904CDF25E(&Var0, 1);
}

void func_444(int iParam0)
{
	MISC::CLEAR_BIT(&(Local_0.f_7.f_6), iParam0);
}

void func_445(int iParam0)
{
	MISC::CLEAR_BIT(&(Local_519.f_18.f_42), iParam0);
}

void func_446(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			func_198(&((Local_102[iVar0 /*13*/])->f_1.f_1), iParam0);
		}
		iVar0++;
	}
}

void func_447(var uParam0, int iParam1)
{
	uParam0->f_1 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = NETWORK::GET_TIME_OFFSET(uParam0->f_1, iParam1);
	}
	func_478(uParam0, 1);
	func_479(uParam0, 2);
	uParam0->f_2 = 0;
}

int func_448(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

char* func_449(int iParam0)
{
	char cVar0[32];
	int iVar4;

	if (func_551(iParam0))
	{
		StringCopy(&cVar0, "G", 32);
	}
	else if (iParam0 == 8)
	{
		MISC::_INT_TO_STRING(1, "%i", &cVar0);
	}
	else
	{
		iVar4 = func_552();
		iVar4++;
		if (iVar4 <= 5)
		{
			MISC::_INT_TO_STRING(iVar4, "%i", &cVar0);
		}
		else
		{
			StringCopy(&cVar0, "G", 32);
		}
	}
	return func_553(cVar0);
}

char* func_450(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

int func_451(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
	{
		return 0;
	}
	iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
	if (bParam2 && !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		return 0;
	}
	if (bParam1 && PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return 0;
	}
	return 1;
}

int func_452(var uParam0)
{
	if (!func_267(uParam0))
	{
		return 0;
	}
	if (func_554(uParam0))
	{
		return uParam0->f_2;
	}
	return func_555(uParam0->f_1);
}

bool func_453(int iParam0)
{
	return func_103(8, iParam0);
}

bool func_454(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_434(iParam0))
	{
		return false;
	}
	iVar0 = func_541(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(((*Global_1949759)[iVar0 /*23*/])->f_3);
}

int func_455(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return 1;
	}
	if (func_178(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_178(iVar0, 2))
	{
		if (PED::_0x3AA24CCC0D451379(iParam0))
		{
			return 0;
		}
	}
	if (func_178(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_178(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_178(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_178(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return 0;
		}
	}
	if (func_178(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_178(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

bool func_456(int iParam0)
{
	return func_382(iParam0) == joaat("CONSUMABLE");
}

int func_457(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_381(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_382(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_0x5C2EA6C44F515F34(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_0x1F7977C9101F807F(iParam0))
	{
		return iParam0;
	}
	if (func_556(iParam0, 1399091007))
	{
		func_557(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

void func_458(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	int iVar1;
	char cVar2[32];
	int iVar6;
	struct<2> Var7;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	char* sVar14;
	char* sVar15;
	int iVar16;
	char* sVar17;
	int iVar18;
	char* sVar19;
	char cVar20[128];

	if (!func_381(iParam0, 0))
	{
		return;
	}
	else if (iParam0 == joaat("KIT_HANDHELD_CATALOG"))
	{
		return;
	}
	else if (iParam1 == 0)
	{
		return;
	}
	if (!func_558() || bParam6)
	{
		func_559(iParam0, iParam1, bParam2, bParam4, bParam3, bParam5);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_560(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else if (bParam3 || bParam4)
	{
		StringCopy(&cVar2, func_560(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		bVar0 = true;
	}
	else if (bParam2 && func_561(iParam0, 2097152))
	{
		StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		bVar0 = true;
	}
	iVar6 = func_382(iParam0);
	iVar10 = 0;
	iVar11 = joaat("INVENTORY");
	if (((((((iVar6 == joaat("AMMO") && iParam0 != joaat("AMMO_HATCHET")) && iParam0 != joaat("AMMO_HATCHET_CLEAVER")) && iParam0 != joaat("AMMO_HATCHET_HUNTER")) && iParam0 != joaat("AMMO_TOMAHAWK_ANCIENT")) && iParam0 != joaat("AMMO_BOLAS")) && iParam0 != joaat("AMMO_POISONBOTTLE")) && iParam0 != joaat("AMMO_MOONSHINEJUG_MP"))
	{
		iVar10 = joaat("AMMO_TYPES");
		iVar11 = joaat("AMMO_TYPES");
	}
	iVar12 = func_485(iParam0);
	if (((((((iVar6 == joaat("WEAPON_MOD") || iVar6 == joaat("WEAPON_DECORATION")) || iVar12 == -1674363638) || iVar12 == 252325943) || iVar12 == 829857647) || iVar12 == -636562458) || iVar12 == 1341188928) || iVar12 == 1216664798)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_562(iParam0, &Var7, iVar11, iVar10, 0, joaat("UI_ITEMVIEWER")))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (MISC::GET_HASH_KEY(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (bParam5)
	{
		Var7 = "ITEMTYPE_ORDERED_ITEM";
		Var7.f_1 = "itemtype_textures";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Var7))
	{
		return;
	}
	iVar13 = joaat("COLOR_PURE_WHITE");
	sVar14 = "Transaction_Positive";
	sVar15 = "Transaction_Feed_Sounds";
	iVar16 = 0;
	if (bVar0)
	{
		iVar13 = joaat("COLOR_GREYMID");
		sVar14 = "Transaction_Negative";
		iVar16 = 1;
	}
	if (func_556(iParam0, 474910316))
	{
		sVar17 = func_563(iParam0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar17))
		{
			sVar14 = sVar17;
			sVar15 = "RDRO_Collectible_Sounds_Travelling_Saleswoman";
		}
	}
	if (ITEMDATABASE::_ITEM_DATABASE_IS_OVERPOWERED_ITEM(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar13 = joaat("COLOR_RPG_SPECIAL_1");
		}
		else
		{
			iVar13 = joaat("COLOR_YELLOWDARK");
		}
	}
	if (func_556(iParam0, 1816585950))
	{
		iVar13 = joaat("COLOR_OBJECTIVE");
	}
	iVar18 = func_424(iParam0);
	if ((func_564(iVar12) && func_556(iParam0, -306684263)) && iVar18 != 0)
	{
		iVar18 = func_565(iParam0);
	}
	sVar19 = func_566(MISC::_CREATE_VAR_STRING(10, &cVar2, MISC::_CREATE_VAR_STRING(0, iVar18), iVar1), iVar13);
	if (((((iParam1 == 1 || func_556(iParam0, 1443104131)) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_USED")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"))
	{
		sVar19 = MISC::_CREATE_VAR_STRING(0, iVar18);
	}
	if ((((((iVar12 == -1839668642 && iParam0 != joaat("CLOTHING_ITEM_HAIR_NONE")) && iParam0 != 1326838792) && iParam0 != -230310728) || ((iVar12 == 231148558 && iParam0 != joaat("CLOTHING_ITEM_M_BEARD_STUBBLE")) && iParam0 != joaat("CLOTHING_ITEM_BEARD_NONE"))) || (iVar12 == 252325943 && iParam0 != joaat("CLOTHING_BLEND_LIPSTICK_NONE"))) || (iVar12 == -636562458 && iParam0 != joaat("CLOTHING_BLEND_EYESHADOW_NONE")))
	{
		sVar19 = MISC::_CREATE_VAR_STRING(0, func_567(iParam0, -442898163));
	}
	if (iVar12 == -126813555 || iVar12 == 1946043663)
	{
		if (!func_556(iParam0, 920823793))
		{
			StringCopy(&cVar20, "", 128);
			if (func_568(iParam0, &cVar20))
			{
				sVar19 = func_570(func_569(cVar20), joaat("COLOR_PURE_WHITE"));
			}
		}
	}
	func_571(sVar19, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar16, iVar13, sVar15, sVar14, 0, 1);
}

struct<2> func_459(int iParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_381(iParam0, 0))
	{
		return Var0;
	}
	if (func_556(iParam0, -305066475))
	{
		if (func_28() == -1)
		{
			if (func_556(iParam0, -537818634))
			{
				return func_572(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			}
			else
			{
				return func_572(joaat("DEADEYE_ITEMS"));
			}
		}
	}
	else if (func_556(iParam0, -537818634))
	{
		return func_572(joaat("MEDICINE_ITEMS"));
	}
	if (func_556(iParam0, 2084895747))
	{
		return func_572(joaat("LOCK_BREAKER_ITEMS"));
	}
	return Var2;
}

int func_460(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<14> Var0;
	int iVar14;
	int iVar15;
	struct<10> Var16;
	struct<4> Var30;
	int iVar35;
	int iVar36;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_573(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam2)
	{
		func_575(&Var0, func_574(0));
	}
	if (!func_576(&Var0, &iVar14, &iVar15, 0))
	{
		return 0;
	}
	Var16.f_9 = -1591664384;
	iVar35 = 0;
	while (iVar35 < iVar15)
	{
		if (iVar36 >= iParam1)
		{
		}
		else
		{
			if (!func_482(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_577(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_484(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return 1;
}

int func_461(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_381(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	iVar0 = func_490(iParam0, joaat("DEFAULT"));
	if (iVar0 != 0)
	{
		return func_578(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var1 = { func_462(iParam0, bParam4, 0) };
	Var6 = { func_579(iParam0, Var1, Var1.f_4, bParam4) };
	return func_577(iParam0, &Var6, &Var1, iParam1, iParam2, bParam3, bParam4);
}

struct<5> func_462(int iParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_580(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_382(iParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_579(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			break;
		case joaat("WEAPON"):
			Var0 = { func_574(bParam1) };
			if (iParam2 && func_581(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_582(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_582(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_583(iParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_584(bParam1) };
			switch (func_485(iParam0))
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
			if (func_585(iParam0, -1823706425))
			{
				Var0 = { func_579(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_585(iParam0, -1483207246))
			{
				Var0 = { func_579(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1911121386))
			{
				Var0 = { func_579(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_585(iParam0, -1653629781))
			{
				Var0 = { func_579(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_586(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_585(iParam0, -1653629781))
			{
				Var0 = { func_579(1384535894, Var0, 1784584921, bParam1) };
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

int func_463(bool bParam0)
{
	if (func_28() == -1)
	{
		return 1;
	}
	return INVENTORY::_0x0FBBFFC891A97C81(func_491(bParam0));
}

void func_464(int iParam0, bool bParam1, int iParam2)
{
	Global_1939231->f_4 = iParam0;
	Global_1939231->f_34 = iParam2;
	if (bParam1 || (func_587() && iParam2 == 0))
	{
		func_588(1);
		func_589(1);
	}
}

int func_465()
{
	if (func_28() != 0)
	{
		return 1;
	}
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("FEATURE_HONOR")))
	{
		return 1;
	}
	if (Global_1132968->f_4641.f_1 & 2 != 0)
	{
		return 1;
	}
	if (Global_1132968->f_4641.f_1 & 4 != 0)
	{
		return 1;
	}
	if (!NETWORK::HAS_NETWORK_TIME_STARTED())
	{
		return 1;
	}
	return 0;
}

int func_466(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("PERSONA_HONOR_ACTION__NB_ARROWHEAD_INJURY_MERCY_KILL"):
			return 93;
		case joaat("PERSONA_HONOR_ACTION__NB_RUNAWAY_WAGON_RETURN"):
			return 96;
		case joaat("PERSONA_HONOR_ACTION__NB_BEGGAR_ASSAULT"):
			return 61;
		case joaat("PERSONA_HONOR_ACTION__MURDER_PLAYER"):
			return 4;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_THIRTYFIVE"):
			return 39;
		case joaat("PERSONA_HONOR_ACTION__NB_PHOTOGRAPHY_MURDER"):
			return 56;
		case joaat("PERSONA_HONOR_ACTION__REVIVE_PLAYER"):
			return 63;
		case joaat("PERSONA_HONOR_ACTION__NB_BEGGAR_DONATE"):
			return 97;
		case joaat("PERSONA_HONOR_ACTION__NB_WILDMAN_KILL"):
			return 50;
		case joaat("PERSONA_HONOR_ACTION__MURDER_RAMPAGE"):
			return 5;
		case joaat("PERSONA_HONOR_ACTION__SLAUGHTER_PETS"):
			return 13;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FIFTY"):
			return 87;
		case joaat("PERSONA_HONOR_ACTION__WAGON_THIEF_PLAYER"):
			return 16;
		case joaat("PERSONA_HONOR_ACTION__LOOTING"):
			return 43;
		case joaat("PERSONA_HONOR_ACTION__EXECUTION_PLAYER"):
			return 10;
		case joaat("PERSONA_HONOR_ACTION__ANIMAL_CRUELTY"):
			return 45;
		case joaat("PERSONA_HONOR_ACTION__REVIVE_POSSE"):
			return 62;
		case joaat("PERSONA_HONOR_ACTION__MURDER_BUTCHER"):
			return 1;
		case joaat("PERSONA_HONOR_ACTION__MISSION_GVO_INTRO_NEG"):
			return 30;
		case joaat("PERSONA_HONOR_ACTION__NB_RIVAL_COLLECTOR_KILL"):
			return 53;
		case joaat("PERSONA_HONOR_ACTION__NB_ANIMAL_ATTACK_MURDER"):
			return 58;
		case joaat("PERSONA_HONOR_ACTION__NB_GRAVEROBBER_KILL"):
			return 49;
		case joaat("PERSONA_HONOR_ACTION__NB_WILDMAN_FEED"):
			return 90;
		case joaat("PERSONA_HONOR_ACTION__UNPROVOKED_ANTAGONIZATION"):
			return 21;
		case joaat("PERSONA_HONOR_ACTION__WATCH_BLEED_OUT"):
			return 11;
		case joaat("PERSONA_HONOR_ACTION__NB_GRAVEROBBER_ACCEPT"):
			return 48;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_TWENTYFIVE"):
			return 37;
		case joaat("PERSONA_HONOR_ACTION__MURDER_HORSE_PLAYER"):
			return 18;
		case joaat("PERSONA_HONOR_ACTION__NB_ANIMAL_ATTACK_SAVE"):
			return 88;
		case joaat("PERSONA_HONOR_ACTION__INTRO_MISSION_NEG"):
			return 32;
		case joaat("PERSONA_HONOR_ACTION__MURDER_HORSE"):
			return 12;
		case joaat("PERSONA_HONOR_ACTION__NB_HOBO_DOG_KILL"):
			return 57;
		case joaat("PERSONA_HONOR_ACTION__RESOURCEFUL"):
			return 69;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_TEN"):
			return 34;
		case joaat("PERSONA_HONOR_ACTION__MISSION_OUTLAW"):
			return 31;
		case joaat("PERSONA_HONOR_ACTION__HORSE_THIEF_PLAYER"):
			return 17;
		case joaat("PERSONA_HONOR_ACTION__INTRO_MISSION_POS"):
			return 77;
		case joaat("PERSONA_HONOR_ACTION__WAGON_THIEF_AI"):
			return 15;
		case joaat("PERSONA_HONOR_ACTION__THEFT"):
			return 44;
		case joaat("PERSONA_HONOR_ACTION__MURDER"):
			return 2;
		case joaat("PERSONA_HONOR_ACTION__FME_BOUNTY_RETURNED_ALIVE"):
			return 98;
		case joaat("PERSONA_HONOR_ACTION__HORSE_CARE"):
			return 65;
		case joaat("PERSONA_HONOR_ACTION__GFH_LAWFUL_PVP"):
			return 74;
		case joaat("PERSONA_HONOR_ACTION__CLEAR_HIDEOUT"):
			return 70;
		case joaat("PERSONA_HONOR_ACTION__NB_RUNAWAY_WAGON_ASSIST"):
			return 95;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FIFTEEN"):
			return 35;
		case joaat("PERSONA_HONOR_ACTION__HORSE_CARE_PLAYER"):
			return 68;
		case joaat("PERSONA_HONOR_ACTION__NB_KIDNAPPED_KILL"):
			return 51;
		case joaat("PERSONA_HONOR_ACTION__LOOTING_BODIES"):
			return 20;
		case joaat("PERSONA_HONOR_ACTION__FREEROAM_HIDEOUT_SAVE"):
			return 72;
		case joaat("PERSONA_HONOR_ACTION__NB_KIDNAPPED_RESCUE"):
			return 91;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_TWENTY"):
			return 81;
		case -1:
			return 0;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_TWENTYFIVE"):
			return 82;
		case joaat("PERSONA_HONOR_ACTION__IGNORE_MISSION"):
			return 23;
		case joaat("PERSONA_HONOR_ACTION__GFH_CRIMINAL_PVP"):
			return 27;
		case joaat("PERSONA_HONOR_ACTION__NB_RANDOM_EVENT_MURDER"):
			return 60;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FIFTY"):
			return 42;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FORTYFIVE"):
			return 41;
		case joaat("PERSONA_HONOR_ACTION__NB_TREASURE_HUNTER_KILL"):
			return 52;
		case joaat("PERSONA_HONOR_ACTION__REVIVE_MULTI"):
			return 64;
		case joaat("PERSONA_HONOR_ACTION__FREEROAM_HIDEOUT_KILL"):
			return 24;
		case joaat("PERSONA_HONOR_ACTION__HERDING_STEAL"):
			return 29;
		case joaat("PERSONA_HONOR_ACTION__VANDALISM_LOW"):
			return 47;
		case joaat("PERSONA_HONOR_ACTION__GRIEFING"):
			return 22;
		case joaat("PERSONA_HONOR_ACTION__NB_ARROWHEAD_INJURY_BLEED_OUT"):
			return 55;
		case joaat("PERSONA_HONOR_ACTION__MURDER_MISSION_PEDS"):
			return 6;
		case joaat("PERSONA_HONOR_ACTION__ARSON"):
			return 46;
		case joaat("PERSONA_HONOR_ACTION__MELEE_ATTACK_PLAYER_UNARMED"):
			return 8;
		case joaat("PERSONA_HONOR_ACTION__MELEE_ATTACK_PLAYER"):
			return 7;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_THIRTYFIVE"):
			return 84;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_TWENTY"):
			return 36;
		case joaat("PERSONA_HONOR_ACTION__MERCY_KILL"):
			return 89;
		case joaat("PERSONA_HONOR_ACTION__FME_BOUNTY_RETURNED_DEAD"):
			return 59;
		case joaat("PERSONA_HONOR_ACTION__HORSE_CARE_FULL"):
			return 67;
		case joaat("PERSONA_HONOR_ACTION__CLEAR_AMBUSH"):
			return 71;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FIVE"):
			return 78;
		case joaat("PERSONA_HONOR_ACTION__NB_TIED_UP_RESCUE"):
			return 92;
		case joaat("PERSONA_HONOR_ACTION__HORSE_THIEF_AI"):
			return 14;
		case joaat("PERSONA_HONOR_ACTION__MURDER_CAMP_FOLLOWER"):
			return 3;
		case joaat("PERSONA_HONOR_ACTION__GFH_CRIMINAL"):
			return 26;
		case joaat("PERSONA_HONOR_ACTION__RUSTLING"):
			return 28;
		case joaat("PERSONA_HONOR_ACTION__GFH_LAWFUL"):
			return 73;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FORTY"):
			return 85;
		case joaat("PERSONA_HONOR_ACTION__MISSION_GUNSLINGER"):
			return 76;
		case joaat("PERSONA_HONOR_ACTION__NB_RIVAL_COLLECTOR_LOOT"):
			return 54;
		case joaat("PERSONA_HONOR_ACTION__HORSE_CARE_CLEAN"):
			return 66;
		case joaat("PERSONA_HONOR_ACTION__HOGTIE_PLAYER"):
			return 9;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FIVE"):
			return 33;
		case joaat("PERSONA_HONOR_ACTION__NB_PHOTOGRAPHY_ASSIST"):
			return 94;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_TEN"):
			return 79;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FORTY"):
			return 40;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FIFTEEN"):
			return 80;
		case joaat("PERSONA_HONOR_ACTION__FREEROAM_HIDEOUT_SAVE_THEN_KILL"):
			return 25;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_THIRTY"):
			return 38;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FORTYFIVE"):
			return 86;
		case joaat("PERSONA_HONOR_ACTION__MISSION_GVO_INTRO_POS"):
			return 75;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_THIRTY"):
			return 83;
		case joaat("PERSONA_HONOR_ACTION__TRAMPLE"):
			return 19;
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

void func_467(int* iParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*iParam0 = 181;
	iParam0->f_1 = PLAYER::PLAYER_ID();
	iParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, iParam0, 7, 8, &uParam1);
}

int func_468(struct<2> Param0, int iParam2)
{
	if (!func_37(Param0))
	{
		return 0;
	}
	func_590(iParam2);
	switch (Param0)
	{
		case 2:
			MISC::_COPY_MEMORY(iParam2, Global_1070356->f_634[Param0.f_1 /*3*/], 3);
			return 1;
		case 3:
			MISC::_COPY_MEMORY(iParam2, Global_1070356->f_634.f_602[Param0.f_1 /*3*/], 3);
			return 1;
		case 4:
			MISC::_COPY_MEMORY(iParam2, Global_1070356->f_634.f_2104[Param0.f_1 /*3*/], 3);
			return 1;
		case 5:
			MISC::_COPY_MEMORY(iParam2, Global_1070356->f_634.f_12606[Param0.f_1 /*3*/], 3);
			return 1;
		case 6:
			MISC::_COPY_MEMORY(iParam2, Global_1070356->f_634.f_12908[Param0.f_1 /*3*/], 3);
			return 1;
		case 7:
			MISC::_COPY_MEMORY(iParam2, Global_1070356->f_634.f_15910[Param0.f_1 /*3*/], 3);
			return 1;
		case 8:
			MISC::_COPY_MEMORY(iParam2, Global_1070356->f_634.f_15981[Param0.f_1 /*3*/], 3);
			return 1;
		default:
			break;
	}
	return 0;
}

int func_469()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	vVar1.x = Global_1234391->f_8113;
	vVar1.f_2 = -1041770777;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(vVar1.f_1), &vVar1))
	{
		iVar0 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(vVar1.x, vVar1.y);
	}
	return iVar0;
}

void func_470(var uParam0, var uParam1)
{
}

var func_471(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_591() != 0)
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
			case joaat("VOLCYLINDER"):
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_592());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_592());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_592());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_593(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_594(iVar2))
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
				if (iVar9 & 8192 != 0 && func_595(iVar2) != 1)
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
					if (!func_596(iVar10))
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

int func_472(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1126368->f_2017 == 0 || (MISC::_GET_SYSTEM_TIME() - Global_1126368->f_2017) >= 1000)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (Global_1126368->f_2017 == 0)
	{
		Global_1126368->f_2017 = MISC::_GET_SYSTEM_TIME();
	}
	else if ((MISC::_GET_SYSTEM_TIME() - Global_1126368->f_2017) >= 1000)
	{
		Global_1126368->f_2017 = MISC::_GET_SYSTEM_TIME();
	}
	else
	{
		return 0;
	}
	return 1;
}

Vector3 func_473(vector3 vParam0)
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

int func_474(var uParam0, int iParam1, int iParam2, int iParam3)
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

void func_475(int iParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::_DELETE_VOLUME(iParam0);
	}
}

float func_476(float fParam0, float fParam1, float fParam2)
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

float func_477()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_478(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_479(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_480(var uParam0)
{
	return func_367(*uParam0, 2);
}

int func_481(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_491(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_482(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_483(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

int func_484(int iParam0)
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

int func_485(int iParam0)
{
	struct<2> Var0;

	if (!func_381(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_486(int iParam0)
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
		case joaat("CLOTHING_BLEND_GRIME_NONE"):
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

int func_487(var uParam0, int iParam1)
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

int func_488(int iParam0)
{
	int iVar0;

	iVar0 = func_485(iParam0);
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

int func_489(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_573(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_575(&Var0, func_574(0));
	}
	if (!func_576(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_484(iVar14);
	return uVar15;
}

int func_490(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

int func_491(bool bParam0)
{
	if (func_28() == -1)
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

struct<4> func_492(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_462(iParam0, bParam1, 0) };
	return func_579(iParam0, Var0, Var0.f_4, bParam1);
}

void func_493(int iParam0)
{
	int iVar0;
	bool bVar1;
	var uVar2;
	bool bVar3;

	if (Global_19 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1939178->f_32);
	Global_1939178->f_21 = func_597();
	if (Global_1939178->f_21)
	{
		Global_1939178->f_22 = MISC::GET_GAME_TIMER();
	}
	bVar1 = false;
	if (WEAPON::IS_WEAPON_VALID(Global_1939178->f_38))
	{
		bVar1 = true;
		if (PED::IS_PED_SHOOTING(Global_34))
		{
			if (WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_34, &uVar2))
			{
			}
			else
			{
				uVar2 = Global_1939178->f_38;
			}
			Global_1939178->f_40 = uVar2;
		}
	}
	switch (iVar0)
	{
		case 0:
			func_598(&(Global_1939178->f_28), &(Global_1939178->f_33));
			Global_1939178->f_32 = iParam0;
			break;
		case 1:
			Global_1939178->f_24 = PLAYER::_0x72AD59F7B7FB6E24(PLAYER::PLAYER_ID(), 4000);
			if (!Global_1939178->f_24)
			{
				if (bVar1 && WEAPON::_0x6E4E1A82081EABED(Global_1939178->f_38))
				{
					Global_1939178->f_24 = PED::_0xB65A4DAB460A19BD(Global_34) != 0;
				}
				if (Global_1939178->f_40 == joaat("WEAPON_THROWN_BOLAS"))
				{
					Global_1939178->f_24 = WEAPON::_0x46D42883E873C1D7(Global_34) > 0;
				}
			}
			break;
		case 2:
			bVar3 = WEAPON::IS_WEAPON_VALID(Global_1939178->f_40);
			if (bVar3 && WEAPON::_0x6E4E1A82081EABED(Global_1939178->f_40))
			{
				Global_1939178->f_19 = 0;
			}
			else
			{
				if (bVar3 && WEAPON::_0x5809DBCA0A37C82B(Global_1939178->f_40))
				{
					Global_1939178->f_19 = PED::_0x285D36C5C72B0569(Global_34) <= 3f;
				}
				else
				{
					Global_1939178->f_19 = PED::_0x285D36C5C72B0569(Global_34) <= 1f;
				}
				if (Global_1939178->f_19)
				{
					Global_1939178->f_23 = MISC::GET_FRAME_COUNT();
				}
			}
			break;
		default:
			Global_1939178->f_32 = iParam0 + 1;
			break;
	}
	Global_19 |= 4;
}

var func_494(int iParam0)
{
	return &(Global_1099294->f_372[iParam0 /*3*/]);
}

int func_495(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (func_599(bParam0, &iVar0, &iVar1))
	{
		if (bParam1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && PED::GET_PED_CONFIG_FLAG(iVar0, 6, false))
			{
				return 0;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && PED::GET_PED_CONFIG_FLAG(iVar1, 6, false))
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_496(var uParam0)
{
	int iVar0;

	iVar0 = Global_1939178->f_34;
	if (func_28() == -1)
	{
		if (Global_1939178->f_34 == 0)
		{
			iVar0 = func_600(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1939178->f_34) || !&Global_1954472->f_1616[4])
	{
		iVar0 = func_600(uParam0);
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_527(iVar0) == -1)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
	{
		return 0;
	}
	uParam0->f_14 = iVar0;
	return 1;
}

void func_497(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_601(uParam0);
	}
}

int func_498(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_HUMAN(iParam2))
	{
		iVar1 = func_527(iParam2);
	}
	else
	{
		iVar1 = func_526(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_527(iParam0);
	}
	else
	{
		iVar0 = func_526(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return 1;
		}
	}
	if (func_146(*uParam1, 8388608))
	{
		return 1;
	}
	iVar2 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0);
	iVar3 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam2);
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

float func_499(int iParam0, int iParam1)
{
	return func_522(iParam0, iParam1, 1, 1);
}

float func_500(var uParam0)
{
	return uParam0->f_28;
}

void func_501(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_179(uParam0, 134217728);
	}
	else
	{
		func_198(uParam0, 134217728);
	}
}

void func_502()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

int func_503(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return 0;
	}
	if ((WEAPON::_0x6E4E1A82081EABED(Global_1939178->f_38) || joaat("WEAPON_THROWN_BOLAS") == Global_1939178->f_38) && Global_1939178->f_21)
	{
	}
	else if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, 0, 0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar2) && iParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2))
		{
			return 0;
		}
	}
	if (Global_1939178->f_34 != 0)
	{
		if (PED::_0xB676EFDA03DADA52(Global_1939178->f_34, 1) == iParam0)
		{
			return 0;
		}
	}
	if (bParam3)
	{
		if (((WEAPON::_0xCB690F680A3EA971(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_522(iVar0, iParam0, 1, 1) <= 4f)
		{
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((bParam1 && WEAPON::_0xCB690F680A3EA971(iVar0, 4)) || (bParam2 && WEAPON::_0xCB690F680A3EA971(iVar0, 2)))
		{
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_0x6AD66548840472E5(func_602(iVar0, 0)))
		{
			if (func_603(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_504(var uParam0)
{
	return uParam0->f_17;
}

int func_505(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_12 > fParam3)
	{
		return 0;
	}
	fVar0 = -1f;
	if (!func_146(*uParam0, 4194304))
	{
		fVar0 = fParam3;
	}
	if (PED::_0x06087579E7AA85A9(iParam1, Global_34, -1f, fParam3, -1f, fVar0))
	{
		return 1;
	}
	if (*uParam0 & 32768 != 0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_34, 17))
		{
			return 1;
		}
	}
	return 0;
}

int func_506(var uParam0)
{
	return uParam0->f_18;
}

int func_507(var uParam0)
{
	return uParam0->f_19;
}

int func_508(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
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
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, false) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((bParam1 && WEAPON::_0xCB690F680A3EA971(iVar0, 4)) || (bParam2 && WEAPON::_0xCB690F680A3EA971(iVar0, 2)))
		{
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_0x6AD66548840472E5(func_602(iVar0, 0)))
		{
			if (func_604(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_509(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1939178->f_12)
	{
		if ((bParam2 || Global_1939178->f_13 > 0) || Global_1939178->f_11 > 0)
		{
			return 1;
		}
	}
	else if (bParam1 && !Global_1939178->f_9 == 1370593166)
	{
		return 0;
	}
	if (Global_1939178->f_14 > 0 || (bParam2 && Global_1939178->f_14 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1939178->f_7)
		{
			if (bParam2 || Global_1939178->f_15 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_510(var uParam0)
{
	return uParam0->f_24;
}

int func_511(var uParam0)
{
	return uParam0->f_22;
}

int func_512(var uParam0)
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

int func_513(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_605(iParam0, vParam4, 0.5f))
	{
		if (ENTITY::_0x0C9DBF48C6BA6E4C(iParam0, vParam4, 17))
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

int func_514(int iParam0)
{
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, false))
	{
		if (Global_1939178->f_38 == joaat("WEAPON_UNARMED"))
		{
			return 1;
		}
		if (WEAPON::IS_WEAPON_VALID(Global_1939178->f_40))
		{
			if (WEAPON::_0x959383DCD42040DA(Global_1939178->f_40) || WEAPON::_0xC4DEC3CA8C365A5D(Global_1939178->f_40))
			{
				return 1;
			}
		}
	}
	if (func_606(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_515(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (PED::_0x772A1969F649E902(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_516(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_607(iParam1))
		{
			return 0;
		}
	}
	fVar0 = 5f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return 1;
	}
	return 0;
}

int func_517(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_607(iParam1))
		{
			return 0;
		}
	}
	fVar0 = 10f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return 1;
	}
	return 0;
}

int func_518(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = func_608(uParam0);
	if (func_607(iParam1))
	{
		return 0;
	}
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x2BA9D7BF629F920C(iParam1);
	}
	if (fParam2 < fVar0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, &(Global_1939178->f_28[iParam3]), 17))
		{
			if (PED::_0x06087579E7AA85A9(iParam1, &(Global_1939178->f_28[iParam3]), -1f, -1f, -1f, -1f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_519(int iParam0, int iParam1)
{
	if (!TASK::_0xEFC4303DDC6E60D3(iParam0))
	{
		return 0;
	}
	*iParam1 = TASK::_0xED1F514AF4732258(iParam0);
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

int func_520(int iParam0, int iParam1)
{
	if (PED::_0xB65A4DAB460A19BD(iParam0) == iParam1)
	{
		return 1;
	}
	if (WEAPON::_0x8D50F43298AB9545(iParam0, iParam1))
	{
		return 1;
	}
	if (!WEAPON::_0x6E4E1A82081EABED(func_609(iParam0, 1, 0, 0)) && !func_609(iParam0, 1, 0, 0) == joaat("WEAPON_THROWN_BOLAS"))
	{
		return 0;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iParam0, 16, 0))
	{
		if (PED::GET_MELEE_TARGET_FOR_PED(iParam0) == iParam1)
		{
			return 1;
		}
	}
	return 0;
}

bool func_521(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

float func_522(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) && bParam3)
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) && bParam3)
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false), bParam2);
}

int func_523(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_524(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

float func_524(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

float func_525(var uParam0)
{
	return uParam0->f_25;
}

int func_526(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, true))
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseOwnerTeamA"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseOwnerTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_527(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, true))
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseTeamA") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseTeamA"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseTeamB") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_528(int iParam0, vector3 vParam1, float fParam4)
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
	fVar9 = func_610(vVar3, vVar6);
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
	if (func_611(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

int func_529(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	float fVar2;

	if (Global_1939178->f_34 != 0)
	{
		bVar0 = true;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), 1, 1))
		{
			return 1;
		}
	}
	if (bVar0)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, Global_1939178->f_34, 1, 1))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (PED::_0x947E43F544B6AB34(iParam0, PLAYER::GET_PLAYER_INDEX(), 10, 400))
		{
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
		if (PED::_0x947E43F544B6AB34(iParam0, PLAYER::GET_PLAYER_INDEX(), 11, 400))
		{
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
		if (bParam3)
		{
			if (func_519(Global_34, &iVar1))
			{
				if (fParam4 < 4f)
				{
					if (PED::IS_PED_RAGDOLL(iParam0) || (!bParam2 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar1, iParam0)))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (PED::_0x29FCE825613FEFCA(iParam0, 400))
		{
			return 1;
		}
	}
	if (fParam4 <= 0f)
	{
		fVar2 = func_522(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
	}
	else
	{
		fVar2 = fParam4;
	}
	if (fVar2 < 1f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0))
		{
			if (!bParam2)
			{
				return 1;
			}
			else if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	if (bVar0)
	{
		if (func_522(iParam0, Global_1939178->f_34, 0, 1) < 2.5f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_1939178->f_34, iParam0))
			{
				if (!bParam2)
				{
					return 1;
				}
				else if (PED::IS_PED_RAGDOLL(iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_530(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_599(1, &iVar0, &iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iVar0 != iParam0)
		{
			if (PED::_0x06087579E7AA85A9(iParam0, Global_34, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_34, 17))
				{
					if (!bParam2 || !func_532(uParam1, iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (iVar1 != iParam0)
		{
			if (PED::_0x06087579E7AA85A9(iParam0, Global_34, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_34, 17))
			{
				if (!bParam2 || !func_532(uParam1, iVar1))
				{
					if (func_524(iVar1, Global_35, 1) < 5f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_531(var uParam0)
{
	return func_146(*uParam0, 131072);
}

int func_532(var uParam0, int iParam1)
{
	int iVar0;

	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bIsCriminal") && DECORATOR::DECOR_GET_BOOL(iParam1, "bIsCriminal"))
	{
		return 1;
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam1, 4, false))
	{
		return 1;
	}
	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam1);
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

int func_533(int iParam0)
{
	return 0;
}

int func_534(var uParam0)
{
	return uParam0->f_21;
}

int func_535(int iParam0, var uParam1, bool bParam2, float fParam3)
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
	if (PED::IS_PED_FACING_PED(iParam0, Global_34, 90f))
	{
		if (PED::_0x06087579E7AA85A9(iParam0, Global_34, -1f, -1f, -1f, -1f))
		{
			return 1;
		}
	}
	else if (fParam3 < 1.5f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, Global_34))
		{
			return 1;
		}
	}
	return 0;
}

int func_536(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<11> Var2;

	Var2.f_10 = 1106247680;
	iVar1 = 1;
	while (iVar1 <= 23)
	{
		*iParam1 = iVar1;
		func_31(&Var2, *iParam1, -1, -1, 255);
		iVar0 = (iVar0 + Var2);
		if (iVar0 >= iParam0)
		{
			iVar0 = (iVar0 - Var2);
			*iParam2 = 0;
			while (*iParam2 <= (Var2 - 1))
			{
				if (iVar0 == iParam0)
				{
					return 1;
				}
				iVar0++;
				*iParam2++;
			}
		}
		iVar1++;
	}
	return 0;
}

struct<2> func_537(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

void func_538()
{
	func_101(&(Global_1245803->f_2003));
}

void func_539(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = Global_1275573->f_21;
	Var1 = { func_282(iParam0, joaat("LAST_INTERACTION_TIMESTAMP")) };
	if (!STATS::STAT_ID_SET_INT(&Var1, iVar0, true))
	{
	}
}

int func_540(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_0xBC0884BC590951C7(iParam1, 0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_612(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == ((*Global_1949759)[iVar0 /*23*/])->f_11 && iParam1 == ((*Global_1949759)[iVar0 /*23*/])->f_4)
				{
					if (iParam3 <= Global_1949759[iVar0 /*23*/])
					{
						return iVar0;
					}
				}
				Jump @140; //curOff = 127
				if (iVar1 == 0)
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
			if (iVar1 != 0)
			{
				func_613(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}

int func_541(int iParam0)
{
	return iParam0;
}

void func_542(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_434(iParam0))
	{
		return;
	}
	iVar0 = func_541(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(((*Global_1949759)[iVar0 /*23*/])->f_3, iParam1, bParam2);
}

bool func_543(int iParam0)
{
	return MISC::IS_BIT_SET(Local_519.f_18.f_141, iParam0);
}

void func_544(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_434(iParam0))
	{
		return;
	}
	iVar0 = func_541(iParam0);
	if (bParam1)
	{
		func_614(iParam0, 4);
		if (bParam3)
		{
			func_615(iVar0, 1);
		}
		func_616(iVar0, 1);
	}
	else
	{
		func_617(iParam0, 4);
		func_616(iVar0, 0);
	}
}

int func_545(int iParam0)
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

void func_546(int iParam0)
{
	if (!func_618(iParam0))
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

var func_547(int iParam0, var uParam1)
{
	return AUDIO::_PLAY_AMBIENT_SPEECH1(iParam0, uParam1);
}

void func_548(char[4] cParam0, char[4] cParam1, char[4] cParam2, var uParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam3->f_97)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam3[iVar0 /*4*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam3[iVar0 /*4*/]))
			{
				if (!AUDIO::IS_PED_IN_CURRENT_CONVERSATION(&cParam0, uParam3[iVar0 /*4*/], 0))
				{
					AUDIO::ADD_PED_TO_CONVERSATION(&cParam0, uParam3[iVar0 /*4*/], &(((*uParam3)[iVar0 /*4*/])->f_1));
				}
			}
		}
		iVar0++;
	}
}

int func_549(int iParam0)
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

int func_550(struct<2> Param0, var uParam2)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_468(Param0, &vVar0);
	if (func_619(Param0, vVar0.x, uParam2))
	{
		return 1;
	}
	return 0;
}

int func_551(int iParam0)
{
	switch (iParam0)
	{
		case 3:
		case 4:
		case 5:
		case 7:
		case 11:
		case 12:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
			return 1;
		case 1:
			if (func_552() >= 1)
			{
				return 1;
			}
			if (func_316(16))
			{
				return 1;
			}
			break;
		case -1:
			return 0;
	}
	return 0;
}

int func_552()
{
	return Local_519.f_3;
}

char* func_553(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

bool func_554(var uParam0)
{
	return func_367(*uParam0, 2);
}

int func_555(int iParam0)
{
	return NETWORK::GET_TIME_DIFFERENCE(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
}

int func_556(int iParam0, int iParam1)
{
	if (!func_381(iParam0, 0))
	{
		return func_621(func_620(iParam0), iParam1);
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

void func_557(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case joaat("AMMO_REVOLVER_AMMOBOX"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_USED"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REVOLVER_EXPRESS");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REVOLVER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX"):
			*uParam1 = joaat("PISTOL_AMMO_BOX");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_USED"):
			*uParam1 = joaat("PISTOL_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("PISTOL_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_PISTOL_EXPRESS");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("PISTOL_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_PISTOL_HIGH_VELOCITY");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX"):
			*uParam1 = joaat("RIFLE_AMMO_BOX");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_USED"):
			*uParam1 = joaat("RIFLE_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("RIFLE_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_RIFLE_EXPRESS");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("RIFLE_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_RIFLE_HIGH_VELOCITY");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX"):
			*uParam1 = joaat("REPEATER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_USED"):
			*uParam1 = joaat("REPEATER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("REPEATER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REPEATER_EXPRESS");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("REPEATER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REPEATER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX"):
			*uParam1 = joaat("SHOTGUN_AMMO_BOX");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_USED"):
			*uParam1 = joaat("SHOTGUN_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_SLUG"):
			*uParam1 = joaat("SHOTGUN_AMMO_BOX_SLUG");
			*uParam2 = joaat("AMMO_SHOTGUN_SLUG");
			break;
		case joaat("AMMO_22_AMMOBOX"):
			*uParam1 = joaat("22_AMMO_BOX");
			*uParam2 = joaat("AMMO_22");
			break;
	}
}

bool func_558()
{
	return !&Global_1912978;
}

void func_559(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1912978->f_3)
	{
		if ((((&Global_1912978->f_4[iVar0 /*6*/] == iParam0 && (Global_1912978->f_4[iVar0 /*6*/])->f_2 == bParam2) && (Global_1912978->f_4[iVar0 /*6*/])->f_3 == bParam3) && (Global_1912978->f_4[iVar0 /*6*/])->f_4 == bParam4) && (Global_1912978->f_4[iVar0 /*6*/])->f_5 == bParam5)
		{
			(Global_1912978->f_4[iVar0 /*6*/])->f_1 = ((Global_1912978->f_4[iVar0 /*6*/])->f_1 + iParam1);
			return;
		}
		iVar0++;
	}
	if (Global_1912978->f_3 < 19)
	{
		Global_1912978->f_4[Global_1912978->f_3 /*6*/] = iParam0;
		(Global_1912978->f_4[Global_1912978->f_3 /*6*/])->f_1 = iParam1;
		(Global_1912978->f_4[Global_1912978->f_3 /*6*/])->f_2 = bParam2;
		(Global_1912978->f_4[Global_1912978->f_3 /*6*/])->f_3 = bParam3;
		(Global_1912978->f_4[Global_1912978->f_3 /*6*/])->f_4 = bParam4;
		(Global_1912978->f_4[Global_1912978->f_3 /*6*/])->f_5 = bParam5;
		Global_1912978->f_3++;
	}
}

char* func_560(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_561(int iParam0, int iParam1)
{
	if (!func_381(iParam0, 0))
	{
		return false;
	}
	return INVENTORY::_0x245D07651B1D183B(iParam0, iParam1);
}

int func_562(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;

	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(iParam0, &Var3))
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

char* func_563(int iParam0)
{
	if (func_556(iParam0, -1995062316))
	{
		return "collectible_arrowheads";
	}
	if (func_556(iParam0, 1239889275))
	{
		return "collectible_liquor_bottles";
	}
	if (func_556(iParam0, 143267379))
	{
		return "collectible_coins";
	}
	if (func_556(iParam0, -944041124))
	{
		return "colectible_heirlooms";
	}
	if (func_556(iParam0, 1562621600))
	{
		return "collectible_jewelry";
	}
	if (func_556(iParam0, -149719013))
	{
		return "collectible_bird_eggs";
	}
	if (func_556(iParam0, 1940829793))
	{
		return "collectible_tarot_cards";
	}
	if (func_556(iParam0, 781094263))
	{
		return "collectible_flowers";
	}
	return "";
}

int func_564(int iParam0)
{
	switch (iParam0)
	{
		case -1696039442:
		case 688466329:
		case 759802290:
			return 0;
		default:
			break;
	}
	return 1;
}

int func_565(int iParam0)
{
	struct<19> Var0;
	int iVar35;

	if (!func_381(iParam0, 0))
	{
		return 0;
	}
	Var0.f_2 = 5;
	Var0.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(iParam0, &Var0))
	{
		iVar35 = 0;
		while (iVar35 < 8)
		{
			if ((Var0.f_18[iVar35 /*2*/])->f_1 == 14460646)
			{
				if (&Var0.f_18[iVar35 /*2*/] != 0)
				{
					return &(Var0.f_18[iVar35 /*2*/]);
				}
			}
			iVar35++;
		}
	}
	return 0;
}

char* func_566(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_567(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_622(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	return iVar0;
}

int func_568(int iParam0, char* sParam1)
{
	int iVar0;
	char cVar1[128];

	if (!func_381(iParam0, 0))
	{
		return 0;
	}
	StringCopy(sParam1, func_623(iParam0), 128);
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);
	if (!func_624(iParam0))
	{
		return 0;
	}
	StringCopy(&cVar1, func_625(iParam0), 128);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
		return 0;
	}
	StringConCat(&cVar1, " - ", 128);
	iVar0 = (iVar0 + HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar1));
	StringConCat(&cVar1, sParam1, 128);
	if (iVar0 >= 127)
	{
		return 0;
	}
	*sParam1 = { cVar1 };
	return 1;
}

char* func_569(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

char* func_570(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_566(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

var func_571(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_626(sParam0, sParam1, iParam2);
	return uVar20;
}

struct<2> func_572(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

struct<14> func_573(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

struct<4> func_574(bool bParam0)
{
	int iVar0;

	iVar0 = func_491(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_4)))
		{
			Global_1272170->f_4 = { func_579(923904168, func_580(bParam0), -740156546, bParam0) };
		}
		return Global_1272170->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_16)))
		{
			Global_1272170->f_16 = { func_579(923904168, func_580(bParam0), -740156546, 0) };
		}
		return Global_1272170->f_16;
	}
	return func_579(923904168, func_580(bParam0), -740156546, 0);
}

void func_575(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_576(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_491(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_577(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;
	struct<13> Var15;
	struct<16> Var31;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (func_627(iParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_586(*uParam1, &Var0, bParam6, 0, -1))
	{
		return 0;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!func_463(bParam6))
	{
		iVar14 = -1;
		if (func_28() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = iParam0;
			Var15 = { *uParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_628(joaat("USE"), &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31 = bParam5;
				Var31.f_7 = iParam4;
				func_629(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_491(bParam6), uParam1, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_578(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<6> Var1[5];
	int iVar32;
	int iVar33;
	int iVar34;
	struct<16> Var35;
	struct<16> Var51;

	if (func_627(iParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_490(iParam0, joaat("DEFAULT"));
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_463(bParam4))
	{
		if (iVar0 == 0)
		{
			return 0;
		}
		if (!func_630(&Var1, &iVar32, iParam0, iVar0, iParam1, 1) || iVar32 < 1)
		{
			return 0;
		}
		iVar34 = -1;
		Var35.f_9 = 1;
		Var35.f_11 = -1591664384;
		iVar33 = 0;
		while (iVar33 < iVar32)
		{
			Var35 = { func_631(iParam0, Var1[iVar33 /*6*/]) };
			Var35.f_12 = iParam2;
			iVar34 = func_628(joaat("USE"), &Var35, 1);
			if (iVar34 == -1)
			{
				return 0;
			}
			iVar33++;
		}
		if (iVar34 != -1)
		{
			Var51.f_7 = -142743235;
			Var51 = bParam3;
			Var51.f_7 = iParam2;
			func_629(iVar34, Var51);
			return 1;
		}
		return 0;
	}
	if (!INVENTORY::_0xB4158C8C9A3B5DCE(func_491(bParam4), iParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

struct<4> func_579(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, bool bParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_381(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_491(bParam6), &uParam1, iParam0, bParam5, &Var0);
	return Var0;
}

struct<4> func_580(bool bParam0)
{
	int iVar0;

	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_491(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1272170))
			{
				*Global_1272170 = { func_579(joaat("CHARACTER"), func_632(), -1591664384, bParam0) };
			}
			return *Global_1272170;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_12)))
			{
				Global_1272170->f_12 = { func_579(joaat("CHARACTER"), func_632(), -1591664384, 0) };
			}
			return Global_1272170->f_12;
		}
	}
	return func_579(joaat("CHARACTER"), func_632(), -1591664384, bParam0);
}

int func_581(int iParam0, bool bParam1)
{
	if (func_485(iParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
	{
		if (bParam1)
		{
			return func_633();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_582(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_634(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

int func_583(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_635(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_584(bool bParam0)
{
	int iVar0;

	iVar0 = func_491(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_8)))
		{
			Global_1272170->f_8 = { func_579(271701509, func_580(bParam0), 12999093, 0) };
		}
		return Global_1272170->f_8;
	}
	return func_579(271701509, func_580(bParam0), 12999093, 0);
}

int func_585(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_485(iParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &bVar0))
		{
			if (func_636(iParam0, iParam1, bVar0))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

bool func_586(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_637(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_587()
{
	if ((Global_1939231->f_10485 != (Global_1939231->f_38.f_203 - 1) || func_639(func_638(0), Global_1939231->f_10478, 0, 1, 1) > 0) || Global_1939231->f_10485 == 15)
	{
		return 1;
	}
	func_640();
	if (Global_1939231->f_6)
	{
		return 1;
	}
	return 0;
}

void func_588(int iParam0)
{
	Global_1939231->f_10 = iParam0;
}

void func_589(int iParam0)
{
	Global_1939231->f_9 = iParam0;
}

void func_590(int iParam0)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = -1;
}

int func_591()
{
	return Global_1051202->f_12;
}

char* func_592()
{
	return "unnamed";
}

int func_593(int iParam0)
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

int func_594(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return func_641(35, iParam0);
}

int func_595(int iParam0)
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

bool func_596(int iParam0)
{
	if (func_642(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) != 1)
		{
			func_643(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) == 1;
}

int func_597()
{
	if (func_644())
	{
		return 0;
	}
	if (Global_1572887->f_13 == -1)
	{
		if (Global_1939178->f_38 == joaat("WEAPON_LASSO"))
		{
			return PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_ATTACK"));
		}
		return PED::GET_PED_RESET_FLAG(Global_34, 311);
	}
	else
	{
		return &(Global_1954472->f_1616[3]);
	}
	return 0;
}

void func_598(var uParam0, var uParam1)
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

int func_599(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1939178->f_26))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1939178->f_26))
		{
			*iParam1 = Global_1939178->f_26;
			iVar0 = 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1939178->f_27))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1939178->f_27))
		{
			if (PED::_0x3AA24CCC0D451379(Global_1939178->f_27) || ENTITY::IS_ENTITY_DEAD(Global_1939178->f_27))
			{
				*iParam2 = Global_1939178->f_27;
				iVar0 = 1;
			}
		}
	}
	if (Global_1939178->f_24 && !PED::IS_PED_INJURED(Global_34))
	{
		iVar1 = PED::_0xB65A4DAB460A19BD(Global_34);
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

int func_600(var uParam0)
{
	int iVar0;
	int iVar1;

	if (iVar0 == 0)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_INTERACT_LOCKON_DETACH_HORSE")))
		{
			if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar1, 0, 0))
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
			if (!Global_1939178->f_6)
			{
				iVar0 = PED::_0x4B19F171450E0D4F(Global_34);
			}
		}
		if (iVar0 == 0)
		{
			iVar0 = PED::_0xB65A4DAB460A19BD(Global_34);
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

void func_601(var uParam0)
{
	int iVar0;

	if (Global_1939178->f_32 == 0)
	{
		func_198(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1939178->f_33)
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(Global_1939178->f_28[iVar0])))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(&(Global_1939178->f_28[iVar0])))
				{
					func_179(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}

var func_602(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

int func_603(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_604(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_604(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_605(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

int func_606(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (WEAPON::_0x9E2D5D6BC97A5F1E(iParam0, joaat("WEAPON_UNARMED"), iParam1))
		{
			return 1;
		}
		else if (!bParam2)
		{
			if (WEAPON::IS_WEAPON_VALID(Global_1939178->f_38))
			{
				if (WEAPON::_0x959383DCD42040DA(Global_1939178->f_38) || Global_1939178->f_38 == joaat("WEAPON_MELEE_KNIFE"))
				{
					if (WEAPON::_0x9E2D5D6BC97A5F1E(iParam0, Global_1939178->f_38, iParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_607(int iParam0)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0))
	{
		return 0;
	}
	iVar0 = TASK::_0x2D0571BB55879DA2(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (((((((((iVar0 == joaat("WORLD_PLAYER_SLEEP_GROUND") || iVar0 == joaat("PROP_PLAYER_SLEEP_A_FRAME_TENT_PLAYER_CAMPS")) || iVar0 == joaat("WORLD_HUMAN_SLEEP_GROUND_ARM")) || iVar0 == joaat("WORLD_HUMAN_SLEEP_GROUND_PILLOW")) || iVar0 == joaat("WORLD_ANIMAL_DOG_SLEEPING")) || iVar0 == joaat("PROP_HUMAN_SLEEP_BED_PILLOW")) || iVar0 == joaat("PROP_PLAYER_PRPTY_SAVE_GAME")) || iVar0 == joaat("PROP_HUMAN_SLEEP_BED_PILLOW_LEFT")) || iVar0 == joaat("PROP_HUMAN_SLEEP_BED_PILLOW_RIGHT")) || iVar0 == joaat("PROP_PLAYER_SLEEP_TENT_A_FRAME"))
	{
		return 1;
	}
	if (iVar0 == joaat("PROP_PLAYER_SLEEP_TENT_A_FRAME") || iVar0 == joaat("WORLD_PLAYER_SLEEP_BEDROLL"))
	{
		iVar0 = PED::_0xC22AA08A8ADB87D4(iParam0);
		if (iVar0 == joaat("PROP_PLAYER_SLEEP_TENT_MALE_A"))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

float func_608(var uParam0)
{
	return uParam0->f_27;
}

int func_609(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = joaat("WEAPON_UNARMED");
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || !PED::IS_PED_HUMAN(iParam0))
	{
		return iVar0;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam1, iParam2, bParam3))
	{
		return iVar0;
	}
	return iVar0;
}

float func_610(vector3 vParam0, vector3 vParam3)
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

bool func_611(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

bool func_612(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1949759)[iParam0 /*23*/])->f_1 && iParam1) != 0;
}

void func_613(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, iParam24);
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
	func_615(iParam0, 1);
	func_616(iParam0, 1);
	func_617(iParam0, 128);
}

void func_614(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1949759)[iParam0 /*23*/])->f_1 = (((*Global_1949759)[iParam0 /*23*/])->f_1 - (((*Global_1949759)[iParam0 /*23*/])->f_1 && iParam1));
}

void func_615(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iParam0 /*23*/])->f_3))
	{
		if (((*Global_1949759)[iParam0 /*23*/])->f_5 == 5 && !func_612(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1949759)[iParam0 /*23*/])->f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1949759)[iParam0 /*23*/])->f_3, bParam1);
		}
	}
}

void func_616(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iParam0 /*23*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1949759)[iParam0 /*23*/])->f_3, bParam1);
	}
}

void func_617(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1949759)[iParam0 /*23*/])->f_1 = (((*Global_1949759)[iParam0 /*23*/])->f_1 || iParam1);
}

bool func_618(int iParam0)
{
	return func_612(iParam0, 2);
}

int func_619(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (!func_645(iParam0))
	{
		return 0;
	}
	if (func_646(iParam0, uParam1, &uVar0))
	{
		func_647(iParam0, &uVar0, uParam2);
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_620(int iParam0)
{
	return iParam0;
}

int func_621(int iParam0, int iParam1)
{
	if (!func_648(iParam0, 2))
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

int func_622(int iParam0, int iParam1)
{
	struct<2> Var0[20];
	int iVar41;
	int iVar42;
	int iVar43;

	iVar41 = 0;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_TAG_DATA(iParam0, &Var0, &iVar42, 20))
	{
		iVar43 = 0;
		while (iVar43 < iVar42)
		{
			if ((Var0[iVar43 /*2*/])->f_1 == iParam1)
			{
				iVar41 = &Var0[iVar43 /*2*/];
				return iVar41;
			}
			iVar43++;
		}
	}
	return 0;
}

char* func_623(int iParam0)
{
	int iVar0;

	if (!func_381(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_424(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(iVar0);
}

int func_624(int iParam0)
{
	if (func_485(iParam0) == -126813555 || func_485(iParam0) == 1946043663)
	{
		return 1;
	}
	return 0;
}

char* func_625(int iParam0)
{
	int iVar0;

	if (!func_381(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_565(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(iVar0);
}

void func_626(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

int func_627(int iParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_628(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_649(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_650(NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 16), iVar0, uParam1);
		}
	}
	else
	{
		return func_651(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

void func_629(int iParam0, struct<16> Param1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1272170->f_20)
	{
		if (&Global_1272170->f_20.f_1[iVar0 /*20*/] == iParam0)
		{
			if ((Global_1272170->f_20.f_1[iVar0 /*20*/])->f_1 == 1 || (Global_1272170->f_20.f_1[iVar0 /*20*/])->f_1 == 5)
			{
				(Global_1272170->f_20.f_1[iVar0 /*20*/])->f_4 = { Param1 };
			}
			return;
		}
		iVar0++;
	}
}

int func_630(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	var uVar0;

	*iParam1 = 0;
	if (iParam4 < 1)
	{
		return 0;
	}
	if (iParam3 == 0)
	{
		iParam3 = func_490(iParam2, joaat("DEFAULT"));
		if (iParam3 == 0)
		{
			return 0;
		}
	}
	uVar0 = 5;
	if (!NETSHOPPING::_0xD1555FBC96C88444(iParam2, iParam3, iParam4, &uVar0, 5))
	{
		return 0;
	}
	if (!func_652(uParam0, iParam1, &uVar0, iParam4, bParam5))
	{
		return 0;
	}
	return 1;
}

struct<16> func_631(int iParam0, var uParam1)
{
	struct<16> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { func_579(iParam0, *uParam1, uParam1->f_4, 1) };
	Var0.f_4 = { *uParam1 };
	Var0.f_8 = iParam0;
	Var0.f_9 = uParam1->f_5;
	Var0.f_11 = uParam1->f_4;
	return Var0;
}

struct<4> func_632()
{
	struct<4> Var0;

	return Var0;
}

bool func_633()
{
	return (func_653(joaat("UPGRADE_OFFHAND_HOLSTER"), 0, 0, 0) > 0 && func_654(func_579(joaat("WARDROBE"), func_580(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_634(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_381(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_490(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_579(iParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_491(bParam6), &Var1, bParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_491(bParam6), iParam0, bParam8);
	}
	return iVar0;
}

int func_635(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_491(0);
	*uParam1 = { func_579(iParam0, func_574(0), iParam3, 0) };
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

int func_636(int iParam0, int iParam1, bool bParam2)
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

int func_637(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_491(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

int func_638(int iParam0)
{
	return PLAYER::_0xF49F14462F0AE27C(PLAYER::GET_PLAYER_INDEX());
}

int func_639(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = func_385(iParam1, bParam2, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = (iVar0 + func_655(INVENTORY::_0x13D234A2A3F66E63(iParam0), iParam1));
	}
	if (bParam3)
	{
		iVar0 = (iVar0 + func_656(iParam1, bParam4));
	}
	return iVar0;
}

void func_640()
{
	if (!func_381(Global_1939231->f_10478, 0))
	{
		Global_1939231->f_6 = 0;
	}
	else if ((((func_657(Global_1939231->f_10478, 1224357681) != 0 && Global_1939231->f_10477 != 0) && Global_1939231->f_10477 != -2074770370) && !Global_1915180->f_20136) && !Global_1915180->f_21989.f_1)
	{
		Global_1939231->f_6 = 1;
	}
	else
	{
		Global_1939231->f_6 = 0;
	}
}

int func_641(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_658(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 == func_659())
	{
		return func_658(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1275573->f_22[iParam1])
	{
		return func_658(&(((*Global_1097610)[iParam1 /*51*/])->f_4), iVar0, 5);
	}
	return 0;
}

int func_642(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26832), iParam0))
	{
		return 1;
	}
	return 0;
}

void func_643(int iParam0)
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
		func_660(iParam0);
		return;
	}
	if (&Global_1070356->f_19683.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_661(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 1;
}

int func_644()
{
	switch (Global_1939178->f_38)
	{
		case joaat("WEAPON_MELEE_LANTERN"):
		case joaat("WEAPON_KIT_BINOCULARS"):
		case joaat("WEAPON_MELEE_LANTERN_ELECTRIC"):
		case joaat("WEAPON_MELEE_DAVY_LANTERN"):
		case joaat("WEAPON_KIT_BINOCULARS_IMPROVED"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_645(int iParam0)
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

bool func_646(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1132968->f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_662(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_647(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_663(iParam0, uParam2->f_1);
	uParam1->f_2 = -2140901307;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_2 = iVar0;
	uParam1->f_2 = -2140901307;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_9), uParam1);
	uParam1->f_2 = 1292053410;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_17), uParam1);
	if (*uParam2 == 3)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_664(iVar0);
		}
	}
	else if (*uParam2 == 4)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = iVar0;
		}
	}
	else if (*uParam2 == 5)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_665(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_666(iVar0);
		}
		uParam1->f_2 = 162343104;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_667(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_7 = func_668(iVar0);
	uParam1->f_2 = 1060782978;
	DATAFILE::_DATAFILE_GET_HASH(&(uParam2->f_8), uParam1);
	uParam1->f_2 = 162343104;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_6), uParam1);
	uParam1->f_2 = -733480474;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_25), uParam1);
	uParam1->f_2 = 492825771;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_26), uParam1);
	uParam1->f_2 = -839279581;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_27), uParam1);
	uParam1->f_2 = -640941103;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_28), uParam1);
	iVar0 = 0;
	uParam1->f_2 = -2025968302;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_29 = iVar0;
	iVar0 = 0;
	uParam1->f_2 = -1829781569;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_30 = iVar0;
	iVar0 = 0;
	uParam1->f_2 = -1999176766;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_31 = iVar0;
}

int func_648(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(iParam0, iParam1);
}

int func_649(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = NETSHOPPING::_0x6C9F12700BCE69F4(iParam0, uParam1);
	if (iParam0 == joaat("USE"))
	{
		if (func_178(iVar0, 2048))
		{
			return 0;
		}
	}
	else if (func_178(iVar0, 8))
	{
		return 0;
	}
	else if (func_178(iVar0, 16))
	{
		return 0;
	}
	else if (func_178(iVar0, 65536))
	{
		return 0;
	}
	return 1;
}

int func_650(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_669(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_669(iParam1, 2, 0, 0);
	return -1;
}

int func_651(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_669(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

int func_652(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	int iVar0;

	*iParam1 = 0;
	if (*uParam0 != 5)
	{
		return 0;
	}
	else if (*uParam2 != 5)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iParam3 < 1)
		{
			Jump @200; //curOff = 49
		}
		else if (((*uParam2)[iVar0 /*6*/])->f_4 == 0)
		{
			Jump @191; //curOff = 67
		}
		else if (((*uParam2)[iVar0 /*6*/])->f_5 == 0)
		{
		}
		else
		{
			*((*uParam0)[*iParam1 /*6*/]) = { *((*uParam2)[iVar0 /*6*/]) };
			((*uParam0)[*iParam1 /*6*/])->f_4 = ((*uParam2)[iVar0 /*6*/])->f_4;
			if (((*uParam2)[iVar0 /*6*/])->f_5 > iParam3)
			{
				((*uParam0)[*iParam1 /*6*/])->f_5 = iParam3;
				iParam3 = 0;
			}
			else
			{
				((*uParam0)[*iParam1 /*6*/])->f_5 = ((*uParam2)[iVar0 /*6*/])->f_5;
				iParam3 = (iParam3 - ((*uParam0)[*iParam1 /*6*/])->f_5);
			}
			*iParam1++;
		}
		iVar0++;
	}
	if (bParam4 && iParam3 > 0)
	{
		*iParam1 = 0;
		return 0;
	}
	return 1;
}

int func_653(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_670(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_491(bParam1), iParam0, bParam3);
}

int func_654(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, int iParam6)
{
	return func_671(&uParam0, bParam4, bParam5, iParam6);
}

int func_655(int iParam0, int iParam1)
{
	struct<4> Var0;
	int iVar4;

	if (!func_381(iParam1, 0))
	{
		return 0;
	}
	Var0 = { func_672(iParam0, iParam1) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	iVar4 = INVENTORY::_0xC97E0D2302382211(iParam0, &Var0, false);
	return iVar4;
}

int func_656(int iParam0, bool bParam1)
{
	if (!bParam1 || func_673())
	{
		return func_634(iParam0, func_580(1), -2015960939, 1, 1, 0);
	}
	return 0;
}

int func_657(int iParam0, int iParam1)
{
	struct<2> Var0[20];
	int iVar41;
	int iVar42;

	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_TAG_DATA(iParam0, &Var0, &iVar41, 20))
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

bool func_658(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_659()
{
	return Global_1099294->f_339;
}

void func_660(int iParam0)
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
	func_661(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 0;
}

void func_661(int iParam0)
{
	if ((Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 != 0)
	{
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_2 = 0;
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 = 0;
	}
}

int func_662(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("CHALLENGE");
			break;
		case -3:
			iVar0 = 1300413597;
			break;
		case 1:
			iVar0 = joaat("FEATURE");
			break;
		case -2:
			iVar0 = joaat("GOLD");
			break;
		case 2:
			iVar0 = joaat("MISSION_STORY");
			break;
		case 3:
			iVar0 = joaat("MISSION_PROCEDURAL");
			break;
		case 4:
			iVar0 = joaat("MISSION_FETCH");
			break;
		case 5:
			iVar0 = joaat("MISSION_MINIGAME");
			break;
		case 6:
			iVar0 = joaat("MISSION_FREE_MODE_EVENT");
			break;
		case 7:
			iVar0 = joaat("MISSION_UGC");
			break;
		case 8:
			iVar0 = joaat("MISSION_BEAT");
			break;
		case 9:
			iVar0 = joaat("PROPERTY");
			break;
		case 10:
			iVar0 = joaat("RECIPE");
			break;
		case 11:
			iVar0 = joaat("TITLE");
			break;
		case 12:
			iVar0 = joaat("SHOP");
			break;
		case 13:
			iVar0 = joaat("GFH_GIVERS");
			break;
		case 14:
			iVar0 = joaat("GFH_LOCATIONS");
			break;
		case 15:
			iVar0 = 1332629624;
			break;
		case 16:
			iVar0 = 1746212499;
			break;
		case 17:
			iVar0 = joaat("GVO_UNLOCKS");
			break;
		case 18:
			iVar0 = 1151893103;
			break;
		case 19:
			iVar0 = -312924468;
			break;
	}
	return iVar0;
}

int func_663(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_674(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_664(int iParam0)
{
	switch (iParam0)
	{
		case 1336837986:
			return 0;
		case 2124631622:
			return 1;
		case joaat("ROBBERY_TRAIN"):
			return 2;
		case 1443764480:
			return 3;
		case -668110249:
			return 4;
		case -1381389849:
			return 5;
		case 536699577:
			return 6;
		case 541147288:
			return 7;
		case 377122918:
			return 8;
		case 1158195437:
			return 9;
		case joaat("AMBUSH"):
			return 10;
		case -621956193:
			return 11;
		case joaat("GANG_EVENT_SHOWDOWN"):
			return 12;
		case joaat("GANG_EVENT_IMPROMPTU_RACE"):
			return 13;
		case -867762478:
			return 14;
		case 602097925:
			return 15;
		case joaat("TRAIN_ESCORT"):
			return 16;
		case joaat("IWD_1V1"):
			return 17;
		case joaat("IWD_PVP"):
			return 18;
		case joaat("IWD_PF"):
			return 20;
		case joaat("IWD_PLF"):
			return 21;
		case joaat("IWD_F"):
			return 28;
		case joaat("IWD_INF"):
			return 19;
		case joaat("ASSASSINATION"):
			return 22;
		case joaat("ASSASSINATION_TRACKING"):
			return 23;
		case joaat("ASSASSINATION_PVP_PLAYER"):
			return 24;
		case joaat("ASSASSINATION_PVP_POSSE"):
			return 25;
		case joaat("COACH_HOLDUP_ROBBERY"):
			return 26;
		case joaat("COACH_HOLDUP_KIDNAPPING"):
			return 27;
		default:
			break;
	}
	return -1;
}

int func_665(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BLACKJACK"):
			return 0;
		case joaat("DOMINOES"):
			return 1;
		case joaat("POKER"):
			return 2;
		case joaat("FILLET"):
			return 3;
		case joaat("MILKING_COW"):
			return 4;
		case joaat("CLEAN_STALLS"):
			return 5;
		case joaat("FENCE_BUILDING"):
			return 6;
		default:
			break;
	}
	return -1;
}

int func_666(int iParam0)
{
	switch (iParam0)
	{
		case joaat("ARCHERY"):
			return 0;
		case joaat("CHALLENGES"):
			return 1;
		case joaat("DEAD_DROP"):
			return 2;
		case joaat("GOLDEN_HAT"):
			return 3;
		case joaat("HOT_PROPERTY"):
			return 4;
		case joaat("KING_OF_THE_CASTLE"):
			return 5;
		case joaat("KING_OF_THE_RAILS"):
			return 6;
		case joaat("PV_CHALLENGE_HERBALIST"):
			return 12;
		case joaat("PV_CHALLENGE_BIGGEST_FISH"):
			return 13;
		case joaat("PV_CHALLENGE_FLYING_BIRD"):
			return 14;
		case joaat("HUNT_THE_POSSE_LEADER"):
			return 15;
		case joaat("ESCAPED_CONVICTS"):
			return 7;
		case joaat("SUPPLY_TRAIN"):
			return 9;
		case joaat("ROUND_UP"):
			return 8;
		case joaat("WRECKAGE"):
			return 10;
		case joaat("CONDOR_EGG"):
			return 11;
		default:
			break;
	}
	return -1;
}

int func_667(int iParam0)
{
	switch (iParam0)
	{
		case joaat("UGC_MAJOR_ID_DBG_VERSUS"):
			return 0;
		case joaat("UGC_MAJOR_ID_DBG_DEATHMATCH"):
			return 1;
		case joaat("UGC_MAJOR_ID_DBG_RACE"):
			return 2;
		case 2006131499:
			return 3;
		case -1641798436:
			return 4;
		case 352400957:
			return 5;
		case 1211286129:
			return 6;
		case 787592898:
			return 7;
		case joaat("UGC_MAJOR_ID_LBM"):
			return 8;
		case joaat("UGC_MAJOR_ID_MOONSHINE_COOP"):
			return 9;
		default:
			break;
	}
	return 0;
}

int func_668(int iParam0)
{
	switch (iParam0)
	{
		case joaat("NULL"):
			return -1;
		case joaat("NORMAL"):
			return 0;
		case joaat("INTRO_CHAR"):
			return 1;
		case joaat("INTRO_GENERIC"):
			return 2;
		case 1322114923:
			return 3;
		case joaat("INTRO_FREEMODE"):
			return 4;
		case joaat("INTRO_CLAY2"):
			return 5;
		case joaat("TEAMSTER"):
			return 6;
		case joaat("BOUNTYHUNTER"):
			return 7;
		case joaat("GUNSLINGER"):
			return 8;
		case joaat("OUTLAW"):
			return 9;
		case joaat("HUNTER"):
			return 10;
		case joaat("TRADER"):
			return 11;
		case joaat("COLLECTOR"):
			return 12;
		case joaat("SEASON005"):
			return 13;
		case joaat("VIPSEASON005"):
			return 14;
		case joaat("MOONSHINER"):
			return 15;
		case joaat("SEASON006"):
			return 16;
		case joaat("VIPSEASON006"):
			return 17;
		default:
			break;
	}
	return -1;
}

void func_669(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1272170->f_20)
	{
		if (&Global_1272170->f_20.f_1[iVar0 /*20*/] == iParam0)
		{
			if ((Global_1272170->f_20.f_1[iVar0 /*20*/])->f_1 == iParam1)
			{
			}
			else
			{
				(Global_1272170->f_20.f_1[iVar0 /*20*/])->f_1 = iParam1;
			}
			if (iParam2 != 0 && iParam3 != 0)
			{
				(Global_1272170->f_20.f_1[iVar0 /*20*/])->f_2 = iParam2;
				(Global_1272170->f_20.f_1[iVar0 /*20*/])->f_3 = iParam3;
			}
			return;
		}
		iVar0++;
	}
	func_675(iParam0, iParam1, iParam2, iParam3);
}

bool func_670(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(iParam0);
}

int func_671(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_676(uParam0, bParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

struct<4> func_672(int iParam0, int iParam1)
{
	struct<5> Var0;

	Var0 = { func_677(iParam0) };
	return func_678(iParam0, iParam1, Var0, Var0.f_4);
}

int func_673()
{
	int iVar0;

	if (!NETWORK::_0x255A5EF65EDA9167(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	iVar0 = PLAYER::_0xB9050A97594C8832(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (!func_679(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_674(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_680(iParam0, uParam1, &uVar0))
	{
		func_681(&uVar0, iParam0, uParam2);
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_675(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<20> Var1;

	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1272170->f_20 < 20)
	{
		Global_1272170->f_20++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*(Global_1272170->f_20.f_1[iVar0 /*20*/]) = { *(Global_1272170->f_20.f_1[iVar0 + 1 /*20*/]) };
			iVar0++;
		}
	}
	Var1 = -1;
	Var1.f_4.f_7 = -142743235;
	Var1 = iParam0;
	Var1.f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Var1.f_2 = iParam2;
		Var1.f_3 = iParam3;
	}
	*(Global_1272170->f_20.f_1[(Global_1272170->f_20 - 1) /*20*/]) = { Var1 };
}

int func_676(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_491(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, uParam0, bParam1, &uVar0))
	{
		return 0;
	}
	if (!func_637(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return 0;
	}
	return 1;
}

struct<5> func_677(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_678(iParam0, joaat("CHARACTER"), func_632(), -1591664384) };
	Var0.f_4 = 1084182731;
	return Var0;
}

struct<4> func_678(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_381(iParam1, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(iParam0, &uParam2, iParam1, bParam6, &Var0);
	return Var0;
}

int func_679(int iParam0)
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("HUNTERCART01"):
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_680(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1132968->f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_662(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_681(var uParam0, int iParam1, var uParam2)
{
	var uVar0;

	*uParam2 = iParam1;
	uParam0->f_2 = -611386243;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_1), uParam0);
	uParam0->f_2 = -2140901307;
	if (DATAFILE::_DATAFILE_GET_HASH(&uVar0, uParam0))
	{
		uParam2->f_2 = uVar0;
	}
	uParam0->f_2 = -2140901307;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_11), uParam0);
	uParam0->f_2 = 1292053410;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_19), uParam0);
	uParam0->f_2 = 1234058424;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_3), uParam0);
}

