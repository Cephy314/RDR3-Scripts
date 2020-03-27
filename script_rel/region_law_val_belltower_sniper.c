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
	var uLocal_15 = 3;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
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
	int iLocal_41 = 0;
	bool bLocal_42 = false;
	bool bLocal_43 = false;
	bool bLocal_44 = false;
	vector3 vLocal_45 = { 0f, 0f, 0f };
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	int iScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	bLocal_44 = joaat("S_M_M_AmbientLawRural_01");
	vLocal_45 = { -230.9494f, 797.3469f, 134.418f };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_1();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	func_2();
	while (func_3(iScriptParam_0) && func_4())
	{
		func_5();
		BUILTIN::WAIT(0);
	}
	func_1();
}

void func_1()
{
	if (func_6(bLocal_42, 0))
	{
		func_7(&bLocal_42);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(bLocal_43))
	{
		VOLUME::_DELETE_VOLUME(bLocal_43);
	}
	LAW::_0x7EF2A2FE38D74456(func_8(7), 0);
}

void func_2()
{
	bLocal_43 = VOLUME::_CREATE_VOLUME_BOX(-230.0599f, 797.554f, 134.0912f, 0f, 0f, 29.97786f, 3.336159f, 3.371833f, 4.034389f);
	iLocal_41 = 1;
	PED::_0xED9582B3DA8F02B4(1);
}

int func_3(int iParam0)
{
	if (func_9() != -1)
	{
		return 0;
	}
	if (!func_10(iParam0, 8))
	{
		return 0;
	}
	if (!func_12(Global_35, func_11(iParam0), 1, 0))
	{
		return 0;
	}
	if (!func_13(PLAYER::PLAYER_ID(), 0, 0, 1))
	{
		return 0;
	}
	return 1;
}

int func_4()
{
	float fVar0;

	if (iLocal_41 >= 7)
	{
		return 0;
	}
	fVar0 = func_14(Global_35, vLocal_45, 1);
	if (fVar0 > 100f)
	{
		return 0;
	}
	if (func_15(&uLocal_48) > 120f)
	{
		return 0;
	}
	return 1;
}

void func_5()
{
	switch (iLocal_41)
	{
		case 1:
			iLocal_41 = 2;
			break;
		case 2:
			STREAMING::REQUEST_MODEL(bLocal_44, false);
			if (STREAMING::HAS_MODEL_LOADED(bLocal_44) && PED::_0x5E420FF293EE5472())
			{
				iLocal_41 = 4;
			}
			break;
		case 4:
			func_16();
			func_17(&uLocal_48);
			iLocal_41 = 5;
			break;
		case 5:
			func_18(bLocal_42, joaat("INPUT_FOCUS_CAM"));
			if (!func_6(bLocal_42, 0))
			{
				iLocal_41 = 6;
			}
			break;
		case 6:
			iLocal_41 = 7;
			break;
	}
}

int func_6(bool bParam0, int iParam1)
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
	if (func_19(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(bParam0))
		{
			return 0;
		}
	}
	if (func_19(iVar0, 2))
	{
		if (PED::_0x3AA24CCC0D451379(bParam0))
		{
			return 0;
		}
	}
	if (func_19(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(bParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_19(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(bParam0) && !PED::IS_PED_IN_ANY_VEHICLE(bParam0, false))
		{
			return 0;
		}
	}
	if (func_19(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(bParam0))
		{
			return 0;
		}
	}
	if (func_19(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(bParam0))
		{
			return 0;
		}
	}
	if (func_19(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(bParam0))
		{
			return 0;
		}
	}
	if (func_19(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(bParam0))
		{
			return 0;
		}
	}
	return 1;
}

void func_7(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*bParam0))
	{
		return;
	}
	if (ENTITY::_0xA7E51B53309EAC97(*bParam0))
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
	if (!ENTITY::IS_ENTITY_DEAD(*bParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*bParam0, false);
	}
	PED::DELETE_PED(bParam0);
}

int func_8(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 1:
			iVar0 = 1;
			break;
		case 6:
			iVar0 = 64;
			break;
		case 2:
			iVar0 = 32;
			break;
		case 7:
			iVar0 = 16;
			break;
		case 8:
			iVar0 = 8;
			break;
	}
	return iVar0;
}

int func_9()
{
	return Global_1572887->f_12;
}

bool func_10(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23117[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0 /*11*/] && iParam1) != 0;
}

int func_11(int iParam0)
{
	if (!func_20(iParam0))
	{
		return 0;
	}
	return ((*Global_1888801)[iParam0 /*35*/])->f_3;
}

bool func_12(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam1))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iParam1, bParam2, iParam3);
}

int func_13(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_21(bParam1, bParam2, bParam3);
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

float func_14(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

float func_15(var uParam0)
{
	if (!func_22(uParam0))
	{
		return 0f;
	}
	if (func_23(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_24() - uParam0->f_1);
}

void func_16()
{
	int iVar0;

	bLocal_42 = func_25(bLocal_44, vLocal_45, 101.6932f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
	WEAPON::_GIVE_WEAPON_TO_PED_2(bLocal_42, joaat("WEAPON_SNIPERRIFLE_CARCANO"), 999, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
	PED::_0xFC3DB99C8144CD81(bLocal_42, bLocal_43, 0, false, 0);
	PED::SET_PED_CONFIG_FLAG(bLocal_42, 263, true);
	PED::SET_PED_CAN_RAGDOLL(bLocal_42, false);
	iVar0 = 160;
	ENTITY::SET_ENTITY_MAX_HEALTH(bLocal_42, iVar0);
	ENTITY::_SET_ENTITY_HEALTH(bLocal_42, iVar0, 0);
	func_26(bLocal_42);
}

void func_17(var uParam0)
{
	func_27(uParam0, 0f);
}

void func_18(bool bParam0, int iParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		CAM::STOP_GAMEPLAY_HINT(false);
		return;
	}
	else
	{
		if (PAD::IS_CONTROL_PRESSED(2, iParam1))
		{
			CAM::SET_GAMEPLAY_ENTITY_HINT(bParam0, 0f, 0f, 0f, true, -1, 2000, 2000, 0);
		}
		if (PAD::IS_CONTROL_JUST_RELEASED(2, iParam1))
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
	}
}

bool func_19(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_20(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_21(bool bParam0, bool bParam1, bool bParam2)
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

bool func_22(var uParam0)
{
	return func_28(*uParam0, 1);
}

bool func_23(var uParam0)
{
	return func_28(*uParam0, 2);
}

float func_24()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_25(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
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

void func_26(bool bParam0)
{
	if (!func_6(bParam0, 0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(bParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bParam0, true, false);
	}
	func_30(bParam0);
}

void func_27(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_24() - fParam1);
	func_31(uParam0, 1);
	func_32(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_28(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
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
		if (func_33(bParam1))
		{
			func_34(bParam0, 41788943);
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
			func_35(bParam0, 0, 1);
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
			func_36(bParam0, 0);
			bVar0 = true;
		}
		func_37(bParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_0xCC8CA3E88256E58F(bParam0, false, true, true, true, false);
	}
}

void func_30(bool bParam0)
{
	LAW::_0x819ADD5EF1742F47(bParam0, 2);
	LAW::_0x819ADD5EF1742F47(bParam0, 1);
	PED::SET_PED_CONFIG_FLAG(bParam0, 188, true);
	PED::_0xBD75500141E4725C(bParam0, joaat("LAW"));
	PED::SET_PED_COMBAT_ATTRIBUTES(bParam0, 39, true);
	TASK::_0x9DE63896B176EA94(bParam0, false);
	WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(bParam0, false);
	WEAPON::_GIVE_WEAPON_TO_PED_2(bParam0, joaat("GROUP_REVOLVER"), 100, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
	WEAPON::_GIVE_WEAPON_TO_PED_2(bParam0, joaat("GROUP_SNIPER"), 100, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
}

void func_31(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_32(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_33(bool bParam0)
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

void func_34(bool bParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (func_38(bParam0, iParam1))
		{
			if (func_39(bParam0, iParam1))
			{
				if (func_40(bParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(bParam0, "metaped_outfit_request"), bParam0, true, false);
					func_41(bParam0);
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

void func_35(bool bParam0, int iParam1, bool bParam2)
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

void func_36(bool bParam0, bool bParam1)
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

void func_37(bool bParam0, int iParam1)
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

bool func_38(bool bParam0, int iParam1)
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

int func_39(bool bParam0, int iParam1)
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

bool func_40(bool bParam0, int iParam1)
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
	if (!func_38(bParam0, iVar0))
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

void func_41(bool bParam0)
{
	DECORATOR::DECOR_REMOVE(bParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(bParam0, "metaped_outfit_request_name");
}

