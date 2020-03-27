#region Local Var
	var uLocal_0[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	float fLocal_31 = 0f;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	bool bVar6;
	bool bVar7;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		if (iLocal_13 >= 3)
		{
			func_1(iLocal_13 >= 4);
		}
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	bVar0 = false;
	while (!bVar0)
	{
		BUILTIN::WAIT(0);
		switch (iLocal_13)
		{
			case 0:
				iLocal_14 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(613.343f, 2192.701f, 223.576f, 0f, 0f, 11f, 29f, 46f, 9f, "BirdsTrigger");
				PED::_0xED9582B3DA8F02B4(12);
				STREAMING::REQUEST_MODEL(func_2(), false);
				iLocal_13 = 1;
				break;
			case 1:
				if (STREAMING::HAS_MODEL_LOADED(func_2()))
				{
					iLocal_13 = 2;
				}
				break;
			case 2:
				if (PED::_0x5C16855277819BBF() >= 12)
				{
					if (func_3())
					{
						iLocal_13 = 3;
					}
				}
				break;
			case 3:
				if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_14, true, 0) || MISC::IS_BULLET_IN_AREA(618.4946f, 2197.932f, 222.0223f, 13f, true))
				{
					iLocal_13 = 4;
					iLocal_15 = MISC::GET_GAME_TIMER();
				}
				break;
			case 4:
				iVar1 = 0;
				while (iVar1 < 12)
				{
					if (!PED::IS_PED_INJURED(&(uLocal_0[iVar1])))
					{
						if ((TASK::GET_SCRIPT_TASK_STATUS(&(uLocal_0[iVar1]), -708058584, 1) == 8 || iLocal_18[iVar1]) /* PointerArith */)
						{
							iVar2 = 0;
							switch (iVar2)
							{
								case 0:
									iVar2 = 0;
									break;
								case 1:
									iVar2 = 50;
									break;
								case 2:
									iVar2 = 160;
									break;
								case 3:
									iVar2 = 400;
									break;
								case 4:
									iVar2 = 310;
									break;
								case 5:
									iVar2 = 120;
									break;
								case 6:
									iVar2 = 200;
									break;
								case 7:
									iVar2 = 280;
									break;
								case 8:
									iVar2 = 390;
									break;
								case 9:
									iVar2 = 70;
									break;
								case 10:
									iVar2 = 220;
									break;
								case 11:
									iVar2 = 150;
									break;
							}
							if (MISC::GET_GAME_TIMER() >= (iVar2 + iLocal_15))
							{
								TASK::TASK_FLY_TO_COORD(&(uLocal_0[iVar1]), 3f, func_4(iLocal_16), 0, 1);
								iLocal_18[iVar1] = 0;
							}
						}
					}
					iVar1++;
				}
				if (!PED::IS_PED_INJURED(&(uLocal_0[0])))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(&(uLocal_0[0]), func_4(iLocal_16), 20f, 20f, 20f, false, false, 0))
					{
						iLocal_13 = 5;
					}
				}
				break;
			case 5:
				iVar1 = 0;
				while (iVar1 < 12)
				{
					if (!PED::IS_PED_INJURED(&(uLocal_0[iVar1])))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(&(uLocal_0[iVar1]), 475934052, 1) != 8)
						{
						}
						else
						{
							TASK::TASK_FLYING_CIRCLE(&(uLocal_0[iVar1]), 2f, func_4(iLocal_16), 2f, 10f);
						}
					}
					iVar1++;
				}
				if (!PED::IS_PED_INJURED(&(uLocal_0[0])))
				{
					vVar3 = { func_5(iLocal_16) };
					if (ENTITY::IS_ENTITY_AT_COORD(Global_35, func_4(iLocal_16), vVar3, false, false, 0))
					{
						if (iLocal_16 < 11)
						{
							iVar1 = 0;
							while (iVar1 < 12)
							{
								iLocal_18[iVar1] = 1;
								iVar1++;
							}
							iLocal_16 = (1 + iLocal_16);
							iLocal_13 = 4;
						}
						else
						{
							func_6();
							SCRIPTS::TERMINATE_THIS_THREAD();
						}
					}
				}
				break;
		}
		if (!func_7(12, 8388608))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 1708.799f, 2160.965f, 318.8729f, false) < 160f)
			{
				(Global_40.f_11623[12 /*8*/])->f_2 = -15;
				func_8(12, 8388608, 1);
			}
		}
		if (iLocal_13 >= 3)
		{
			bVar6 = false;
			bVar7 = false;
			if (PED::IS_PED_INJURED(&(uLocal_0[iLocal_17])))
			{
				bVar7 = true;
			}
			else if (ENTITY::IS_ENTITY_AT_ENTITY(Global_35, &(uLocal_0[iLocal_17]), 250f, 250f, 250f, false, false, 0))
			{
				bVar6 = true;
			}
			iLocal_17++;
			if (iLocal_17 >= 12)
			{
				iLocal_17 = 0;
			}
			if (!bVar6)
			{
				fLocal_31 = ((1f * BUILTIN::TIMESTEP()) + fLocal_31);
			}
			else
			{
				fLocal_31 = 0f;
			}
			if (bVar7 || fLocal_31 >= 5f)
			{
				if (fLocal_31 >= 5f)
				{
				}
				func_6();
				func_1((bVar7 || iLocal_13 >= 4));
				func_9(&(((*Global_1396257)[12 /*638*/])->f_626), 16384, 0);
				SCRIPTS::TERMINATE_THIS_THREAD();
			}
		}
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(bool bParam0)
{
	if (bParam0)
	{
		(Global_40.f_11623[12 /*8*/])->f_2 = func_10();
	}
	func_9(&(((*Global_1396257)[12 /*638*/])->f_626), 8192, 1);
}

int func_2()
{
	return joaat("a_c_Pheasant_01");
}

int func_3()
{
	int iVar0;
	vector3 vVar1;
	float fVar4;

	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(&(uLocal_0[iVar0])))
		{
			switch (iVar0)
			{
				case 0:
					vVar1 = { 622.3134f, 2200.764f, 221.5856f };
					fVar4 = -160f;
					break;
				case 1:
					vVar1 = { 621.2441f, 2199.146f, 221.7287f };
					fVar4 = -120f;
					break;
				case 2:
					vVar1 = { 619.4209f, 2194.512f, 221.7715f };
					fVar4 = -99f;
					break;
				case 3:
					vVar1 = { 619.327f, 2192.713f, 221.5658f };
					fVar4 = -155f;
					break;
				case 4:
					vVar1 = { 623.7524f, 2199.419f, 221.4249f };
					fVar4 = 142f;
					break;
				case 5:
					vVar1 = { 621.4307f, 2195.696f, 221.644f };
					fVar4 = -11f;
					break;
				case 6:
					vVar1 = { 623.0302f, 2189.17f, 220.8486f };
					fVar4 = -33f;
					break;
				case 7:
					vVar1 = { 618.2859f, 2196.883f, 222.0049f };
					fVar4 = 40f;
					break;
				case 8:
					vVar1 = { 617.9752f, 2193.77f, 221.7816f };
					fVar4 = -175f;
					break;
				case 9:
					vVar1 = { 620.5045f, 2199.149f, 221.8133f };
					fVar4 = -42f;
					break;
				case 10:
					vVar1 = { 632.3511f, 2197.817f, 220.63f };
					fVar4 = 20f;
					break;
				case 11:
					vVar1 = { 626.5476f, 2191.122f, 220.7776f };
					fVar4 = 68f;
					break;
			}
			uLocal_0[iVar0] = func_11(func_2(), vVar1, fVar4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(uLocal_0[iVar0]), true);
			PED::SET_PED_KEEP_TASK(&(uLocal_0[iVar0]), true);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(&(uLocal_0[iVar0]), true);
			return 0;
		}
		iVar0++;
	}
	return 1;
}

Vector3 func_4(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 637f, 2120f, 236f;
		case 1:
			return 673f, 2034f, 245f;
		case 2:
			return 666f, 1935f, 241f;
		case 3:
			return 750f, 1924f, 260f;
		case 4:
			return 830f, 1851f, 270f;
		case 5:
			return 920f, 1862f, 298f;
		case 6:
			return 1003f, 1870f, 355f;
		case 7:
			return 1197f, 1896f, 349f;
		case 8:
			return 1358f, 2035f, 326f;
		case 9:
			return 1569f, 2129f, 334f;
		case 10:
			return 1723.816f, 2167.888f, 349.4869f;
	}
	return 0f, 0f, 0f;
}

Vector3 func_5(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 40f, 40f, 40f;
		case 1:
			return 45f, 45f, 45f;
		case 5:
			return 55f, 55f, 55f;
		case 6:
			return 65f, 65f, 65f;
		case 7:
			return 55f, 55f, 55f;
	}
	return 45f, 45f, 45f;
}

void func_6()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (!PED::IS_PED_INJURED(&(uLocal_0[iVar0])))
		{
			TASK::TASK_FLY_AWAY(&(uLocal_0[iVar0]), Global_35);
		}
		iVar0++;
	}
}

bool func_7(int iParam0, int iParam1)
{
	return func_12((Global_40.f_11623[iParam0 /*8*/])->f_1, iParam1);
}

void func_8(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_13(&((Global_40.f_11623[iParam0 /*8*/])->f_1), iParam1);
	}
	else
	{
		func_14(&((Global_40.f_11623[iParam0 /*8*/])->f_1), iParam1);
	}
}

void func_9(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_13(uParam0, iParam1);
	}
	else
	{
		func_14(uParam0, iParam1);
	}
}

var func_10()
{
	return &Global_1899515;
}

bool func_11(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	bool bVar0;

	bVar0 = PED::CREATE_PED(bParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		return false;
	}
	func_15(bVar0, bParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return bVar0;
}

bool func_12(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_13(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_14(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_15(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_16(bParam1))
		{
			func_17(bParam0, 41788943);
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
			func_18(bParam0, 0, 1);
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
			func_19(bParam0, 0);
			bVar0 = true;
		}
		func_20(bParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_0xCC8CA3E88256E58F(bParam0, false, true, true, true, false);
	}
}

int func_16(bool bParam0)
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

void func_17(bool bParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (func_21(bParam0, iParam1))
		{
			if (func_22(bParam0, iParam1))
			{
				if (func_23(bParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(bParam0, "metaped_outfit_request"), bParam0, true, false);
					func_24(bParam0);
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

void func_18(bool bParam0, int iParam1, bool bParam2)
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

void func_19(bool bParam0, bool bParam1)
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

void func_20(bool bParam0, int iParam1)
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

bool func_21(bool bParam0, int iParam1)
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

int func_22(bool bParam0, int iParam1)
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

bool func_23(bool bParam0, int iParam1)
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
	if (!func_21(bParam0, iVar0))
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

void func_24(bool bParam0)
{
	DECORATOR::DECOR_REMOVE(bParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(bParam0, "metaped_outfit_request_name");
}

