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
	struct<27> Local_21 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_48 = 4;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	int iLocal_58 = 0;
	struct<342> Local_59 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -39308912, 1, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, -1816535547, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1 } ;
	struct<75> Local_401 = { 0, 0, 0, -1, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7 } ;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	struct<10> Local_483[7];
	int iScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	fLocal_15 = 1f;
	fLocal_16 = 1f;
	iLocal_58 = joaat("W_BINOCULAR_INNER01");
	if (Global_1051388->f_4537)
	{
		func_1(iScriptParam_0);
	}
	func_2();
	while (!func_3(0, 0) && func_4())
	{
		BUILTIN::WAIT(0);
	}
	func_5();
	func_6();
}

void func_1(int iParam0)
{
	func_7(7, iParam0);
	func_8();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_401, 82, 47);
	func_9(NETWORK::_0xBA24095EA96DFE17(&Local_401), 82, "m_PHST_HostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_483, 71, 48);
	func_10(NETWORK::_0x690806BC83BC8CA2(Local_483[0 /*10*/]), 71, "m_PHST_PlayerData");
	func_11(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
}

int func_2()
{
	func_12();
	func_13();
	func_14();
	func_15();
	func_16();
	func_17();
	func_18();
	return 1;
}

int func_3(bool bParam0, bool bParam1)
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

int func_4()
{
	switch (Local_59.f_58)
	{
		case 0:
			if (func_19())
			{
				Local_59.f_58 = 1;
			}
			break;
		case 1:
			if (!func_20())
			{
				return 0;
			}
			if (Global_1051388->f_4537)
			{
				func_21();
			}
			break;
	}
	return 1;
}

void func_5()
{
	if (Global_1051388->f_4537.f_3)
	{
		Global_1051388->f_4537.f_3 = 0;
		if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && !func_22(0))
		{
			CAM::DO_SCREEN_FADE_IN(1000);
		}
	}
	func_23();
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
		if (func_24() == 0)
		{
			if (func_25())
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

int func_9(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

int func_10(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_11(bool bParam0)
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

int func_12()
{
	if (!func_26(18))
	{
		return 0;
	}
	if (!func_27(18) || func_28(18))
	{
		return 0;
	}
	DATAFILE::_DATAFILE_REGISTER_QUERY(&(Global_1915180->f_19847[18]), 1084942842, "SHOP_TYPE/BACKGROUNDS/BACKGROUND(id=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(&(Global_1915180->f_19847[18]), 350029031, "SHOP_TYPE/POSES/POSE(id=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(&(Global_1915180->f_19847[18]), 843957109, "PROPS");
	DATAFILE::_DATAFILE_REGISTER_QUERY(&(Global_1915180->f_19847[18]), 290941431, "PROPS/PROP(%i)");
	func_29(Global_1915180->f_19887[18], 16);
	return 1;
}

void func_13()
{
	Global_1051388->f_4537.f_7 = 0;
	Local_59.f_30 = 0;
	Local_59.f_56 = 0;
	Local_59.f_31 = 0;
	Local_59.f_111 = 0;
	Local_59.f_113 = 0;
	Local_59.f_117 = 0;
	Local_59.f_74 = "CameraViewfinderStudio";
	Local_59.f_75 = "CameraViewfinderForceOutro";
	Local_59.f_76 = "CameraTakePictureStudio";
	Local_59.f_79 = 0;
	Local_59.f_77 = "FACE_HUMAN@GEN_MALE@PORTRAIT";
	Local_59.f_78 = "facials@gen_male@portrait";
	Local_59.f_66 = 0f;
	Local_21.f_23 = 0;
	switch ((Global_1051388->f_69[18 /*76*/])->f_18)
	{
		case 12:
			Local_59.f_14 = { -811.0848f, -1374.732f, 43.0233f };
			Local_59.f_17 = 86.2824f;
			Local_59.f_22 = { -813.9198f, -1375.396f, 43.216f };
			Local_59.f_25 = 304.6703f;
			Local_59.f_18 = { -811.0161f, -1373.142f, 43.0233f };
			Local_59.f_21 = 82.6367f;
			if (Global_1051388->f_4537)
			{
				Local_21.f_26 = 12;
				Local_59 = { -808.9622f, -1374.784f, 34.2373f };
				Local_59.f_3 = { 2.5419f, 0f, 89.4133f };
				Local_59.f_9 = 29.8f;
				Local_59.f_26 = { -816.0643f, -1374.725f, 34.93691f };
				Local_59.f_118 = { -816.0643f, -1374.725f, 34.93691f };
				Local_59.f_121 = { 0f, 0f, 0f };
				Local_59.f_88 = joaat("MP005_P_BLA_PHOTO01X_BLA");
				Local_59.f_112 = VOLUME::_CREATE_VOLUME_BOX(-813.74f, -1374.56f, 35.02f, 0f, 0f, 0f, 5f, 5f, 3f);
				Local_59.f_10 = { -814.8005f, -1374.676f, 33.2272f };
				Local_59.f_13 = 274.5823f;
			}
			else
			{
				Local_21.f_26 = 2;
				Local_59 = { -812.2573f, -1374.602f, 44.3923f };
				Local_59.f_3 = { 2.464f, 0f, 92.7079f };
				Local_59.f_9 = 34.7f;
				Local_59.f_26 = { -817.1328f, -1375.047f, 44.5194f };
				Local_59.f_88 = joaat("P_BLA_PHOTO01X");
				Local_59.f_10 = { -814.8005f, -1374.676f, 43.2272f };
				Local_59.f_13 = 274.5823f;
			}
			break;
		case 60:
			Local_59.f_14 = { 2732.675f, -1117.746f, 48.1073f };
			Local_59.f_17 = 227.78f;
			Local_59.f_22 = { 2734.343f, -1119.988f, 48.1337f };
			Local_59.f_25 = 47.9115f;
			Local_59.f_18 = { 2734.672f, -1117.845f, 48.1059f };
			Local_59.f_21 = 300f;
			if (Global_1051388->f_4537)
			{
				Local_21.f_26 = 11;
				Local_59 = { 2731.593f, -1115.825f, 39.3665f };
				Local_59.f_3 = { 1.0968f, 0f, -153.3803f };
				Local_59.f_9 = 31.1492f;
				Local_59.f_26 = { 2734.613f, -1121.733f, 39.8153f };
				Local_59.f_88 = joaat("MP005_P_BLA_PHOTO01X_STD");
				Local_59.f_118 = { 2734.613f, -1121.733f, 39.8153f };
				Local_59.f_121 = { 0f, 0f, 117f };
				Local_59.f_112 = VOLUME::_CREATE_VOLUME_BOX(2734.43f, -1119.7f, 40.13f, 0f, 0f, 0f, 5f, 5f, 3f);
				Local_59.f_10 = { 2734.1f, -1120.6f, 38.134f };
				Local_59.f_13 = 23.8f;
			}
			else
			{
				Local_21.f_26 = 1;
				Local_59 = { 2733.209f, -1118.628f, 49.521f };
				Local_59.f_3 = { -1.9048f, 0f, -155.1498f };
				Local_59.f_9 = 34.7f;
				Local_59.f_26 = { 2734.884f, -1122.124f, 49.597f };
				Local_59.f_88 = joaat("P_BLA_PHOTO02X");
				Local_59.f_10 = { 2734.1f, -1120.6f, 48.134f };
				Local_59.f_13 = 23.8f;
			}
			break;
	}
	func_30();
	if (Global_1051388->f_4537)
	{
		Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/] = 0;
		(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_8 = 0;
		(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_1 = 0;
		(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_3 = -1;
		(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_4 = 0;
		(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_9 = 0;
		(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_2 = 0;
	}
	GRAPHICS::_0x5199405EABFBD7F0("CameraTransitionWipe_L");
	GRAPHICS::_0x5199405EABFBD7F0("CameraTransitionWipe_R");
}

void func_14()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	struct<10> Var3;
	struct<14> Var17;

	iVar0 = -1;
	Var3.f_9 = -1591664384;
	Var17 = { func_31(0, -1591664384, -1591664384, -1591664384, -424477160, 0, 0) };
	if (func_32(&Var17, &iVar0, &bVar1, 0))
	{
		bVar2 = false;
		bVar2 = false;
		while (bVar2 < bVar1)
		{
			if (func_33(&Var3, bVar2, iVar0, bVar1))
			{
				if (Local_59.f_193 >= 20)
				{
					func_34(iVar0);
					return;
				}
				Local_59.f_130[Local_59.f_193] = Var3.f_4;
				Local_59.f_193++;
			}
			bVar2++;
		}
	}
	func_34(iVar0);
}

void func_15()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	struct<10> Var3;
	struct<14> Var17;

	iVar0 = -1;
	Var3.f_9 = -1591664384;
	Var17 = { func_31(0, -1591664384, -1591664384, -1591664384, 1160200607, 0, 0) };
	if (func_32(&Var17, &iVar0, &bVar1, 0))
	{
		bVar2 = false;
		bVar2 = false;
		while (bVar2 < bVar1)
		{
			if (func_33(&Var3, bVar2, iVar0, bVar1))
			{
				if (Local_59.f_204 >= 6)
				{
					func_34(iVar0);
					return;
				}
				Local_59.f_197[Local_59.f_204] = Var3.f_4;
				Local_59.f_204++;
			}
			bVar2++;
		}
	}
	func_34(iVar0);
}

int func_16()
{
	struct<4> Var0;
	struct<4> Var5;
	int iVar10;
	var uVar11;

	Var0 = &Global_1915180->f_19847[18];
	Var5 = &Global_1915180->f_19847[18];
	iVar10 = 0;
	while (iVar10 < Local_59.f_193)
	{
		Var0.f_2 = 1084942842;
		Var0.f_3 = &Local_59.f_130[iVar10];
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var5.f_1), &Var0))
		{
			Var5.f_2 = -1407851228;
			if (Global_1051388->f_4537)
			{
				Var5.f_3 = joaat("SMODELPOSSE");
			}
			else
			{
				Var5.f_3 = joaat("SMODEL");
			}
			DATAFILE::_DATAFILE_GET_HASH(&uVar11, &Var5);
			Local_59.f_151[iVar10] = uVar11;
			Var5.f_3 = joaat("SLIGHTING");
			DATAFILE::_DATAFILE_GET_HASH(&uVar11, &Var5);
			Local_59.f_172[iVar10] = uVar11;
		}
		else
		{
			Local_59.f_151[iVar10] = 0;
		}
		iVar10++;
	}
	return 1;
}

void func_17()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!Global_1051388->f_4537)
	{
		return;
	}
	iVar0 = 0;
	iVar2 = 2147483647;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (iVar1 == NETWORK::PARTICIPANT_ID() || (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1) && Local_483[iVar0 /*10*/]) /* PointerArith */)
		{
			if (iVar1 != NETWORK::PARTICIPANT_ID())
			{
				if ((Local_483[iVar0 /*10*/])->f_1 < iVar2)
				{
					iVar2 = (Local_483[iVar0 /*10*/])->f_1;
					iVar3 = iVar1;
				}
			}
		}
		iVar0++;
	}
	if (iVar2 < 2147483647)
	{
		(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_5 = (Local_483[iVar3 /*10*/])->f_5;
		(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_8 = (Local_483[iVar3 /*10*/])->f_8;
		iVar4 = 0;
		iVar5 = 0;
		iVar5 = 0;
		while (iVar5 < Local_59.f_193)
		{
			if (&Local_59.f_151[iVar5] == (Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_5)
			{
				Local_59.f_127 = iVar5;
				iVar4 = 0;
				while (iVar4 < 4)
				{
					if (func_36(&(Local_59.f_130[iVar5]), func_35(Local_59.f_128)))
					{
						Jump @293; //curOff = 255
					}
					else
					{
						Local_59.f_128++;
						if (Local_59.f_128 >= 4)
						{
							Local_59.f_128 = 0;
						}
					}
					iVar4++;
				}
			}
			else
			{
				iVar5++;
			}
		}
		iVar5 = 0;
		while (iVar5 < Local_59.f_204)
		{
			if (&Local_59.f_197[iVar5] == (Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_8)
			{
				Local_59.f_208 = iVar5;
			}
			else
			{
				iVar5++;
			}
		}
	}
	GRAPHICS::SET_TIMECYCLE_MODIFIER("MP_photo_posse");
}

void func_18()
{
	if ((Global_1051388->f_69[18 /*76*/])->f_18 == 12)
	{
		ENTITY::REMOVE_MODEL_HIDE(-814.042f, -1374.27f, 44.941f, 2f, joaat("P_POT_FLOWERARNG05X"), 0);
		ENTITY::REMOVE_MODEL_HIDE(-814.042f, -1374.27f, 44.941f, 2f, joaat("P_PLANTSTAND01X"), 0);
		ENTITY::REMOVE_MODEL_HIDE(-814.042f, -1374.27f, 44.941f, 2f, joaat("P_CHAIR12BX"), 0);
	}
	else if ((Global_1051388->f_69[18 /*76*/])->f_18 == 60)
	{
		ENTITY::REMOVE_MODEL_HIDE(2734.165f, -1119.711f, 50.122f, 2f, joaat("P_CHAIRDINING02X"), 0);
		ENTITY::REMOVE_MODEL_HIDE(2734.165f, -1119.711f, 50.122f, 2f, joaat("NEW_PHOTO_TABLECLOTH"), 0);
		ENTITY::REMOVE_MODEL_HIDE(2734.165f, -1119.711f, 50.122f, 2f, joaat("P_SIDETABLE19X"), 0);
	}
}

int func_19()
{
	if ((!AUDIO::_0xD9130842D7226045("RDRO_Photo_Shop_Sounds", 0) || GRAPHICS::_0xBF2DD155B2ADCD0A("CameraTransitionWipe_L")) || GRAPHICS::_0xBF2DD155B2ADCD0A("CameraTransitionWipe_R"))
	{
		return 0;
	}
	return 1;
}

int func_20()
{
	func_37();
	func_38();
	if (Global_1051388->f_4537.f_7 != 14 && Global_1051388->f_4537.f_7 != 15)
	{
		if (Global_1051388->f_4537.f_3)
		{
			func_39(14);
		}
		else
		{
			func_40();
		}
	}
	if (Global_1051388->f_4537)
	{
		func_41();
	}
	switch (Global_1051388->f_4537.f_7)
	{
		case 0:
			CAM::DO_SCREEN_FADE_OUT(500);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
			func_42();
			STREAMING::REQUEST_MODEL(Local_59.f_94, false);
			if (!STREAMING::HAS_MODEL_LOADED(Local_59.f_94))
			{
				return 1;
			}
			func_39(1);
			break;
		case 1:
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			else
			{
				CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
				if (!func_43())
				{
					return 1;
				}
				if (!func_44())
				{
					return 1;
				}
				if (!func_45())
				{
					return 1;
				}
				if (!func_46())
				{
					return 1;
				}
				func_47();
				if (Global_1051388->f_4537 && !Local_59.f_196)
				{
				}
				else if (!func_48(1))
				{
				}
				else
				{
					FIRE::_0x754937C28271BC65(Local_59.f_65);
					FIRE::STOP_FIRE_IN_RANGE(Local_59.f_26, 5f);
					func_49();
					func_50();
					func_51();
					func_52(1);
					func_53(Local_59.f_29);
					func_54();
					func_39(4);
					Jump @879; //curOff = 405
					if (Local_59.f_61 == 1)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("CameraTransitionWipe_R");
					}
					else
					{
						GRAPHICS::ANIMPOSTFX_PLAY("CameraTransitionWipe_L");
					}
					func_55(&(Local_59.f_338), 0);
					func_39(3);
					Jump @879; //curOff = 450
					if (func_56(&(Local_59.f_338)) < 250)
					{
					}
					else
					{
						CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
						if (!func_48(0))
						{
						}
						else
						{
							if (Local_59.f_61 == 1)
							{
								GRAPHICS::_0xC5CB91D65852ED7E("CameraTransitionWipe_R");
							}
							else
							{
								GRAPHICS::_0xC5CB91D65852ED7E("CameraTransitionWipe_L");
							}
							func_57(&(Local_59.f_338));
							func_39(4);
							Jump @879; //curOff = 527
							func_58();
							if (CAM::IS_SCREEN_FADED_OUT())
							{
								if (PED::GET_PED_CONFIG_FLAG(func_59(), 408, true))
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_59(), false, true);
								}
								CAM::DO_SCREEN_FADE_IN(500);
							}
							if (!CAM::IS_SCREEN_FADED_IN())
							{
							}
							else if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("CameraTransitionWipe_L") || GRAPHICS::ANIMPOSTFX_IS_RUNNING("CameraTransitionWipe_R"))
							{
							}
							else
							{
								func_60();
								func_39(5);
								Jump @879; //curOff = 621
								func_58();
								func_61();
								Jump @879; //curOff = 632
								func_58();
								func_61();
								if (!PED::GET_PED_CONFIG_FLAG(func_59(), 408, true))
								{
									func_60();
									func_39(5);
								}
								Jump @879; //curOff = 668
								func_58();
								func_61();
								if (!PED::GET_PED_CONFIG_FLAG(func_59(), 408, true))
								{
									func_60();
									func_39(5);
								}
								Jump @879; //curOff = 704
								func_58();
								if (!func_62(700))
								{
								}
								else
								{
									func_39(2);
									Jump @879; //curOff = 730
									func_58();
									func_63();
									func_39(10);
									Jump @879; //curOff = 747
									func_58();
									if (!func_62(1000))
									{
									}
									else
									{
										func_39(4);
										Jump @879; //curOff = 773
										func_58();
										if (func_64())
										{
											func_39(4);
										}
										Jump @879; //curOff = 792
										func_58();
										if (func_65())
										{
											func_39(4);
										}
										Jump @879; //curOff = 811
										func_58();
										func_66(1);
										func_67();
										func_39(10);
										Jump @879; //curOff = 833
										func_58();
										if (!CAM::IS_SCREEN_FADING_OUT())
										{
											CAM::DO_SCREEN_FADE_OUT(1000);
										}
										if (CAM::IS_SCREEN_FADED_OUT())
										{
											func_39(15);
										}
										Jump @879; //curOff = 868
										func_23();
										return 0;
									}
								}
							}
						}
					}
				}
			}
			return 1;
		}

void func_21()
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
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	struct<4> Var17;
	int iVar21;
	bool bVar22;
	int iVar23;
	bool bVar24;

	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (!Local_401)
		{
			NETWORK::RESERVE_NETWORK_MISSION_PEDS(7);
			Local_401 = true;
		}
		iVar3 = -1;
		iVar8 = 0;
		iVar0 = 0;
		while (iVar0 < 7)
		{
			iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
			if ((NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2) && (Local_483[iVar0 /*10*/])->f_1 > 0) && !&Local_483[iVar0 /*10*/])
			{
				iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2);
				iVar8 = NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iVar7);
				iVar9 = (Local_483[iVar0 /*10*/])->f_1;
			}
			else
			{
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 7)
		{
			iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
			if ((NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2) && Local_483[iVar0 /*10*/]) /* PointerArith */)
			{
				if (iVar8 != 0 && (Local_483[iVar0 /*10*/])->f_1 >= iVar9)
				{
					iVar8 = 0;
				}
			}
			iVar0++;
		}
		Local_401.f_1 = iVar8;
		iVar1 = 0;
		while (iVar1 < 7)
		{
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_401.f_36[iVar1])))
			{
				func_68(iVar1);
				if (iVar3 < 0)
				{
					iVar3 = iVar1;
				}
			}
			else
			{
				bVar5 = false;
				iVar0 = 0;
				while (iVar0 < 7)
				{
					iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
					if ((NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2) && Local_483[iVar0 /*10*/]) /* PointerArith */)
					{
						iVar10 = NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2));
						if (&Local_401.f_20[iVar1] == iVar10)
						{
							bVar6 = false;
							if (&Local_401.f_28[iVar1] != iVar10)
							{
								if ((Local_483[iVar0 /*10*/])->f_3 == iVar1)
								{
									Local_401.f_28[iVar1] = iVar10;
								}
								else
								{
									bVar6 = true;
								}
							}
							if (!bVar6)
							{
								if (&Local_401.f_66[iVar1] != (Local_483[iVar0 /*10*/])->f_2 && (Local_483[iVar0 /*10*/])->f_2 != 0)
								{
									Local_401.f_66[iVar1] = (Local_483[iVar0 /*10*/])->f_2;
								}
								bVar5 = true;
							}
							else
							{
								Jump @492; //curOff = 437
								if (&Local_401.f_28[iVar1] == iVar10)
								{
									bVar5 = true;
								}
								else if (MISC::IS_BIT_SET((Local_483[iVar0 /*10*/])->f_4, iVar1))
								{
									Local_401.f_28[iVar1] = iVar10;
									bVar5 = true;
								}
								iVar0++;
							}
							if (!bVar5)
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_401.f_36[iVar1])))
								{
									if (!func_69(Local_401.f_44[iVar1 /*3*/]))
									{
										func_55(Local_401.f_44[iVar1 /*3*/], 0);
									}
									if (func_56(Local_401.f_44[iVar1 /*3*/]) > 5000)
									{
										iVar4 = NETWORK::NET_TO_PED(&(Local_401.f_36[iVar1]));
										PED::DELETE_PED(&iVar4);
										func_68(iVar1);
										if (iVar3 < 0)
										{
											iVar3 = iVar1;
										}
									}
								}
								else
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(&(Local_401.f_36[iVar1]));
								}
							}
							else if (func_69(Local_401.f_44[iVar1 /*3*/]))
							{
								func_57(Local_401.f_44[iVar1 /*3*/]);
							}
							iVar1++;
							iVar0 = 0;
							while (iVar0 < 7)
							{
								iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
								bVar13 = false;
								if ((NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2) && Local_483[iVar0 /*10*/]) /* PointerArith */ && (Local_483[iVar0 /*10*/])->f_3 < 0)
								{
									iVar10 = NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2));
									iVar1 = 0;
									while (iVar1 < 7)
									{
										if (&Local_401.f_20[iVar1] == iVar10)
										{
											bVar13 = true;
											if (!&Local_401.f_74[iVar1])
											{
												if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_401.f_36[iVar1])))
												{
													if (PED::_0xA0BC8FAED8CFEB3C(NETWORK::NET_TO_PED(&(Local_401.f_36[iVar1]))))
													{
														PED::_0x59BD177A1A48600A(NETWORK::NET_TO_PED(&(Local_401.f_36[iVar1])), 1);
														Local_401.f_74[iVar1] = 1;
													}
												}
												else
												{
													NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(&(Local_401.f_36[iVar1]));
												}
											}
										}
										else
										{
											iVar1++;
										}
									}
									if (!bVar13)
									{
										if (iVar3 > -1)
										{
											if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
											{
												iVar14 = PED::CLONE_PED(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2)), 1.401298E-45f, true, true);
												PED::_SET_PED_COMPONENT_DISABLED(iVar14, joaat("HOLSTERS_LEFT"), 1);
												PED::_UPDATE_PED_VARIATION(iVar14, false, true, true, true, false);
												NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(iVar14, true);
												PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar14, true);
												ENTITY::_0x0918E3565C20F03C(iVar14, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2)), true, false), ENTITY::GET_ENTITY_HEADING(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2))), false, 1);
												ENTITY::FREEZE_ENTITY_POSITION(iVar14, true);
												ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iVar14, false, false);
												ENTITY::SET_ENTITY_VISIBLE(iVar14, false);
												func_70(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2)), iVar14);
												Local_401.f_20[iVar3] = iVar10;
												Local_401.f_28[iVar3] = iVar10;
												Local_401.f_36[iVar3] = NETWORK::PED_TO_NET(iVar14);
											}
										}
										else
										{
											iVar15 = 0;
											iVar1 = 0;
											while (iVar1 < 7)
											{
												if (&Local_401.f_20[iVar1] != &Local_401.f_28[iVar1])
												{
													iVar15 = iVar1;
												}
												else
												{
													iVar1++;
												}
											}
											if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_401.f_36[iVar15])))
											{
												iVar4 = NETWORK::NET_TO_PED(&(Local_401.f_36[iVar15]));
												PED::DELETE_PED(&iVar4);
												func_68(iVar15);
											}
											else
											{
												NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(&(Local_401.f_36[iVar15]));
											}
										}
									}
									else
									{
										iVar0++;
									}
									iVar11 = -1;
									bVar16 = false;
									bVar24 = true;
									iVar0 = 0;
									while (iVar0 < 7)
									{
										iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
										if ((NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2) && (Local_483[iVar0 /*10*/])->f_3 > -1) && (Local_483[iVar0 /*10*/])->f_9 == 1)
										{
											iVar23 = (Local_483[iVar0 /*10*/])->f_3;
											iVar11 = -1;
											if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_401.f_4[iVar23])))
											{
												iVar11 = NETWORK::_0xD7F6781A0ABAF6FB(&(Local_401.f_4[iVar23]));
											}
											if (ANIMSCENE::_0x25557E324489393C(iVar11) && !ANIMSCENE::GET_ANIM_SCENE_BOOL(iVar11, "BREAKLOOP"))
											{
												if (!NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(iVar11))
												{
													NETWORK::_NETWORK_REQUEST_CONTROL_OF_ANIM_SCENE(iVar11);
												}
												else
												{
													ANIMSCENE::SET_ANIM_SCENE_BOOL(iVar11, "BREAKLOOP", true, false);
													iVar1 = 0;
													while (iVar1 < 7)
													{
														if (MISC::IS_BIT_SET((Local_483[iVar0 /*10*/])->f_4, iVar1))
														{
															iVar11 = -1;
															if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_401.f_4[iVar1])))
															{
																iVar11 = NETWORK::_0xD7F6781A0ABAF6FB(&(Local_401.f_4[iVar1]));
															}
															if (ANIMSCENE::_0x25557E324489393C(iVar11) && !ANIMSCENE::GET_ANIM_SCENE_BOOL(iVar11, "BREAKLOOP"))
															{
																if (!NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(iVar11))
																{
																	NETWORK::_NETWORK_REQUEST_CONTROL_OF_ANIM_SCENE(iVar11);
																}
																else
																{
																	ANIMSCENE::SET_ANIM_SCENE_BOOL(iVar11, "BREAKLOOP", true, false);
																}
															}
														}
														iVar1++;
													}
													if (bVar24)
													{
														if ((NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2) && (Local_483[iVar0 /*10*/])->f_9 != 4) && (Local_483[iVar0 /*10*/])->f_9 != 0)
														{
															bVar24 = false;
														}
													}
												}
												iVar0++;
												if (bVar24)
												{
													iVar0 = 0;
													while (iVar0 < 7)
													{
														if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_401.f_4[iVar0])))
														{
															iVar11 = NETWORK::_0xD7F6781A0ABAF6FB(&(Local_401.f_4[iVar0]));
															if (ANIMSCENE::_0x25557E324489393C(iVar11) && !ANIMSCENE::_0xCBFC7725DE6CE2E0(iVar11, 0))
															{
																if (!NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(iVar11))
																{
																	NETWORK::_NETWORK_REQUEST_CONTROL_OF_ANIM_SCENE(iVar11);
																}
																else
																{
																	ANIMSCENE::START_ANIM_SCENE(iVar11);
																}
															}
														}
														iVar0++;
													}
												}
												switch (Local_401.f_2)
												{
													case 0:
														iVar0 = 0;
														while (iVar0 < 7)
														{
															iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
															if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2) && (Local_483[iVar0 /*10*/])->f_9 == 3)
															{
																iVar23 = (Local_483[iVar0 /*10*/])->f_3;
																iVar11 = -1;
																if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_401.f_4[iVar23])))
																{
																	iVar11 = NETWORK::_0xD7F6781A0ABAF6FB(&(Local_401.f_4[iVar23]));
																}
																if (ANIMSCENE::_0x25557E324489393C(iVar11))
																{
																	if (!NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(iVar11))
																	{
																		NETWORK::_NETWORK_REQUEST_CONTROL_OF_ANIM_SCENE(iVar11);
																	}
																	else if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_401.f_36[iVar23])))
																	{
																		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(&(Local_401.f_36[iVar23]));
																	}
																	else if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_401.f_12[iVar23])) && !NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_401.f_12[iVar23])))
																	{
																		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(&(Local_401.f_12[iVar23]));
																	}
																	else
																	{
																		ANIMSCENE::_DELETE_ANIM_SCENE(iVar11);
																		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_401.f_12[iVar23])))
																		{
																			iVar12 = NETWORK::NET_TO_OBJ(&(Local_401.f_12[iVar23]));
																			OBJECT::DELETE_OBJECT(&iVar12);
																			Local_401.f_12[iVar23] = 0;
																		}
																		TASK::CLEAR_PED_TASKS_IMMEDIATELY(NETWORK::NET_TO_PED(&(Local_401.f_36[iVar23])), false, true);
																		func_71(NETWORK::NET_TO_PED(&(Local_401.f_36[iVar23])), Local_59.f_10, Local_59.f_13, 2, 1073741824 /* Float: 2f */);
																		PED::_0x2208438012482A1A(NETWORK::NET_TO_PED(&(Local_401.f_36[iVar23])), false, false);
																		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2) && Local_59.f_209 != (Local_483[iVar0 /*10*/])->f_8)
																		{
																			Local_59.f_209 = (Local_483[iVar0 /*10*/])->f_8;
																			if (Local_59.f_209 != 0 && !func_72())
																			{
																			}
																			else
																			{
																				Local_401.f_3 = iVar23;
																				if (Local_59.f_209 == 0 || MISC::IS_STRING_NULL_OR_EMPTY(&(Local_59.f_210)))
																				{
																					func_73(3);
																				}
																				else
																				{
																					iVar11 = ANIMSCENE::_CREATE_ANIM_SCENE(&(Local_59.f_210), 32768, 0, true, true);
																					Local_401.f_4[iVar23] = NETWORK::_0xE0D73CDDEA79DDCD(iVar11);
																					func_73(1);
																				}
																			}
																			else
																			{
																				iVar0++;
																			}
																			Jump @2958; //curOff = 2149
																			iVar11 = -1;
																			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_401.f_4[Local_401.f_3])))
																			{
																				iVar11 = NETWORK::_0xD7F6781A0ABAF6FB(&(Local_401.f_4[Local_401.f_3]));
																			}
																			if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_401.f_36[Local_401.f_3])))
																			{
																				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(&(Local_401.f_36[Local_401.f_3]));
																			}
																			else if (!ANIMSCENE::_0x477122B8D05E7968(iVar11, 1, 0))
																			{
																				ANIMSCENE::LOAD_ANIM_SCENE(iVar11);
																			}
																			else if (!ANIMSCENE::_0x95531A4A20CCE7BC(iVar11, 0))
																			{
																			}
																			else
																			{
																				iVar0 = 0;
																				while (iVar0 < 7)
																				{
																					iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
																					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2) && (Local_483[iVar0 /*10*/])->f_3 == Local_401.f_3)
																					{
																						bVar16 = true;
																						Var17 = { func_74(iVar0) };
																						ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar11, &Var17, NETWORK::NET_TO_PED(&(Local_401.f_36[Local_401.f_3])), 0);
																						WEAPON::REMOVE_ALL_PED_WEAPONS(NETWORK::NET_TO_PED(&(Local_401.f_36[Local_401.f_3])), true, true);
																						func_70(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2)), NETWORK::NET_TO_PED(&(Local_401.f_36[Local_401.f_3])));
																						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_ENT(&(Local_401.f_36[Local_401.f_3])), true);
																					}
																					else
																					{
																						iVar0++;
																					}
																				}
																				if (bVar16)
																				{
																					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iVar11, Local_59.f_118, Local_59.f_121, 2);
																					func_73(2);
																				}
																				else
																				{
																					Local_401.f_3 = -1;
																					func_73(0);
																				}
																			}
																			Jump @2958; //curOff = 2479
																			iVar0 = 0;
																			while (iVar0 < 7)
																			{
																				iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
																				if ((NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2) && (Local_483[iVar0 /*10*/])->f_3 == Local_401.f_3) && (Local_483[iVar0 /*10*/])->f_2 > 0)
																				{
																					bVar16 = true;
																					iVar21 = ((Local_483[iVar0 /*10*/])->f_2 - 1);
																					bVar22 = PED::IS_PED_MALE(NETWORK::NET_TO_PED(&(Local_401.f_36[(Local_483[iVar0 /*10*/])->f_3])));
																					if ((Local_59.f_218[iVar21 /*17*/])->f_16 == 0)
																					{
																						func_73(3);
																					}
																					else
																					{
																						STREAMING::REQUEST_MODEL((Local_59.f_218[iVar21 /*17*/])->f_16, false);
																						if (STREAMING::HAS_MODEL_LOADED((Local_59.f_218[iVar21 /*17*/])->f_16))
																						{
																							iVar11 = -1;
																							if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_401.f_4[Local_401.f_3])))
																							{
																								iVar11 = NETWORK::_0xD7F6781A0ABAF6FB(&(Local_401.f_4[Local_401.f_3]));
																							}
																							if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_401.f_36[Local_401.f_3])))
																							{
																								NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(&(Local_401.f_36[Local_401.f_3]));
																							}
																							else
																							{
																								iVar12 = OBJECT::CREATE_OBJECT((Local_59.f_218[iVar21 /*17*/])->f_16, Local_59.f_118, true, true, false, false, true);
																								NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(iVar12, true);
																								if (bVar22)
																								{
																									ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar11, Local_59.f_218[iVar21 /*17*/], iVar12, 0);
																								}
																								else
																								{
																									ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar11, &((Local_59.f_218[iVar21 /*17*/])->f_8), iVar12, 0);
																								}
																								Local_401.f_12[Local_401.f_3] = NETWORK::OBJ_TO_NET(iVar12);
																								func_73(3);
																							}
																						}
																					}
																				}
																				else
																				{
																					iVar0++;
																				}
																			}
																			if (!bVar16)
																			{
																				Local_401.f_3 = -1;
																				func_73(0);
																			}
																			Jump @2958; //curOff = 2850
																			iVar0 = 0;
																			while (iVar0 < 7)
																			{
																				iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
																				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2) && (Local_483[iVar0 /*10*/])->f_3 == Local_401.f_3)
																				{
																					bVar16 = true;
																					if ((Local_483[iVar0 /*10*/])->f_9 != 3)
																					{
																						Local_401.f_3 = -1;
																						func_73(0);
																					}
																				}
																				else
																				{
																					iVar0++;
																				}
																			}
																			if (!bVar16)
																			{
																				Local_401.f_3 = -1;
																				func_73(0);
																			}
																			iVar0 = 0;
																			while (iVar0 < 7)
																			{
																				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_401.f_4[iVar0])))
																				{
																					if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_401.f_4[iVar0])))
																					{
																						NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(&(Local_401.f_4[iVar0]));
																					}
																					else
																					{
																						NETWORK::_0x7182EDDA1EE7DB5A(&(Local_401.f_4[iVar0]));
																					}
																				}
																				iVar0++;
																			}
																		}
																	}
																}
															}
														}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}

bool func_22(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915180->f_20136;
	}
	return (Global_1915180->f_20136 || Global_1915180->f_21989.f_1);
}

void func_23()
{
	int iVar0;

	if (Local_59.f_79)
	{
		return;
	}
	if (CAM::DOES_CAM_EXIST(Local_59.f_52))
	{
		CAM::DESTROY_CAM(Local_59.f_52, false);
	}
	if (func_75(Local_59.f_50, 0))
	{
		ENTITY::FREEZE_ENTITY_POSITION(Local_59.f_50, false);
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_59.f_50, false, true);
		PED::_0x2208438012482A1A(Global_34, false, false);
	}
	if (func_75(Global_34, 0))
	{
		ENTITY::FREEZE_ENTITY_POSITION(Global_34, false);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Global_34, true, false);
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_34, Local_59.f_22, Local_59.f_25, true, false, true);
		ENTITY::SET_ENTITY_VISIBLE(Global_34, true);
		TASK::TASK_CLEAR_LOOK_AT(Global_34);
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_34, false, true);
		PED::_0x2208438012482A1A(Global_34, false, false);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_59.f_94);
	ENTITY::SET_ENTITY_VISIBLE(Local_59.f_65, true);
	ENTITY::_0xD2B9C78537ED5759(Local_59.f_64);
	Local_59.f_64 = 0;
	Local_59.f_65 = 0;
	func_76();
	func_18();
	func_52(0);
	func_77();
	iVar0 = 0;
	while (iVar0 < 7)
	{
		(Local_59.f_95[iVar0 /*2*/])->f_1 = 0;
		Local_59.f_95[iVar0 /*2*/] = 0;
		iVar0++;
	}
	GRAPHICS::_0xF1142E5D64B47802(false, false);
	GRAPHICS::_0x614682E715ADBAAC();
	GRAPHICS::_0xD45547D8396F002A();
	PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Global_34);
	STREAMING::REMOVE_CLIP_SET(Local_59.f_78);
	STREAMING::REMOVE_ANIM_DICT(Local_59.f_77);
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("CameraTransitionWipe_R"))
	{
		GRAPHICS::_0xC5CB91D65852ED7E("CameraTransitionWipe_R");
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("CameraTransitionWipe_L"))
	{
		GRAPHICS::_0xC5CB91D65852ED7E("CameraTransitionWipe_L");
	}
	GRAPHICS::_0x37D7BDBA89F13959("CameraViewfinderStudio");
	GRAPHICS::_0x37D7BDBA89F13959("CameraViewfinderForceOutro");
	GRAPHICS::_0x37D7BDBA89F13959("CameraTakePictureStudio");
	GRAPHICS::_0x37D7BDBA89F13959("CameraTransitionWipe_L");
	GRAPHICS::_0x37D7BDBA89F13959("CameraTransitionWipe_R");
	AUDIO::_0x531A78D6BF27014B("RDRO_Photo_Shop_Sounds");
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	func_78(0, 1, 1, 0);
	if (VOLUME::_DOES_VOLUME_EXIST(Local_59.f_112))
	{
		VOLUME::_DELETE_VOLUME(Local_59.f_112);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_59.f_115))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(Local_59.f_115));
		OBJECT::DELETE_OBJECT(&(Local_59.f_115));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_59.f_116))
	{
		OBJECT::DELETE_OBJECT(&(Local_59.f_116));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_59.f_129))
	{
		OBJECT::DELETE_OBJECT(&(Local_59.f_129));
	}
	if (ANIMSCENE::_0x25557E324489393C(Local_59.f_194))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_59.f_194);
	}
	if (Global_1051388->f_4537)
	{
		if (func_79(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/] = 0;
			(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_8 = 0;
			(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_1 = 0;
		}
		GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	}
	Local_59.f_79 = 1;
}

int func_24()
{
	return Global_1572887->f_13;
}

bool func_25()
{
	return Global_1051202->f_8;
}

int func_26(int iParam0)
{
	if (DATAFILE::_0x7907969497EA92F5(&(Global_1915180->f_19847[iParam0])))
	{
		if (DATAFILE::_0x603AC35FD4602C76(&(Global_1915180->f_19847[iParam0])))
		{
			if (!func_80(&(Global_1915180->f_19887[iParam0]), 2))
			{
				func_29(Global_1915180->f_19887[iParam0], 2);
			}
			return 1;
		}
	}
	return 0;
}

int func_27(int iParam0)
{
	if (DATAFILE::_0x7907969497EA92F5(&(Global_1915180->f_19847[iParam0])))
	{
		return func_80(&(Global_1915180->f_19887[iParam0]), 4);
	}
	return 0;
}

int func_28(int iParam0)
{
	if (DATAFILE::_0x7907969497EA92F5(&(Global_1915180->f_19847[iParam0])))
	{
		return func_80(&(Global_1915180->f_19887[iParam0]), 16);
	}
	return 0;
}

void func_29(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_30()
{
	Local_59.f_67[0] = "portrait_normal";
	Local_59.f_67[1] = "portrait_happy";
	Local_59.f_67[2] = "portrait_pensive";
	Local_59.f_67[3] = "portrait_relaxed";
	Local_59.f_67[4] = "portrait_angry";
	Local_59.f_67[5] = "portrait_annoyed";
	Local_59.f_29 = 0;
}

struct<14> func_31(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
	if (iParam6 != 0)
	{
		Var0.f_8 = iParam6;
	}
	return Var0;
}

int func_32(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_81(bParam3), uParam0, bParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_33(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 < 0)
	{
		return 0;
	}
	if (bParam1 < 0 || bParam1 >= bParam3)
	{
		return 0;
	}
	if (!INVENTORY::_0x82FA24C3D3FCD9B7(iParam2, bParam1, iParam0))
	{
		return 0;
	}
	return 1;
}

int func_34(int iParam0)
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

int func_35(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1822204474;
		case 1:
			return -2119261942;
		case 2:
			return -970760213;
		case 3:
			return 919627684;
		default:
			break;
	}
	return 0;
}

int func_36(bool bParam0, int iParam1)
{
	if (!func_82(bParam0, 0))
	{
		return func_84(func_83(bParam0), iParam1);
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

void func_37()
{
	int iVar0;
	struct<8> Var1;
	int iVar20;
	int iVar21;
	int iVar22;
	char cVar23[32];
	int iVar27;
	int iVar28;
	char cVar29[16];
	char cVar31[16];
	int iVar33;

	if (Local_21.f_1 == 1)
	{
		func_85();
	}
	if (Local_21.f_23 == 0 && Local_21.f_1 == 0)
	{
		if (Local_21.f_2)
		{
			if ((MISC::GET_GAME_TIMER() - Local_21.f_21) > 2500)
			{
				iVar0 = GRAPHICS::_0x78C56B8A7B1D000C();
				if (Local_21.f_6 && Local_21.f_7 != iVar0)
				{
					Local_21.f_6 = 0;
				}
				Local_21.f_7 = iVar0;
				func_86();
				Local_21.f_21 = MISC::GET_GAME_TIMER();
			}
		}
	}
	switch (Local_21.f_23)
	{
		case 1:
			if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_STICKY_FEED_CANCEL")))
			{
				_NAMESPACE76::_0x00A15B94CBA4F76F(Local_21.f_19);
				Local_21.f_19 = 0;
				Local_21.f_6 = 1;
				func_87(2);
			}
			break;
		case 0:
			if (func_88(1))
			{
				Local_21.f_25 = 0;
				if (Local_21 || Local_21.f_6)
				{
					func_87(2);
				}
				else if (Local_21.f_7 == Local_21.f_8)
				{
					if (Local_21.f_19 == 0)
					{
						Var1.f_2 = 0;
						Var1.f_7 = MISC::GET_HASH_KEY("IB_BACK");
						Var1.f_7.f_3 = 0;
						Local_21.f_19 = func_89(&Var1, "ERROR_GAL_FULH", "ERROR_GAL_FULT", 0, 0, 1);
						func_87(1);
					}
					else
					{
						Local_21.f_6 = 1;
						func_87(2);
					}
				}
				else
				{
					func_87(2);
				}
			}
			if (func_88(4))
			{
				GRAPHICS::_0x614682E715ADBAAC();
				GRAPHICS::_0x494A9874F17A7D50(1);
				func_87(7);
			}
			break;
		case 2:
			Local_21.f_5 = 0;
			func_87(3);
			Local_21.f_20 = MISC::GET_GAME_TIMER();
			break;
		case 3:
			if ((MISC::GET_GAME_TIMER() - Local_21.f_20) > 0)
			{
				Local_21.f_20 = MISC::GET_GAME_TIMER();
				if (Local_21 || Local_21.f_6)
				{
					func_87(4);
				}
				else
				{
					GRAPHICS::_0xD45547D8396F002A();
					GRAPHICS::BEGIN_TAKE_HIGH_QUALITY_PHOTO();
					Local_21.f_7++;
					func_87(5);
				}
			}
			break;
		case 5:
			Local_21.f_24 = GRAPHICS::GET_STATUS_OF_TAKE_HIGH_QUALITY_PHOTO();
			if (Local_21.f_24 == 1)
			{
			}
			if (Local_21.f_24 == 0)
			{
				Local_21.f_25 = 1;
				GRAPHICS::_0x2705D18C11B61046(0);
				GRAPHICS::_0x8E6AFF353C09652E(Local_21.f_26);
				if ((Local_21.f_26 == 12 || Local_21.f_26 == 11) || Local_21.f_26 == 13)
				{
					POSSE::_0xC08AFF658B2E51DA(&iVar20);
					if (iVar20 != 0)
					{
						GRAPHICS::_0x564837D4A9EDE296(iVar20);
					}
					if (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						iVar21 = 0;
						while (iVar21 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
						{
							iVar22 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar21);
							if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar22))
							{
								GRAPHICS::_0x75D568607909333E(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar22));
							}
							iVar21++;
						}
					}
				}
				StringCopy(&cVar23, "", 32);
				iVar27 = func_90();
				if (func_91(iVar27))
				{
					MemCopy(&cVar23, {func_92(iVar27)}, 4);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar23))
				{
					iVar28 = func_93();
					StringCopy(&cVar23, func_94(iVar28), 32);
				}
				GRAPHICS::_0xD1031B83AC093BC7(&cVar23);
				StringCopy(&cVar29, "", 16);
				StringCopy(&cVar31, "", 16);
				iVar33 = func_95();
				if (func_96(iVar33))
				{
					StringCopy(&cVar29, func_97(iVar33), 16);
					StringCopy(&cVar31, func_98(iVar33), 16);
				}
				GRAPHICS::_0x9937FACBBF267244(&cVar29);
				GRAPHICS::_0x8952E857696B8A79(&cVar31);
				GRAPHICS::SAVE_HIGH_QUALITY_PHOTO(0);
				Local_21.f_3 = 0;
				func_87(6);
			}
			else if (Local_21.f_24 == 2)
			{
				func_87(4);
			}
			break;
		case 6:
			if (Local_21.f_3 == 0)
			{
				SCRIPTS::SET_NO_LOADING_SCREEN(false);
				Local_21.f_3 = 1;
			}
			Local_21.f_24 = GRAPHICS::GET_STATUS_OF_SAVE_HIGH_QUALITY_PHOTO();
			if (Local_21.f_24 == 0)
			{
				Local_21.f_5 = 1;
				func_99(1);
				func_87(0);
				if (AUDIO::_0x4AD019591E94C064("Wind_On_Film", Global_34, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::_PLAY_SOUND_FROM_ENTITY("Wind_On_Film", Global_34, "CAMERA_SOUNDSET", false, 0, 0);
				}
			}
			else if (Local_21.f_24 == 2)
			{
				Local_21.f_5 = 1;
				func_99(1);
				func_87(0);
			}
			break;
		case 4:
			if ((MISC::GET_GAME_TIMER() - Local_21.f_20) > 300)
			{
				SCRIPTS::SET_NO_LOADING_SCREEN(false);
				func_99(1);
				func_87(0);
			}
			break;
		case 7:
			Local_21.f_24 = GRAPHICS::_0x13430D3D5A45F14B(1);
			if (Local_21.f_24 == 0)
			{
				GRAPHICS::_0xF1142E5D64B47802(true, false);
				func_66(8);
				func_99(4);
				func_87(0);
			}
			else if (Local_21.f_24 == 2)
			{
				func_99(4);
				func_87(0);
			}
			break;
	}
}

void func_38()
{
	var uVar0;

	if (Local_59.f_341 != -1 && !func_100(Local_59.f_341))
	{
		TELEMETRY::_0xF184B3ECE36219CF(Local_59.f_341, &uVar0);
		if (Global_1051388->f_4537)
		{
			TELEMETRY::_0xED22BE4C5A399E63(&uVar0, func_101(), (Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_8, Global_1051388->f_4537.f_4);
		}
		else
		{
			TELEMETRY::_0xED22BE4C5A399E63(&uVar0, func_101(), 0, 1);
		}
		Local_59.f_341 = -1;
	}
}

void func_39(int iParam0)
{
	Global_1051388->f_4537.f_7 = iParam0;
}

void func_40()
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
	bool bVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;

	if (!Global_1051388->f_4537)
	{
		return;
	}
	iVar3 = 0;
	if (!&Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])
	{
		if (Local_401.f_1 == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()))
		{
			Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/] = 1;
			iVar0 = 0;
			while (iVar0 < 7)
			{
				if (&Local_401.f_20[iVar0] == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()) && &Local_401.f_66[iVar0] != 0)
				{
					bVar5 = true;
					Jump @243; //curOff = 110
				}
				else if (&Local_401.f_20[iVar0] != 0)
				{
					bVar6 = false;
					iVar1 = 0;
					while (iVar1 < 7)
					{
						iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar1);
						if (((iVar2 != NETWORK::PARTICIPANT_ID() && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2)) && Local_483[iVar1 /*10*/]) /* PointerArith */ && &Local_401.f_20[iVar0] == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2)))
						{
							bVar6 = true;
						}
						else
						{
							iVar1++;
						}
					}
					if (!bVar6)
					{
						iVar4++;
					}
				}
				iVar0++;
			}
			if (!bVar5)
			{
				iVar0 = 0;
				while (iVar0 < 7)
				{
					iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
					if (((iVar2 != NETWORK::PARTICIPANT_ID() && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2)) && Local_483[iVar0 /*10*/]) /* PointerArith */)
					{
						iVar7++;
					}
					iVar0++;
				}
				if ((iVar4 + iVar7) >= 7)
				{
					func_39(14);
					return;
				}
				Local_59.f_114 = (iVar4 + iVar7) + 1;
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 7)
			{
				iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
				if (((iVar2 != NETWORK::PARTICIPANT_ID() && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2)) && Local_483[iVar0 /*10*/]) /* PointerArith */)
				{
					if ((Local_483[iVar0 /*10*/])->f_1 > iVar3)
					{
						iVar3 = (Local_483[iVar0 /*10*/])->f_1;
					}
				}
				iVar0++;
			}
			(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_1 = iVar3 + 1;
			return;
		}
	}
	Global_1051388->f_4537.f_4 = 0;
	Global_1051388->f_4537.f_1 = 0;
	Global_1051388->f_4537.f_2 = 0;
	iVar8 = -1;
	iVar13 = 2147483647;
	if ((Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_3 < 0)
	{
		iVar1 = 0;
		while (iVar1 < 7)
		{
			if ((&Local_401.f_20[iVar1] == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()) && Local_401.f_74[iVar1]) /* PointerArith */)
			{
				(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_3 = iVar1;
			}
			else
			{
				iVar1++;
			}
		}
	}
	Local_59.f_113 = 0;
	if ((Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_3 > -1 && (Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_9 != 3)
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_401.f_36[(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_3])))
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(&(Local_401.f_36[(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_3]));
		}
		else
		{
			Local_59.f_113 = 1;
			NETWORK::_0x7182EDDA1EE7DB5A(&(Local_401.f_36[(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_3]));
		}
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		bVar9 = false;
		if (iVar2 == NETWORK::PARTICIPANT_ID() || (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2) && Local_483[iVar0 /*10*/]) /* PointerArith */)
		{
			MISC::SET_BIT(&iVar11, iVar0);
			Global_1051388->f_4537.f_4++;
			func_102(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2));
			if ((Local_483[iVar0 /*10*/])->f_1 < iVar13)
			{
				iVar13 = (Local_483[iVar0 /*10*/])->f_1;
				iVar10 = iVar0;
			}
		}
		iVar0++;
	}
	Local_59.f_111 = iVar10 == NETWORK::PARTICIPANT_ID_TO_INT();
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if ((Local_59.f_95[iVar1 /*2*/])->f_1 != 0)
		{
			bVar9 = false;
			iVar0 = 0;
			while (iVar0 < 7)
			{
				iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2) && (Local_59.f_95[iVar1 /*2*/])->f_1 == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2)))
				{
					if (MISC::IS_BIT_SET(iVar11, iVar0))
					{
						bVar9 = true;
						MISC::SET_BIT(&iVar12, iVar0);
					}
					iVar8 = iVar0;
				}
				else
				{
					iVar0++;
				}
			}
			if (!bVar9)
			{
				if (Local_59.f_111)
				{
					iVar0 = 0;
					while (iVar0 < 7)
					{
						if ((Local_59.f_95[iVar1 /*2*/])->f_1 == &Local_401.f_20[iVar0] || (Local_59.f_95[iVar1 /*2*/])->f_1 == &Local_401.f_28[iVar0])
						{
							MISC::SET_BIT(&((Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_4), iVar0);
						}
						iVar0++;
					}
				}
				(Local_59.f_95[iVar1 /*2*/])->f_1 = 0;
				Local_59.f_95[iVar1 /*2*/] = 0;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (MISC::IS_BIT_SET(iVar11, iVar0) && !MISC::IS_BIT_SET(iVar12, iVar0))
		{
			iVar1 = 0;
			while (iVar1 < 7)
			{
				if ((Local_59.f_95[iVar1 /*2*/])->f_1 == 0)
				{
					iVar8 = iVar1;
				}
				else
				{
					iVar1++;
				}
			}
			(Local_59.f_95[iVar8 /*2*/])->f_1 = NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2));
			Local_59.f_95[iVar8 /*2*/] = (Local_483[iVar0 /*10*/])->f_1;
			Global_1051388->f_4537.f_4++;
			func_102(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2));
			if (iVar2 != NETWORK::PARTICIPANT_ID())
			{
				iVar1 = 0;
				while (iVar1 < 7)
				{
					if (MISC::IS_BIT_SET((Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_4, iVar1))
					{
						if (&Local_401.f_20[iVar1] == (Local_59.f_95[iVar8 /*2*/])->f_1)
						{
							MISC::CLEAR_BIT(&((Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_4), iVar1);
						}
					}
					iVar1++;
				}
			}
		}
		iVar0++;
	}
	func_103(iVar10);
}

void func_41()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(iVar1, false);
		}
		iVar0++;
	}
}

void func_42()
{
	STREAMING::REQUEST_ANIM_DICT(Local_59.f_77);
	STREAMING::REQUEST_CLIP_SET(Local_59.f_78);
}

int func_43()
{
	if (!STREAMING::HAS_ANIM_DICT_LOADED(Local_59.f_77))
	{
		return 0;
	}
	if (!STREAMING::HAS_CLIP_SET_LOADED(Local_59.f_78))
	{
		return 0;
	}
	return 1;
}

int func_44()
{
	func_104(18, &(Local_59.f_50));
	if (!func_75(Local_59.f_50, 0))
	{
		return 0;
	}
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_59.f_50, Local_59.f_14, Local_59.f_17, true, false, true);
	TASK::TASK_STAND_STILL(Local_59.f_50, -1);
	return 1;
}

int func_45()
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(Local_59.f_115))
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_59.f_65))
	{
		iVar0 = func_105();
		STREAMING::REQUEST_MODEL(iVar0, false);
		if (Global_1051388->f_4537)
		{
			STREAMING::REQUEST_MODEL(joaat("MP005_P_MP_PHOTOBACKDROPBOX01X"), false);
		}
		if (STREAMING::HAS_MODEL_LOADED(iVar0) && (!Global_1051388->f_4537 || STREAMING::HAS_MODEL_LOADED(joaat("MP005_P_MP_PHOTOBACKDROPBOX01X"))))
		{
			if (Global_1051388->f_4537)
			{
				Local_59.f_26 = { ENTITY::GET_ENTITY_COORDS(Local_59.f_65, true, false) + func_106(0.1f, 0f, -1.5f, ENTITY::GET_ENTITY_ROTATION(Local_59.f_65, 2)) };
			}
			else
			{
				Local_59.f_26 = { ENTITY::GET_ENTITY_COORDS(Local_59.f_65, true, false) + func_106(0.1f, 0f, -1.25f, ENTITY::GET_ENTITY_ROTATION(Local_59.f_65, 2)) };
			}
			Local_59.f_115 = OBJECT::CREATE_OBJECT(iVar0, Local_59.f_26, false, true, false, false, true);
			ENTITY::FREEZE_ENTITY_POSITION(Local_59.f_115, true);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_59.f_115, false, false);
			ENTITY::SET_ENTITY_ROTATION(Local_59.f_115, ENTITY::GET_ENTITY_ROTATION(Local_59.f_65, 2), 2, true);
			if (Global_1051388->f_4537)
			{
				Local_59.f_129 = OBJECT::CREATE_OBJECT(joaat("MP005_P_MP_PHOTOBACKDROPBOX01X"), ENTITY::GET_ENTITY_COORDS(Local_59.f_65, true, false) + func_106(0.1f, 0f, -1.72f, ENTITY::GET_ENTITY_ROTATION(Local_59.f_65, 2)), false, true, false, false, true);
				ENTITY::FREEZE_ENTITY_POSITION(Local_59.f_129, true);
				ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_59.f_129, false, false);
				ENTITY::SET_ENTITY_ROTATION(Local_59.f_129, ENTITY::GET_ENTITY_ROTATION(Local_59.f_65, 2), 2, true);
			}
			ENTITY::SET_ENTITY_VISIBLE(Local_59.f_65, false);
			return 1;
		}
		return 0;
	}
	if (Local_59.f_64 == 0)
	{
		Local_59.f_64 = ENTITY::_0x6F3068258A499E52(Local_59.f_88, Local_59.f_26, 7);
	}
	else if (ENTITY::_0x1FF441D7954F8709(Local_59.f_64))
	{
		Local_59.f_65 = ENTITY::_0x4735E2A4BB83D9DA(Local_59.f_64);
	}
	return 0;
}

int func_46()
{
	if (!Global_1051388->f_4537)
	{
		return 1;
	}
	if (!ANIMSCENE::_0x25557E324489393C(Local_59.f_194))
	{
		Local_59.f_194 = ANIMSCENE::_CREATE_ANIM_SCENE("lightrig_mp@photo@photo_studio", 2, 0, false, true);
	}
	else if (!ANIMSCENE::_0x477122B8D05E7968(Local_59.f_194, 1, 0))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(Local_59.f_194);
	}
	else if (!ANIMSCENE::_0x95531A4A20CCE7BC(Local_59.f_194, 0))
	{
	}
	else
	{
		if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_59.f_194, 0))
		{
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_59.f_194, Local_59.f_26, ENTITY::GET_ENTITY_ROTATION(Local_59.f_65, 2), 2);
			ANIMSCENE::START_ANIM_SCENE(Local_59.f_194);
		}
		return 1;
	}
	return 0;
}

void func_47()
{
	if (!Global_1051388->f_4537 || Local_59.f_196)
	{
		return;
	}
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_59.f_194, func_107((Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_7));
	if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_59.f_194, func_107((Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_7)))
	{
		if (Local_59.f_195 != 0)
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_59.f_194, func_108(Local_59.f_195), false, false);
		}
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_59.f_194, func_107((Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_7), true);
		Local_59.f_196 = 1;
	}
}

int func_48(bool bParam0)
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

	if (Global_1051388->f_4537)
	{
		iVar6 = -1;
		if ((Local_59.f_117 == 5 || Local_59.f_117 == 3) || Local_59.f_117 == 4)
		{
			iVar7 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar7) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar7))
			{
				iVar8 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar7);
				if (Local_483[iVar8 /*10*/] && (Local_483[iVar8 /*10*/])->f_8 != (Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_8)
				{
					func_109(0);
				}
			}
		}
		switch (Local_59.f_117)
		{
			case 0:
				(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_9 = 2;
				if (!Local_59.f_113)
				{
					return 0;
				}
				if ((Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_4 > 0)
				{
					iVar2 = 0;
					while (iVar2 < 7)
					{
						if (MISC::IS_BIT_SET((Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_4, iVar2))
						{
							if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_401.f_36[iVar2])))
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(&(Local_401.f_36[iVar2]));
							}
							else if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_401.f_12[iVar2])) && !NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_401.f_12[iVar2])))
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(&(Local_401.f_12[iVar2]));
							}
							else
							{
								iVar0 = NETWORK::NET_TO_PED(&(Local_401.f_36[iVar2]));
								PED::DELETE_PED(&iVar0);
								if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_401.f_12[iVar2])))
								{
									iVar1 = NETWORK::NET_TO_OBJ(&(Local_401.f_12[iVar2]));
									OBJECT::DELETE_OBJECT(&iVar1);
								}
								MISC::CLEAR_BIT(&((Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_4), iVar2);
							}
						}
						iVar2++;
					}
					if ((Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_4 > 0)
					{
						return 0;
					}
				}
				iVar3 = 0;
				while (iVar3 < 7)
				{
					iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar3);
					if (iVar4 == NETWORK::PARTICIPANT_ID())
					{
					}
					else if ((NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4) && Local_483[iVar3 /*10*/]) /* PointerArith */ && ((Local_483[iVar3 /*10*/])->f_8 != (Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_8 || (Local_483[iVar3 /*10*/])->f_9 == 1))
					{
						return 0;
					}
					iVar3++;
				}
				Local_59.f_126 = 0;
				func_109(2);
				return 0;
			case 2:
				iVar0 = func_59();
				if (bParam0)
				{
					if (&Local_401.f_66[(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_3] != 0)
					{
						Local_59.f_126 = 1;
						(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_2 = &Local_401.f_66[(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_3];
						(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_9 = 4;
						func_109(3);
						return 0;
					}
					else if (Local_59.f_114 > 0)
					{
						(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_2 = Local_59.f_114;
					}
				}
				else
				{
					NETWORK::_0x7E300B5B86AB1D1A(&(Local_59.f_95), 9.809089E-45f, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					iVar5 = 0;
					iVar3 = 0;
					while (iVar3 < 7)
					{
						if (Local_59.f_95[iVar3 /*2*/])->f_1 == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID())
						{
							(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_2 = (iVar3 - iVar5) + 1;
							Jump @785; //curOff = 750
						}
						else if ((Local_59.f_95[iVar3 /*2*/])->f_1 == 0)
						{
							iVar5++;
						}
						iVar3++;
					}
				}
				(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_9 = 3;
				func_109(1);
				return 0;
			case 1:
				if (Local_401.f_3 == (Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_3 && Local_401.f_2 == 3)
				{
					(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_9 = 4;
					func_109(3);
				}
				return 0;
			case 3:
				if ((Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_8 != 0)
				{
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_401.f_4[(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_3])))
					{
						iVar6 = NETWORK::_0xD7F6781A0ABAF6FB(&(Local_401.f_4[(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_3]));
					}
					else
					{
						(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_9 = 3;
						func_109(1);
					}
					if (ANIMSCENE::_0xCBFC7725DE6CE2E0(iVar6, 0))
					{
						(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_9 = 0;
						func_109(5);
					}
				}
				else if (!Local_59.f_126)
				{
					if (!Local_59.f_113)
					{
						return 0;
					}
					iVar0 = func_59();
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0, false, true);
					func_109(4);
				}
				else
				{
					(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_9 = 0;
					func_109(5);
				}
				return 0;
			case 4:
				if (!Local_59.f_113)
				{
					return 0;
				}
				iVar0 = func_59();
				func_71(iVar0, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_59.f_10, Local_59.f_13, func_110(((Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_2 - 1))), Local_59.f_13, 0, 1073741824 /* Float: 2f */);
				ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
				ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iVar0, false, false);
				ENTITY::SET_ENTITY_VISIBLE(iVar0, true);
				WEAPON::REMOVE_ALL_PED_WEAPONS(iVar0, true, true);
				func_70(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), iVar0);
				(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_9 = 0;
				func_109(5);
				return 0;
			case 5:
				if ((Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_8 == 0)
				{
					iVar3 = 0;
					while (iVar3 < 7)
					{
						iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar3);
						if (iVar4 == NETWORK::PARTICIPANT_ID())
						{
						}
						else if ((NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4) && Local_483[iVar3 /*10*/]) /* PointerArith */ && (Local_483[iVar3 /*10*/])->f_9 != 0)
						{
							return 0;
						}
						iVar3++;
					}
				}
				func_71(Global_34, Local_59.f_10, Local_59.f_13, 0, 1073741824 /* Float: 2f */);
				ENTITY::FREEZE_ENTITY_POSITION(Global_34, true);
				ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Global_34, false, false);
				ENTITY::SET_ENTITY_VISIBLE(Global_34, false);
				func_109(0);
				break;
		}
	}
	else
	{
		func_78(1, 1, 0, 0);
		func_71(Global_34, Local_59.f_10, Local_59.f_13, 0, 1073741824 /* Float: 2f */);
		ENTITY::FREEZE_ENTITY_POSITION(Global_34, true);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Global_34, false, false);
	}
	return 1;
}

void func_49()
{
	if ((Global_1051388->f_69[18 /*76*/])->f_18 == 12)
	{
		ENTITY::CREATE_MODEL_HIDE(-814.042f, -1374.27f, 44.941f, 2f, joaat("P_POT_FLOWERARNG05X"), false);
		ENTITY::CREATE_MODEL_HIDE(-814.042f, -1374.27f, 44.941f, 2f, joaat("P_PLANTSTAND01X"), false);
		ENTITY::CREATE_MODEL_HIDE(-814.042f, -1374.27f, 44.941f, 2f, joaat("P_CHAIR12BX"), false);
	}
	else if ((Global_1051388->f_69[18 /*76*/])->f_18 == 60)
	{
		ENTITY::CREATE_MODEL_HIDE(2734.165f, -1119.711f, 50.122f, 2f, joaat("P_CHAIRDINING02X"), false);
		ENTITY::CREATE_MODEL_HIDE(2734.165f, -1119.711f, 50.122f, 2f, joaat("NEW_PHOTO_TABLECLOTH"), false);
		ENTITY::CREATE_MODEL_HIDE(2734.165f, -1119.711f, 50.122f, 2f, joaat("P_SIDETABLE19X"), false);
	}
}

void func_50()
{
	Local_59.f_51 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_34);
	if (Local_59.f_51 != 0)
	{
		PED::_0xED00D72F81CF7278(Local_59.f_51, 0, 0);
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_59.f_51, Local_59.f_18, Local_59.f_21, true, false, true);
	}
}

void func_51()
{
	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(Local_59.f_74))
	{
		GRAPHICS::ANIMPOSTFX_PLAY(Local_59.f_74);
	}
}

void func_52(bool bParam0)
{
	int iVar0;
	char* sVar1;

	if ((Global_1051388->f_69[18 /*76*/])->f_18 == 12)
	{
		iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(-814.042f, -1374.27f, 44.941f);
		sVar1 = "bla_photo_LightBoxPortrait";
	}
	else if ((Global_1051388->f_69[18 /*76*/])->f_18 == 60)
	{
		return;
	}
	if (INTERIOR::IS_VALID_INTERIOR(iVar0) && INTERIOR::IS_INTERIOR_READY(iVar0))
	{
		if (bParam0)
		{
			if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, sVar1))
			{
				INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar0, sVar1, 0);
			}
		}
		else if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, sVar1))
		{
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar0, sVar1, true);
		}
	}
}

void func_53(int iParam0)
{
	PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(func_59());
	PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(func_59(), &(Local_59.f_67[iParam0]), Local_59.f_77);
}

void func_54()
{
	GRAPHICS::_0xA42EDF1E88734A7E();
	Local_21.f_1 = 1;
}

void func_55(var uParam0, bool bParam1)
{
	if (bParam1 || !func_69(uParam0))
	{
		func_111(uParam0);
	}
}

int func_56(var uParam0)
{
	if (!func_69(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000f));
	}
	if (func_112(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_113() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

void func_57(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_58()
{
	CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
	if (!CAM::DOES_CAM_EXIST(Local_59.f_52))
	{
		Local_59.f_52 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Local_59, Local_59.f_3, 65f, false, 2);
		CAM::SET_CAM_FOV(Local_59.f_52, Local_59.f_9);
	}
	else
	{
		CAM::SET_CAM_ACTIVE(Local_59.f_52, true);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		CAM::SET_CAM_FOV(Local_59.f_52, Local_59.f_9);
	}
	func_114();
	if (!func_115(Global_34, 150319005))
	{
		TASK::TASK_LOOK_AT_ENTITY(Global_34, Local_59.f_50, -1, 0, 51, 0);
	}
	HUD::_0xC9CAEAEEC1256E54(-492723688);
}

int func_59()
{
	int iVar0;

	iVar0 = Global_34;
	if (Local_59.f_113)
	{
		iVar0 = NETWORK::NET_TO_PED(&(Local_401.f_36[(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_3]));
	}
	return iVar0;
}

void func_60()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	bVar0 = _NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID());
	if (!Local_59.f_31)
	{
		func_116(&(Local_59.f_39), 1, 1);
		func_116(&(Local_59.f_40), 1, 1);
		func_116(&(Local_59.f_41), 1, 1);
		func_116(&(Local_59.f_42), 1, 1);
		func_116(&(Local_59.f_43), 1, 1);
		func_116(&(Local_59.f_44), 1, 1);
		func_116(&(Local_59.f_45), 1, 1);
		func_116(&(Local_59.f_46), 1, 1);
		func_116(&(Local_59.f_48), 1, 1);
		if (Global_1051388->f_4537)
		{
			if (!func_117(Local_59.f_32))
			{
				Local_59.f_32 = func_118("PHOTO_STUDIO_CHANGE_POSE", joaat("INPUT_GAME_MENU_LEFT"), joaat("INPUT_GAME_MENU_RIGHT"), 0);
				func_119(Local_59.f_32, 4, 1, 0);
				func_119(Local_59.f_32, 2, 1, 0);
			}
			func_120(Local_59.f_32, (Global_1051388->f_4537.f_4 > 1 && bVar0), 1, 1);
		}
		if (!func_117(Local_59.f_35))
		{
			Local_59.f_35 = func_118("PHOTO_STUDIO_CHANGE_EXPRESSION", joaat("INPUT_GAME_MENU_UP"), joaat("INPUT_GAME_MENU_DOWN"), 0);
			func_119(Local_59.f_35, 4, 1, 0);
			func_119(Local_59.f_35, 2, 1, 0);
		}
		else
		{
			func_120(Local_59.f_35, 1, 1, 1);
		}
		if (!func_117(Local_59.f_33))
		{
			bVar1 = true;
			iVar3 = 0;
			while (iVar3 < Local_59.f_193)
			{
				if (iVar3 == Local_59.f_127)
				{
					if (bVar1)
					{
						Local_59.f_59 = joaat("INPUT_MOVE_DOWN_ONLY");
					}
					else
					{
						Local_59.f_59 = joaat("INPUT_MOVE_UD");
					}
					iVar2 = iVar3;
				}
				else if (func_36(&(Local_59.f_130[iVar3]), func_35(Local_59.f_128)))
				{
					bVar1 = false;
					iVar2 = iVar3;
				}
				iVar3++;
			}
			Local_59.f_60 = 1;
			if (Local_59.f_127 == iVar2)
			{
				if (Local_59.f_59 == joaat("INPUT_MOVE_DOWN_ONLY"))
				{
					Local_59.f_60 = 0;
				}
				else
				{
					Local_59.f_59 = joaat("INPUT_MOVE_UP_ONLY");
				}
			}
			Local_59.f_33 = func_121("PHOTO_STUDIO_CHANGE_BACKGROUND", Local_59.f_59, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			func_119(Local_59.f_33, 4, 1, 0);
		}
		func_120(Local_59.f_33, ((!Global_1051388->f_4537 || bVar0) && Local_59.f_60), 1, 1);
		if (!func_117(Local_59.f_34))
		{
			Local_59.f_34 = func_121("PHOTO_STUDIO_CHANGE_BACKGROUND_SET", joaat("INPUT_MOVE_LR"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			func_119(Local_59.f_34, 4, 1, 0);
		}
		func_120(Local_59.f_34, (!Global_1051388->f_4537 || bVar0), 1, 1);
		if (!func_117(Local_59.f_36))
		{
			Local_59.f_36 = func_121("PHOTO_STUDIO_QUIT", joaat("INPUT_GAME_MENU_CANCEL"), 4, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			func_119(Local_59.f_36, 4, 1, 0);
			func_119(Local_59.f_36, 2, 1, 0);
		}
		else
		{
			func_120(Local_59.f_36, 1, 1, 1);
		}
		if (!func_117(Local_59.f_38))
		{
			Local_59.f_38 = func_121("PHOTO_STUDIO_GALLERY", joaat("INPUT_GAME_MENU_EXTRA_OPTION"), 4, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			func_119(Local_59.f_38, 4, 1, 0);
			func_119(Local_59.f_38, 2, 1, 0);
		}
		else
		{
			func_120(Local_59.f_38, 1, 1, 1);
		}
	}
	else
	{
		func_116(&(Local_59.f_32), 1, 1);
		func_116(&(Local_59.f_35), 1, 1);
		func_116(&(Local_59.f_33), 1, 1);
		func_116(&(Local_59.f_34), 1, 1);
		func_116(&(Local_59.f_36), 1, 1);
		func_116(&(Local_59.f_38), 1, 1);
		func_122(&(Local_59.f_39), &(Local_59.f_40), 0);
		func_122(&(Local_59.f_41), &(Local_59.f_42), 3);
		func_122(&(Local_59.f_43), &(Local_59.f_44), 2);
		func_122(&(Local_59.f_45), &(Local_59.f_46), 1);
		if (!func_117(Local_59.f_48))
		{
			Local_59.f_48 = func_121("EMOTE_PERFORM_ACTION", joaat("INPUT_INSPECT_ZOOM"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			func_119(Local_59.f_48, 13, 1, 1);
			func_119(Local_59.f_48, 10, 1, 1);
			func_119(Local_59.f_48, 14, 1, 1);
			func_119(Local_59.f_48, 4, 1, 0);
			func_119(Local_59.f_48, 2, 1, 0);
			func_120(Local_59.f_48, 0, 1, 1);
			func_123(Local_59.f_48, 0, 1);
		}
	}
	if (!func_117(Local_59.f_49))
	{
		Local_59.f_49 = func_121("NET_INTERACT_OPTION_EMOTE", joaat("INPUT_OPEN_EMOTE_WHEEL"), 2, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
		func_119(Local_59.f_49, 4, 1, 0);
		func_119(Local_59.f_49, 2, 1, 0);
	}
	func_120(Local_59.f_49, (!Global_1051388->f_4537 || (Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_8 == 0), 1, 1);
	if (!func_117(Local_59.f_37))
	{
		Local_59.f_37 = func_121("PHOTO_STUDIO_TAKE_PHOTO", joaat("INPUT_CONTEXT_LT"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
		func_124(Local_59.f_37, "PHOTO_STUDIO_TAKE_PHOTO", (BUILTIN::TO_FLOAT(500) / 100f), 2, 1);
		func_119(Local_59.f_37, 2, 1, 0);
	}
	if (func_125())
	{
		func_120(Local_59.f_37, 1, 1, 1);
	}
	else
	{
		func_120(Local_59.f_37, 0, 1, 1);
	}
}

void func_61()
{
	bool bVar0;
	bool bVar1;

	bVar1 = _NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID());
	PAD::_0x2804658EB7D8A50B(4, joaat("ONLINEPHOTOSTUDIOSHOP"));
	if (func_117(Local_59.f_32))
	{
		bVar0 = (Global_1051388->f_4537.f_4 > 1 && bVar1);
		bVar0 = (bVar0 && Global_1051388->f_4537.f_7 == 5);
		if (func_126(Local_59.f_32, 0) != bVar0)
		{
			func_120(Local_59.f_32, bVar0, 1, 1);
		}
		if (func_127(Local_59.f_32, 0, 1))
		{
			Local_59.f_208 = (Local_59.f_208 - 1);
			Local_59.f_61 = 1;
			func_39(8);
			func_128();
			func_129();
			return;
		}
		else if (func_127(Local_59.f_32, 1, 1))
		{
			Local_59.f_208++;
			Local_59.f_61 = 0;
			func_39(8);
			func_128();
			func_129();
			return;
		}
	}
	if (func_117(Local_59.f_35))
	{
		if (func_127(Local_59.f_35, 0, 1))
		{
			func_130("dpad_up", "RDRO_Photo_Shop_Sounds", 1);
			Local_59.f_62 = 1;
			func_39(9);
			func_129();
			return;
		}
		else if (func_127(Local_59.f_35, 1, 1))
		{
			func_130("dpad_down", "RDRO_Photo_Shop_Sounds", 1);
			Local_59.f_62 = 0;
			func_39(9);
			func_129();
			return;
		}
	}
	if (func_117(Local_59.f_37))
	{
		if (func_125())
		{
			if (!func_126(Local_59.f_37, 0))
			{
				func_120(Local_59.f_37, 1, 1, 1);
			}
		}
		if (func_131(Local_59.f_37, 1))
		{
			if (Global_1051388->f_4537.f_7 == 6)
			{
				TASK::_0xBDFEEB7600BCD938(func_59());
				Local_59.f_47 = 0;
			}
			func_39(13);
			func_129();
			if (Local_21.f_7 < Local_21.f_8)
			{
				Local_59.f_341 = func_132(1938417563, 0, 1, 1, 0, 59806960);
			}
		}
		if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, func_133(Local_59.f_37)))
		{
			if (!func_134(500))
			{
				func_135("SHOP_H_TOO_POOR_PH", 10000, 0, 0, 0, 1);
				func_130("UNAFFORDABLE", "HUD_SHOP_SOUNDSET", 1);
			}
			else if (Global_1051388->f_4537 && Global_1051388->f_4537.f_4 <= 1)
			{
				func_135("PHOTO_REQUIRE_MORE_POSSE", 10000, 0, 0, 0, 1);
			}
		}
	}
	if (func_117(Local_59.f_36))
	{
		if (func_136(Local_59.f_36, 1) == 1f)
		{
			func_39(14);
			func_129();
		}
	}
	if (func_117(Local_59.f_33))
	{
		bVar0 = (!Global_1051388->f_4537 || bVar1);
		bVar0 = (bVar0 && Global_1051388->f_4537.f_7 == 5);
		bVar0 = (bVar0 && Local_59.f_60);
		if (func_126(Local_59.f_33, 0) != bVar0)
		{
			func_120(Local_59.f_33, bVar0, 1, 1);
		}
		if (func_137())
		{
			func_129();
			func_138();
			func_130("Backdrop_Move", "RDRO_Photo_Shop_Sounds", 1);
			func_39(11);
		}
	}
	if (func_117(Local_59.f_34))
	{
		bVar0 = (!Global_1051388->f_4537 || bVar1);
		bVar0 = (bVar0 && Global_1051388->f_4537.f_7 == 5);
		if (func_126(Local_59.f_34, 0) != bVar0)
		{
			func_120(Local_59.f_34, bVar0, 1, 1);
		}
		if (func_139())
		{
			func_129();
			func_138();
			if (Global_1051388->f_4537)
			{
				if ((Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_6 == 2)
				{
					func_130("background_set_left", "RDRO_Photo_Shop_Sounds", 1);
				}
				else
				{
					func_130("background_set_right", "RDRO_Photo_Shop_Sounds", 1);
				}
			}
			else if (Local_59.f_206 == 2)
			{
				func_130("background_set_left", "RDRO_Photo_Shop_Sounds", 1);
			}
			else
			{
				func_130("background_set_right", "RDRO_Photo_Shop_Sounds", 1);
			}
			func_39(12);
		}
	}
	if (func_117(Local_59.f_49))
	{
		if (func_131(Local_59.f_49, 1))
		{
			func_130("bumper_right", "RDRO_Photo_Shop_Sounds", 1);
			Local_59.f_31 = !Local_59.f_31;
			func_60();
			if (Local_59.f_31)
			{
				func_140(Local_59.f_49, "NET_INTERACT_OPTION_EMOTE_PARENT", 1);
			}
			else
			{
				func_140(Local_59.f_49, "NET_INTERACT_OPTION_EMOTE", 1);
			}
		}
	}
	func_141(Local_59.f_39, Local_59.f_40, 0);
	func_141(Local_59.f_41, Local_59.f_42, 3);
	func_141(Local_59.f_43, Local_59.f_44, 2);
	func_141(Local_59.f_45, Local_59.f_46, 1);
	if (func_117(Local_59.f_48))
	{
		if (func_142(Local_59.f_48, 1))
		{
			TASK::_0x6A1AF481407BF6E9(func_59());
		}
	}
	if (func_117(Local_59.f_38))
	{
		if (!func_88(1))
		{
			if (func_136(Local_59.f_38, 1) == 1f)
			{
				func_143();
				func_129();
				func_39(10);
			}
		}
	}
}

int func_62(int iParam0)
{
	if (!func_69(&(Local_59.f_53)))
	{
		func_55(&(Local_59.f_53), 0);
	}
	else if (func_56(&(Local_59.f_53)) > iParam0)
	{
		func_57(&(Local_59.f_53));
		return 1;
	}
	return 0;
}

void func_63()
{
	if (Local_59.f_62 == 1)
	{
		Local_59.f_29++;
		if (Local_59.f_29 > 5)
		{
			Local_59.f_29 = 0;
		}
		func_53(Local_59.f_29);
	}
	else if (Local_59.f_62 == 0)
	{
		Local_59.f_29 = (Local_59.f_29 - 1);
		if (Local_59.f_29 < 0)
		{
			Local_59.f_29 = 5;
		}
		func_53(Local_59.f_29);
	}
}

int func_64()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13;

	if (!ENTITY::DOES_ENTITY_EXIST(Local_59.f_116))
	{
		if (Global_1051388->f_4537)
		{
			iVar0 = (Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_5;
		}
		else
		{
			iVar0 = Local_59.f_205;
		}
		STREAMING::REQUEST_MODEL(iVar0, false);
		if (!STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			return 0;
		}
		Local_59.f_116 = OBJECT::CREATE_OBJECT(iVar0, Local_59.f_26, false, true, false, false, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_59.f_116, true);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_59.f_116, false, false);
		ENTITY::SET_ENTITY_ROTATION(Local_59.f_116, ENTITY::GET_ENTITY_ROTATION(Local_59.f_115, 2), 2, true);
	}
	if (Global_1051388->f_4537)
	{
		iVar1 = (Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_6;
	}
	else
	{
		iVar1 = Local_59.f_206;
	}
	if (iVar1 == 0)
	{
		fVar2 = (1f - Local_59.f_66);
	}
	else
	{
		fVar2 = (Local_59.f_66 + 1f);
	}
	if (fVar2 <= 0.15f)
	{
		fVar3 = (fVar2 / 0.125f);
	}
	else if (fVar2 >= 0.85f)
	{
		fVar3 = ((1f - fVar2) / 0.125f);
	}
	else
	{
		fVar3 = 1f;
	}
	if (fVar3 < 0.05f)
	{
		fVar3 = 0.05f;
	}
	if (iVar1 == 0)
	{
		Local_59.f_66 = (Local_59.f_66 + ((fVar3 * 0.6f) * BUILTIN::TIMESTEP()));
	}
	else
	{
		Local_59.f_66 = (Local_59.f_66 + (((fVar3 * 0.6f) * -1f) * BUILTIN::TIMESTEP()));
	}
	if ((iVar1 == 0 && Local_59.f_66 >= 1f) || (iVar1 == 1 && Local_59.f_66 <= -1f))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_59.f_115))
		{
			ENTITY::SET_ENTITY_COORDS(Local_59.f_116, Local_59.f_26, true, false, true, true);
			OBJECT::DELETE_OBJECT(&(Local_59.f_115));
		}
		if (!Global_1051388->f_4537 || Local_59.f_196)
		{
			Local_59.f_66 = 0f;
			Local_59.f_115 = Local_59.f_116;
			Local_59.f_116 = 0;
			if (Global_1051388->f_4537)
			{
				Global_1051388->f_4537.f_6 = (Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_5;
			}
			else
			{
				Global_1051388->f_4537.f_6 = Local_59.f_205;
			}
			return 1;
		}
	}
	else
	{
		MISC::GET_MODEL_DIMENSIONS(Local_59.f_88, &vVar4, &vVar7);
		vVar10 = { 0f, 0f, Local_59.f_66 };
		if (iVar1 == 0)
		{
			vVar13 = { vVar10 - Vector(1f, 0f, 0f) };
		}
		else
		{
			vVar13 = { vVar10 + Vector(1f, 0f, 0f) };
		}
		if (fVar2 < 0.5f)
		{
			func_47();
		}
		vVar10 = { vVar10 * FtoV(MISC::ABSF((vVar7.z - vVar4.z))) };
		vVar13 = { vVar13 * FtoV(MISC::ABSF((vVar7.z - vVar4.z))) };
		ENTITY::SET_ENTITY_COORDS(Local_59.f_115, Local_59.f_26 + vVar10, true, false, false, true);
		ENTITY::SET_ENTITY_COORDS(Local_59.f_116, Local_59.f_26 + vVar13, true, false, false, true);
		INTERIOR::FORCE_ROOM_FOR_ENTITY(Local_59.f_115, INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_34), INTERIOR::GET_ROOM_KEY_FROM_ENTITY(Global_34));
		INTERIOR::FORCE_ROOM_FOR_ENTITY(Local_59.f_116, INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_34), INTERIOR::GET_ROOM_KEY_FROM_ENTITY(Global_34));
	}
	return 0;
}

int func_65()
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(Local_59.f_116))
	{
		if (!func_69(&(Local_59.f_338)))
		{
			if (Global_1051388->f_4537)
			{
				if ((Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_6 == 2)
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CameraTransitionWipe_L");
				}
				else
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CameraTransitionWipe_R");
				}
			}
			else if (Local_59.f_206 == 2)
			{
				GRAPHICS::ANIMPOSTFX_PLAY("CameraTransitionWipe_L");
			}
			else
			{
				GRAPHICS::ANIMPOSTFX_PLAY("CameraTransitionWipe_R");
			}
			func_55(&(Local_59.f_338), 0);
		}
		if (Global_1051388->f_4537)
		{
			iVar0 = (Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_5;
		}
		else
		{
			iVar0 = Local_59.f_205;
		}
		STREAMING::REQUEST_MODEL(iVar0, false);
		if (STREAMING::HAS_MODEL_LOADED(iVar0) && func_56(&(Local_59.f_338)) > 250)
		{
			Local_59.f_116 = OBJECT::CREATE_OBJECT(iVar0, Local_59.f_26, false, true, false, false, true);
		}
		else
		{
			return 0;
		}
		ENTITY::FREEZE_ENTITY_POSITION(Local_59.f_116, true);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_59.f_116, false, false);
		ENTITY::SET_ENTITY_ROTATION(Local_59.f_116, ENTITY::GET_ENTITY_ROTATION(Local_59.f_115, 2), 2, true);
		OBJECT::DELETE_OBJECT(&(Local_59.f_115));
	}
	func_47();
	if (!Global_1051388->f_4537 || Local_59.f_196)
	{
		if (func_69(&(Local_59.f_338)))
		{
			if (Global_1051388->f_4537)
			{
				if ((Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_6 == 2)
				{
					GRAPHICS::_0xC5CB91D65852ED7E("CameraTransitionWipe_L");
				}
				else
				{
					GRAPHICS::_0xC5CB91D65852ED7E("CameraTransitionWipe_R");
				}
			}
			else if (Local_59.f_206 == 2)
			{
				GRAPHICS::_0xC5CB91D65852ED7E("CameraTransitionWipe_L");
			}
			else
			{
				GRAPHICS::_0xC5CB91D65852ED7E("CameraTransitionWipe_R");
			}
			func_57(&(Local_59.f_338));
		}
		if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("CameraTransitionWipe_R") || GRAPHICS::ANIMPOSTFX_IS_RUNNING("CameraTransitionWipe_L"))
		{
			return 0;
		}
		Local_59.f_115 = Local_59.f_116;
		Local_59.f_116 = 0;
		if (Global_1051388->f_4537)
		{
			Global_1051388->f_4537.f_6 = (Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_5;
		}
		else
		{
			Global_1051388->f_4537.f_6 = Local_59.f_205;
		}
		return 1;
	}
	return 0;
}

void func_66(int iParam0)
{
	Local_21.f_22 = (Local_21.f_22 || iParam0);
}

void func_67()
{
	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(Local_59.f_76))
	{
		GRAPHICS::ANIMPOSTFX_PLAY(Local_59.f_76);
	}
	func_130("Camera_Flash", "RDRO_Photo_Shop_Sounds", 1);
	Local_59.f_56 = 1;
}

void func_68(int iParam0)
{
	Local_401.f_36[iParam0] = 0;
	Local_401.f_20[iParam0] = 0;
	Local_401.f_28[iParam0] = 0;
	Local_401.f_66[iParam0] = 0;
	Local_401.f_74[iParam0] = 0;
	func_57(Local_401.f_44[iParam0 /*3*/]);
}

bool func_69(var uParam0)
{
	return func_144(*uParam0, 1);
}

void func_70(int iParam0, int iParam1)
{
	int iVar0;

	func_145(iParam0, iParam1);
	if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, false, 2, false))
	{
		if (iVar0 != joaat("WEAPON_UNARMED"))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(iParam1, iVar0, true, 2, false, false);
		}
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, false, 4, false))
	{
		if (iVar0 != joaat("WEAPON_UNARMED"))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(iParam1, iVar0, true, 4, false, false);
		}
	}
}

void func_71(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	int iVar6;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar4 = ENTITY::IS_ENTITY_A_PED(iParam0);
	if (bVar4)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		bVar3 = PED::_0xD5FE956C70FF370B(iVar1);
		if (PED::IS_PED_RAGDOLL(iVar1))
		{
			PED::_0x221F4D9912B7FE86(iVar1, 1);
		}
	}
	if (iParam0 == func_146(Global_34) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (func_147(iParam0))
	{
		if (func_148(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			PHYSICS::_0x0348469DAA17576C(iParam0);
		}
	}
	if (func_149(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_71(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_71(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_149(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), false, true);
		}
	}
	if (func_149(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_149(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_149(iParam5, 32), true);
			ENTITY::_0x9587913B9E772D29(iParam0, 0);
		}
	}
	else if (func_149(iParam5, 129))
	{
		if (func_149(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::_0x0918E3565C20F03C(iParam0, vParam1, fParam4, func_149(iParam5, 32), 1);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_149(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_149(iParam5, 16))
		{
			PED::_0x7DE9692C6F64CFE8(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3, 0, 0);
		}
		if (func_147(iParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PHYSICS::_0x0348469DAA17576C(iVar6);
			if (!func_149(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, 1, 0);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PACKAGE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 1);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == Global_34 && !func_149(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

int func_72()
{
	struct<4> Var0;
	var uVar5;
	struct<4> Var6;
	int iVar11;
	int iVar12;
	int iVar13;

	Var0 = &Global_1915180->f_19847[18];
	Var0.f_2 = 350029031;
	Var0.f_3 = Local_59.f_209;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = -1793904784;
		Var0.f_3 = joaat("SSCENE");
		DATAFILE::_DATAFILE_GET_STRING(&(Local_59.f_210), &Var0);
		Var6 = &Global_1915180->f_19847[18];
		iVar11 = 0;
		Var0.f_2 = 843957109;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var6.f_1), &Var0))
		{
			iVar11 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var6, Var6.f_1);
		}
		iVar12 = 0;
		while (iVar12 < 7)
		{
			(Local_59.f_218[iVar12 /*17*/])->f_16 = 0;
			iVar12++;
		}
		if (iVar11 > 0)
		{
			Var0.f_2 = 290941431;
			iVar12 = 0;
			while (iVar12 < iVar11)
			{
				Var0.f_3 = iVar12;
				if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var6.f_1), &Var0))
				{
					iVar13 = 0;
					Var6.f_2 = 110382701;
					Var6.f_3 = joaat("IPOSITION");
					if (DATAFILE::_DATAFILE_GET_INT(&iVar13, &Var6) && iVar13 > 0)
					{
						Var6.f_2 = -1793904784;
						Var6.f_3 = joaat("SNAMEMALE");
						DATAFILE::_DATAFILE_GET_STRING(Local_59.f_218[(iVar13 - 1) /*17*/], &Var6);
						Var6.f_3 = joaat("SNAMEFEMALE");
						DATAFILE::_DATAFILE_GET_STRING(&((Local_59.f_218[(iVar13 - 1) /*17*/])->f_8), &Var6);
						Var6.f_2 = -1407851228;
						Var6.f_3 = joaat("SMODEL");
						DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var6);
						(Local_59.f_218[(iVar13 - 1) /*17*/])->f_16 = uVar5;
					}
				}
				iVar12++;
			}
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_73(int iParam0)
{
	Local_401.f_2 = iParam0;
}

struct<4> func_74(int iParam0)
{
	char cVar0[32];
	int iVar4;

	iVar4 = NETWORK::NET_TO_PED(&(Local_401.f_36[(Local_483[iParam0 /*10*/])->f_3]));
	if (PED::IS_PED_MALE(iVar4))
	{
		StringCopy(&cVar0, "MP_MALE_0", 32);
	}
	else
	{
		StringCopy(&cVar0, "MP_FEMALE_0", 32);
	}
	StringIntConCat(&cVar0, (Local_483[iParam0 /*10*/])->f_2, 32);
	return cVar0;
}

int func_75(int iParam0, int iParam1)
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
	if (func_149(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_149(iVar0, 2))
	{
		if (PED::_0x3AA24CCC0D451379(iParam0))
		{
			return 0;
		}
	}
	if (func_149(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_149(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_149(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_149(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return 0;
		}
	}
	if (func_149(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_149(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

void func_76()
{
	func_116(&(Local_59.f_33), 1, 1);
	func_116(&(Local_59.f_34), 1, 1);
	func_116(&(Local_59.f_32), 1, 1);
	func_116(&(Local_59.f_35), 1, 1);
	func_116(&(Local_59.f_49), 1, 1);
	func_116(&(Local_59.f_37), 1, 1);
	func_116(&(Local_59.f_36), 1, 1);
	func_116(&(Local_59.f_38), 1, 1);
	func_116(&(Local_59.f_39), 1, 1);
	func_116(&(Local_59.f_40), 1, 1);
	func_116(&(Local_59.f_41), 1, 1);
	func_116(&(Local_59.f_42), 1, 1);
	func_116(&(Local_59.f_43), 1, 1);
	func_116(&(Local_59.f_44), 1, 1);
	func_116(&(Local_59.f_45), 1, 1);
	func_116(&(Local_59.f_46), 1, 1);
	func_116(&(Local_59.f_48), 1, 1);
}

void func_77()
{
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(Local_59.f_74))
	{
		GRAPHICS::ANIMPOSTFX_STOP(Local_59.f_74);
	}
}

void func_78(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (func_24() != 0)
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(iVar0))
		{
			NETWORK::SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(iParam1, bParam2, 256);
			Global_1051388->f_3675 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(iVar0);
			NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, true, Global_1051388->f_3675, bParam3);
		}
	}
	else if (NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(iVar0))
	{
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false, Global_1051388->f_3675, bParam3);
	}
}

int func_79(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		return 0;
	}
	return 1;
}

bool func_80(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_81(bool bParam0)
{
	if (func_24() == -1)
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

bool func_82(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(bParam0, iParam1);
}

bool func_83(bool bParam0)
{
	return bParam0;
}

int func_84(bool bParam0, int iParam1)
{
	if (!func_150(bParam0, 2))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_0x99C6EA66DFE73757(bParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

void func_85()
{
	Local_21.f_24 = GRAPHICS::_0xB28894CD7408BD0C();
	if (Local_21.f_24 == 1)
	{
	}
	if (Local_21.f_24 == 0)
	{
		Local_21 = false;
		Local_21.f_7 = GRAPHICS::_0x78C56B8A7B1D000C();
		Local_21.f_8 = GRAPHICS::_0x8E587FCD30E05592();
		Local_21.f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "playerCamera");
		Local_21.f_10 = DATABINDING::_DATABINDING_ADD_DATA_STRING(Local_21.f_9, "cameraRollCapacityLabel", "i_CurrentNumberOfLocalPhotos");
		func_86();
		Local_21.f_1 = 0;
		Local_21.f_2 = 1;
		Local_21.f_21 = MISC::GET_GAME_TIMER();
	}
	else if (Local_21.f_24 == 2)
	{
		Local_21 = true;
		Local_21.f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "playerCamera");
		Local_21.f_10 = DATABINDING::_DATABINDING_ADD_DATA_STRING(Local_21.f_9, "cameraRollCapacityLabel", "failed/failed");
		func_151();
		Local_21.f_1 = 0;
		Local_21.f_2 = 0;
	}
}

void func_86()
{
	StringCopy(&(Local_21.f_11), "", 32);
	MISC::_INT_TO_STRING(Local_21.f_7, "%i", &(Local_21.f_11));
	StringConCat(&(Local_21.f_11), " / ", 32);
	StringCopy(&(Local_21.f_15), "", 32);
	MISC::_INT_TO_STRING(Local_21.f_8, "%i", &(Local_21.f_15));
	StringConCat(&(Local_21.f_11), &(Local_21.f_15), 32);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Local_21.f_10, &(Local_21.f_11));
}

void func_87(int iParam0)
{
	Local_21.f_23 = iParam0;
}

bool func_88(int iParam0)
{
	return (Local_21.f_22 && iParam0) != 0;
}

var func_89(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	var uVar4;

	Var0 = iParam4;
	Var0.f_1 = iParam3;
	Var0.f_2 = sParam1;
	Var0.f_3 = sParam2;
	uVar4 = _NAMESPACE76::_0x339E16B41780FC35(uParam0, &Var0, iParam5);
	return uVar4;
}

int func_90()
{
	return Global_1893575->f_2;
}

bool func_91(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

var func_92(int iParam0)
{
	char[] cVar0[8];

	if (!func_91(iParam0))
	{
		StringCopy(&cVar0, "UNK", 8);
		return cVar0;
	}
	return ((*Global_1887327)[iParam0 /*36*/])->f_23;
}

int func_93()
{
	return ZONE::_GET_WATER_MAP_ZONE_AT_COORDS(Global_35);
}

char* func_94(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WATER_AURORA_BASIN"):
			return "WATER_AURORA_BASIN";
		case joaat("WATER_BARROW_LAGOON"):
			return "WATER_BARROW_LAGOON";
		case joaat("WATER_BAYOU_NWA"):
			return "WATER_BAYOU_NWA";
		case joaat("WATER_BEARTOOTH_BECK"):
			return "WATER_BEARTOOTH_BECK";
		case joaat("WATER_CAIRN_LAKE"):
			return "WATER_CAIRN_LAKE";
		case joaat("WATER_CALMUT_RAVINE"):
			return "WATER_CALUMET_RAVINE";
		case joaat("WATER_CATTIAL_POND"):
			return "WATER_CATTAIL_POND";
		case joaat("WATER_DAKOTA_RIVER"):
			return "WATER_DAKOTA_RIVER";
		case joaat("WATER_DEADBOOT_CREEK"):
			return "WATER_DEADBOOT_CREEK";
		case joaat("WATER_DEWBERRY_CREEK"):
			return "WATER_DEWBERRY_CREEK";
		case joaat("WATER_ELYSIAN_POOL"):
			return "WATER_ELYSIAN_POOL";
		case joaat("WATER_FLAT_IRON_LAKE"):
			return "WATER_FLAT_IRON";
		case joaat("WATER_HAWKS_EYE_CREEK"):
			return "WATER_HAWKS_EYE_CREEK";
		case joaat("WATER_HEARTLANDS_OVERFLOW"):
			return "WATER_HEARTLANDS_OVERFLOW";
		case joaat("WATER_HOT_SPRINGS"):
			return "WATER_HOT_SPRINGS";
		case joaat("WATER_KAMASSA_RIVER"):
			return "WATER_KAMASSA_RIVER";
		case joaat("WATER_LAKE_DON_JULIO"):
			return "WATER_LAKE_DON_JULIO";
		case joaat("WATER_LAKE_ISABELLA"):
			return "WATER_LAKE_ISABELLA";
		case joaat("WATER_LANNAHECHEE_RIVER"):
			return "WATER_LANNACHECHEE_RIVER";
		case joaat("WATER_LITTLE_CREEK_RIVER"):
			return "WATER_LITTLE_CREEK_RIVER";
		case joaat("WATER_LOWER_MONTANA_RIVER"):
			return "WATER_LOWER_MONTANA_RIVER";
		case joaat("WATER_MATTLOCK_POND"):
			return "WATER_MATTLOCK_POND";
		case joaat("WATER_MOONSTONE_POND"):
			return "WATER_MOONSTONE_POND";
		case joaat("WATER_O_CREAGHS_RUN"):
			return "WATER_OCREAGHS_RUN";
		case joaat("WATER_OWANJILA"):
			return "WATER_OWANJILA";
		case joaat("WATER_RINGNECK_CREEK"):
			return "WATER_RINGNECK_CREEK";
		case joaat("WATER_SAN_LUIS_RIVER"):
			return "WATER_SAN_LUIS_RIVER";
		case joaat("WATER_SEA_OF_CORONADO"):
			return "WATER_SEA_OF_CORONADO";
		case joaat("WATER_SOUTHFIELD_FLATS"):
			return "WATER_SOUTHFIELD_FLATS";
		case joaat("WATER_SPIDER_GORGE"):
			return "WATER_SPIDER_GORGE";
		case joaat("WATER_STILLWATER_CREEK"):
			return "WATER_STILLWATER_CREEK";
		case joaat("WATER_UPPER_MONTANA_RIVER"):
			return "WATER_UPPER_MONTANA_RIVER";
		case joaat("WATER_WHINYARD_STRAIT"):
			return "WATER_WHINYARD_STRAIT";
		default:
			break;
	}
	return "";
}

int func_95()
{
	return Global_1896610->f_41;
}

bool func_96(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

char* func_97(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BAY";
		case 1:
			return "BGV";
		case 2:
			return "BLU";
		case 3:
			return "CML";
		case 4:
			return "GRT";
		case 5:
			return "GRZ";
		case 6:
			return "GRE";
		case 7:
			return "GRW";
		case 8:
			return "GUA";
		case 9:
			return "HRT";
		case 10:
			return "ROA";
		case 11:
			return "SCM";
		case 12:
			return "TAL";
		case 15:
			return "CHO";
		case 13:
			return "GAP";
		case 16:
			return "HEN";
		case 14:
			return "RIO";
		default:
			break;
	}
	if (func_24() == 0)
	{
		return "FMMC_INV_ALID";
	}
	return "No District Label!";
}

char* func_98(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LEMOYNE";
		case 1:
			return "WEST_ELIZ";
		case 2:
			return "LEMOYNE";
		case 3:
			return "NEW_HANOV";
		case 4:
			return "WEST_ELIZ";
		case 5:
			return "AMBARINO";
		case 6:
			return "AMBARINO";
		case 7:
			return "AMBARINO";
		case 8:
			return "GUARMA";
		case 9:
			return "NEW_HANOV";
		case 10:
			return "NEW_HANOV";
		case 11:
			return "LEMOYNE";
		case 12:
			return "WEST_ELIZ";
		case 13:
			return "NEW_AUST";
		case 14:
			return "NEW_AUST";
		case 15:
			return "NEW_AUST";
		case 16:
			return "NEW_AUST";
		default:
			break;
	}
	if (func_24() == 0)
	{
		return "FMMC_INV_ALID";
	}
	return "No State Label!";
}

void func_99(int iParam0)
{
	Local_21.f_22 = (Local_21.f_22 - (Local_21.f_22 && iParam0));
}

int func_100(int iParam0)
{
	int iVar0;

	iVar0 = func_152(iParam0);
	if (iVar0 == 1 || iVar0 == 5)
	{
		return 1;
	}
	return 0;
}

int func_101()
{
	if (Global_1915180->f_21989.f_1)
	{
		return func_153(148);
	}
	return func_153(Global_1915180->f_19742.f_1);
}

void func_102(int iParam0)
{
	if ((!Global_1051388->f_4537.f_1 || !Global_1051388->f_4537.f_2) && ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		if (PED::IS_PED_MALE(PLAYER::GET_PLAYER_PED(iParam0)))
		{
			Global_1051388->f_4537.f_1 = 1;
		}
		else
		{
			Global_1051388->f_4537.f_2 = 1;
		}
	}
}

void func_103(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		return;
	}
	iVar1 = iParam0;
	iVar2 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar2))
	{
		iVar3 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar2);
		if (&Local_483[iVar3 /*10*/])
		{
			iVar1 = iVar3;
		}
	}
	if ((((Global_1051388->f_4537.f_7 == 5 || Global_1051388->f_4537.f_7 == 6) || Global_1051388->f_4537.f_7 == 7) || Global_1051388->f_4537.f_7 == 10) || ((Global_1051388->f_4537.f_7 == 1 || Global_1051388->f_4537.f_7 == 3) && Local_59.f_117 == 0))
	{
		if ((Local_483[iVar1 /*10*/])->f_5 != (Local_483[iVar0 /*10*/])->f_5 && (Local_483[iVar1 /*10*/])->f_5 != 0)
		{
			if (Global_1051388->f_4537.f_7 == 1 || Global_1051388->f_4537.f_7 == 3)
			{
				if (!Local_59.f_207)
				{
					Local_59.f_207 = 1;
				}
			}
			else
			{
				(Local_483[iVar0 /*10*/])->f_5 = (Local_483[iVar1 /*10*/])->f_5;
				(Local_483[iVar0 /*10*/])->f_6 = (Local_483[iVar1 /*10*/])->f_6;
				Local_59.f_195 = (Local_483[iVar0 /*10*/])->f_7;
				(Local_483[iVar0 /*10*/])->f_7 = (Local_483[iVar1 /*10*/])->f_7;
				if (Global_1051388->f_4537.f_7 == 6)
				{
					TASK::_0xBDFEEB7600BCD938(func_59());
					Local_59.f_47 = 0;
				}
				func_129();
				if (((Local_483[iVar0 /*10*/])->f_6 == 2 || (Local_483[iVar0 /*10*/])->f_6 == 3) || Local_59.f_207)
				{
					Local_59.f_207 = 0;
					func_138();
					if ((Local_483[iVar0 /*10*/])->f_6 == 2)
					{
						func_130("background_set_left", "RDRO_Photo_Shop_Sounds", 1);
					}
					else
					{
						func_130("background_set_right", "RDRO_Photo_Shop_Sounds", 1);
					}
					func_39(12);
				}
				else
				{
					func_138();
					func_130("Backdrop_Move", "RDRO_Photo_Shop_Sounds", 1);
					func_39(11);
				}
				return;
			}
		}
		if ((Local_483[iVar1 /*10*/])->f_8 != (Local_483[iVar0 /*10*/])->f_8)
		{
			if (Global_1051388->f_4537.f_7 == 6)
			{
				TASK::_0xBDFEEB7600BCD938(func_59());
				Local_59.f_47 = 0;
			}
			if (Local_59.f_31)
			{
				Local_59.f_31 = 0;
			}
			(Local_483[iVar0 /*10*/])->f_8 = (Local_483[iVar1 /*10*/])->f_8;
			if (!(Global_1051388->f_4537.f_7 == 1 || Global_1051388->f_4537.f_7 == 3))
			{
				func_39(8);
				func_128();
				func_129();
			}
		}
	}
}

int func_104(int iParam0, var uParam1)
{
	if (!func_154(iParam0))
	{
		return 0;
	}
	if ((iParam0 == 28 || iParam0 == 29) || iParam0 == 33)
	{
		*uParam1 = 0;
		return 1;
	}
	if (func_24() != -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST((Global_1051388->f_69[iParam0 /*76*/])->f_21))
		{
			*uParam1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((Global_1051388->f_69[iParam0 /*76*/])->f_21);
		}
		else
		{
			return 0;
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST((Global_1915180->f_3[iParam0 /*447*/])->f_23))
	{
		*uParam1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((Global_1915180->f_3[iParam0 /*447*/])->f_23);
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_105()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1051388->f_4537)
	{
		iVar0 = (Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_5;
	}
	else
	{
		iVar0 = Local_59.f_205;
	}
	if (iVar0 != 0)
	{
		return iVar0;
	}
	Local_59.f_128 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 < Local_59.f_193)
		{
			if (func_36(&(Local_59.f_130[iVar2]), func_35(Local_59.f_128)))
			{
				Local_59.f_127 = iVar2;
				if (Global_1051388->f_4537)
				{
					(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_5 = &Local_59.f_151[iVar2];
					(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_7 = &Local_59.f_172[iVar2];
				}
				else
				{
					Local_59.f_205 = &Local_59.f_151[iVar2];
				}
				return &(Local_59.f_151[iVar2]);
			}
			iVar2++;
		}
		Local_59.f_128++;
		if (Local_59.f_128 >= 4)
		{
			Local_59.f_128 = 0;
		}
		iVar1++;
	}
	return joaat("MP005_P_MP_PREDHUNT_SKULL01X");
}

Vector3 func_106(vector3 vParam0, vector3 vParam3)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;

	fVar0 = BUILTIN::COS(vParam3.x);
	fVar1 = BUILTIN::SIN(vParam3.x);
	vVar2.x = vParam0.x;
	vVar2.f_1 = ((fVar0 * vParam0.y) - (fVar1 * vParam0.z));
	vVar2.f_2 = ((fVar1 * vParam0.y) + (fVar0 * vParam0.z));
	vParam0 = { vVar2 };
	fVar0 = BUILTIN::COS(vParam3.y);
	fVar1 = BUILTIN::SIN(vParam3.y);
	vVar2.x = ((fVar0 * vParam0.x) + (fVar1 * vParam0.z));
	vVar2.f_1 = vParam0.y;
	vVar2.f_2 = ((fVar0 * vParam0.z) - (fVar1 * vParam0.x));
	vParam0 = { vVar2 };
	fVar0 = BUILTIN::COS(vParam3.z);
	fVar1 = BUILTIN::SIN(vParam3.z);
	vVar2.x = ((fVar0 * vParam0.x) - (fVar1 * vParam0.y));
	vVar2.f_1 = ((fVar1 * vParam0.x) + (fVar0 * vParam0.y));
	vVar2.f_2 = vParam0.z;
	vParam0 = { vVar2 };
	return vParam0;
}

char* func_107(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PHST_LIGHTING_STANDARD"):
			return "standard_PL";
		case joaat("PHST_LIGHTING_SUNNY"):
			return "sunny_PL";
		case joaat("PHST_LIGHTING_SUNSET"):
			return "sunset_PL";
		case joaat("PHST_LIGHTING_INTERIOR"):
			return "interior_PL";
		case joaat("PHST_LIGHTING_NIGHT"):
			return "night_PL";
		default:
			break;
	}
	return "standard_PL";
}

char* func_108(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PHST_LIGHTING_STANDARD"):
			return "b_standard";
		case joaat("PHST_LIGHTING_SUNNY"):
			return "b_sunny";
		case joaat("PHST_LIGHTING_SUNSET"):
			return "b_sunset";
		case joaat("PHST_LIGHTING_INTERIOR"):
			return "b_interior";
		case joaat("PHST_LIGHTING_NIGHT"):
			return "b_night";
		default:
			break;
	}
	return "b_standard";
}

void func_109(int iParam0)
{
	Local_59.f_117 = iParam0;
}

Vector3 func_110(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0f, 0f, 0f;
		case 1:
			return 0.75f, 0f, 0f;
		case 2:
			return -0.75f, 0f, 0f;
		case 3:
			return (0.9f * 0.5f), -0.75f, 0f;
		case 4:
			return (0.9f * -0.5f), -0.75f, 0f;
		case 5:
			return (0.9f * 1.5f), -0.75f, 0f;
		case 6:
			return (0.9f * -1.5f), -0.75f, 0f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_111(var uParam0)
{
	func_155(uParam0, 0f);
}

bool func_112(var uParam0)
{
	return func_144(*uParam0, 2);
}

int func_113()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

void func_114()
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE_ALTERNATE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MAP"), false);
}

int func_115(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam1 == 2104565373 && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iParam0))
			{
				return 1;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true) == 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_116(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_117(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_156(*uParam0);
	if (((*Global_1949759)[iVar0 /*23*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_157(iVar0);
	*uParam0 = 0;
}

bool func_117(int iParam0)
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

int func_118(char* sParam0, int iParam1, int iParam2, int iParam3)
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
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_158(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_159(iVar1, iParam1, sParam0, 0, 3, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam3, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 0, iParam2, joaat("SHORT_TIMED_EVENT"), 0);
		return iVar1;
	}
	return 0;
}

void func_119(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_117(iParam0))
	{
		return;
	}
	iVar0 = func_156(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(((*Global_1949759)[iVar0 /*23*/])->f_3, iParam1, bParam2);
}

void func_120(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_117(iParam0))
	{
		return;
	}
	iVar0 = func_156(iParam0);
	if (bParam1)
	{
		func_160(iParam0, 4);
		if (bParam3)
		{
			func_161(iVar0, 1);
		}
		func_162(iVar0, 1);
	}
	else
	{
		func_163(iParam0, 4);
		func_162(iVar0, 0);
	}
}

int func_121(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
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
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_158(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_159(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_122(var uParam0, var uParam1, int iParam2)
{
	bool bVar0;
	int iVar1;

	if (func_164(iParam2, &bVar0))
	{
		switch (iParam2)
		{
			case 0:
				iVar1 = joaat("INPUT_EMOTE_DANCE");
				break;
			case 3:
				iVar1 = joaat("INPUT_EMOTE_GREET");
				break;
			case 2:
				iVar1 = joaat("INPUT_EMOTE_COMM");
				break;
			case 1:
				iVar1 = joaat("INPUT_EMOTE_TAUNT");
				break;
		}
		if (!func_117(*uParam0))
		{
			*uParam0 = func_121(func_166(func_165(bVar0), joaat("COLOR_PURE_WHITE")), iVar1, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("MEDIUM_TIMED_EVENT"), 0);
			func_119(*uParam0, 13, 1, 1);
			func_119(*uParam0, 10, 1, 1);
			func_119(*uParam0, 14, 1, 1);
			func_119(*uParam0, 19, 1, 1);
			func_119(*uParam0, 20, 1, 1);
			func_119(*uParam0, 4, 1, 0);
			func_119(*uParam0, 2, 1, 0);
		}
		else
		{
			func_120(*uParam0, 1, 1, 1);
		}
		if (!func_117(*uParam1))
		{
			*uParam1 = func_121(func_166(func_165(bVar0), joaat("COLOR_PURE_WHITE")), iVar1, 2, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			func_119(*uParam1, 13, 1, 1);
			func_119(*uParam1, 10, 1, 1);
			func_119(*uParam1, 14, 1, 1);
			func_119(*uParam1, 4, 1, 0);
			func_119(*uParam1, 2, 1, 0);
		}
		else
		{
			func_120(*uParam1, 1, 1, 1);
		}
		func_123(*uParam1, 0, 1);
	}
}

void func_123(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_117(iParam0))
	{
		return;
	}
	iVar0 = func_156(iParam0);
	func_161(iVar0, bParam1);
}

void func_124(int iParam0, char* sParam1, char* sParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (bParam4 && !func_117(iParam0))
	{
		return;
	}
	iVar0 = func_156(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1949759)[iVar0 /*23*/])->f_3, MISC::_CREATE_VAR_STRING(6, sParam1, sParam2));
}

int func_125()
{
	if (Local_21.f_1)
	{
		func_120(Local_59.f_37, 0, 1, 1);
		return 0;
	}
	if (Local_21)
	{
		func_120(Local_59.f_37, 0, 1, 1);
		return 0;
	}
	if (!func_134(500))
	{
		func_120(Local_59.f_37, 0, 1, 1);
		return 0;
	}
	if (Local_21.f_24 == 1)
	{
		func_120(Local_59.f_37, 0, 1, 1);
		return 0;
	}
	if (Local_21.f_6)
	{
		func_120(Local_59.f_37, 0, 1, 1);
		return 0;
	}
	if (Global_1051388->f_4537 && Global_1051388->f_4537.f_4 <= 1)
	{
		func_120(Local_59.f_37, 0, 1, 1);
		return 0;
	}
	return 1;
}

bool func_126(int iParam0, bool bParam1)
{
	if (bParam1 && !func_117(iParam0))
	{
		return false;
	}
	return !func_158(iParam0, 4);
}

bool func_127(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_117(iParam0))
	{
		return false;
	}
	iVar0 = func_156(iParam0);
	return HUD::_UIPROMPT_HAS_STANDARD_MODE_COMPLETED(((*Global_1949759)[iVar0 /*23*/])->f_3, iParam1);
}

void func_128()
{
	if (_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		if (Local_59.f_208 > Local_59.f_204)
		{
			Local_59.f_208 = 0;
		}
		if (Local_59.f_208 < 0)
		{
			Local_59.f_208 = Local_59.f_204;
		}
		if (Local_59.f_208 != 0)
		{
			(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_8 = &Local_59.f_197[(Local_59.f_208 - 1)];
			Local_59.f_31 = 0;
		}
		else
		{
			(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_8 = 0;
		}
	}
	(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_9 = 1;
}

void func_129()
{
	if (func_117(Local_59.f_33))
	{
		func_120(Local_59.f_33, 0, 1, 1);
	}
	if (func_117(Local_59.f_34))
	{
		func_120(Local_59.f_34, 0, 1, 1);
	}
	if (func_117(Local_59.f_32))
	{
		func_120(Local_59.f_32, 0, 1, 1);
	}
	if (func_117(Local_59.f_35))
	{
		func_120(Local_59.f_35, 0, 1, 1);
	}
	if (func_117(Local_59.f_49))
	{
		func_120(Local_59.f_49, 0, 1, 1);
	}
	if (func_117(Local_59.f_37))
	{
		func_120(Local_59.f_37, 0, 1, 1);
	}
	func_167(Local_59.f_39);
	func_167(Local_59.f_41);
	func_167(Local_59.f_43);
	func_167(Local_59.f_45);
	if (func_117(Local_59.f_40))
	{
		func_120(Local_59.f_40, 0, 1, 1);
	}
	if (func_117(Local_59.f_42))
	{
		func_120(Local_59.f_42, 0, 1, 1);
	}
	if (func_117(Local_59.f_44))
	{
		func_120(Local_59.f_44, 0, 1, 1);
	}
	if (func_117(Local_59.f_46))
	{
		func_120(Local_59.f_46, 0, 1, 1);
	}
	if (func_117(Local_59.f_48))
	{
		func_120(Local_59.f_48, 0, 1, 1);
	}
	if (func_117(Local_59.f_36))
	{
		func_120(Local_59.f_36, 0, 1, 1);
	}
	if (func_117(Local_59.f_38))
	{
		func_120(Local_59.f_38, 0, 1, 1);
	}
}

void func_130(char* sParam0, char* sParam1, int iParam2)
{
	int iVar0;

	iVar0 = AUDIO::GET_SOUND_ID();
	if (iVar0 != -1)
	{
		AUDIO::_0xCE5D0FFE83939AF1(iVar0, sParam0, sParam1, iParam2);
		(*Global_1956139)[Global_1956139->f_25] = iVar0;
		Global_1956139->f_25 = (Global_1956139->f_25 + 1 % 24);
	}
}

bool func_131(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_117(iParam0))
	{
		return false;
	}
	iVar0 = func_156(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(((*Global_1949759)[iVar0 /*23*/])->f_3);
}

int func_132(bool bParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bool bVar0;
	bool bVar1;
	struct<2> Var2[15];
	int iVar33;
	bool bVar34;
	int iVar35;
	struct<14> Var36;
	int iVar52;
	struct<16> Var53;

	if (!func_82(bParam0, 0))
	{
		return -1;
	}
	if (func_168(bParam0) != joaat("FEE"))
	{
		return -1;
	}
	if (func_169())
	{
		bParam3 = true;
	}
	if (bParam5 == -570078785 || bParam5 == -915411861)
	{
		bVar0 = (func_170(bParam0, bParam5, 1, 0, 1, joaat("CURRENCY_CASH")) * iParam2);
		bVar1 = false;
		if (bVar0 <= 0)
		{
			bVar1 = (func_170(bParam0, bParam5, 1, 0, 1, joaat("CURRENCY_GOLD_BAR")) * iParam2);
			if (bVar1 <= 0)
			{
				return -1;
			}
		}
		if (!MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(bVar0, bVar1))
		{
			return -1;
		}
	}
	else if (func_171(bParam0, bParam5, &Var2, &iVar33, 1, 0))
	{
		iVar35 = 0;
		while (iVar35 < iVar33)
		{
			bVar34 = ((Var2[iVar35 /*2*/])->f_1 * iParam2);
			if (!func_172(&(Var2[iVar35 /*2*/]), 0, bParam3, 0) >= bVar34)
			{
				return -1;
			}
			iVar35++;
		}
	}
	else
	{
		return -1;
	}
	if (!bParam3 && func_173(0))
	{
		if (bVar0 > 0)
		{
			func_174(joaat("CURRENCY_CASH"), bVar0, -142743235, 0, 0);
		}
		else if (bVar1 > 0)
		{
			func_174(joaat("CURRENCY_GOLD_BAR"), bVar1, -142743235, 0, 0);
		}
		else if (func_175(bParam5))
		{
			iVar35 = 0;
			while (iVar35 < iVar33)
			{
				bVar34 = ((Var2[iVar35 /*2*/])->f_1 * iParam2);
				func_174(&(Var2[iVar35 /*2*/]), bVar34, -142743235, 0, 0);
				iVar35++;
			}
		}
		return -1;
	}
	Var36.f_9 = 1;
	Var36.f_11 = -1591664384;
	Var36.f_8 = bParam0;
	Var36.f_9 = iParam2;
	Var36.f_13 = bParam5;
	Var36.f_12 = -142743235;
	iVar52 = func_176(joaat("SPEND"), &Var36, bParam4);
	if (iVar52 == -1)
	{
	}
	else
	{
		Var53.f_7 = -142743235;
		StringCopy(&(Var53.f_12), sParam1, 32);
		func_177(iVar52, Var53);
	}
	return iVar52;
}

int func_133(int iParam0)
{
	int iVar0;

	iVar0 = func_156(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	return ((*Global_1949759)[iVar0 /*23*/])->f_4;
}

bool func_134(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_24() == 0)
	{
		return func_178(iParam0);
	}
	return iParam0 <= func_179();
}

int func_135(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	int iVar15;

	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	iVar15 = _NAMESPACE71::_SHOW_TOOLTIP(&Var0, &Var13, iParam5);
	return iVar15;
}

float func_136(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_117(iParam0))
	{
		return 0f;
	}
	iVar0 = func_156(iParam0);
	if (HUD::_0xCD072523791DDC1B(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		return HUD::_UIPROMPT_GET_MASH_MODE_PROGRESS(((*Global_1949759)[iVar0 /*23*/])->f_3);
	}
	return HUD::_0x81801291806DBC50(((*Global_1949759)[iVar0 /*23*/])->f_3);
}

int func_137()
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;

	if (!Local_59.f_60)
	{
		return 0;
	}
	fVar0 = PAD::GET_CONTROL_NORMAL(2, Local_59.f_59);
	if ((fVar0 > 0.75f && Local_59.f_59 != joaat("INPUT_MOVE_UP_ONLY")) && Local_59.f_127 < (Local_59.f_193 - 1))
	{
		bVar1 = true;
	}
	else if ((fVar0 < -0.75f || (Local_59.f_59 == joaat("INPUT_MOVE_UP_ONLY") && fVar0 > 0.75f)) && Local_59.f_127 > 0)
	{
		bVar2 = true;
	}
	if (bVar1 || bVar2)
	{
		iVar4 = Local_59.f_127;
		while (iVar4 < Local_59.f_193 && iVar4 >= 0)
		{
			if (bVar1)
			{
				iVar4++;
			}
			else
			{
				iVar4 = (iVar4 - 1);
			}
			if (iVar4 >= Local_59.f_193 || iVar4 < 0)
			{
			}
			else
			{
				if (func_36(&(Local_59.f_130[iVar4]), func_35(Local_59.f_128)))
				{
					if (!bVar3)
					{
						Local_59.f_127 = iVar4;
						if (Global_1051388->f_4537)
						{
							(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_5 = &Local_59.f_151[iVar4];
							Local_59.f_195 = (Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_7;
							(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_7 = &Local_59.f_172[iVar4];
							if (bVar1)
							{
								(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_6 = 0;
							}
							else
							{
								(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_6 = 1;
							}
						}
						else
						{
							Local_59.f_205 = &Local_59.f_151[iVar4];
							if (bVar1)
							{
								Local_59.f_206 = 0;
							}
							else
							{
								Local_59.f_206 = 1;
							}
						}
						if (Local_59.f_59 != joaat("INPUT_MOVE_UD"))
						{
							func_116(&(Local_59.f_33), 1, 1);
							Local_59.f_59 = joaat("INPUT_MOVE_UD");
							Local_59.f_33 = func_121("PHOTO_STUDIO_CHANGE_BACKGROUND", Local_59.f_59, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
							func_119(Local_59.f_33, 4, 1, 0);
						}
						bVar3 = true;
					}
					else
					{
						return 1;
					}
				}
			}
		}
		if (bVar3)
		{
			if (bVar1)
			{
				func_116(&(Local_59.f_33), 1, 1);
				Local_59.f_59 = joaat("INPUT_MOVE_UP_ONLY");
				Local_59.f_33 = func_121("PHOTO_STUDIO_CHANGE_BACKGROUND", Local_59.f_59, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
				func_119(Local_59.f_33, 4, 1, 0);
			}
			else
			{
				func_116(&(Local_59.f_33), 1, 1);
				Local_59.f_59 = joaat("INPUT_MOVE_DOWN_ONLY");
				Local_59.f_33 = func_121("PHOTO_STUDIO_CHANGE_BACKGROUND", Local_59.f_59, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
				func_119(Local_59.f_33, 4, 1, 0);
			}
			return 1;
		}
	}
	return 0;
}

void func_138()
{
	if (!Global_1051388->f_4537)
	{
		return;
	}
	if (Local_59.f_195 == (Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_7)
	{
		return;
	}
	if (Local_59.f_195 != 0)
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_59.f_194, func_108(Local_59.f_195), true, false);
	}
	Local_59.f_196 = 0;
}

int func_139()
{
	float fVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	fVar0 = PAD::GET_CONTROL_NORMAL(2, func_133(Local_59.f_34));
	if (fVar0 > 0.75f || fVar0 < -0.75f)
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (fVar0 > 0.75f)
			{
				Local_59.f_128++;
				if (Local_59.f_128 >= 4)
				{
					Local_59.f_128 = 0;
				}
			}
			else
			{
				Local_59.f_128 = (Local_59.f_128 - 1);
				if (Local_59.f_128 < 0)
				{
					Local_59.f_128 = 3;
				}
			}
			iVar2 = 0;
			bVar3 = false;
			Local_59.f_60 = 0;
			iVar2 = 0;
			while (iVar2 < Local_59.f_193)
			{
				if (func_36(&(Local_59.f_130[iVar2]), func_35(Local_59.f_128)))
				{
					if (!bVar3)
					{
						Local_59.f_127 = iVar2;
						if (fVar0 > 0.75f)
						{
							Local_59.f_63 = 0;
						}
						else
						{
							Local_59.f_63 = 1;
						}
						if (Global_1051388->f_4537)
						{
							(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_5 = &Local_59.f_151[iVar2];
							Local_59.f_195 = (Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_7;
							(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_7 = &Local_59.f_172[iVar2];
							if (fVar0 > 0.75f)
							{
								(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_6 = 2;
							}
							else
							{
								(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_6 = 3;
							}
						}
						else
						{
							Local_59.f_205 = &Local_59.f_151[iVar2];
							if (fVar0 > 0.75f)
							{
								Local_59.f_206 = 2;
							}
							else
							{
								Local_59.f_206 = 3;
							}
						}
						bVar3 = true;
					}
					else
					{
						Local_59.f_60 = 1;
					}
					else
					{
						iVar2++;
					}
					if (bVar3)
					{
						func_116(&(Local_59.f_33), 1, 1);
						Local_59.f_59 = joaat("INPUT_MOVE_DOWN_ONLY");
						Local_59.f_33 = func_121("PHOTO_STUDIO_CHANGE_BACKGROUND", Local_59.f_59, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
						func_119(Local_59.f_33, 4, 1, 0);
						func_120(Local_59.f_33, Local_59.f_60, 1, 1);
						return 1;
					}
					iVar1++;
					return 0;
				}
			}
		}
	}

void func_140(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_117(iParam0))
	{
		return;
	}
	iVar0 = func_156(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1949759)[iVar0 /*23*/])->f_3, sParam1);
}

void func_141(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	bVar0 = false;
	if (func_117(iParam0))
	{
		if (Global_1051388->f_4537.f_7 != 6 && Global_1051388->f_4537.f_7 != 13)
		{
			if (func_180(iParam0, 1))
			{
				bVar0 = true;
				if (func_164(iParam2, &bVar1))
				{
					TASK::_TASK_EMOTE(func_59(), func_181(iParam2), 1, bVar1, true, false, false, true);
					Local_59.f_47 = iParam0;
					func_39(6);
					func_129();
					func_120(Local_59.f_37, 1, 1, 1);
					func_120(Local_59.f_48, 1, 1, 1);
					func_123(Local_59.f_48, 1, 1);
				}
			}
		}
		else if (!func_180(iParam0, 1) && Local_59.f_47 == iParam0)
		{
			func_120(iParam0, 0, 1, 1);
			func_120(Local_59.f_48, 0, 1, 1);
			func_123(Local_59.f_48, 0, 1);
			TASK::_0xBDFEEB7600BCD938(func_59());
			Local_59.f_47 = 0;
		}
	}
	if (func_117(iParam1))
	{
		if (func_142(iParam1, 1))
		{
			bVar0 = true;
			if (func_164(iParam2, &bVar2))
			{
				TASK::_TASK_EMOTE(func_59(), func_182(iParam2), 2, bVar2, false, true, false, true);
				Local_59.f_47 = iParam0;
				func_129();
				func_120(Local_59.f_37, 1, 1, 1);
				func_39(7);
			}
		}
	}
	if (bVar0)
	{
		Global_1051388->f_4537.f_5 = iParam2;
	}
}

bool func_142(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_117(iParam0))
	{
		return false;
	}
	iVar0 = func_156(iParam0);
	return HUD::_UIPROMPT_IS_JUST_PRESSED(((*Global_1949759)[iVar0 /*23*/])->f_3);
}

void func_143()
{
	UIAPPS::_LAUNCH_APP_WITH_ENTRY("social_club_feed", "launch_to_photos");
}

bool func_144(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_145(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar6;

	iVar0 = INVENTORY::_0x13D234A2A3F66E63(iParam0);
	iVar1 = INVENTORY::_0x13D234A2A3F66E63(iParam1);
	if (!INVENTORY::_0x886DFD3E185C8A89(iVar0, &uVar6, 923904168, -740156546, &uVar2))
	{
	}
	INVENTORY::_0xC04F47D488EF9EBA(iVar0, iVar1, &uVar2, 0);
}

int func_146(var uParam0)
{
	return uParam0;
}

bool func_147(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return PED::_0x772A1969F649E902(iVar0);
}

int func_148(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (PED::_0x34D6AC1157C8226C(iParam0, joaat("PROP_HITCHINGPOST")))
	{
		return 1;
	}
	return 0;
}

bool func_149(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_150(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(bParam0, iParam1);
}

void func_151()
{
	StringCopy(&(Local_21.f_11), "-", 32);
	StringConCat(&(Local_21.f_11), " / ", 32);
	StringCopy(&(Local_21.f_15), "-", 32);
	StringConCat(&(Local_21.f_11), &(Local_21.f_15), 32);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Local_21.f_10, &(Local_21.f_11));
}

int func_152(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_1272170->f_20)
	{
		if (&Global_1272170->f_20.f_1[iVar0 /*20*/] == iParam0)
		{
			return (Global_1272170->f_20.f_1[iVar0 /*20*/])->f_1;
		}
		iVar0++;
	}
	return 0;
}

int func_153(int iParam0)
{
	switch (iParam0)
	{
		case 132:
			return joaat("SHOP_BUT_MUSICIAN_BANJO");
		case 6:
			return joaat("SHOP_BLK_GENERAL_STORE");
		case 7:
			return joaat("SHOP_BLK_GUNSMITH");
		case 8:
			return joaat("SHOP_BLK_BARBER");
		case 19:
			return joaat("SHOP_BLK_TAILOR");
		case 13:
			return joaat("SHOP_BLK_HORSE_SHOP");
		case 14:
			return joaat("SHOP_BLK_POST_OFFICE");
		case 15:
			return joaat("SHOP_BLK_TRAIN_STATION");
		case 12:
			return joaat("SHOP_BLK_PHOTO_STUDIO");
		case 122:
			return joaat("SHOP_BLK_BOUNTYHUNTING_MP_RETURN");
		case 123:
			return joaat("SHOP_BLK_COACH");
		case 5:
			return joaat("SHOP_BLK_BANK");
		case 9:
			return joaat("SHOP_BLK_BUTCHER");
		case 10:
			return joaat("SHOP_BLK_BARTENDER");
		case 11:
			return joaat("SHOP_BLK_PIANIST");
		case 16:
			return joaat("SHOP_BLK_MUSICIAN_GUITARIST_FIRST");
		case 17:
			return joaat("SHOP_BLK_MUSICIAN_GUITARIST_SECOND");
		case 18:
			return joaat("SHOP_BLK_MUSICIAN_GUITARIST_THIRD");
		case 23:
			return joaat("SHOP_EMR_GENERAL_STORE");
		case 24:
			return joaat("SHOP_EMR_POST_OFFICE");
		case 25:
			return joaat("SHOP_EMR_TRAIN_STATION");
		case 22:
			return joaat("SHOP_EMR_FENCE");
		case 26:
			return joaat("SHOP_LAG_BAIT_STORE");
		case 45:
			return joaat("SHOP_SDN_DOCTOR");
		case 48:
			return joaat("SHOP_SDN_GENERAL_STORE");
		case 46:
			return joaat("SHOP_SDN_FENCE");
		case 49:
			return joaat("SHOP_SDN_GUNSMITH");
		case 42:
			return joaat("SHOP_SDN_BANK");
		case 43:
			return joaat("SHOP_SDN_BARBER");
		case 44:
			return joaat("SHOP_SDN_BUTCHER");
		case 50:
			return joaat("SHOP_SDN_HORSE_SHOP");
		case 51:
			return joaat("SHOP_SDN_POST_OFFICE");
		case 52:
			return joaat("SHOP_SDN_TRAIN_STATION");
		case 53:
			return joaat("SHOP_SDN_TAILOR");
		case 63:
			return joaat("SHOP_SDN_TRAPPER");
		case 56:
			return joaat("SHOP_SDN_BARTENDER_SLUM");
		case 57:
			return joaat("SHOP_SDN_PIANIST_SLUM");
		case 60:
			return joaat("SHOP_SDN_PHOTO_STUDIO");
		case 124:
			return joaat("SHOP_SDN_BOUNTYHUNTING_MP_RETURN");
		case 125:
			return joaat("SHOP_SDN_COACH");
		case 54:
			return joaat("SHOP_SDN_BARTENDER");
		case 55:
			return joaat("SHOP_SDN_PIANIST");
		case 59:
			return joaat("SHOP_SDN_MUSICIAN_BANJO");
		case 58:
			return joaat("SHOP_SDN_MUSICIAN_GUITARIST");
		case 61:
			return joaat("SHOP_SDN_THEATER_MP");
		case 62:
			return joaat("SHOP_SDN_THEATER_MAGIC_MP");
		case 27:
			return joaat("SHOP_RGG_POST_OFFICE");
		case 28:
			return joaat("SHOP_RGG_TRAIN_STATION");
		case 33:
			return joaat("SHOP_RHO_GENERAL_STORE");
		case 31:
			return joaat("SHOP_RHO_FENCE");
		case 34:
			return joaat("SHOP_RHO_GUNSMITH");
		case 35:
			return joaat("SHOP_RHO_POST_OFFICE");
		case 30:
			return joaat("SHOP_RHO_BUTCHER");
		case 39:
			return joaat("SHOP_RHO_TRAIN_STATION");
		case 126:
			return joaat("SHOP_RHO_BOUNTYHUNTING_MP_RETURN");
		case 29:
			return joaat("SHOP_RHO_BANK");
		case 36:
			return joaat("SHOP_RHO_BARTENDER");
		case 37:
			return joaat("SHOP_RHO_PIANIST");
		case 38:
			return joaat("SHOP_RHO_MUSICIAN_BANJO");
		case 68:
			return joaat("SHOP_STR_BUTCHER");
		case 69:
			return joaat("SHOP_STR_GENERAL_STORE");
		case 70:
			return joaat("RAGE_P2_3");
		case 71:
			return joaat("SHOP_STR_HORSE_SHOP");
		case 74:
			return joaat("SHOP_STR_POST_OFFICE");
		case 127:
			return joaat("SHOP_STR_BOUNTYHUNTING_MP_RETURN");
		case 75:
			return joaat("SHOP_STR_BARTENDER");
		case 72:
			return joaat("SHOP_STR_MUSICIAN_BANJO");
		case 73:
			return joaat("SHOP_STR_MUSICIAN_GUITARIST");
		case 83:
			return joaat("SHOP_VAL_DOCTOR");
		case 84:
			return joaat("SHOP_VAL_GENERAL_STORE");
		case 85:
			return joaat("SHOP_VAL_GUNSMITH");
		case 78:
			return joaat("SHOP_VAL_BARBER");
		case 87:
			return joaat("SHOP_VAL_POST_OFFICE");
		case 86:
			return joaat("SHOP_VAL_HORSE_SHOP");
		case 82:
			return joaat("SHOP_VAL_BUTCHER");
		case 88:
			return joaat("SHOP_VAL_TRAIN_STATION");
		case 81:
			return joaat("SHOP_VAL_BARTENDER_KEANE");
		case 91:
			return joaat("SHOP_VAL_BARTENDER_SLUM");
		case 90:
			return joaat("SHOP_VAL_HOTEL");
		case 120:
			return joaat("SHOP_VAL_BOUNTYHUNTING_MP_RETURN");
		case 121:
			return joaat("SHOP_VAL_COACH");
		case 77:
			return joaat("SHOP_VAL_BANK");
		case 79:
			return joaat("SHOP_VAL_BARTENDER");
		case 80:
			return joaat("SHOP_VAL_PIANIST");
		case 89:
			return joaat("SHOP_VAL_THEATER_MAGIC_MP");
		case 41:
			return joaat("SHOP_SCM_HORSE_SHOP");
		case 98:
			return joaat("SHOP_VAN_POST_OFFICE");
		case 97:
			return joaat("SHOP_VAN_TRAIN_STATION");
		case 93:
			return joaat("SHOP_VAN_FENCE");
		case 96:
			return joaat("SHOP_VAN_HORSE_SHOP");
		case 94:
			return joaat("SHOP_VAN_BARTENDER");
		case 95:
			return joaat("SHOP_VAN_PIANIST");
		case 128:
			return joaat("SHOP_VAN_COACH");
		case 129:
			return joaat("SHOP_ASB_BOUNTYHUNTING_MP_RETURN");
		case 0:
			return joaat("SHOP_ASB_GUNSMITH");
		case 1:
			return joaat("SHOP_ASB_POST_OFFICE");
		case 2:
			return joaat("SHOP_ASB_TRAIN_STATION");
		case 101:
			return joaat("SHOP_WAL_POST_OFFICE");
		case 99:
			return joaat("SHOP_WAL_GENERAL_STORE");
		case 100:
			return joaat("SHOP_WAL_TRAIN_STATION");
		case 119:
			return joaat("SHOP_DYNAMIC");
		case 133:
			return joaat("SHOP_WILDERNESS_SUPPLIES");
		case 148:
			return joaat("SHOP_ANYWHERE_HANDHELD");
		case 172:
			return joaat("SHOP_WEAPON_MOD_STORE");
		case 173:
			return joaat("SHOP_CLOTHING");
		case 174:
			return joaat("SHOP_CAMP_SHAVING");
		case 149:
			return joaat("SHOP_CAMP_LOCKBOX");
		case 150:
			return joaat("SHOP_CAMP_BUTCHERTABLE");
		case 147:
			return joaat("SHOP_CAMP_TRAVELLING_SALESMAN");
		case 135:
			return joaat("SHOP_RIO_TRAVELLING_SALESMAN");
		case 136:
			return joaat("SHOP_CHO_TRAVELLING_SALESMAN");
		case 137:
			return joaat("SHOP_HEN_TRAVELLING_SALESMAN");
		case 138:
			return joaat("SHOP_TAL_TRAVELLING_SALESMAN");
		case 139:
			return joaat("SHOP_BGV_TRAVELLING_SALESMAN");
		case 140:
			return joaat("SHOP_HRT_E_TRAVELLING_SALESMAN");
		case 141:
			return joaat("SHOP_HRT_W_TRAVELLING_SALESMAN");
		case 142:
			return joaat("SHOP_GRZ_TRAVELLING_SALESMAN");
		case 143:
			return joaat("SHOP_SCM_TRAVELLING_SALESMAN");
		case 144:
			return joaat("SHOP_BLU_TRAVELLING_SALESMAN");
		case 145:
			return joaat("SHOP_DER_TRAVELLING_SALESMAN");
		case 146:
			return joaat("SHOP_BBR_TRAVELLING_SALESMAN");
		case 47:
			return joaat("SHOP_MOONSHINE_STILL");
		case 32:
			return joaat("SHOP_MOONSHINE_STILL");
		case 21:
			return joaat("SHOP_MOONSHINE_STILL");
		case 115:
			return joaat("SHOP_MOONSHINE_STILL");
		case 92:
			return joaat("SHOP_MOONSHINE_STILL");
		case 131:
			return joaat("SHOP_MOONSHINE_STILL");
		case 20:
			return joaat("SHOP_MOONSHINE_STILL");
		case 134:
			return -765151559;
		case 175:
			return joaat("SHOP_WARDROBE");
		case 151:
			return joaat("SHOP_BVH_DOCTOR");
		case 152:
			return joaat("SHOP_BVH_GENERAL_STORE");
		case 153:
			return joaat("SHOP_BVH_GUNSMITH");
		case 154:
			return joaat("SHOP_BVH_HORSE_TRAINER");
		case 67:
			return 1529797091;
		case 155:
			return joaat("SHOP_CLM_DOCTOR");
		case 156:
			return joaat("SHOP_CLM_GENERAL_STORE");
		case 157:
			return joaat("SHOP_CLM_GUNSMITH");
		case 158:
			return joaat("SHOP_CLM_HORSE_TRAINER");
		case 65:
			return 1388932648;
		case 160:
			return joaat("SHOP_HSO_DOCTOR");
		case 161:
			return joaat("SHOP_HSO_GENERAL_STORE");
		case 162:
			return joaat("SHOP_HSO_GUNSMITH");
		case 163:
			return joaat("SHOP_HSO_HORSE_TRAINER");
		case 64:
			return 878376253;
		case 164:
			return joaat("SHOP_LAK_DOCTOR");
		case 165:
			return joaat("SHOP_LAK_GENERAL_STORE");
		case 166:
			return joaat("SHOP_LAK_GUNSMITH");
		case 167:
			return joaat("SHOP_LAK_HORSE_TRAINER");
		case 168:
			return joaat("SHOP_SHB_DOCTOR");
		case 169:
			return joaat("SHOP_SHB_GENERAL_STORE");
		case 170:
			return joaat("SHOP_SHB_GUNSMITH");
		case 171:
			return joaat("SHOP_SHB_HORSE_TRAINER");
		case 66:
			return -2076086367;
		case 159:
			return joaat("SHOP_CLM_HORSE_FENCE");
		case 108:
			return joaat("SHOP_AMD_GENERAL_STORE");
		case 110:
			return joaat("SHOP_AMD_BARTENDER");
		case 109:
			return joaat("SHOP_AMD_HONOR_MP");
		case 111:
			return joaat("SHOP_AMD_POST_OFFICE");
		case 112:
			return joaat("SHOP_AMD_TRAIN_STATION");
		case 113:
			return joaat("SHOP_ROJ_HONOR_MP");
		case 114:
			return joaat("SHOP_BOJ_HONOR_MP");
		case 102:
			return joaat("SHOP_TBL_GENERAL_STORE");
		case 105:
			return joaat("SHOP_TBL_BARTENDER");
		case 106:
			return joaat("SHOP_TBL_PIANIST");
		case 103:
			return joaat("SHOP_TBL_GUNSMITH");
		case 104:
			return joaat("SHOP_TBL_BUTCHER");
		case 107:
			return joaat("SHOP_TBL_HORSE_SHOP");
		case 116:
			return joaat("SHOP_RYC_FENCE");
		case 130:
			return joaat("SHOP_THL_FENCE");
		case 117:
			return joaat("SHOP_BEN_POST_OFFICE");
		case 118:
			return joaat("SHOP_BEN_TRAIN_STATION");
		case 3:
			return 548657065;
		case 4:
			return 243086140;
		case 40:
			return -305029900;
		case 76:
			return 1008537949;
		default:
			break;
	}
	return 0;
}

bool func_154(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 39);
}

void func_155(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_183() - fParam1);
	func_184(uParam0, 1);
	func_185(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_156(int iParam0)
{
	return iParam0;
}

void func_157(int iParam0)
{
	if (!func_186(iParam0))
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

bool func_158(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1949759)[iParam0 /*23*/])->f_1 && iParam1) != 0;
}

void func_159(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_161(iParam0, 1);
	func_162(iParam0, 1);
	func_163(iParam0, 128);
}

void func_160(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1949759)[iParam0 /*23*/])->f_1 = (((*Global_1949759)[iParam0 /*23*/])->f_1 - (((*Global_1949759)[iParam0 /*23*/])->f_1 && iParam1));
}

void func_161(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iParam0 /*23*/])->f_3))
	{
		if (((*Global_1949759)[iParam0 /*23*/])->f_5 == 5 && !func_158(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1949759)[iParam0 /*23*/])->f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1949759)[iParam0 /*23*/])->f_3, bParam1);
		}
	}
}

void func_162(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iParam0 /*23*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1949759)[iParam0 /*23*/])->f_3, bParam1);
	}
}

void func_163(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1949759)[iParam0 /*23*/])->f_1 = (((*Global_1949759)[iParam0 /*23*/])->f_1 || iParam1);
}

bool func_164(int iParam0, bool bParam1)
{
	return func_187(&(Global_17172.f_54.f_2480), iParam0, bParam1);
}

char* func_165(bool bParam0)
{
	int iVar0;

	if (!func_82(bParam0, 0))
	{
		return "";
	}
	iVar0 = func_188(bParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(iVar0);
}

char* func_166(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_189(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

void func_167(int iParam0)
{
	if (func_117(iParam0))
	{
		if (Global_1051388->f_4537.f_7 != 6 || iParam0 != Local_59.f_47)
		{
			func_120(iParam0, 0, 1, 1);
		}
	}
}

int func_168(bool bParam0)
{
	vector3 vVar0;

	if (!func_82(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_169()
{
	if (INVENTORY::_0x13D234A2A3F66E63(PLAYER::PLAYER_PED_ID()) != 3)
	{
		return 0;
	}
	return INVENTORY::_0xFC7563F482781A3D();
}

int func_170(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if ((bParam4 && bParam1 == -915411861) && func_190(bParam0, 59806960))
	{
		bParam1 = 59806960;
	}
	if (func_191(bParam0))
	{
		return func_193(func_192(bParam0, 0), bParam1, bParam3, 1);
	}
	if (!func_171(bParam0, bParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32 /*2*/] == joaat("CURRENCY_CASH") || &Var0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
		{
			if (iParam5 != 0 && &Var0[iVar32 /*2*/] != iParam5)
			{
			}
			else
			{
				return (Var0[iVar32 /*2*/])->f_1;
				Jump @204; //curOff = 188
				if (&Var0[iVar32 /*2*/] == 0)
				{
				}
				else
				{
					iVar32++;
				}
				if (!bParam3)
				{
				}
				return 0;
			}
		}
	}

int func_171(bool bParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return 0;
	}
	if (!func_82(bParam0, 0))
	{
		return 0;
	}
	*iParam3 = ITEMDATABASE::_0xDEE7B3C76ED664BE(bParam0, bParam1);
	if (*iParam3 == 0)
	{
		if (!bParam5)
		{
		}
		return 0;
	}
	if (!bParam5)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!ITEMDATABASE::_0xAD73B614DF26CF8A(bParam0, bParam1, iVar0, (*uParam2)[iVar0 /*2*/]))
		{
			Jump @113; //curOff = 101
		}
		else if (!bParam5)
		{
		}
		iVar0++;
	}
	if (bParam4)
	{
		func_194(bParam0, bParam1, uParam2, *iParam3);
	}
	return 1;
}

int func_172(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_82(bParam0, 0))
	{
		return 0;
	}
	iVar1 = func_168(bParam0);
	if (iVar1 == joaat("AMMO") || (bParam1 && iVar1 == joaat("WEAPON")))
	{
		bVar2 = func_195(bParam0, 1);
		if (bVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, bVar2);
		}
	}
	else if (iVar1 == joaat("WEAPON"))
	{
		return func_196(bParam0, 0);
	}
	if (func_197(bParam0, joaat("DEFAULT")) != 0)
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_81(bParam2), bParam0, bParam3);
	}
	else
	{
		Var3 = { func_198(bParam0, bParam2) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_81(bParam2), &Var3, bParam3);
	}
	return iVar0;
}

int func_173(bool bParam0)
{
	if (func_24() == -1)
	{
		return 1;
	}
	return INVENTORY::_0x0FBBFFC891A97C81(func_81(bParam0));
}

int func_174(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_82(bParam0, 0))
	{
		return 0;
	}
	if (bParam1 < 1)
	{
		return 0;
	}
	iVar0 = func_197(bParam0, joaat("DEFAULT"));
	if (iVar0 != 0)
	{
		return func_199(bParam0, bParam1, iParam2, iParam3, bParam4);
	}
	Var1 = { func_200(bParam0, bParam4, 0) };
	Var6 = { func_201(bParam0, Var1, Var1.f_4, bParam4) };
	return func_202(bParam0, &Var6, &Var1, bParam1, iParam2, iParam3, bParam4);
}

int func_175(bool bParam0)
{
	switch (bParam0)
	{
		case -1103707655:
		case 205718222:
		case 866168015:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_176(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_203(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_204(NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 16), iVar0, uParam1);
		}
	}
	else
	{
		return func_205(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

void func_177(int iParam0, struct<16> Param1)
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

bool func_178(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	return MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iParam0, 0);
}

int func_179()
{
	if (func_24() == 0)
	{
		return MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

bool func_180(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam1 && !func_117(iParam0))
	{
		return false;
	}
	iVar0 = func_156(iParam0);
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

int func_181(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 0;
		case 3:
			return 3;
		default:
			break;
	}
	return -1;
	return -1;
}

int func_182(int iParam0)
{
	return func_181(iParam0);
}

float func_183()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_184(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_185(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_186(int iParam0)
{
	return func_158(iParam0, 2);
}

int func_187(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 > (4 - 1))
	{
		*bParam2 = 0;
		return 0;
	}
	if (((*uParam0)[iVar0 /*7*/])->f_1 < 0)
	{
		*bParam2 = 0;
		return 0;
	}
	*bParam2 = &((*uParam0)[iVar0 /*7*/])->f_2[((*uParam0)[iVar0 /*7*/])->f_1];
	return 1;
}

bool func_188(bool bParam0)
{
	int iVar0;

	if (!func_82(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_206(bParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return bParam0;
}

char* func_189(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

bool func_190(bool bParam0, bool bParam1)
{
	if (!func_82(bParam0, 0))
	{
		return false;
	}
	if (func_191(bParam0))
	{
		return func_207(func_192(bParam0, 0), bParam1, 0);
	}
	return ITEMDATABASE::_0xDEE7B3C76ED664BE(bParam0, bParam1) > 0;
}

int func_191(bool bParam0)
{
	if (func_36(bParam0, 75135761))
	{
		return 1;
	}
	return 0;
}

int func_192(bool bParam0, bool bParam1)
{
	struct<6> Var0;

	if (!func_82(bParam0, 0))
	{
		return func_208(func_83(bParam0), bParam1);
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0) || Var0.f_5 == 0)
	{
		return 0;
	}
	if (bParam1 && NETWORK::_0xFBE782B3165AC8EC(Var0.f_5))
	{
		return 0;
	}
	return Var0.f_5;
}

int func_193(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_209(bParam0, bParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam2)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if ((&Var0[iVar32 /*2*/] == joaat("CURRENCY_CASH") || &Var0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR")) || &Var0[iVar32 /*2*/] == joaat("CHARACTER_ROLE_TOKEN"))
		{
			return (Var0[iVar32 /*2*/])->f_1;
		}
		else if (&Var0[iVar32 /*2*/] == 0)
		{
		}
		else
		{
			iVar32++;
		}
	}
	if (!bParam2)
	{
	}
	return 0;
}

void func_194(bool bParam0, bool bParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	struct<2> Var7;
	struct<2> Var19;
	float fVar21[15];

	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_GET_ITEM_PRICE_MODIFIERS(bParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		fVar21[iVar0] = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = &Var7.f_1[iVar1];
		iVar4 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIED_PRICES(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_MODIFIED_PRICE(uVar6, iVar2) != bParam1)
			{
			}
			else
			{
				iVar5 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIERS(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_MODIFIER(uVar6, iVar3, &Var19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if (uParam2[iVar0 /*2*/] == Var19)
							{
								fVar21[iVar0] = (&fVar21[iVar0] + (Var19.f_1 - 1f));
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			else
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (&fVar21[iVar0] != 1f)
		{
			((*uParam2)[iVar0 /*2*/])->f_1 = (BUILTIN::ROUND((IntToFloat((10000 * ((*uParam2)[iVar0 /*2*/])->f_1)) * (&fVar21[iVar0] / 1f))) / 10000);
		}
		iVar0++;
	}
}

int func_195(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_82(bParam0, 0))
	{
		return 0;
	}
	iVar0 = func_168(bParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_0x5C2EA6C44F515F34(bParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_0x1F7977C9101F807F(bParam0))
	{
		return bParam0;
	}
	if (func_36(bParam0, 1399091007))
	{
		func_210(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_196(bool bParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	Var0 = { func_31(bParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_212(&Var0, func_211(0));
	}
	if (!func_32(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_34(iVar14);
	return uVar15;
}

int func_197(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(bParam0, iParam1);
}

struct<4> func_198(bool bParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_200(bParam0, bParam1, 0) };
	return func_201(bParam0, Var0, Var0.f_4, bParam1);
}

int func_199(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	struct<6> Var1[5];
	int iVar32;
	int iVar33;
	int iVar34;
	struct<16> Var35;
	struct<16> Var51;

	if (func_213(bParam0))
	{
		return 0;
	}
	if (bParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_197(bParam0, joaat("DEFAULT"));
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_173(bParam4))
	{
		if (iVar0 == 0)
		{
			return 0;
		}
		if (!func_214(&Var1, &iVar32, bParam0, iVar0, bParam1, 1) || iVar32 < 1)
		{
			return 0;
		}
		iVar34 = -1;
		Var35.f_9 = 1;
		Var35.f_11 = -1591664384;
		iVar33 = 0;
		while (iVar33 < iVar32)
		{
			Var35 = { func_215(bParam0, Var1[iVar33 /*6*/]) };
			Var35.f_12 = iParam2;
			iVar34 = func_176(joaat("USE"), &Var35, 1);
			if (iVar34 == -1)
			{
				return 0;
			}
			iVar33++;
		}
		if (iVar34 != -1)
		{
			Var51.f_7 = -142743235;
			Var51 = iParam3;
			Var51.f_7 = iParam2;
			func_177(iVar34, Var51);
			return 1;
		}
		return 0;
	}
	if (!INVENTORY::_0xB4158C8C9A3B5DCE(func_81(bParam4), bParam0, bParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

struct<5> func_200(bool bParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_216(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_168(bParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_201(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("WARDROBE"));
			break;
		case joaat("WEAPON"):
			Var0 = { func_211(bParam1) };
			if (iParam2 && func_217(bParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_218(bParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_218(bParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_219(bParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_220(bParam1) };
			switch (func_221(bParam0))
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
			if (func_222(bParam0, -1823706425))
			{
				Var0 = { func_201(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("KIT_CAMP"));
			}
			else if (func_222(bParam0, -1483207246))
			{
				Var0 = { func_201(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_0x780C5B9AE2819807(bParam0, -1911121386))
			{
				Var0 = { func_201(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(bParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_222(bParam0, -1653629781))
			{
				Var0 = { func_201(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, 1384535894);
			}
			break;
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
				Var28.f_9 = -1591664384;
				if (!func_223(Var0, &Var28, bParam1, 0, -1))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var28.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else if (INVENTORY::_0x780C5B9AE2819807(bParam0, -718417579))
			{
				Var0.f_4 = -718417579;
			}
			else if (func_222(bParam0, -1653629781))
			{
				Var0 = { func_201(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, 1384535894);
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

struct<4> func_201(bool bParam0, var uParam1, int iParam2, bool bParam3, var uParam4, bool bParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_82(bParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_81(bParam6), &uParam1, bParam0, bParam5, &Var0);
	return Var0;
}

int func_202(bool bParam0, int iParam1, var uParam2, bool bParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;
	struct<13> Var15;
	struct<16> Var31;

	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam1))
	{
		return 0;
	}
	if (func_213(bParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_223(*iParam1, &Var0, bParam6, 0, -1))
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
	if (!func_173(bParam6))
	{
		iVar14 = -1;
		if (func_24() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = bParam0;
			Var15 = { *iParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = bParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_176(joaat("USE"), &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31 = iParam5;
				Var31.f_7 = iParam4;
				func_177(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_81(bParam6), iParam1, bParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_203(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = NETSHOPPING::_0x6C9F12700BCE69F4(iParam0, uParam1);
	if (iParam0 == joaat("USE"))
	{
		if (func_149(iVar0, 2048))
		{
			return 0;
		}
	}
	else if (func_149(iVar0, 8))
	{
		return 0;
	}
	else if (func_149(iVar0, 16))
	{
		return 0;
	}
	else if (func_149(iVar0, 65536))
	{
		return 0;
	}
	return 1;
}

int func_204(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_224(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_224(iParam1, 2, 0, 0);
	return -1;
}

int func_205(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_224(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

int func_206(bool bParam0)
{
	switch (bParam0)
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

int func_207(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_225(bParam0))
	{
		return 0;
	}
	if (ITEMDATABASE::_0xF540239F9937033B(bParam0, bParam1) == 0)
	{
		return 0;
	}
	if (bParam2)
	{
		return !func_226(bParam0, bParam1);
	}
	return 1;
}

bool func_208(bool bParam0, bool bParam1)
{
	bool bVar0;

	if (!func_150(bParam0, 2))
	{
		return false;
	}
	bVar0 = false;
	if ((bVar0 != 0 && bParam1) && NETWORK::_0xFBE782B3165AC8EC(bVar0))
	{
		return false;
	}
	return bVar0;
}

int func_209(bool bParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return 0;
	}
	if (!func_225(bParam0))
	{
		return 0;
	}
	*iParam3 = ITEMDATABASE::_0xF540239F9937033B(bParam0, bParam1);
	if (*iParam3 == 0)
	{
		if (!bParam4)
		{
		}
		return 0;
	}
	if (!bParam4)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!ITEMDATABASE::_0xF27F01BBF5ACD3F3(bParam0, bParam1, iVar0, (*uParam2)[iVar0 /*2*/]))
		{
			Jump @112; //curOff = 100
		}
		else if (!bParam4)
		{
		}
		iVar0++;
	}
	if (bParam5)
	{
		func_227(bParam0, bParam1, uParam2, *iParam3);
	}
	return 1;
}

void func_210(bool bParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	switch (bParam0)
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

struct<4> func_211(bool bParam0)
{
	int iVar0;

	iVar0 = func_81(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_4)))
		{
			Global_1272170->f_4 = { func_201(923904168, func_216(bParam0), -740156546, bParam0) };
		}
		return Global_1272170->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_16)))
		{
			Global_1272170->f_16 = { func_201(923904168, func_216(bParam0), -740156546, 0) };
		}
		return Global_1272170->f_16;
	}
	return func_201(923904168, func_216(bParam0), -740156546, 0);
}

void func_212(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_213(bool bParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(bParam0))
	{
		return 1;
	}
	return 0;
}

int func_214(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	var uVar0;

	*iParam1 = 0;
	if (bParam4 < 1)
	{
		return 0;
	}
	if (iParam3 == 0)
	{
		iParam3 = func_197(bParam2, joaat("DEFAULT"));
		if (iParam3 == 0)
		{
			return 0;
		}
	}
	uVar0 = 5;
	if (!NETSHOPPING::_0xD1555FBC96C88444(bParam2, iParam3, bParam4, &uVar0, 5))
	{
		return 0;
	}
	if (!func_228(uParam0, iParam1, &uVar0, bParam4, bParam5))
	{
		return 0;
	}
	return 1;
}

struct<16> func_215(bool bParam0, var uParam1)
{
	struct<16> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { func_201(bParam0, *uParam1, uParam1->f_4, 1) };
	Var0.f_4 = { *uParam1 };
	Var0.f_8 = bParam0;
	Var0.f_9 = uParam1->f_5;
	Var0.f_11 = uParam1->f_4;
	return Var0;
}

struct<4> func_216(bool bParam0)
{
	int iVar0;

	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_81(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1272170))
			{
				*Global_1272170 = { func_201(joaat("CHARACTER"), func_229(), -1591664384, bParam0) };
			}
			return *Global_1272170;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_12)))
			{
				Global_1272170->f_12 = { func_201(joaat("CHARACTER"), func_229(), -1591664384, 0) };
			}
			return Global_1272170->f_12;
		}
	}
	return func_201(joaat("CHARACTER"), func_229(), -1591664384, bParam0);
}

int func_217(bool bParam0, bool bParam1)
{
	if (func_221(bParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_0xD955FEE4B87AFA07(bParam0))
	{
		if (bParam1)
		{
			return func_230();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_218(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_231(bParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

int func_219(bool bParam0, int iParam1, int iParam2)
{
	var uVar0;

	if (func_232(bParam0, &uVar0, iParam1, iParam2))
	{
		return iParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_220(bool bParam0)
{
	int iVar0;

	iVar0 = func_81(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_8)))
		{
			Global_1272170->f_8 = { func_201(271701509, func_216(bParam0), 12999093, 0) };
		}
		return Global_1272170->f_8;
	}
	return func_201(271701509, func_216(bParam0), 12999093, 0);
}

int func_221(bool bParam0)
{
	struct<2> Var0;

	if (!func_82(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_222(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_221(bParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &bVar0))
		{
			if (func_233(bParam0, iParam1, bVar0))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

bool func_223(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_234(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

void func_224(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_235(iParam0, iParam1, iParam2, iParam3);
}

bool func_225(bool bParam0)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_BUY_AWARD_KEY_VALID(bParam0);
}

int func_226(bool bParam0, bool bParam1)
{
	struct<47> Var0;
	int iVar471;
	int iVar472;
	int iVar473;
	int iVar474;
	int iVar475;

	Var0 = 10;
	Var0.f_1.f_4 = 15;
	Var0.f_1.f_36 = 10;
	Var0.f_1.f_47.f_4 = 15;
	Var0.f_1.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_BUY_AWARD_ACQUIRE_COSTS(bParam0, &Var0, &iVar471, 10) || iVar471 == 0)
	{
		return 0;
	}
	iVar473 = 0;
	iVar474 = 0;
	while (iVar474 < iVar471)
	{
		if (&Var0[iVar474 /*47*/] == bParam1)
		{
			iVar473 = (Var0[iVar474 /*47*/])->f_35;
			iVar475 = 0;
			while (iVar475 < iVar473)
			{
				iVar472 = &(Var0[iVar474 /*47*/])->f_36[iVar475];
				if (iVar472 == 0)
				{
				}
				else if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar472))
				{
					return 1;
				}
				iVar475++;
			}
		}
		iVar474++;
	}
	return 0;
}

void func_227(bool bParam0, bool bParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	struct<2> Var7;
	struct<2> Var19;
	float fVar21[15];

	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!ITEMDATABASE::_0xE81D0378A384E755(bParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		fVar21[iVar0] = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = &Var7.f_1[iVar1];
		iVar4 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIED_PRICES(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_MODIFIED_PRICE(uVar6, iVar2) != bParam1)
			{
			}
			else
			{
				iVar5 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIERS(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_MODIFIER(uVar6, iVar3, &Var19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if (uParam2[iVar0 /*2*/] == Var19)
							{
								fVar21[iVar0] = (&fVar21[iVar0] + (Var19.f_1 - 1f));
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			else
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (&fVar21[iVar0] != 1f)
		{
			((*uParam2)[iVar0 /*2*/])->f_1 = (BUILTIN::ROUND((IntToFloat((10000 * ((*uParam2)[iVar0 /*2*/])->f_1)) * (&fVar21[iVar0] / 1f))) / 10000);
		}
		iVar0++;
	}
}

int func_228(var uParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
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
		if (bParam3 < 1)
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
			if (((*uParam2)[iVar0 /*6*/])->f_5 > bParam3)
			{
				((*uParam0)[*iParam1 /*6*/])->f_5 = bParam3;
				bParam3 = false;
			}
			else
			{
				((*uParam0)[*iParam1 /*6*/])->f_5 = ((*uParam2)[iVar0 /*6*/])->f_5;
				bParam3 = (bParam3 - ((*uParam0)[*iParam1 /*6*/])->f_5);
			}
			*iParam1++;
		}
		iVar0++;
	}
	if (bParam4 && bParam3 > 0)
	{
		*iParam1 = 0;
		return 0;
	}
	return 1;
}

struct<4> func_229()
{
	struct<4> Var0;

	return Var0;
}

bool func_230()
{
	return (func_236(joaat("UPGRADE_OFFHAND_HOLSTER"), 0, 0, 0) > 0 && func_237(func_201(joaat("WARDROBE"), func_216(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_231(bool bParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_82(bParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_197(bParam0, joaat("DEFAULT")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_201(bParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_81(bParam6), &Var1, bParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_81(bParam6), bParam0, bParam8);
	}
	return iVar0;
}

int func_232(bool bParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_81(0);
	*iParam1 = { func_201(bParam0, func_211(0), iParam3, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam1))
	{
		return 0;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, iParam1, iParam2, 22, 1))
	{
		return 0;
	}
	return 1;
}

int func_233(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam2 == 487172188)
	{
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(iParam1, joaat("DEFAULT")) == -1925887917)
		{
			return 0;
		}
	}
	return ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(bParam0, iParam1, bParam2);
}

int func_234(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_81(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, iParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

void func_235(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_236(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_238(bParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, bParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_81(bParam1), bParam0, bParam3);
}

int func_237(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, int iParam6)
{
	return func_239(&uParam0, bParam4, bParam5, iParam6);
}

bool func_238(bool bParam0)
{
	return WEAPON::_0x1F7977C9101F807F(bParam0);
}

int func_239(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_240(iParam0, bParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_240(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_81(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, iParam0, bParam1, &uVar0))
	{
		return 0;
	}
	if (!func_234(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return 0;
	}
	return 1;
}

