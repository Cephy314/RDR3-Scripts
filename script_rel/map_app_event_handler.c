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
	int iScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	struct<4> Var0;
	struct<4> Var4;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	Var4.f_13 = -1;
	Var4.f_24 = -1;
	Var4.f_25 = -1;
	Var4.f_26 = -1;
	Var4.f_27 = -1;
	Var4.f_28 = 1;
	func_1(&Var4);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4))
	{
		func_2(&Var4);
	}
	while (true)
	{
		while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iScriptParam_0))
		{
			if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(iScriptParam_0, &Var0))
			{
				func_3(&Var0, &Var4);
				switch (Var0.f_2)
				{
					case joaat("zone"):
						Var4.f_4 = { Var0 };
						Var4 = { Var0 };
						switch (Var0)
						{
							case -1740156697:
								func_4(&Var4);
								break;
							case -632467210:
								Var4.f_24 = -1;
								Var4.f_25 = -1;
								func_5(&Var4);
								break;
						}
						Var4.f_28 = 1;
						break;
					case joaat("Blip"):
						Var4 = { Var0 };
						switch (Var0)
						{
							case -1740156697:
								func_6(&Var4);
								break;
							case -632467210:
								func_7(&Var4);
								Var4 = { Var4.f_4 };
								func_4(&Var4);
								break;
							case -1203660660:
								func_8(&Var4);
								break;
						}
						break;
				}
				UIEVENTS::_EVENT_MANAGER_POP_EVENT(iScriptParam_0);
			}
		}
		func_9(&Var4);
		func_10(&Var4);
		BUILTIN::WAIT(0);
	}
	func_2(&Var4);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0)
{
	struct<30> Var0;

	Var0.f_13 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = 1;
	*uParam0 = { Var0 };
	uParam0->f_14 = -1;
	uParam0->f_8 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST_FROM_PATH("", "MapFocus");
	uParam0->f_10 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_8, "Region", "");
	uParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_8, "ItemHovered", false);
	uParam0->f_12 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_8, "HoveredName", "");
	HUD::_TEXT_DATABASE_REQUEST("FMMC");
	if (TXD::_DOES_STREAMED_TXD_EXIST(-1859668514))
	{
		TXD::_REQUEST_STREAMED_TXD(-1859668514, false);
	}
	uParam0->f_28 = 1;
}

void func_2(var uParam0)
{
	func_11(uParam0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_3(int iParam0, var uParam1)
{
	switch (iParam0->f_2)
	{
		case joaat("district"):
			switch (*iParam0)
			{
				case -1740156697:
					uParam1->f_24 = func_13(func_12(iParam0));
					uParam1->f_28 = 1;
					break;
			}
			break;
		case -2006263512:
			switch (*iParam0)
			{
				case -1740156697:
					uParam1->f_26 = func_12(iParam0);
					uParam1->f_28 = 1;
					break;
			}
			break;
		case -1666016325:
			switch (*iParam0)
			{
				case -1740156697:
					uParam1->f_27 = func_12(iParam0);
					uParam1->f_28 = 1;
					break;
			}
			break;
		case joaat("town"):
			switch (*iParam0)
			{
				case -1740156697:
					uParam1->f_25 = func_14(func_12(iParam0));
					uParam1->f_28 = 1;
					break;
			}
			break;
	}
}

int func_4(var uParam0)
{
	uParam0->f_13 = uParam0->f_1;
	switch (func_15(uParam0))
	{
		case 2:
			uParam0->f_16 = func_16(uParam0->f_13);
			break;
		case 0:
			uParam0->f_16 = func_17(uParam0->f_14);
			break;
		case 1:
			uParam0->f_16 = func_18(uParam0->f_15);
			break;
		default:
			func_19(uParam0);
			return 0;
	}
	func_19(uParam0);
	return 1;
}

void func_5(var uParam0)
{
	func_19(uParam0);
}

int func_6(var uParam0)
{
	uParam0->f_19 = uParam0->f_1;
	if (!func_20(uParam0->f_19, &(uParam0->f_17)))
	{
		uParam0->f_19 = 0;
		return 0;
	}
	switch (uParam0->f_17)
	{
		case 63:
			if (func_21(uParam0->f_19, &(uParam0->f_22)))
			{
				uParam0->f_20 = MISSIONDATA::_0x57E798B57C45EE16(MISC::GET_HASH_KEY(&(((*Global_1835011)[uParam0->f_22 /*74*/])->f_8)));
			}
			else
			{
				uParam0->f_20 = -1640799778;
			}
			break;
		case 64:
			if (func_22(uParam0->f_19, &(uParam0->f_23)))
			{
				uParam0->f_20 = MISSIONDATA::_0x57E798B57C45EE16(MISC::GET_HASH_KEY(&(((*Global_1347702)[uParam0->f_23 /*49*/])->f_3)));
			}
			else
			{
				uParam0->f_20 = -1;
			}
			break;
		case 62:
			switch (func_15(uParam0))
			{
				case 0:
					uParam0->f_16 = func_17(uParam0->f_14);
					uParam0->f_20 = func_23(uParam0->f_13);
					if (!TXD::_DOES_STREAMED_TXD_EXIST(uParam0->f_20))
					{
						uParam0->f_20 = func_24();
					}
					break;
			}
			break;
		default:
			uParam0->f_20 = func_25(uParam0->f_17, uParam0->f_19);
			break;
	}
	if (TXD::_DOES_STREAMED_TXD_EXIST(uParam0->f_20))
	{
		TXD::_REQUEST_STREAMED_TXD(uParam0->f_20, true);
		uParam0->f_21 = 1;
		return 1;
	}
	return 0;
}

void func_7(var uParam0)
{
	struct<2> Var0;

	func_26(uParam0);
	uParam0->f_17 = { Var0 };
	uParam0->f_17 = 0;
	uParam0->f_19 = 0;
	uParam0->f_22 = -1;
	uParam0->f_23 = -1;
	func_27(uParam0);
}

int func_8(var uParam0)
{
	if (uParam0->f_19 != uParam0->f_1)
	{
		return 0;
	}
	if (!func_20(uParam0->f_19, &(uParam0->f_17)))
	{
		uParam0->f_19 = 0;
		return 0;
	}
	if (TXD::_DOES_STREAMED_TXD_EXIST(uParam0->f_20))
	{
		if (!uParam0->f_21)
		{
			uParam0->f_29 = 0;
			UIAPPS::_REQUEST_UIAPP_TRANSITION_BY_HASH(joaat("map"), joaat("show_info"));
			return 1;
		}
	}
	return 0;
}

void func_9(var uParam0)
{
	if (uParam0->f_28)
	{
		func_28(uParam0);
		uParam0->f_28 = 0;
	}
}

void func_10(var uParam0)
{
	if (func_29(uParam0))
	{
		switch (uParam0->f_17)
		{
			case 63:
				func_30(uParam0->f_19, uParam0);
				break;
			case 64:
				func_31(uParam0->f_19, uParam0);
				break;
			case 62:
				func_32(uParam0->f_13, uParam0);
				break;
			case 82:
				func_33(uParam0->f_19, uParam0);
				break;
			case 83:
				func_34(uParam0->f_19, uParam0);
				break;
			case 84:
				func_35(uParam0->f_19, uParam0);
				break;
			case 85:
				func_36(uParam0->f_19, uParam0);
				break;
			case 86:
				func_37(uParam0->f_17, uParam0);
				break;
			default:
				func_37(uParam0->f_17, uParam0);
				break;
		}
	}
}

void func_11(var uParam0)
{
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_8);
}

int func_12(int iParam0)
{
	if (iParam0->f_1 != 0)
	{
		return iParam0->f_1;
	}
	return -1;
}

int func_13(int iParam0)
{
	switch (iParam0)
	{
		case joaat("bayounwa"):
			return 0;
		case joaat("bigvalley"):
			return 1;
		case 1308232528:
			return 2;
		case 1835499550:
			return 3;
		case joaat("greatplains"):
			return 4;
		case -120156735:
			return 6;
		case 1645618177:
			return 7;
		case -512529193:
			return 8;
		case joaat("heartlands"):
			return 9;
		case 178647645:
			return 10;
		case joaat("scarlettmeadows"):
			return 11;
		case joaat("talltrees"):
			return 12;
		case -2066240242:
			return 13;
		case joaat("riobravo"):
			return 14;
		case -108848014:
			return 15;
		case 892930832:
			return 16;
		default:
			break;
	}
	return -1;
}

int func_14(int iParam0)
{
	switch (iParam0)
	{
		case joaat("annesburg"):
			return 78;
		case joaat("ARMADILLO"):
			return 120;
		case joaat("beechershope"):
			return 37;
		case joaat("blackwater"):
			return 38;
		case 1778899666:
			return 93;
		case joaat("BUTCHER"):
			return 82;
		case 1862420670:
			return 95;
		case joaat("cornwall"):
			return 65;
		case -473051294:
			return 69;
		case joaat("lagras"):
			return 3;
		case 1463094051:
			return 110;
		case joaat("rhodes"):
			return 105;
		case -765540529:
			return 5;
		case 2147354003:
			return 32;
		case joaat("strawberry"):
			return 26;
		case joaat("tumbleweed"):
			return 115;
		case joaat("valentine"):
			return 76;
		case joaat("vanhorn"):
			return 92;
		case joaat("wallace"):
			return 35;
		case joaat("wapiti"):
			return 56;
		case -1207133769:
		case 201158410:
		case 1654810713:
			return 57;
		case joaat("manicato"):
			return 61;
	}
	return -1;
}

int func_15(var uParam0)
{
	if (uParam0->f_13 == -1)
	{
		return -1;
	}
	uParam0->f_16 = func_16(uParam0->f_13);
	if (uParam0->f_16 != 0)
	{
		return 2;
	}
	uParam0->f_14 = func_14(uParam0->f_13);
	if (func_38(uParam0->f_14))
	{
		return 0;
	}
	uParam0->f_15 = func_13(uParam0->f_13);
	if (func_39(uParam0->f_15))
	{
		return 1;
	}
	return -1;
}

int func_16(int iParam0)
{
	switch (iParam0)
	{
		case joaat("AMBARINO"):
			return -594748684;
		case joaat("LEMOYNE"):
			return 1072597802;
		case joaat("newaustin"):
			return 1259085938;
		case joaat("NEWHANOVER"):
			return 1762760291;
		case joaat("WESTELIZABETH"):
			return 1715468631;
		case -1973391500:
			return -960313506;
		case -1247148211:
			return -1581676015;
		case joaat("guarma"):
			return -1431514117;
		default:
			break;
	}
	return 0;
}

int func_17(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("REGION_BAY_CRAWDADWILLIES");
		case 1:
			return joaat("REGION_BAY_MACOMBS_END");
		case 2:
			return joaat("REGION_BAY_MERKINSWALLER");
		case 3:
			return joaat("REGION_BAY_LAGRAS");
		case 4:
			return joaat("REGION_BAY_LAKAY");
		case 5:
			return joaat("REGION_BAY_SAINT_DENIS");
		case 6:
			return joaat("REGION_BAY_ORANGE_PLANTATION");
		case 7:
			return joaat("REGION_BAY_SERIAL_KILLER");
		case 8:
			return joaat("REGION_BAY_SERENDIPITY");
		case 9:
			return joaat("REGION_BAY_SHADYBELLE");
		case 10:
			return joaat("REGION_BAY_SILTWATERSTRAND");
		case 11:
			return joaat("REGION_BGV_APPLESEEDTIMBER");
		case 12:
			return joaat("REGION_BGV_BERYLS_DREAM");
		case 13:
			return joaat("REGION_BGV_BLACKBONEFOREST_TRAPPER");
		case 14:
			return joaat("REGION_BGV_DAKOTARIVER_TRAPPER");
		case 15:
			return joaat("REGION_BGV_FORTRIGGS");
		case 16:
			return joaat("REGION_BGV_HANGINGDOG");
		case 17:
			return joaat("REGION_BGV_LONEMULESTEAD");
		case 18:
			return joaat("REGION_BGV_MISSING_HUSBAND");
		case 19:
			return joaat("REGION_BGV_MONTO_REST");
		case 20:
			return joaat("REGION_BGV_OWANJILA_DAM");
		case 21:
			return joaat("REGION_BGV_PAINTEDSKY");
		case 22:
			return joaat("REGION_BGV_PRONGHORN");
		case 24:
			return joaat("REGION_BGV_SHACK");
		case 23:
			return joaat("REGION_BGV_RIGGS_STATION");
		case 25:
			return joaat("REGION_BGV_SHEPHERDS_RISE");
		case 26:
			return joaat("REGION_BGV_STRAWBERRY");
		case 27:
			return joaat("REGION_BGV_VALLEY_VIEW");
		case 28:
			return joaat("REGION_BGV_WALLACE_STATION");
		case 29:
			return joaat("REGION_BGV_WATSONSCABIN");
		case 30:
			return joaat("REGION_BLU_CANEBREAK_MANOR");
		case 31:
			return joaat("REGION_BLU_COPPERHEAD");
		case 32:
			return joaat("REGION_BLU_SISIKA");
		case 33:
			return joaat("REGION_CML_BACCHUSBRIDGE");
		case 34:
			return joaat("REGION_CML_DINO_LADY");
		case 35:
			return joaat("REGION_CML_OLDFORTWALLACE");
		case 36:
			return joaat("REGION_CML_SIXPOINTCABIN");
		case 37:
			return joaat("REGION_GRT_BEECHERS");
		case 38:
			return joaat("REGION_GRT_BLACKWATER");
		case 39:
			return joaat("REGION_GRT_QUAKERS_COVE");
		case 40:
			return joaat("REGION_GRZ_ADLERRANCH");
		case 41:
			return joaat("REGION_GRZ_DEAD_RIVAL");
		case 50:
			return joaat("REGION_GRZ_CALUMETRAVINE");
		case 51:
			return joaat("REGION_GRE_CIVIL_WAR_BRIDE");
		case 42:
			return joaat("REGION_GRZ_CHEZPORTER");
		case 52:
			return joaat("REGION_GRZ_COHUTTA");
		case 43:
			return joaat("REGION_GRZ_COLTER");
		case 44:
			return joaat("REGION_GRZ_FROZEN_EXPLORER");
		case 53:
			return joaat("REGION_GRZ_GUNFIGHT");
		case 45:
			return joaat("REGION_GRZ_MILLESANI_CLAIM");
		case 46:
			return joaat("REGION_GRZ_MOUNTAIN_MAN");
		case 47:
			return joaat("REGION_GRZ_STARVING_CHILDREN");
		case 48:
			return joaat("REGION_GRZ_TEMPEST_RIM");
		case 54:
			return joaat("REGION_GRZ_THELOFT");
		case 55:
			return joaat("REGION_GRE_VETERAN");
		case 56:
			return joaat("REGION_GRZ_WAPITI");
		case 49:
			return joaat("REGION_GRZ_WINTERMINING_TOWN");
		case 57:
			return joaat("REGION_GUA_AGUASDULCES");
		case 58:
			return joaat("REGION_GUA_CAMP");
		case 59:
			return joaat("REGION_GUA_CINCOTORRES");
		case 60:
			return joaat("REGION_GUA_LACAPILLA");
		case 61:
			return joaat("REGION_GUA_MANICATO");
		case 62:
			return joaat("REGION_HRT_ABANDONED_MILL");
		case 64:
			return joaat("REGION_HRT_CARMODYDELL");
		case 65:
			return joaat("REGION_HRT_CORNWALLKEROSENE");
		case 66:
			return joaat("REGION_HRT_CROP_FARM");
		case 67:
			return joaat("REGION_HRT_CUMBERLANDFALLS");
		case 68:
			return joaat("REGION_HRT_DOWNSRANCH");
		case 69:
			return joaat("REGION_HRT_EMERALDRANCH");
		case 70:
			return joaat("REGION_HRT_GRANGERS_HOGGERY");
		case 71:
			return joaat("REGION_HRT_HORSESHOEOVERLOOK");
		case 72:
			return joaat("REGION_HRT_LARNEDSOD");
		case 73:
			return joaat("REGION_HRT_LOONY_CULT");
		case 74:
			return joaat("REGION_HRT_LUCKYSCABIN");
		case 75:
			return joaat("REGION_HRT_SWANSONS_STATION");
		case 76:
			return joaat("REGION_HRT_VALENTINE");
		case 77:
			return joaat("REGION_ROA_ABERDEENPIGFARM");
		case 78:
			return joaat("REGION_ROA_ANNESBURG");
		case 79:
			return joaat("REGION_ROA_BEAVERHOLLOW");
		case 63:
			return joaat("REGION_ROA_BEECHERS_C");
		case 80:
			return joaat("REGION_ROA_BLACK_BALSAM_RISE");
		case 81:
			return joaat("REGION_ROA_BRANDYWINE_DROP");
		case 82:
			return joaat("REGION_ROA_BUTCHERCREEK");
		case 83:
			return joaat("REGION_ROA_DOVERHILL");
		case 84:
			return joaat("REGION_ROA_HAPPY_FAMILY");
		case 85:
			return joaat("REGION_ROA_ISOLATIONIST");
		case 86:
			return joaat("REGION_ROA_MACLEANSHOUSE");
		case 87:
			return joaat("REGION_ROA_MOSSY_FLATS");
		case 88:
			return joaat("REGION_ROA_ROANOKE_VALLEY");
		case 89:
			return joaat("REGION_ROA_ROCKYSEVEN");
		case 90:
			return joaat("REGION_ROA_TRAPPER");
		case 91:
			return joaat("REGION_ROA_VANHORNMANSION");
		case 92:
			return joaat("REGION_ROA_VANHORNPOST");
		case 93:
			return joaat("REGION_SCM_BRAITHWAITEMANOR");
		case 94:
			return joaat("REGION_SCM_BULGERGLADE");
		case 95:
			return joaat("REGION_SCM_CALIGAHALL");
		case 96:
			return joaat("REGION_SCM_CATFISHJACKSONS");
		case 97:
			return joaat("REGION_SCM_CLEMENSCOVE");
		case 98:
			return joaat("REGION_SCM_CLEMENSPOINT");
		case 99:
			return joaat("REGION_SCM_COMPSONS_STEAD");
		case 100:
			return joaat("REGION_SCM_DAIRY_FARM");
		case 101:
			return joaat("REGION_SCM_HORSE_SHOP");
		case 102:
			return joaat("REGION_SCM_LONNIESSHACK");
		case 103:
			return joaat("REGION_SCM_LOVE_TRIANGLE");
		case 104:
			return joaat("REGION_SCM_RADLEYS_PASTURE");
		case 105:
			return joaat("REGION_SCM_RHODES");
		case 106:
			return joaat("REGION_SCM_SLAVE_PEN");
		case 107:
			return joaat("REGION_TAL_AURORA_BASIN");
		case 109:
			return joaat("REGION_TAL_COCHINAY");
		case 110:
			return joaat("REGION_TAL_MANZANITAPOST");
		case 111:
			return joaat("REGION_TAL_PACIFICUNIONRR");
		case 112:
			return joaat("REGION_TAL_TANNERSREACH");
		case 108:
			return joaat("REGION_TAL_DEAD_SETTLER");
		case 113:
			return joaat("REGION_TAL_TRAPPER");
		case 126:
			return joaat("REGION_HEN_MACFARLANES_RANCH");
		case 127:
			return joaat("REGION_HEN_THIEVES_LANDING");
		case 120:
			return joaat("REGION_CHO_ARMADILLO");
		case 121:
			return joaat("REGION_CHO_COOTS_CHAPEL");
		case 122:
			return joaat("REGION_CHO_DON_JULIO_HOUSE");
		case 124:
			return joaat("REGION_CHO_RIDGEWOOD_FARM");
		case 123:
			return joaat("REGION_CHO_RILEYS_CHARGE");
		case 125:
			return joaat("REGION_CHO_TWIN_ROCKS");
		case 114:
			return joaat("REGION_GAP_GAPTOOTH_BREACH");
		case 115:
			return joaat("REGION_GAP_TUMBLEWEED");
		case 116:
			return joaat("REGION_GAP_RATHSKELLER_FORK");
		case 129:
			return joaat("REGION_GAP_SOLOMONS_FOLLY");
		case 117:
			return joaat("REGION_RIO_BENEDICT_POINT");
		case 118:
			return joaat("REGION_RIO_FORT_MERCER");
		case 119:
			return joaat("REGION_RIO_PLAIN_VIEW");
		case 128:
			return joaat("REGION_CENTRALUNIONRR");
		default:
			break;
	}
	return 0;
}

int func_18(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("DISTRICT_BAYOU_NWA");
		case 1:
			return joaat("DISTRICT_BIG_VALLEY");
		case 2:
			return joaat("DISTRICT_BLUEGILL_MARSH");
		case 3:
			return joaat("DISTRICT_CUMBERLAND_FOREST");
		case 4:
			return joaat("DISTRICT_GREAT_PLAINS");
		case 5:
			return joaat("DISTRICT_GRIZZLIES");
		case 6:
			return joaat("DISTRICT_GRIZZLIES_EAST");
		case 7:
			return joaat("DISTRICT_GRIZZLIES_WEST");
		case 8:
			return joaat("DISTRICT_GUAMA");
		case 9:
			return joaat("DISTRICT_HEARTLAND");
		case 10:
			return joaat("DISTRICT_ROANOKE_RIDGE");
		case 11:
			return joaat("DISTRICT_SCARLETT_MEADOWS");
		case 12:
			return joaat("DISTRICT_TALL_TREES");
		case 13:
			return joaat("DISTRICT_GAPTOOTH_RIDGE");
		case 14:
			return joaat("DISTRICT_RIO_BRAVO");
		case 15:
			return joaat("DISTRICT_CHOLLA_SPRINGS");
		case 16:
			return joaat("DISTRICT_HENNIGANS_STEAD");
		default:
			break;
	}
	return 0;
}

void func_19(var uParam0)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	bVar0 = false;
	iVar1 = 0;
	sVar2 = "";
	iVar3 = func_14(uParam0->f_13);
	iVar4 = uParam0->f_24;
	if (!func_39(iVar4))
	{
		iVar4 = func_13(uParam0->f_13);
	}
	if (!func_39(iVar4))
	{
		iVar5 = func_41(func_40(iVar3, 1, 1));
	}
	else
	{
		iVar5 = func_42(iVar4);
	}
	if ((func_43(iVar4) || func_44(iVar5)) || func_45(iVar3))
	{
		if (PED::IS_PED_MALE(PLAYER::PLAYER_PED_ID()))
		{
			sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_FULL_D_OR_A_M");
		}
		else
		{
			sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_FULL_D_OR_A_F");
		}
		bVar0 = true;
	}
	else if (func_46(iVar5))
	{
		iVar1 = func_47(iVar5);
		if (iVar1 > 0)
		{
			bVar0 = true;
			sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_MAP_UI_BOUNTY_CASH", iVar1);
		}
	}
	if (!bVar0)
	{
		if ((56 == uParam0->f_14 && !func_48(52)) || (func_49(44) && (105 == uParam0->f_14 || 95 == uParam0->f_14)))
		{
			sVar2 = MISC::_CREATE_VAR_STRING(2, "NO_WEAPON_REGION");
			bVar0 = true;
		}
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_11, bVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_12, sVar2);
}

bool func_20(int iParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	bool bVar2;

	bVar2 = MAP::SET_BLIP_FLASHES(iParam0, &uVar0, &uVar1);
	*uParam1 = uVar0;
	uParam1->f_1 = uVar1;
	return bVar2;
}

int func_21(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < &Global_1898330)
	{
		if (!func_50(Global_1898330[iVar0]))
		{
		}
		else if (((*Global_1898346)[iVar0 /*6*/])->f_3 == 1)
		{
			*uParam1 = ((*Global_1898346)[iVar0 /*6*/])->f_4;
			if ((func_51(*uParam1) && MAP::DOES_BLIP_EXIST(((*Global_1835011)[*uParam1 /*74*/])->f_27)) && ((*Global_1835011)[*uParam1 /*74*/])->f_27 == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_22(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_40.f_450)
	{
		if (((func_52(&(Global_40.f_450[iVar0])) && MAP::DOES_BLIP_EXIST(((*Global_1347702)[&Global_40.f_450[iVar0] /*49*/])->f_37)) && ((*Global_1347702)[&Global_40.f_450[iVar0] /*49*/])->f_37 == iParam0) && !func_53(((*Global_1347702)[&Global_40.f_450[iVar0] /*49*/])->f_12, 16777216))
		{
			*uParam1 = &Global_40.f_450[iVar0];
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_23(int iParam0)
{
	switch (iParam0)
	{
		case joaat("lagras"):
			return 412187666;
		case -765540529:
			return -48955357;
		case joaat("strawberry"):
			return -1366448499;
		case joaat("blackwater"):
			return -2142170718;
		case -473051294:
			return -652262915;
		case joaat("valentine"):
			return 1109427018;
		case joaat("annesburg"):
			return -1353234788;
		case joaat("vanhorn"):
			return -1965958161;
		case joaat("rhodes"):
			return -1059106609;
		case joaat("ARMADILLO"):
			return -1119990720;
		case joaat("tumbleweed"):
			return 539298361;
		default:
			break;
	}
	return -1;
}

int func_24()
{
	return 1109427018;
}

int func_25(int iParam0, int iParam1)
{
	var uVar0;
	struct<16> Var1;
	int iVar17;
	var uVar18;
	int iVar19;

	iVar17 = -1;
	switch (iParam0)
	{
		case 13:
			return -834434971;
		case 14:
			return -1014339941;
		case 15:
			return -1131397804;
		case 17:
			return -1211307166;
		case 18:
			return 909802596;
		case 19:
			return -1932898631;
		case 47:
			return -1212983574;
		case 48:
			return -1805795741;
		case 49:
			return -1949319444;
		case 53:
			return -40867973;
		case 54:
			return -700024937;
		case 55:
			return -422762807;
		case 56:
			return 1307627757;
		case 57:
			return -1341878153;
		case 58:
			return 1334885374;
		case 59:
			return 1718870684;
		case 82:
			return -1640799778;
		case 83:
			return -1640799778;
		case 84:
			return -1640799778;
		case 85:
			return -1640799778;
		case 86:
			return -1640799778;
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 51:
		case 60:
		case 61:
			Var1 = { func_54(iParam1, iParam0, &uVar0) };
			iVar17 = MISC::GET_HASH_KEY(&Var1);
			break;
		case 16:
			iVar17 = MISC::GET_HASH_KEY("MAP_CARD_BLK_BOUNTY");
			break;
		case 50:
			Var1 = { func_55() };
			iVar17 = MISC::GET_HASH_KEY(&Var1);
			break;
		case 46:
		case 52:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
			Var1 = { func_56(iParam0, iParam1, &uVar0) };
			iVar17 = MISC::GET_HASH_KEY(&Var1);
			break;
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
			StringCopy(&Var1, func_57(iParam0), 128);
			iVar17 = MISC::GET_HASH_KEY(&Var1);
			break;
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
			MAP::SET_BLIP_FLASHES(iParam1, &uVar18, &iVar19);
			StringCopy(&Var1, func_58(iVar19), 128);
			iVar17 = MISC::GET_HASH_KEY(&Var1);
			break;
	}
	if (iVar17 != -1)
	{
		return iVar17;
	}
	return -1;
}

void func_26(var uParam0)
{
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_8);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_9);
}

void func_27(var uParam0)
{
	if (!UIAPPS::_REQUEST_UIAPP_TRANSITION_BY_HASH(joaat("map"), joaat("hide_info")))
	{
		uParam0->f_29 = 1;
	}
	else
	{
		uParam0->f_29 = 0;
	}
}

void func_28(var uParam0)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	sVar0 = func_59(uParam0->f_26, uParam0->f_27);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		if (uParam0->f_25 != -1)
		{
			iVar1 = func_60(uParam0->f_25);
		}
		if (uParam0->f_24 != -1)
		{
			iVar2 = func_61(uParam0->f_24);
			iVar3 = func_62(uParam0->f_24);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(iVar1) && !MISC::IS_STRING_NULL_OR_EMPTY(iVar2))
		{
			sVar0 = MISC::_CREATE_VAR_STRING(42, "MAP_CARD_TOWN_FOOTER", iVar1, iVar2);
		}
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(iVar2) && !MISC::IS_STRING_NULL_OR_EMPTY(iVar3))
		{
			sVar0 = MISC::_CREATE_VAR_STRING(42, "MAP_CARD_TOWN_FOOTER", iVar2, iVar3);
		}
		else
		{
			sVar0 = "";
		}
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_10, sVar0);
}

int func_29(var uParam0)
{
	if (uParam0->f_29)
	{
		func_27(uParam0);
	}
	if (!uParam0->f_21)
	{
		return 0;
	}
	if (uParam0->f_17 == 0)
	{
		uParam0->f_21 = 0;
		return 0;
	}
	if (TXD::_DOES_STREAMED_TXD_EXIST(uParam0->f_20) && TXD::_HAS_STREAMED_TXD_LOADED(uParam0->f_20))
	{
		uParam0->f_21 = 0;
		return 1;
	}
	return 0;
}

void func_30(int iParam0, var uParam1)
{
	char cVar0[16];
	int iVar2;

	if (!func_51(uParam1->f_22))
	{
		if (!func_21(iParam0, &(uParam1->f_22)))
		{
			return;
		}
	}
	func_26(uParam1);
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "BLIP");
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "name", ((*Global_1835011)[uParam1->f_22 /*74*/])->f_26);
	MemCopy(&cVar0, {((*Global_1835011)[uParam1->f_22 /*74*/])->f_8}, 2);
	StringConCat(&cVar0, "_DESC_PM", 16);
	if (!HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
	{
		StringCopy(&cVar0, "", 16);
	}
	iVar2 = MISC::GET_HASH_KEY(&(((*Global_1835011)[uParam1->f_22 /*74*/])->f_8));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", MISC::GET_HASH_KEY(&cVar0));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", iVar2);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", MISSIONDATA::_0x57E798B57C45EE16(iVar2));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTX", MISSIONDATA::_0x57E798B56C45EE15(iVar2));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", 1544592360);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_value", "$0.00");
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_8, -1, "map_card_mission", uParam1->f_9);
}

void func_31(int iParam0, var uParam1)
{
	char cVar0[16];
	int iVar2;

	if (!func_52(uParam1->f_23))
	{
		if (!func_22(iParam0, &(uParam1->f_23)))
		{
			return;
		}
	}
	else if (func_53(((*Global_1347702)[uParam1->f_23 /*49*/])->f_12, 16777216))
	{
		return;
	}
	func_26(uParam1);
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "BLIP");
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "name", ((*Global_1347702)[uParam1->f_23 /*49*/])->f_36);
	MemCopy(&cVar0, {((*Global_1347702)[uParam1->f_23 /*49*/])->f_3}, 2);
	StringConCat(&cVar0, "_DESC_PM", 16);
	if (!HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
	{
		MemCopy(&cVar0, {((*Global_1347702)[uParam1->f_23 /*49*/])->f_3}, 2);
		StringConCat(&cVar0, "_DESC", 16);
	}
	iVar2 = MISC::GET_HASH_KEY(&(((*Global_1347702)[uParam1->f_23 /*49*/])->f_3));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", MISC::GET_HASH_KEY(&cVar0));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", iVar2);
	if (!func_53(((*Global_1347702)[uParam1->f_23 /*49*/])->f_12, 1) && (func_53(((*Global_1347702)[uParam1->f_23 /*49*/])->f_12, 2) || ((*Global_1347702)[uParam1->f_23 /*49*/])->f_36 == joaat("BLIP_RC")))
	{
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", -1859668514);
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTX", joaat("image"));
	}
	else
	{
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", MISSIONDATA::_0x57E798B57C45EE16(iVar2));
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTX", MISSIONDATA::_0x57E798B56C45EE15(iVar2));
	}
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", 1544592360);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_value", "$0.00");
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_8, -1, "map_card_mission", uParam1->f_9);
}

void func_32(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_26(uParam1);
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "Zone");
	uParam1->f_20 = func_23(iParam0);
	iVar0 = func_63(uParam1->f_14);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "name", func_64(iParam0));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", MISC::GET_HASH_KEY(func_61(iVar0)));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", func_65(iParam0));
	if (TXD::_DOES_STREAMED_TXD_EXIST(uParam1->f_20))
	{
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", func_23(iParam0));
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTX", func_23(iParam0));
	}
	else
	{
		uParam1->f_20 = func_24();
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", uParam1->f_20);
	}
	iVar1 = func_42(iVar0);
	if (func_46(iVar1))
	{
		iVar2 = func_47(iVar1);
		if (iVar2 > 0)
		{
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_name", "LAW_UI_BOUNTY");
			DATABINDING::_DATABINDING_ADD_DATA_INT(uParam1->f_9, "hint_value", iVar2);
		}
		else
		{
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_name", "LAW_UI_NO_BOUNTY");
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_value", "");
		}
	}
	else
	{
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", 0);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_value", "");
	}
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_8, -1, "map_card_town", uParam1->f_9);
}

void func_33(int iParam0, var uParam1)
{
	var uVar0;
	int iVar1;
	struct<7> Var2;

	MAP::SET_BLIP_FLASHES(iParam0, &uVar0, &iVar1);
	func_26(uParam1);
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "BLIP");
	Var2 = { func_66(PLAYER::INT_TO_PLAYERINDEX(iVar1)) };
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "name", func_67(PLAYER::GET_PLAYER_NAME(PLAYER::INT_TO_PLAYERINDEX(iVar1)), joaat("COLOR_PURE_WHITE")));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", -436556357);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", MISC::GET_HASH_KEY(func_69(0, &Var2, func_68(0))));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", -486609646);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam1->f_9, "hint_value", func_70(iVar1));
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_8, -1, "map_card_player", uParam1->f_9);
}

void func_34(int iParam0, var uParam1)
{
	var uVar0;
	int iVar1;

	MAP::SET_BLIP_FLASHES(iParam0, &uVar0, &iVar1);
	func_26(uParam1);
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "BLIP");
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "name", MISC::GET_HASH_KEY(func_71(iVar1)));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", -436556357);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", func_25(uParam1->f_17, uParam1->f_19));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", 0);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_value", "");
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_8, -1, "map_card_mission", uParam1->f_9);
}

void func_35(int iParam0, var uParam1)
{
	var uVar0;
	int iVar1;

	MAP::SET_BLIP_FLASHES(iParam0, &uVar0, &iVar1);
	func_26(uParam1);
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "BLIP");
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "name", &(Global_1058888->f_43923.f_283[iVar1 /*306*/]));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", -436556357);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", func_25(uParam1->f_17, uParam1->f_19));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", 0);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_value", "");
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_8, -1, "map_card_mission", uParam1->f_9);
}

void func_36(int iParam0, var uParam1)
{
	var uVar0;
	int iVar1;

	MAP::SET_BLIP_FLASHES(iParam0, &uVar0, &iVar1);
	func_26(uParam1);
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "BLIP");
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "name", func_72(iVar1));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", -436556357);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", func_25(uParam1->f_17, uParam1->f_19));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", 0);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_value", "");
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_8, -1, "map_card_mission", uParam1->f_9);
}

void func_37(int iParam0, var uParam1)
{
	int iVar0;
	struct<16> Var1;
	char cVar17[128];
	char cVar33[128];
	var uVar49;
	int iVar50;

	func_26(uParam1);
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "BLIP");
	StringCopy(&cVar17, func_73(iParam0), 128);
	switch (func_74(iParam0))
	{
		case 1:
			Var1 = { func_54(uParam1->f_19, iParam0, &iVar0) };
			if (iParam0 == 16)
			{
				StringCopy(&Var1, "MAP_CARD_BOUNTY", 128);
			}
			StringCopy(&cVar33, func_60(iVar0), 128);
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "name", MISC::GET_HASH_KEY(&cVar17));
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", MISC::GET_HASH_KEY(&Var1));
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", MISC::GET_HASH_KEY(&cVar33));
			break;
		case 2:
			StringCopy(&Var1, func_57(iParam0), 128);
			iVar0 = func_75(MAP::GET_BLIP_COORDS(uParam1->f_19), 1);
			StringCopy(&cVar33, func_60(iVar0), 128);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "name", &cVar17);
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", MISC::GET_HASH_KEY(&Var1));
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", MISC::GET_HASH_KEY(&cVar33));
			break;
		case 3:
			Var1 = { func_56(iParam0, uParam1->f_19, &iVar0) };
			StringCopy(&cVar33, func_60(iVar0), 128);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "name", &cVar17);
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", MISC::GET_HASH_KEY(&Var1));
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", MISC::GET_HASH_KEY(&cVar33));
			break;
		case 4:
			MAP::SET_BLIP_FLASHES(uParam1->f_19, &uVar49, &iVar50);
			StringCopy(&cVar17, func_77(func_76(iVar50)), 128);
			StringCopy(&Var1, func_78(iVar50), 128);
			iVar0 = func_75(MAP::GET_BLIP_COORDS(uParam1->f_19), 1);
			StringCopy(&cVar33, func_60(iVar0), 128);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "name", &cVar17);
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", MISC::GET_HASH_KEY(&Var1));
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", MISC::GET_HASH_KEY(&cVar33));
			break;
		case 5:
			Var1 = { func_79(iVar0) };
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "name", &cVar17);
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", MISC::GET_HASH_KEY(&Var1));
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", 0);
			break;
		default:
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "name", &cVar17);
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", MISC::GET_HASH_KEY(&Var1));
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", 0);
			break;
	}
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", func_25(iParam0, uParam1->f_19));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_value", 0);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_8, -1, "map_card_mission", uParam1->f_9);
}

bool func_38(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_39(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

int func_40(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	switch (iParam0)
	{
		case 76:
			if (func_80(iParam0))
			{
				return 305496830;
			}
			else
			{
				return -1482428221;
			}
			break;
		case 105:
			if (func_80(iParam0))
			{
				return -1323821455;
			}
			else
			{
				return -1994249944;
			}
			break;
		case 5:
			return 1559741032;
		case 61:
			return 60667583;
		case 78:
			return 1758133584;
		case 26:
			return -577559008;
		case 38:
			if (!bParam1 || func_81() != -1)
			{
				return 1624541293;
			}
			if (func_49(45))
			{
				return 1624541293;
			}
			else
			{
				return 1716860278;
			}
			break;
		case 92:
			return 1637569166;
		case 65:
			return -867798278;
		case 69:
			return 1543937523;
		case 93:
			return 1030875135;
		case 95:
			return -201437056;
		case 57:
			return 794246846;
		case 3:
			return -968357677;
		case 32:
			return 728480338;
		case 82:
			return 725489698;
		case 35:
			return 183652754;
		case 56:
			return 2056744450;
		case 126:
			return 963280223;
		case 120:
			return -256309418;
		case 124:
			return 1666986024;
		case 115:
			return 251328732;
		case 127:
			if (!bParam1 || func_81() != -1)
			{
				return 1024208566;
			}
			if (func_49(45))
			{
				return 1024208566;
			}
			else
			{
				return 1640255731;
			}
			break;
		case 22:
			if (!bParam1 || func_81() != -1)
			{
				return 965626876;
			}
			if (func_82(((*Global_1835011)[59 /*74*/])->f_1, 1))
			{
				return 965626876;
			}
			else
			{
				return 1039226266;
			}
			break;
		case 37:
			if (!bParam1 || func_81() != -1)
			{
				return -497792649;
			}
			if (func_82(((*Global_1347702)[9 /*49*/])->f_15, 1))
			{
				return -497792649;
			}
			else if (func_49(45))
			{
				return -1738342532;
			}
			else
			{
				return -1308265478;
			}
			break;
		case 4:
		case 9:
		case 43:
		case 58:
		case 71:
		case 79:
		case 98:
			if (iParam0 == func_83())
			{
				return 2126166785;
			}
			break;
		case 110:
			if (!bParam1 || func_81() != -1)
			{
				return -1990305778;
			}
			if (func_49(45))
			{
				return -1990305778;
			}
			else
			{
				return -1679988168;
			}
			break;
	}
	if (bParam2)
	{
		iVar0 = func_84(iParam0);
		if (iVar0 != -1)
		{
			return func_85(iVar0, bParam1);
		}
	}
	return 0;
}

int func_41(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2126166785:
			return -1;
		case -2119728378:
		case -1482428221:
		case -1391142299:
		case -867798278:
		case 183652754:
		case 305496830:
		case 725489698:
		case 1178102426:
		case 1543937523:
		case 1637569166:
		case 1758133584:
		case 2056744450:
			return 1;
		case -2137625828:
		case -1994249944:
		case -1323821455:
		case -968357677:
		case -201437056:
		case 493546894:
		case 728480338:
		case 1030875135:
		case 1559741032:
		case 1608357655:
			return 2;
		case -1147969487:
			return 0;
		case 60667583:
		case 537788226:
		case 794246846:
			return 5;
		case -1990305778:
		case -1738342532:
		case -1679988168:
		case -1308265478:
		case -650528936:
		case -577559008:
		case -497792649:
		case 139139039:
		case 965626876:
		case 1039226266:
		case 1624541293:
		case 1716860278:
			return 3;
		case -1618764825:
		case -877373104:
		case -256309418:
		case 251328732:
		case 963280223:
		case 1024208566:
		case 1640255731:
		case 1666986024:
			return 4;
	}
	return -1;
}

int func_42(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 2:
			return 2;
		case 11:
			return 2;
		case 9:
			return 1;
		case 10:
			return 1;
		case 3:
			return 1;
		case 4:
			return 3;
		case 12:
			return 3;
		case 1:
			return 3;
		case 5:
			return 0;
		case 6:
			return 0;
		case 7:
			return 0;
		case 8:
			return 5;
		case 13:
			return 4;
		case 14:
			return 4;
		case 15:
			return 4;
		case 16:
			return 4;
		default:
			break;
	}
	return -1;
}

int func_43(int iParam0)
{
	if (!func_39(iParam0))
	{
		return 0;
	}
	return func_86(iParam0, 2);
}

int func_44(int iParam0)
{
	if (!func_46(iParam0))
	{
		return 0;
	}
	return func_87(iParam0, 2);
}

int func_45(int iParam0)
{
	if (!func_38(iParam0))
	{
		return 0;
	}
	return func_88(iParam0, 16777216);
}

bool func_46(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

int func_47(int iParam0)
{
	return func_89(iParam0);
}

bool func_48(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_82(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
	}
	return (UNLOCK::_UNLOCK_IS_UNLOCKED(((*Global_1835011)[iParam0 /*74*/])->f_2) && !UNLOCK::_UNLOCK_IS_VISIBLE(((*Global_1835011)[iParam0 /*74*/])->f_2));
}

int func_49(int iParam0)
{
	if (!func_90(iParam0))
	{
		return 0;
	}
	return func_91(iParam0);
}

bool func_50(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_51(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

bool func_52(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_53(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

struct<16> func_54(int iParam0, int iParam1, var uParam2)
{
	struct<16> Var0;
	vector3 vVar16;
	char cVar19[128];

	if (!MAP::DOES_BLIP_EXIST(iParam0))
	{
		return Var0;
	}
	vVar16 = { MAP::GET_BLIP_COORDS(iParam0) };
	*uParam2 = func_75(vVar16, 1);
	while (vVar16.z < 200f && !func_38(*uParam2))
	{
		vVar16.f_2 = (vVar16.z + 25f);
		*uParam2 = func_75(vVar16, 1);
	}
	if (!func_38(*uParam2))
	{
		return Var0;
	}
	StringCopy(&Var0, "MAP_CARD_", 128);
	cVar19 = func_92(*uParam2);
	StringConCat(&Var0, &cVar19, 128);
	StringConCat(&Var0, "_", 128);
	StringConCat(&Var0, func_93(iParam1, *uParam2, vVar16), 128);
	return Var0;
}

struct<16> func_55()
{
	char cVar0[128];

	StringCopy(&cVar0, "MAP_CARD_NBX_STAGECOACH", 128);
	return cVar0;
}

struct<16> func_56(int iParam0, int iParam1, int iParam2)
{
	struct<16> Var0;
	vector3 vVar16;

	if (!MAP::DOES_BLIP_EXIST(iParam1))
	{
		return Var0;
	}
	vVar16 = { MAP::GET_BLIP_COORDS(iParam1) };
	if (vVar16.z == 0f)
	{
		func_94(&vVar16, 50, 10, 0);
	}
	if (vVar16.z == 0f)
	{
		vVar16.f_2 = Global_36.f_2;
	}
	*iParam2 = func_75(vVar16, 1);
	if (!func_38(*iParam2))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 52:
			StringCopy(&Var0, "MAP_CARD_CAMP_", 128);
			StringConCat(&Var0, func_95(*iParam2), 128);
			break;
		case 46:
			StringCopy(&Var0, "MAP_CARD_CAMP_BEECHERSHOPE", 128);
			break;
		case 65:
			StringCopy(&Var0, "MAP_CARD_CAMP_FOOD", 128);
			break;
		case 66:
			StringCopy(&Var0, "MAP_CARD_CAMP_TITHING_BOX", 128);
			break;
		case 67:
			StringCopy(&Var0, "MAP_CARD_CAMP_BUTCHER", 128);
			break;
		case 68:
			StringCopy(&Var0, "MAP_CARD_CAMP_HORSE_HITCH", 128);
			break;
		case 69:
			StringCopy(&Var0, "MAP_CARD_CAMP_SUPPLY_AMMO", 128);
			break;
		case 70:
			StringCopy(&Var0, "MAP_CARD_CAMP_SUPPLY_MEDICINE", 128);
			break;
		case 71:
			StringCopy(&Var0, "MAP_CARD_CAMP_SUPPLY_PROVISIONS", 128);
			break;
		case 72:
			StringCopy(&Var0, "MAP_CARD_CAMP_MINIGAME_POKER", 128);
			break;
		case 73:
			StringCopy(&Var0, "MAP_CARD_CAMP_MINIGAME_FIVE_FINGER", 128);
			break;
		case 74:
			StringCopy(&Var0, "MAP_CARD_CAMP_MINIGAME_DOMINOES", 128);
			break;
	}
	return Var0;
}

char* func_57(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "MAP_CARD_MINIGAMES_BLACKJACK";
		case 7:
			return "MAP_CARD_MINIGAMES_FENCE_BUILDING";
		case 3:
			return "MAP_CARD_MINIGAMES_POKER";
		case 5:
			return "MAP_CARD_MINIGAMES_COW_MILKING";
		case 6:
			return "MAP_CARD_MINIGAMES_CLEANING_STALLS";
		case 2:
			return "MAP_CARD_MINIGAMES_DOMINOES_BLOCK";
		case 8:
			return "MAP_CARD_MINIGAMES_DOMINOES_ALL_THREES";
		case 9:
			return "MAP_CARD_MINIGAMES_DOMINOES_ALL_FIVES";
		case 10:
			return "MAP_CARD_MINIGAMES_DOMINOES_DRAW";
		case 4:
			return "MAP_CARD_MINIGAMES_FIVE_FINGER_FILLET_CLASSIC";
		case 11:
			return "MAP_CARD_MINIGAMES_FIVE_FINGER_FILLET_BURNOUT";
		case 12:
			return "MAP_CARD_MINIGAMES_FIVE_FINGER_FILLET_GUTS";
		default:
			break;
	}
	return "";
}

char* func_58(int iParam0)
{
	switch (iParam0)
	{
		case -1894360593:
			return "MAP_CARD_CAMP_HORSESHOE_HUNTING_CHARLES";
		case 581819093:
			return "MAP_CARD_CAMP_CLEMENSPOINT_FISHING_JAVIER";
		case 687859577:
			return "MAP_CARD_CAMP_CLEMENSPOINT_FISHING_KIERAN";
		case -103573613:
			return "MAP_CARD_CAMP_HORSESHOE_FIVE_FINGER_FILLET_LENNY";
		case 1202375449:
			return "MAP_CARD_CAMP_SHADYBELLE_HUNTING_PEARSON";
		case 2038046186:
			return "MAP_CARD_CAMP_CLEMENSPOINT_DOMINOES_TILLY";
		case -839878969:
			return "MAP_CARD_CAMP_CLEMENSPOINT_COACH_ROBBERY_SEAN";
		case -360730635:
			return "MAP_CARD_CAMP_CLEMENSPOINT_COACH_ROBBERY_BILL";
		case 194099983:
			return "MAP_CARD_CAMP_CLEMENSPOINT_FIVE_FINGER_FILLET_MICAH";
		case -1891229662:
			return "MAP_CARD_CAMP_SHADYBELLE_BANK_ROBBERY_CHARLES";
		case -668333238:
			return "MAP_CARD_CAMP_SHADYBELLE_COACH_ROBBERY_MICAH";
		case 99378894:
			return "MAP_CARD_CAMP_SHADYBELLE_COACH_ROBBERY_LENNY";
		case 673012160:
			return "MAP_CARD_CAMP_SHADYBELLE_RUSTLING_UNCLE";
		case -1220302226:
			return "MAP_CARD_CAMP_HORSESHOE_HOME_ROBBERY_JAVIER";
		default:
			break;
	}
	return "";
}

char* func_59(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = uParam1;
	if (iParam0 != -1)
	{
		iVar1 = func_96(iParam0);
		if (iVar1 == 0 || MAP::_0x3F81EA4275D39D6F(iVar1))
		{
			iVar0 = iParam0;
		}
	}
	if (iVar0 == -1)
	{
		return "";
	}
	return MISC::_CREATE_VAR_STRING(0, iVar0);
}

char* func_60(int iParam0)
{
	if (!func_38(iParam0))
	{
		if (MISC::_0xACB7E1418A8B6E32(4) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(4))
		{
			return "FMMC_INV_ALID";
		}
		return "REGION_INV";
	}
	return func_97(((*Global_1888801)[iParam0 /*35*/])->f_22);
}

char* func_61(int iParam0)
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
	return "No District Label!";
}

char* func_62(int iParam0)
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
	return "No State Label!";
}

int func_63(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	else if (iParam0 <= 10)
	{
		return 0;
	}
	else if (iParam0 <= 29)
	{
		return 1;
	}
	else if (iParam0 <= 32)
	{
		return 2;
	}
	else if (iParam0 <= 36)
	{
		return 3;
	}
	else if (iParam0 <= 39)
	{
		return 4;
	}
	else if (iParam0 <= 49)
	{
		return 7;
	}
	else if (iParam0 <= 56)
	{
		return 6;
	}
	else if (iParam0 <= 61)
	{
		return 8;
	}
	else if (iParam0 <= 76)
	{
		return 9;
	}
	else if (iParam0 <= 92)
	{
		return 10;
	}
	else if (iParam0 <= 106)
	{
		return 11;
	}
	else if (iParam0 <= 113)
	{
		return 12;
	}
	else if (iParam0 <= 116)
	{
		return 13;
	}
	else if (iParam0 <= 119)
	{
		return 14;
	}
	else if (iParam0 <= 125)
	{
		return 15;
	}
	else if (iParam0 <= 127)
	{
		return 16;
	}
	return -1;
}

int func_64(int iParam0)
{
	char* sVar0;

	sVar0 = func_98(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sVar0);
}

int func_65(int iParam0)
{
	char cVar0[64];
	char cVar8[64];

	StringCopy(&cVar0, func_98(iParam0), 64);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return 0;
	}
	StringCopy(&cVar8, "MAP_CARD_", 64);
	StringConCat(&cVar8, &cVar0, 64);
	StringConCat(&cVar8, "_DESC", 64);
	return MISC::GET_HASH_KEY(&cVar8);
}

struct<7> func_66(int iParam0)
{
	struct<7> Var0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0);
	return Var0;
}

char* func_67(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0);
	}
	return func_99(MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

var func_68(int iParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, func_100(), 64);
	StringConCat(&cVar0, func_101(iParam0), 64);
	return func_102(cVar0);
}

char* func_69(int iParam0, var uParam1, var uParam2)
{
	char* sVar0;
	int iVar1;

	if (!NETWORK::NETWORK_IS_HANDLE_VALID(uParam1))
	{
		return "Invalid Handle";
	}
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
		default:
			sVar0 = "Unknown Type";
			break;
			sVar0 = NETWORK::_0xB5C4B18B12A2AF23(uParam1, 0);
			break;
		case 1:
			iVar1 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1);
			if (iVar1 < 0)
			{
				sVar0 = NETWORK::_0xCAF4CA2F87779F8F(uParam1, 0);
			}
			else
			{
				sVar0 = func_103(iVar1);
			}
			break;
	}
	return sVar0;
}

var func_70(int iParam0)
{
	if (iParam0 == 255 || iParam0 == PLAYER::NETWORK_PLAYER_ID_TO_INT())
	{
		return NETWORK::_0x32C90CDFAF40514C();
	}
	return Global_1140156[iParam0 /*19*/];
}

char* func_71(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "NM_PLAYLIST_ADVERSARY_MEDIUM";
		case 3:
			return "NM_PLAYLIST_ADVERSARY_LARGE";
		case 4:
			return "NM_PLAYLIST_SPECIAL_MODES_1";
		case 5:
			return "NM_PLAYLIST_SPECIAL_MODES_2";
		case 0:
			return "NM_PLAYLIST_RACE";
		case 6:
			return "NM_PLAYLIST_NOMINATED";
		case 7:
			return "NM_BUCKET_NOMINATED_SERIES_SMALL";
		case 8:
			return "NM_BUCKET_NOMINATED_SERIES_MEDIUM";
		case 9:
			return "NM_BUCKET_NOMINATED_SERIES_LARGE";
		case 11:
			return "NM_PLAYLIST_ORBIS_SERIES_1";
		case 12:
			return "NM_PLAYLIST_ORBIS_SERIES_2";
		case 13:
			return "NM_PLAYLIST_ORBIS_SERIES_3";
		default:
			break;
	}
	return "NM_PLAYLIST_FFA";
}

var func_72(int iParam0)
{
	int iVar0;

	if (func_105(func_104(iParam0)))
	{
		iVar0 = -1100859510;
	}
	else
	{
		iVar0 = -107328778;
	}
	return &(((*Global_1116294)[iParam0 /*44*/])->f_11.f_7[func_106(iVar0, 1)]);
}

char* func_73(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return "BLIP_MG_POKER";
		case 1:
			return "BLIP_MG_BLACKJACK";
		case 2:
			return "BLIP_MG_DOMINOES";
		case 7:
			return "BLIP_MG_FENCE_BUILDING";
		case 4:
			return "BLIP_MG_FIVE_FINGER_FILLET";
		case 5:
			return "BLIP_SUMMER_COW";
		case 6:
			return "BLIP_SUMMER_HORSE";
		case 8:
			return "BLIP_MG_DOMINOES_ALL3S";
		case 9:
			return "BLIP_MG_DOMINOES_ALL5S";
		case 10:
			return "BLIP_MG_DOMINOES_DRAW";
		case 11:
			return "BLIP_MG_FIVE_FINGER_FILLET_BURNOUT";
		case 12:
			return "BLIP_MG_FIVE_FINGER_FILLET_GUTS";
		case 14:
			return "BLIP_PROC_LOANSHARK";
		case 13:
			return "BLIP_AMBIENT_HERD";
		case 15:
			return "BLIP_PROC_BANK";
		case 16:
			return "BLIP_PROC_BOUNTY_POSTER";
		case 17:
			return "BLIP_AMBIENT_COACH";
		case 18:
			return "BLIP_AMBIENT_TRAIN";
		case 19:
			return "BLIP_AMBIENT_RIVERBOAT";
		case 20:
			return "BLIP_SHOP_STORE";
		case 21:
			return "BLIP_SHOP_SHADY_STORE";
		case 22:
			return "BLIP_AMBIENT_QUARTERMASTER";
		case 23:
			return "BLIP_SHOP_GUNSMITH";
		case 24:
			return "BLIP_SHOP_COACH_FENCING";
		case 25:
			return "BLIP_SHOP_DOCTOR";
		case 26:
			return "BLIP_SHOP_TAILOR";
		case 28:
			return "BLIP_SHOP_BLACKSMITH";
		case 29:
			return "BLIP_SHOP_TRAINER";
		case 33:
			return "BLIP_POST_OFFICE";
		case 34:
			return "BLIP_POST_OFFICE_REC";
		case 30:
			return "BLIP_SHOP_TRAIN";
		case 31:
			return "BLIP_SHOP_BARBER";
		case 32:
			return "BLIP_SHOP_BUTCHER";
		case 35:
			return "BLIP_SHOP_TACKLE";
		case 36:
			return "BLIP_SHOP_ANIMAL_TRAPPER";
		case 37:
			return "BLIP_SHOP_HORSE";
		case 38:
			return "BLIP_SHOP_HORSE_FENCING";
		case 39:
			return "BLIP_SHOP_HORSE_SADDLE";
		case 40:
			return "BLIP_AMBIENT_NEWSPAPER";
		case 41:
			return "BLIP_SHOP_MARKET_STALL";
		case 42:
			return "BLIP_SHOP_MARKET_STALL";
		case 43:
			return "BLIP_HOTEL_BED";
		case 44:
			return "BLIP_PHOTO_STUDIO";
		case 27:
			return "BLIP_SALOON";
		case 45:
			return "BLIP_STABLE";
		case 46:
			return "BLIP_PROC_HOME";
		case 47:
			return "BLIP_PROC_HOME_LOCKED";
		case 48:
			return "BLIP_PROC_HOME";
		case 49:
			return "BLIP_AMBIENT_TELEGRAPH";
		case 50:
			return "BLIP_AMBIENT_COACH_TAXI";
		case 51:
			return "BLIP_AMBIENT_THEATRE";
		case 52:
			return "BLIP_REGION_CARAVAN";
		case 65:
			return "BLIP_CAMP_EAT";
		case 66:
			return "BLIP_AMBIENT_TITHING";
		case 67:
			return "BLIP_SHOP_PEARSON";
		case 68:
			return "BLIP_CAMP_HITCH";
		case 69:
			return "BLIP_SUPPLIES_AMMO";
		case 70:
			return "BLIP_SUPPLIES_HEALTH";
		case 71:
			return "BLIP_SUPPLIES_FOOD";
		case 72:
			return "BLIP_MG_POKER";
		case 73:
			return "BLIP_MG_FIVE_FINGER_FILLET";
		case 74:
			return "BLIP_MG_DOMINOES";
		case 75:
			return "BLIP_REGION_HUNTING";
		case 76:
			return "BLIP_MG_FISHING";
		case 77:
			return "BLIP_ROBBERY_COACH";
		case 78:
			return "BLIP_REGION_HUNTING";
		case 79:
			return "BLIP_ROBBERY_BANK";
		case 80:
			return "BLIP_MG_DOMINOES";
		case 81:
			return "BLIP_AMBIENT_HERD";
		case 53:
			return "BLIP_EVENT_APPLESEED";
		case 54:
			return "BLIP_EVENT_CASTOR";
		case 55:
			return "BLIP_EVENT_RAILROAD_CAMP";
		case 56:
			return "BLIP_EVENT_RIGGS_CAMP";
		case 57:
			return "BLIP_REGION_HIDEOUT";
		case 58:
			return "BLIP_PROC_HOME";
		case 59:
			return "BLIP_MG_FISHING";
		case 60:
			return "BLIP_AMBIENT_THEATRE";
		case 61:
			return "BLIP_AMBIENT_THEATRE";
		default:
			return "";
	}
	return "";
}

int func_74(int iParam0)
{
	switch (iParam0)
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
			return 2;
		case 16:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 51:
		case 60:
		case 61:
			return 1;
		case 46:
		case 52:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
			return 3;
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
			return 4;
		case 50:
			return 5;
		default:
			break;
	}
	return 0;
	return 0;
}

int func_75(vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = func_107();
	if (func_38(iVar0))
	{
		if (VOLUME::_0xF256A75210C5C0EB(((*Global_1888801)[iVar0 /*35*/])->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_108(vParam0, iParam3);
}

int func_76(int iParam0)
{
	switch (iParam0)
	{
		case -1894360593:
			return 1784895540;
		case 581819093:
			return 654481153;
		case 687859577:
			return 654481153;
		case -103573613:
			return -1511391406;
		case 1202375449:
			return 1784895540;
		case 2038046186:
			return -1567081107;
		case -839878969:
			return -919476462;
		case -360730635:
			return -919476462;
		case 194099983:
			return -1511391406;
		case -1891229662:
			return -1670940721;
		case -668333238:
			return -919476462;
		case 99378894:
			return -919476462;
		case 673012160:
			return 754620122;
		case -1220302226:
			return 565221344;
		default:
			break;
	}
	return 234527101;
}

char* func_77(int iParam0)
{
	switch (iParam0)
	{
		case 907027518:
			return "ACT_ANY_LABEL";
		case 234527101:
			return "ACT_NONE_LABEL";
		case 1784895540:
			return "ACT_HUNTING_LABEL";
		case -1511391406:
			return "ACT_FFF_CAMP_LABEL";
		case 654481153:
			return "ACT_FISHING_LABEL";
		case -1215120894:
			return "ACT_KIDNAPPING_LABEL";
		case 931703394:
			return "ACT_DRINKSHOOT_CAMP_LABEL";
		case 1193949598:
			return "ACT_SALOON_LABEL";
		case 754620122:
			return "ACT_RUSTLING_LABEL";
		case -2036347356:
			return "ACT_POKER_LABEL";
		case -1341684320:
			return "ACT_POKER_CAMP_LABEL";
		case -919476462:
			return "ACT_COACH_LABEL";
		case -1670940721:
			return "ACT_BANK_LABEL";
		case 380107708:
			return "ACT_TRAIN_LABEL";
		case 565221344:
			return "ACT_HOMEROB_LABEL";
		case -1700356309:
			return "ACT_BLACKJACK_LABEL";
		case 1523333387:
			return "ACT_CRAPS_LABEL";
		case 1744128959:
			return "ACT_HIDEOUT_LABEL";
		case -1567081107:
			return "ACT_DOMINOES_CAMP_LABEL";
		case -1739349092:
			return "ACT_RETURN_LABEL";
		case -301635006:
			return "ACT_MISSION_LABEL";
		default:
			break;
	}
	return "ACT_NONE_LABEL";
}

char* func_78(int iParam0)
{
	switch (iParam0)
	{
		case -1894360593:
			return "CAHT02_DESC";
		case 581819093:
			return "CAFS01_DESC";
		case 687859577:
			return "CAFS02_DESC";
		case -103573613:
			return "CAFFF05_DESC";
		case 1202375449:
			return "CAHT06_DESC";
		case 2038046186:
			return "CADM05_DESC";
		case -839878969:
			return "CACR02_DESC";
		case -360730635:
			return "CACR03_DESC";
		case 194099983:
			return "MGFFF_DESC";
		case -1891229662:
			return "CABR01_DESC";
		case -668333238:
			return "CACR01_DESC";
		case 99378894:
			return "CACR04_DESC";
		case 673012160:
			return "CARS02_DESC";
		case -1220302226:
			return "PHHOM_DESC";
		default:
			break;
	}
	return "";
}

struct<16> func_79(int iParam0)
{
	char cVar0[128];

	switch (iParam0)
	{
		case 105:
			StringCopy(&cVar0, "MAP_CARD_TAXI_RHODES", 128);
			break;
		case 5:
			StringCopy(&cVar0, "MAP_CARD_TAXI_SAINTDENIS", 128);
			break;
		case 76:
			StringCopy(&cVar0, "MAP_CARD_TAXI_VALENTINE", 128);
			break;
		case 26:
			StringCopy(&cVar0, "MAP_CARD_TAXI_STRAWBERRY", 128);
			break;
		case 38:
			StringCopy(&cVar0, "MAP_CARD_TAXI_BLACKWATER", 128);
			break;
		default:
			StringCopy(&cVar0, "MAP_CARD_TAXI_RHODES", 128);
			break;
	}
	return cVar0;
}

int func_80(int iParam0)
{
	if (!func_38(iParam0))
	{
		return 0;
	}
	return func_88(iParam0, 33554432);
}

int func_81()
{
	return Global_1572887->f_12;
}

int func_82(int iParam0, bool bParam1)
{
	switch (func_109(iParam0))
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

int func_83()
{
	return Global_40.f_4283.f_1;
}

int func_84(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	else if (iParam0 <= 10)
	{
		return 0;
	}
	else if (iParam0 <= 29)
	{
		return 1;
	}
	else if (iParam0 <= 32)
	{
		return 2;
	}
	else if (iParam0 <= 36)
	{
		return 3;
	}
	else if (iParam0 <= 39)
	{
		return 4;
	}
	else if (iParam0 <= 49)
	{
		return 7;
	}
	else if (iParam0 <= 56)
	{
		return 6;
	}
	else if (iParam0 <= 61)
	{
		return 8;
	}
	else if (iParam0 <= 76)
	{
		return 9;
	}
	else if (iParam0 <= 92)
	{
		return 10;
	}
	else if (iParam0 <= 106)
	{
		return 11;
	}
	else if (iParam0 <= 113)
	{
		return 12;
	}
	else if (iParam0 <= 115)
	{
		return 13;
	}
	else if (iParam0 <= 119)
	{
		return 14;
	}
	else if (iParam0 <= 125)
	{
		return 15;
	}
	else if (iParam0 <= 127)
	{
		return 16;
	}
	return -1;
}

int func_85(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return -2137625828;
		case 1:
			return 1039226266;
		case 2:
			return 493546894;
		case 3:
			return -2119728378;
		case 4:
			if (!bParam1 || func_81() != -1)
			{
				return -1308265478;
			}
			if (func_49(45))
			{
				return -1308265478;
			}
			else
			{
				return -1738342532;
			}
			break;
		case 5:
			return -1147969487;
		case 6:
			return -1147969487;
		case 7:
			return -1147969487;
		case 8:
			return 537788226;
		case 9:
			return -1391142299;
		case 10:
			return 1178102426;
		case 11:
			return 1608357655;
		case 12:
			if (!bParam1 || func_81() != -1)
			{
				return -650528936;
			}
			if (func_49(45))
			{
				return -650528936;
			}
			else
			{
				return 139139039;
			}
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			if (!bParam1 || func_81() != -1)
			{
				return -877373104;
			}
			if (func_49(45))
			{
				return -877373104;
			}
			else
			{
				return -1618764825;
			}
			break;
	}
	return 0;
}

bool func_86(int iParam0, int iParam1)
{
	if (!func_39(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return (Global_40.f_431[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_42339[iParam0] && iParam1) != 0;
}

bool func_87(int iParam0, int iParam1)
{
	if (!func_46(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return ((Global_40.f_358[iParam0 /*12*/])->f_5 && iParam1) != 0;
	}
	return ((Global_1058888->f_42266[iParam0 /*12*/])->f_5 && iParam1) != 0;
}

bool func_88(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23117[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0 /*11*/] && iParam1) != 0;
}

int func_89(int iParam0)
{
	if (!func_46(iParam0))
	{
		return -1;
	}
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_40.f_358[iParam0 /*12*/]);
	}
	return &(Global_1058888->f_42266[iParam0 /*12*/]);
}

int func_90(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_91(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_40.f_7857[iVar1]), iVar2);
}

var func_92(int iParam0)
{
	char[] cVar0[8];

	if (!func_38(iParam0))
	{
		StringCopy(&cVar0, "UNK", 8);
		return cVar0;
	}
	return ((*Global_1888801)[iParam0 /*35*/])->f_22;
}

char* func_93(int iParam0, int iParam1, vector3 vParam2)
{
	switch (iParam0)
	{
		case 20:
			return "GENERALSTORE";
		case 21:
			return "FENCE";
		case 23:
			return "GUNSMITH";
		case 25:
			return "DOCTOR";
		case 26:
			return "TAILOR";
		case 28:
			return "BLACKSMITH";
		case 33:
			switch (iParam1)
			{
				case 105:
					return "TRAINSTATION";
				default:
					return "DEPOT";
			}
			break;
		case 34:
			return "DEPOT";
		case 30:
			switch (iParam1)
			{
				case 5:
					return "DEPOT";
				default:
					return "TRAINSTATION";
			}
			break;
		case 31:
			return "BARBER";
		case 32:
			return "BUTCHER";
		case 35:
			return "BAITSHOP";
		case 36:
			return "TRAPPER";
		case 37:
			return "HORSESHOP";
		case 38:
			return "HORSESHOP";
		case 40:
			return "NEWSPAPER";
		case 41:
			return "MARKET";
		case 42:
			return "MARKET";
		case 43:
			return "HOTEL";
		case 44:
			return "PHOTOGRAPHER";
		case 51:
			return "MAGICLANTERN";
		case 60:
			return "VAUDEVILLE";
		case 61:
			return "VAUDEVILLE";
		case 50:
			return "STAGECOACH";
		case 27:
			switch (iParam1)
			{
				case 5:
					if (BUILTIN::VDIST(vParam2, 2796f, -1167f, vParam2.z) <= 25f)
					{
						return "SLUMSALOON";
					}
					else
					{
						return "NICESALOON";
					}
					break;
				case 76:
					if (BUILTIN::VDIST(vParam2, -308f, 807.05f, vParam2.z) <= 25f)
					{
						return "SALOON_BARBER";
					}
					else
					{
						return "SALOON2";
					}
					break;
				default:
					return "SALOON";
			}
			break;
		case 16:
			return "BOUNTY";
	}
	return "";
}

int func_94(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_110(*uParam0, 0f, 0f, 0f))
	{
		return 1;
	}
	iVar1 = 0;
	bVar2 = false;
	bVar3 = false;
	vVar4 = { *uParam0 };
	STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
	while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, bParam3) && !bVar2)
	{
		if (iVar1 < iParam2)
		{
			iVar1++;
			vVar4.f_2 = (vVar4.z + IntToFloat(iParam1));
			STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		}
		else
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		iVar1 = 1;
		vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
		STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, bParam3) && !bVar3)
		{
			if (iVar1 < iParam2)
			{
				iVar1++;
				vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
				STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
			}
			else
			{
				bVar3 = true;
			}
		}
	}
	else
	{
		uParam0->f_2 = uVar0;
		return 1;
	}
	if (bVar2 && bVar3)
	{
		return 0;
	}
	uParam0->f_2 = uVar0;
	return 1;
}

char* func_95(int iParam0)
{
	switch (func_111(iParam0))
	{
		case 6:
			return "BEAVERHOLLOW";
		case 2:
			return "CLEMENSPOINT";
		case 0:
			return "COLTER";
		case 4:
			return "GUARMA";
		case 1:
			return "HORSESHOE";
		case 5:
			return "LAKAY";
		case 3:
			return "SHADYBELLE";
		case 7:
			return "PRONGHORN";
	}
	return "";
}

int func_96(int iParam0)
{
	switch (iParam0)
	{
		case -787401661: /* GXTEntry: "Abandoned Mission, Gaptooth Ridge, NA" */
			return 993246734;
		case 1154382595: /* GXTEntry: "Abandoned Trading Post, Roanoke Ridge, NH" */
			return 1352537560;
		case -744066564: /* GXTEntry: "Fire Lookout Tower, Roanoke Ridge, NH" */
			return -1262808306;
		case 1448805167: /* GXTEntry: "Flattened Cabin, Grizzlies, AM" */
			return 1582457845;
		case -1753216046: /* GXTEntry: "Fort Brennand, Roanoke Ridge, NH" */
			return 460210291;
		case -832065774: /* GXTEntry: "Limpany, The Heartlands, NH" */
			return 2021420613;
		case -1942169613: /* GXTEntry: "Meteor House, Roanoke Ridge, NH" */
			return 1195199040;
		case 1307292947: /* GXTEntry: "Oil Derrick, The Heartlands, NH" */
			return -1212881551;
		case 893044669: /* GXTEntry: "Pleasance, Scarlett Meadows, LE" */
			return -2011320133;
		case 1716154100: /* GXTEntry: "Roadside Brothel, Roanoke Ridge, NH" */
			return -1988847961;
		case -1173672830: /* GXTEntry: "The Old Bacchus Place, Hennigan\'s Stead, NA" */
			return 2056389698;
		case -2074284650: /* GXTEntry: "Trading Post, The Heartlands, NH" */
			return -942443338;
		case -2133063188: /* GXTEntry: "Two Crows, Cholla Springs, NA" */
			return 539572870;
		case -769726319: /* GXTEntry: "Mysterious Hill Home, Grizzlies, AM" */
			return 66159563;
		case 863351250: /* GXTEntry: "Witches Cauldron, Grizzlies, AM" */
			return 387869270;
		case -419963911: /* GXTEntry: "Appleseed Timber Co., Big Valley, WE" */
			return -496244122;
		case -619014970: /* GXTEntry: "Castor\'s Ridge, The Heartlands, NH" */
			return -238119963;
		case 538198805: /* GXTEntry: "Central Union Railroad, Roanoke Ridge, NH" */
			return 1028223611;
		case 1557904547: /* GXTEntry: "Central Union Railroad, Roanoke Ridge, NH" */
			return 730222325;
		case 1251481628: /* GXTEntry: "Central Union Railroad, Roanoke Ridge, NH" */
			return -597970767;
		case -828659305: /* GXTEntry: "Fort Riggs Holding Camp, Big Valley, WE" */
			return -732274047;
		case -139400310: /* GXTEntry: "Beaver Hollow, Roanoke Ridge, NH" */
			return -1368676121;
		case 1830267951: /* GXTEntry: "Clemens Point, Scarlett Meadows, LE" */
			return 759314201;
		case -1496551068: /* GXTEntry: "Colter, Grizzlies, AM" */
			return 1826504111;
		case 39999178: /* GXTEntry: "Gaptooth Breach, Gaptooth Ridge, NA" */
			return 1728445882;
		case -103399754: /* GXTEntry: "Hanging Dog Ranch, Big Valley, WE" */
			return -12216052;
		case -1359523911: /* GXTEntry: "Horseshoe Overlook, The Heartlands, NH" */
			return -431488293;
		case -336631570: /* GXTEntry: "Pike\'s Basin, Hennigan\'s Stead, NA" */
			return 1474106589;
		case 866178028: /* GXTEntry: "Shady Belle, Bayou Nwa, LE" */
			return -353968602;
		case 2056953687: /* GXTEntry: "Six Point Cabin, Cumberland Forest, NH" */
			return -918096609;
		case 878474860: /* GXTEntry: "Solomon\'s Folly, Gaptooth Ridge, NA" */
			return 1979340260;
		case 219097977: /* GXTEntry: "Aberdeen Pig Farm, Scarlett Meadows, LE" */
			return 1472232821;
		case -1043500161: /* GXTEntry: "Adler Ranch, Grizzlies, AM" */
			return 462373845;
		case -1902025470: /* GXTEntry: "Carmody Dell, The Heartlands, NH" */
			return -1836330842;
		case 1701820039: /* GXTEntry: "Catfish Jacksons, Scarlett Meadows, LE" */
			return -1150244084;
		case -2034338067: /* GXTEntry: "Chez Porter, Grizzlies, AM" */
			return -1727895786;
		case 1767462106: /* GXTEntry: "Larned Sod, The Heartlands, NH" */
			return -1101810198;
		case 770707682: /* GXTEntry: "Lonnie\'s Shack, Scarlett Meadows, LE" */
			return 2143316225;
		case -1592070727: /* GXTEntry: "Maclean\'s House, Roanoke Ridge, NH" */
			return 121074776;
		case -1521776363: /* GXTEntry: "Painted Sky, Big Valley, WE" */
			return -2086563810;
		case 1544029611: /* GXTEntry: "Ridgewood Farm, Cholla Springs, NA" */
			return -1332669948;
		case 881209616: /* GXTEntry: "Van Horn Mansion, Roanoke Ridge, NH" */
			return 85299473;
		case -1161186391: /* GXTEntry: "Watson\'s Cabin, Big Valley, WE" */
			return -1813267128;
		case -154855189: /* GXTEntry: "Willard\'s Rest, Roanoke Ridge, NH" */
			return 458479023;
		case 1212679502: /* GXTEntry: "Beryl\'s Dream, Big Valley, WE" */
			return -678676588;
		case -969933882: /* GXTEntry: "Black Balsam Rise, Roanoke Ridge, NH" */
			return 1602161184;
		case -1539536559: /* GXTEntry: "Black Bone Forest, Big Valley, WE" */
			return -656861063;
		case -916903901: /* GXTEntry: "Brittlebrush Trawl, Hennigan\'s Stead, NA" */
			return 1735191955;
		case -2126414432: /* GXTEntry: "Broken Tree, Great Plains, WE" */
			return 2073023198;
		case 580715948: /* GXTEntry: "Canebreak Manor, Bluewater Marsh, LE" */
			return -1941572412;
		case -814535426: /* GXTEntry: "Chadwick Farm, The Heartlands, NH" */
			return 215480587;
		case 1987954784: /* GXTEntry: "Clingman, Roanoke Ridge, NH" */
			return 545498183;
		case 320988519: /* GXTEntry: "Cochinay, Tall Trees, WE" */
			return 820139809;
		case 522499758: /* GXTEntry: "Compsons Stead, Scarlett Meadows, LE" */
			return 2063457042;
		case 1082216465: /* GXTEntry: "Copperhead Landing, Bluewater Marsh, LE" */
			return 1006072805;
		case 1247830528: /* GXTEntry: "Cueva Seca, Gaptooth Ridge, NA" */
			return 428613469;
		case -645154787: /* GXTEntry: "Doverhill, Roanoke Ridge, NH" */
			return -161135375;
		case -657053325: /* GXTEntry: "Downes Ranch, The Heartlands, NH" */
			return -1276637644;
		case 1030217084: /* GXTEntry: "Evelyn Miller Camp, Tall Trees, WE" */
			return -960425936;
		case -1821194396: /* GXTEntry: "Face Rock, Scarlett Meadows, LE" */
			return 532401286;
		case -146460093: /* GXTEntry: "Firwood Rise, Cumberland Forest, NH" */
			return -1347759053;
		case 2087258933: /* GXTEntry: "Fishing Spot, Bayou Nwa, LE" */
			return 1542246539;
		case 1922831023: /* GXTEntry: "Greenhollow, Hennigan\'s Stead, NA" */
			return 1740117339;
		case -1472363892: /* GXTEntry: "Guthrie Farm, The Heartlands, NH" */
			return 770074951;
		case 30800579: /* GXTEntry: "Hagen Orchards, Bayou Nwa, LE" */
			return -237206861;
		case -1769528472: /* GXTEntry: "Hill Haven Ranch, Scarlett Meadows, LE" */
			return 1877776161;
		case 1895254880: /* GXTEntry: "Houseboat, Bluewater Marsh, LE" */
			return 1837393665;
		case -1692509313: /* GXTEntry: "Lake Don Julio House, Cholla Springs, NA" */
			return 1603579970;
		case -576782619: /* GXTEntry: "Lone Mule Stead, Big Valley, WE" */
			return -1456731677;
		case 229479634: /* GXTEntry: "Lucky\'s Cabin, The Heartlands, NH" */
			return -1344767066;
		case 1062452343: /* GXTEntry: "Macomb\'s End, Bayou Nwa, LE" */
			return 1092217275;
		case 1350749955: /* GXTEntry: "Merkins Waller, Bayou Nwa, LE" */
			return 1855549007;
		case 1506834348: /* GXTEntry: "Micah\'s Hideout, Grizzlies, AM" */
			return -875696111;
		case 2132554759: /* GXTEntry: "Millesani Claim, Grizzlies, AM" */
			return -91026072;
		case 1016304714: /* GXTEntry: "Mossy Flats, Roanoke Ridge, NH" */
			return 1876184276;
		case 375900073: /* GXTEntry: "Nekoti Rock, Tall Trees, WE" */
			return -876779166;
		case -631265576: /* GXTEntry: "Oddfellow\'s Rest, Cholla Springs, NA" */
			return -1116738159;
		case -291091669: /* GXTEntry: "Old Greenbank Mill, Scarlett Meadows, LE" */
			return 415864829;
		case 1603158849: /* GXTEntry: "Old Tom\'s Blind, Big Valley, WE" */
			return -1408667066;
		case -2035208924: /* GXTEntry: "Pleasance House, Cholla Springs, NA" */
			return -1730421200;
		case 1860552235: /* GXTEntry: "Prinz & Co., Bayou Nwa, LE" */
			return 1374995365;
		case 1987585677: /* GXTEntry: "Radley\'s House, Scarlett Meadows, LE" */
			return -1393093729;
		case -259784188: /* GXTEntry: "Radley\'s Pasture, Scarlett Meadows, LE" */
			return -1623232489;
		case 1477464408: /* GXTEntry: "Rattlesnake Hollow, Cholla Springs, NA" */
			return -1394664008;
		case 1136441188: /* GXTEntry: "Repentance, Rio Bravo, NA" */
			return -325788416;
		case 738939338: /* GXTEntry: "Riley\'s Charge, Cholla Springs, NA" */
			return -1807212021;
		case -1247294802: /* GXTEntry: "Rio del Lobo House, Cholla Springs, NA" */
			return -792566558;
		case 6184171: /* GXTEntry: "Scratching Post, Gaptooth Ridge, NA" */
			return -2089448537;
		case -868607615: /* GXTEntry: "Silent Stead, Gaptooth Ridge, NA" */
			return 82527577;
		case 930788089: /* GXTEntry: "Siltwater Strand, Scarlett Meadows, LE" */
			return -1354901649;
		case 1871224592: /* GXTEntry: "Stillwater Cabin, Hennigan\'s Stead, NA" */
			return -1585921053;
		case 1094048700: /* GXTEntry: "Stilt Shack, Big Valley, WE" */
			return 222265732;
		case -1419869345: /* GXTEntry: "Tanner\'s Reach, Tall Trees, WE" */
			return 1561007383;
		case -1894004139: /* GXTEntry: "Taxidermist House, Big Valley, WE" */
			return 1104975149;
		case 31314838: /* GXTEntry: "The Hanging Rock, Cholla Springs, NA" */
			return 1515744307;
		case -438809735: /* GXTEntry: "The Loft, Grizzlies, AM" */
			return 893855320;
		case 690770514: /* GXTEntry: "Valley View, Big Valley, WE" */
			return 235472255;
		case 126047903: /* GXTEntry: "Venter\'s Place, Cholla Springs, NA" */
			return -1173041902;
		case 1001341519: /* GXTEntry: "Veteran\'s Homestead, Grizzlies, AM" */
			return 326709244;
		case 1704544150: /* GXTEntry: "Wallace Overlook, Big Valley, WE" */
			return -1337880478;
		case 245588937: /* GXTEntry: "Argil Rise, Scarlett Meadows, LE" */
			return 205568929;
		case 199607503: /* GXTEntry: "Baygall Edge, Bayou Nwa, LE" */
			return 276890716;
		case -264897431: /* GXTEntry: "Bear Claw, Tall Trees, WE" */
			return -2110824426;
		case -2000021141: /* GXTEntry: "Cairn Lodge, Grizzlies, AM" */
			return 43681669;
		case 1645047683: /* GXTEntry: "Clawson\'s Rest, Grizzlies, AM" */
			return 562599937;
		case -1164281509: /* GXTEntry: "Crawdad Willies, Bayou Nwa, LE" */
			return 1822876181;
		case 696910142: /* GXTEntry: "Deer Cottage, Roanoke Ridge, NH" */
			return -683043834;
		case -1768736648: /* GXTEntry: "Dodd\'s Bluff, Grizzlies, AM" */
			return 532503220;
		case -930437658: /* GXTEntry: "Dormin Crest, Grizzlies, AM" */
			return 379859357;
		case -1622112934: /* GXTEntry: "Fairvale Shanty, Grizzlies, AM" */
			return 1610646968;
		case -9585484: /* GXTEntry: "Gill Landing, The Heartlands, NH" */
			return 1268001912;
		case -870780939: /* GXTEntry: "Granger\'s Hoggery, The Heartlands, NH" */
			return 653958186;
		case 570617421: /* GXTEntry: "Hani\'s Bethel, The Heartlands, NH" */
			return -1917132299;
		case 230920996: /* GXTEntry: "Huron Glen, Roanoke Ridge, NH" */
			return -134804027;
		case 1071862910: /* GXTEntry: "Lenora View, Big Valley, WE" */
			return 1116308524;
		case 1436995883: /* GXTEntry: "Manito Glade, Roanoke Ridge, NH" */
			return 1625008147;
		case 806217109: /* GXTEntry: "Martha\'s Swain, Grizzlies, AM" */
			return -727372692;
		case 1347794144: /* GXTEntry: "Old Harry Fen, Scarlett Meadows, LE" */
			return 1354284392;
		case -215175141: /* GXTEntry: "Old Trail Rise, Scarlett Meadows, LE" */
			return 1871337449;
		case 359085936: /* GXTEntry: "Osman Grove, Roanoke Ridge, NH" */
			return -1249289544;
		case -1699818764: /* GXTEntry: "Planter\'s Bawn, Grizzlies, AM" */
			return 1714554710;
		case 1499492436: /* GXTEntry: "Reed Cottage, Roanoke Ridge, NH" */
			return -443207523;
		case -793097117: /* GXTEntry: "Ridge View, The Heartlands, NH" */
			return -33677540;
		case 1400897589: /* GXTEntry: "Robard Farm, Scarlett Meadows, LE" */
			return -763271696;
		case 848488661: /* GXTEntry: "Sawbone Clearing, Roanoke Ridge, NH" */
			return 2027689141;
		case -504005310: /* GXTEntry: "Shepherds Rise, Big Valley, WE" */
			return -1484929764;
		case -1099073636: /* GXTEntry: "Swadbass Point, Tall Trees, WE" */
			return -1430883057;
		case 372957665: /* GXTEntry: "Trapper\'s Cabin, Bluewater Marsh, LE" */
			return 2133877879;
		case 1427239788: /* GXTEntry: "Vetter\'s Echo, Big Valley, WE" */
			return -508074447;
		case 1677148641: /* GXTEntry: "Beecher\'s Hope, Great Plains, WE" */
			return -507075109;
		case -425430549: /* GXTEntry: "Butcher Creek, Roanoke Ridge, NH" */
			return 147256338;
		case -61172588: /* GXTEntry: "Coots Chapel, Cholla Springs, NA" */
			return 929640770;
		case 492552869: /* GXTEntry: "Cornwall Kerosene & Tar, The Heartlands, NH" */
			return 648073069;
		case -545967610: /* GXTEntry: "Ewing Basin, Grizzlies, AM" */
			return 653799702;
		case -1999797981: /* GXTEntry: "Grand Korrigan, Lannahechee River" */
			return -296815465;
		case 1613985721: /* GXTEntry: "Grand Korrigan, Lannahechee River" */
			return 1944800674;
		case -120578354: /* GXTEntry: "Pronghorn Ranch, Big Valley, WE" */
			return 221661572;
		default:
			break;
	}
	return 0;
}

char* func_97(var uParam0)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_98(int iParam0)
{
	switch (iParam0)
	{
		case joaat("vanhorn"):
			return "VHT";
		case -473051294:
			return "EMR";
		case joaat("annesburg"):
			return "ANN";
		case joaat("lagras"):
			return "LAG";
		case joaat("rhodes"):
			return "RHO";
		case joaat("strawberry"):
			return "STR";
		case joaat("blackwater"):
			return "BLA";
		case -765540529:
			return "NBX";
		case joaat("valentine"):
			return "VAL";
		case joaat("ARMADILLO"):
			return "AMD";
		case joaat("tumbleweed"):
			return "TBL";
		default:
			break;
	}
	return "";
}

char* func_99(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

char* func_100()
{
	char cVar0[64];

	StringCopy(&cVar0, "share/", 64);
	StringConCat(&cVar0, NETWORK::_0xAC6153A0722F524C(), 64);
	StringConCat(&cVar0, "/pedshots/", 64);
	return func_102(cVar0);
}

char* func_101(int iParam0)
{
	char cVar0[64];

	switch (iParam0)
	{
		case 0:
			StringConCat(&cVar0, "PROFILE_PHOTO", 64);
			break;
		case 1:
			StringConCat(&cVar0, "MISSION_PHOTO", 64);
			break;
	}
	StringConCat(&cVar0, ".jpg", 64);
	return func_102(cVar0);
}

char* func_102(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

var func_103(int iParam0)
{
	return NETWORK::_0x356F9FB0698C1FEB(iParam0, 0);
}

int func_104(int iParam0)
{
	return Global_1116294[iParam0 /*44*/];
}

bool func_105(int iParam0)
{
	return func_114(func_113(func_112(iParam0), joaat("has_been_interacted_with")));
}

int func_106(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1100859510:
			return 0;
		case -107328778:
			return 1;
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

int func_107()
{
	return Global_1894899->f_2;
}

int func_108(vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar0 = func_115(vParam0);
	iVar1 = -1;
	if (Global_1894882[iVar0] > 0)
	{
		iVar2 = (Global_1894882[iVar0] - 1);
		bVar3 = false;
		while (iVar2 >= 0 && !bVar3)
		{
			iVar4 = (*Global_1894065)[iVar0 /*51*/][iVar2];
			if (VOLUME::_DOES_VOLUME_EXIST(((*Global_1888801)[iVar4 /*35*/])->f_3))
			{
				if (VOLUME::_0xF256A75210C5C0EB(((*Global_1888801)[iVar4 /*35*/])->f_3, vParam0))
				{
					switch (((*Global_1888801)[iVar4 /*35*/])->f_20)
					{
						case 5:
							if (!bParam3)
							{
								iVar1 = iVar4;
								bVar3 = true;
							}
							break;
						default:
							iVar1 = iVar4;
							bVar3 = true;
							break;
					}
				}
			}
			iVar2 = (iVar2 - 1);
		}
	}
	if (iVar1 != -1)
	{
	}
	return iVar1;
}

int func_109(int iParam0)
{
	if (!func_50(iParam0))
	{
		return -1;
	}
	return func_116(iParam0);
}

bool func_110(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_111(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 4:
			return 5;
		case 79:
			return 6;
		case 43:
			return 0;
		case 98:
			return 2;
		case 58:
			return 4;
		case 71:
			return 1;
		case 9:
			return 3;
		case 22:
			return 7;
		case 37:
			return 8;
		default:
			break;
	}
	return -1;
}

int func_112(int iParam0)
{
	var uVar0;

	uVar0 = func_117(iParam0);
	return uVar0;
}

struct<2> func_113(int iParam0, int iParam1)
{
	return func_118(iParam1, iParam0);
}

int func_114(var uParam0, var uParam1)
{
	var uVar0;

	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return 0;
	}
	else if (!STATS::STAT_ID_GET_BOOL(&uParam0, &uVar0))
	{
		return 0;
	}
	return uVar0;
}

int func_115(vector3 vParam0)
{
	int iVar0;

	iVar0 = func_119(vParam0, 0f, 0f, 0, 2);
	return func_119(vParam0, ((*Global_1894052)[iVar0 /*3*/])->f_1, ((*Global_1894052)[iVar0 /*3*/])->f_2, Global_1894052[iVar0 /*3*/], 4);
}

int func_116(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_120(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

int func_117(int iParam0)
{
	switch (iParam0)
	{
		case 1100375982:
			return joaat("GFH_WAR_VET");
		case 734354744:
			return joaat("GFH_FLACO_HERNANDEZ");
		case -8716208:
			return joaat("GFH_JOSIAH_TRELAWNY");
		case joaat("joe"):
			return joaat("GFH_JOE");
		case -705903163:
			return joaat("GFH_SEAN_MACQUIRE");
		case joaat("black_belle"):
			return joaat("GFH_BLACK_BELLE");
		case joaat("sadie_adler"):
			return joaat("GFH_SADIE_ADLER");
		case 842749101:
			return joaat("GFH_MAMMA_WATSON");
		case -384872762:
			return joaat("GFH_THOMAS_SKIFF_CAPTAIN");
		case 220113328:
			return joaat("GFH_OBEDIAH_HINTON");
		case 539824333:
			return joaat("GFH_LANGTON");
		case joaat("BONNIE"):
			return joaat("GFH_BONNIE");
		case joaat("SHAKY"):
			return joaat("GFH_SHAKY");
		case -1601260627:
			return joaat("GFH_TRAIN_CLERK_WALLACE");
		default:
			break;
	}
	return 0;
}

struct<2> func_118(int iParam0, int iParam1)
{
	struct<2> Var0;
	struct<2> Var2;

	if (iParam0 == 0)
	{
		return Var2;
	}
	if (iParam1 == 0)
	{
		return Var2;
	}
	Var0 = { func_121(iParam0, iParam1) };
	if (!STATS::_STAT_ID_IS_VALID(&Var0))
	{
		return Var2;
	}
	return Var0;
}

int func_119(struct<2> Param0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
{
	if (Param0 < fParam3)
	{
		if (Param0.f_1 < fParam4)
		{
			return (iParam5 + iParam6);
		}
		else
		{
			return iParam5;
		}
	}
	if (Param0.f_1 < fParam4)
	{
		return (iParam5 + iParam6) + 1;
	}
	return iParam5 + 1;
}

int func_120(int iParam0)
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

struct<2> func_121(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

