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
	struct<530> Local_14 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 1, 1, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 1, 1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1232348144, 0, 0, 0, 5, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1064514355, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1064514355, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1064514355, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1064514355, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1064514355, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1064514355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 } ;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	vector3 vLocal_546 = { 0f, 0f, 0f };
	var uLocal_549 = 0;
	int iLocal_550 = 0;
	int iLocal_551 = 0;
	bool bLocal_552 = false;
	int iLocal_553 = 0;
	int iLocal_554 = 0;
	int iLocal_555 = 0;
	int iLocal_556 = 0;
	int iLocal_557 = 0;
	int iLocal_558 = 0;
	bool bLocal_559 = false;
	int iLocal_560 = 0;
	bool bLocal_561 = false;
	bool bLocal_562 = false;
	bool bLocal_563 = false;
	bool bLocal_564 = false;
	bool bLocal_565 = false;
	bool bLocal_566 = false;
	bool bLocal_567 = false;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	char* sLocal_571 = NULL;
	int iLocal_572 = 0;
	var uLocal_573 = 0;
	int iLocal_574 = 0;
	var uLocal_575 = 0;
	int iLocal_576 = 0;
	int iLocal_577 = 0;
	int iLocal_578 = 0;
	int iLocal_579 = 0;
	int iLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 24;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	bool bLocal_688 = false;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	int iLocal_711 = 0;
	int iLocal_712 = 0;
	int iLocal_713 = 0;
	var uLocal_714 = 0;
#endregion

void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	bLocal_552 = joaat("cs_towncrier");
	iLocal_555 = joaat("p_bell05x");
	iLocal_556 = joaat("p_cs_pamphlet03x");
	iLocal_557 = joaat("p_cs_stackcholera01x");
	sLocal_571 = "spatc_walk";
	func_1(&(Local_14.f_146));
	func_2(&Local_14);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		func_3(&Local_14);
	}
	while (true)
	{
		func_4(&Local_14);
		func_5(&Local_14, Local_14);
		switch (Local_14.f_144)
		{
			case 0:
				if (func_6(&Local_14))
				{
					func_7(&Local_14, 1);
				}
				break;
			case 1:
				if (func_8(&Local_14))
				{
					func_7(&Local_14, 2);
				}
				break;
			case 2:
				if (func_9(&Local_14))
				{
					func_7(&Local_14, 3);
				}
				if (Local_14.f_505 && ENTITY::DOES_ENTITY_EXIST(Local_14.f_3))
				{
					if (Local_14.f_143)
					{
						func_10(&Local_14);
					}
					if (Local_14.f_504)
					{
						func_11(&Local_14);
					}
					else
					{
						func_12(&Local_14);
					}
				}
				break;
			case 3:
				if (Local_14.f_143)
				{
					func_10(&Local_14);
				}
				func_13(&Local_14);
				if ((func_14(&Local_14) || func_15(Local_14, Local_14.f_3, 1, 1)) && Local_14.f_527 == 0)
				{
					if (!func_16(&(Local_14.f_146), 8))
					{
						func_17(&(Local_14.f_146), 8, 0);
					}
				}
				else if (func_16(&(Local_14.f_146), 8))
				{
					func_18(&(Local_14.f_146), 8);
				}
				if ((func_16(&(Local_14.f_146), 2) || (Local_14.f_146.f_353 && func_16(&(Local_14.f_146), 1))) || Local_14.f_146.f_349 != 5)
				{
					if (func_19(Local_14, Local_14.f_1, &(Local_14.f_3), &(Local_14.f_4), &(Local_14.f_529), 0, 1097859072 /* Float: 15f */, 0))
					{
						func_20(&Local_14);
					}
					if (Local_14.f_504)
					{
						func_11(&Local_14);
					}
					else
					{
						func_12(&Local_14);
					}
					func_21(&Local_14);
					func_22(&Local_14);
					if (func_23(&Local_14, 1))
					{
						func_7(&Local_14, 4);
					}
				}
				else if (func_23(&Local_14, 0))
				{
					func_7(&Local_14, 4);
				}
				break;
			case 4:
				func_3(&Local_14);
				break;
		}
		BUILTIN::WAIT(0);
	}
}

void func_1(var uParam0)
{
	uParam0->f_357 = 2626;
	func_25(&(uParam0->f_181));
	func_25(&(uParam0->f_209));
	func_25(&(uParam0->f_237));
	func_25(&(uParam0->f_265));
	func_25(&(uParam0->f_293));
}

void func_2(int iParam0)
{
	func_26();
	func_27();
	iParam0->f_10 = 120;
	func_28(&(iParam0->f_506));
	func_29(&(Local_14.f_11), 1);
	func_30(&(Local_14.f_11), 1);
	func_31(&(Local_14.f_11), 1);
	func_32(&(Local_14.f_11), 0);
	func_33(&(Local_14.f_11), 1, 1, 1);
	func_34(&(Local_14.f_11), 0);
	func_35(&(Local_14.f_11), 0);
	func_36(&(Local_14.f_11), 0);
	func_37(&(Local_14.f_11), 1);
	func_38(&(Local_14.f_11), 1);
	func_39(&(Local_14.f_11), 1);
	func_40(&(Local_14.f_11), 1);
	func_41(&(Local_14.f_11), 1);
	func_42(&(Local_14.f_11), 1);
	func_43(&(Local_14.f_11), 0);
	func_44(&(Local_14.f_11), 1);
	func_45(&(Local_14.f_11), 1);
	func_46(&(Local_14.f_11), 0);
	func_47(&(Local_14.f_11), 1);
	func_48(&Local_14, 1);
}

void func_3(int iParam0)
{
	func_49(iParam0);
	func_50(&(iParam0->f_146));
	ITEMSET::DESTROY_ITEMSET(iParam0->f_104);
	func_51(iParam0->f_102);
	func_51(iParam0->f_105);
	func_52(&(iParam0->f_506));
	func_53(*iParam0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_4(int iParam0)
{
	var uVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_3) && !ENTITY::IS_ENTITY_DEAD(iParam0->f_3))
	{
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iParam0->f_3, 0))
		{
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iParam0->f_3, 0.35f, 0, -1082130432, 0);
		}
		PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(iParam0->f_3, 0, 1);
	}
	if (iLocal_580 != 1 && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam0->f_102, true, 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DROP"), false);
	}
	if (func_54(&uLocal_708) && func_55(&uLocal_708, 2f))
	{
		PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, PLAYER::_0x0139637A3BFF8B6D(Local_14.f_3, &uVar0));
	}
}

void func_5(int iParam0, int iParam1)
{
	if (func_56(iParam0))
	{
		func_3(iParam0);
	}
	if (!func_57(Global_35, 0))
	{
		func_3(iParam0);
	}
	if (func_58(*iParam0, iParam0->f_1, &(iParam0->f_506), iParam0->f_3))
	{
		iParam0->f_527 = 1;
	}
	if (func_59(iParam0))
	{
		if (!func_54(&(iParam0->f_7)))
		{
			func_60(&(iParam0->f_7), 0);
		}
		else if (func_61(&(iParam0->f_7)) > 10f)
		{
			func_62(&(iParam0->f_7));
			func_3(iParam0);
		}
	}
	else if (func_54(&(iParam0->f_7)))
	{
		func_62(&(iParam0->f_7));
	}
}

int func_6(int iParam0)
{
	if (func_63(iParam0))
	{
		iParam0->f_104 = ITEMSET::CREATE_ITEMSET(true);
		return 1;
	}
	return 0;
}

void func_7(int iParam0, int iParam1)
{
	iParam0->f_144 = iParam1;
}

int func_8(int iParam0)
{
	if (func_64(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_9(int iParam0)
{
	if (func_65(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_10(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_3) || !ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	if ((MISC::GET_FRAME_COUNT() % 40) == 0)
	{
		iParam0->f_142 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0->f_3, true, false), ENTITY::GET_ENTITY_COORDS(Global_35, true, false), true);
	}
}

void func_11(int iParam0)
{
	if (((func_66(iParam0) && ENTITY::DOES_ENTITY_EXIST(Global_35)) && !Global_1935630->f_12) && ((VOLUME::_DOES_VOLUME_EXIST(iParam0->f_102) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam0->f_102, true, 0)) || func_67(iParam0)))
	{
		if (func_68(iParam0, iParam0->f_101) > -1)
		{
			if (func_69(iParam0))
			{
				func_70(iParam0->f_41[iParam0->f_101 /*59*/], 0);
				func_71(iParam0->f_41[iParam0->f_101 /*59*/], 0);
				if (iParam0->f_528)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
				}
				func_72(*iParam0, &(iParam0->f_3), &(iParam0->f_134), iParam0->f_135);
				func_73(iParam0, iParam0->f_101, -1);
				if (!func_74(iParam0, 2))
				{
					func_75(&(iParam0->f_3));
					func_76(&((iParam0->f_41[iParam0->f_101 /*59*/])->f_21), 0, 0, 1, 0);
				}
			}
		}
	}
	else
	{
		func_77(iParam0->f_41[iParam0->f_101 /*59*/], 0);
		func_75(&(iParam0->f_3));
		func_71(iParam0->f_41[iParam0->f_101 /*59*/], 0);
		func_76(&((iParam0->f_41[iParam0->f_101 /*59*/])->f_21), 0, 0, 1, 0);
	}
}

void func_12(int iParam0)
{
	if (func_66(iParam0))
	{
		if (func_78(iParam0, iParam0->f_101) > -1)
		{
			if (func_69(iParam0))
			{
				func_70(iParam0->f_41[iParam0->f_101 /*59*/], 0);
				func_75(&(iParam0->f_3));
				func_71(iParam0->f_41[iParam0->f_101 /*59*/], 0);
				func_76(&((iParam0->f_41[iParam0->f_101 /*59*/])->f_21), 0, 0, 1, 0);
				if (iParam0->f_528)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
				}
				func_72(*iParam0, &(iParam0->f_3), &(iParam0->f_134), iParam0->f_135);
				func_73(iParam0, iParam0->f_101, -1);
			}
		}
	}
	else
	{
		func_70(iParam0->f_41[iParam0->f_101 /*59*/], 0);
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_3) && !ENTITY::IS_ENTITY_DEAD(iParam0->f_3))
		{
			MISC::_0xE98D55C5983F2509(iParam0->f_3);
		}
	}
}

void func_13(int iParam0)
{
	bool bVar0;

	if (func_79(iParam0))
	{
		if (iParam0->f_531)
		{
			bVar0 = func_80(&(iParam0->f_11), &(iParam0->f_39), &(iParam0->f_3), &(iParam0->f_530), 1101004800 /* Float: 20f */);
		}
		else
		{
			bVar0 = func_81(iParam0->f_3, 0, &(iParam0->f_11), &(iParam0->f_39), 0, 0);
		}
		if (bVar0)
		{
			if (func_82(iParam0))
			{
				func_17(&(iParam0->f_146), 2, 1);
			}
		}
	}
}

int func_14(int iParam0)
{
	if (!func_83(Global_35, bLocal_566, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_15(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		if (func_84())
		{
			return 1;
		}
	}
	if (!PED::IS_PED_INJURED(bParam1))
	{
		if (BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(bParam1, true, false)) < 18f || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(bParam1))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		if (func_85(0) == 7 || func_86())
		{
			return 1;
		}
	}
	if (func_87(&(((*Global_1396257)[iParam0 /*638*/])->f_626), 1024))
	{
		return 1;
	}
	return 0;
}

bool func_16(var uParam0, int iParam1)
{
	return func_88(uParam0->f_352, iParam1);
}

void func_17(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		uParam0->f_352 = 0;
		func_89(&(uParam0->f_352), iParam1);
	}
	else
	{
		func_89(&(uParam0->f_352), iParam1);
	}
}

void func_18(var uParam0, int iParam1)
{
	func_90(&(uParam0->f_352), iParam1);
}

int func_19(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, float fParam5, float fParam6, bool bParam7)
{
	if (*uParam4)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(*uParam2) || Global_1935630->f_12)
	{
		return 0;
	}
	if (bParam7)
	{
		if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam2))
		{
			(Global_40.f_11623[iParam0 /*8*/])->f_5++;
			(Global_40.f_11623[iParam0 /*8*/])->f_2 = func_91();
			*uParam4 = 1;
			return 1;
		}
	}
	if (fParam5 == 0f)
	{
		if (!func_92(Global_35, *uParam2, fParam6, 1))
		{
			return 0;
		}
	}
	else if (fParam5 > fParam6)
	{
		return 0;
	}
	if (!func_54(uParam3))
	{
		func_93(uParam3, 0f);
	}
	else if (func_61(uParam3) >= 2f)
	{
		if (!func_94((Global_40.f_11623[iParam0 /*8*/])->f_2))
		{
			func_95(iParam0);
			*uParam4 = 1;
			func_62(uParam3);
			return 1;
		}
		else
		{
			func_95(iParam0);
			*uParam4 = 1;
			func_62(uParam3);
			return 1;
		}
	}
	return 0;
}

void func_20(int iParam0)
{
}

void func_21(int iParam0)
{
	if (!func_96(iParam0) || func_97(iParam0->f_134, iParam0->f_136))
	{
		return;
	}
	if (iParam0->f_137 < 2)
	{
		if (func_98(&(iParam0->f_3), 249295937))
		{
			func_99(iParam0);
			func_100(&(iParam0->f_134), iParam0->f_136);
		}
	}
}

void func_22(int iParam0)
{
	if (func_101(iParam0))
	{
		func_102(&(iParam0->f_104), iParam0->f_105, &(iParam0->f_3), &(iParam0->f_106), &(iParam0->f_131), 5000);
	}
}

int func_23(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_103(iParam0))
		{
			return 1;
		}
	}
	func_104(&(iParam0->f_146));
	return 0;
}

int func_24(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return 1;
}

void func_25(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	uParam0->f_2.f_1 = -1;
	uParam0->f_4 = -1;
	uParam0->f_4.f_1 = -1;
	uParam0->f_6 = -1;
	uParam0->f_6.f_1 = -1;
	uParam0->f_8 = -1;
	uParam0->f_8.f_1 = -1;
	uParam0->f_10 = -1;
	uParam0->f_10.f_1 = -1;
	uParam0->f_12 = 0;
	uParam0->f_13 = 0;
	uParam0->f_14 = 0;
	uParam0->f_15 = 0;
	uParam0->f_16 = 0;
	uParam0->f_17 = 0;
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
	uParam0->f_23 = 13725;
	uParam0->f_24 = 13734;
	uParam0->f_25 = 13743;
	uParam0->f_20 = 0;
	uParam0->f_21 = 2;
	uParam0->f_22 = 0.95f;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
}

void func_26()
{
	Local_14 = 2;
	Local_14.f_1 = func_108(2);
	Local_14.f_2 = func_110(Local_14, Local_14.f_1, 9, func_109(Local_14));
	iLocal_553 = iLocal_556;
	iLocal_554 = iLocal_557;
	iLocal_551 = func_110(Local_14, 0, 9, func_109(Local_14));
	if (func_111(iLocal_551))
	{
		iLocal_550 = func_112(iLocal_551);
	}
	vLocal_546 = { func_113(Local_14, Local_14.f_1, ((*Global_1396257)[Local_14 /*638*/])->f_633) };
	func_114();
	func_115(&(Local_14.f_146), 0);
	Local_14.f_102 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vLocal_546, 0f, 0f, 0f, 12.378f, 12.378f, 6.212f, "volTalkTrigger");
	Local_14.f_105 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vLocal_546, 0f, 0f, 0f, 6.378f, 6.378f, 3.212f, "volLookIK");
	Local_14.f_135 = 2;
	Local_14.f_136 = 4;
	Local_14.f_146.f_357 = 18305;
	Local_14.f_528 = 0;
}

void func_27()
{
	bLocal_562 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vLocal_546, 0f, 0f, 0f, 12.378f, 12.378f, 6.212f, "m_volTrigger");
	bLocal_564 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vLocal_546, 0f, 0f, 0f, 11.794f, 11.794f, 13.097f, "m_volSpeechArea");
	bLocal_565 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vLocal_546, 0f, 0f, 0f, 60.561f, 60.561f, 12.56f, "m_volCalloverArea");
	bLocal_563 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vLocal_546, 0f, 0f, 0f, 2.243f, 2.243f, 3.65f, "m_volStayAway");
	bLocal_561 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vLocal_546, 0f, 0f, 0f, 50f, 50f, 50f, "m_volRandomEventBlock");
	bLocal_566 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-3667.189f, -2599.147f, -14.66374f, 0f, 0f, 0f, 108.3022f, 88.25834f, 15.55599f, "m_volGoIdleLimits");
	bLocal_567 = VOLUME::_0x0EB78C2B156635B1(665633627, vLocal_546, 0f, 0f, 0f, 1.85f, 1.85f, 10f);
	VOLUME::_0x5B23DFF8E0948BB2(bLocal_567, 0);
	VOLUME::_0xBE551C2CC421185D(bLocal_567, 1);
}

void func_28(var uParam0)
{
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	uParam0->f_4 = 1;
	uParam0->f_5 = 1;
	uParam0->f_6 = 1;
	uParam0->f_7 = 1;
	uParam0->f_8 = 1;
	uParam0->f_9 = 1;
	uParam0->f_10 = 1;
	uParam0->f_11 = 1.75f;
	uParam0->f_12 = 2.25f;
	uParam0->f_16 = 45000;
}

void func_29(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_117(&(uParam0->f_1), 16384);
	}
	else
	{
		func_118(&(uParam0->f_1), 16384);
	}
}

void func_30(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_117(&(uParam0->f_1), 2048);
	}
	else
	{
		func_118(&(uParam0->f_1), 2048);
	}
}

void func_31(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_118(uParam0, 16);
	}
	else
	{
		func_117(uParam0, 67108864);
		func_117(uParam0, 16);
	}
}

void func_32(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_118(uParam0, 524288);
	}
	else
	{
		func_117(uParam0, 524288);
	}
}

void func_33(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_118(uParam0, 268435456);
	}
	else
	{
		func_117(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_118(uParam0, 1073741824 /* Float: 2f */);
	}
	else
	{
		func_117(uParam0, 1073741824 /* Float: 2f */);
	}
	if (!bParam3)
	{
		func_118(uParam0, 536870912);
	}
	else
	{
		func_117(uParam0, 536870912);
	}
}

void func_34(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_117(&(uParam0->f_1), 131072);
	}
	else
	{
		func_118(&(uParam0->f_1), 131072);
	}
}

void func_35(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_118(uParam0, 4);
	}
	else
	{
		func_117(uParam0, 4);
	}
}

void func_36(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_118(uParam0, 2);
	}
	else
	{
		func_117(uParam0, 2);
	}
}

void func_37(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_117(&(uParam0->f_1), 2);
	}
	else
	{
		func_118(&(uParam0->f_1), 2);
	}
}

void func_38(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_117(&(uParam0->f_1), 8);
	}
	else
	{
		func_118(&(uParam0->f_1), 8);
	}
}

void func_39(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_118(uParam0, 128);
	}
	else
	{
		func_117(uParam0, 128);
	}
}

void func_40(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_118(uParam0, 8);
	}
	else
	{
		func_117(uParam0, 8);
	}
}

void func_41(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_118(uParam0, 32);
	}
	else
	{
		func_117(uParam0, 32);
	}
}

void func_42(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_117(&(uParam0->f_1), 4);
	}
	else
	{
		func_118(&(uParam0->f_1), 4);
	}
}

void func_43(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_117(&(uParam0->f_1), 1024);
	}
	else
	{
		func_118(&(uParam0->f_1), 1024);
	}
}

void func_44(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_117(&(uParam0->f_1), 524288);
	}
	else
	{
		func_118(&(uParam0->f_1), 524288);
	}
}

void func_45(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_118(uParam0, 1048576);
	}
	else
	{
		func_117(uParam0, 1048576);
	}
}

void func_46(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_118(uParam0, 262144);
	}
	else
	{
		func_117(uParam0, 262144);
	}
}

void func_47(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_117(&(uParam0->f_1), 16);
	}
	else
	{
		func_118(&(uParam0->f_1), 16);
	}
}

void func_48(int iParam0, int iParam1)
{
	iParam0->f_143 = iParam1;
}

int func_49(int iParam0)
{
	if (ITEMSET::IS_ITEMSET_VALID(iLocal_713))
	{
		ITEMSET::DESTROY_ITEMSET(iLocal_713);
	}
	if (ITEMSET::IS_ITEMSET_VALID(iLocal_711))
	{
		ITEMSET::DESTROY_ITEMSET(iLocal_711);
	}
	if (ITEMSET::IS_ITEMSET_VALID(iLocal_712))
	{
		ITEMSET::DESTROY_ITEMSET(iLocal_712);
	}
	func_119(0);
	func_120(&uLocal_690);
	func_121(&(Local_14.f_3), &uLocal_689, 161068336, 25f, 1);
	PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "CrierBubble");
	PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "CrierConvo");
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 256, false);
	func_122();
	func_123(Local_14.f_3);
	func_124();
	AUDIO::STOP_PED_SPEAKING(Local_14.f_3, false);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_14.f_3, false);
	if (VOLUME::_DOES_VOLUME_EXIST(bLocal_561))
	{
		func_125(bLocal_561);
	}
	func_51(bLocal_562);
	func_51(bLocal_561);
	func_51(bLocal_565);
	func_51(bLocal_563);
	func_51(bLocal_564);
	func_51(bLocal_566);
	func_51(bLocal_567);
	if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_3))
	{
		PED::SET_PED_CONFIG_FLAG(Local_14.f_3, 153, false);
		if (!ENTITY::IS_ENTITY_DEAD(Local_14.f_3))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_14.f_3));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_558))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_558);
	}
	if (ENTITY::DOES_ENTITY_EXIST(bLocal_559))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&bLocal_559);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_560))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_560);
	}
	TASK::REMOVE_WAYPOINT_RECORDING(sLocal_571);
	return 1;
}

void func_50(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (ANIMSCENE::_0x25557E324489393C(uParam0[iVar0 /*36*/]))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(uParam0[iVar0 /*36*/]);
		}
		iVar0++;
	}
}

void func_51(bool bParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(bParam0))
	{
		VOLUME::_DELETE_VOLUME(bParam0);
	}
}

void func_52(var uParam0)
{
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_18))
	{
		ITEMSET::DESTROY_ITEMSET(uParam0->f_18);
	}
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_19))
	{
		ITEMSET::DESTROY_ITEMSET(uParam0->f_19);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_20))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_20);
	}
	if (func_54(&(uParam0->f_13)))
	{
		func_62(&(uParam0->f_13));
	}
}

void func_53(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
	}
	if (((*Global_1396257)[iParam0 /*638*/])->f_631)
	{
		func_126(0, -1);
	}
	func_127();
	((*Global_1396257)[iParam0 /*638*/])->f_631 = 0;
	Global_1415398->f_2 = (Global_1415398->f_2 - 1);
	Global_1935183->f_28 = 0;
}

bool func_54(var uParam0)
{
	return func_128(*uParam0, 1);
}

int func_55(var uParam0, float fParam1)
{
	if (func_129(uParam0, fParam1))
	{
		func_62(uParam0);
		return 1;
	}
	return 0;
}

int func_56(var uParam0)
{
	return 0;
}

int func_57(bool bParam0, int iParam1)
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
	if (func_88(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(bParam0))
		{
			return 0;
		}
	}
	if (func_88(iVar0, 2))
	{
		if (PED::_0x3AA24CCC0D451379(bParam0))
		{
			return 0;
		}
	}
	if (func_88(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(bParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_88(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(bParam0) && !PED::IS_PED_IN_ANY_VEHICLE(bParam0, false))
		{
			return 0;
		}
	}
	if (func_88(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(bParam0))
		{
			return 0;
		}
	}
	if (func_88(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(bParam0))
		{
			return 0;
		}
	}
	if (func_88(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(bParam0))
		{
			return 0;
		}
	}
	if (func_88(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(bParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_58(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	if ((MISC::GET_FRAME_COUNT() % 10) == 0)
	{
		if (iParam2->f_1)
		{
			if (((func_85(0) == 1 || func_85(0) == 2) || func_85(0) == 8) || func_130(&Global_1935630, 2048))
			{
				func_89(iParam2, 2);
			}
		}
		if (iParam2->f_2)
		{
			if (func_85(0) == 11)
			{
				func_89(iParam2, 4);
			}
		}
		if (iParam2->f_4)
		{
			if (func_85(0) == 6)
			{
				func_89(iParam2, 8);
			}
		}
		if (iParam2->f_5)
		{
			if (Global_1394141->f_1328)
			{
				func_89(iParam2, 16);
			}
		}
	}
	if ((MISC::GET_FRAME_COUNT() % 30) == 0)
	{
		if (iParam2->f_6)
		{
			if (!(func_131(((*(*Global_1396257)[iParam0 /*638*/])[iParam1 /*48*/])->f_19) == 0 && func_131(((*(*Global_1396257)[iParam0 /*638*/])[iParam1 /*48*/])->f_20) == 23))
			{
				iVar0 = func_91();
				iVar1 = ((*(*Global_1396257)[iParam0 /*638*/])[iParam1 /*48*/])->f_19;
				iVar2 = ((*(*Global_1396257)[iParam0 /*638*/])[iParam1 /*48*/])->f_20;
				if (func_131(iVar2) > func_131(iVar1))
				{
					if (func_131(iVar0) > func_131(iVar2) + 1 || func_131(iVar0) < func_131(iVar1))
					{
						func_89(iParam2, 32);
					}
				}
				else if (func_131(iVar0) > func_131(iVar2) + 1 && func_131(iVar0) < func_131(iVar1))
				{
					func_89(iParam2, 32);
				}
			}
		}
		if (iParam2->f_7)
		{
			bVar3 = false;
			if (((*(*Global_1396257)[iParam0 /*638*/])[iParam1 /*48*/])->f_40 != 4)
			{
				if (&((*(*Global_1396257)[iParam0 /*638*/])[iParam1 /*48*/])->f_5[0] != -1 || &((*(*Global_1396257)[iParam0 /*638*/])[iParam1 /*48*/])->f_5[1] != -1)
				{
					if (((func_132(&(((*(*Global_1396257)[iParam0 /*638*/])[iParam1 /*48*/])->f_5[0])) || func_132(&(((*(*Global_1396257)[iParam0 /*638*/])[iParam1 /*48*/])->f_5[1]))) || func_133(&(((*(*Global_1396257)[iParam0 /*638*/])[iParam1 /*48*/])->f_5[0]))) || func_133(&(((*(*Global_1396257)[iParam0 /*638*/])[iParam1 /*48*/])->f_5[1])))
					{
						bVar3 = true;
					}
				}
				if (!bVar3)
				{
					if (!func_134(((*(*Global_1396257)[iParam0 /*638*/])[iParam1 /*48*/])->f_40))
					{
						func_89(iParam2, 64);
					}
				}
			}
		}
		if (iParam2->f_8)
		{
			if (MISC::GET_GAME_TIMER() > iParam2->f_17)
			{
				if (func_135(&uParam3, &(iParam2->f_18), iParam2->f_11, iParam2->f_12) || func_136(&uParam3, &(iParam2->f_20), &(iParam2->f_19), iParam2->f_11, iParam2->f_12, 2048))
				{
					if (!func_54(&(iParam2->f_13)))
					{
						func_93(&(iParam2->f_13), 0f);
					}
					else if (func_137(&(iParam2->f_13)) >= iParam2->f_16)
					{
						func_62(&(iParam2->f_13));
						func_89(iParam2, 512);
					}
					iParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
				else
				{
					if (func_54(&(iParam2->f_13)))
					{
						func_62(&(iParam2->f_13));
					}
					iParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
			}
		}
		if (iParam2->f_9)
		{
			if (func_138())
			{
				func_89(iParam2, 1024);
			}
		}
		if (iParam2->f_10)
		{
			if (func_139())
			{
				func_89(iParam2, 2048);
			}
		}
		if (func_130(&Global_1935630, 16384) || Global_1430231->f_4)
		{
			func_89(iParam2, 128);
		}
		if (func_87(&(((*Global_1396257)[iParam0 /*638*/])->f_626), 2048))
		{
			func_89(iParam2, 256);
		}
	}
	if ((((((((((func_88(*iParam2, 2) || func_88(*iParam2, 4)) || func_88(*iParam2, 8)) || func_88(*iParam2, 16)) || func_88(*iParam2, 32)) || func_88(*iParam2, 64)) || func_88(*iParam2, 128)) || func_88(*iParam2, 256)) || func_88(*iParam2, 512)) || func_88(*iParam2, 1024)) || func_88(*iParam2, 2048))
	{
		return 1;
	}
	return 0;
}

int func_59(int iParam0)
{
	if ((func_140(iParam0) || (func_141(iParam0->f_40, 1) && !func_83(Global_35, ((*(*Global_1396257)[*iParam0 /*638*/])[iParam0->f_1 /*48*/])->f_47, 0, 1))) || (func_142(iParam0->f_10) && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, func_143(iParam0->f_10), true, 0)))
	{
		return 1;
	}
	return 0;
}

void func_60(var uParam0, bool bParam1)
{
	if (bParam1 || !func_54(uParam0))
	{
		func_144(uParam0);
	}
}

float func_61(var uParam0)
{
	if (!func_54(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_145(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_146() - uParam0->f_1);
}

void func_62(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_63(var uParam0)
{
	HUD::_TEXT_DATABASE_REQUEST("SPAH");
	HUD::_TEXT_DATABASE_REQUEST("SPDEF");
	HUD::_TEXT_DATABASE_REQUEST("SPATCAU");
	STREAMING::REQUEST_MODEL(bLocal_552, false);
	STREAMING::REQUEST_MODEL(iLocal_553, false);
	STREAMING::REQUEST_MODEL(iLocal_554, false);
	STREAMING::REQUEST_MODEL(iLocal_555, false);
	TASK::REQUEST_WAYPOINT_RECORDING(sLocal_571);
	func_147(bLocal_561, "SP_ArmadilloTownCrier_Block", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
	POPULATION::_0xB56D41A694E42E86(bLocal_563, 2500607, 0, 0, -1, -1, 10);
	PED::_0xED9582B3DA8F02B4(1);
	return 1;
}

int func_64(var uParam0)
{
	if (!HUD::_TEXT_DATABASE_HAS_LOADED("SPAH"))
	{
		return 0;
	}
	if (!HUD::_TEXT_DATABASE_HAS_LOADED("SPDEF"))
	{
		return 0;
	}
	if (!HUD::_TEXT_DATABASE_HAS_LOADED("SPATCAU"))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(bLocal_552))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_553))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_554))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_555))
	{
		return 0;
	}
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_571))
	{
		return 0;
	}
	if (PED::_0x5C16855277819BBF() != 1)
	{
		return 0;
	}
	return 1;
}

int func_65(var uParam0)
{
	var uVar0;
	vector3 vVar1;

	if ((func_148(&(Local_14.f_3), bLocal_552, &uVar0, vLocal_546, vLocal_546.f_3, 0, 0, 1) && func_149(&iLocal_560, iLocal_555, &uVar0, vLocal_546)) && func_149(&iLocal_558, iLocal_554, &uVar0, vLocal_546))
	{
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_14.f_3, "special_ped_group", 0f);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_14.f_3, true);
		AUDIO::STOP_PED_SPEAKING(Local_14.f_3, true);
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_14.f_3, 0.75f);
		PED::SET_PED_CONFIG_FLAG(Local_14.f_3, 153, true);
		func_150(Local_14.f_3, 2);
		PED::_0x9851DE7AEC10B4E1(ENTITY::GET_ENTITY_COORDS(Local_14.f_3, true, false), 7f, 1, 0);
		vVar1 = { 0f, 0f, 0f };
		PED::_0x7C00CFC48A782DC0(bLocal_562, Local_14.f_3, vVar1, vVar1, 2, 1);
		PED::_0x7C00CFC48A782DC0(bLocal_565, Local_14.f_3, vVar1, vVar1, 2, 1);
		PED::_0x7C00CFC48A782DC0(bLocal_564, Local_14.f_3, vVar1, vVar1, 2, 1);
		PED::_0x7C00CFC48A782DC0(bLocal_563, Local_14.f_3, vVar1, vVar1, 2, 1);
		PED::_0x7C00CFC48A782DC0(Local_14.f_102, Local_14.f_3, vVar1, vVar1, 2, 1);
		PED::_0x7C00CFC48A782DC0(Local_14.f_105, Local_14.f_3, vVar1, vVar1, 2, 1);
		PED::_0x7C00CFC48A782DC0(bLocal_567, Local_14.f_3, vVar1, vVar1, 2, 1);
		func_151(&(Local_14.f_3), &uLocal_689, 161068336, 25f, -1082130432 /* Float: -1f */);
		func_152();
		if (Local_14.f_1 == 0)
		{
			iLocal_580 = 0;
			func_116(&(Local_14.f_146.f_181), func_153(0), func_154(6), &(Local_14.f_146.f_209));
		}
		else
		{
			iLocal_580 = 0;
			func_116(&(Local_14.f_146.f_181), func_153(0), func_154(6), &(Local_14.f_146.f_209));
		}
		func_155(&(Local_14.f_146), 1, 1);
		Local_14.f_504 = 1;
		func_156(&Local_14, 0);
		func_157(&Local_14, 0, 0, "SPD_UC_GRT", "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0);
		func_157(&Local_14, 0, 1, "SPD_UC_ANT", "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0);
		func_159(&Local_14, 0, func_158(3, 0, 0), 0);
		func_160(&Local_14, 0, 0);
		func_89(&(Local_14.f_134), 64);
		func_161(&uLocal_584, Local_14.f_3, "ARM_TOWN_CRIER", 0);
		PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), Local_14.f_3, "SPECIAL_PED_LIGHTWEIGHT_1_1", 0f, 0f, 0f, false, "CrierBubble");
		return 1;
	}
	return 0;
}

int func_66(int iParam0)
{
	if ((func_88(Local_14.f_134, 64) && !func_88(Local_14.f_134, 67108864)) && !func_88(Local_14.f_134, 32768))
	{
		return 1;
	}
	return 0;
}

int func_67(int iParam0)
{
	if (func_162(iParam0) <= 15f)
	{
		return 1;
	}
	return 0;
}

int func_68(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = -1;
	if (iParam1 < 0 || iParam1 >= 1)
	{
		return iVar0;
	}
	iVar1 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_103))
	{
		iVar1 = iParam0->f_103;
	}
	iVar0 = func_163(&(iParam0->f_3), iParam0->f_41[iParam1 /*59*/], 15f, &((iParam0->f_41[iParam1 /*59*/])->f_21), 0f, 2, (iParam0->f_41[iParam1 /*59*/])->f_57, iVar1, (iParam0->f_41[iParam1 /*59*/])->f_56, 0, 0, 2, -1082130432 /* Float: -1f */);
	if (func_164(iParam0))
	{
		func_77(iParam0->f_41[iParam1 /*59*/], 1);
		if (iVar0 > -1)
		{
			(iParam0->f_41[iParam1 /*59*/])->f_58 = iVar0;
		}
		return (iParam0->f_41[iParam1 /*59*/])->f_58;
	}
	else
	{
		func_77(iParam0->f_41[iParam1 /*59*/], 0);
	}
	return iVar0;
}

int func_69(int iParam0)
{
	int iVar0;

	if (!func_88(Local_14.f_134, 524288))
	{
		if (func_165(iParam0, 0, &iVar0))
		{
			func_166();
			func_89(&(Local_14.f_134), 524288);
			func_90(&(Local_14.f_134), 64);
			func_89(&(Local_14.f_134), 67108864);
			func_90(&(Local_14.f_134), 2097152);
			func_17(&(Local_14.f_146), 4, 0);
			func_167(iVar0);
		}
	}
	return 1;
}

void func_70(var uParam0, bool bParam1)
{
	int iVar0;
	char* sVar1;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		sVar1 = func_168((uParam0->f_21[iVar0 /*17*/])->f_5);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			if (bParam1 && !func_169(uParam0->f_21[iVar0 /*17*/], 1, 0))
			{
				func_170(uParam0->f_21[iVar0 /*17*/], bParam1, 0);
			}
			else if (!bParam1 && func_169(uParam0->f_21[iVar0 /*17*/], 1, 0))
			{
				func_170(uParam0->f_21[iVar0 /*17*/], bParam1, 0);
			}
		}
		iVar0++;
	}
}

void func_71(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_62(&(iParam0->f_18));
}

void func_72(int iParam0, var uParam1, var uParam2, var uParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return;
	}
	if (func_97(*uParam2, uParam3))
	{
		return;
	}
	(Global_40.f_11623[iParam0 /*8*/])->f_6++;
	if ((Global_40.f_11623[iParam0 /*8*/])->f_6 == 1 && func_172(func_171(-1342635612)) < 5)
	{
		func_173(func_171(-1342635612), 1);
	}
	(Global_40.f_11623[iParam0 /*8*/])->f_3 = func_91();
	func_100(uParam2, uParam3);
	((*Global_1396257)[iParam0 /*638*/])->f_631 = 1;
}

void func_73(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 >= 1)
	{
		return;
	}
	(iParam0->f_41[iParam1 /*59*/])->f_58 = iParam2;
}

bool func_74(int iParam0, int iParam1)
{
	return func_88(iParam0->f_138, iParam1);
}

void func_75(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297, false);
	}
}

void func_76(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_174(((*uParam0)[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET(uParam0[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_175(&(((*uParam0)[iVar0 /*17*/])->f_6), 1, 1);
					if (bParam2)
					{
						((*uParam0)[iVar0 /*17*/])->f_7 = 0;
						(*uParam0)[iVar0 /*17*/] = 0;
						((*uParam0)[iVar0 /*17*/])->f_5 = "";
						((*uParam0)[iVar0 /*17*/])->f_14 = 0;
						((*uParam0)[iVar0 /*17*/])->f_13 = "";
						((*uParam0)[iVar0 /*17*/])->f_15 = 0;
						((*uParam0)[iVar0 /*17*/])->f_11 = "";
						((*uParam0)[iVar0 /*17*/])->f_12 = "";
					}
				}
				iVar0++;
			}
		}
	}

void func_77(var uParam0, bool bParam1)
{
	int iVar0;
	char* sVar1;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		sVar1 = func_168((uParam0->f_21[iVar0 /*17*/])->f_5);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			if (bParam1 && !func_169(uParam0->f_21[iVar0 /*17*/], 1, 0))
			{
				func_170(uParam0->f_21[iVar0 /*17*/], bParam1, 0);
			}
			else if (!bParam1 && func_169(uParam0->f_21[iVar0 /*17*/], 1, 0))
			{
				func_170(uParam0->f_21[iVar0 /*17*/], bParam1, 0);
			}
		}
		iVar0++;
	}
}

int func_78(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = -1;
	if (iParam1 < 0 || iParam1 >= 1)
	{
		return iVar0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630->f_12)
	{
		return iVar0;
	}
	iVar1 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_103))
	{
		iVar1 = iParam0->f_103;
	}
	if ((VOLUME::_DOES_VOLUME_EXIST(iParam0->f_102) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam0->f_102, true, 0)) || func_67(iParam0))
	{
		func_70(iParam0->f_41[iParam1 /*59*/], 1);
		iVar0 = func_163(&(iParam0->f_3), iParam0->f_41[iParam1 /*59*/], 15f, &((iParam0->f_41[iParam1 /*59*/])->f_21), 0f, 3, (iParam0->f_41[iParam1 /*59*/])->f_57, iVar1, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
		if (iVar0 > -1)
		{
			(iParam0->f_41[iParam1 /*59*/])->f_58 = iVar0;
		}
		return (iParam0->f_41[iParam1 /*59*/])->f_58;
	}
	else
	{
		func_70(iParam0->f_41[iParam1 /*59*/], 0);
	}
	return iVar0;
}

int func_79(var uParam0)
{
	if (!func_88(Local_14.f_134, 32768))
	{
		return 1;
	}
	return 0;
}

int func_80(var uParam0, var uParam1, var uParam2, var uParam3, float fParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam2))
	{
		return 0;
	}
	if (PED::IS_PED_DEAD_OR_DYING(*uParam2, true))
	{
		*uParam1 = 1;
		return 1;
	}
	if (Global_1935630->f_39 > 0 || PED::_0x285D36C5C72B0569(Global_35) <= 1f)
	{
		if (func_81(*uParam2, 0, uParam0, uParam1, 0, 0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (*uParam3 < 0 || *uParam3 > 4)
	{
		*uParam3 = 0;
	}
	switch (*uParam3)
	{
		case 0:
			*uParam3++;
			if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(*uParam2) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(*uParam2)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(*uParam2))
			{
				*uParam1 = 2;
				return 1;
			}
			break;
		case 1:
			*uParam3++;
			if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), *uParam2, 1000))
			{
				*uParam1 = 4;
				return 1;
			}
			break;
		case 2:
			*uParam3++;
			if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), ENTITY::GET_ENTITY_COORDS(*uParam2, false, true), fParam4))
			{
				*uParam1 = 16;
				return 1;
			}
			break;
		case 3:
			*uParam3++;
			if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), ENTITY::GET_ENTITY_COORDS(*uParam2, false, true), fParam4))
			{
				*uParam1 = 16;
				return 1;
			}
			break;
		case 4:
			*uParam3 = 0;
			if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), ENTITY::GET_ENTITY_COORDS(*uParam2, false, true), fParam4))
			{
				*uParam1 = 16;
				return 1;
			}
			break;
	}
	return 0;
}

int func_81(bool bParam0, bool bParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_176(uParam2, 1, iVar0);
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
			if (func_177(bParam0, uParam2))
			{
				*uParam3 = 128;
				func_178(bParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_179(bParam0, uParam2))
				{
					*uParam3 = 8;
					func_178(bParam0, uParam2, *uParam3);
					return 1;
				}
				else if (func_180(bParam0, bParam1, uParam2))
				{
					*uParam3 = 8;
					func_178(bParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_181(bParam0, uParam2))
				{
					*uParam3 = 64;
					func_178(bParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_26 && func_182(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_178(bParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_183(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_184(Global_35, bParam0, uParam2))
					{
						*uParam3 = 4;
						func_178(bParam0, uParam2, *uParam3);
						return 1;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_185(Global_35, bParam0, uParam2))
					{
						*uParam3 = 256;
						func_178(bParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_186(Global_35, bParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_178(bParam0, uParam2, *uParam3);
					return 1;
				}
			}
			else if (func_186(Global_35, bParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_178(bParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_187(bParam0, uParam2))
				{
					*uParam3 = 32;
					func_178(bParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || uParam2->f_12 < 20f)
			{
				if (func_188(&bParam0, uParam2))
				{
					*uParam3 = 4096;
					func_178(bParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_189(uParam2, 4000))
				{
					if ((func_190(bParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_191(uParam2, bParam0)) && func_192(uParam2, bParam0))
					{
						*uParam3 = 2;
						func_178(bParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_190(bParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_191(uParam2, bParam0)) && func_192(uParam2, bParam0))
				{
					*uParam3 = 2;
					func_178(bParam0, uParam2, *uParam3);
					return 1;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_193(bParam0, Global_1935630->f_41))
							{
								func_194();
								*uParam3 = 2;
								func_178(bParam0, uParam2, *uParam3);
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
						if (func_193(bParam0, Global_1935630->f_41))
						{
							func_194();
							*uParam3 = 2;
							func_178(bParam0, uParam2, *uParam3);
							return 1;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_195(uParam2, bParam0) || (uParam2->f_9 > 0 && (func_196() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(bParam0))
					{
						func_194();
						*uParam3 = 2;
						func_178(bParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_197())
					{
						if (func_193(bParam0, Global_1935630->f_42))
						{
							func_194();
							*uParam3 = 2;
							func_178(bParam0, uParam2, *uParam3);
							return 1;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_198(uParam2, bParam0))
			{
				*uParam3 = 1024;
				func_178(bParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_199(bParam0, bParam1, uParam2))
				{
					*uParam3 = 2048;
					func_178(bParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_200(bParam0, uParam2))
					{
						*uParam3 = 8192;
						func_178(bParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_201(bParam0, uParam2))
				{
					*uParam3 = 32768;
					func_178(bParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_202(uParam2, 4000))
				{
					if (func_203(&bParam0, uParam2))
					{
						*uParam3 = 512;
						func_178(bParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_204(bParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_178(bParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(bParam0))
		{
			if (func_205(uParam2, bParam0))
			{
				*uParam3 = 1;
				func_178(bParam0, uParam2, *uParam3);
				return 1;
			}
		}
	}
	return 0;
}

int func_82(var uParam0)
{
	bool bVar0;

	switch (uParam0->f_39)
	{
		case 32:
		case 64:
		case 128:
		case 4096:
		case 8192:
		case 16384:
		case 524288:
			func_89(&(Local_14.f_134), 1073741824 /* Float: 2f */);
			bVar0 = true;
			break;
		case 2:
		case 4:
		case 8:
		case 512:
			bVar0 = true;
			break;
		case 16:
			bVar0 = true;
			break;
		default:
			bVar0 = true;
			break;
	}
	if (bVar0)
	{
		func_89(&(Local_14.f_134), 32768);
		func_90(&(Local_14.f_134), 64);
		func_89(&(Local_14.f_134), 1024);
		func_95(2);
		if (func_206(Local_14.f_3, 1))
		{
			func_207(&Local_14);
		}
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

bool func_83(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (bParam3 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(bParam1))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, bParam1, true, 0);
}

int func_84()
{
	int iVar0;

	if (func_208() == -1)
	{
		if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(5))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (((*Global_1392915)[iVar0 /*12*/])->f_1 != -1)
				{
					if (func_209(((*Global_1392915)[iVar0 /*12*/])->f_4))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		return 0;
	}
	return 0;
}

int func_85(int iParam0)
{
	return (Global_1898164->f_1[iParam0 /*5*/])->f_2;
}

bool func_86()
{
	return Global_1310750->f_16077 != 0;
}

bool func_87(var uParam0, int iParam1)
{
	return func_141(*uParam0, iParam1);
}

bool func_88(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_89(int iParam0, int iParam1)
{
	func_100(iParam0, iParam1);
}

void func_90(var uParam0, int iParam1)
{
	func_210(uParam0, iParam1);
}

int func_91()
{
	return &Global_1899515;
}

int func_92(int iParam0, int iParam1, float fParam2, bool bParam3)
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

void func_93(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_146() - fParam1);
	func_211(uParam0, 1);
	func_212(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_94(int iParam0)
{
	return iParam0 != -15;
}

void func_95(int iParam0)
{
	(Global_40.f_11623[iParam0 /*8*/])->f_5++;
	(Global_40.f_11623[iParam0 /*8*/])->f_2 = func_91();
}

int func_96(int iParam0)
{
	return 0;
}

bool func_97(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_98(var uParam0, int iParam1)
{
	if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
	{
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::_TRIGGER_SONAR_BLIP_2(iParam1, *uParam0);
		return 1;
	}
	return 0;
}

void func_99(int iParam0)
{
}

void func_100(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_101(int iParam0)
{
	if (func_83(Global_35, bLocal_562, 0, 1))
	{
		return 1;
	}
	return 0;
}

void func_102(var uParam0, bool bParam1, var uParam2, int iParam3, var uParam4, int iParam5)
{
	var uVar0[1];
	var uVar2[2];

	if (ENTITY::IS_ENTITY_DEAD(*uParam2))
	{
		return;
	}
	if (Global_1935630->f_12)
	{
		return;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(bParam1))
	{
		return;
	}
	uVar2[0] = Global_35;
	uVar2[1] = *uParam2;
	if (!func_54(uParam4))
	{
		func_93(uParam4, 0f);
	}
	else if (func_137(uParam4) > 1000)
	{
		if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, bParam1, true, 0))
		{
			if (func_213(uParam0, &uVar0, &uVar2, 5, bParam1, 0, 0, -1) > 0)
			{
				iParam3->f_3 = &uVar0[0];
				func_93(uParam4, 0f);
			}
			else
			{
				return;
			}
		}
		else
		{
			iParam3->f_3 = Global_35;
			func_93(uParam4, 0f);
		}
	}
	*iParam3 = { 0f, 0f, 0f };
	iParam3->f_4 = 21030;
	iParam3->f_8 = 4;
	iParam3->f_17 = 2;
	iParam3->f_18 = 1;
	iParam3->f_19 = 3;
	iParam3->f_20 = 1;
	iParam3->f_21 = 3;
	iParam3->f_22 = 1;
	iParam3->f_13 = 3;
	iParam3->f_7 = iParam5;
	_NAMESPACE29::_0x66F9EB44342BB4C5(*uParam2, iParam3);
}

int func_103(int iParam0)
{
	func_214(Local_14.f_3, &(Local_14.f_134), 4096, 2, 0);
	if (func_16(&(Local_14.f_146), 2) || func_215(&Local_14) == 4)
	{
		func_89(&(Local_14.f_134), 1024);
	}
	func_216(Local_14.f_3, &(Local_14.f_134), 4194304, 8388608, 16777216, "SPECIAL_PED_LIGHTWEIGHT_1_1", "SPECIAL_PED_GENERIC_INTERACT_FOCUS", "CrierBubble", "CrierConvo");
	func_217(Local_14.f_134, 33554432, 1, 1);
	if (func_215(&Local_14) == 0)
	{
		if (func_88(Local_14.f_134, 1024) && !func_88(Local_14.f_134, 512))
		{
			func_89(&(Local_14.f_134), 512);
			func_218(1);
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_14.f_3, false);
		AUDIO::STOP_PED_SPEAKING(Local_14.f_3, false);
		return 1;
	}
	else if (!func_88(Local_14.f_134, 512))
	{
		if (!func_83(Global_35, Local_14.f_102, 0, 1))
		{
			if (func_219(&(Local_14.f_3), &uLocal_682, &uLocal_683, &uLocal_686, 4, 0, 7000, 0))
			{
			}
		}
		if (iLocal_580 == 1 && func_86())
		{
			func_218(0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_14.f_3, false);
			AUDIO::STOP_PED_SPEAKING(Local_14.f_3, false);
			return 1;
		}
	}
	if (func_220(117) && !func_88(Local_14.f_134, 33554432))
	{
		func_89(&(Local_14.f_134), 32768);
		func_90(&(Local_14.f_134), 64);
		func_89(&(Local_14.f_134), 1024);
		func_95(2);
		func_89(&(Local_14.f_134), -2147483648);
		func_17(&(Local_14.f_146), 2, 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_3) || ENTITY::IS_ENTITY_DEAD(Local_14.f_3))
	{
		return 1;
	}
	if (Local_14.f_527 && func_221(&(Local_14.f_506)))
	{
		return 1;
	}
	return 0;
}

void func_104(var uParam0)
{
	switch (uParam0->f_349)
	{
		case 1:
			if (func_222(uParam0, &(uParam0->f_181), uParam0->f_349))
			{
				if (func_16(uParam0, 2))
				{
					Stack.Push(&(uParam0->f_293));
					Stack.Push(uParam0->f_181.f_6);
					Stack.Push(uParam0->f_181.f_6.f_1);
					Stack.Push(&(uParam0->f_209));
					Call_Loc(uParam0->f_357);
					Stack.Push(&(uParam0->f_181));
					Stack.Push(uParam0->f_181.f_2);
					Stack.Push(uParam0->f_181.f_2.f_1);
					Stack.Push(&(uParam0->f_209));
					Call_Loc(uParam0->f_357);
					func_155(uParam0, 4, 1);
				}
				else if (uParam0->f_353 && func_16(uParam0, 1))
				{
					Stack.Push(&(uParam0->f_237));
					Stack.Push(uParam0->f_181.f_4);
					Stack.Push(uParam0->f_181.f_4.f_1);
					Stack.Push(&(uParam0->f_209));
					Call_Loc(uParam0->f_357);
					Stack.Push(&(uParam0->f_181));
					Stack.Push(uParam0->f_181.f_2);
					Stack.Push(uParam0->f_181.f_2.f_1);
					Stack.Push(&(uParam0->f_209));
					Call_Loc(uParam0->f_357);
					func_155(uParam0, 2, 1);
				}
				else if (func_16(uParam0, 8))
				{
					Stack.Push(&(uParam0->f_321));
					Stack.Push(uParam0->f_181.f_10);
					Stack.Push(uParam0->f_181.f_10.f_1);
					Stack.Push(&(uParam0->f_209));
					Call_Loc(uParam0->f_357);
					Stack.Push(&(uParam0->f_181));
					Stack.Push(uParam0->f_181.f_2);
					Stack.Push(uParam0->f_181.f_2.f_1);
					Stack.Push(&(uParam0->f_209));
					Call_Loc(uParam0->f_357);
					func_155(uParam0, 5, 0);
				}
				else if (func_16(uParam0, 4))
				{
					Stack.Push(&(uParam0->f_265));
					Stack.Push(uParam0->f_181.f_8);
					Stack.Push(uParam0->f_181.f_8.f_1);
					Stack.Push(&(uParam0->f_209));
					Call_Loc(uParam0->f_357);
					Stack.Push(&(uParam0->f_181));
					Stack.Push(uParam0->f_181.f_2);
					Stack.Push(uParam0->f_181.f_2.f_1);
					Stack.Push(&(uParam0->f_209));
					Call_Loc(uParam0->f_357);
					func_155(uParam0, 3, 1);
				}
				else if (func_16(uParam0, 1))
				{
					Stack.Push(&(uParam0->f_237));
					Stack.Push(uParam0->f_181.f_4);
					Stack.Push(uParam0->f_181.f_4.f_1);
					Stack.Push(&(uParam0->f_209));
					Call_Loc(uParam0->f_357);
					Stack.Push(&(uParam0->f_181));
					Stack.Push(uParam0->f_181.f_2);
					Stack.Push(uParam0->f_181.f_2.f_1);
					Stack.Push(&(uParam0->f_209));
					Call_Loc(uParam0->f_357);
					func_155(uParam0, 2, 1);
				}
				else
				{
					Stack.Push(&(uParam0->f_181));
					Stack.Push(uParam0->f_181.f_2);
					Stack.Push(uParam0->f_181.f_2.f_1);
					Stack.Push(&(uParam0->f_209));
					Call_Loc(uParam0->f_357);
					func_155(uParam0, 1, 1);
				}
			}
			break;
		case 2:
			if (func_222(uParam0, &(uParam0->f_237), uParam0->f_349))
			{
				if (!uParam0->f_353)
				{
					if (func_16(uParam0, 2))
					{
						Stack.Push(&(uParam0->f_293));
						Stack.Push(uParam0->f_237.f_6);
						Stack.Push(uParam0->f_237.f_6.f_1);
						Stack.Push(&(uParam0->f_209));
						Call_Loc(uParam0->f_357);
						if (func_223(uParam0->f_237.f_2))
						{
							Stack.Push(&(uParam0->f_181));
							Stack.Push(uParam0->f_237.f_2);
							Stack.Push(uParam0->f_237.f_2.f_1);
							Stack.Push(&(uParam0->f_209));
							Call_Loc(uParam0->f_357);
						}
						func_155(uParam0, 4, 1);
					}
					else if (func_16(uParam0, 8))
					{
						Stack.Push(&(uParam0->f_321));
						Stack.Push(uParam0->f_237.f_10);
						Stack.Push(uParam0->f_237.f_10.f_1);
						Stack.Push(&(uParam0->f_209));
						Call_Loc(uParam0->f_357);
						if (func_223(uParam0->f_237.f_2))
						{
							Stack.Push(&(uParam0->f_181));
							Stack.Push(uParam0->f_237.f_2);
							Stack.Push(uParam0->f_237.f_2.f_1);
							Stack.Push(&(uParam0->f_209));
							Call_Loc(uParam0->f_357);
						}
						func_155(uParam0, 5, 0);
					}
					else if (func_16(uParam0, 4))
					{
						Stack.Push(&(uParam0->f_265));
						Stack.Push(uParam0->f_237.f_8);
						Stack.Push(uParam0->f_237.f_8.f_1);
						Stack.Push(&(uParam0->f_209));
						Call_Loc(uParam0->f_357);
						if (func_223(uParam0->f_237.f_2))
						{
							Stack.Push(&(uParam0->f_181));
							Stack.Push(uParam0->f_237.f_2);
							Stack.Push(uParam0->f_237.f_2.f_1);
							Stack.Push(&(uParam0->f_209));
							Call_Loc(uParam0->f_357);
						}
						func_155(uParam0, 3, 1);
					}
					else
					{
						if (func_223(uParam0->f_237.f_2))
						{
							Stack.Push(&(uParam0->f_181));
							Stack.Push(uParam0->f_237.f_2);
							Stack.Push(uParam0->f_237.f_2.f_1);
							Stack.Push(&(uParam0->f_209));
							Call_Loc(uParam0->f_357);
						}
						func_155(uParam0, 1, 1);
					}
				}
				else if (uParam0->f_354)
				{
					if (uParam0->f_355)
					{
						func_155(uParam0, 6, 1);
					}
					else
					{
						func_155(uParam0, 0, 1);
					}
				}
				else
				{
					if (func_223(uParam0->f_237.f_2))
					{
						Stack.Push(&(uParam0->f_181));
						Stack.Push(uParam0->f_237.f_2);
						Stack.Push(uParam0->f_237.f_2.f_1);
						Stack.Push(&(uParam0->f_209));
						Call_Loc(uParam0->f_357);
					}
					func_155(uParam0, 1, 1);
				}
			}
			break;
		case 3:
			if (func_222(uParam0, &(uParam0->f_265), uParam0->f_349))
			{
				if (func_16(uParam0, 2))
				{
					Stack.Push(&(uParam0->f_293));
					Stack.Push(uParam0->f_265.f_6);
					Stack.Push(uParam0->f_265.f_6.f_1);
					Stack.Push(&(uParam0->f_209));
					Call_Loc(uParam0->f_357);
					if (func_223(uParam0->f_265.f_2))
					{
						Stack.Push(&(uParam0->f_181));
						Stack.Push(uParam0->f_265.f_2);
						Stack.Push(uParam0->f_265.f_2.f_1);
						Stack.Push(&(uParam0->f_209));
						Call_Loc(uParam0->f_357);
					}
					func_155(uParam0, 4, 1);
				}
				else if (uParam0->f_353 && func_16(uParam0, 1))
				{
					Stack.Push(&(uParam0->f_237));
					Stack.Push(uParam0->f_265.f_4);
					Stack.Push(uParam0->f_265.f_4.f_1);
					Stack.Push(&(uParam0->f_209));
					Call_Loc(uParam0->f_357);
					if (func_223(uParam0->f_265.f_2))
					{
						Stack.Push(&(uParam0->f_181));
						Stack.Push(uParam0->f_265.f_2);
						Stack.Push(uParam0->f_265.f_2.f_1);
						Stack.Push(&(uParam0->f_209));
						Call_Loc(uParam0->f_357);
					}
					func_155(uParam0, 2, 1);
				}
				else if (func_16(uParam0, 8))
				{
					Stack.Push(&(uParam0->f_321));
					Stack.Push(uParam0->f_265.f_10);
					Stack.Push(uParam0->f_265.f_10.f_1);
					Stack.Push(&(uParam0->f_209));
					Call_Loc(uParam0->f_357);
					if (func_223(uParam0->f_265.f_2))
					{
						Stack.Push(&(uParam0->f_181));
						Stack.Push(uParam0->f_265.f_2);
						Stack.Push(uParam0->f_265.f_2.f_1);
						Stack.Push(&(uParam0->f_209));
						Call_Loc(uParam0->f_357);
					}
					func_155(uParam0, 5, 0);
				}
				else if (func_16(uParam0, 1))
				{
					Stack.Push(&(uParam0->f_237));
					Stack.Push(uParam0->f_265.f_4);
					Stack.Push(uParam0->f_265.f_4.f_1);
					Stack.Push(&(uParam0->f_209));
					Call_Loc(uParam0->f_357);
					if (func_223(uParam0->f_265.f_2))
					{
						Stack.Push(&(uParam0->f_181));
						Stack.Push(uParam0->f_265.f_2);
						Stack.Push(uParam0->f_265.f_2.f_1);
						Stack.Push(&(uParam0->f_209));
						Call_Loc(uParam0->f_357);
					}
					func_155(uParam0, 2, 1);
				}
				else
				{
					if (func_223(uParam0->f_265.f_2))
					{
						Stack.Push(&(uParam0->f_181));
						Stack.Push(uParam0->f_265.f_2);
						Stack.Push(uParam0->f_265.f_2.f_1);
						Stack.Push(&(uParam0->f_209));
						Call_Loc(uParam0->f_357);
					}
					func_155(uParam0, 1, 1);
				}
			}
			break;
		case 4:
			if (func_222(uParam0, &(uParam0->f_293), uParam0->f_349))
			{
				if (uParam0->f_355)
				{
					func_155(uParam0, 6, 1);
				}
				else
				{
					func_155(uParam0, 0, 1);
				}
			}
			break;
		case 5:
			if (!uParam0->f_356)
			{
				if (func_222(uParam0, &(uParam0->f_321), uParam0->f_349))
				{
					uParam0->f_356 = 1;
					if (func_16(uParam0, 2))
					{
						Stack.Push(&(uParam0->f_293));
						Stack.Push(uParam0->f_321.f_6);
						Stack.Push(uParam0->f_321.f_6.f_1);
						Stack.Push(&(uParam0->f_209));
						Call_Loc(uParam0->f_357);
						uParam0->f_356 = 0;
						func_155(uParam0, 4, 0);
					}
					else if (uParam0->f_353 && func_16(uParam0, 1))
					{
						Stack.Push(&(uParam0->f_237));
						Stack.Push(uParam0->f_321.f_4);
						Stack.Push(uParam0->f_321.f_4.f_1);
						Stack.Push(&(uParam0->f_209));
						Call_Loc(uParam0->f_357);
						uParam0->f_356 = 0;
						func_155(uParam0, 2, 0);
					}
					else if (func_16(uParam0, 8))
					{
					}
					else
					{
						uParam0->f_356 = 0;
						func_155(uParam0, 1, 0);
					}
				}
			}
			else if (func_16(uParam0, 2))
			{
				Stack.Push(&(uParam0->f_293));
				Stack.Push(uParam0->f_321.f_6);
				Stack.Push(uParam0->f_321.f_6.f_1);
				Stack.Push(&(uParam0->f_209));
				Call_Loc(uParam0->f_357);
				uParam0->f_356 = 0;
				func_155(uParam0, 4, 0);
			}
			else if (uParam0->f_353 && func_16(uParam0, 1))
			{
				Stack.Push(&(uParam0->f_237));
				Stack.Push(uParam0->f_321.f_4);
				Stack.Push(uParam0->f_321.f_4.f_1);
				Stack.Push(&(uParam0->f_209));
				Call_Loc(uParam0->f_357);
				uParam0->f_356 = 0;
				func_155(uParam0, 2, 0);
			}
			else if (func_16(uParam0, 8))
			{
			}
			else
			{
				uParam0->f_356 = 0;
				func_155(uParam0, 1, 0);
			}
			break;
		case 6:
			func_224(uParam0);
			func_155(uParam0, 0, 1);
			break;
		case 0:
			break;
	}
}

int func_105(var uParam0)
{
	return 1;
}

int func_106(var uParam0)
{
	return 1;
}

int func_107(var uParam0)
{
	return 1;
}

var func_108(int iParam0)
{
	return &(Global_40.f_11623[iParam0 /*8*/]);
}

int func_109(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1472102294;
		case 0:
			return 1005861726;
		case 2:
			return -26239347;
		case 3:
			return 813446076;
		case 4:
			return joaat("SPID_BLIND_MAN_CASSIDY");
		case 6:
			return -161610929;
		case 7:
			return 419383665;
		case 5:
			return 1809158435;
		case 8:
			return 698747486;
		case 9:
			return 399829678;
		case 10:
			return -1767525506;
		case 11:
			return 1533318556;
		case 12:
			return 846763582;
		case 13:
			return 974338564;
		case 14:
			return 860809165;
		case 15:
			return -1682386507;
		case 16:
			return 420952075;
		case 17:
			return 1340251064;
		case 18:
			return -1417023286;
		case 19:
			return 237608522;
		case 20:
			return 1487910336;
		case 21:
			return 129290505;
		case 22:
			return 1231488843;
		case 23:
			return -499580940;
		case 24:
			return 1953535365;
		case 25:
			return -315419568;
		case 26:
			return -1708806962;
		case 27:
			return 1405526353;
		case 28:
			return -1903564707;
		case 29:
			return -1132839335;
		default:
			break;
	}
	return 0;
}

int func_110(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar3 = iParam0;
	iVar4 = iParam1;
	if (Global_1572887->f_12 == -1)
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 100;
				iParam3 = MISC::GET_HASH_KEY(&(((*Global_1835011)[iParam0 /*74*/])->f_8));
				break;
			case 2:
				iVar1 = 101;
				iVar2 = 170;
				break;
			case 3:
				iVar1 = 171;
				iVar2 = 190;
				break;
			case 4:
				iVar1 = 191;
				iVar2 = 230;
				break;
			case 5:
				iVar1 = 231;
				iVar2 = 260;
				break;
			case 6:
				iVar1 = 261;
				iVar2 = 290;
				break;
			case 7:
				iVar1 = 291;
				iVar2 = 370;
				break;
			case 8:
				iVar1 = 371;
				iVar2 = 570;
				iParam3 = MISC::GET_HASH_KEY(&(((*Global_1347702)[iParam0 /*49*/])->f_3));
				break;
			case 9:
				iVar1 = 571;
				iVar2 = 650;
				break;
			case 11:
				iVar1 = 651;
				iVar2 = 750;
				break;
			case 10:
				return -1;
			case 12:
				return -1;
			default:
				return -1;
		}
	}
	else
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 200;
				break;
			case 2:
				iVar1 = 201;
				iVar2 = 15700;
				break;
			case 4:
				iVar1 = 15701;
				iVar2 = 16200;
				break;
			case 12:
				iVar1 = 16201;
				iVar2 = 19200;
				break;
			case 10:
				iVar1 = 19201;
				iVar2 = 20000;
				break;
			case 8:
				return -1;
			case 7:
				return -1;
			case 6:
				return -1;
			default:
				return -1;
		}
	}
	if (iVar2 >= func_225())
	{
		iVar2 = func_225();
	}
	iVar5 = func_226(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_227(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_227(iVar6) == 0)
			{
				return func_228(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
		iVar1 = 751;
		iVar2 = 770;
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_227(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_227(iVar6) == 0)
			{
				return func_228(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (&Global_1058888->f_498[iVar0 /*2*/] == iVar5)
			{
				return iVar0;
			}
			iVar0++;
		}
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (&Global_1058888->f_498[iVar0 /*2*/] == 0)
			{
				return func_228(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

bool func_111(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_112(int iParam0)
{
	if (!func_111(iParam0))
	{
		return -1;
	}
	return func_229(iParam0);
}

struct<4> func_113(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;

	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
					switch (iParam2)
					{
						case 0:
							Var0 = { 1992.478f, -370.7957f, 40.79723f };
							Var0.f_3 = 0f;
							break;
						case 1:
							Var0 = { 2015.352f, -327.9001f, 40.61312f };
							Var0.f_3 = 0f;
							break;
						case 2:
							Var0 = { 2048.973f, -308.3546f, 40.71767f };
							Var0.f_3 = 0f;
							break;
						case 3:
							Var0 = { 1988.401f, -327.9046f, 40.52593f };
							Var0.f_3 = 0f;
							break;
						case 4:
							Var0 = { 2043.473f, -299.7293f, 40.62843f };
							Var0.f_3 = 0f;
							break;
					}
					break;
				case 5:
					Var0 = { 2008.711f, -330.3677f, 40.6611f };
					Var0.f_3 = 0f;
					break;
			}
			break;
		case 1:
			Var0 = { 2434.052f, -1224.941f, 45.8519f };
			Var0.f_3 = -118f;
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					Var0 = { -3704.056f, -2618.024f, -14.9192f };
					Var0.f_3 = 23.3026f;
					break;
				case 1:
					switch (iParam2)
					{
						case 0:
							Var0 = { -3644.674f, -2615.925f, -14.8451f };
							Var0.f_3 = 349.841f;
							break;
						case 1:
							Var0 = { -3644.674f, -2615.925f, -14.8451f };
							Var0.f_3 = 349.841f;
							break;
						case 2:
							Var0 = { -3704.056f, -2618.024f, -14.9192f };
							Var0.f_3 = 23.3026f;
							break;
						case 3:
							Var0 = { -3704.056f, -2618.024f, -14.9192f };
							Var0.f_3 = 23.3026f;
							break;
					}
					break;
			}
			break;
		case 3:
			Var0 = { -1791.806f, -422.4149f, 154.8645f };
			Var0.f_3 = 205.9765f;
			break;
		case 4:
			switch (func_230(4))
			{
				case 3:
					Var0 = { 502.0502f, 1284.979f, 181.4051f };
					Var0.f_3 = 114.5882f;
					break;
				case 9:
					Var0 = { 414.5646f, 412.7333f, 107.6299f };
					Var0.f_3 = 352.4153f;
					break;
				case 10:
					Var0 = { 2794.157f, 1406.62f, 82.3539f };
					Var0.f_3 = 65.0766f;
					break;
				case 13:
					Var0 = { -5342.929f, -2947.815f, 0.80696f };
					Var0.f_3 = 20.08f;
					break;
				case 4:
					Var0 = { -1208.554f, -1229.683f, 74.7918f };
					Var0.f_3 = 19.5942f;
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					Var0 = { 888.6843f, 1276.612f, 234.0975f };
					Var0.f_3 = 321.3007f;
					break;
				case 1:
					Var0 = { 865.601f, 1248.82f, 179.7602f };
					Var0.f_3 = 321.3007f;
					break;
			}
			break;
		case 7:
			Var0 = { 2016.26f, 623.0106f, 158.6706f };
			Var0.f_3 = -167.98f;
			break;
		case 5:
			Var0 = { -1502.098f, 2458.125f, 417.4865f };
			Var0.f_3 = 160.0872f;
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					Var0 = { 2547.377f, -1216.046f, 52.3168f };
					Var0.f_3 = 87.45f;
					break;
				case 1:
					Var0 = { 2547.377f, -1216.046f, 52.3168f };
					Var0.f_3 = 87.45f;
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
				case 1:
					Var0 = { -326.079f, 765.2856f, 121.6327f };
					Var0.f_3 = 352.3531f;
					break;
			}
			break;
		case 10:
			Var0 = { 2673.46f, -1391.259f, 47.50816f };
			Var0.f_3 = 316.45f;
			break;
		case 11:
			switch (func_231(11))
			{
				case 105:
					Var0 = { 1423.438f, -1381.801f, 80.8106f };
					Var0.f_3 = 352.6983f;
					return Var0;
				case 38:
					Var0 = { -773.2449f, -1329.082f, 42.6291f };
					Var0.f_3 = 191.3503f;
					return Var0;
				case 126:
					Var0 = { -2378.475f, -2378.621f, 61.1724f };
					Var0.f_3 = 185.2923f;
					return Var0;
				case 5:
					Var0 = { 2563.835f, -1378.423f, 45.1925f };
					Var0.f_3 = 346.5068f;
					return Var0;
					switch (func_230(11))
					{
						case 12:
							Var0 = { -2338.21f, -1271.362f, 147.062f };
							Var0.f_3 = 356.6931f;
							break;
						case 11:
							Var0 = { 1295.802f, -200.3015f, 99.0642f };
							Var0.f_3 = 1.8815f;
							break;
						case 10:
							Var0 = { 2428.864f, 1015.729f, 85.6131f };
							Var0.f_3 = 304.652f;
							break;
						case 15:
							Var0 = { -3157.477f, -2981.991f, 4.6224f };
							Var0.f_3 = 86.239f;
							break;
					}
					Jump @3114; //curOff = 1587
					switch (iParam1)
					{
						case 0:
						case 1:
						case 2:
						case 3:
							Var0 = { 1702.736f, 2168.096f, 318.9191f };
							Var0.f_3 = 180.6669f;
							break;
					}
					Jump @3114; //curOff = 1653
					switch (iParam1)
					{
						case 0:
							Var0 = { -312.9856f, 808.8508f, 117.9822f };
							Var0.f_3 = 197.2573f;
							break;
					}
					Jump @3114; //curOff = 1701
					Var0 = { 1320.745f, -1291.739f, 75.14026f };
					Var0.f_3 = 68.748f;
					Jump @3114; //curOff = 1732
					switch (func_230(15))
					{
						case 7:
						case 9:
							Var0 = { -727.395f, 686.1953f, 58.2244f };
							Var0.f_3 = 177.0399f;
							break;
						case 13:
							Var0 = { -6122.201f, -3803.751f, -35.2455f };
							Var0.f_3 = 181.815f;
							break;
						case 10:
							Var0 = { 2183.348f, 1502.819f, 83.6009f };
							Var0.f_3 = 0f;
							break;
						case 1:
							Var0 = { -1891.265f, -289.866f, 176.457f };
							Var0.f_3 = 266.9828f;
							break;
						default:
							Var0 = { -1891.265f, -289.866f, 176.457f };
							Var0.f_3 = 266.9828f;
							break;
					}
					Jump @3114; //curOff = 1928
					Var0 = { 2636.429f, -1229.537f, 52.3795f };
					Var0.f_3 = 358.7895f;
					Jump @3114; //curOff = 1959
					Var0 = { 2943.588f, 1336.999f, 43.22713f };
					Var0.f_3 = 76.2778f;
					Jump @3114; //curOff = 1990
					switch (iParam1)
					{
						case 0:
							Var0 = { -1812.186f, -367.3066f, 161.8834f };
							Var0.f_3 = 167.5016f;
							break;
						case 1:
							Var0 = { -1807.89f, -371.5062f, 161.8662f };
							Var0.f_3 = 167.5016f;
							break;
						case 2:
							Var0 = { -1800.857f, -357.3966f, 162.9631f };
							Var0.f_3 = 167.5016f;
							break;
					}
					Jump @3114; //curOff = 2112
					switch (iParam2)
					{
						case 0:
							Var0 = { -256.365f, 753.5781f, 116.0851f };
							Var0.f_3 = 284.0192f;
							break;
						case 1:
							Var0 = { -192.9274f, 625.6254f, 113.5786f };
							Var0.f_3 = 145.05f;
							break;
						default:
							Var0 = { -256.365f, 753.5781f, 116.0851f };
							Var0.f_3 = 284.0192f;
							break;
					}
					Jump @3114; //curOff = 2228
					Var0 = { -2725.277f, 709.9713f, 173.0266f };
					Var0.f_3 = 359.6814f;
					Jump @3114; //curOff = 2259
					Var0 = { 2706.282f, 2369.827f, 170.2336f };
					Var0.f_3 = 359.6814f;
					Jump @3114; //curOff = 2290
					switch (iParam1)
					{
						case 0:
							Var0 = { -5511.039f, -2929.552f, -3.278f };
							Var0.f_3 = -131.907f;
							break;
						case 1:
							Var0 = { -5497.666f, -2957.426f, -1.708f };
							Var0.f_3 = 12.912f;
							break;
						case 2:
							Var0 = { -5493.435f, -2940.703f, -1.471f };
							Var0.f_3 = 124.069f;
							break;
					}
					Jump @3114; //curOff = 2412
					switch (func_230(23))
					{
						case 0:
							Var0 = { 1784.089f, -946.648f, 40.7225f };
							Var0.f_3 = 254.7072f;
							break;
						case 2:
							Var0 = { 2445.841f, -463.2956f, 41.1018f };
							Var0.f_3 = 126.5562f;
							break;
					}
					Jump @3114; //curOff = 2501
					switch (iParam1)
					{
						case 0:
							Var0 = { -2233.602f, -2850.517f, 62.7628f };
							Var0.f_3 = 208.7791f;
							break;
						case 1:
							Var0 = { -3198.999f, -2538.554f, 66.5911f };
							Var0.f_3 = 292.1099f;
							break;
						case 2:
							Var0 = { -2927.12f, -2860.494f, 85.7312f };
							Var0.f_3 = 123.2795f;
							break;
						case 3:
							Var0 = { -3267.86f, -3416.677f, 39.5041f };
							Var0.f_3 = 332.5893f;
							break;
						case 4:
							Var0 = { -3572.794f, -3565.222f, 33.505f };
							Var0.f_3 = 260.2986f;
							break;
						case 5:
							Var0 = { -4399.393f, -3606.746f, 48.6452f };
							Var0.f_3 = 348.5519f;
							break;
						case 6:
							Var0 = { -4988.676f, -4060.992f, 1.0884f };
							Var0.f_3 = 163.9257f;
							break;
						case 7:
							Var0 = { -5333.317f, -3534.569f, 2.0586f };
							Var0.f_3 = 306.198f;
							break;
						case 8:
							Var0 = { -5374.994f, -4053.294f, -6.2292f };
							Var0.f_3 = 170.3096f;
							break;
						case 9:
							Var0 = { -5413.131f, -2606.156f, 2.5597f };
							Var0.f_3 = 255.0981f;
							break;
						case 10:
							Var0 = { -4956.249f, -3198.202f, 26.3575f };
							Var0.f_3 = 292.8281f;
							break;
						case 11:
							Var0 = { -4594.695f, -3045.041f, 6.5776f };
							Var0.f_3 = 4.7478f;
							break;
					}
					Jump @3114; //curOff = 2956
					Var0 = { 2368.588f, -859.9452f, 42.0223f };
					Var0.f_3 = 198.7042f;
					Jump @3114; //curOff = 2987
					Var0 = { -345.2797f, 794.6578f, 115.1777f };
					Var0.f_3 = 28.0552f;
					Jump @3114; //curOff = 3018
					Var0 = { 2644.443f, -1207.946f, 52.3368f };
					Var0.f_3 = 199.0776f;
					Jump @3114; //curOff = 3049
					Var0 = { 3025.557f, 1779.699f, 83.2056f };
					Var0.f_3 = 142.8609f;
					Jump @3114; //curOff = 3080
					Var0 = { 2778.292f, -1313.274f, 45.89664f };
					Var0.f_3 = 216.3798f;
					return Var0;
				}

void func_114()
{
	vector3 vVar0;

	vVar0 = { 0f, 0f, vLocal_546.f_3 };
	func_232(Local_14.f_146[0 /*36*/], "script@specialped@pdatc_town_crier@ig@ig_1@pdatc_ig1_callout", vLocal_546, vVar0, "PL_IG1_PDATC_CALLOUT_Idle", 0, 0, 0, 0, 0);
	func_232(Local_14.f_146[1 /*36*/], "script@specialped@pdatc_town_crier@ig@ig_2@pdatc_ig2_cnv1", vLocal_546, vVar0, "pl_IG2_PDATC_CNV1_HeyPartner", 0, 0, 0, 0, 0);
	func_232(Local_14.f_146[2 /*36*/], "script@specialped@pdatc_town_crier@ig@ig_3@pdatc_ig3_cnv2", vLocal_546, vVar0, "pl_IG3_PDATC_CNV2_HeyFriend", 0, 0, 0, 0, 0);
	func_232(Local_14.f_146[3 /*36*/], "script@specialped@pdatc_town_crier@ig@ig_6@pdatc_ig6_linger", vLocal_546, vVar0, "PL_IG1_PDATC_CALLOUT_Idle", 0, 0, 0, 0, 0);
	func_232(Local_14.f_146[4 /*36*/], "script@specialped@pdatc_town_crier@ig@ig_7@pdatc_ig7_aggro", vLocal_546, vVar0, "pl_IG7_PDATC_AGGRO_HeyImTrying", 0, 0, 0, 0, 0);
}

void func_115(var uParam0, int iParam1)
{
	uParam0->f_355 = iParam1;
}

int func_116(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = func_233(uParam1);
	iVar1 = func_234(uParam2);
	func_25(uParam0);
	if (func_235(iVar1))
	{
		func_89(&(Local_14.f_134), 64);
	}
	else
	{
		func_90(&(Local_14.f_134), 64);
	}
	func_90(&(Local_14.f_134), 2097152);
	func_236(iVar1 == 4);
	switch (iVar0)
	{
		case 0:
			switch (iVar1)
			{
				case 0:
					func_237(uParam0, "", func_153(iVar0), func_154(iVar1), func_153(0), func_154(5), 0, "", 0, "", 0, "", "", 2, 1064514355 /* Float: 0.95f */);
					func_239(uParam0, 36949);
					break;
				case 1:
					func_237(uParam0, "", func_153(iVar0), func_154(iVar1), func_153(0), func_154(5), 0, "", 0, "", 0, "", "", 2, 1064514355 /* Float: 0.95f */);
					func_241(uParam0, 37011);
					func_243(uParam0, 37078);
					func_239(uParam0, 37247);
					break;
				case 2:
					func_237(uParam0, "", func_153(iVar0), func_154(iVar1), func_153(0), func_154(5), 0, "", 0, "", 0, "", "", 2, 1064514355 /* Float: 0.95f */);
					func_241(uParam0, 37011);
					func_243(uParam0, 37078);
					func_239(uParam0, 37284);
					break;
				case 3:
					func_237(uParam0, "", func_153(iVar0), func_154(iVar1), func_153(0), func_154(5), 0, "", 0, "", 0, "", "", 2, 1064514355 /* Float: 0.95f */);
					func_243(uParam0, 37321);
					break;
				case 4:
					func_237(uParam0, "PL_IG1_PDATC_CALLOUT_Idle", func_153(iVar0), func_154(iVar1), func_153(0), func_154(6), 0, "", 0, "b_breakout", 0, "S_IG1_PDATC_CALLOUT_Idle", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355 /* Float: 0.95f */);
					func_243(uParam0, 37459);
					break;
				case 5:
					func_237(uParam0, "PL_IG1_PDATC_CALLOUT_Idle", func_153(iVar0), func_154(iVar1), func_153(0), func_154(5), 0, "", 0, "b_breakout", 0, "S_IG1_PDATC_CALLOUT_Idle", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355 /* Float: 0.95f */);
					func_241(uParam0, 37566);
					func_239(uParam0, 36949);
					func_89(&(Local_14.f_134), 2097152);
					break;
				case 6:
					func_237(uParam0, "PL_IG1_PDATC_CALLOUT_Idle", func_153(iVar0), func_154(iVar1), func_153(0), func_154(5), 0, "", 0, "b_breakout", 0, "S_IG1_PDATC_CALLOUT_Idle", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355 /* Float: 0.95f */);
					func_241(uParam0, 37566);
					func_243(uParam0, 37592);
					func_239(uParam0, 36949);
					func_89(&(Local_14.f_134), 2097152);
					break;
				case 7:
					func_237(uParam0, "pl_IG1_PDATC_CALLOUT_Plague", func_153(iVar0), func_154(iVar1), func_153(0), func_154(6), 0, "", 0, "b_breakout", 0, "s_IG1_PDATC_CALLOUT_Plague", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355 /* Float: 0.95f */);
					func_241(uParam0, 37566);
					break;
				case 8:
					func_237(uParam0, "pl_IG1_PDATC_CALLOUT_TownIsSick", func_153(iVar0), func_154(iVar1), func_153(0), func_154(6), 0, "", 0, "b_breakout", 0, "pl_IG1_PDATC_CALLOUT_TownIsSick", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355 /* Float: 0.95f */);
					func_241(uParam0, 37566);
					break;
				case 9:
					func_237(uParam0, "pl_IG1_PDATC_CALLOUT_PlagueInTown", func_153(iVar0), func_154(iVar1), func_153(0), func_154(6), 0, "", 0, "b_breakout", 0, "s_IG1_PDATC_CALLOUT_PlagueInTown", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355 /* Float: 0.95f */);
					func_241(uParam0, 37566);
					break;
				case 10:
					func_237(uParam0, "pl_IG1_PDATC_CALLOUT_StayAway", func_153(iVar0), func_154(iVar1), func_153(0), func_154(6), 0, "", 0, "b_breakout", 0, "s_IG1_PDATC_CALLOUT_StayAway", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355 /* Float: 0.95f */);
					func_241(uParam0, 37566);
					break;
				case 11:
					func_237(uParam0, "pl_IG1_PDATC_CALLOUT_Cholera", func_153(iVar0), func_154(iVar1), func_153(0), func_154(6), 0, "", 0, "b_breakout", 0, "s_IG1_PDATC_CALLOUT_Cholera", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355 /* Float: 0.95f */);
					func_241(uParam0, 37566);
					break;
				case 12:
					func_237(uParam0, "pl_IG1_PDATC_CALLOUT_PlaceUnwell", func_153(iVar0), func_154(iVar1), func_153(0), func_154(6), 0, "", 0, "b_breakout", 0, "s_IG1_PDATC_CALLOUT_PlaceUnwell", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355 /* Float: 0.95f */);
					func_241(uParam0, 37566);
					break;
				case 13:
					func_237(uParam0, "pl_IG1_PDATC_CALLOUT_TownIsSick02", func_153(iVar0), func_154(iVar1), func_153(0), func_154(6), 0, "", 0, "b_breakout", 0, "s_IG1_PDATC_CALLOUT_TownIsSick02", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355 /* Float: 0.95f */);
					func_241(uParam0, 37566);
					break;
				case 14:
					func_237(uParam0, "pl_IG1_PDATC_CALLOUT_GetOuttaHere", func_153(iVar0), func_154(iVar1), func_153(0), func_154(6), 0, "", 0, "b_breakout", 0, "s_IG1_PDATC_CALLOUT_GetOuttaHere", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355 /* Float: 0.95f */);
					func_241(uParam0, 37566);
					break;
				case 15:
					func_237(uParam0, "pl_IG1_PDATC_CALLOUT_BeCareful", func_153(iVar0), func_154(iVar1), func_153(0), func_154(6), 0, "", 0, "b_breakout", 0, "s_IG1_PDATC_CALLOUT_BeCareful", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355 /* Float: 0.95f */);
					func_241(uParam0, 37566);
					break;
				case 16:
					func_237(uParam0, "pl_IG1_PDATC_CALLOUT_GetTheHell", func_153(iVar0), func_154(iVar1), func_153(0), func_154(6), 0, "", 0, "b_breakout", 0, "s_IG1_PDATC_CALLOUT_GetTheHell", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355 /* Float: 0.95f */);
					func_241(uParam0, 37566);
					break;
				case 17:
					func_237(uParam0, "pl_IG1_PDATC_CLLOUT_ArmadilloSick", func_153(iVar0), func_154(iVar1), func_153(0), func_154(6), 0, "", 0, "b_breakout", 0, "s_IG1_PDATC_CLLOUT_ArmadilloSick", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355 /* Float: 0.95f */);
					func_241(uParam0, 37566);
					break;
				case 18:
					func_237(uParam0, "pl_IG1_PDATC_CALLOUT_SicknessTown", func_153(iVar0), func_154(iVar1), func_153(0), func_154(6), 0, "", 0, "b_breakout", 0, "s_IG1_PDATC_CALLOUT_SicknessTown", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355 /* Float: 0.95f */);
					func_241(uParam0, 37566);
					break;
				case 19:
					func_237(uParam0, "pl_IG1_PDATC_CALLOUT_ScarletFever", func_153(iVar0), func_154(iVar1), func_153(0), func_154(6), 0, "", 0, "b_breakout", 0, "s_IG1_PDATC_CALLOUT_ScarletFever", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355 /* Float: 0.95f */);
					func_241(uParam0, 37566);
					break;
				case 20:
					func_237(uParam0, "pl_IG1_PDATC_CALLOUT_ScarletFev02", func_153(iVar0), func_154(iVar1), func_153(0), func_154(6), 0, "", 0, "b_breakout", 0, "s_IG1_PDATC_CALLOUT_ScarletFev02", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355 /* Float: 0.95f */);
					func_241(uParam0, 37566);
					break;
				case 21:
					func_237(uParam0, "pl_IG1_PDATC_CALLOUT_Pamph01Offer", func_153(iVar0), func_154(iVar1), func_153(0), func_154(22), 0, "", 0, "b_breakout", 0, "s_IG1_PDATC_CALLOUT_Pamphlet01", "s_IG1_PDATC_CALLOUT_PamphletIdle", 2, 1064514355 /* Float: 0.95f */);
					func_241(uParam0, 37654);
					func_243(uParam0, 37744);
					func_239(uParam0, 37826);
					func_89(&(Local_14.f_134), 32);
					break;
				case 22:
					func_237(uParam0, "pl_IG1_PDATC_CALLOUT_Pamph01Take", func_153(iVar0), func_154(iVar1), func_153(0), func_154(6), 0, "", 0, "b_breakout", 0, "s_IG1_PDATC_CALLOUT_PamphletTakeInspect", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355 /* Float: 0.95f */);
					func_243(uParam0, 38179);
					func_239(uParam0, 38314);
					break;
				case 23:
					func_237(uParam0, "pl_IG1_PDATC_CALLOUT_Pamph02Offer", func_153(iVar0), func_154(iVar1), func_153(0), func_154(24), 0, "", 0, "b_breakout", 0, "s_IG1_PDATC_CALLOUT_Pamphlet02", "s_IG1_PDATC_CALLOUT_PamphIdle02", 2, 1064514355 /* Float: 0.95f */);
					func_241(uParam0, 37654);
					func_243(uParam0, 37744);
					func_239(uParam0, 37826);
					func_89(&(Local_14.f_134), 32);
					break;
				case 24:
					func_237(uParam0, "pl_IG1_PDATC_CALLOUT_Pamph02Take", func_153(iVar0), func_154(iVar1), func_153(0), func_154(6), 0, "", 0, "b_breakout", 0, "s_IG1_PDATC_CALLOUT_PamphTake02", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355 /* Float: 0.95f */);
					func_243(uParam0, 38179);
					func_239(uParam0, 38314);
					break;
				case 25:
					func_237(uParam0, "pl_IG1_PDATC_CALLOUT_Pamph03Offer", func_153(iVar0), func_154(iVar1), func_153(0), func_154(26), 0, "", 0, "b_breakout", 0, "s_IG1_PDATC_CALLOUT_Pamplet03", "s_IG1_PDATC_CALLOUT_PamphIdle03", 2, 1064514355 /* Float: 0.95f */);
					func_241(uParam0, 37654);
					func_243(uParam0, 37744);
					func_239(uParam0, 37826);
					func_89(&(Local_14.f_134), 32);
					break;
				case 26:
					func_237(uParam0, "pl_IG1_PDATC_CALLOUT_Pamph03Take", func_153(iVar0), func_154(iVar1), func_153(0), func_154(6), 0, "", 0, "b_breakout", 0, "s_IG1_PDATC_CALLOUT_PamphTake03", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355 /* Float: 0.95f */);
					func_243(uParam0, 38179);
					func_239(uParam0, 38314);
					break;
				case 27:
					func_237(uParam0, "pl_IG1_PDATC_CALLOUT_Refuse", func_153(iVar0), func_154(iVar1), func_153(0), func_154(6), 0, "", 0, "b_breakout", 0, "s_IG1_PDATC_Refuse", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355 /* Float: 0.95f */);
					func_243(uParam0, 38410);
					func_239(uParam0, 38314);
					break;
			}
			break;
		case 1:
			switch (iVar1)
			{
				case 28:
					func_237(uParam0, "pl_IG2_PDATC_CNV1_HeyPartner", func_153(iVar0), func_154(iVar1), func_153(0), func_154(6), 0, "", 0, "", 0, "s_IG2_PDATC_CNV1_HeyPartner", "s_IG2_PDATC_CNV1_HeyPartner", 3, 0.85f);
					func_241(uParam0, 37011);
					func_243(uParam0, 38491);
					func_239(uParam0, 38548);
					func_258(1);
					break;
			}
			break;
		case 2:
			switch (iVar1)
			{
				case 29:
					func_237(uParam0, "pl_IG3_PDATC_CNV2_HeyFriend", func_153(iVar0), func_154(iVar1), func_153(0), func_154(6), 0, "", 0, "", 0, "s_IG3_PDATC_CNV2_HeyFriend", "s_IG3_PDATC_CNV2_HeyFriend", 3, 0.85f);
					func_241(uParam0, 37011);
					func_243(uParam0, 38491);
					func_239(uParam0, 38548);
					func_258(1);
					break;
			}
			break;
		case 3:
			switch (iVar1)
			{
				case 30:
					func_237(uParam0, "PL_IG1_PDATC_CALLOUT_Idle", func_153(iVar0), func_154(iVar1), func_153(3), func_154(30), 0, "", 0, "b_breakout", 0, "S_IG1_PDATC_CALLOUT_Idle", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355 /* Float: 0.95f */);
					func_241(uParam0, 37566);
					func_239(uParam0, 36949);
					break;
				case 31:
					func_237(uParam0, "PL_IG6_PDATC_LINGER_AreYouHearing", func_153(iVar0), func_154(iVar1), func_153(3), func_154(30), 0, "", 0, "b_breakout", 0, "S_IG6_PDATC_LINGER_AreYouHearing", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355 /* Float: 0.95f */);
					func_241(uParam0, 37566);
					break;
				case 32:
					func_237(uParam0, "PL_IG6_PDATC_LINGER_DontStayHere", func_153(iVar0), func_154(iVar1), func_153(3), func_154(30), 0, "", 0, "b_breakout", 0, "S_IG6_PDATC_LINGER_DontStayHere", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355 /* Float: 0.95f */);
					func_241(uParam0, 37566);
					break;
				case 33:
					func_237(uParam0, "PL_IG6_PDATC_LINGER_LeaveGo", func_153(iVar0), func_154(iVar1), func_153(3), func_154(30), 0, "", 0, "b_breakout", 0, "S_IG6_PDATC_LINGER_LeaveGo", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355 /* Float: 0.95f */);
					func_241(uParam0, 37566);
					break;
				case 34:
					func_237(uParam0, "PL_IG6_PDATC_LINGER_PleaseSir", func_153(iVar0), func_154(iVar1), func_153(3), func_154(30), 0, "", 0, "b_breakout", 0, "S_IG6_PDATC_LINGER_PleaseSir", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355 /* Float: 0.95f */);
					func_241(uParam0, 37566);
					break;
				case 35:
					func_237(uParam0, "PL_IG6_PDATC_LINGER_UShouldLeave", func_153(iVar0), func_154(iVar1), func_153(3), func_154(30), 0, "", 0, "b_breakout", 0, "S_IG6_PDATC_LINGER_UShouldLeave", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355 /* Float: 0.95f */);
					func_241(uParam0, 37566);
					break;
			}
			break;
		case 4:
			if (func_88(Local_14.f_134, 262144))
			{
				switch (iVar1)
				{
					case 36:
						func_237(uParam0, "pl_IG7_PDATC_AGGRO_HeyImTrying", func_153(iVar0), func_154(iVar1), func_153(-1), func_154(-1), 0, "", 0, "", 0, "s_IG7_PDATC_AGGRO_HeyImTrying", "s_IG7_PDATC_AGGRO_HeyImTrying", 3, 0.95f);
						func_241(uParam0, 38750);
						break;
					case 37:
						func_237(uParam0, "pl_IG7_PDATC_AGGRO_TheFeversTaken", func_153(iVar0), func_154(iVar1), func_153(-1), func_154(-1), 0, "", 0, "", 0, "s_IG7_PDATC_AGGRO_TheFeversTaken", "s_IG7_PDATC_AGGRO_TheFeversTaken", 3, 0.95f);
						func_241(uParam0, 38750);
						break;
					case 38:
						func_237(uParam0, "pl_IG7_PDATC_AGGRO_ThisIsTheThank", func_153(iVar0), func_154(iVar1), func_153(-1), func_154(-1), 0, "", 0, "", 0, "s_IG7_PDATC_AGGRO_ThisIsTheThank", "s_IG7_PDATC_AGGRO_TheFeversTaken", 3, 0.95f);
						func_241(uParam0, 38750);
						break;
				}
			}
			else
			{
				func_237(uParam0, "", func_153(-1), func_154(-1), func_153(-1), func_154(-1), 0, "", 0, "b_breakout", 1, "", "", 3, 1064514355 /* Float: 0.95f */);
				func_241(uParam0, 38750);
			}
			break;
	}
	if ((func_223(uParam1) && func_260(uParam2)) && iVar1 < 36)
	{
		func_261(uParam0, func_153(0), func_154(5));
		if (func_262(iVar1))
		{
			if (!func_263())
			{
				if (Local_14.f_1 == 0)
				{
					func_264(uParam0, func_153(2), func_154(29));
				}
				else
				{
					func_264(uParam0, func_153(1), func_154(28));
				}
			}
			else if (!func_88(Local_14.f_134, 32) && !func_265())
			{
				func_266(uParam0, 1);
			}
		}
	}
	return 0;
}

void func_117(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_118(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_119(bool bParam0)
{
	bool bVar0;

	bVar0 = func_267();
	if (ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		if (bParam0)
		{
			PATHFIND::_0x6DAD6630AE4A74CB(bVar0, 1);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Global_35, bVar0, true);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(bVar0, Global_35, true);
		}
		else
		{
			PATHFIND::_0x6DAD6630AE4A74CB(bVar0, 0);
		}
	}
}

void func_120(var uParam0)
{
	if (uParam0->f_3)
	{
		if (func_174(uParam0->f_5))
		{
			func_175(&(uParam0->f_5), 1, 1);
		}
		if (func_174(uParam0->f_6))
		{
			func_175(&(uParam0->f_6), 1, 1);
		}
		*uParam0 = 0;
		uParam0->f_1 = 0;
		uParam0->f_9 = 0;
		uParam0->f_11 = 0;
		uParam0->f_12 = 0;
		uParam0->f_10 = 0;
		uParam0->f_16 = 0f;
		uParam0->f_17 = 0f;
		uParam0->f_7 = "";
		uParam0->f_8 = "";
		uParam0->f_3 = 0;
		uParam0->f_4 = 0;
		uParam0->f_13 = -1;
		if (uParam0->f_2 != 0)
		{
			GRAPHICS::ANIMPOSTFX_STOP("MissionChoice");
		}
		uParam0->f_2 = 0;
		AUDIO::_0x9428447DED71FC7E("player_decision_moment_scenes");
		HUD::_0x6095358C4142932A(uParam0->f_15);
	}
}

void func_121(var uParam0, var uParam1, int iParam2, float fParam3, bool bParam4)
{
	if (bParam4)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			return;
		}
		if (!EVENT::IS_SHOCKING_EVENT_IN_SPHERE(iParam2, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), fParam3))
		{
			return;
		}
	}
	EVENT::REMOVE_SHOCKING_EVENT(*uParam1);
}

void func_122()
{
	func_268(&(Local_14.f_3), Local_14.f_41[0 /*59*/], &((Local_14.f_41[0 /*59*/])->f_21), 1, 1);
}

void func_123(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0) || ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return;
	}
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), bParam0, 7, 0, true);
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), bParam0, 3, 2, true);
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), bParam0, 4, 2, true);
}

void func_124()
{
	if (HUD::IS_RADAR_HIDDEN())
	{
		MAP::DISPLAY_RADAR(true);
	}
	if (PED::GET_PED_CONFIG_FLAG(Global_35, 174, true))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 174, false);
	}
}

void func_125(bool bParam0)
{
	vector3 vVar0;

	if (!VOLUME::_DOES_VOLUME_EXIST(bParam0))
	{
		return;
	}
	vVar0 = { VOLUME::_0xF70F00013A62F866(bParam0) };
	func_269(vVar0, 0);
}

void func_126(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_270(&Global_0, 8);
	}
	if (!func_271() || func_208() != -1)
	{
		return;
	}
	func_270(&Global_0, 1);
}

void func_127()
{
	AUDIO::_0x9428447DED71FC7E("special_ped_scenes");
}

bool func_128(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_129(var uParam0, float fParam1)
{
	if (!func_54(uParam0))
	{
		return 0;
	}
	if (func_61(uParam0) > fParam1)
	{
		return 1;
	}
	return 0;
}

bool func_130(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_131(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_132(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_209(((*Global_1835011)[iParam0 /*74*/])->f_1);
}

int func_133(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_272(((*Global_1835011)[iParam0 /*74*/])->f_1);
}

int func_134(int iParam0)
{
	int iVar0;

	iVar0 = func_273();
	switch (iParam0)
	{
		case 0:
			switch (iVar0)
			{
				case joaat("highpressure"):
				case joaat("sunny"):
					return 1;
				default:
					return 0;
			}
			break;
		case 1:
			switch (iVar0)
			{
				case joaat("overcast"):
				case joaat("highpressure"):
				case joaat("overcastdark"):
				case joaat("clouds"):
				case joaat("sunny"):
					return 1;
				default:
					return 0;
			}
			break;
		case 2:
			switch (iVar0)
			{
				case joaat("drizzle"):
				case joaat("overcast"):
				case joaat("fog"):
				case joaat("highpressure"):
				case joaat("overcastdark"):
				case joaat("snowlight"):
				case joaat("clouds"):
				case joaat("misty"):
				case joaat("sunny"):
				case joaat("snowclearing"):
					return 1;
				default:
					return 0;
			}
			break;
		case 3:
			switch (iVar0)
			{
				case joaat("drizzle"):
				case joaat("thunder"):
				case joaat("overcast"):
				case joaat("fog"):
				case joaat("shower"):
				case joaat("snow"):
				case joaat("highpressure"):
				case joaat("sleet"):
				case joaat("overcastdark"):
				case joaat("clouds"):
				case joaat("rain"):
				case joaat("misty"):
				case joaat("sunny"):
				case joaat("snowclearing"):
					return 1;
				default:
					return 0;
			}
			break;
		case 4:
			return 1;
		case 5:
			switch (iVar0)
			{
				case joaat("fog"):
				case joaat("misty"):
					return 1;
			}
			break;
	}
	return 0;
}

int func_135(var uParam0, int iParam1, float fParam2, int iParam3)
{
	vector3 vVar0;
	vector3 vVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) + vVar0 * Vector(fParam2, fParam2, fParam2) };
	if (func_274(iParam1, vVar3, iParam3))
	{
		return 1;
	}
	return 0;
}

int func_136(var uParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5)
{
	float fVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(*uParam1))
		{
			POPULATION::_0x74C2B3DC0B294102(*uParam1);
			POPULATION::_0xA1CFB35069D23C23(*uParam1);
			VOLUME::_DELETE_VOLUME(*uParam1);
		}
		return 0;
	}
	vVar2 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0) };
	vVar5 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) + vVar2 * Vector(fParam3, fParam3, fParam3) };
	if (!func_275(uParam2, &iVar1, vVar5, fParam3, fParam4))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(*uParam1))
		{
			POPULATION::_0x74C2B3DC0B294102(*uParam1);
			POPULATION::_0xA1CFB35069D23C23(*uParam1);
			VOLUME::_DELETE_VOLUME(*uParam1);
		}
		return 0;
	}
	else
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(*uParam1))
		{
			fVar0 = (fParam4 + 1f);
			*uParam1 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar5, 0f, 0f, 0f, fVar0, fVar0, fVar0, "SPDClearWagonsMount");
			POPULATION::_0xB56D41A694E42E86(*uParam1, iParam5 | 2228255, 0, 0, -1, -1, 10);
			POPULATION::_0x18262CAFEBB5FBE1(*uParam1, iParam5, 0, 0, -1, -1, 0);
		}
		vVar8 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) };
		if (!func_206(iVar1, 0))
		{
			func_276(&iVar1, vVar8, 1083179008 /* Float: 4.5f */);
		}
		return 1;
	}
	return 0;
}

int func_137(var uParam0)
{
	if (!func_54(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000f));
	}
	if (func_145(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_196() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

bool func_138()
{
	return Global_1392040->f_6;
}

int func_139()
{
	if (Global_1914319->f_18941.f_17)
	{
		return 1;
	}
	return 0;
}

int func_140(int iParam0)
{
	return 0;
}

bool func_141(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_142(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_143(int iParam0)
{
	if (!func_142(iParam0))
	{
		return 0;
	}
	return ((*Global_1888801)[iParam0 /*35*/])->f_3;
}

void func_144(var uParam0)
{
	func_93(uParam0, 0f);
}

bool func_145(var uParam0)
{
	return func_128(*uParam0, 2);
}

float func_146()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

int func_147(bool bParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;

	if (!VOLUME::_DOES_VOLUME_EXIST(bParam0))
	{
		return 0;
	}
	vVar0 = { VOLUME::_0xF70F00013A62F866(bParam0) };
	vVar3 = { VOLUME::_0x3E2A25B2416DD67E(bParam0) };
	uVar6 = func_277(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return uVar6;
}

int func_148(var uParam0, bool bParam1, var uParam2, vector3 vParam3, int iParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (*uParam2)
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 1;
	}
	if (!bParam8)
	{
		*uParam0 = func_278(bParam1, vParam3, iParam6, 0, 1, bParam7, 1, 1, 1, 0, 0, 0, 0);
	}
	else
	{
		*uParam0 = func_278(bParam1, vParam3, iParam6, 0, 1, bParam7, 1, 1, bParam9, 1, 1, 0, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		*uParam2 = 1;
		return 1;
	}
	return 0;
}

int func_149(int iParam0, int iParam1, bool bParam2, vector3 vParam3)
{
	if (*bParam2)
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 1;
	}
	*iParam0 = OBJECT::CREATE_OBJECT(iParam1, vParam3, true, true, false, false, true);
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		*bParam2 = 1;
		return 1;
	}
	return 0;
}

void func_150(int iParam0, int iParam1)
{
	if (!(iParam1 > -1 && iParam1 <= 29))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	DECORATOR::DECOR_SET_BOOL(iParam0, "bIsSpecialPed", true);
	DECORATOR::DECOR_SET_INT(iParam0, "iSpecialPedID", iParam1);
	((*Global_1396257)[iParam1 /*638*/])->f_636 = iParam0;
}

void func_151(var uParam0, var uParam1, int iParam2, float fParam3, float fParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return;
	}
	if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(iParam2, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), fParam3))
	{
		return;
	}
	*uParam1 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(iParam2, *uParam0, fParam4, fParam3, fParam3, -1f, -1f, 180f, 0, 0, -1, -1);
}

void func_152()
{
	func_279(Local_14.f_146[0 /*36*/], Local_14.f_3, "CS_TOWNCRIER", Global_35, "ARTHUR", "ARTHUR", 0, 0, 0, 0, 0, 0, iLocal_558, "p_cs_stackScarlet01x", iLocal_560, "p_bell05x", 0, 0);
	func_279(Local_14.f_146[1 /*36*/], Local_14.f_3, "IG_TownCrier", Global_35, "JOHN", "player_zero", 0, 0, 0, 0, 0, 0, iLocal_558, "p_cs_stackScarlet01x", iLocal_560, "p_bell05x", 0, 0);
	func_279(Local_14.f_146[2 /*36*/], Local_14.f_3, "IG_TownCrier", Global_35, "JOHN", "player_zero", 0, 0, 0, 0, 0, 0, iLocal_558, "p_cs_stackScarlet01x", iLocal_560, "p_bell05x", 0, 0);
	func_279(Local_14.f_146[3 /*36*/], Local_14.f_3, "TownCrier", Global_35, "ARTHUR", "ARTHUR", 0, 0, 0, 0, 0, 0, iLocal_558, "p_cs_stackScarlet01x", iLocal_560, "p_bell05x", 0, 0);
	func_279(Local_14.f_146[4 /*36*/], Local_14.f_3, "IG_TownCrier", Global_35, "player_zero", "player_zero", 0, 0, 0, 0, 0, 0, iLocal_558, "p_cs_stackScarlet01x", iLocal_560, "p_bell05x", 0, 0);
}

int func_153(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	iVar1 = -1;
	if (iVar0 >= 0 && iVar0 < 5)
	{
		iVar1 = iVar0;
	}
	return iVar1;
}

int func_154(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	iVar1 = -1;
	if (iVar0 >= 0 && iVar0 < 100)
	{
		iVar1 = iVar0;
	}
	return iVar1;
}

void func_155(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_349 = iParam1;
	func_280(uParam0, 0, 1);
	if (bParam2)
	{
		func_281(uParam0);
	}
}

void func_156(int iParam0, int iParam1)
{
	if (!func_282(iParam1))
	{
		return;
	}
	iParam0->f_101 = iParam1;
}

void func_157(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	if (!func_282(iParam1))
	{
		return;
	}
	if (!func_283(iParam2))
	{
		return;
	}
	func_284((iParam0->f_41[iParam1 /*59*/])->f_21[iParam2 /*17*/], sParam3, sParam4, iParam5, iParam6, iParam7, 0, 1, 0);
	if (bParam8)
	{
		func_285(iParam0->f_41[iParam1 /*59*/], iParam2, 1);
	}
}

int func_158(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	switch (iParam0)
	{
		case 1:
			iVar0 = 64;
			break;
		case 3:
			iVar0 = 192;
			break;
		case 2:
			iVar0 = 208;
			break;
		case 4:
			iVar0 = 212;
			break;
		case 5:
			iVar0 = 77;
			break;
		case 7:
			iVar0 = 76;
			break;
		case 6:
			iVar0 = 96;
			break;
		default:
			iVar0 = 1;
			break;
	}
	iVar0 |= 16777216;
	if (iParam1 != 0)
	{
		iVar0 = (iVar0 || iParam1);
	}
	if (iParam2 != 0)
	{
		iVar0 = (iVar0 - (iVar0 && iParam2));
	}
	return iVar0;
}

void func_159(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3)
	{
		func_286(iParam0, iParam1);
	}
	(iParam0->f_41[iParam1 /*59*/])->f_56 = iParam2;
}

void func_160(int iParam0, int iParam1, int iParam2)
{
	if (!func_282(iParam1))
	{
		return;
	}
	(iParam0->f_41[iParam1 /*59*/])->f_57 = iParam2;
}

void func_161(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_287(uParam0, iParam1, sParam2))
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

float func_162(int iParam0)
{
	return iParam0->f_142;
}

int func_163(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	float fVar8;

	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		func_288(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::_DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = func_289(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
		if (!iParam8 & 2097152 != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 184, true);
		}
		if (iParam8 & 8388608 != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 281, true);
		}
		if (bVar5)
		{
			bVar1 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			func_144(&(iParam1->f_13));
		}
		if (func_290(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_291(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_163(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_75(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
						{
							func_292(*uParam0, 1, 1);
						}
					}
					else if (func_293(iParam1, 22))
					{
						func_292(*uParam0, 0, 1);
					}
				}
				if (func_294(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_295(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_296(iParam8);
					if (func_297(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET(uParam3[iParam1->f_1 /*17*/], 20))
								{
									func_298(uParam3);
								}
							}
							return iParam1->f_1;
						}
					}
					else if (iParam1->f_2 != 2)
					{
						if (iParam1->f_1 != -1)
						{
							iParam1->f_1 = -1;
						}
					}
				}
				else
				{
					func_299(iParam1, uParam3, fVar8);
					if (func_300(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_76(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_301(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_294(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_302(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_297(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_295(uParam0, func_294(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_296(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_76(uParam3, 0, 0, 1, 1);
					}
					func_303(iParam1, 1);
				}
				func_299(iParam1, uParam3, fVar8);
				if (func_301(uParam0, iParam1, fParam4, bVar6))
				{
					if (iParam8 & 512 != 0)
					{
						iParam1->f_2 = 0;
					}
					else
					{
						iParam1->f_2 = 1;
					}
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
		}
	}
	else if (!iParam8 & 1024 != 0)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 3))
		{
			func_304(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

int func_164(int iParam0)
{
	if ((((!(VOLUME::_DOES_VOLUME_EXIST(iParam0->f_102) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam0->f_102, true, 0)) || !PED::IS_PED_FACING_PED(Local_14.f_3, Global_35, 120f)) || (func_263() && func_265())) || iLocal_580 == 1) || bLocal_688)
	{
		if (func_305(&Local_14) == 0)
		{
			if (func_306(&Local_14, 0) != func_158(3, 0, 0))
			{
				func_159(&Local_14, 0, func_158(3, 0, 0), 1);
			}
		}
		return 0;
	}
	if ((((((func_88(Local_14.f_134, 64) && func_88(Local_14.f_134, 2097152)) && !PED::IS_PED_IN_ANY_VEHICLE(Global_35, true)) && !PED::IS_PED_ON_MOUNT(Global_35)) && !func_135(&(iParam0->f_3), &iLocal_712, 1071644672 /* Float: 1.75f */, 1074790400 /* Float: 2.25f */)) && !func_307(&(iParam0->f_3), &iLocal_711, 1071644672 /* Float: 1.75f */, 1074790400 /* Float: 2.25f */)) && !func_308())
	{
		if (func_305(&Local_14) == 0)
		{
			if (func_306(&Local_14, 0) != 1)
			{
				func_159(&Local_14, 0, 1, 1);
			}
		}
		return 1;
	}
	else if (func_305(&Local_14) == 0)
	{
		if (func_306(&Local_14, 0) != func_158(3, 0, 0))
		{
			func_159(&Local_14, 0, func_158(3, 0, 0), 1);
		}
	}
	return 0;
}

int func_165(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (!func_282(iParam1))
	{
		return 0;
	}
	if ((iParam0->f_41[iParam1 /*59*/])->f_58 == -1)
	{
		return 0;
	}
	iVar0 = (iParam0->f_41[iParam1 /*59*/])->f_58;
	if (!func_283(iVar0))
	{
		return 0;
	}
	*iParam2 = iVar0;
	return 1;
}

void func_166()
{
	if (!func_88(Local_14.f_134, 33554432))
	{
		func_89(&(Local_14.f_134), 33554432);
	}
	if (!func_88(Local_14.f_134, 8388608))
	{
		func_89(&(Local_14.f_134), 4194304);
		func_89(&(Local_14.f_134), 8388608);
	}
}

void func_167(int iParam0)
{
	if (iParam0 == 0)
	{
		if (func_309())
		{
			func_310(Global_35, "GREET_GENERAL", -417894478, Local_14.f_3, 1, 0, 0, 1);
		}
		else
		{
			func_310(Global_35, "GREET_GENERAL", -417894478, Local_14.f_3, 1, 0, 0, 1);
		}
	}
	else if (iParam0 == 1)
	{
		if (func_309())
		{
			if (Local_14.f_1 == 0)
			{
				func_310(Global_35, "INSULT_MALE_CONV_PART1", -417894478, Local_14.f_3, 1, "JOHN_PLAYER", 2, 1);
			}
			else
			{
				func_310(Global_35, "INSULT_TIMID_MALE_CONV_PART1", -417894478, Local_14.f_3, 1, "JOHN_PLAYER", 2, 1);
			}
		}
		else
		{
			func_310(Global_35, "INSULT_MALE_CONV_PART2", -417894478, Local_14.f_3, 1, 0, 7, 1);
		}
	}
}

var func_168(var uParam0)
{
	return uParam0;
}

int func_169(var uParam0, bool bParam1, bool bParam2)
{
	if (!bParam1 || func_174(uParam0->f_6))
	{
		if (MISC::IS_BIT_SET(*uParam0, 0))
		{
			if (!bParam2)
			{
				return 1;
			}
			if (func_311(uParam0->f_6, bParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_170(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_312(iParam0, 13))
	{
		func_313(iParam0, 0);
	}
	else
	{
		func_314(iParam0, 0);
	}
	if (func_174(iParam0->f_6))
	{
		if (bParam2)
		{
			func_175(&(iParam0->f_6), 0, 1);
		}
	}
}

struct<2> func_171(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

int func_172(var uParam0, var uParam1)
{
	var uVar0;

	STATS::STAT_ID_GET_INT(&uParam0, &uVar0);
	return uVar0;
}

void func_173(var uParam0, bool bParam1, bool bParam2)
{
	STATS::_0x6A0184E904CDF25E(&uParam0, bParam2);
}

bool func_174(int iParam0)
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

void func_175(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_174(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_315(*uParam0);
	if (((*Global_1945938)[iVar0 /*18*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_316(iVar0);
	*uParam0 = 0;
}

void func_176(var uParam0, bool bParam1, int iParam2)
{
	func_317(iParam2);
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
		uParam0->f_13 = func_318(0);
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
							func_118(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_319(1))
						{
							func_118(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_319(1) || *uParam0 & 8192 != 0))
				{
					func_117(uParam0, 33554432);
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
			if (func_320(uParam0))
			{
				uParam0->f_15 = func_196();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_196() - uParam0->f_15) > 500)
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
	func_321(uParam0);
}

int func_177(bool bParam0, var uParam1)
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
			if (!func_322(bParam0, uParam1, iVar2))
			{
				return 0;
			}
			if (func_323(bParam0, iVar2) <= func_324(uParam1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_178(bool bParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = bParam0;
	}
	if (func_325(iParam2, 1, 1, 1, 0))
	{
		func_118(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_326(uParam1, 1);
	func_327();
}

int func_179(bool bParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (func_328(bParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_329(uParam1);
			if (func_330(uParam1, bParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_331(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_326(uParam1, 1);
						return 1;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_326(uParam1, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_180(bool bParam0, bool bParam1, var uParam2)
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
	if (func_332(bParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_329(uParam2);
		if (func_330(uParam2, bParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_331(uParam2)
				{
					func_326(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_181(bool bParam0, var uParam1)
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
	if (func_322(bParam0, uParam1, bVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_331(uParam1)
		{
			fVar3 = func_329(uParam1);
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

int func_182(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_333(bParam1, bParam2, bParam3);
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

int func_183(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_196();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return 1;
	}
	return 0;
}

int func_184(var uParam0, bool bParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_334(uParam2);
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
			if (func_192(uParam2, bParam1))
			{
				func_326(uParam2, 1);
				return 1;
			}
		}
	}
	return 0;
}

int func_185(var uParam0, bool bParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_12 < IntToFloat(func_335(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && !WEAPON::_0x5809DBCA0A37C82B(Global_1935630->f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_192(uParam2, bParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_326(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_186(var uParam0, bool bParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(bParam1, false, true) };
	iVar3 = func_336(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, uParam2->f_22))
				{
					func_326(uParam2, 1);
					return 1;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), vVar0, uParam2->f_27))
				{
					func_326(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(bParam1, joaat("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar4, 0, 0);
					if (func_337(bParam1, vVar0, vVar4))
					{
						func_326(uParam2, 1);
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
					func_326(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(bParam1, joaat("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar7, 0, 0);
					if (func_337(bParam1, vVar0, vVar7))
					{
						func_326(uParam2, 1);
						return 1;
					}
				}
				break;
		}
	}
	return 0;
}

int func_187(bool bParam0, var uParam1)
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
		if (!func_322(bParam0, uParam1, &(Global_1935630->f_34[iVar0])) || bParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_338(&(Global_1935630->f_34[iVar0]));
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_339(&(Global_1935630->f_34[iVar0])))
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
			if (func_340(uParam1, bParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = bParam0;
				return 1;
			}
			else if (func_341(uParam1, bParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = bParam0;
				return 1;
			}
			else if (func_342(uParam1, bParam0, fVar1, iVar0))
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

int func_188(bool bParam0, var uParam1)
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

int func_189(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_196();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

int func_190(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_343(bVar0, &iVar2))
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
	if (func_344(bVar0, bParam0))
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

int func_191(var uParam0, bool bParam1)
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

int func_192(var uParam0, bool bParam1)
{
	if (func_345(uParam0))
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

int func_193(bool bParam0, bool bParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bParam0, bParam1, 1, 1))
		{
			return 1;
		}
		if (func_346(bParam0, bParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(bParam0, bParam1) && PED::IS_PED_RAGDOLL(bParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_194()
{
}

int func_195(var uParam0, bool bParam1)
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
		if (func_347(bVar0, bParam1, vVar1))
		{
			uParam0->f_9 = func_196();
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
						if (func_348(bVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(bVar7, bParam1))
							{
								uParam0->f_9 = func_196();
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

int func_196()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

int func_197()
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
	if ((func_196() - Global_1935630->f_43) >= 10000)
	{
		return 0;
	}
	return 1;
}

int func_198(var uParam0, bool bParam1)
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
	fVar0 = func_324(uParam0);
	if (uParam0->f_12 > func_349(uParam0) && uParam0->f_12 > fVar0)
	{
		return 0;
	}
	iVar2 = func_350(bParam1);
	iVar1 = func_351(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(bParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam1, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(bParam1, Global_35, true, 0) == 1)) || ((PED::_0x06087579E7AA85A9(bParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam1, uParam0->f_14, 17)) && PED::_0x7F9B9791D4CB71F6(bParam1, uParam0->f_14, true, 0) == 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_199(bool bParam0, bool bParam1, var uParam2)
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
	return func_352(bParam0, bParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

int func_200(bool bParam0, var uParam1)
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
		if (func_353(bParam0, uParam1, 1))
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
					if (!func_354(uParam1, bParam0))
					{
						if (func_348(bVar4, Global_36, 1) < 7f)
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

int func_201(bool bParam0, var uParam1)
{
	if (!func_355(0))
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

int func_202(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_196();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_203(bool bParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*bParam0, PLAYER::PLAYER_ID(), 0);
}

int func_204(bool bParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(bParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_196();
	}
	else if (func_196() - uParam1->f_4) > func_356(uParam1)
	{
		return func_357(bParam0, uParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

int func_205(var uParam0, bool bParam1)
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

int func_206(int iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (bParam1)
		{
			return PED::IS_PED_DEAD_OR_DYING(iParam0, true);
		}
		else
		{
			return ENTITY::IS_ENTITY_DEAD(iParam0);
		}
	}
	return 1;
}

void func_207(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iParam0->f_146)
	{
		if (ANIMSCENE::_0x25557E324489393C(&(iParam0->f_146[iVar0 /*36*/])) && ANIMSCENE::_0x477122B8D05E7968(&(iParam0->f_146[iVar0 /*36*/]), 1, 0))
		{
			if ((!MISC::IS_STRING_NULL_OR_EMPTY((iParam0->f_146[iVar0 /*36*/])->f_14) && ENTITY::DOES_ENTITY_EXIST((iParam0->f_146[iVar0 /*36*/])->f_13)) && ANIMSCENE::_GET_ANIM_SCENE_OBJECT(&(iParam0->f_146[iVar0 /*36*/]), (iParam0->f_146[iVar0 /*36*/])->f_14, false) == (iParam0->f_146[iVar0 /*36*/])->f_13)
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(&(iParam0->f_146[iVar0 /*36*/]), (iParam0->f_146[iVar0 /*36*/])->f_14, (iParam0->f_146[iVar0 /*36*/])->f_13);
				func_358((iParam0->f_146[iVar0 /*36*/])->f_13, 1, 1);
			}
			if ((!MISC::IS_STRING_NULL_OR_EMPTY((iParam0->f_146[iVar0 /*36*/])->f_16) && ENTITY::DOES_ENTITY_EXIST((iParam0->f_146[iVar0 /*36*/])->f_15)) && ANIMSCENE::_GET_ANIM_SCENE_OBJECT(&(iParam0->f_146[iVar0 /*36*/]), (iParam0->f_146[iVar0 /*36*/])->f_16, false) == (iParam0->f_146[iVar0 /*36*/])->f_15)
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(&(iParam0->f_146[iVar0 /*36*/]), (iParam0->f_146[iVar0 /*36*/])->f_16, (iParam0->f_146[iVar0 /*36*/])->f_15);
				func_358((iParam0->f_146[iVar0 /*36*/])->f_15, 1, 1);
			}
			if ((!MISC::IS_STRING_NULL_OR_EMPTY((iParam0->f_146[iVar0 /*36*/])->f_18) && ENTITY::DOES_ENTITY_EXIST((iParam0->f_146[iVar0 /*36*/])->f_17)) && ANIMSCENE::_GET_ANIM_SCENE_OBJECT(&(iParam0->f_146[iVar0 /*36*/]), (iParam0->f_146[iVar0 /*36*/])->f_18, false) == (iParam0->f_146[iVar0 /*36*/])->f_17)
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(&(iParam0->f_146[iVar0 /*36*/]), (iParam0->f_146[iVar0 /*36*/])->f_18, (iParam0->f_146[iVar0 /*36*/])->f_17);
				func_358((iParam0->f_146[iVar0 /*36*/])->f_17, 1, 1);
			}
		}
		iVar0++;
	}
}

int func_208()
{
	return Global_1572887->f_12;
}

bool func_209(int iParam0)
{
	int iVar0;

	iVar0 = func_359(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_210(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_211(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_212(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_213(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	*uParam0 = ITEMSET::CREATE_ITEMSET(true);
	iVar5 = ENTITY::_0x886171A12F400B89(bParam4, *uParam0, 1);
	if (iVar5 > 0)
	{
		iVar4 = 0;
		while (iVar4 < iVar5)
		{
			iVar0 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, *uParam0);
			bVar1 = iVar0;
			if ((ENTITY::DOES_ENTITY_EXIST(bVar1) && iVar3 < *uParam1) && iVar3 < iParam3)
			{
				if (func_360(bVar1, bParam5, bParam6, 1, 0, 0) && !DECORATOR::DECOR_EXIST_ON(bVar1, "bIgnoreThisPed"))
				{
					if (!func_361(bVar1, uParam2))
					{
						bVar2 = false;
						if (iParam7 != -1)
						{
							iVar6 = 0;
							iVar6 = 0;
							while (iVar6 < POPULATION::GET_NUM_MODELS_IN_POPULATION_SET(iParam7))
							{
								if (PED::IS_PED_MODEL(bVar1, POPULATION::GET_PED_MODEL_NAME_IN_POPULATION_SET(iParam7, iVar6)))
								{
									bVar2 = true;
								}
								else
								{
									iVar6++;
								}
							}
						}
						else
						{
							bVar2 = true;
						}
						if (bVar2)
						{
							(*uParam1)[iVar3] = bVar1;
							iVar3++;
						}
					}
				}
			}
			iVar4++;
		}
	}
	if (iVar3 >= (iParam3 - 1) && iVar5 >= iParam3)
	{
	}
	ITEMSET::DESTROY_ITEMSET(*uParam0);
	return iVar3;
}

void func_214(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4)
{
	char* sVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0) || Global_1935630->f_12)
	{
		return;
	}
	sVar0 = func_362(iParam3);
	if (fParam4 == 0f)
	{
		if (func_92(iParam0, Global_35, 15f, 1))
		{
			if (!func_97(*iParam1, iParam2))
			{
				if (AUDIO::_0x6339C1EA3979B5F7(sVar0, "special_ped_scenes"))
				{
					func_100(iParam1, iParam2);
				}
			}
		}
		else if (func_97(*iParam1, iParam2))
		{
			AUDIO::_0x9428447DED71FC7E("special_ped_scenes");
			func_210(iParam1, iParam2);
		}
	}
	else if (fParam4 <= 15f)
	{
		if (!func_97(*iParam1, iParam2))
		{
			if (AUDIO::_0x6339C1EA3979B5F7(sVar0, "special_ped_scenes"))
			{
				func_100(iParam1, iParam2);
			}
		}
	}
	else if (func_97(*iParam1, iParam2))
	{
		AUDIO::_0x9428447DED71FC7E("special_ped_scenes");
		func_210(iParam1, iParam2);
	}
}

int func_215(int iParam0)
{
	return iParam0->f_146.f_349;
}

void func_216(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8)
{
	if (!func_97(*iParam1, iParam2))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0) || ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
		{
			PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), sParam7);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
		{
			PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), sParam8);
		}
		return;
	}
	if (func_97(*iParam1, iParam3))
	{
		if (!func_97(*iParam1, iParam4))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
			{
				PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), sParam7);
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
			{
				PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), bParam0, sParam6, 0f, 0f, 0f, false, sParam8);
			}
			func_100(iParam1, iParam4);
		}
	}
	else if (func_97(*iParam1, iParam4))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
		{
			PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), sParam8);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
		{
			PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), bParam0, sParam5, 0f, 0f, 0f, false, sParam7);
		}
		func_210(iParam1, iParam4);
	}
}

void func_217(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (func_97(uParam0, iParam1))
	{
		PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
		PAD::DISABLE_ALL_CONTROL_ACTIONS(1);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE_ALTERNATE"), true);
		if (bParam3)
		{
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON"), true);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON_NEG"), true);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON_POS"), true);
		}
		func_363();
		HUD::_0xC9CAEAEEC1256E54(724769646);
		if (!PED::GET_PED_CONFIG_FLAG(Global_35, 174, true))
		{
			PED::SET_PED_CONFIG_FLAG(Global_35, 174, true);
		}
		if (bParam2)
		{
			func_364();
		}
	}
	else if (PED::GET_PED_CONFIG_FLAG(Global_35, 174, true))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 174, false);
	}
}

void func_218(bool bParam0)
{
	func_207(&Local_14);
	if (bParam0)
	{
		if (!func_88(Local_14.f_134, -2147483648))
		{
			func_365();
		}
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_14.f_3, false);
	AUDIO::STOP_PED_SPEAKING(Local_14.f_3, false);
	PED::SET_PED_CONFIG_FLAG(Local_14.f_3, 153, false);
	if (!func_88(Local_14.f_134, -2147483648))
	{
		TASK::_TASK_SMART_FLEE_STYLE_PED(Local_14.f_3, Global_35, 3, 0, 6000f, -1, false);
	}
	else
	{
		TASK::_TASK_SMART_FLEE_STYLE_PED(Local_14.f_3, false, 3, 0, 6000f, -1, false);
	}
	PED::SET_PED_KEEP_TASK(Local_14.f_3, true);
}

int func_219(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7)
{
	if (*uParam3 >= iParam4)
	{
		return 0;
	}
	if (*uParam1)
	{
		if (!func_54(uParam2))
		{
			func_93(uParam2, 0f);
			return 0;
		}
		else if (func_137(uParam2) > iParam6)
		{
			func_62(uParam2);
			*uParam3++;
			*uParam1 = 0;
			return 0;
		}
		else
		{
			return 0;
		}
	}
	if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
	{
		if (fParam7 == 0f)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(*uParam0) || !ENTITY::DOES_ENTITY_EXIST(Global_35))
			{
				return 0;
			}
			fParam7 = func_346(*uParam0, Global_35, 1, 1);
		}
		if (iParam5 == 0)
		{
			if (fParam7 >= 0f && fParam7 < 10f)
			{
				iParam5 = 249295937;
			}
			else if (fParam7 >= 10f && fParam7 < 20f)
			{
				iParam5 = 1715123483;
			}
			else if (fParam7 >= 20f && fParam7 < 30f)
			{
				iParam5 = 1891783641;
			}
			else if (fParam7 >= 30f && fParam7 < 50f)
			{
				iParam5 = 2001176446;
			}
			else
			{
				iParam5 = 1515458263;
			}
		}
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::_TRIGGER_SONAR_BLIP_2(iParam5, *uParam0);
		*uParam1 = 1;
		return 1;
	}
	return 0;
}

bool func_220(int iParam0)
{
	return ((*Global_1310750)[iParam0 /*111*/])->f_48;
}

int func_221(var uParam0)
{
	if (((((func_88(*uParam0, 2) || func_88(*uParam0, 4)) || func_88(*uParam0, 16)) || func_88(*uParam0, 128)) || func_88(*uParam0, 1024)) || func_88(*uParam0, 2048))
	{
		return 1;
	}
	return 0;
}

int func_222(var uParam0, var uParam1, int iParam2)
{
	switch (uParam0->f_350)
	{
		case 0:
			func_280(uParam0, func_366(uParam0, uParam1), 1);
			break;
		case 1:
			func_280(uParam0, func_367(uParam0, uParam1), 1);
			break;
		case 2:
			func_280(uParam0, func_368(uParam0, uParam1), 1);
			break;
		case 3:
			if (func_369(uParam0, uParam1))
			{
				func_280(uParam0, 4, 1);
			}
			break;
		case 4:
			if (!func_370(uParam0, 2))
			{
				Stack.Push(((iParam2 == 5 || (func_16(uParam0, 2) && iParam2 != 4)) || ((uParam0->f_353 && func_16(uParam0, 1)) && iParam2 != 2)));
				Stack.Push(uParam1);
				Call_Loc(uParam1->f_23);
				if (StackVal || StackVal)
				{
					func_371(uParam0, 2);
				}
			}
			else
			{
				func_280(uParam0, 5, 1);
			}
			break;
		case 5:
			if (!func_370(uParam0, 4))
			{
				if (func_372(uParam0, uParam1, iParam2))
				{
					func_371(uParam0, 4);
				}
			}
			if (!func_370(uParam0, 8))
			{
				Stack.Push(((iParam2 == 5 || (func_16(uParam0, 2) && iParam2 != 4)) || ((uParam0->f_353 && func_16(uParam0, 1)) && iParam2 != 2)));
				Stack.Push(uParam1);
				Call_Loc(uParam1->f_24);
				if (StackVal || StackVal)
				{
					func_371(uParam0, 8);
				}
			}
			if (func_370(uParam0, 4) && func_370(uParam0, 8))
			{
				func_280(uParam0, 6, 1);
			}
			break;
		case 6:
			if (!func_370(uParam0, 16))
			{
				if (func_373(uParam0, uParam1))
				{
					func_371(uParam0, 16);
				}
			}
			if (!func_370(uParam0, 32))
			{
				Stack.Push(((iParam2 == 5 || (func_16(uParam0, 2) && iParam2 != 4)) || ((uParam0->f_353 && func_16(uParam0, 1)) && iParam2 != 2)));
				Stack.Push(uParam1);
				Call_Loc(uParam1->f_25);
				if (StackVal || StackVal)
				{
					func_371(uParam0, 32);
				}
			}
			if (func_370(uParam0, 16) && func_370(uParam0, 32))
			{
				func_280(uParam0, 0, 1);
				return 1;
			}
			break;
	}
	return 0;
}

int func_223(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return 0;
	}
	return 1;
}

void func_224(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (ANIMSCENE::_0x25557E324489393C(uParam0[iVar0 /*36*/]) && ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0[iVar0 /*36*/], 0))
		{
			ANIMSCENE::ABORT_ANIM_SCENE(uParam0[iVar0 /*36*/], false);
		}
		iVar0++;
	}
}

int func_225()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_226(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || BUILTIN::SHIFT_LEFT(iParam0 & 1023, 5)) || BUILTIN::SHIFT_LEFT(iParam1 & 16383, 15));
}

int func_227(int iParam0)
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

int func_228(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (!func_374(iParam2))
	{
		return -1;
	}
	if (iParam0 < 0 || iParam0 > 511)
	{
		return -1;
	}
	if (iParam1 < 0 || iParam1 > 255)
	{
		return -1;
	}
	if (iParam3 < 0 || iParam3 > func_225())
	{
		return -1;
	}
	iVar0 = func_226(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_375(iVar1, 0);
	func_376(iVar1, 0);
	func_377(iVar1, 0);
	func_378(iVar1, 0);
	func_379(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_380(iVar1, iParam4);
	}
	return iVar1;
}

int func_229(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_3;
	}
	return 0;
}

int func_230(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			switch (func_381())
			{
				case 2:
					return 2;
				case 0:
					return 0;
				case 11:
					return 11;
				case 10:
					return 10;
				default:
					break;
			}
			return -1;
		case 1:
			return 0;
		case 2:
			return 15;
		case 3:
			return 1;
		case 4:
			switch (func_381())
			{
				case 3:
					return 3;
				case 9:
					return 9;
				case 10:
					return 10;
				case 4:
					return 4;
				case 13:
					return 13;
				default:
					break;
			}
			return -1;
		case 6:
			switch (func_381())
			{
				case 3:
					return 3;
				case 6:
					return 6;
				default:
					break;
			}
			return -1;
		case 7:
			return 10;
		case 5:
			return 7;
		case 8:
			return 0;
		case 9:
			return 9;
		case 10:
			return 0;
		case 11:
			switch (func_381())
			{
				case 12:
					return 12;
				case 10:
					return 10;
				case 15:
					return 15;
				case 11:
					return 11;
				case 16:
					return 16;
				case 1:
					return 1;
				case 0:
					return 0;
				default:
					break;
			}
			return -1;
		case 12:
			return 6;
		case 13:
			return 9;
		case 14:
			return 11;
		case 15:
			switch (func_381())
			{
				case 9:
					return 9;
				case 7:
					return 7;
				case 13:
					return 13;
				case 10:
					return 10;
				case 1:
					return 1;
				default:
					break;
			}
			return -1;
		case 16:
			return 0;
		case 17:
			return 10;
		case 18:
			return 1;
		case 19:
			return 9;
		case 20:
			return 1;
		case 21:
			return 10;
		case 22:
			return 13;
		case 23:
			switch (func_381())
			{
				case 0:
					return 0;
				case 2:
					return 2;
				default:
					break;
			}
			return -1;
		case 24:
			switch (func_381())
			{
				case 15:
					return 15;
				case 13:
					return 13;
				case 14:
					return 14;
				case 16:
					return 16;
				default:
					break;
			}
			return -1;
		case 25:
			return 0;
		case 26:
			return 9;
		case 27:
			return 0;
		case 28:
			return 10;
		case 29:
			return 0;
	}
	return -1;
}

int func_231(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return 5;
		case 2:
			return 120;
		case 3:
			return 26;
		case 4:
			return -1;
		case 6:
			return -1;
		case 7:
			return -1;
		case 5:
			return -1;
		case 8:
			return 5;
		case 9:
			return 76;
		case 10:
			return 5;
		case 11:
			switch (func_382())
			{
				case 105:
					return 105;
				case 38:
					return 38;
				case 126:
					return 126;
				case 5:
					return 5;
				default:
					break;
			}
			return -1;
		case 12:
			return -1;
		case 13:
			return 76;
		case 14:
			return 105;
		case 15:
			return -1;
		case 16:
			return 5;
		case 17:
			return 78;
		case 18:
			return 26;
		case 19:
			return 76;
		case 20:
			return -1;
		case 21:
			return -1;
		case 22:
			return 115;
		case 23:
			return -1;
		case 24:
			return -1;
		case 25:
			return -1;
		case 26:
			return 76;
		case 27:
			return 5;
		case 28:
			return -1;
		case 29:
			return 5;
	}
	return -1;
}

void func_232(var uParam0, char* sParam1, vector3 vParam2, vector3 vParam5, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		uParam0->f_35 = 1;
		return;
	}
	uParam0->f_1 = sParam1;
	if (!MISC::IS_STRING_NULL(sParam8))
	{
		uParam0->f_2 = sParam8;
	}
	uParam0->f_19 = iParam10;
	uParam0->f_20 = iParam11;
	uParam0->f_21 = iParam12;
	uParam0->f_22 = iParam13;
	uParam0->f_25 = { vParam2 };
	uParam0->f_28 = { vParam5 };
	uParam0->f_31 = iParam9;
	uParam0->f_35 = 0;
}

int func_233(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	iVar1 = -1;
	if (iVar0 >= 0 && iVar0 < 5)
	{
		iVar1 = iVar0;
	}
	return iVar1;
}

int func_234(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	iVar1 = -1;
	if (iVar0 >= 0 && iVar0 < 39)
	{
		iVar1 = iVar0;
	}
	return iVar1;
}

int func_235(int iParam0)
{
	if (func_383(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_236(bool bParam0)
{
	if (bParam0)
	{
		iLocal_579 = 2;
	}
	else
	{
		iLocal_579 = (iLocal_579 - 1);
		if (iLocal_579 < 0)
		{
			iLocal_579 = 0;
		}
	}
}

void func_237(var uParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, char* sParam7, int iParam8, char* sParam9, int iParam10, char* sParam11, char* sParam12, int iParam13, int iParam14)
{
	func_25(uParam0);
	uParam0->f_12 = sParam1;
	*uParam0 = uParam2;
	uParam0->f_1 = uParam3;
	uParam0->f_2 = uParam4;
	uParam0->f_2.f_1 = uParam5;
	uParam0->f_13 = iParam6;
	uParam0->f_14 = sParam7;
	uParam0->f_15 = iParam8;
	uParam0->f_16 = sParam9;
	uParam0->f_17 = iParam10;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		uParam0->f_18 = "s_base";
	}
	else
	{
		uParam0->f_18 = sParam11;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam12))
	{
		uParam0->f_19 = "s_base_end";
	}
	else
	{
		uParam0->f_19 = sParam12;
	}
	uParam0->f_20 = 0;
	uParam0->f_21 = iParam13;
	uParam0->f_22 = iParam14;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
}

int func_238(var uParam0)
{
	switch (iLocal_580)
	{
		case 1:
			return func_384(uParam0);
		default:
			return func_385(uParam0);
	}
	return 1;
}

void func_239(var uParam0, int iParam1)
{
	uParam0->f_25 = iParam1;
}

int func_240(var uParam0)
{
	if (!func_88(Local_14.f_134, 134217728))
	{
		func_386();
		if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
		{
			return 1;
		}
		return 0;
	}
	return 1;
}

void func_241(var uParam0, int iParam1)
{
	uParam0->f_23 = iParam1;
}

int func_242(var uParam0)
{
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_14.f_3, 0) && !TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(Local_14.f_3))
	{
		TASK::WAYPOINT_PLAYBACK_PAUSE(Local_14.f_3, 0, 0, 0);
	}
	if (!func_387(Local_14.f_3, Global_35, 0.8f))
	{
		if (!func_388(Local_14.f_3, -875674219))
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_14.f_3, Global_35, 0, -1082130432, -1082130432, -1082130432);
		}
	}
	if (func_386() && func_387(Local_14.f_3, Global_35, 0.8f))
	{
		func_89(&(Local_14.f_134), 134217728);
		return 1;
	}
	return 0;
}

void func_243(var uParam0, int iParam1)
{
	uParam0->f_24 = iParam1;
}

int func_244(var uParam0)
{
	if (!func_388(Local_14.f_3, -875674219))
	{
		func_266(uParam0, 0);
		return 1;
	}
	return 0;
}

int func_245(var uParam0)
{
	if (!func_388(Local_14.f_3, -875674219))
	{
		func_389(uParam0);
		return 1;
	}
	return 0;
}

int func_246(var uParam0)
{
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_14.f_3, 0) && TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(Local_14.f_3))
	{
		TASK::WAYPOINT_PLAYBACK_RESUME(Local_14.f_3, false, -1, 0);
	}
	else if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_14.f_3, 0))
	{
		TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_14.f_3, sLocal_571, 0, 1058316, -1, 1, 0, -1);
		iLocal_580 = 1;
		if (VOLUME::_DOES_VOLUME_EXIST(bLocal_561))
		{
			func_125(bLocal_561);
			VOLUME::_DELETE_VOLUME(bLocal_561);
		}
		PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "CrierBubble");
		PED::SET_PED_CONFIG_FLAG(Local_14.f_3, 153, false);
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_247(var uParam0)
{
	if (!func_88(Local_14.f_134, 536870912) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_3))
	{
		func_390();
		func_89(&(Local_14.f_134), 536870912);
	}
	else if (func_88(Local_14.f_134, 536870912) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_3))
	{
		func_90(&(Local_14.f_134), 536870912);
		return 1;
	}
	return 0;
}

int func_248(var uParam0)
{
	if (func_54(&uLocal_581))
	{
		func_62(&uLocal_581);
	}
	return 1;
}

int func_249(var uParam0)
{
	if (!func_54(&uLocal_581))
	{
		func_144(&uLocal_581);
	}
	if (func_391(&Local_14))
	{
		func_62(&uLocal_581);
		return 1;
	}
	if (func_55(&uLocal_581, 7f))
	{
		return 1;
	}
	return 0;
}

int func_250(var uParam0)
{
	int iVar0;
	var uVar1;

	if (!func_392(*uParam0, &iVar0))
	{
		return 1;
	}
	if (func_149(&bLocal_559, iLocal_553, &uVar1, vLocal_546 - Vector(20f, 0f, 0f)))
	{
		ENTITY::SET_ENTITY_VISIBLE(bLocal_559, false);
		func_393(Local_14.f_146[iVar0 /*36*/], 0, 0, 0, 0, bLocal_559, "p_cs_pamphlet02x", 1);
		return 1;
	}
	return 0;
}

int func_251(var uParam0)
{
	if ((!ENTITY::IS_ENTITY_VISIBLE(bLocal_559) && func_394(&Local_14)) && func_395(&Local_14) >= 0.05f)
	{
		ENTITY::SET_ENTITY_VISIBLE(bLocal_559, true);
	}
	if (func_370(&(Local_14.f_146), 4))
	{
		func_90(&(Local_14.f_134), 64);
		return 1;
	}
	return 0;
}

int func_252(var uParam0)
{
	int iVar0;
	bool bVar1;

	if (!func_88(Local_14.f_134, 8192))
	{
		func_396(&uLocal_690, "SPAH_TAKE", "SPAH_DECLINE", 0, 2, 25000, 0, -1, -1);
		if (func_397(&uLocal_690))
		{
			if (func_398(&uLocal_690))
			{
				if (func_399(&uLocal_690))
				{
					func_89(&(Local_14.f_134), 128);
					func_89(&(Local_14.f_134), 8192);
					func_310(Global_35, "ROB_AGAIN_ACCEPT_OFFER", -417894478, Local_14.f_3, 1, "JOHN_PLAYER", 1, 1);
					bLocal_688 = true;
					func_120(&uLocal_690);
				}
				else if (func_400(&uLocal_690))
				{
					func_90(&(Local_14.f_134), 64);
					func_90(&(Local_14.f_134), 2097152);
					func_89(&(Local_14.f_134), 8192);
					func_89(&(Local_14.f_134), 256);
					func_310(Global_35, "REJECT_PROSTITUTE_POS", -417894478, Local_14.f_3, 1, "JOHN_PLAYER", 1, 1);
					bLocal_688 = true;
					func_120(&uLocal_690);
					func_401(uParam0, func_153(0), func_154(27));
					return 1;
				}
			}
		}
	}
	else if (func_88(Local_14.f_134, 128))
	{
		bVar1 = WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false);
		if (func_402())
		{
			if (!func_88(Local_14.f_134, 131072))
			{
				WEAPON::_0xFCCC886EDE3C63EC(Global_35, 2, false);
				func_89(&(Local_14.f_134), 131072);
			}
		}
		else if (iVar0 == joaat("WEAPON_UNARMED") && bVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_253(var uParam0)
{
	if (!func_88(Local_14.f_134, 2048))
	{
		if (func_394(&Local_14) && func_395(&Local_14) >= func_403(uParam0->f_1))
		{
			func_404(-1857064858 /* GXTEntry: "Cholera Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			func_89(&(Local_14.f_134), 2048);
			func_405(1);
			func_119(0);
			func_406();
			func_156(&Local_14, 0);
			func_90(&(Local_14.f_134), 67108864);
			func_89(&(Local_14.f_134), 64);
			return 1;
		}
	}
	return 0;
}

int func_254(var uParam0)
{
	int iVar0;

	if (!func_392(*uParam0, &iVar0))
	{
		return func_407(uParam0);
	}
	if (ANIMSCENE::_0x25557E324489393C(&(Local_14.f_146[iVar0 /*36*/])) && ANIMSCENE::_0x477122B8D05E7968(&(Local_14.f_146[iVar0 /*36*/]), 1, 0))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(&(Local_14.f_146[iVar0 /*36*/]), "p_cs_newspaper_03x", bLocal_559);
	}
	OBJECT::DELETE_OBJECT(&bLocal_559);
	return func_407(uParam0);
}

int func_255(var uParam0)
{
	if (func_394(&Local_14) && func_395(&Local_14) >= func_403(uParam0->f_1))
	{
		func_119(0);
		func_406();
		func_156(&Local_14, 0);
		func_90(&(Local_14.f_134), 67108864);
		func_89(&(Local_14.f_134), 64);
		return 1;
	}
	return 0;
}

int func_256(var uParam0)
{
	if (!func_88(Local_14.f_134, 134217728))
	{
		if (func_386())
		{
			func_89(&(Local_14.f_134), 134217728);
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_257(var uParam0)
{
	if (func_394(&Local_14) && func_395(&Local_14) >= func_403(uParam0->f_1))
	{
		func_119(0);
		func_406();
		func_156(&Local_14, 0);
		func_90(&(Local_14.f_134), 67108864);
		func_89(&(Local_14.f_134), 64);
	}
	if (!func_265() && !func_88(Local_14.f_134, 32))
	{
		func_266(uParam0, 0);
	}
	else
	{
		func_119(0);
		func_406();
		func_156(&Local_14, 0);
		func_90(&(Local_14.f_134), 67108864);
		func_89(&(Local_14.f_134), 64);
	}
	return 1;
}

void func_258(bool bParam0)
{
	if (Local_14.f_1 == 0)
	{
		func_89(&iLocal_550, 4);
	}
	else
	{
		func_89(&iLocal_550, 8);
	}
	func_408(iLocal_551, iLocal_550);
	func_409(bParam0);
}

int func_259(var uParam0)
{
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_14.f_3, 0) && !TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(Local_14.f_3))
	{
		TASK::WAYPOINT_PLAYBACK_PAUSE(Local_14.f_3, 0, 0, 0);
	}
	return 1;
}

int func_260(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 100)
	{
		return 0;
	}
	return 1;
}

void func_261(var uParam0, var uParam1, var uParam2)
{
	uParam0->f_10 = uParam1;
	uParam0->f_10.f_1 = uParam2;
}

int func_262(int iParam0)
{
	if (iParam0 >= 0 && iParam0 <= 20)
	{
		return 1;
	}
	return 0;
}

int func_263()
{
	if (Local_14.f_1 == 0 && func_88(iLocal_550, 4))
	{
		return 1;
	}
	else if (Local_14.f_1 == 1 && func_88(iLocal_550, 8))
	{
		return 1;
	}
	return 0;
}

void func_264(var uParam0, var uParam1, var uParam2)
{
	uParam0->f_8 = uParam1;
	uParam0->f_8.f_1 = uParam2;
}

int func_265()
{
	if (func_88(iLocal_550, 32))
	{
		return 1;
	}
	return 0;
}

void func_266(var uParam0, bool bParam1)
{
	if (Local_14.f_1 == 0)
	{
		if (!bParam1)
		{
			func_401(uParam0, func_153(0), func_154(25));
		}
		else
		{
			func_264(uParam0, func_153(0), func_154(25));
		}
	}
	else if (!bParam1)
	{
		func_401(uParam0, func_153(0), func_154(25));
	}
	else
	{
		func_264(uParam0, func_153(0), func_154(25));
	}
}

bool func_267()
{
	return Global_1900383->f_393;
}

void func_268(var uParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		func_75(uParam0);
		func_304(iParam1, uParam2);
	}
	func_410(*uParam0, 1, bParam4);
}

void func_269(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_411(vParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1911670)
	{
		iVar1 = Global_1911670[iVar0];
		if (VOLUME::_0xF6A8A652A6B186CD(iVar1))
		{
			vVar2 = { VOLUME::_0xC4019CF9AE8E931A(iVar1) };
			if (func_412(vVar2, vParam0, 2f, 1))
			{
				if (iParam3 == 0 || VOLUME::_0x769BB7626B8CDB06(vVar2, 2f, 0, iParam3, 16384))
				{
					VOLUME::_0xFDFECC6EE4491E11(iVar1);
					(*Global_1911670)[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
}

void func_270(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_271()
{
	return 1;
	if (Global_1572887->f_12 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

int func_272(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
		{
			return 0;
		}
		iVar0 = (Global_12105[iParam0 /*7*/])->f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
		{
			return 0;
		}
		iVar0 = func_413(iParam0);
	}
	if (iVar0 == 1)
	{
		return 1;
	}
	if (iVar0 == 2)
	{
		return 1;
	}
	return 0;
}

int func_273()
{
	var uVar0;
	var uVar1;
	float fVar2;
	var uVar3;

	MISC::_GET_WEATHER_TYPE_TRANSITION(&uVar0, &uVar1, &fVar2);
	if (fVar2 < 0.75f)
	{
		uVar3 = uVar0;
	}
	else
	{
		uVar3 = uVar1;
	}
	return uVar3;
}

int func_274(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ITEMSET::IS_ITEMSET_VALID(*iParam0))
	{
		*iParam0 = ITEMSET::CREATE_ITEMSET(true);
	}
	if (ENTITY::_0x59B57C4B06531E1E(vParam1, bParam4, *iParam0, 2) > 0)
	{
		ITEMSET::_0x20A4BF0E09BEE146(*iParam0);
		return 1;
	}
	ITEMSET::_0x20A4BF0E09BEE146(*iParam0);
	return 0;
}

int func_275(int iParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ITEMSET::IS_ITEMSET_VALID(*iParam0))
	{
		*iParam0 = ITEMSET::CREATE_ITEMSET(true);
	}
	iVar2 = ENTITY::_0x59B57C4B06531E1E(vParam2, bParam6, *iParam0, 1);
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		iVar0 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, *iParam0);
		*iParam1 = iVar0;
		if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
			{
				if (PED::_0x772A1969F649E902(ENTITY::GET_ENTITY_MODEL(*iParam1)))
				{
					if (func_414(Global_35, *iParam1, 0))
					{
					}
					else
					{
						ITEMSET::_0x20A4BF0E09BEE146(*iParam0);
						return 1;
					}
				}
			}
		}
		iVar1++;
	}
	ITEMSET::_0x20A4BF0E09BEE146(*iParam0);
	return 0;
}

void func_276(int iParam0, vector3 vParam1, float fParam4)
{
	if (!func_388(*iParam0, 518218985))
	{
		TASK::CLEAR_PED_TASKS(*iParam0, 1, 0);
		TASK::_TASK_SMART_FLEE_STYLE_COORD(*iParam0, vParam1, 6, 0, fParam4, -1, 0);
	}
}

int func_277(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (!bParam8 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_411(vParam0))
	{
		return 0;
	}
	iVar1 = 0;
	if (!bParam5)
	{
		iVar1 |= 2;
	}
	iVar1 |= 1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam6))
	{
		if (func_415(vParam0))
		{
			return 0;
		}
		iVar0 = VOLUME::_0x00BBF7CEAE8C666A(vParam0, fParam3, iVar1, 0);
	}
	else
	{
		vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam6, false, false) };
		iVar0 = VOLUME::_0xF383E96C4904DF0C(iParam6, fParam3, iVar1, 0);
	}
	if (bParam7 != 0)
	{
		VOLUME::_0xB440F4E35393FC39(iVar0, bParam7);
	}
	if (bParam9 >= 0f)
	{
		VOLUME::_0xD460135C98940274(iVar0, bParam9);
	}
	func_416(iVar0, bParam8);
	return iVar0;
}

bool func_278(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	bool bVar0;

	bVar0 = PED::CREATE_PED(bParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		return false;
	}
	func_417(bVar0, bParam0, bParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return bVar0;
}

void func_279(var uParam0, var uParam1, char* sParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, char* sParam13, int iParam14, char* sParam15, int iParam16, int iParam17)
{
	if (uParam0->f_35)
	{
		return;
	}
	uParam0->f_3 = uParam1;
	uParam0->f_4 = sParam2;
	if (ENTITY::DOES_ENTITY_EXIST(iParam3))
	{
		uParam0->f_5 = iParam3;
		if (func_309())
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				uParam0->f_6 = "JOHN";
			}
			else
			{
				uParam0->f_6 = sParam4;
			}
			uParam0->f_23 = 0;
			uParam0->f_24 = 0;
		}
		else
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
			{
				uParam0->f_6 = "ARTHUR";
			}
			else
			{
				uParam0->f_6 = sParam5;
			}
			uParam0->f_23 = 1;
			uParam0->f_24 = "b_PlayerArthur";
		}
	}
	uParam0->f_7 = iParam6;
	uParam0->f_8 = iParam7;
	uParam0->f_9 = iParam8;
	uParam0->f_10 = iParam9;
	uParam0->f_11 = iParam10;
	uParam0->f_12 = iParam11;
	uParam0->f_13 = iParam12;
	uParam0->f_14 = sParam13;
	uParam0->f_15 = iParam14;
	uParam0->f_16 = sParam15;
	uParam0->f_17 = iParam16;
	uParam0->f_18 = iParam17;
}

void func_280(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_350 = iParam1;
	if (bParam2)
	{
		func_418(uParam0);
	}
}

void func_281(var uParam0)
{
	uParam0->f_352 = 0;
}

int func_282(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 1)
	{
		return 0;
	}
	return 1;
}

int func_283(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 2)
	{
		return 0;
	}
	return 1;
}

void func_284(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = sParam1;
	iParam0->f_7 = iParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = sParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (func_174(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_419(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_420(iParam0->f_6, iParam0->f_5, 0);
			}
			func_421(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_422(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

void func_285(int* iParam0, int iParam1, bool bParam2)
{
	if (iParam1 > -1)
	{
		iParam0->f_3 = iParam1;
		iParam0->f_7 = 0f;
		iParam0->f_8 = 0f;
		func_423(iParam0, 5);
		if (bParam2)
		{
			func_423(iParam0, 6);
		}
		else
		{
			func_303(iParam0, 6);
		}
	}
}

void func_286(int iParam0, int iParam1)
{
	if (!func_282(iParam1))
	{
		return;
	}
	func_71(iParam0->f_41[iParam1 /*59*/], 0);
}

bool func_287(var uParam0, int iParam1, char* sParam2)
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

void func_288(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

float func_289(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_290(bool bParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_424(bParam0, iParam1))
		{
			if (!func_141(iParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(bParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(bParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(bParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(bParam0, 178, true);
				func_76(uParam2, 0, 0, 1, 0);
				func_118(&(iParam1->f_10), 1);
			}
			return 1;
		}
		else if (func_141(iParam1->f_10, 1))
		{
			func_425(uParam2);
			PED::SET_PED_CONFIG_FLAG(bParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(bParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(bParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(bParam0, 178, false);
			func_117(&(iParam1->f_10), 1);
		}
	}
	return 0;
}

int func_291(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	char cVar0[32];
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;

	if (fParam7 > (fParam3 + 5f))
	{
		return 0;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		bVar4 = func_141(iParam4, 32);
		func_426(iParam1, uParam2, 0);
		iVar5 = func_427(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return 1;
		}
		func_76(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_141(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_141(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_141(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_141(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_141(iParam4, 8388608) || func_141(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_141(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_141(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_293(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_293(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_141(iParam4, 67108864))
		{
			iVar6 |= 16384;
		}
		if (iParam1->f_6 < -1 || (iParam1->f_6 > -1 && iParam1->f_6 > 3))
		{
			iParam1->f_6 = -1;
		}
		if (MISC::_0x870708A6E147A9AD(*uParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, 0, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = func_428(uParam0);
			}
			if (iParam6 != 2)
			{
				bVar7 = true;
			}
			if (!bVar7)
			{
				switch (iParam6)
				{
					case 2:
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
						{
							iParam6 = MISC::GET_HASH_KEY(&cVar0);
						}
						break;
				}
				if (iParam6 != 2)
				{
					PED::_0xFCA8FB9E15FA80D3(*uParam0, iParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5) && iParam6 == 2)
				{
					PED::_0xFCA8FB9E15FA80D3(*uParam0, MISC::GET_HASH_KEY(sParam5));
				}
				else if (iParam6 != 2)
				{
					PED::_0xFCA8FB9E15FA80D3(*uParam0, iParam6);
				}
			}
			PED::SET_PED_CONFIG_FLAG(*uParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 301, false);
			if (func_141(iParam4, 268435456))
			{
				iVar8 = func_429(uParam2, joaat("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					func_430(iParam1, (*uParam2)[iVar8 /*17*/]);
				}
			}
			if (func_293(iParam1, 23))
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 331, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, true);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, false);
			}
			if (func_141(iParam4, 2) || func_141(iParam4, 16))
			{
				func_292(*uParam0, 1, 1);
			}
			else
			{
				func_292(*uParam0, 0, 1);
			}
			return 1;
		}
	}
	return 0;
}

void func_292(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
	}
}

bool func_293(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

int func_294(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	bVar0 = (!VOLUME::_DOES_VOLUME_EXIST(iParam2) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam2, true, 0));
	bVar1 = iParam1 & 32 != false;
	bVar2 = iParam1 & 65792 != false;
	bVar3 = iParam1 & 1179648 != false;
	if (bVar0)
	{
		if (bVar1)
		{
			return 1;
		}
		if (func_431(*uParam0, bParam3, bVar2, bVar3))
		{
			return 1;
		}
	}
	return 0;
}

void func_295(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
{
	int iVar0;

	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(*iParam2, 1))
		{
			if (bParam14)
			{
				iVar0 = 0;
				while (iVar0 < *uParam4)
				{
					MISC::SET_BIT((*uParam4)[iVar0 /*17*/], 14);
					iVar0++;
				}
			}
			func_432(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_141(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_296(int iParam0)
{
	if (func_141(iParam0, 4))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_AIM"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_AIM"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_ATTACK"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_ATTACK2"), true);
	}
	if (func_141(iParam0, 16384))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_RELOAD"), false);
	}
	if (func_141(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
	}
}

bool func_297(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	float fVar12;

	iVar1 = func_433(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = (((PED::_0xA911EE21EDF69DAF(Global_35) || func_434(Global_35)) || func_435(Global_35)) || func_436(Global_35));
	fVar12 = -1f;
	if (func_54(&(iParam1->f_13)))
	{
		fVar12 = func_61(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if (((*uParam4)[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = ((*uParam4)[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_174(((*uParam4)[iVar0 /*17*/])->f_6);
		func_437(*uParam0, (*uParam4)[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET(uParam4[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_438(*uParam0, iParam1, (*uParam4)[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_439(iParam12, ((*uParam4)[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_76(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_440(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET(uParam4[iVar0 /*17*/], 11))
					{
						func_426(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar5 = true;
					iParam1->f_9 = MISC::IS_BIT_SET(uParam4[iParam1->f_1 /*17*/], 16);
					if (!iParam1->f_9)
					{
						MISC::SET_BIT(iParam1, 0);
					}
					if (!bVar2)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(((*uParam4)[iVar0 /*17*/])->f_11))
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY(((*uParam4)[iVar0 /*17*/])->f_12))
							{
								TASK::TASK_PLAY_ANIM(Global_35, ((*uParam4)[iVar0 /*17*/])->f_11, ((*uParam4)[iVar0 /*17*/])->f_12, 4f, -4f, -1, 67108880, 0f, false, 0, false, 0, false);
							}
						}
					}
					if (func_441(iParam1, fParam6, iParam1->f_9))
					{
						func_144(&(iParam1->f_18));
						if (bVar6)
						{
							func_440(uParam4, 0, 0);
						}
						iParam1->f_2 = 2;
					}
					if (iParam1->f_2 != 2)
					{
						if (iParam1->f_2 != 3)
						{
							if (bVar8)
							{
								iParam1->f_2 = 0;
							}
						}
					}
					if (!bParam14)
					{
						bVar5 = true;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		func_442(iParam1, fParam2);
	}
	return bVar5;
}

void func_298(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (MISC::IS_BIT_SET(uParam0[iVar0 /*17*/], 20))
		{
			if (!MISC::IS_BIT_SET(uParam0[iVar0 /*17*/], 21))
			{
				MISC::CLEAR_BIT((*uParam0)[iVar0 /*17*/], 20);
				MISC::CLEAR_BIT((*uParam0)[iVar0 /*17*/], 21);
			}
		}
		iVar0++;
	}
}

void func_299(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_443((*uParam1)[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET(uParam1[iVar0 /*17*/], 20))
			{
				func_442(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

int func_300(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_INTERACT_LOCKON")))
		{
			if (func_444(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_423(iParam1, 0);
				func_426(iParam1, uParam2, func_293(iParam1, 6));
				return 1;
			}
		}
	}
	return 0;
}

int func_301(var uParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
		{
			return 0;
		}
		iParam1->f_9 = 0;
		MISC::SET_BIT(iParam1, 0);
		if (fParam2 > 0f)
		{
			func_144(&(iParam1->f_18));
			return 0;
		}
		else if (func_54(&(iParam1->f_18)))
		{
			func_62(&(iParam1->f_18));
			return 0;
		}
	}
	if (!func_54(&(iParam1->f_18)))
	{
		return 1;
	}
	if (fParam2 > 0f && bParam3)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
		{
			return 0;
		}
	}
	return func_55(&(iParam1->f_18), fParam2);
	return 1;
}

void func_302(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_437(iParam0, (*uParam2)[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_303(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

void func_304(int* iParam0, var uParam1)
{
	int iVar0;
	struct<17> Var1;
	struct<10> Var22;

	Var1.f_1 = -1;
	Var1.f_3 = -1;
	Var1.f_6 = -1;
	Var1.f_12 = 1073741824;
	Var1.f_16 = 1;
	Var22.f_2 = 570;
	Var22.f_3 = 1065353216;
	Var22.f_4 = -1082130432;
	Var22.f_9 = 2;
	func_426(iParam0, uParam1, 1);
	func_76(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY((*uParam1)[iVar0 /*17*/], &Var22, 17);
		iVar0++;
	}
}

int func_305(int iParam0)
{
	return iParam0->f_101;
}

int func_306(int iParam0, int iParam1)
{
	return (iParam0->f_41[iParam1 /*59*/])->f_56;
}

int func_307(var uParam0, int iParam1, float fParam2, int iParam3)
{
	var uVar0;
	vector3 vVar1;
	vector3 vVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	vVar1 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0) };
	vVar4 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) + vVar1 * Vector(fParam2, fParam2, fParam2) };
	if (func_275(iParam1, &uVar0, vVar4, fParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

int func_308()
{
	if (PED::_0xA911EE21EDF69DAF(Global_35) || func_445())
	{
		return 1;
	}
	return 0;
}

int func_309()
{
	if (func_208() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == joaat("player_three"))
	{
		return 1;
	}
	return 0;
}

var func_310(bool bParam0, char* sParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> Var0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = uParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_446(bParam0, &Var0);
}

bool func_311(int iParam0, bool bParam1)
{
	if (bParam1 && !func_174(iParam0))
	{
		return false;
	}
	return !func_447(iParam0, 4);
}

bool func_312(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

void func_313(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_314(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

int func_315(int iParam0)
{
	return iParam0;
}

void func_316(int iParam0)
{
	if (!func_448(iParam0))
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

void func_317(int iParam0)
{
	int iVar0;
	var uVar1;

	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_449();
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
			func_450(&(Global_1935630->f_34), &(Global_1935630->f_39));
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

var func_318(int iParam0)
{
	return &(Global_1109400->f_275[iParam0 /*3*/]);
}

int func_319(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_451(bParam0, &uVar0, &uVar1))
	{
		return 1;
	}
	return 0;
}

int func_320(var uParam0)
{
	int iVar0;

	iVar0 = Global_1935630->f_40;
	if (func_208() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_452(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_452(uParam0);
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_351(iVar0) == -1)
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

void func_321(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_453(uParam0);
	}
}

int func_322(bool bParam0, var uParam1, bool bParam2)
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
		iVar1 = func_351(bParam2);
	}
	else
	{
		iVar1 = func_350(bParam2);
	}
	if (!PED::IS_PED_HUMAN(bParam0))
	{
		iVar0 = func_351(bParam0);
	}
	else
	{
		iVar0 = func_350(bParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return 1;
		}
	}
	if (func_141(*uParam1, 8388608))
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

float func_323(bool bParam0, bool bParam1)
{
	return func_346(bParam0, bParam1, 1, 1);
}

float func_324(var uParam0)
{
	return uParam0->f_26;
}

int func_325(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_326(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_118(uParam0, 134217728);
	}
	else
	{
		func_117(uParam0, 134217728);
	}
}

void func_327()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

int func_328(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((WEAPON::_0xCB690F680A3EA971(bVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, bParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, bParam0)) && func_346(bVar0, bParam0, 1, 1) <= 4f)
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
		if (WEAPON::_0x6AD66548840472E5(func_454(bVar0, 0)))
		{
			if (func_455(bParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_329(var uParam0)
{
	return uParam0->f_17;
}

int func_330(var uParam0, bool bParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_12 > fParam3)
	{
		return 0;
	}
	fVar0 = -1f;
	if (!func_141(*uParam0, 4194304))
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

int func_331(var uParam0)
{
	return uParam0->f_18;
}

int func_332(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_0x6AD66548840472E5(func_454(bVar0, 0)))
		{
			if (func_456(ENTITY::GET_ENTITY_COORDS(bParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_333(bool bParam0, bool bParam1, bool bParam2)
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

float func_334(var uParam0)
{
	return uParam0->f_23;
}

int func_335(var uParam0)
{
	return uParam0->f_21;
}

int func_336(var uParam0)
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

int func_337(bool bParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_457(bParam0, vParam4, 0.5f))
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

int func_338(bool bParam0)
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
	if (func_458(bParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_339(int iParam0)
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

int func_340(var uParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_459(bParam1))
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

int func_341(var uParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_459(bParam1))
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

int func_342(var uParam0, bool bParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40f;
	if (func_459(bParam1))
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

int func_343(bool bParam0, int iParam1)
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

int func_344(bool bParam0, bool bParam1)
{
	if (PED::_0xB65A4DAB460A19BD(bParam0) == bParam1)
	{
		return 1;
	}
	if (func_460(bParam0, 1, 0, 0) != joaat("WEAPON_LASSO"))
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

bool func_345(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

float func_346(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
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

int func_347(bool bParam0, bool bParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_348(bParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(bParam0, bParam1))
		{
			return 1;
		}
	}
	return 0;
}

float func_348(bool bParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(bParam0, false, false), vParam1, bParam4);
}

float func_349(var uParam0)
{
	return uParam0->f_24;
}

int func_350(bool bParam0)
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

int func_351(bool bParam0)
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

int func_352(bool bParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_343(Global_35, &iVar1))
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
		fVar2 = func_346(bParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_346(bParam0, Global_1935630->f_40, 0, 1) < 2.5f)
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

int func_353(bool bParam0, var uParam1, bool bParam2)
{
	bool bVar0;
	bool bVar1;

	func_451(1, &bVar0, &bVar1);
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
					if (!bParam2 || !func_354(uParam1, bVar0))
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
				if (!bParam2 || !func_354(uParam1, bVar1))
				{
					if (func_348(bVar1, Global_36, 1) < 5f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_354(var uParam0, bool bParam1)
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

int func_355(int iParam0)
{
	if (func_309())
	{
		return 0;
	}
	return func_461(((*Global_1347702)[58 /*49*/])->f_15, 1);
}

int func_356(var uParam0)
{
	return uParam0->f_20;
}

int func_357(bool bParam0, var uParam1, bool bParam2, float fParam3)
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

void func_358(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			ENTITY::DETACH_ENTITY(iParam0, bParam1, bParam2);
		}
	}
}

int func_359(int iParam0)
{
	if (!func_111(iParam0))
	{
		return -1;
	}
	return func_413(iParam0);
}

int func_360(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
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
	if (bParam3 && func_462(bParam0))
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
		if (func_463(bParam0, 0) != -1)
		{
			return 0;
		}
	}
	return 1;
}

int func_361(bool bParam0, var uParam1)
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

char* func_362(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "agnes_dowd";
		case 1:
			return "anders_helgerson";
		case 2:
			return "armadillo_town_crier";
		case 3:
			return "bland_preacher";
		case 4:
			return "blind_man_cassidy";
		case 6:
			return "chelonian_master";
		case 7:
			return "civil_war_commando";
		case 5:
			return "crackpot_robot";
		case 8:
			return "dorothea_wicklow";
		case 9:
			return "endless_strainer";
		case 10:
			return "early_eugenics_proponent";
		case 11:
			return "gavins_friend";
		case 12:
			return "giant";
		case 13:
			return "grizzeld_jon";
		case 14:
			return "joe_butler";
		case 15:
			return "john_the_baptising_madman";
		case 16:
			return "lillian_powell";
		case 17:
			return "mad_scientist";
		case 18:
			return "mayor_of_strawberry";
		case 19:
			return "bum_civil_war_vet";
		case 20:
			return "philosopher_in_cave";
		case 21:
			return "poor_joe";
		case 22:
			return "sheriff_of_tumbleweed";
		case 23:
			return "soothsayer";
		case 25:
			return "swamp_weirdo_sonny";
		case 24:
			return "sun_worshipper";
		case 26:
			return "thomas_downe";
		case 27:
			return "timothy_donahue";
		case 28:
			return "tiny_hermit_in_cabin";
		case 29:
			return "vampire";
		default:
			break;
	}
	return "speci";
}

void func_363()
{
	Global_1905944->f_5695 = 1;
}

void func_364()
{
	CAM::_0x05AB44D906738426();
	CAM::_0x8370D34BD2E60B73();
	CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	if (Global_1935689->f_1)
	{
		func_464(0);
	}
}

void func_365()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	switch (iVar0)
	{
		case 0:
			func_466(&uLocal_584, func_465("SPATC_IG7_1"), 0, -1, 0, 0);
			break;
		case 1:
			func_466(&uLocal_584, func_465("SPATC_IG7_2"), 0, -1, 0, 0);
			break;
		case 2:
			func_466(&uLocal_584, func_465("SPATC_IG7_3"), 0, -1, 0, 0);
			break;
	}
}

int func_366(var uParam0, var uParam1)
{
	var uVar0;
	int iVar1;

	uParam1->f_27 = 0;
	if (func_467(uParam0, uParam1, 0))
	{
		return 4;
	}
	uVar0 = *uParam1;
	if (!func_392(uVar0, &iVar1))
	{
		return 4;
	}
	if (!ANIMSCENE::_0x25557E324489393C(uParam0[iVar1 /*36*/]))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_12))
		{
			func_468((*uParam0)[iVar1 /*36*/], uParam1->f_12);
		}
		else
		{
			func_468((*uParam0)[iVar1 /*36*/], 0);
		}
		return 2;
	}
	return 1;
}

int func_367(var uParam0, var uParam1)
{
	var uVar0;
	int iVar1;

	if (func_467(uParam0, uParam1, 0))
	{
		return 4;
	}
	uVar0 = *uParam1;
	if (!func_392(uVar0, &iVar1))
	{
		return 4;
	}
	if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0[iVar1 /*36*/], 0) || ANIMSCENE::_0xD8254CB2C586412B(uParam0[iVar1 /*36*/], 0))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_12))
		{
			ANIMSCENE::RESET_ANIM_SCENE(uParam0[iVar1 /*36*/], uParam1->f_12);
		}
		else
		{
			ANIMSCENE::RESET_ANIM_SCENE(uParam0[iVar1 /*36*/], ((*uParam0)[iVar1 /*36*/])->f_2);
		}
	}
	return 2;
}

int func_368(var uParam0, var uParam1)
{
	var uVar0;
	int iVar1;

	if (func_467(uParam0, uParam1, 0))
	{
		return 4;
	}
	uVar0 = *uParam1;
	if (!func_392(uVar0, &iVar1))
	{
		return 4;
	}
	if (!ANIMSCENE::_0x25557E324489393C(uParam0[iVar1 /*36*/]))
	{
		return 0;
	}
	if (!ANIMSCENE::_0x477122B8D05E7968(uParam0[iVar1 /*36*/], 1, 0))
	{
		func_469((*uParam0)[iVar1 /*36*/]);
		return 3;
	}
	return 4;
}

int func_369(var uParam0, var uParam1)
{
	var uVar0;
	int iVar1;

	if (func_467(uParam0, uParam1, 0))
	{
		return 1;
	}
	uVar0 = *uParam1;
	if (!func_392(uVar0, &iVar1))
	{
		return 1;
	}
	if (ANIMSCENE::_0x477122B8D05E7968(uParam0[iVar1 /*36*/], 1, 0) && !ANIMSCENE::_0x59606519FF9D3EC2(uParam0[iVar1 /*36*/], 1))
	{
		func_470((*uParam0)[iVar1 /*36*/]);
		return 1;
	}
	return 0;
}

bool func_370(var uParam0, int iParam1)
{
	return func_88(uParam0->f_351, iParam1);
}

void func_371(var uParam0, int iParam1)
{
	func_89(&(uParam0->f_351), iParam1);
}

int func_372(var uParam0, var uParam1, int iParam2)
{
	var uVar0;
	int iVar1;

	uVar0 = *uParam1;
	if (func_467(uParam0, uParam1, 0))
	{
		return 1;
	}
	if (!func_392(uVar0, &iVar1))
	{
		return 1;
	}
	if (uParam1->f_20 >= 5)
	{
		if (func_16(uParam0, 2) && iParam2 != 4)
		{
			func_471(uParam0, uParam1);
			return 1;
		}
		else if ((uParam0->f_353 && func_16(uParam0, 1)) && iParam2 != 2)
		{
			func_471(uParam0, uParam1);
			return 1;
		}
		if (iParam2 != 5)
		{
			if ((!uParam0->f_353 && func_16(uParam0, 1)) && iParam2 != 2)
			{
				func_471(uParam0, uParam1);
				return 1;
			}
			if (func_16(uParam0, 4) && iParam2 != 3)
			{
				if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(((*uParam0)[iVar1 /*36*/])->f_3))
				{
					func_471(uParam0, uParam1);
					return 1;
				}
			}
		}
	}
	switch (uParam1->f_20)
	{
		case 0:
			if (((*uParam0)[iVar1 /*36*/])->f_32)
			{
				uParam1->f_20 = 1;
			}
			else
			{
				if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0[iVar1 /*36*/], 0))
				{
					ANIMSCENE::START_ANIM_SCENE(uParam0[iVar1 /*36*/]);
				}
				uParam1->f_20 = 2;
			}
			return 0;
		case 1:
			if (func_472(Global_35, uParam0[iVar1 /*36*/], ((*uParam0)[iVar1 /*36*/])->f_33, uParam1->f_12, &(((*uParam0)[iVar1 /*36*/])->f_34), 1065353216 /* Float: 1f */, 1, 0, 1))
			{
				if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0[iVar1 /*36*/], 0))
				{
					ANIMSCENE::START_ANIM_SCENE(uParam0[iVar1 /*36*/]);
				}
				else
				{
					uParam1->f_20 = 2;
				}
			}
			return 0;
		case 2:
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0[iVar1 /*36*/], uParam1->f_12) && !ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0[iVar1 /*36*/], uParam1->f_12))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0[iVar1 /*36*/], uParam1->f_12);
			}
			uParam1->f_20 = 3;
			return 0;
		case 3:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0[iVar1 /*36*/], uParam1->f_12))
			{
				uParam1->f_20 = 4;
			}
			return 0;
		case 4:
			if (!ANIMSCENE::_0x1F0E401031E20146(uParam0[iVar1 /*36*/], uParam1->f_12))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0[iVar1 /*36*/], uParam1->f_12, true);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_14))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0[iVar1 /*36*/], uParam1->f_14, uParam1->f_13, false);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_16))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0[iVar1 /*36*/], uParam1->f_16, uParam1->f_15, false);
				}
			}
			uParam1->f_20 = 5;
			return 0;
		case 5:
			func_471(uParam0, uParam1);
			uParam1->f_20 = 6;
			return 0;
		case 6:
			if (iParam2 != 5)
			{
				switch (uParam1->f_21)
				{
					case 0:
						if (ANIMSCENE::_0x8D81E7824B7753F7(uParam0[iVar1 /*36*/], uParam1->f_18, 1))
						{
							return 1;
						}
						break;
					case 1:
						if (ANIMSCENE::_0x8D81E7824B7753F7(uParam0[iVar1 /*36*/], uParam1->f_18, 1) && ANIMSCENE::_0x3FBC3F51BF12DFBF(uParam0[iVar1 /*36*/]) >= uParam1->f_22)
						{
							return 1;
						}
						break;
					case 2:
						if (ANIMSCENE::_0x8D81E7824B7753F7(uParam0[iVar1 /*36*/], uParam1->f_19, 1))
						{
							return 1;
						}
						break;
					case 3:
						if (ANIMSCENE::_0x8D81E7824B7753F7(uParam0[iVar1 /*36*/], uParam1->f_19, 1) && ANIMSCENE::_0x3FBC3F51BF12DFBF(uParam0[iVar1 /*36*/]) >= uParam1->f_22)
						{
							return 1;
						}
						break;
					case 4:
						if (ANIMSCENE::_0x8D81E7824B7753F7(uParam0[iVar1 /*36*/], uParam1->f_19, 1) || ANIMSCENE::_0x8D81E7824B7753F7(uParam0[iVar1 /*36*/], uParam1->f_18, 1))
						{
							return 1;
						}
						break;
					case 5:
						if ((ANIMSCENE::_0x8D81E7824B7753F7(uParam0[iVar1 /*36*/], uParam1->f_19, 1) || ANIMSCENE::_0x8D81E7824B7753F7(uParam0[iVar1 /*36*/], uParam1->f_18, 1)) && ANIMSCENE::_0x3FBC3F51BF12DFBF(uParam0[iVar1 /*36*/]) >= uParam1->f_22)
						{
							return 1;
						}
						break;
				}
				if (ANIMSCENE::_0xD8254CB2C586412B(uParam0[iVar1 /*36*/], 0) || ANIMSCENE::_0x34A0671BE613D3D0(uParam0[iVar1 /*36*/]))
				{
					return 1;
				}
			}
			else if (!func_16(uParam0, 8))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_373(var uParam0, var uParam1)
{
	func_473(uParam1, &(uParam0->f_209));
	return 1;
}

bool func_374(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_375(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_12105[iParam0 /*7*/])->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_474(iParam0);
	}
	else
	{
		func_475(iParam0, iParam1);
	}
	func_476();
}

void func_376(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_2 = iParam1;
}

void func_377(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_3 = iParam1;
}

void func_378(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_4 = iParam1;
}

void func_379(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12105[iParam0 /*7*/] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0 /*2*/] = iParam1;
}

void func_380(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_12105[iParam0 /*7*/])->f_5 = iParam1;
		return;
	}
	(Global_1058888->f_498[iParam0 /*2*/])->f_1 = iParam1;
}

int func_381()
{
	return Global_1897952->f_41;
}

int func_382()
{
	return Global_1894899->f_2;
}

int func_383(int iParam0)
{
	if ((((func_262(iParam0) || (iParam0 >= 28 && iParam0 <= 35)) || iParam0 == 21) || iParam0 == 23) || iParam0 == 25)
	{
		return 1;
	}
	return 0;
}

int func_384(var uParam0)
{
	if (func_477())
	{
		func_401(uParam0, func_153(0), func_154(4));
		return 1;
	}
	if (((func_478(1) && ENTITY::GET_ENTITY_SPEED(Global_35) <= 1.5f) && !func_479(Global_35)) && !PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
	{
		if (func_263())
		{
			if (!func_88(Local_14.f_134, 32) && !func_265())
			{
			}
			else if (func_263())
			{
				if (!func_54(&uLocal_568))
				{
					func_144(&uLocal_568);
				}
				else if (func_55(&uLocal_568, 6f))
				{
					func_480(uParam0);
					return 1;
				}
			}
		}
	}
	if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_14.f_3, 0))
	{
		func_401(uParam0, func_153(0), func_154(3));
		return 1;
	}
	if (func_83(Global_35, bLocal_565, 0, 1))
	{
		if (Local_14.f_1 == 0)
		{
			func_481(uParam0);
		}
		else
		{
			func_481(uParam0);
		}
	}
	else
	{
		func_401(uParam0, func_153(0), func_154(0));
	}
	return 1;
}

int func_385(var uParam0)
{
	if ((((func_88(Local_14.f_134, 32) || func_265()) && func_263()) && iLocal_577 >= 5) || (((Local_14.f_527 && func_482(&(Local_14.f_506))) && !func_221(&(Local_14.f_506))) && !func_16(&(Local_14.f_146), 4)))
	{
		func_401(uParam0, func_153(0), func_154(3));
		return 1;
	}
	if (func_477())
	{
		func_401(uParam0, func_153(0), func_154(4));
		return 1;
	}
	if (((func_478(1) && ENTITY::GET_ENTITY_SPEED(Global_35) <= 1.5f) && !func_479(Global_35)) && !PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
	{
		if (func_263())
		{
			if (!func_88(Local_14.f_134, 32) && !func_265())
			{
			}
			else if (func_263())
			{
				if (!func_54(&uLocal_568))
				{
					func_144(&uLocal_568);
				}
				else if (func_55(&uLocal_568, 6f))
				{
					func_480(uParam0);
					return 1;
				}
			}
		}
	}
	if (func_83(Global_35, bLocal_565, 0, 1))
	{
		if (Local_14.f_1 == 0)
		{
			func_483(uParam0);
		}
		else
		{
			func_483(uParam0);
		}
	}
	else
	{
		func_401(uParam0, func_153(0), func_154(6));
	}
	return 1;
}

bool func_386()
{
	func_484(&(Local_14.f_102), &iLocal_713, &uLocal_714);
	func_119(1);
	return func_485(Local_14.f_3, &uLocal_687, 1.65f, 0.5f, 12000, 0, 1, 256, 0, 1);
}

bool func_387(int iParam0, int iParam1, float fParam2)
{
	return func_457(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, false, false), fParam2);
}

int func_388(bool bParam0, int iParam1)
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

int func_389(var uParam0)
{
	if (Local_14.f_1 == 0)
	{
		func_401(uParam0, func_153(2), func_154(29));
	}
	else
	{
		func_401(uParam0, func_153(1), func_154(28));
	}
	return 1;
}

void func_390()
{
	int iVar0;

	iVar0 = func_486(1, 3, iLocal_578);
	iVar0 = func_487(iVar0, 1, 2);
	iLocal_578 = iVar0;
	func_310(Local_14.f_3, "PLAYER_LOITERING", -417894478, Global_35, 1, "ARM_TOWN_CRIER", iVar0, 1);
}

int func_391(int iParam0)
{
	if (((func_16(&(iParam0->f_146), 2) || func_16(&(iParam0->f_146), 4)) || func_16(&(iParam0->f_146), 1)) || func_16(&(iParam0->f_146), 8))
	{
		return 1;
	}
	return 0;
}

int func_392(int iParam0, int iParam1)
{
	if (func_223(iParam0))
	{
		*iParam1 = iParam0;
		return 1;
	}
	return 0;
}

void func_393(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, char* sParam6, bool bParam7)
{
	bool bVar0;
	bool bVar1;

	if (uParam0->f_35)
	{
		return;
	}
	bVar0 = ANIMSCENE::_0x25557E324489393C(*uParam0);
	bVar1 = ANIMSCENE::_0x477122B8D05E7968(*uParam0, 1, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		uParam0->f_13 = iParam1;
		uParam0->f_14 = sParam2;
		if ((bVar0 && bVar1) && bParam7)
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, uParam0->f_14, uParam0->f_13, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam3) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		uParam0->f_15 = iParam3;
		uParam0->f_16 = sParam4;
		if ((bVar0 && bVar1) && bParam7)
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, uParam0->f_16, uParam0->f_15, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(bParam5) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
	{
		uParam0->f_17 = bParam5;
		uParam0->f_18 = sParam6;
		if ((bVar0 && bVar1) && bParam7)
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, uParam0->f_18, uParam0->f_17, 0);
		}
	}
}

int func_394(int iParam0)
{
	int iVar0;

	iVar0 = -1;
	if (func_488(iParam0, &iVar0, 1))
	{
		return ANIMSCENE::_0x1F0E401031E20146(iVar0, func_489(iParam0));
	}
	return 0;
}

float func_395(int iParam0)
{
	int iVar0;

	switch (iParam0->f_146.f_349)
	{
		case 1:
			iVar0 = &iParam0->f_146[iParam0->f_146.f_181 /*36*/];
			break;
		case 2:
			iVar0 = &iParam0->f_146[iParam0->f_146.f_237 /*36*/];
			break;
		case 3:
			iVar0 = &iParam0->f_146[iParam0->f_146.f_265 /*36*/];
			break;
		case 4:
			iVar0 = &iParam0->f_146[iParam0->f_146.f_293 /*36*/];
			break;
	}
	if (!ANIMSCENE::_0x25557E324489393C(iVar0))
	{
		return 0f;
	}
	if (!ANIMSCENE::_0x477122B8D05E7968(iVar0, 1, 0))
	{
		return 0f;
	}
	if (ANIMSCENE::_0xCBFC7725DE6CE2E0(iVar0, 0))
	{
		return ANIMSCENE::_0x3FBC3F51BF12DFBF(iVar0);
	}
	else if (ANIMSCENE::_0xD8254CB2C586412B(iVar0, 0))
	{
		return 1f;
	}
	return 0f;
}

void func_396(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8)
{
	if (!uParam0->f_3)
	{
		uParam0->f_13 = sParam7;
		uParam0->f_14 = iParam8;
		if (uParam0->f_13 != -1)
		{
			uParam0->f_7 = MISC::_CREATE_VAR_STRING(2, sParam1, sParam7);
		}
		else
		{
			uParam0->f_7 = sParam1;
		}
		uParam0->f_8 = sParam2;
		uParam0->f_5 = func_490(uParam0->f_7, joaat("INPUT_INTERACT_LOCKON_POS"), 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("MEDIUM_TIMED_EVENT"), 0);
		uParam0->f_6 = func_490(uParam0->f_8, joaat("INPUT_INTERACT_LOCKON_NEG"), 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("MEDIUM_TIMED_EVENT"), 0);
		if (uParam0->f_14 < uParam0->f_13)
		{
			func_491(uParam0->f_5, 1);
		}
		func_492(uParam0->f_5, 17, 1, 1);
		func_492(uParam0->f_6, 17, 1, 1);
		func_493(uParam0->f_5, 6, 1);
		func_493(uParam0->f_6, 6, 1);
		*uParam0 = 0;
		uParam0->f_1 = iParam4;
		uParam0->f_10 = iParam3;
		if (iParam5 == 0)
		{
			uParam0->f_11 = MISC::GET_GAME_TIMER();
			uParam0->f_9 = MISC::GET_GAME_TIMER() + 10000;
			uParam0->f_12 = 0;
		}
		else
		{
			uParam0->f_11 = MISC::GET_GAME_TIMER();
			uParam0->f_9 = (MISC::GET_GAME_TIMER() + BUILTIN::ROUND((BUILTIN::TO_FLOAT(iParam5) / 2f)));
			uParam0->f_12 = iParam5;
		}
		uParam0->f_16 = 0f;
		uParam0->f_17 = 0f;
		uParam0->f_2 = iParam6;
		uParam0->f_4 = 0;
		uParam0->f_15 = HUD::_UIPROMPT_SET_HORIZONTAL();
		uParam0->f_3 = 1;
		if (uParam0->f_2 != 0)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("MissionChoice");
		}
		AUDIO::_0x6339C1EA3979B5F7("make_decision", "player_decision_moment_scenes");
	}
}

bool func_397(var uParam0)
{
	return uParam0->f_3;
}

int func_398(var uParam0)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	float fVar3;

	if (*uParam0 == 0)
	{
		if (!func_174(uParam0->f_5) || !func_174(uParam0->f_6))
		{
			return 0;
		}
		if ((HUD::_0xB60C9F9ED47ABB76(((*Global_1945938)[uParam0->f_5 /*18*/])->f_3) && func_494(uParam0->f_5, 1)) || func_495(uParam0->f_5, 1))
		{
			if (func_496(uParam0->f_5, 1))
			{
				uParam0->f_4 = 1;
			}
			*uParam0 = 1;
			return 1;
		}
		if ((HUD::_0xB60C9F9ED47ABB76(((*Global_1945938)[uParam0->f_6 /*18*/])->f_3) && func_494(uParam0->f_6, 1)) || func_495(uParam0->f_6, 1))
		{
			if (func_496(uParam0->f_6, 1))
			{
				uParam0->f_4 = 1;
			}
			*uParam0 = 2;
			return 1;
		}
		iVar0 = MISC::GET_GAME_TIMER();
		if (iVar0 > uParam0->f_9)
		{
			if (uParam0->f_1 == 1 || (uParam0->f_1 == 0 && uParam0->f_10 > 0))
			{
				if (!HUD::_UIPROMPT_HAS_HOLD_AUTO_FILL_MODE(((*Global_1945938)[uParam0->f_5 /*18*/])->f_3))
				{
					fVar2 = func_497(uParam0->f_6, 1);
					fVar3 = func_497(uParam0->f_5, 1);
					if ((fVar2 == 0f || fVar2 < uParam0->f_16) && (fVar3 == 0f || fVar3 < uParam0->f_17))
					{
						func_175(&(uParam0->f_5), 1, 1);
						if (uParam0->f_12 > 0)
						{
							bVar1 = ((uParam0->f_11 + uParam0->f_12) - iVar0 + 20);
							uParam0->f_5 = func_490(uParam0->f_7, joaat("INPUT_INTERACT_LOCKON_POS"), 6, 600, bVar1, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 1);
						}
						else
						{
							uParam0->f_5 = func_490(uParam0->f_7, joaat("INPUT_INTERACT_LOCKON_POS"), 6, 600, 10000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 1);
						}
						func_175(&(uParam0->f_6), 1, 1);
						uParam0->f_6 = func_490(uParam0->f_8, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
						if (uParam0->f_14 < uParam0->f_13)
						{
							func_491(uParam0->f_5, 1);
						}
						func_493(uParam0->f_5, 6, 1);
						func_493(uParam0->f_6, 6, 1);
						func_492(uParam0->f_5, 17, 1, 1);
						func_492(uParam0->f_6, 17, 1, 1);
					}
					else
					{
						uParam0->f_16 = fVar2;
						uParam0->f_17 = fVar3;
					}
				}
			}
			else if (!HUD::_UIPROMPT_HAS_HOLD_AUTO_FILL_MODE(((*Global_1945938)[uParam0->f_6 /*18*/])->f_3))
			{
				fVar2 = func_497(uParam0->f_5, 1);
				fVar3 = func_497(uParam0->f_6, 1);
				if ((fVar2 == 0f || fVar2 < uParam0->f_16) && (fVar3 == 0f || fVar3 < uParam0->f_17))
				{
					func_175(&(uParam0->f_6), 1, 1);
					if (uParam0->f_12 > 0)
					{
						bVar1 = ((uParam0->f_11 + uParam0->f_12) - iVar0 + 20);
						uParam0->f_6 = func_490(uParam0->f_8, joaat("INPUT_INTERACT_LOCKON_NEG"), 6, 600, bVar1, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 1);
					}
					else
					{
						uParam0->f_6 = func_490(uParam0->f_8, joaat("INPUT_INTERACT_LOCKON_NEG"), 6, 600, 10000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 1);
					}
					func_175(&(uParam0->f_5), 1, 1);
					uParam0->f_5 = func_490(uParam0->f_7, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
					if (uParam0->f_14 < uParam0->f_13)
					{
						func_491(uParam0->f_5, 1);
					}
					func_493(uParam0->f_5, 6, 1);
					func_493(uParam0->f_6, 6, 1);
					func_492(uParam0->f_5, 17, 1, 1);
					func_492(uParam0->f_6, 17, 1, 1);
				}
				else
				{
					uParam0->f_16 = fVar2;
					uParam0->f_17 = fVar3;
				}
			}
		}
		return 0;
	}
	return 1;
}

bool func_399(var uParam0)
{
	return *uParam0 == 1;
}

bool func_400(var uParam0)
{
	return *uParam0 == 2;
}

void func_401(var uParam0, var uParam1, var uParam2)
{
	uParam0->f_2 = uParam1;
	uParam0->f_2.f_1 = uParam2;
}

int func_402()
{
	if (Global_1935630->f_44 != 0 && Global_1935630->f_44 != joaat("WEAPON_UNARMED"))
	{
		return 1;
	}
	return 0;
}

float func_403(var uParam0)
{
	int iVar0;

	iVar0 = func_234(uParam0);
	switch (iVar0)
	{
		case 22:
			return 0.806f;
		case 24:
			return 0.697f;
		case 26:
			return 0.69f;
		case 27:
			return 0.331f;
		case 28:
			return 0.966f;
		case 29:
			return 0.902f;
		default:
			break;
	}
	return 1f;
}

int func_404(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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

	if (!func_498(bParam0, 0))
	{
		return 0;
	}
	if (!func_499(bParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_500(bParam0, &bVar0, iParam1))
	{
		return 0;
	}
	func_501(bParam0, bParam2);
	iVar2 = 0;
	if (func_502(bParam0, 0, 0) == 0)
	{
		if (func_503(bParam0))
		{
			iVar5 = func_504(bParam0);
			iVar6 = func_505(iVar5);
			iVar7 = func_506(iVar6) + 1;
			func_507(iVar5);
			if (func_508(38))
			{
				func_509(483, 0);
			}
			else
			{
				func_509(482, 0);
			}
			if (iVar7 == func_510(iVar6))
			{
				func_404(func_511(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_271() && func_512(4))
				{
					if (func_271() && (func_513(38) || func_508(38)))
					{
						func_515(38, func_511(iVar6), 0, 0, func_514(), 0, -1, 0);
						func_516(2);
					}
					else
					{
						func_515(38, func_511(iVar6), 0, 0, func_514(), 0, -1, 0);
						func_516(1);
					}
				}
			}
			else if (func_271() && func_512(4))
			{
				if (func_271() && (func_513(38) || func_508(38)))
				{
					func_515(38, 0, 0, 0, func_514(), 0, -1, 0);
					func_516(2);
				}
				else
				{
					func_515(38, 0, 0, 0, func_514(), 0, -1, 0);
					func_516(1);
				}
			}
			if (func_271() && func_512(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_271() && (func_513(38) || func_508(38)))
					{
						func_517(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_517(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_518(bParam0) == joaat("clothing"))
	{
		if ((!func_519(bParam0, 866047851) && !func_519(bParam0, -1979000645)) && !func_519(bParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_520(bParam0, 8388608) && !func_521(28))
	{
		func_522(28);
	}
	if (!bVar3)
	{
		if (func_519(bParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_523(bParam0) == -1447088266)
			{
				bVar1 = func_525(func_524(bParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(bVar1))
				{
					if (func_208() == -1)
					{
						func_526(bVar1);
					}
					if (func_527(0) && func_528(bVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_529(bParam0, bVar0, iParam5);
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
					if (func_208() == -1)
					{
						func_526(bParam0);
					}
					if (func_527(0) && func_528(bParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_529(bVar1, bVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_518(bParam0) == joaat("weapon"))
		{
			if (!func_530(bParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_518(bParam0) == joaat("ammo") && func_531(bParam0))
		{
			if (!func_532(bParam0, &bVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_519(bParam0, 866047851))
		{
			func_533(bParam0);
		}
		else if (func_519(bParam0, 2000026003))
		{
			func_534(bParam0);
		}
		else if (func_519(bParam0, -103750053))
		{
			func_173(func_535(joaat("CLAWS_COLLECTED")), bVar0);
		}
		else if (bParam0 == joaat("PROVISION_ALLIGATOR_TOOTH"))
		{
			func_173(func_536(joaat("collected"), joaat("ALLIGATOR_TOOTH")), bVar0);
		}
		else if (func_519(bParam0, -121341956) && !func_519(bParam0, 606799272))
		{
			if (bParam0 != joaat("WEAPON_KIT_DETECTOR") && bParam0 != 1993672959)
			{
				if (func_461(((*Global_1835011)[4 /*74*/])->f_1, 1))
				{
					func_509(498, 0);
				}
			}
			if (func_519(bParam0, -2017733358) || func_519(bParam0, -1369131378))
			{
				func_537(bParam0);
			}
		}
		else if (func_519(bParam0, -136654233))
		{
			if (func_519(bParam0, -1021472396))
			{
			}
		}
		else if (func_519(bParam0, -1466706512) && func_519(bParam0, 1147021565))
		{
			func_509(484, 0);
		}
		else if (func_519(bParam0, 1147021565) && func_519(bParam0, -524514947))
		{
		}
		else if (func_519(bParam0, 554195525))
		{
		}
		else if (func_519(bParam0, 589988438))
		{
			if (func_538())
			{
				func_539(joaat("reward_small"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_519(bParam0, 787083290) && func_519(bParam0, 949916894))
		{
			func_540(bParam0);
		}
		else if (func_519(bParam0, -1718133314))
		{
			func_541(bParam0);
		}
		else if (func_519(bParam0, -1738650224))
		{
			func_542(bParam0);
		}
		else if (func_519(bParam0, -1112814642) && func_519(bParam0, 949916894))
		{
			func_543(bParam0);
		}
		else if (bParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_519(bParam0, 1841149704))
		{
			func_544();
		}
		else if (func_519(bParam0, 606799272))
		{
			func_545(bParam0, iParam1);
			func_546(bParam0);
		}
		else if (func_519(bParam0, -1112814642) && func_519(bParam0, -1697809989))
		{
			func_547(bParam0, 0, 0, 0);
		}
		else if (func_519(bParam0, -2017733358) || func_519(bParam0, -1369131378))
		{
			func_537(bParam0);
		}
		else if (func_519(bParam0, -1921346699))
		{
			if (func_208() != -1)
			{
				return 0;
			}
			func_548(bParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_519(bParam0, 1192444843))
		{
			switch (bParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!func_549(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0))
					{
						func_404(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!func_549(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_404(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!func_549(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_404(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!func_549(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_404(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!func_549(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_404(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!func_549(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_404(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_519(bParam0, -839724752) && func_520(bParam0, 4))
		{
			if (!func_508(42))
			{
				func_550(bParam0);
			}
		}
		else if (func_519(bParam0, 1399091007))
		{
			func_551(bParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_519(bParam0, 1248798204))
		{
			bVar8 = false;
			switch (bParam0)
			{
				case -593948563: /* GXTEntry: "Legend of the East Satchel" */
					bVar8 = joaat("KIT_POUCH_LEGENDARY");
					break;
				case -1421669656: /* GXTEntry: "Tonics Satchel" */
					bVar8 = joaat("KIT_POUCH_REMEDIES");
					break;
				case -830181022: /* GXTEntry: "Ingredients Satchel" */
					bVar8 = joaat("KIT_POUCH_INGREDIENTS");
					break;
				case 917695895: /* GXTEntry: "Kit Satchel" */
					bVar8 = joaat("KIT_POUCH_KIT");
					break;
				case -1580595448: /* GXTEntry: "Provisions Satchel" */
					bVar8 = joaat("KIT_POUCH_PROVISIONS");
					break;
				case 1309992709: /* GXTEntry: "Materials Satchel" */
					bVar8 = joaat("KIT_POUCH_MATERIALS");
					break;
				case 1541618973: /* GXTEntry: "Valuables Satchel" */
					bVar8 = joaat("KIT_POUCH_VALUABLES");
					break;
			}
			if (bVar8 != 0)
			{
				func_404(bVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		switch (bParam0)
		{
			case 990323211: /* GXTEntry: "Bundle of Arrows" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1930309310;
				break;
			case 1143540373: /* GXTEntry: "Poison Throwing Knives" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1372580021;
				break;
			case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("bait_crickets");
				break;
			case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("bait_worms");
				break;
			case 224572565: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("jbox_sml_fancy");
				break;
			case -13395913: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("jbox_sml_fancy");
				break;
			case 1859340712: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("jbox_lrg_fancy");
				break;
			case -1614861441: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("jbox_lrg_fancy");
				break;
			case -1336735809: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("jbox_sml_plain");
				break;
			case -1109613870: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("jbox_sml_plain");
				break;
			case 637788839: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("jbox_lrg_plain");
				break;
			case -1161163727: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("jbox_lrg_plain");
				break;
			case 648503798: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("jbox_sml_poor");
				break;
			case -1434556002: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("jbox_sml_poor");
				break;
			case -843069275: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("jbox_lrg_poor");
				break;
			case 1356680930: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("jbox_lrg_poor");
				break;
			case joaat("UPGRADE_OFFHAND_HOLSTER"):
				func_522(24);
				if (&Global_1946804->f_1497.f_1[27 /*3*/] == &Global_1946804->f_57[27 /*11*/])
				{
					func_552(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_OFFHAND_HOLSTER"), 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_553(&bVar9, 0))
				{
					func_528(bVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case joaat("UPGRADE_BANDOLIER"):
				if (func_208() == -1 && &Global_1946804->f_1497.f_1[25 /*3*/] == &Global_1946804->f_57[25 /*11*/])
				{
					func_552(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_BANDOLIER"), 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case joaat("WEAPON_KIT_BINOCULARS"):
				break;
			case joaat("CLOTHING_LEGENDARY_EAST_OUTFIT"):
				func_509(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_554();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_555();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_556();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_557();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_558();
				break;
			case -102111672: /* GXTEntry: "Map" */
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584: /* GXTEntry: "Jack Hall Gang Map 1" */
				func_559(499813453, 854119837, 0);
				func_560(499813453, 0);
				func_561(1);
				break;
			case 2127812557: /* GXTEntry: "Jack Hall Gang Map 2" */
				func_559(499813453, -1292544588, 0);
				func_560(499813453, 0);
				func_561(2);
				break;
			case 808991383: /* GXTEntry: "Jack Hall Gang Map 3" */
				func_559(499813453, -1003325394, 0);
				func_560(499813453, 0);
				func_561(4);
				break;
			case 1134518629: /* GXTEntry: "High Stakes Treasure Map 1" */
				func_559(666607663, -335460405, 0);
				func_560(666607663, 0);
				func_562(1);
				break;
			case 902940106: /* GXTEntry: "High Stakes Treasure Map 2" */
				func_559(666607663, 903797617, 0);
				func_560(666607663, 0);
				func_562(2);
				break;
			case -418174898: /* GXTEntry: "High Stakes Treasure Map 3" */
				func_559(666607663, 669728650, 0);
				func_560(666607663, 0);
				func_562(4);
				break;
			case -648114971: /* GXTEntry: "The Poisonous Trail Map 1" */
				func_559(-220219788, 1214120047, 0);
				func_560(-220219788, 0);
				func_563(1);
				break;
			case 211153747: /* GXTEntry: "The Poisonous Trail Map 2" */
				func_559(-220219788, 655769340, 0);
				func_560(-220219788, 0);
				func_563(2);
				break;
			case -32876996: /* GXTEntry: "The Poisonous Trail Map 3" */
				func_559(-220219788, 885316185, 0);
				func_560(-220219788, 0);
				func_563(4);
				break;
			case 1191437462: /* GXTEntry: "Le Tresor des Morts Map 1" */
				func_559(218622660, -1491419385, 0);
				func_560(218622660, 0);
				func_564(1);
				break;
			case 1119149048: /* GXTEntry: "Le Tresor des Morts Riddle Note" */
				func_559(218622660, 1809565830, 0);
				func_560(218622660, 0);
				func_564(2);
				break;
			case 506073827: /* GXTEntry: "The Elemental Trail Map 1" */
				func_559(390004462, -628873767, 0);
				func_560(390004462, 0);
				func_565(1);
				break;
			case -1876986168: /* GXTEntry: "The Elemental Trail Map 2" */
				func_559(390004462, -405421956, 0);
				func_560(390004462, 0);
				func_565(2);
				break;
			case 2142623221: /* GXTEntry: "The Elemental Trail Map 3" */
				func_559(390004462, -1108972386, 0);
				func_560(390004462, 0);
				func_565(4);
				break;
			case 1508215381: /* GXTEntry: "Landmarks of Riches Map 1" */
				func_559(6410548, 1053716392, 0);
				func_560(6410548, 0);
				func_566(1);
				break;
			case -888935280: /* GXTEntry: "Landmarks of Riches Map 2" */
				func_559(6410548, 806507056, 0);
				func_560(6410548, 0);
				func_566(2);
				break;
			case -1252474566: /* GXTEntry: "Landmarks of Riches Map 3" */
				func_559(6410548, 1571925350, 0);
				func_560(6410548, 0);
				func_566(4);
				break;
			case -1465702449: /* GXTEntry: "Landmarks of Riches Map 4" */
				func_559(6410548, 1330352282, 0);
				func_560(6410548, 0);
				func_566(8);
				break;
			case joaat("CONSUMABLE_AGED_PIRATE_RUM"):
				func_568(242, func_567(joaat("CONSUMABLE_AGED_PIRATE_RUM")), 0);
				break;
			case joaat("CONSUMABLE_GINSENG_ELIXIER"):
				func_568(240, func_567(joaat("CONSUMABLE_GINSENG_ELIXIER")), 0);
				break;
			case joaat("CONSUMABLE_VALERIAN_ROOT"):
				func_568(241, func_567(joaat("CONSUMABLE_VALERIAN_ROOT")), 0);
				break;
			case -1080874779: /* GXTEntry: "Special Health Cure" */
			case joaat("CONSUMABLE_POTENT_MEDICINE"):
			case joaat("CONSUMABLE_MEDICINE"):
			case joaat("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_569(594, 1934060482 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health Bar." */, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_POTENT_RESTORATIVE"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM"):
			case 1566032147: /* GXTEntry: "Special Bitters" */
			case joaat("CONSUMABLE_RESTORATIVE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_569(594, 1110018439 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Stamina Bar." */, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SNAKE_OIL"):
			case joaat("CONSUMABLE_POTENT_SNAKE_OIL"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO"):
			case -223790555: /* GXTEntry: "Special Snake Oil" */
			case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_569(594, 1408511260 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1976480343: /* GXTEntry: "Special Miracle Tonic" */
			case joaat("CONSUMABLE_TONIC"):
			case joaat("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_569(594, -1228016946 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
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
					func_569(595, -103579 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1977068039: /* GXTEntry: "High Quality Beef and Eggs Stew" */
			case -399865011: /* GXTEntry: "Regional Beef and Eggs Stew" */
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_569(595, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_HAIR_TONIC"):
				func_509(488, 0);
				break;
			case joaat("CONSUMABLE_HAIR_GREASE"):
				func_509(491, 0);
				break;
			case joaat("CONSUMABLE_CIGARETTE_BOX"):
				func_509(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_404(func_570(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_404(func_571(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case joaat("CONSUMABLE_COFFEE_GNDS_REG"):
				if (func_521(1))
				{
					func_509(487, 0);
				}
				break;
			case joaat("KIT_GUN_OIL"):
				func_509(486, 0);
				break;
			case joaat("UPGRADE_UPG_MORTAR_PESTLE"):
				if (func_208() == -1)
				{
					bParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case joaat("UPGRADE_UPG_COFFEE_KIT"):
				func_509(496, 0);
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
		func_572(&bVar10);
		if (!func_573(bVar10, bVar0, iParam5))
		{
			return 0;
		}
		else if (!func_527(0))
		{
			return 1;
		}
		if (func_518(bParam0) == joaat("clothing"))
		{
			func_574(bParam0);
		}
		if (func_519(bParam0, -1979000645))
		{
			func_575(bParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_527(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_404(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_576(iVar2, 0);
		}
	}
	Var35 = { func_577(bParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var35))
	{
		STATS::_0x6A0184E904CDF25E(&Var35, bVar0);
	}
	func_578(bParam0);
	if (fParam6 > 0f)
	{
		if (func_519(bParam0, -839724752))
		{
			func_579(bParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_580(bParam0, bVar0, 0, bVar37, 0);
	}
	return 1;
}

void func_405(bool bParam0)
{
	func_89(&iLocal_550, 32);
	func_408(iLocal_551, iLocal_550);
	func_409(bParam0);
}

void func_406()
{
	if (func_88(Local_14.f_134, 8388608))
	{
		func_90(&(Local_14.f_134), 8388608);
		func_90(&(Local_14.f_134), 33554432);
	}
}

int func_407(var uParam0)
{
	if (!func_263())
	{
		if (Local_14.f_1 == 0)
		{
			func_401(uParam0, func_153(2), func_154(29));
		}
		else
		{
			func_401(uParam0, func_153(1), func_154(28));
		}
	}
	else
	{
		func_119(0);
		func_406();
		func_156(&Local_14, 0);
		func_90(&(Local_14.f_134), 67108864);
		func_89(&(Local_14.f_134), 64);
	}
	return 1;
}

void func_408(int iParam0, int iParam1)
{
	if (!func_111(iParam0))
	{
		return;
	}
	func_377(iParam0, iParam1);
}

void func_409(bool bParam0)
{
	if (!func_88(Local_14.f_134, 65536))
	{
		switch (Local_14.f_1)
		{
			case 0:
				func_144(&uLocal_708);
				func_581(2, 1);
				break;
			case 1:
				func_581(2, 12);
				break;
		}
		func_89(&(Local_14.f_134), 65536);
	}
	if (bParam0)
	{
		func_582(2);
	}
}

void func_410(int iParam0, bool bParam1, bool bParam2)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 301, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178, bParam2);
	PED::SET_PED_CONFIG_FLAG(iParam0, 330, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
}

int func_411(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_412(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

int func_413(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_583(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

int func_414(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (bParam2)
			{
				return (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iParam0, true) && PED::GET_MOUNT(iParam0) == iParam1);
			}
			else
			{
				return (PED::IS_PED_ON_MOUNT(iParam0) && PED::GET_MOUNT(iParam0) == iParam1);
			}
		}
	}
	return 0;
}

bool func_415(vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, 16384);
}

int func_416(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (!bParam1 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (!VOLUME::_0xF6A8A652A6B186CD(iParam0))
	{
	}
	iVar1 = 0;
	while (iVar1 < &Global_1911670)
	{
		iVar0 = Global_1911670[iVar1];
		if (!VOLUME::_0xF6A8A652A6B186CD(iVar0) || iVar0 == iParam0)
		{
			(*Global_1911670)[iVar1] = iParam0;
			return 1;
		}
		iVar1++;
	}
	return 0;
}

void func_417(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_584(bParam1))
		{
			func_585(bParam0, 41788943);
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
			func_586(bParam0, 0, 1);
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
			func_587(bParam0, 0);
			bVar0 = true;
		}
		func_588(bParam0, bParam2);
	}
	if (bVar0)
	{
		PED::_0xCC8CA3E88256E58F(bParam0, false, true, true, true, false);
	}
}

void func_418(var uParam0)
{
	uParam0->f_351 = 0;
}

void func_419(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_174(iParam0))
	{
		return;
	}
	iVar0 = func_315(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, MISC::_CREATE_VAR_STRING(2, sParam1, sParam2));
}

void func_420(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_174(iParam0))
	{
		return;
	}
	iVar0 = func_315(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, sParam1);
}

void func_421(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_174(iParam0))
	{
		return;
	}
	iVar0 = func_315(iParam0);
	if (bParam1)
	{
		func_589(iParam0, 4);
		func_590(iVar0, 1);
		func_591(iVar0, 1);
	}
	else
	{
		func_592(iParam0, 4);
		func_591(iVar0, 0);
	}
}

void func_422(int* iParam0, char* sParam1)
{
	if (func_174(iParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_420(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_314(iParam0, 1);
}

void func_423(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

int func_424(bool bParam0, int* iParam1)
{
	bool bVar0;
	bool bVar1;

	if (iParam1->f_11 & 1 != 0)
	{
		if (PED::_0x9682F850056C9ADE(bParam0))
		{
			return 1;
		}
	}
	if (iParam1->f_11 & 2 != 0)
	{
		if (PED::_0x3AA24CCC0D451379(bParam0))
		{
			return 1;
		}
	}
	bVar0 = iParam1->f_11 & 4 != false;
	bVar1 = iParam1->f_11 & 8 != false;
	if (bVar0 || bVar1)
	{
		if (PED::IS_PED_IN_COMBAT(bParam0, func_593((bVar1 && !bVar0), Global_35, 0)))
		{
			return 1;
		}
	}
	return 0;
}

void func_425(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_443((*uParam0)[iVar0 /*17*/]))
		{
			func_313((*uParam0)[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

void func_426(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_175(&(((*uParam1)[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			func_71(iParam0, 0);
		}
	}
}

int func_427(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;

	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		((*uParam2)[iVar0 /*17*/])->f_8 = 6;
		func_594(iParam0, (*uParam2)[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (func_174(((*uParam2)[iVar0 /*17*/])->f_6))
		{
			func_313((*uParam2)[iVar0 /*17*/], 11);
			return ((*Global_1945938)[((*uParam2)[iVar0 /*17*/])->f_6 /*18*/])->f_3;
		}
	}
	return 0;
}

int func_428(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_595(*uParam0);
	iVar1 = 2;
	switch (iVar0)
	{
		case 2:
			iVar1 = 295425337; /* GXTEntry: "Lemoyne Raider" */
			break;
		case 1:
			iVar1 = 768137552; /* GXTEntry: "Murfree Brood" */
			break;
		case 0:
			iVar1 = 1415388528; /* GXTEntry: "O\'Driscoll Boy" */
			break;
		case 4:
			iVar1 = 1449436544; /* GXTEntry: "Laramie" */
			break;
		case 3:
			iVar1 = -1807204482; /* GXTEntry: "Skinner Brother" */
			break;
		case 5:
			iVar1 = -1096701282; /* GXTEntry: "Del Lobo" */
			break;
	}
	return iVar1;
}

int func_429(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (((*uParam0)[iVar0 /*17*/])->f_7 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_430(int* iParam0, int* iParam1)
{
	if (!func_293(iParam0, 23))
	{
		if (iParam1->f_7 == joaat("INPUT_INTERACT_LOCKON_NEG"))
		{
			func_313(iParam1, 19);
			func_423(iParam0, 23);
			func_596(iParam1, 2);
		}
	}
}

int func_431(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (func_597(16))
	{
		return Global_1935630->f_58 == iParam0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
	{
		if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar0, bParam2, bParam3))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar0))
				{
					func_598(16);
					Global_1935630->f_58 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
					if (Global_1935630->f_58 == iParam0)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_432(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_594(iParam0, (*uParam1)[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT((*uParam1)[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_433(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

bool func_434(int iParam0)
{
	return (func_599(iParam0, 4) || func_599(iParam0, 5));
}

bool func_435(int iParam0)
{
	return func_599(iParam0, 7);
}

bool func_436(int iParam0)
{
	return func_599(iParam0, 6);
}

void func_437(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (func_443(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			func_594(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_438(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bool bVar0;
	bool bVar1;

	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_600(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_311(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_421(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_421(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_601(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

int func_439(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_494(iParam1, 1))
		{
			return 1;
		}
	}
	else if (func_602(iParam1, 1))
	{
		func_603(iParam1, 1);
		return 1;
	}
	return 0;
}

void func_440(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_170((*uParam0)[iVar0 /*17*/], bParam1, bParam2);
		iVar0++;
	}
}

int func_441(int* iParam0, float fParam1, bool bParam2)
{
	if (iParam0->f_2 != 3)
	{
		if (bParam2 || fParam1 > 0f)
		{
			return 1;
		}
	}
	return 0;
}

void func_442(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT3"), true);
		PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	}
}

int func_443(int* iParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_5))
	{
		return 1;
	}
	return 0;
}

int func_444(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;

	iVar1 = SCRIPTS::GET_NUMBER_OF_EVENTS(0);
	if (iVar1 > 0)
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar0))
			{
				case joaat("EVENT_PLAYER_PROMPT_TRIGGERED"):
					if (SCRIPTS::GET_EVENT_DATA(0, iVar0, &vVar3, 10))
					{
						iVar2 = vVar3.x;
						switch (iVar2)
						{
							case 9:
								if (ENTITY::IS_ENTITY_A_PED(vVar3.z))
								{
									if (iParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar3.z))
									{
										return 1;
									}
								}
								break;
						}
					}
					break;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_445()
{
	if (func_604(Global_35) || func_605(Global_35))
	{
		return 1;
	}
	return 0;
}

var func_446(bool bParam0, var uParam1)
{
	return AUDIO::_PLAY_AMBIENT_SPEECH1(bParam0, uParam1);
}

bool func_447(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1) != 0;
}

bool func_448(int iParam0)
{
	return func_447(iParam0, 2);
}

int func_449()
{
	if (func_606())
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

void func_450(var uParam0, var uParam1)
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

int func_451(bool bParam0, int iParam1, int iParam2)
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

int func_452(var uParam0)
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

void func_453(var uParam0)
{
	int iVar0;

	if (Global_1935630->f_38 == 0)
	{
		func_117(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(Global_1935630->f_34[iVar0])))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(&(Global_1935630->f_34[iVar0])))
				{
					func_118(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}

var func_454(bool bParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(bParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

int func_455(bool bParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (func_456(ENTITY::GET_ENTITY_COORDS(bParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_456(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_457(bool bParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(bParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(bParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

int func_458(bool bParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_459(bool bParam0)
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
	if (iVar0 == joaat("Prop_player_sleep_tent_a_frame") || iVar0 == joaat("WORLD_PLAYER_SLEEP_BEDROLL"))
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

int func_460(bool bParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_461(int iParam0, bool bParam1)
{
	switch (func_359(iParam0))
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

int func_462(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return 0;
	}
	if (PED::IS_PED_GROUP_MEMBER(bParam0, func_607(), 1))
	{
		return 1;
	}
	return 0;
}

int func_463(bool bParam0, bool bParam1)
{
	return func_608(bParam0, Global_1894899->f_2, bParam1);
}

void func_464(bool bParam0)
{
	if (bParam0)
	{
		Global_1935689 = 1;
	}
	else
	{
		Global_1935689 = 2;
	}
}

Vector3 func_465(char* sParam0)
{
	vector3 vVar0[24];

	StringCopy(&cVar0, sParam0, 24);
	return cVar0;
}

bool func_466(var uParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!AUDIO::_0xD89504D9D7D5057D(&vParam1))
	{
		bVar0 = AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION(&vParam1);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_609(vParam1, uParam0);
		if (bParam6)
		{
			AUDIO::PRELOAD_SCRIPT_CONVERSATION(&vParam1, true, true, bParam7);
		}
		else
		{
			AUDIO::START_SCRIPT_CONVERSATION(&vParam1, true, true, bParam7);
		}
		if (bParam4)
		{
			AUDIO::_0x40CA665AB9D8D505(&vParam1, iParam5);
		}
	}
	return bVar0;
}

int func_467(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = *uParam1;
	if (bParam2)
	{
		if (func_16(uParam0, 2))
		{
			return 1;
		}
		if (func_16(uParam0, 1))
		{
			return 1;
		}
	}
	if (!func_392(iVar0, &iVar1))
	{
		return 1;
	}
	if (((*uParam0)[iVar1 /*36*/])->f_35)
	{
		return 1;
	}
	if (uParam1->f_26 == 1)
	{
		return 1;
	}
	else if (uParam1->f_26 == 2)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_12))
	{
		uParam1->f_26 = 1;
		return 1;
	}
	if ((ANIMSCENE::_0x25557E324489393C(uParam0[iVar1 /*36*/]) && !ANIMSCENE::_0x59606519FF9D3EC2(uParam0[iVar1 /*36*/], 1)) && ANIMSCENE::_0x477122B8D05E7968(uParam0[iVar1 /*36*/], 1, 0))
	{
		if (!ANIMSCENE::_0xA9016536015DE29D(uParam0[iVar1 /*36*/], uParam1->f_12))
		{
			uParam1->f_26 = 1;
			return 1;
		}
		else
		{
			uParam1->f_26 = 2;
			return 0;
		}
	}
	return 0;
}

int func_468(var uParam0, char* sParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_1))
	{
		return 1;
	}
	if (ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		return 1;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(uParam0->f_1, uParam0->f_31, sParam1, false, true);
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2))
	{
		*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(uParam0->f_1, uParam0->f_31, uParam0->f_2, false, true);
	}
	else
	{
		*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(uParam0->f_1, uParam0->f_31, 0, false, true);
	}
	return 1;
}

int func_469(var uParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	bVar0 = ANIMSCENE::_0x477122B8D05E7968(*uParam0, 1, 0);
	bVar1 = ANIMSCENE::_0xCBFC7725DE6CE2E0(*uParam0, 0);
	if (bVar0 || bVar1)
	{
		return 1;
	}
	bVar3 = ANIMSCENE::_0x25557E324489393C(*uParam0);
	bVar2 = ANIMSCENE::_0x59606519FF9D3EC2(*uParam0, 1);
	if ((bVar3 && !bVar0) && !bVar2)
	{
		ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
		return 0;
	}
	if (bVar2)
	{
	}
	if (!bVar3)
	{
	}
	return 0;
}

int func_470(var uParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		return 1;
	}
	if (!ANIMSCENE::_0x477122B8D05E7968(*uParam0, 1, 0))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_6))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, uParam0->f_6, uParam0->f_5, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_4))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, uParam0->f_4, uParam0->f_3, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_7) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_8))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, uParam0->f_8, uParam0->f_7, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_9) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_10))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, uParam0->f_10, uParam0->f_9, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_11) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_12))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, uParam0->f_12, uParam0->f_11, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_14))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, uParam0->f_14, uParam0->f_13, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_15) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_16))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, uParam0->f_16, uParam0->f_15, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_17) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_18))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, uParam0->f_18, uParam0->f_17, 0);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_20))
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam0, uParam0->f_20, uParam0->f_19, false);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_22))
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam0, uParam0->f_22, uParam0->f_21, false);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_24))
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam0, uParam0->f_24, uParam0->f_23, false);
	}
	if (!func_411(uParam0->f_25) || !func_411(uParam0->f_28))
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(*uParam0, uParam0->f_25, uParam0->f_28, 2);
	}
	return 1;
}

int func_471(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = uParam0->f_209.f_1;
	iVar1 = uParam1->f_1;
	iVar2 = uParam0->f_209;
	iVar3 = *uParam1;
	if (iVar2 != iVar3)
	{
		return func_610(uParam0, iVar2, &(uParam1->f_27));
	}
	if (iVar0 != iVar1)
	{
		return func_611(uParam0);
	}
	return 1;
}

int func_472(bool bParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar5 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		switch (*uParam4)
		{
			case 0:
				if (bParam8 && PED::IS_PED_ON_MOUNT(bParam0))
				{
					vVar0 = { func_612(bParam0, iParam1, sParam2, sParam3, 0) };
					if (!func_411(vVar0))
					{
						if (func_613(ENTITY::GET_ENTITY_COORDS(bParam0, true, false), ENTITY::GET_ENTITY_COORDS(bParam0, true, false) + ENTITY::GET_ENTITY_FORWARD_VECTOR(bParam0), vVar0))
						{
							iVar5 = 131072;
						}
						else
						{
							iVar5 = 262144;
						}
					}
					TASK::TASK_DISMOUNT_ANIMAL(bParam0, iVar5, 0, 0, 0, false);
					*uParam4 = 1;
				}
				else
				{
					if (bParam6)
					{
						WEAPON::_0x4820A6939D7CEF28(Global_35, 0);
						WEAPON::_0xFCCC886EDE3C63EC(Global_35, 2, false);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar4);
					if (bParam6)
					{
						TASK::TASK_SWAP_WEAPON(false, 0, 0, 0, 0);
					}
					if (PED::_0xA911EE21EDF69DAF(bParam0))
					{
						iVar6 = PED::_0xD806CD2A4F2C2996(bParam0);
						TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(0, iVar6, ENTITY::GET_ENTITY_COORDS(bParam0, true, false), 2f, 8);
					}
					TASK::TASK_ENTER_ANIM_SCENE(false, iParam1, sParam2, sParam3, iParam5, bParam7, 0, 20000, -1082130432);
					func_614(bParam0, &iVar4, 0, 0, 1, 1);
					*uParam4 = 2;
				}
				break;
			case 1:
				if (!PED::IS_PED_ON_MOUNT(bParam0))
				{
					bVar3 = PED::_0x4C8B59171957BCF7(bParam0);
					if (!ENTITY::IS_ENTITY_DEAD(bVar3))
					{
						TASK::_TASK_SMART_FLEE_STYLE_PED(bVar3, bParam0, 6, 0, 4f, -1, false);
					}
					if (bParam6)
					{
						WEAPON::_0x4820A6939D7CEF28(Global_35, 0);
						WEAPON::_0xFCCC886EDE3C63EC(Global_35, 2, false);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar4);
					if (bParam6)
					{
						TASK::TASK_SWAP_WEAPON(false, 0, 0, 0, 0);
					}
					TASK::TASK_ENTER_ANIM_SCENE(false, iParam1, sParam2, sParam3, iParam5, bParam7, 0, 20000, -1082130432);
					func_614(bParam0, &iVar4, 0, 0, 1, 1);
					*uParam4 = 2;
				}
				break;
			case 2:
				if (bParam7)
				{
					if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(bParam0, iParam1))
					{
						return 1;
					}
				}
				else if (func_388(bParam0, 242628503))
				{
					if (!bParam6 || TASK::GET_SEQUENCE_PROGRESS(bParam0) > 0)
					{
						if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam1, sParam3))
						{
							if (!ANIMSCENE::_0x3B393716C3FD8237(bParam0) && ANIMSCENE::_0x337F1CC8EE895601(iParam1, sParam2))
							{
								*uParam4 = 3;
								return 1;
							}
						}
					}
				}
				break;
			case 3:
				return 1;
		}
	}
	return 0;
}

void func_473(var uParam0, var uParam1)
{
	*uParam1 = *uParam0;
	uParam1->f_1 = uParam0->f_1;
	uParam1->f_2 = uParam0->f_2;
	uParam1->f_2.f_1 = uParam0->f_2.f_1;
	uParam1->f_4 = uParam0->f_4;
	uParam1->f_4.f_1 = uParam0->f_4.f_1;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_6.f_1 = uParam0->f_6.f_1;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_8.f_1 = uParam0->f_8.f_1;
	uParam1->f_10 = uParam0->f_10;
	uParam1->f_10.f_1 = uParam0->f_10.f_1;
	uParam1->f_12 = uParam0->f_12;
	uParam1->f_13 = uParam0->f_13;
	uParam1->f_14 = uParam0->f_14;
	uParam1->f_15 = uParam0->f_15;
	uParam1->f_16 = uParam0->f_16;
	uParam1->f_17 = uParam0->f_17;
	uParam1->f_18 = uParam0->f_18;
	uParam1->f_19 = uParam0->f_19;
	uParam1->f_23 = uParam0->f_23;
	uParam1->f_24 = uParam0->f_24;
	uParam1->f_25 = uParam0->f_25;
	uParam1->f_20 = uParam0->f_20;
	uParam1->f_21 = uParam0->f_21;
	uParam1->f_22 = uParam0->f_22;
	uParam1->f_26 = uParam0->f_26;
	uParam1->f_27 = uParam0->f_27;
}

int func_474(int iParam0)
{
	int iVar0;

	iVar0 = func_583(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_615(iVar0);
}

int func_475(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	if (Global_1058888->f_40501 >= 32)
	{
		return -1;
	}
	Var0 = -1;
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	if (Global_1058888->f_40501 == 0)
	{
		*(Global_1058888->f_40501.f_1[Global_1058888->f_40501 /*2*/]) = { Var0 };
		Global_1058888->f_40501++;
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < Global_1058888->f_40501)
	{
		if (iParam0 == &Global_1058888->f_40501.f_1[iVar2 /*2*/])
		{
			*(Global_1058888->f_40501.f_1[iVar2 /*2*/]) = { Var0 };
			return iVar2;
		}
		else if (iParam0 > &Global_1058888->f_40501.f_1[iVar2 /*2*/])
		{
			iVar2++;
		}
		else if (iParam0 < &Global_1058888->f_40501.f_1[iVar2 /*2*/])
		{
			func_616(iVar2);
			*(Global_1058888->f_40501.f_1[iVar2 /*2*/]) = { Var0 };
			return iVar2;
		}
	}
	if (Global_1058888->f_40501 < 31)
	{
		iVar2 = Global_1058888->f_40501;
		*(Global_1058888->f_40501.f_1[iVar2 /*2*/]) = { Var0 };
		Global_1058888->f_40501++;
		if (Global_1058888->f_40501 > 32)
		{
			Global_1058888->f_40501 = 32;
		}
		return iVar2;
	}
	return -1;
}

void func_476()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

int func_477()
{
	if (iLocal_579 <= 0 && func_162(&Local_14) < 1.9f)
	{
		return 1;
	}
	return 0;
}

int func_478(bool bParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		if (bParam0)
		{
			if (func_162(&Local_14) > 5f)
			{
				return 0;
			}
		}
		if (func_83(Global_35, bLocal_562, 0, 1) && PED::IS_PED_FACING_PED(Local_14.f_3, Global_35, 120f))
		{
			return 1;
		}
	}
	return 0;
}

bool func_479(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

void func_480(var uParam0)
{
	int iVar0;

	iVar0 = func_486(1, 6, iLocal_576);
	iLocal_576 = iVar0;
	switch (iVar0)
	{
		case 1:
			func_401(uParam0, func_153(3), func_154(31));
			break;
		case 2:
			func_401(uParam0, func_153(3), func_154(32));
			break;
		case 3:
			func_401(uParam0, func_153(3), func_154(33));
			break;
		case 4:
			func_401(uParam0, func_153(3), func_154(34));
			break;
		case 5:
			func_401(uParam0, func_153(3), func_154(35));
			break;
	}
}

void func_481(var uParam0)
{
	int iVar0;

	if (!func_309())
	{
		iVar0 = func_486(0, 4, iLocal_572);
		iLocal_572 = iVar0;
		switch (iVar0)
		{
			case 0:
				func_401(uParam0, func_153(0), func_154(18));
				break;
			case 1:
				func_401(uParam0, func_153(0), func_154(12));
				break;
			case 2:
				func_401(uParam0, func_153(0), func_154(16));
				break;
			case 3:
				func_401(uParam0, func_153(0), func_154(13));
				break;
		}
	}
	else
	{
		iVar0 = func_486(0, 6, iLocal_572);
		iLocal_572 = iVar0;
		switch (iVar0)
		{
			case 0:
				func_401(uParam0, func_153(0), func_154(18));
				break;
			case 1:
				func_401(uParam0, func_153(0), func_154(12));
				break;
			case 2:
				func_401(uParam0, func_153(0), func_154(16));
				break;
			case 3:
				func_401(uParam0, func_153(0), func_154(13));
				break;
			case 4:
				func_401(uParam0, func_153(0), func_154(14));
				break;
			case 5:
				func_401(uParam0, func_153(0), func_154(17));
				break;
		}
	}
}

int func_482(var uParam0)
{
	if ((((func_88(*uParam0, 32) || func_88(*uParam0, 64)) || func_88(*uParam0, 512)) || func_88(*uParam0, 256)) || func_88(*uParam0, 8))
	{
		return 1;
	}
	return 0;
}

void func_483(var uParam0)
{
	int iVar0;

	iVar0 = func_486(0, 7, iLocal_574);
	iLocal_574 = iVar0;
	switch (iVar0)
	{
		case 0:
			func_401(uParam0, func_153(0), func_154(7));
			break;
		case 1:
			func_401(uParam0, func_153(0), func_154(10));
			break;
		case 2:
			func_401(uParam0, func_153(0), func_154(11));
			break;
		case 3:
			func_401(uParam0, func_153(0), func_154(8));
			break;
		case 4:
			func_401(uParam0, func_153(0), func_154(9));
			break;
		case 5:
			func_401(uParam0, func_153(0), func_154(12));
			break;
		case 6:
			func_401(uParam0, func_153(0), func_154(13));
			break;
	}
	iLocal_577++;
}

void func_484(var uParam0, int iParam1, var uParam2)
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

	if (!VOLUME::_DOES_VOLUME_EXIST(*uParam0))
	{
		return;
	}
	if (!ITEMSET::IS_ITEMSET_VALID(*iParam1))
	{
		*iParam1 = ITEMSET::CREATE_ITEMSET(true);
		*uParam2 = 0;
	}
	if (!*uParam2)
	{
		iVar0 = ITEMSET::CREATE_ITEMSET(true);
		iVar3 = ENTITY::_0x886171A12F400B89(*uParam0, iVar0, 1);
		if (iVar3 > 0)
		{
			iVar4 = 0;
			while (iVar4 < iVar3)
			{
				iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar0);
				iVar2 = MISC::_0x3FFB15534067DCD4(iVar1);
				if (ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					ITEMSET::ADD_TO_ITEMSET(iVar1, *iParam1);
				}
				iVar4++;
			}
		}
		ITEMSET::DESTROY_ITEMSET(iVar0);
		*uParam2 = 1;
	}
	if (*uParam2)
	{
		iVar7 = ITEMSET::GET_ITEMSET_SIZE(*iParam1);
		if (iVar7 > 0)
		{
			iVar8 = 0;
			while (iVar8 < iVar7)
			{
				iVar5 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar8, *iParam1);
				iVar6 = MISC::_0x3FFB15534067DCD4(iVar5);
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Global_35, iVar6, true);
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iVar6, Global_35, true);
				iVar8++;
			}
		}
	}
}

int func_485(bool bParam0, var uParam1, float fParam2, float fParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9)
{
	vector3 vVar0;
	int iVar3;

	if (ENTITY::IS_ENTITY_DEAD(Global_35) || ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return 0;
	}
	if (bParam9)
	{
		if (func_618(func_617(Global_35, 0, 1, 0)) || func_618(func_617(Global_35, 1, 1, 0)))
		{
			WEAPON::_0x94A3C1B804D291EC(Global_35, 1, 0, 1, 0);
			return 0;
		}
	}
	if (!bParam8)
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(bParam0, true, false) + ENTITY::GET_ENTITY_FORWARD_VECTOR(bParam0) * Vector(fParam2, fParam2, fParam2) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(bParam0, true, false) + func_619(ENTITY::GET_ENTITY_COORDS(Global_35, true, false) - ENTITY::GET_ENTITY_COORDS(bParam0, true, false), fParam2) };
	}
	if (((!func_620(Global_35, vVar0, fParam3, 1, 1) && !func_387(Global_35, bParam0, 1f)) && !func_387(bParam0, Global_35, 1f)) || !*uParam1)
	{
		if (!func_388(Global_35, 242628503))
		{
			if (bParam5)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam7, false);
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar3);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar0, 1f, iParam4, fParam3, false, (ENTITY::GET_ENTITY_HEADING(bParam0) - 180f));
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(false, bParam0, 0, -1082130432, -1082130432, -1082130432);
			TASK::CLOSE_SEQUENCE_TASK(iVar3);
			TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar3);
			PED::SET_PED_KEEP_TASK(Global_35, true);
			TASK::CLEAR_SEQUENCE_TASK(&iVar3);
			*uParam1 = 1;
		}
	}
	else if (!func_388(Global_35, 242628503))
	{
		if (bParam5 && bParam6)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, iParam7, false);
		}
		*uParam1 = 0;
		return 1;
	}
	return 0;
}

int func_486(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(iParam0, iParam1);
	if (iVar0 == iParam2)
	{
		if (func_621())
		{
			iVar0 = (iVar0 - 1);
		}
		else
		{
			iVar0++;
		}
		if (iVar0 < iParam0)
		{
			iVar0 = iParam0;
		}
		else if (iVar0 >= iParam1)
		{
			iVar0 = (iParam1 - 1);
		}
		if (iVar0 == iParam0 && iParam0 == iParam2)
		{
			iVar0++;
		}
		else if (iVar0 == (iParam1 - 1) && (iParam1 - 1) == iParam2)
		{
			iVar0 = (iVar0 - 1);
		}
		if (iVar0 < iParam0 || iVar0 >= iParam1)
		{
			iVar0 = func_622(func_621(), iParam0, (iParam1 - 1));
		}
	}
	return iVar0;
}

int func_487(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_488(var uParam0, int iParam1, bool bParam2)
{
	switch (uParam0->f_146.f_349)
	{
		case 1:
			*iParam1 = &uParam0->f_146[uParam0->f_146.f_181 /*36*/];
			break;
		case 2:
			*iParam1 = &uParam0->f_146[uParam0->f_146.f_237 /*36*/];
			break;
		case 3:
			*iParam1 = &uParam0->f_146[uParam0->f_146.f_265 /*36*/];
			break;
		case 4:
			*iParam1 = &uParam0->f_146[uParam0->f_146.f_293 /*36*/];
			break;
	}
	if (!ANIMSCENE::_0x25557E324489393C(*iParam1))
	{
		*iParam1 = -1;
		return 0;
	}
	if (bParam2 && ((!ANIMSCENE::_0x477122B8D05E7968(*iParam1, 1, 0) || !ANIMSCENE::_0xCBFC7725DE6CE2E0(*iParam1, 0)) || ANIMSCENE::_0xD8254CB2C586412B(*iParam1, 0)))
	{
		*iParam1 = -1;
		return 0;
	}
	return 1;
}

char* func_489(var uParam0)
{
	switch (uParam0->f_146.f_349)
	{
		case 1:
			return uParam0->f_146.f_181.f_12;
		case 2:
			return uParam0->f_146.f_237.f_12;
		case 3:
			return uParam0->f_146.f_265.f_12;
		case 4:
			return uParam0->f_146.f_293.f_12;
	}
	return "";
}

int func_490(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
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
	while (iVar0 < 48)
	{
		if (func_447(iVar0, 2))
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
		func_623(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, bParam4, iParam5, bParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_491(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_174(iParam0))
	{
		return;
	}
	iVar0 = func_315(iParam0);
	HUD::_UIPROMPT_SET_ENABLED(((*Global_1945938)[iVar0 /*18*/])->f_3, !bParam1);
}

void func_492(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_174(iParam0))
	{
		return;
	}
	iVar0 = func_315(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam1, iParam2);
}

void func_493(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_174(iParam0))
	{
		return;
	}
	iVar0 = func_315(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_0xF4A5C4509BF923B1(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam1);
}

bool func_494(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_174(iParam0))
	{
		return false;
	}
	iVar0 = func_315(iParam0);
	if (HUD::_0xCD072523791DDC1B(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

bool func_495(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_174(iParam0))
	{
		return false;
	}
	iVar0 = func_315(iParam0);
	return HUD::_UIPROMPT_IS_JUST_PRESSED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

bool func_496(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_174(iParam0))
	{
		return false;
	}
	iVar0 = func_315(iParam0);
	if (!HUD::_0xB60C9F9ED47ABB76(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return PAD::IS_CONTROL_PRESSED(2, ((*Global_1945938)[iVar0 /*18*/])->f_4);
	}
	return HUD::_UIPROMPT_IS_HOLD_MODE_RUNNING(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

float func_497(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_174(iParam0))
	{
		return 0f;
	}
	iVar0 = func_315(iParam0);
	if (HUD::_0xCD072523791DDC1B(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return HUD::_UIPROMPT_GET_MASH_MODE_PROGRESS(((*Global_1945938)[iVar0 /*18*/])->f_3);
	}
	return HUD::_0x81801291806DBC50(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

bool func_498(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(bParam0, iParam1);
}

int func_499(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_208() == -1)
	{
		if (func_624(bParam0) && func_625(bParam0))
		{
			func_626(bParam0, iParam1, 1, &bParam2, iParam3);
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

int func_500(bool bParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	*bParam1 = iParam2;
	func_627(bParam0, bParam1);
	Var0 = { func_628(bParam0, 0, 1) };
	iVar5 = func_629(bParam0, &Var0, 0, 0);
	iVar6 = func_630(bParam0, 0);
	if ((iVar5 > 1 && !func_631()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_519(bParam0, -2051813666))
		{
			func_509(583, 1);
		}
		else
		{
			func_509(582, 0);
		}
	}
	if (func_632(bParam0, &Var0, *bParam1, 0, 0))
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

void func_501(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_633(bParam0, -949239683))
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

int func_502(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	if (!func_498(bParam0, 0))
	{
		return 0;
	}
	iVar0 = func_518(bParam0);
	if (iVar0 == joaat("ammo") || (bParam1 && iVar0 == joaat("weapon")))
	{
		bVar1 = func_634(bParam0, 1);
		if (bVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, bVar1);
		}
	}
	else if (iVar0 == joaat("weapon"))
	{
		return func_635(bParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_636(bParam2), bParam0, 0);
	return iVar2;
}

bool func_503(bool bParam0)
{
	if (func_208() != -1)
	{
		return false;
	}
	return func_504(bParam0) != 0;
}

int func_504(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < func_637())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (bParam0 == func_638(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_505(int iParam0)
{
	return COLLECTION::_0x6052B4DE6657684F(iParam0);
}

int func_506(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < func_637())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_505(iVar0))
		{
			if (func_549(func_638(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_507(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	func_639(48);
	func_126(0, -1);
}

int func_508(int iParam0)
{
	if (func_208() != -1)
	{
		return 0;
	}
	return func_461(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
}

void func_509(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_640(iParam0, &iVar0, &iVar1);
	if (!func_641(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_642(iVar0, iVar1);
}

int func_510(int iParam0)
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, iParam0);
}

bool func_511(int iParam0)
{
	return COLLECTION::_0x93F2E7B5DB85657B(-2076669067, iParam0);
}

int func_512(int iParam0)
{
	if (func_208() != -1)
	{
		return 0;
	}
	return func_461(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
}

int func_513(int iParam0)
{
	if (func_208() != -1)
	{
		return 0;
	}
	if (!func_643(iParam0))
	{
		return 0;
	}
	return func_209(((*Global_1347702)[iParam0 /*49*/])->f_15);
}

int func_514()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_549(func_644(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_515(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
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
			if (func_271() && (func_513(38) || func_508(38)))
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
			iVar14 = -2076669067;
			break;
		case 39:
			if (func_271() && (func_513(39) || func_508(39)))
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
			iVar14 = joaat("dino_bones");
			break;
		case 43:
			if (iParam3 == -1791518714)
			{
				sVar0 = "MISSION_RCEXO1";
				sVar3 = "RCEXO1_DESC";
				iVar10 = 30;
			}
			else if (iParam3 == -2087881550)
			{
				sVar0 = "MISSION_RCEXO2";
				sVar3 = "RCEXO2_DESC";
				iVar10 = 37;
			}
			else if (iParam3 == 1908068621)
			{
				sVar0 = "MISSION_RCEXO3";
				sVar3 = "RCEXO3_DESC";
				iVar10 = 40;
			}
			else if (iParam3 == 1611247019)
			{
				sVar0 = "MISSION_RCEXO4";
				sVar3 = "RCEXO4_DESC";
				iVar10 = 50;
			}
			else if (iParam3 == 1319635688)
			{
				sVar0 = "MISSION_RCEXO5";
				sVar3 = "RCEXO5_DESC";
				iVar10 = 25;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_EX_TITLE";
			sVar5 = "COL_EX_INTRO";
			vVar6 = { 2585.668f, -1009.616f, 44.97972f };
			iVar9 = func_645(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = joaat("COL_EX_INTRO");
			break;
		case 41:
			if (func_271() && (func_513(41) || func_508(41)))
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
			if (func_271() && (func_513(49) || func_508(49)))
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
			iVar14 = joaat("rock_carvings");
			break;
		case 51:
			sVar0 = "MISSION_RCTAX1";
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_TAXIDERMY_01";
			sVar4 = "COL_TX_TITLE";
			sVar5 = "COL_TX_INTRO";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = func_645(iParam3, 20);
			iVar14 = joaat("taxidermy");
			iVar11 = joaat("BLIP_RC_HOBBS");
			iVar13 = joaat("COL_TX_INTRO");
			break;
	}
	sVar2 = func_646(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_647(iParam0, iVar13, iVar14))
	{
	}
	if (func_648(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_649(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_650(iParam0, iVar13, iVar14, iParam3, bParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_651(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_652(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_516(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_517(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
			iVar7 = -2076669067;
			if (func_271() && (func_513(38) || func_508(38)))
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
			iVar7 = joaat("dino_bones");
			if (func_271() && (func_513(39) || func_508(39)))
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
			iVar7 = joaat("rock_carvings");
			if (func_271() && (func_513(49) || func_508(49)))
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
			iVar7 = joaat("taxidermy");
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
	if (iVar7 == -2076669067)
	{
		if (func_271() && (func_513(38) || func_508(38)))
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
			func_653(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, joaat("player_menu"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_653(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("player_menu"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_655(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, func_654(func_511(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_653(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("player_menu"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_653(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, joaat("player_menu"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == joaat("dino_bones"))
	{
		if (func_271() && (func_513(39) || func_508(39)))
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
			func_653(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("player_menu"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_653(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, joaat("player_menu"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == joaat("rock_carvings"))
	{
		if (func_271() && (func_513(49) || func_508(49)))
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
			func_653(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("player_menu"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_653(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, joaat("player_menu"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_653(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("player_menu"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_653(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, joaat("player_menu"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_518(bool bParam0)
{
	vector3 vVar0;

	if (!func_498(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_519(bool bParam0, int iParam1)
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

bool func_520(bool bParam0, int iParam1)
{
	if (!func_498(bParam0, 0))
	{
		return false;
	}
	return INVENTORY::_0x245D07651B1D183B(bParam0, iParam1);
}

int func_521(int iParam0)
{
	if (!func_656(iParam0))
	{
		return 0;
	}
	return func_657(iParam0);
}

void func_522(int iParam0)
{
	if (!func_656(iParam0))
	{
		return;
	}
	func_658(iParam0);
	func_659(iParam0);
}

int func_523(bool bParam0)
{
	struct<2> Var0;

	if (!func_498(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_524(bool bParam0, bool bParam1)
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
		case joaat("ammo_molotov"):
			bVar0 = joaat("WEAPON_THROWN_MOLOTOV");
			break;
		case -2006166057: /* GXTEntry: "Fire Bottle - Volatile" */
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
		case 424030678: /* GXTEntry: "Hatchet" */
			bVar0 = joaat("WEAPON_MELEE_HATCHET");
			break;
		case 446901936: /* GXTEntry: "Hunter Hatchet" */
			bVar0 = joaat("WEAPON_MELEE_HATCHET_HUNTER");
			break;
		case -1092841802: /* GXTEntry: "Rusted Hunter Hatchet" */
			bVar0 = joaat("WEAPON_MELEE_HATCHET_HUNTER_RUSTED");
			break;
		case -1452241321: /* GXTEntry: "Stone Hatchet" */
			bVar0 = joaat("WEAPON_MELEE_ANCIENT_HATCHET");
			break;
		case -1188697038: /* GXTEntry: "Cleaver" */
			bVar0 = joaat("WEAPON_MELEE_CLEAVER");
			break;
		case 1671758975: /* GXTEntry: "Double Bit Hatchet" */
			bVar0 = joaat("WEAPON_MELEE_HATCHET_DOUBLE_BIT");
			break;
		case -893514737: /* GXTEntry: "Rusted Double Bit Hatchet" */
			bVar0 = joaat("WEAPON_MELEE_HATCHET_DOUBLE_BIT_RUSTED");
			break;
		case -2063089161: /* GXTEntry: "Hewing Hatchet" */
			bVar0 = joaat("WEAPON_MELEE_HATCHET_HEWING");
			break;
		case -452897925: /* GXTEntry: "Viking Hatchet" */
			bVar0 = joaat("WEAPON_MELEE_HATCHET_VIKING");
			break;
		default:
			break;
	}
	if (func_498(bVar0, 0))
	{
		if (bParam1)
		{
			if (func_660(bVar0) || func_661(bVar0))
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

int func_525(bool bParam0, bool bParam1)
{
	if (!func_498(bParam0, 0))
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

void func_526(bool bParam0)
{
	int iVar0;

	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_618(bParam0))
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

int func_527(bool bParam0)
{
	if (func_208() == -1)
	{
		return 1;
	}
	return INVENTORY::_0x0FBBFFC891A97C81(func_636(bParam0));
}

int func_528(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_628(bParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_662((375 + iVar28), 1);
			if (func_663(bParam0, &Var0, iVar5, 0))
			{
				if (func_664(bParam0, &Var6, iVar5))
				{
					Var29 = { func_665(bParam0, Var0, iVar5, 0) };
					func_666(bParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_527(0))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, false))
					{
						return 0;
					}
					func_529(WEAPON::_0x5C2EA6C44F515F34(bParam0), bParam1, iParam6);
					func_667(bParam0, bParam1);
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

int func_529(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam1 < 1)
	{
		return 1;
	}
	if (!func_531(bParam0))
	{
		return 0;
	}
	if (!func_527(0))
	{
		return 0;
	}
	WEAPON::_0x106A811C6D3035F3(Global_35, bParam0, bParam1, iParam2);
	return 1;
}

int func_530(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	var uVar1;
	bool bVar6;
	bool bVar7;

	bVar0 = func_525(bParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(bVar0))
	{
		if (func_208() == -1)
		{
			func_526(bVar0);
			if (iParam1 == 1248274121)
			{
				func_668(bVar0);
			}
		}
		if (!func_632(bParam0, &uVar1, 1, 0, 0))
		{
			func_626(bParam0, 1, 0, bParam2, iParam1);
			bVar6 = func_669(bVar0);
			if (WEAPON::_0x6AD66548840472E5(bVar0))
			{
				func_528(bVar0, bVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (bVar0 == joaat("WEAPON_FISHINGROD") || bVar0 == joaat("WEAPON_KIT_BINOCULARS"))
			{
				func_528(bVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (bVar0 == joaat("WEAPON_LASSO"))
			{
				func_528(bVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_0x959383DCD42040DA(bVar0))
			{
				if (bVar0 == joaat("WEAPON_MELEE_KNIFE_JOHN") && !func_309())
				{
					return 0;
				}
				if (WEAPON::_0x2C83212A7AA51D3D(bParam0))
				{
				}
				else if (!func_670(bVar0))
				{
					func_528(bVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_528(bVar0, WEAPON::_0xD3750CCC00635FC2(bVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_0xD955FEE4B87AFA07(bVar0))
			{
				bVar7 = func_617(Global_35, 2, 0, 1);
				if ((((func_618(bVar7) && !Global_43890) && bVar7 != bVar0) && !func_549(joaat("UPGRADE_OFFHAND_HOLSTER"), 1, 0)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, bVar7);
				}
				if (func_618(bVar7) && func_549(joaat("UPGRADE_OFFHAND_HOLSTER"), 1, 0))
				{
					if (!func_528(bVar0, bVar6, bParam3, bParam4, 3, 1, iParam1, 0))
					{
						return 0;
					}
				}
				else if (!func_528(bVar0, bVar6, bParam3, bParam4, 0, 1, iParam1, 0))
				{
					return 0;
				}
			}
			else if (!func_528(bVar0, bVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_509(480, 1);
	}
	return 1;
}

bool func_531(bool bParam0)
{
	return WEAPON::_0x1F7977C9101F807F(bParam0);
}

int func_532(bool bParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;

	if (!func_531(bParam0))
	{
		return 0;
	}
	bVar4 = WEAPON::_0x7AA043F6C41D151E(bParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, bParam0);
	if (func_618(bVar4))
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
		iVar1 = WEAPON::_0xD3750CCC00635FC2(bVar4);
	}
	if (*bParam1 > 0)
	{
		iVar6 = *bParam1;
	}
	else if (*bParam1 < 0)
	{
		iVar6 = (iVar1 * MISC::ABSI(*bParam1));
	}
	if (func_549(joaat("PROVISION_TRINKET_CROW_BEAK"), 1, 0) && iParam2 == -897553835)
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
		func_568(func_671(bParam0), func_567(bParam0), 1);
		return 0;
	}
	if (iVar2 == (iVar3 + bVar0))
	{
		if (func_208() == -1)
		{
			if (func_461(((*Global_1835011)[14 /*74*/])->f_1, 1))
			{
				func_509(416, 0);
			}
		}
	}
	if (bVar0 == 0)
	{
		return 0;
	}
	if (func_527(0))
	{
		if (func_529(bParam0, bVar0, iParam2))
		{
			*bParam1 = bVar0;
			return 1;
		}
	}
	else
	{
		return func_573(bParam0, *bParam1, iParam2);
	}
	return 0;
}

void func_533(bool bParam0)
{
	var uVar0;

	if ((bParam0 == joaat("PROVISION_TALISMAN_EAGLE_TALON") && !func_672()) || bParam0 != joaat("PROVISION_TALISMAN_EAGLE_TALON"))
	{
		if (func_673(Global_35, bParam0, &uVar0))
		{
			func_552(PLAYER::PLAYER_PED_ID(), bParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (bParam0)
	{
		case joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH"):
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_558();
			break;
		case joaat("PROVISION_TALISMAN_BEAR_CLAW"):
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_558();
			break;
		case joaat("PROVISION_TALISMAN_BUFFALO_HORN"):
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_558();
			break;
		case joaat("PROVISION_TALISMAN_EAGLE_TALON"):
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_556();
			break;
		case joaat("PROVISION_TALISMAN_RAVEN_CLAW"):
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_554();
			break;
	}
}

void func_534(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("PROVISION_TRINKET_BEAVER_TOOTH"):
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_554();
			break;
		case joaat("PROVISION_TRINKET_BISON_HORN"):
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_555();
			break;
		case joaat("PROVISION_TRINKET_COUGAR_FANG"):
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case joaat("PROVISION_TRINKET_COYOTE_FANG"):
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case joaat("PROVISION_TRINKET_FOX_CLAW"):
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_556();
			break;
		case joaat("PROVISION_TRINKET_IGUANA_SCALE"):
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_557();
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
			func_558();
			break;
		case joaat("PROVISION_TRINKET_HAWK_TALON"):
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_674();
			break;
		case joaat("PROVISION_TRINKET_SHARK_TOOTH"):
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case joaat("PROVISION_TRINKET_TURTLE_SHELL"):
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_675();
			break;
		case joaat("PROVISION_TRINKET_CAT_EYE"):
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_535(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

struct<2> func_536(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_537(bool bParam0)
{
	bool bVar0;

	bVar0 = func_519(bParam0, -2017733358);
	if (func_676() < 3)
	{
		if (bVar0)
		{
			if (func_678(func_677(bParam0), bParam0))
			{
				func_568(79, func_567(func_677(bParam0)), 1);
			}
			else
			{
				func_568(78, func_567(func_677(bParam0)), 1);
			}
		}
		else
		{
			func_568(80, func_567(func_679(bParam0)), 1);
		}
	}
}

int func_538()
{
	if (((((func_680(839908568 /* GXTEntry: "Bounty Poster of Arthur" */, 400) || func_680(-1134030454 /* GXTEntry: "Bounty Notice" */, 400)) || func_680(joaat("DOCUMENT_ARTHUR_HIGH_BOUNTY_1"), 400)) || func_680(joaat("DOCUMENT_ARTHUR_HIGH_BOUNTY_2"), 400)) || func_680(joaat("DOCUMENT_ARTHUR_HAS_POSTER_1"), 400)) || func_680(joaat("DOCUMENT_ARTHUR_HAS_POSTER_2"), 400))
	{
		return 1;
	}
	return 0;
}

int func_539(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;

	iVar0 = func_681(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_682(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_683(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_540(bool bParam0)
{
	switch (bParam0)
	{
		case -625427311: /* GXTEntry: "Letter from Ms. Hobbs" */
			func_515(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_517(51, 0, 0, 0, 0, -1, 0);
			func_684(8192);
			break;
		case 581047644: /* GXTEntry: "Invitation from Ms. Hobbs" */
			func_515(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_517(51, 0, 0, 0, 0, -1, 0);
			func_684(524288);
			break;
		case -644199619: /* GXTEntry: "Invitation from Deborah MacGuiness" */
			func_515(39, 0, 0, 0, 0, 0, 1, 0);
			func_517(39, 0, 0, 0, 0, -1, 0);
			func_685(16);
			break;
		case 684296857: /* GXTEntry: "Invitation from Jeremy Gill" */
			func_515(41, 0, 0, 0, 0, 0, 1, 0);
			func_517(41, 0, 0, 0, 0, -1, 0);
			func_686(8);
			break;
		case 466137807: /* GXTEntry: "Invitation from Francis Sinclair" */
			func_515(49, 0, 0, 0, 0, 0, 1, 0);
			func_517(49, 0, 0, 0, 0, -1, 0);
			func_687(16);
			break;
		case -1087522507: /* GXTEntry: "Exotic Collector\'s List" */
			func_515(43, 0, 0, -1791518714, func_688(1), 0, -1, 0);
			func_689(1);
			break;
		case -405829000: /* GXTEntry: "Exotic Collector\'s List" */
			func_515(43, 0, 0, -2087881550, func_688(2), 0, -1, 0);
			func_689(2);
			break;
		case 378660860: /* GXTEntry: "Exotic Collector\'s List" */
			func_515(43, 0, 0, 1908068621, func_688(4), 0, -1, 0);
			func_689(4);
			break;
		case 1566111097: /* GXTEntry: "Exotic Collector\'s List" */
			func_515(43, 0, 0, 1611247019, func_688(8), 0, -1, 0);
			func_689(8);
			break;
		case 1276007140: /* GXTEntry: "Exotic Collector\'s List" */
			func_515(43, 0, 0, 1319635688, func_688(16), 0, -1, 0);
			func_689(16);
			break;
	}
}

void func_541(bool bParam0)
{
	if (func_690() == 1)
	{
		if (func_508(39))
		{
			func_509(342, 0);
		}
		else
		{
			func_509(343, 0);
			func_685(1);
		}
	}
	if (func_690() >= 30)
	{
		func_509(344, 0);
	}
	func_515(39, 0, 0, 0, 0, 0, -1, 0);
	func_517(39, 0, 0, func_690(), 30, 1, 0);
}

void func_542(bool bParam0)
{
	if (func_691() == 1)
	{
		if (func_508(49))
		{
			func_509(409, 0);
		}
		else
		{
			func_509(410, 0);
			func_687(1);
		}
	}
	if (func_691() >= 10)
	{
		func_509(411, 0);
	}
	func_515(49, 0, 0, 0, 0, 0, -1, 0);
	func_517(49, 0, 0, func_691(), 10, 1, 0);
}

void func_543(bool bParam0)
{
	char* sVar0;

	switch (bParam0)
	{
		case 1369162587: /* GXTEntry: "Hunting Request" */
			COLLECTION::_0x3EA62E56F386C997(-949689219, 1);
			func_509(437, 0);
			func_509(440, 0);
			func_692(-949689219, 444160793 /* GXTEntry: "Perfect Squirrel Carcass" */, &sVar0, 1, 0, 0);
			func_515(51, 0, 0, -949689219, sVar0, 0, -1, 0);
			func_517(51, 0, 0, sVar0, func_645(-949689219, 20), 1, 0);
			func_684(1);
			func_693(-748969569, 0, 0);
			break;
		case 1610047510: /* GXTEntry: "Hunting Request" */
			COLLECTION::_0x3EA62E56F386C997(-1248968496, 1);
			func_692(-1248968496, -1969404854 /* GXTEntry: "Perfect Cardinal Carcass" */, &sVar0, 1, 0, 0);
			func_515(51, 0, 0, -1248968496, sVar0, 0, -1, 0);
			func_517(51, 0, 0, sVar0, func_645(-1248968496, 20), 1, 0);
			func_684(8);
			break;
		case 1317879106: /* GXTEntry: "Hunting Request" */
			COLLECTION::_0x3EA62E56F386C997(1706369307, 1);
			func_692(1706369307, -832850511 /* GXTEntry: "Perfect Chipmunk Carcass" */, &sVar0, 1, 0, 0);
			func_515(51, 0, 0, 1706369307, sVar0, 0, -1, 0);
			func_517(51, 0, 0, sVar0, func_645(1706369307, 20), 1, 0);
			func_684(64);
			break;
		case 1062444751: /* GXTEntry: "Hunting Request" */
			COLLECTION::_0x3EA62E56F386C997(1520110311, 1);
			func_692(1520110311, -100913452 /* GXTEntry: "Perfect Songbird Carcass" */, &sVar0, 1, 0, 0);
			func_515(51, 0, 0, 1520110311, sVar0, 0, -1, 0);
			func_517(51, 0, 0, sVar0, func_645(1520110311, 20), 1, 0);
			func_684(512);
			break;
		case 754186760: /* GXTEntry: "Hunting Request" */
			COLLECTION::_0x3EA62E56F386C997(-1992824800, 1);
			func_509(438, 0);
			func_692(-1992824800, 905173572 /* GXTEntry: "Perfect Cedar Waxwing Carcass" */, &sVar0, 1, 0, 0);
			func_515(51, 0, 0, -1992824800, sVar0, 0, -1, 0);
			func_517(51, 0, 0, sVar0, func_645(-1992824800, 20), 1, 0);
			func_684(32768);
			break;
		default:
			func_509(439, 0);
			break;
	}
}

void func_544()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(-1278339625) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(-1278339625, -1316535105, true);
	}
}

void func_545(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (func_208() == -1)
	{
		if (!func_508(43))
		{
			if (bParam0 == 281887510)
			{
				func_509(348, 0);
			}
			else if (bParam0 == -164081697)
			{
				func_509(350, 0);
			}
			else if (bParam0 == -1161319399)
			{
				func_509(352, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
			{
				func_509(400, 0);
			}
		}
		else if (func_519(bParam0, 412399755))
		{
			func_694(-1791518714);
			if (func_695() == 0)
			{
				func_126(0, 10);
				iVar1 = func_696(bParam0, iParam1, 1);
				if (((bParam0 == 281887510 || bParam0 == -164081697) || bParam0 == -1161319399) || bParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
				{
					if (func_697(bParam0) < func_698(bParam0))
					{
						func_515(43, bParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_517(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_508(44))
		{
			if (bParam0 == -222563712)
			{
				func_509(354, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER"))
			{
				func_509(399, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
			{
				func_509(401, 0);
			}
		}
		else if (func_519(bParam0, 709057512))
		{
			func_694(-2087881550);
			if (func_695() == 1)
			{
				func_126(0, 10);
				iVar1 = func_696(bParam0, iParam1, 2);
				if ((bParam0 == -222563712 || bParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || bParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
				{
					if (func_697(bParam0) < func_698(bParam0))
					{
						func_515(43, bParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_517(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_508(45))
		{
			if (bParam0 == 2116770557)
			{
				func_509(359, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR"))
			{
				func_509(394, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_CIGAR"))
			{
				func_509(395, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
			{
				func_509(398, 0);
			}
		}
		else if (func_519(bParam0, -1478961327))
		{
			func_694(1908068621);
			if (func_695() == 2)
			{
				func_126(0, 10);
				iVar1 = func_696(bParam0, iParam1, 4);
				if (bParam0 == 2116770557)
				{
					if (!func_699(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("gator_eggs"), 0)) >= 25)
					{
						func_700(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("gator_eggs"), 0), 1);
						func_639(48);
					}
					if (func_697(bParam0) < func_698(bParam0))
					{
						func_515(43, bParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_517(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((bParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR") || bParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || bParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
				{
					if (func_697(bParam0) < func_698(bParam0))
					{
						func_515(43, bParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_517(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_508(46))
		{
			if (bParam0 == 2085530337)
			{
				func_509(356, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED"))
			{
				func_509(402, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL"))
			{
				func_509(404, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
			{
				func_509(406, 0);
			}
		}
		else if (func_519(bParam0, -1238404098))
		{
			func_694(1611247019);
			if (func_695() == 3)
			{
				func_126(0, 10);
				iVar1 = func_696(bParam0, iParam1, 8);
				if (((bParam0 == 2085530337 || bParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || bParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || bParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
				{
					if (func_697(bParam0) < func_698(bParam0))
					{
						func_515(43, bParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_517(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_508(47))
		{
			if (bParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL"))
			{
				func_509(396, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS"))
			{
				func_509(397, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS"))
			{
				func_509(405, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
			{
				func_509(403, 0);
			}
		}
		else if (func_519(bParam0, 1160548794))
		{
			func_694(1319635688);
			if (func_695() == 4)
			{
				func_126(0, 10);
				iVar1 = func_696(bParam0, iParam1, 16);
				if (((bParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || bParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || bParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || bParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
				{
					if (func_697(bParam0) < func_698(bParam0))
					{
						func_515(43, bParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_517(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_546(bool bParam0)
{
	int iVar0;

	if (bParam0 == 2116770557)
	{
		if (!func_699(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("gator_eggs"), 0)) >= 25)
		{
			func_700(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("gator_eggs"), 0), 1);
			func_639(48);
		}
	}
}

void func_547(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("taxidermy"), joaat("TAXIDERMY_ORDER"));
		if (func_549(func_701(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_702(bParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_703(bParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_548(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_208() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			iVar0 = MISC::_0x6F02B5E50511721E(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_539(0, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (bParam0)
	{
		case joaat("MONEY_ONE_DOLLAR"):
			func_539(-949580860, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493: /* GXTEntry: "$5.00" */
			func_539(-1171997683, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627: /* GXTEntry: "$10.00" */
			func_539(-2140931002, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377: /* GXTEntry: "Bill Fold" */
			func_539(joaat("reward_billfold"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086: /* GXTEntry: "Small Bill Fold" */
			func_539(joaat("reward_billfold_sml"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("money_billstack"):
			func_539(joaat("reward_billstack"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("money_coin"):
			func_539(joaat("reward_coin"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("money_coinpurse"):
			func_539(joaat("reward_coinpurse"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918: /* GXTEntry: "Coin Sack" */
			func_539(-1531790128, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("money_coinstack"):
			func_539(1351791770, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("money_moneyclip"):
			func_539(joaat("reward_moneyclip"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("money_moneystack"):
			func_539(joaat("reward_moneystack"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340: /* GXTEntry: "Money Pile" */
			if (!func_704())
			{
				func_539(1330954593, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740: /* GXTEntry: "Change Cup" */
			func_539(817681514, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264: /* GXTEntry: "Coin Cup" */
			func_539(1404311868, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970: /* GXTEntry: "$50.00" */
			func_539(-175152067, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -1027115192: /* GXTEntry: "$100.00" */
			func_539(-526915387, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -1064332555: /* GXTEntry: "$200.00" */
			func_539(101362741, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -1954478446: /* GXTEntry: "$45.00" */
			func_539(1458818027, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -518592739: /* GXTEntry: "$50.00" */
			func_539(-1957208512, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -2010073778: /* GXTEntry: "$70.00" */
			func_539(2066857461, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -700133011: /* GXTEntry: "$100.00" */
			func_539(803940201, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -1415414735: /* GXTEntry: "$120.00" */
			func_539(-1717765429, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case 2045548742: /* GXTEntry: "$150.00" */
			func_539(1379920914, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case 830381058: /* GXTEntry: "$350.00" */
			func_539(447209691, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
	}
}

bool func_549(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_498(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_518(bParam0);
	if (iVar0 == joaat("weapon"))
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
	else if (iVar0 == joaat("ammo"))
	{
		if (!func_705(bParam0, 1))
		{
			return false;
		}
	}
	return func_502(bParam0, 0, bParam2) >= iParam1;
}

void func_550(bool bParam0)
{
	if (func_508(41))
	{
		func_509(363, 0);
	}
	else
	{
		func_509(362, 0);
	}
	switch (bParam0)
	{
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY"):
			func_706(-1865241121);
			func_707(-642026005);
			func_708(-642026005);
			func_126(0, 10);
			break;
		case joaat("PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY"):
			func_706(2117142684);
			func_707(-940584364);
			func_708(-940584364);
			func_126(0, 10);
			break;
		case joaat("PROVISION_FISH_LAKE_STURGEON_LEGENDARY"):
			func_706(-1409326024);
			func_707(1972645282);
			func_708(1972645282);
			func_126(0, 10);
			break;
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY"):
			func_706(-641744968);
			func_707(1667205433);
			func_708(1667205433);
			func_126(0, 10);
			break;
		case joaat("PROVISION_FISH_LONGNOSE_GAR_LEGENDARY"):
			func_706(-946988203);
			func_707(1362715885);
			func_708(1362715885);
			func_126(0, 10);
			break;
		case joaat("PROVISION_FISH_MUSKIE_LEGENDARY"):
			func_706(-646136018);
			func_707(1053540370);
			func_708(1053540370);
			func_126(0, 10);
			break;
		case joaat("PROVISION_FISH_PERCH_LEGENDARY"):
			func_706(-955835837);
			func_707(-1100103852);
			func_708(-1100103852);
			func_126(0, 10);
			break;
		case joaat("PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY"):
			func_706(-179276075);
			func_707(-1409869209);
			func_708(-1409869209);
			func_126(0, 10);
			break;
		case joaat("PROVISION_FISH_ROCK_BASS_LEGENDARY"):
			func_706(-492711560);
			func_707(-1760235357);
			func_708(-1760235357);
			func_126(0, 10);
			break;
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY"):
			func_706(1764383959);
			func_707(-138366827);
			func_708(-138366827);
			func_126(0, 10);
			break;
		case joaat("PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY"):
			func_706(317501533);
			func_707(-1261163843);
			func_708(-1261163843);
			func_126(0, 10);
			break;
		case joaat("PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY"):
			func_706(817753087);
			func_707(-963523016);
			func_708(-963523016);
			func_126(0, 10);
			break;
		case joaat("PROVISION_FISH_BLUEGILL_LEGENDARY"):
			func_706(576606016);
			func_707(560825326);
			func_708(560825326);
			func_126(0, 10);
			break;
		case joaat("PROVISION_FISH_NORTHERN_PIKE_LEGENDARY"):
			func_706(814934957);
			func_707(858269539);
			func_708(858269539);
			break;
	}
}

void func_551(bool bParam0, int iParam1)
{
	var uVar0;

	func_709(bParam0, iParam1, &uVar0);
}

int func_552(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;

	if (bParam3 == -358215195)
	{
		Var0 = { func_628(bParam1, 1, 0) };
		bParam3 = func_710(Var0.f_4);
		if (bParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_712(bParam1, iParam2, func_711(bParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_713(1, (func_208() == -1 && bParam5), 1);
	switch (bParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && bParam1 != &Global_1946804->f_57[func_711(bParam3, 1) /*11*/])
			{
				func_714(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_715(32768) && bParam1 != &Global_1946804->f_57[func_711(bParam3, 1) /*11*/])
			{
				func_716();
				func_714(22, bParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_714(22, bParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_717(bParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_714(19, 0, iVar5, 0, 0);
		if ((bParam3 == 1742327865 || bParam3 == 1108822547) || bParam3 == 1145151482)
		{
			func_718(0);
			func_719(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_714(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

int func_553(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	bool bVar17;
	int iVar18;
	int iVar19;

	Var3.f_9 = -1591664384;
	bVar17 = false;
	*bParam0 = 0;
	iVar18 = func_617(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, 1, 0);
	iVar19 = func_617(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, 1, 0);
	if (func_720("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_721(&Var3, iVar2, iVar0, iVar1))
			{
				if (WEAPON::_0xD955FEE4B87AFA07(Var3.f_4))
				{
					if (!bParam1)
					{
						if (Var3.f_4 == iVar18 || Var3.f_4 == iVar19)
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
						func_722(iVar0);
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

void func_554()
{
	PLAYER::_0x11A7FF918EF6BC66(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_60));
}

void func_555()
{
	float fVar0;
	float fVar1;

	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	PLAYER::_0x497A6539BB0E8787(PLAYER::PLAYER_ID(), (1f - fVar0), (1f - fVar1));
}

void func_556()
{
	PLAYER::_0xE0D6C2A146A5C993(PLAYER::PLAYER_ID(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_557()
{
	PLAYER::_0xB427911EA6DFFEF3(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_63));
}

void func_558()
{
	func_723();
	func_724();
	func_725();
}

void func_559(int iParam0, int iParam1, bool bParam2)
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
		case 854119837:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_01";
			break;
		case -1292544588:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_02";
			break;
		case -1003325394:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_03";
			break;
		case -696705861:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_04";
			break;
		case -335460405:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_01";
			break;
		case 903797617:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_02";
			break;
		case 669728650:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_03";
			break;
		case 1595354593:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_04";
			break;
		case 1214120047:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_01";
			break;
		case 655769340:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_02";
			break;
		case 885316185:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_03";
			break;
		case -2016706455:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_04";
			break;
		case -1491419385:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_01";
			break;
		case 1809565830:
			sVar1 = "COL_TH_OBJ_RDL";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_02";
			break;
		case 2056119786:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_03";
			break;
		case -628873767:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_01";
			break;
		case -405421956:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_02";
			break;
		case -1108972386:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_03";
			break;
		case -878376933:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_04";
			break;
		case 1053716392:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_01";
			break;
		case 806507056:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_02";
			break;
		case 1571925350:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_03";
			break;
		case 1330352282:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_04";
			break;
		case 975496781:
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

void func_560(int iParam0, bool bParam1)
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
	func_653(MISC::_CREATE_VAR_STRING(2, sVar1), MISC::_CREATE_VAR_STRING(2, sVar2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), joaat("player_menu"), MISC::_CREATE_VAR_STRING(2, sVar3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_561(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_562(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_563(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_564(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_565(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_566(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

bool func_567(bool bParam0)
{
	if (!func_498(bParam0, 0))
	{
		return false;
	}
	return bParam0;
}

void func_568(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_640(iParam0, &iVar0, &iVar1);
	if (!func_641(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_726(iParam0, 1024))
	{
		return;
	}
	func_642(iVar0, iVar1);
	(Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/] = uParam1;
	((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 2;
}

void func_569(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_640(iParam0, &iVar0, &iVar1);
	if (!func_641(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_726(iParam0, 1024))
	{
		return;
	}
	func_642(iVar0, iVar1);
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

int func_570()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = COLLECTION::_0x5461C821D00FE15A(-2076669067, 0);
	if (iVar0 == func_637())
	{
		return func_571();
	}
	iVar4 = (func_637() - iVar0);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_637())
	{
		iVar1 = COLLECTION::_0x126CBEBBA46693CF(iVar2, -2076669067, 0);
		if (!func_727(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_638(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

bool func_571()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_637());
	return func_638(COLLECTION::_0x126CBEBBA46693CF(iVar0, -2076669067, 0));
}

void func_572(bool bParam0)
{
	switch (*bParam0)
	{
		case -1424823393: /* GXTEntry: "Opened Cigarettes" */
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

int func_573(bool bParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_498(bParam0, 0))
	{
		return 0;
	}
	if (bParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_628(bParam0, 0, 1) };
	Var5 = { func_665(bParam0, Var0, Var0.f_4, 0) };
	return func_728(bParam0, &Var5, &Var0, bParam1, iParam2, 0);
}

void func_574(bool bParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	if (func_208() != -1)
	{
		return;
	}
	switch (func_523(bParam0))
	{
		case 81053684:
			if (bParam0 == joaat("KIT_BANDANA") && func_729(81053684, 0) <= 0)
			{
				func_714(32, bParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (bParam0 == joaat("clothing_item_hat_pzero_000") || bParam0 == joaat("clothing_p3_player_three_ms1_hat_000_000"))
			{
				func_714(32, bParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_730(bParam0);
			if (func_731(iVar0))
			{
				func_732(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_714(30, bParam0, 0, 0, 0);
			}
			if (func_733() == -2125499975 || func_733() == -449205311)
			{
				switch (bParam0)
				{
					case 624063935: /* GXTEntry: "The Summer Gunslinger" */
					case 1160643979: /* GXTEntry: "The Winter Gunslinger" */
					case 1661121390: /* GXTEntry: "The Gunslinger" */
						func_714(32, bParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_733() == 1160113249)
			{
				switch (bParam0)
				{
					case -361635024: /* GXTEntry: "The Cowboy" */
						func_714(32, bParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_734(-525676072, 0))
			{
				if (func_735(-525676072, &bVar1))
				{
					func_714(33, bVar1, 0, 0, 0);
				}
			}
			func_714(32, bParam0, 0, 0, 0);
			break;
	}
	if ((bParam0 == 899611344 || bParam0 == -1515874150) || bParam0 == joaat("UPGRADE_OFFHAND_HOLSTER"))
	{
		if (!func_736(99217379))
		{
			func_552(Global_35, bParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_522(24);
		if (func_553(&bVar2, 0))
		{
			func_528(bVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_575(bool bParam0)
{
	if (func_519(bParam0, 943695443))
	{
		func_737(0, bParam0);
	}
	else if (func_519(bParam0, -2096528786))
	{
		func_737(1, bParam0);
	}
	else if (func_519(bParam0, -1094167013))
	{
		func_737(2, bParam0);
	}
	else if (func_519(bParam0, 1936654645))
	{
		func_737(3, bParam0);
	}
	else if (func_519(bParam0, 1306489306))
	{
		func_737(4, bParam0);
	}
	else if (func_519(bParam0, 435762317))
	{
		func_737(5, bParam0);
	}
	else if (func_519(bParam0, 1259363210))
	{
		func_737(6, bParam0);
	}
	else if (func_519(bParam0, 881398259))
	{
		func_737(7, bParam0);
	}
	else if (func_519(bParam0, -541549214))
	{
		func_737(8, bParam0);
	}
	else if (func_519(bParam0, 130796156))
	{
		func_737(-1, bParam0);
	}
}

int func_576(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;

	Var4.f_1 = 10;
	func_738(&Var4, 1356624740);
	return func_739(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_577(bool bParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_498(bParam0, 0))
	{
		return Var0;
	}
	if (func_519(bParam0, -305066475))
	{
		if (func_208() == -1)
		{
			if (func_519(bParam0, -537818634))
			{
				return func_171(189951448);
			}
			else
			{
				return func_171(joaat("deadeye_items"));
			}
		}
	}
	else if (func_519(bParam0, -537818634))
	{
		return func_171(joaat("medicine_items"));
	}
	if (func_519(bParam0, 2084895747))
	{
		return func_171(joaat("lock_breaker_items"));
	}
	return Var2;
}

void func_578(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("PROVISION_BIRD_FEATHER_FLIGHT"):
			if (func_208() == -1)
			{
				if (func_461(((*Global_1835011)[4 /*74*/])->f_1, 1))
				{
					func_509(109, 1);
				}
			}
			break;
	}
}

void func_579(bool bParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_741(func_740(0));
	func_743(MISC::_CREATE_VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_742(bParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_580(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
	if (!func_498(bParam0, 0))
	{
		return;
	}
	if (bParam0 == 1807503187)
	{
		return;
	}
	if (bParam1 == 0)
	{
		return;
	}
	if (!func_744())
	{
		func_745(bParam0, bParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(bParam1);
	StringCopy(&cVar2, func_746(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (bParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_746(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_520(bParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_518(bParam0);
	iVar10 = 0;
	iVar11 = joaat("inventory");
	if ((iVar6 == joaat("ammo") && bParam0 != 424030678) && bParam0 != -1188697038)
	{
		iVar10 = joaat("AMMO_TYPES");
		iVar11 = joaat("AMMO_TYPES");
	}
	if (iVar6 == joaat("WEAPON_MOD") || iVar6 == 658570475)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_747(bParam0, &Var7, iVar11, iVar10, 0, joaat("ui_itemviewer")))
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
	sVar15 = func_748(MISC::_CREATE_VAR_STRING(10, &cVar2, MISC::_CREATE_VAR_STRING(0, func_567(bParam0)), iVar1), iVar12);
	if (((((bParam1 == 1 || func_519(bParam0, 1443104131)) || bParam0 == joaat("CONSUMABLE_CIGARETTE_BOX")) || bParam0 == -1424823393) || bParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP")) || bParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"))
	{
		sVar15 = MISC::_CREATE_VAR_STRING(0, func_567(bParam0));
	}
	func_743(sVar15, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

void func_581(int iParam0, int iParam1)
{
	if (&Global_40.f_11623[iParam0 /*8*/] != iParam1)
	{
		Global_40.f_11623[iParam0 /*8*/] = iParam1;
	}
}

void func_582(int iParam0)
{
	((*Global_1396257)[iParam0 /*638*/])->f_631 = 1;
}

int func_583(int iParam0)
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

int func_584(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("cs_sistercalderon"):
		case joaat("cs_strsheriff_01"):
		case joaat("cs_mud2bigguy"):
		case joaat("cs_rainsfall"):
		case joaat("cs_penelopebraithwaite"):
		case joaat("cs_swampweirdosonny"):
		case joaat("cs_unidusterjail_01"):
		case joaat("cs_iangray"):
		case joaat("cs_tinyhermit"):
		case joaat("cs_timothydonahue"):
		case joaat("cs_princessisabeau"):
		case joaat("cs_leviticuscornwall"):
		case joaat("cs_didsbury"):
		case joaat("cs_featherstonchambers"):
		case joaat("cs_featsofstrength"):
		case joaat("cs_bandpianist"):
		case joaat("cs_escapeartistassistant"):
		case joaat("cs_garethbraithwaite"):
		case joaat("cs_creoleguy"):
		case joaat("cs_leighgray"):
		case joaat("cs_strawberryoutlaw_02"):
		case joaat("cs_gloria"):
		case joaat("cs_warvet"):
		case joaat("cs_jockgray"):
		case joaat("cs_davidgeddes"):
		case joaat("cs_guidomartelli"):
		case joaat("cs_duncangeddes"):
		case joaat("cs_dusterinformant_01"):
		case joaat("cs_pinkertongoon"):
		case joaat("cs_mickey"):
		case joaat("cs_twinbrother_02"):
		case joaat("cs_hestonjameson"):
		case joaat("cs_strdeputy_01"):
		case joaat("cs_abe"):
		case joaat("cs_oddfellowspinhead"):
		case joaat("cs_swampfreak"):
		case joaat("cs_mradler"):
		case joaat("cs_aberdeenpigfarmer"):
		case joaat("cs_hobartcrawley"):
		case joaat("cs_formyartbigwoman"):
		case joaat("cs_norrisforsythe"):
		case joaat("cs_jules"):
		case joaat("cs_tomdickens"):
		case joaat("cs_geraldbraithwaite"):
		case joaat("cs_paytah"):
		case joaat("cs_cancan_03"):
		case joaat("cs_grizzledjon"):
		case joaat("cs_wrobel"):
		case joaat("cs_meredith"):
		case joaat("cs_creepyoldlady"):
		case joaat("cs_nbxreceptionist_01"):
		case joaat("cs_nbxpolicechiefformal"):
		case joaat("cs_cornwalltrainconductor"):
		case joaat("cs_rhodeputy_01"):
		case joaat("cs_drmalcolmmacintosh"):
		case joaat("cs_leon"):
		case joaat("cs_sheriffowens"):
		case joaat("cs_sddoctor_01"):
		case joaat("cs_scottgray"):
		case joaat("cs_cancan_01"):
		case joaat("cs_creolecaptain"):
		case joaat("cs_brontesbutler"):
		case joaat("cs_janson"):
		case joaat("cs_forgivenwife_01"):
		case joaat("cs_tigerhandler"):
		case joaat("cs_frenchartist"):
		case joaat("cs_genstorymale"):
		case joaat("cs_clay"):
		case joaat("cs_strdeputy_02"):
		case joaat("cs_famousgunslinger_03"):
		case joaat("cs_bivcoachdriver"):
		case joaat("cs_braithwaitebutler"):
		case joaat("cs_cleet"):
		case joaat("cs_joe"):
		case joaat("cs_slavecatcher"):
		case joaat("cs_braithwaitemaid"):
		case joaat("cs_twingroupie_02"):
		case joaat("cs_mrsgeddes"):
		case joaat("cs_samaritan"):
		case joaat("cs_exconfedinformant"):
		case joaat("cs_frenchman_01"):
		case joaat("cs_bandsinger"):
		case joaat("cs_baptiste"):
		case joaat("cs_angusgeddes"):
		case joaat("cs_mysteriousstranger"):
		case joaat("cs_famousgunslinger_01"):
		case joaat("cs_bartholomewbraithwaite"):
		case joaat("cs_mixedracekid"):
		case joaat("cs_beatenupcaptain"):
		case joaat("cs_edgarross"):
		case joaat("cs_twingroupie_01"):
		case joaat("cs_mrsweathers"):
		case joaat("cs_jamie"):
		case joaat("cs_karensjohn_01"):
		case joaat("cs_thomasdown"):
		case joaat("cs_obediahhinton"):
		case joaat("cs_agnesdowd"):
		case joaat("cs_cavehermit"):
		case joaat("cs_brynntildon"):
		case joaat("cs_germanson"):
		case joaat("cs_brendacrawley"):
		case joaat("cs_colfavours"):
		case joaat("cs_rhodeskidnapvictim"):
		case joaat("cs_exconfedsleader_01"):
		case joaat("cs_cancan_04"):
		case joaat("cs_towncrier"):
		case joaat("cs_famousgunslinger_04"):
		case joaat("cs_dalemaroney"):
		case joaat("cs_angryhusband"):
		case joaat("cs_lillianpowell"):
		case joaat("cs_andershelgerson"):
		case joaat("cs_poorjoe"):
		case joaat("cs_braithwaiteservant"):
		case joaat("cs_brotherdorkins"):
		case joaat("cs_albertmason"):
		case joaat("cs_famousgunslinger_05"):
		case joaat("cs_balloonoperator"):
		case joaat("cs_albertcakeesquire"):
		case joaat("cs_mrsfellows"):
		case joaat("cs_cancanman_01"):
		case joaat("cs_poisonwellshaman"):
		case joaat("cs_cancan_02"):
		case joaat("cs_meredithsmother"):
		case joaat("cs_angel"):
		case joaat("cs_archerfordham"):
		case joaat("cs_disguisedduster_01"):
		case joaat("cs_chelonianmaster"):
		case joaat("cs_twinbrother_01"):
		case joaat("cs_germandaughter"):
		case joaat("cs_lemiuxassistant"):
		case joaat("cs_creoledoctor"):
		case joaat("cs_crackpotrobot"):
		case joaat("cs_bandbassist"):
		case joaat("cs_genstoryfemale"):
		case joaat("cs_marylinton"):
		case joaat("cs_valprayingman"):
		case joaat("cs_johnthebaptisingmadman"):
		case joaat("cs_mrs_calhoun"):
		case joaat("cs_theodorelevin"):
		case joaat("cs_nicholastimmins"):
		case joaat("cs_disguisedduster_03"):
		case joaat("cs_dinoboneslady"):
		case joaat("cs_beaugray"):
		case joaat("cs_strawberryoutlaw_01"):
		case joaat("cs_crackpotinventor"):
		case joaat("cs_hercule"):
		case joaat("cs_gavin"):
		case joaat("cs_levisimon"):
		case joaat("cs_londonderryson"):
		case joaat("cs_captainmonroe"):
		case joaat("cs_famousgunslinger_02"):
		case joaat("cs_mrslondonderry"):
		case joaat("cs_soothsayer"):
		case joaat("cs_tavishgray"):
		case joaat("cs_joebutler"):
		case joaat("cs_banddrummer"):
		case joaat("cs_lillymillet"):
		case joaat("cs_ansel_atherton"):
		case joaat("cs_rhodeputy_02"):
		case joaat("cs_edmundlowry"):
		case joaat("cs_disguisedduster_02"):
		case joaat("cs_magnifico"):
		case joaat("cs_artappraiser"):
		case joaat("cs_forgivenhusband_01"):
		case joaat("cs_reverendfortheringham"):
		case joaat("cs_daveycallender"):
		case joaat("cs_desmond"):
		case joaat("cs_adamgray"):
		case joaat("cs_jimcalloway"):
		case joaat("cs_sdsaloondrunk_01"):
		case joaat("cs_nbxdrunk"):
		case joaat("cs_germanmother"):
		case joaat("cs_ringmaster"):
		case joaat("cs_lucanapoli"):
		case joaat("cs_rhodesassistant"):
		case joaat("cs_aberdeensister"):
		case joaat("cs_nbxexecuted"):
		case joaat("cs_famousgunslinger_06"):
		case joaat("cs_johnweathers"):
		case joaat("cs_professorbell"):
		case joaat("cs_rhodessaloonbouncer"):
			return 1;
		default:
			break;
	}
	return 0;
}

void func_585(bool bParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (func_749(bParam0, iParam1))
		{
			if (func_750(bParam0, iParam1))
			{
				if (func_751(bParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(bParam0, "metaped_outfit_request"), bParam0, true, false);
					func_752(bParam0);
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

void func_586(bool bParam0, int iParam1, bool bParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return;
	}
	PED::_0xD710A5007C2AC539(bParam0, joaat("hats"), 1);
	if (bParam2)
	{
		PED::_0xCC8CA3E88256E58F(bParam0, false, true, true, true, false);
	}
}

void func_587(bool bParam0, bool bParam1)
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

void func_588(bool bParam0, bool bParam1)
{
	if (bParam1 == 1)
	{
		PED::_0x5653AB26C82938CF(bParam0, 41611, 0f);
	}
	else
	{
		PED::_0x5653AB26C82938CF(bParam0, 41611, 1f);
	}
}

void func_589(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 - (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1));
}

void func_590(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		if (((*Global_1945938)[iParam0 /*18*/])->f_5 == 5 && !func_447(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, bParam1);
		}
	}
}

void func_591(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1945938)[iParam0 /*18*/])->f_3, bParam1);
	}
}

void func_592(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 || iParam1);
}

int func_593(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_594(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	char* sVar0;
	int iVar1;

	if (func_174(iParam1->f_6))
	{
		if (bParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		func_175(&(iParam1->f_6), 0, 1);
	}
	if (!func_174(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_443(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_753(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), iParam1->f_10, 0);
			if (func_174(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_601(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_492(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						func_754(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_419(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					func_492(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					func_421(iParam1->f_6, 0, 1);
				}
				else
				{
					func_421(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

int func_595(int iParam0)
{
	int iVar0;

	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam0);
	switch (iVar0)
	{
		case joaat("REL_GANG_SKINNER_BROTHERS"):
			return 3;
		case joaat("REL_GANG_LEMOYNE_RAIDERS"):
			return 2;
		case joaat("REL_GANG_ODRISCOLL"):
			return 0;
		case joaat("REL_GANG_MURFREE_BROOD"):
			return 1;
		case joaat("REL_GANG_LARAMIE_GANG"):
			return 4;
		case joaat("REL_GANG_SMUGGLERS"):
			return 5;
		default:
			break;
	}
	return -1;
}

void func_596(int* iParam0, int iParam1)
{
	if (!func_312(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_313(iParam0, 14);
		}
	}
}

bool func_597(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_598(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_599(int iParam0, int iParam1)
{
	var uVar0;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar4 = PED::_0x4642182A298187D0(iParam0, iParam1, &uVar0, 4, 1);
	if (iVar4 != 0)
	{
		return 1;
	}
	return 0;
}

bool func_600(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
{
	bool bVar0;
	bool bVar1;

	bVar0 = (MISC::IS_BIT_SET(*iParam1, 0) && !MISC::IS_BIT_SET(*iParam1, 4));
	if (MISC::IS_BIT_SET(*iParam1, 13))
	{
		return true;
	}
	if (bParam10)
	{
		if (MISC::IS_BIT_SET(*iParam1, 20))
		{
			if (!MISC::IS_BIT_SET(*iParam0, 25))
			{
				MISC::SET_BIT(iParam0, 24);
			}
			return true;
		}
	}
	if (MISC::IS_BIT_SET(*iParam1, 9))
	{
		MISC::CLEAR_BIT(iParam1, 9);
		return true;
	}
	if (bParam6)
	{
		if (MISC::IS_BIT_SET(*iParam1, 6))
		{
			return true;
		}
	}
	else if (MISC::IS_BIT_SET(*iParam1, 5))
	{
		return true;
	}
	if (MISC::IS_BIT_SET(*iParam1, 7))
	{
		if (fParam5 > iParam1->f_4)
		{
			return true;
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 17))
	{
		if (bParam3)
		{
			if (bParam4)
			{
				return true;
			}
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 18))
	{
		if (MISC::IS_BIT_SET(*iParam1, 8))
		{
			bVar1 = false;
			if (fParam9 > -1f)
			{
				if (fParam9 < iParam1->f_3)
				{
					bVar1 = true;
				}
			}
			if (!bParam7)
			{
				if (bParam8 || bVar1)
				{
					return true;
				}
			}
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 2))
	{
		if (MISC::IS_BIT_SET(*iParam1, 1))
		{
			if (iParam11 < iParam1->f_14)
			{
				return true;
			}
		}
	}
	return !bVar0;
}

void func_601(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (bParam3 && !func_174(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = func_315(iParam0);
	func_492(iParam0, 18, 0, 1);
	func_492(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1);
	}
	HUD::_UIPROMPT_SET_GROUP(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam4, iParam2);
}

bool func_602(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_174(iParam0))
	{
		return false;
	}
	iVar0 = func_315(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_603(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_174(iParam0))
	{
		return;
	}
	iVar0 = func_315(iParam0);
	HUD::_UIPROMPT_RESTART_MODES(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

int func_604(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	bool bVar7;
	int iVar8;
	int iVar9;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return 0;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(false);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar0))
	{
		return 0;
	}
	ITEMSET::_0x20A4BF0E09BEE146(iVar0);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(bParam0, iVar0);
	iVar1 = ITEMSET::GET_ITEMSET_SIZE(iVar0);
	if (iVar1 == 0)
	{
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	iVar9 = 0;
	while (iVar9 < 4)
	{
		iVar2 = func_755(iVar9);
		if (!PED::_0x608BC6A6AACD5036(&Var3, bParam0, iVar2, 0))
		{
		}
		else
		{
			bVar7 = Var3.f_3;
			if (!ENTITY::DOES_ENTITY_EXIST(bVar7))
			{
			}
			else
			{
				if (ENTITY::IS_ENTITY_DEAD(bVar7))
				{
				}
				iVar8 = ENTITY::_0x0FD25587BB306C86(bVar7);
				if (iVar8 == joaat("CARRIABLE_SADDLE") || iVar8 == joaat("CARRIABLE_SADDLE_BUNDLE"))
				{
					return 1;
				}
			}
		}
		iVar9++;
	}
	return 0;
}

int func_605(int iParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	bVar0 = func_267();
	if (!ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		return 0;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(false);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar1))
	{
		return 0;
	}
	ITEMSET::_0x20A4BF0E09BEE146(iVar1);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iParam0, iVar1);
	bVar2 = false;
	iVar3 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	if (iVar3 > 0)
	{
		if (ITEMSET::IS_IN_ITEMSET(bVar0, iVar1))
		{
			bVar2 = true;
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar1);
	if (bVar2)
	{
		return 1;
	}
	return 0;
}

int func_606()
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

int func_607()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

int func_608(bool bParam0, int iParam1, bool bParam2)
{
	var uVar0;
	int iVar1;

	if (iParam1 == -1)
	{
		return -1;
	}
	if (!func_756(iParam1, &uVar0, &iVar1, 0, 0))
	{
		return -1;
	}
	return func_757(bParam0, uVar0, iVar1, bParam2);
}

void func_609(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam3->f_97)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam3[iVar0 /*4*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam3[iVar0 /*4*/]))
			{
				AUDIO::ADD_PED_TO_CONVERSATION(&uParam0, uParam3[iVar0 /*4*/], &(((*uParam3)[iVar0 /*4*/])->f_1));
			}
		}
		iVar0++;
	}
}

int func_610(var uParam0, int iParam1, var uParam2)
{
	int iVar0;

	if (*uParam2)
	{
		return 1;
	}
	if (!func_392(iParam1, &iVar0))
	{
		return 0;
	}
	if (((*uParam0)[iVar0 /*36*/])->f_35)
	{
		*uParam2 = 1;
		return 1;
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0[iVar0 /*36*/]) && (ANIMSCENE::_0x59606519FF9D3EC2(uParam0[iVar0 /*36*/], 1) || ANIMSCENE::_0x477122B8D05E7968(uParam0[iVar0 /*36*/], 1, 0)))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(((*uParam0)[iVar0 /*36*/])->f_2))
		{
			ANIMSCENE::RESET_ANIM_SCENE(uParam0[iVar0 /*36*/], ((*uParam0)[iVar0 /*36*/])->f_2);
			*uParam2 = 1;
		}
		else
		{
			ANIMSCENE::RESET_ANIM_SCENE(uParam0[iVar0 /*36*/], 0);
			*uParam2 = 1;
		}
	}
	return 1;
}

int func_611(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = uParam0->f_209;
	if (uParam0->f_209.f_27)
	{
		return 1;
	}
	if (func_392(iVar0, &iVar1))
	{
		if (func_758((*uParam0)[iVar1 /*36*/], uParam0->f_209.f_12) || uParam0->f_209.f_26 == 1)
		{
			uParam0->f_209.f_27 = 1;
			return 1;
		}
	}
	return 0;
}

Vector3 func_612(bool bParam0, int iParam1, char* sParam2, char* sParam3, bool bParam4)
{
	vector3 vVar0;

	if (!bParam4 && PED::IS_PED_INJURED(bParam0))
	{
		return 0f, 0f, 0f;
	}
	if (!ANIMSCENE::_0x25557E324489393C(iParam1))
	{
		return 0f, 0f, 0f;
	}
	if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iParam1, sParam2, &vVar0, true, sParam3, 2))
	{
		return vVar0;
	}
	return 0f, 0f, 0f;
}

bool func_613(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

void func_614(bool bParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

int func_615(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = iParam0;
	while (iVar0 < Global_1058888->f_40501)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1058888->f_40501.f_1[iVar0 /*2*/]) = { *(Global_1058888->f_40501.f_1[iVar0 + 1 /*2*/]) };
		}
		iVar0++;
	}
	Var1 = -1;
	if (Global_1058888->f_40501 < 32)
	{
		*(Global_1058888->f_40501.f_1[Global_1058888->f_40501 /*2*/]) = { Var1 };
	}
	Global_1058888->f_40501 = (Global_1058888->f_40501 - 1);
	if (Global_1058888->f_40501 < 0)
	{
		Global_1058888->f_40501 = 0;
	}
	return 1;
}

int func_616(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = (Global_1058888->f_40501 - 1);
	Var1 = -1;
	while (iVar0 >= iParam0)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1058888->f_40501.f_1[iVar0 + 1 /*2*/]) = { *(Global_1058888->f_40501.f_1[iVar0 /*2*/]) };
		}
		iVar0 = (iVar0 - 1);
	}
	*(Global_1058888->f_40501.f_1[iParam0 /*2*/]) = { Var1 };
	Global_1058888->f_40501++;
	if (Global_1058888->f_40501 > 32)
	{
		Global_1058888->f_40501 = 32;
	}
	return 1;
}

int func_617(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

bool func_618(bool bParam0)
{
	return (WEAPON::IS_WEAPON_VALID(bParam0) && bParam0 != joaat("WEAPON_UNARMED"));
}

Vector3 func_619(vector3 vParam0, float fParam3)
{
	float fVar0;

	if (fParam3 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		return vParam0 * FtoV((fParam3 / fVar0));
	}
	return 0f, 0f, 0f;
}

int func_620(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_759(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return 1;
	}
	return 0;
}

int func_621()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
	{
		return 1;
	}
	return 0;
}

int func_622(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_623(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, bool bParam16, int iParam17, bool bParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, iParam24);
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
	func_590(iParam0, 1);
	func_591(iParam0, 1);
	func_592(iParam0, 128);
}

bool func_624(bool bParam0)
{
	return func_518(bParam0) == joaat("weapon");
}

int func_625(bool bParam0)
{
	var uVar0;

	if (func_208() != -1)
	{
		return 0;
	}
	if (func_520(bParam0, 1048576))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return func_632(bParam0, &uVar0, 1, 0, 0);
	}
	return func_549(bParam0, 1, 0);
}

void func_626(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	bool bVar0;

	if (func_518(bParam0) != joaat("weapon"))
	{
		return;
	}
	bVar0 = func_525(bParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(bVar0))
	{
		return;
	}
	if (bParam2 || !func_661(bVar0))
	{
		if (func_208() == -1)
		{
			func_526(bVar0);
		}
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, bVar0, 0, false) && func_502(bParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_580(bParam0, bParam1, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_627(bool bParam0, bool bParam1)
{
	int iVar0;

	if (func_519(bParam0, 58855631))
	{
		func_760(bParam0, -915411861, &iVar0, 1);
		*bParam1 = (*bParam1 * iVar0);
	}
}

struct<5> func_628(bool bParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;

	Var0 = { func_761(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_518(bParam0))
	{
		case joaat("clothing"):
			if (!INVENTORY::_0x780C5B9AE2819807(bParam0, 1034665895))
			{
				Var0 = { func_665(joaat("Wardrobe"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("Wardrobe"));
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case joaat("weapon"):
			Var0 = { func_762(bParam1) };
			if (bParam2 && func_763(bParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_663(bParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_663(bParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_664(bParam0, &Var5, 1728382685 /* GXTEntry: "Right" */))
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
		case joaat("horse"):
			Var0.f_4 = 1782082944;
			break;
		case joaat("Emote"):
			Var0.f_4 = -813824107;
			Var0 = { func_764(bParam1) };
			switch (func_523(bParam0))
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
		case joaat("Upgrade"):
			if (func_765(bParam0, -1823706425))
			{
				Var0 = { func_665(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("KIT_CAMP"));
			}
			else if (func_765(bParam0, -1483207246))
			{
				Var0 = { func_665(joaat("Wardrobe"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("Wardrobe"));
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
				if (!func_766(Var0, &Var27, bParam1, 0))
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
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("character"));
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

int func_629(bool bParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_498(bParam0, 0))
	{
		return 0;
	}
	if (!func_527(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_0xE80E50BEE276A54A(bParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_636(bParam3), bParam0);
}

int func_630(bool bParam0, bool bParam1)
{
	if (func_531(bParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, bParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_636(bParam1), bParam0, 0);
}

int func_631()
{
	if (func_208() != -1)
	{
		return 0;
	}
	if (!func_271())
	{
		return 0;
	}
	if (!func_461(((*Global_1835011)[1 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_461(((*Global_1835011)[2 /*74*/])->f_1, 1) && func_461(((*Global_1347702)[120 /*49*/])->f_15, 1)) && !func_461(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_461(((*Global_1835011)[37 /*74*/])->f_1, 1) && !func_461(((*Global_1835011)[39 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_461(((*Global_1835011)[57 /*74*/])->f_1, 1) && !func_461(((*Global_1835011)[60 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_461(((*Global_1835011)[26 /*74*/])->f_1, 1) && !func_461(((*Global_1347702)[67 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if ((func_461(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_461(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_461(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_461(((*Global_1835011)[75 /*74*/])->f_1, 1) && !func_461(((*Global_1347702)[1 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if (func_461(((*Global_1835011)[76 /*74*/])->f_1, 1) && !func_461(((*Global_1835011)[77 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_461(((*Global_1835011)[40 /*74*/])->f_1, 1) && func_461(((*Global_1835011)[41 /*74*/])->f_1, 1)) && !func_461(((*Global_1835011)[44 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_461(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_461(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_461(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_461(((*Global_1835011)[65 /*74*/])->f_1, 1) && func_461(((*Global_1835011)[66 /*74*/])->f_1, 1)) && !func_461(((*Global_1835011)[67 /*74*/])->f_1, 1))
	{
		return 1;
	}
	return 0;
}

int func_632(bool bParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	struct<4> Var0;
	struct<10> Var4;
	var uVar26;
	int iVar27;
	int iVar28;

	func_767(&bParam0);
	if (!func_498(bParam0, 0))
	{
		return 0;
	}
	if (!func_527(0))
	{
		bParam3 = true;
	}
	if (func_624(bParam0) && WEAPON::_0x705BE297EEBDB95D(bParam0))
	{
		if (WEAPON::_0xD955FEE4B87AFA07(bParam0))
		{
			Var0 = { func_762(0) };
			Var4.f_9 = -1591664384;
			if (!func_663(bParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
			{
				return 0;
			}
			else if (func_664(bParam0, &Var4, 1728382685 /* GXTEntry: "Right" */))
			{
				return 0;
			}
			if (func_763(bParam0, 1))
			{
				if (!func_663(bParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					return 0;
				}
				else if (func_664(bParam0, &Var4, -649335959 /* GXTEntry: "Left" */))
				{
					return 0;
				}
			}
		}
		else if (!func_768(bParam0, &uVar26, 0))
		{
			return 0;
		}
		return 1;
	}
	iVar27 = func_629(bParam0, uParam1, bParam3, bParam4);
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
		iVar28 = func_769(bParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = INVENTORY::_0xE787F05DFC977BDE(func_636(bParam4), bParam0, 0);
	}
	if ((iVar28 + bParam2) > iVar27)
	{
		return 1;
	}
	return 0;
}

int func_633(bool bParam0, int iParam1)
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

int func_634(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_498(bParam0, 0))
	{
		return 0;
	}
	iVar0 = func_518(bParam0);
	if (iVar0 == joaat("weapon") && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_0x5C2EA6C44F515F34(bParam0);
	}
	else if (iVar0 == joaat("ammo") && WEAPON::_0x1F7977C9101F807F(bParam0))
	{
		return bParam0;
	}
	if (func_519(bParam0, 1399091007))
	{
		func_709(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_635(bool bParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	Var0 = { func_770(bParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_771(&Var0, func_762(0));
	}
	if (!func_772(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_722(iVar14);
	return uVar15;
}

int func_636(bool bParam0)
{
	if (func_208() == -1)
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

int func_637()
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 0);
}

bool func_638(int iParam0)
{
	return COLLECTION::_0xEC3959E9950BF56B(iParam0);
}

void func_639(int iParam0)
{
	int iVar0;
	float fVar1;

	if (func_208() != -1)
	{
		return;
	}
	iVar0 = func_773(iParam0);
	fVar1 = func_774(iParam0);
	if ((Global_1347477->f_117 || !func_521(31)) || !func_775(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_776(iVar0) >= 7)
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
	func_777(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_743(MISC::_CREATE_VAR_STRING(6, func_778(iParam0), fVar1), "itemtype_textures", func_779(iVar0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_640(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

int func_641(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return 0;
	}
	if (func_780(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_781(iParam0))
	{
		return 0;
	}
	if (func_782(iParam0))
	{
		return 0;
	}
	if ((Global_1898164->f_163 && !func_726(iParam0, 1)) || func_783(32768))
	{
		if (!func_726(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return 0;
		}
	}
	if (!func_784())
	{
		return 0;
	}
	return 1;
}

void func_642(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_643(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

int func_644(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 554799588 /* GXTEntry: "Cigarette Cards Famous Gunslingers" */;
		case 1:
			return -1021394391 /* GXTEntry: "Cigarette Cards Artists & Poets" */;
		case 2:
			return -987306668 /* GXTEntry: "Cigarette Cards Vistas of America" */;
		case 3:
			return -1028735103 /* GXTEntry: "Cigarette Cards Gems Of Beauty" */;
		case 4:
			return 515229791 /* GXTEntry: "Cigarette Cards Flora of America" */;
		case 5:
			return -1230863414 /* GXTEntry: "Cigarette Cards Stars of the Stage" */;
		case 6:
			return 232875659 /* GXTEntry: "Cigarette Cards Fauna of North America" */;
		case 7:
			return 1423129537 /* GXTEntry: "Cigarette Cards Marvels of Travel" */;
		case 8:
			return -435742319 /* GXTEntry: "Cigarette Cards The World\'s Champions" */;
		case 9:
			return -1854702679 /* GXTEntry: "Cigarette Cards Amazing Inventions" */;
		case 10:
			return 1265323898 /* GXTEntry: "Cigarette Cards Breeds of Horses" */;
		case 11:
			return -479775696 /* GXTEntry: "Cigarette Cards Prominent Americans" */;
		default:
			break;
	}
	return 0;
}

int func_645(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;

	if (!func_785(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_INT(&uVar5, &Var0);
	return uVar5;
}

char* func_646(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
{
	switch (iParam1)
	{
		case -2076669067:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_CC_COMPLETE";
			}
			else if (func_514() >= 12)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_786(), 12);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_787(), 12);
			}
			break;
		case joaat("dino_bones"):
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
			else if (func_690() >= 30)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_POSTED_OBJ", func_788(), 30);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_FOUND_OBJ", func_690(), 30);
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
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_789(), 13);
			}
			break;
		case joaat("rock_carvings"):
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
			else if (func_691() >= 10)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_POSTED_OBJ", func_790(), 10);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_FOUND_OBJ", func_691(), 10);
			}
			break;
		case joaat("taxidermy"):
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
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_645(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

int func_647(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -2076669067)
	{
		if (iParam1 == joaat("COL_CC_INTRO"))
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, joaat("COL_CC_INTRO_PRE")))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, joaat("COL_CC_INTRO_PRE"));
			}
		}
	}
	else if (iParam2 == joaat("dino_bones"))
	{
		if (iParam1 == joaat("COL_DB_INTRO"))
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, joaat("COL_DB_INTRO_PRE")))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, joaat("COL_DB_INTRO_PRE"));
			}
		}
	}
	else if (iParam2 == joaat("rock_carvings"))
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

int func_648(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);
	}
	return 1;
}

int func_649(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(sParam2), sParam2, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iParam1, true);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iParam1, iParam6, iParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iParam1, MISC::_CREATE_VAR_STRING(2, sParam3));
	return 1;
}

int func_650(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			bVar2 = func_791(iVar0);
			if (bParam4 == bVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_549(bVar2, 1, 0) || func_793(func_792(bVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_654(func_791(iVar0))), func_654(func_791(iVar0)), bVar1, true, false);
		}
		if (iParam2 == joaat("dino_bones"))
		{
			if (iVar0 == 0)
			{
				bVar1 = func_690() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_794(iVar0)), func_794(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_788() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_794(iVar0)), func_794(iVar0), bVar1, true, false);
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
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_794(iVar0)), func_794(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			bVar2 = func_701(iParam3, func_795(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (bParam4 == bVar2)
				{
					bVar1 = (func_697(bVar2) - iParam7) >= func_645(iParam3, func_796(iVar0));
				}
				else
				{
					bVar1 = func_697(bVar2) >= func_645(iParam3, func_796(iVar0));
				}
			}
			else if (bParam4 == bVar2)
			{
				bVar1 = (func_697(bVar2) + iParam7) >= func_645(iParam3, func_796(iVar0));
			}
			else
			{
				bVar1 = func_697(bVar2) >= func_645(iParam3, func_796(iVar0));
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_797(bVar2)), func_797(bVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_798(COLLECTION::_0x126CBEBBA46693CF(iVar0, 1995362678, 0)))
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
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_799(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0))), func_799(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == joaat("rock_carvings"))
		{
			if (iVar0 == 0)
			{
				bVar1 = func_691() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_800(iVar0)), func_800(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_790() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_800(iVar0)), func_800(iVar0), bVar1, true, false);
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
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_800(iVar0)), func_800(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == joaat("taxidermy"))
		{
			bVar2 = func_701(iParam3, func_795(iVar0));
			if (bParam9)
			{
				if (bParam4 == bVar2)
				{
					bVar1 = (func_697(bVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_801(bVar2);
				}
			}
			else if (bParam4 == bVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_801(bVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_802(bVar2)), func_802(bVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return 1;
}

int func_651(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iParam2 == -2076669067)
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_CC_ITEMS_DELIVERED"), "COL_CC_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (iParam2 == -1531394072)
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_EX_ITEMS_DELIVERED"), "COL_EX_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (iParam2 == 1995362678)
	{
		if (func_789() >= 13)
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
	if (iParam2 == joaat("taxidermy"))
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_TX_CARCASSES_MAILED"), "COL_TX_CARCASSES_MAILED", bVar0, true, false);
	}
	return 1;
}

int func_652(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_111(func_803(0)) && ((func_85(0) == 1 || func_85(0) == 8) || func_85(0) == 6))
	{
		iParam3 = 7;
	}
	if ((iParam2 == joaat("dino_bones") || iParam2 == 1995362678) || iParam2 == joaat("rock_carvings"))
	{
		if (iParam3 == 7)
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(3, iParam1, 1, "");
		}
	}
	else if (iParam2 == joaat("taxidermy"))
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

var func_653(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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
	uVar21 = _NAMESPACE71::_0x26E87218390E6729(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

char* func_654(bool bParam0)
{
	switch (bParam0)
	{
		case 554799588: /* GXTEntry: "Cigarette Cards Famous Gunslingers" */
			return "COL_CC_GUN_SET";
		case -1021394391: /* GXTEntry: "Cigarette Cards Artists & Poets" */
			return "COL_CC_ART_SET";
		case -987306668: /* GXTEntry: "Cigarette Cards Vistas of America" */
			return "COL_CC_LND_SET";
		case -1028735103: /* GXTEntry: "Cigarette Cards Gems Of Beauty" */
			return "COL_CC_GRL_SET";
		case 515229791: /* GXTEntry: "Cigarette Cards Flora of America" */
			return "COL_CC_PLT_SET";
		case -1230863414: /* GXTEntry: "Cigarette Cards Stars of the Stage" */
			return "COL_CC_ACT_SET";
		case 232875659: /* GXTEntry: "Cigarette Cards Fauna of North America" */
			return "COL_CC_AML_SET";
		case 1423129537: /* GXTEntry: "Cigarette Cards Marvels of Travel" */
			return "COL_CC_VEH_SET";
		case -435742319: /* GXTEntry: "Cigarette Cards The World\'s Champions" */
			return "COL_CC_SPT_SET";
		case -1854702679: /* GXTEntry: "Cigarette Cards Amazing Inventions" */
			return "COL_CC_INV_SET";
		case 1265323898: /* GXTEntry: "Cigarette Cards Breeds of Horses" */
			return "COL_CC_HOR_SET";
		case -479775696: /* GXTEntry: "Cigarette Cards Prominent Americans" */
			return "COL_CC_PAM_SET";
		default:
			break;
	}
	return "";
}

var func_655(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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
	uVar21 = _NAMESPACE71::_0x26E87218390E6729(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

int func_656(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_657(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_658(int iParam0)
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

void func_659(int iParam0)
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
			func_804(1);
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
			func_805(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_805(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_805(3);
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
			func_806(1);
			break;
		case 34:
			func_807(1);
			break;
		case 35:
			func_808(1);
			break;
		case 36:
			break;
		case 37:
			func_809(0);
			break;
		case 38:
			func_810(0);
			break;
		case 39:
			func_811(0);
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
			if ((!&Global_1879534 && func_271()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_655("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_509(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_271()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_655("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_509(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_271()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_655("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_509(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_271()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_655("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_509(589, 0);
			break;
		case 24:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-200143754, true);
			UNLOCK::_UNLOCK_SET_VISIBLE(-200143754, true);
			WEAPON::_0x83B8D50EB9446BBA(PLAYER::PLAYER_PED_ID(), 1);
			if (func_208() == -1)
			{
				if (!func_736(99217379) || func_812(99217379) == 2110595215)
				{
					if (func_309())
					{
						bVar0 = -1515874150; /* GXTEntry: "John\'s Off-Hand Holster" */
					}
					else
					{
						bVar0 = 899611344; /* GXTEntry: "Off-Hand Holster" */
					}
					if (!func_549(bVar0, 1, 0))
					{
						func_573(bVar0, 1, 752097756);
					}
					func_552(Global_35, bVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_208() == -1)
			{
				if (!func_549(1013902307, 1, 0))
				{
					func_573(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_208() == -1)
			{
				if (!func_549(1013902307, 1, 0))
				{
					func_573(1013902307, 1, 752097756);
				}
				if (!func_549(142640135, 1, 0))
				{
					func_573(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_208() == -1)
			{
				if (!func_549(786809402, 1, 0))
				{
					func_573(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_208() == -1)
			{
				if (!func_549(786809402, 1, 0))
				{
					func_573(786809402, 1, 752097756);
				}
				if (!func_549(-518019409, 1, 0))
				{
					func_573(-518019409, 1, 752097756);
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
			UNLOCK::_UNLOCK_SET_UNLOCKED(-843169622, true);
			Global_1935630->f_47 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 46:
			func_813();
			break;
		case 47:
			PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 52:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-78935213, true);
			break;
		case 53:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-384786155, true);
			break;
		case 54:
			UNLOCK::_UNLOCK_SET_UNLOCKED(296662302, true);
			break;
		case 55:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("compendium"), true);
			break;
		case 56:
			UNLOCK::_UNLOCK_SET_UNLOCKED(1397349651, true);
			break;
	}
}

int func_660(bool bParam0)
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

int func_661(bool bParam0)
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

int func_662(int iParam0, int iParam1)
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
			return -997150586;
		case 234:
			return -1189569496;
		case 235:
			return 46488141;
		case 236:
			return 1046566686;
		case 237:
			return 325139909;
		case 238:
			return -1585141069;
		case 239:
			return 802754820;
		case 240:
			return 1415981582;
		case 241:
			return -1886147520;
		case 242:
			return 654877947;
		case 243:
			return -415648720;
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
			return 1310070322;
		case 255:
			return 724026534;
		case 256:
			return 137387616;
		case 257:
			return -653439684;
		case 258:
			return 1376835592;
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
			return 986998820;
		case 265:
			return -2119169513;
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
		case 432:
			return 1911050315;
		case 433:
			return -1343525599;
		case 434:
			return 1261891225;
		case 435:
			return 763162704;
		case 436:
			return 1335861197;
		case 437:
			return 526744654;
		case 438:
			return -1177461517;
		case 439:
			return -241638635;
		case 440:
			return 1024262875;
		case 441:
			return 853355463;
		case 442:
			return -337288221;
		case 443:
			return 361381308;
		case 444:
			return -1264898804;
		case 445:
			return -585289073;
		case 446:
			return 1423542233;
		case 447:
			return -948489286;
		case 448:
			return 2063859257;
		case 449:
			return -1652627327;
		case 450:
			return -1959697839;
		case 451:
			return -1532267859;
		case 452:
			return -1410062763;
		case 453:
			return -901428716;
		case 454:
			return -1628873469;
		case 455:
			return 144855571;
		case 456:
			return -617589883;
		case 457:
			return -1306457086;
		case 458:
			return 1713542477;
		case 459:
			return -305542365;
		case 460:
			return 1985390213;
		case 461:
			return -2145069367;
		case 462:
			return -1674390752;
		case 463:
			return -2117214398;
		case 464:
			return 1880805647;
		case 465:
			return -62390436;
		case 466:
			return 1815288415;
		case 467:
			return 196214097;
		case 468:
			return -201958220;
		case 469:
			return 1400281261;
		case 470:
			return 1601515402;
		case 471:
			return -940704970;
		case 472:
			return -548371721;
		case 473:
			return -1022384613;
		case 474:
			return -357406394;
		case 475:
			return 1077068189;
		case 476:
			return -782241404;
		case 477:
			return 1669853467;
		case 478:
			return 1592019450;
		case 479:
			return 635273153;
		case 480:
			return -1559225678;
		case 481:
			return -266425508;
		case 482:
			return 1117400455;
		case 483:
			return 454332195;
		case 484:
			return -1328061889;
		case 485:
			return 561650932;
		case 486:
			return 256105670;
		case 487:
			return 1976779618;
		case 488:
			return -269095126;
		case 489:
			return 2145617267;
		case 490:
			return 1150213537;
		case 491:
			return 1598825281;
		case 492:
			return -712527121;
		case 493:
			return 1308553072;
		case 494:
			return 852866398;
		case 495:
			return -1794417972;
		case 496:
			return 293062146;
		case 497:
			return 95360094;
		case 498:
			return 807631773;
		case 499:
			return 1603958275;
		case 500:
			return 860052020;
		case 501:
			return -1885979781;
		case 502:
			return 746147970;
		case 503:
			return 666663006;
		case 504:
			return -2096186453;
		case 505:
			return 859409444;
		case 506:
			return -671427187;
		case 507:
			return 100192478;
		case 508:
			return 307812616;
		case 509:
			return 1670843243;
		case 510:
			return 899615863;
		case 511:
			return -298901850;
		case 512:
			return 1379186917;
		case 513:
			return -817206030;
		case 514:
			return -1150323212;
		case 515:
			return -247466821;
		case 516:
			return 427124242;
		case 517:
			return 855418120;
		case 518:
			return -777015093;
		case 519:
			return -722462870;
		case 520:
			return -937454324;
		case 521:
			return -339438116;
		case 522:
			return 2135639035;
		case 523:
			return 1254273765;
		case 524:
			return -792172668;
		case 525:
			return 1905987493;
		case 526:
			return 495693044;
		case 527:
			return -1693422950;
		case 528:
			return -205873076;
		case 529:
			return -2143114654;
		case 530:
			return -1420574021;
		case 531:
			return -1959250381;
		case 532:
			return -1088328663;
		case 533:
			return 513602003;
		case 534:
			return 359221401;
		case 535:
			return 1005272;
		case 536:
			return 1583044470;
		case 537:
			return 348853959;
		case 538:
			return 1045621973;
		case 539:
			return 1084576580;
		case 540:
			return 1651573695;
		case 541:
			return 1463321587;
		case 542:
			return -997505963;
		case 543:
			return -1649851713;
		case 544:
			return -386012962;
		case 545:
			return 1386101789;
		case 546:
			return 1227915917;
		case 547:
			return -218846335;
		case 548:
			return -352578118;
		case 549:
			return 1426626782;
		case 550:
			return -714081520;
		case 551:
			return 74547781;
		case 552:
			return 1271463052;
		case 553:
			return 1983140194;
		case 554:
			return 677262775;
		case 555:
			return -832337898;
		case 556:
			return -319249747;
		case 557:
			return -16955722;
		case 558:
			return -1360128126;
		case 559:
			return -1535425646;
		case 560:
			return -1063641743;
		case 561:
			return -1041133401;
		case 562:
			return 1380479304;
		case 563:
			return 600890828;
		case 564:
			return 733333190;
		case 565:
			return 1843035435;
		case 566:
			return -304127320;
		case 567:
			return 122470371;
		case 568:
			return 0;
		case 569:
			return -1591664384;
		case 570:
			return -673000374;
		case 571:
			return -1150938404;
		case 572:
			return -1756997214;
		case 573:
			return -813824107;
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

bool func_663(bool bParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_769(bParam0, *uParam1, iParam2, bParam3) > 0;
}

int func_664(bool bParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_814(bParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_665(bool bParam0, var uParam1, int iParam2, bool bParam3, var uParam4, bool bParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_498(bParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_636(bParam6), &uParam1, bParam0, bParam5, &Var0);
	return Var0;
}

int func_666(bool bParam0, var uParam1, var uParam2, bool bParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (func_815(bParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_766(*uParam1, &Var0, bParam6, 0))
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
	if (!func_527(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_636(bParam6), uParam1, bParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

void func_667(bool bParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &bVar0, bParam0) && bVar0 < bParam1) && bVar0 < WEAPON::_0xD3750CCC00635FC2(bParam0))
	{
		iVar1 = func_816(WEAPON::_0xD3750CCC00635FC2(bParam0), bParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, bParam0, iVar1);
	}
}

void func_668(bool bParam0)
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
	iVar2 = func_91();
	func_817(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_35, sVar1, iVar2);
}

int func_669(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (func_818(bParam0))
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
			iVar0 = WEAPON::_0xD3750CCC00635FC2(bParam0) * 4;
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

bool func_670(bool bParam0)
{
	return WEAPON::_0x1F7977C9101F807F(WEAPON::_0x5C2EA6C44F515F34(bParam0));
}

int func_671(bool bParam0)
{
	bool bVar0;

	bVar0 = WEAPON::_0x7AA043F6C41D151E(bParam0);
	if (WEAPON::_0x705BE297EEBDB95D(bVar0))
	{
		if (WEAPON::_0x0556E9D2ECF39D01(bVar0))
		{
			if (!func_521(50))
			{
				if (!func_521(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (WEAPON::_0xD955FEE4B87AFA07(bVar0))
		{
			if (!func_521(51))
			{
				if (!func_521(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_672()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797);
}

int func_673(bool bParam0, bool bParam1, var uParam2)
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

	if (!func_498(bParam1, 0))
	{
		return 0;
	}
	if (func_518(bParam1) != joaat("clothing"))
	{
		return 0;
	}
	bVar1 = func_208() != -1;
	iVar2 = PED::_GET_METAPED_TYPE(bParam0);
	if (func_523(bParam1) == -999503751)
	{
		return 1;
	}
	iVar4 = func_819(bParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return 0;
	}
	bVar7 = false;
	bVar8 = bParam1;
	if (func_519(bParam1, 866047851))
	{
		iVar5 = func_711(iVar4, 1);
		if (func_820(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5 /*3*/] != bVar8)
		{
			*uParam2 = -265166256; /* GXTEntry: "You are wearing too many of this item. Remove some before equipping more." */
			return 0;
		}
		bVar7 = true;
	}
	switch (iVar4)
	{
		case 1742327865:
			if (PED::_0x5FF9A878C3D115B8(bVar8, iVar2, bVar1) == joaat("neckties") && PED::_0xFB4891BD7578CDC1(bParam0, -1455751347))
			{
				*uParam2 = 111371848; /* GXTEntry: "Your shirt does not support this type of neckwear." */
				return 0;
			}
			iVar5 = 10;
			iVar3 = func_523(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745; /* GXTEntry: "Your neckwear does not allow for changing your collar." */
				return 0;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5 /*3*/] != &Global_1946804->f_57[iVar5 /*11*/] && func_519(bParam1, -1638171711))
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
			if (func_821(1868067663, &uVar0))
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
				iVar10 = func_822(bVar8, iVar4, iVar2, bVar1);
				iVar9 = func_822(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763; /* GXTEntry: "You are wearing too many items. Something must be removed to preview other items." +
    "" */
					return 0;
				}
				Jump @726; //curOff = 583
				iVar3 = func_523(bParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (bParam1 != &Global_1946804->f_57[iVar6 /*11*/] && func_519(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]), -1638171711))
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

void func_674()
{
	PLAYER::_0xFE7C9CF376D23342(PLAYER::PLAYER_ID(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_675()
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

int func_676()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_549(func_823(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_677(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("PROVISION_BRACELET_GOLD"):
		case joaat("PROVISION_CC_VINTAGE_HANDCUFFS"):
		case 425319238: /* GXTEntry: "Legendary Alligator Tooth" */
			return joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH");
		case -1540119664: /* GXTEntry: "Legendary Bear Claw" */
		case joaat("PROVISION_BRACELET_SILVER"):
		case joaat("PROVISION_RC_QUARTZ_CHUNK"):
			return joaat("PROVISION_TALISMAN_BEAR_CLAW");
		case joaat("PROVISION_RF_WOOD_COBALT"):
		case joaat("PROVISION_EARRING_GOLD"):
		case -390982951: /* GXTEntry: "Legendary Boar Tusk" */
			return joaat("PROVISION_TALISMAN_BOAR_TUSK");
		case -2054602073: /* GXTEntry: "Legendary Bison Horn" */
		case joaat("PROVISION_EARRING_SILVER"):
		case joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT"):
			return joaat("PROVISION_TALISMAN_BUFFALO_HORN");
		case 1566949660: /* GXTEntry: "Old Brass Compass" */
			return joaat("PROVISION_TALISMAN_RAVEN_CLAW");
	}
	return 0;
}

int func_678(bool bParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;

	switch (bParam0)
	{
		case joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH"):
			if (bParam1 == 425319238)
			{
				bVar0 = joaat("PROVISION_CC_VINTAGE_HANDCUFFS");
				bVar1 = joaat("PROVISION_BRACELET_GOLD");
			}
			else if (bParam1 == joaat("PROVISION_CC_VINTAGE_HANDCUFFS"))
			{
				bVar0 = 425319238; /* GXTEntry: "Legendary Alligator Tooth" */
				bVar1 = joaat("PROVISION_BRACELET_GOLD");
			}
			else
			{
				bVar0 = 425319238; /* GXTEntry: "Legendary Alligator Tooth" */
				bVar1 = joaat("PROVISION_CC_VINTAGE_HANDCUFFS");
			}
			break;
		case joaat("PROVISION_TALISMAN_BEAR_CLAW"):
			if (bParam1 == -1540119664)
			{
				bVar0 = joaat("PROVISION_RC_QUARTZ_CHUNK");
				bVar1 = joaat("PROVISION_BRACELET_SILVER");
			}
			else if (bParam1 == joaat("PROVISION_RC_QUARTZ_CHUNK"))
			{
				bVar0 = -1540119664; /* GXTEntry: "Legendary Bear Claw" */
				bVar1 = joaat("PROVISION_BRACELET_SILVER");
			}
			else
			{
				bVar0 = -1540119664; /* GXTEntry: "Legendary Bear Claw" */
				bVar1 = joaat("PROVISION_RC_QUARTZ_CHUNK");
			}
			break;
		case joaat("PROVISION_TALISMAN_BOAR_TUSK"):
			if (bParam1 == -390982951)
			{
				bVar0 = joaat("PROVISION_RF_WOOD_COBALT");
				bVar1 = joaat("PROVISION_EARRING_GOLD");
			}
			else if (bParam1 == joaat("PROVISION_RF_WOOD_COBALT"))
			{
				bVar0 = -390982951; /* GXTEntry: "Legendary Boar Tusk" */
				bVar1 = joaat("PROVISION_EARRING_GOLD");
			}
			else
			{
				bVar0 = -390982951; /* GXTEntry: "Legendary Boar Tusk" */
				bVar1 = joaat("PROVISION_RF_WOOD_COBALT");
			}
			break;
		case joaat("PROVISION_TALISMAN_BUFFALO_HORN"):
			if (bParam1 == -2054602073)
			{
				bVar0 = joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT");
				bVar1 = joaat("PROVISION_EARRING_SILVER");
			}
			else if (bParam1 == joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT"))
			{
				bVar0 = -2054602073; /* GXTEntry: "Legendary Bison Horn" */
				bVar1 = joaat("PROVISION_EARRING_SILVER");
			}
			else
			{
				bVar0 = -2054602073; /* GXTEntry: "Legendary Bison Horn" */
				bVar1 = joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT");
			}
			break;
	}
	if (func_549(bVar0, 1, 0) && func_549(bVar1, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_679(bool bParam0)
{
	switch (bParam0)
	{
		case 968830139: /* GXTEntry: "Legendary Beaver Tooth" */
			return joaat("PROVISION_TRINKET_BEAVER_TOOTH");
		case -649219937: /* GXTEntry: "Legendary Tatanka Bison Horn" */
			return joaat("PROVISION_TRINKET_BISON_HORN");
		case -858567048: /* GXTEntry: "Legendary Buck Antler" */
			return joaat("PROVISION_TRINKET_BUCK_ANTLER");
		case -718162726: /* GXTEntry: "Legendary Cougar Fang" */
			return joaat("PROVISION_TRINKET_COUGAR_FANG");
		case -1284282080: /* GXTEntry: "Legendary Coyote Fang" */
			return joaat("PROVISION_TRINKET_COYOTE_FANG");
		case -725003445: /* GXTEntry: "Legendary Elk Antler" */
			return joaat("PROVISION_TRINKET_ELK_ANTLER");
		case -1445630104: /* GXTEntry: "Legendary Fox Claw" */
			return joaat("PROVISION_TRINKET_FOX_CLAW");
		case joaat("PROVISION_LIONS_PAW"):
			return joaat("PROVISION_TRINKET_LION_PAW");
		case 967601061: /* GXTEntry: "Legendary Moose Antler" */
			return joaat("PROVISION_TRINKET_MOOSE_ANTLER");
		case 1946030891: /* GXTEntry: "Legendary Panther Eye" */
			return joaat("PROVISION_TRINKET_PANTHER_EYE");
		case -1511404982: /* GXTEntry: "Legendary Pronghorn Horn" */
			return joaat("PROVISION_TRINKET_PRONGHORN_ANTLER");
		case -944465290: /* GXTEntry: "Legendary Ram Horn" */
			return joaat("PROVISION_TRINKET_RAM_HORN");
		case -1701098855: /* GXTEntry: "Legendary Wolf Heart" */
			return joaat("PROVISION_TRINKET_WOLF_HEART");
		default:
			break;
	}
	return 0;
}

int func_680(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_824(iParam0);
	if (iVar0 != -15)
	{
		func_817(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_825(iVar0, 1);
	}
	return 0;
}

int func_681(int iParam0, bool bParam1, int iParam2)
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
	if (bParam1 && func_549(joaat("PROVISION_TRINKET_ELK_ANTLER"), 1, 0))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	Var1.f_1 = 10;
	Var1.f_12 = 10;
	MISC::_0x48E4D50F87A96AA5(Global_35, 1, 1, iParam0, &Var1, 0);
	iVar24 = 0;
	while (iVar24 < Var1)
	{
		if (&Var1.f_1[iVar24] == joaat("currency_cash"))
		{
			return BUILTIN::CEIL((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
		}
		else
		{
			bVar25 = &Var1.f_1[iVar24];
			if (func_498(bVar25, 0) && func_519(bVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_682(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_743(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_683(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
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
		if (func_826())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(bVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		bVar1 = (bVar1 + iVar2);
		func_743(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_total_take"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_827(iVar0);
			func_828(iVar0, 0, 0);
		}
		func_743(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_PLAYER_EARN", bVar1), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		bVar1 = iParam0;
	}
	if (bVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(bVar1, iParam4);
		func_173(func_171(1644987397), bVar1);
	}
}

void func_684(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_685(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_686(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_687(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_688(int iParam0)
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
			bVar9 = 281887510; /* GXTEntry: "Little Egret Plume" */
			bVar10 = -164081697; /* GXTEntry: "Reddish Egret Plume" */
			bVar11 = -1161319399; /* GXTEntry: "Snowy Egret Plume" */
			bVar12 = joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT");
			break;
		case 2:
			bVar9 = -222563712; /* GXTEntry: "Heron Plume" */
			bVar10 = joaat("PROVISION_RO_FLOWER_LADY_SLIPPER");
			bVar11 = joaat("PROVISION_RO_FLOWER_MOCCASIN");
			break;
		case 4:
			bVar9 = 2116770557; /* GXTEntry: "Gator Egg" */
			bVar10 = joaat("PROVISION_RO_FLOWER_ACUNAS_STAR");
			bVar11 = joaat("PROVISION_RO_FLOWER_CIGAR");
			bVar12 = joaat("PROVISION_RO_FLOWER_GHOST");
			break;
		case 8:
			bVar9 = 2085530337; /* GXTEntry: "Spoonbill Plume" */
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
	iVar1 = func_697(bVar9);
	iVar2 = func_697(bVar10);
	iVar3 = func_697(bVar11);
	iVar5 = func_698(bVar9);
	iVar6 = func_698(bVar10);
	iVar7 = func_698(bVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_697(bVar12);
		iVar8 = func_698(bVar12);
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

void func_689(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_690()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_829(COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("dino_bones"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_691()
{
	return COLLECTION::_0x5461C821D00FE15A(joaat("rock_carvings"), 0);
}

int func_692(int iParam0, bool bParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	switch (iParam0)
	{
		case -949689219:
			if (bParam1 == -1866642239)
			{
				bVar0 = 444160793; /* GXTEntry: "Perfect Squirrel Carcass" */
			}
			else if (bParam1 == 444160793)
			{
				bVar0 = -1866642239; /* GXTEntry: "Perfect Rabbit Carcass" */
			}
			break;
		case -1248968496:
			if (bParam1 == -1969404854)
			{
				bVar0 = 1761263432; /* GXTEntry: "Perfect Rat Carcass" */
				bVar1 = -843795569; /* GXTEntry: "Perfect Woodpecker Carcass" */
			}
			else if (bParam1 == 1761263432)
			{
				bVar0 = -1969404854; /* GXTEntry: "Perfect Cardinal Carcass" */
				bVar1 = -843795569; /* GXTEntry: "Perfect Woodpecker Carcass" */
			}
			else if (bParam1 == -843795569)
			{
				bVar0 = -1969404854; /* GXTEntry: "Perfect Cardinal Carcass" */
				bVar1 = 1761263432; /* GXTEntry: "Perfect Rat Carcass" */
			}
			break;
		case 1706369307:
			if (bParam1 == -832850511)
			{
				bVar0 = -935543049; /* GXTEntry: "Perfect Opossum Carcass" */
				bVar1 = -1464585113; /* GXTEntry: "Perfect Oriole Carcass" */
				bVar2 = -1290897778; /* GXTEntry: "Perfect Robin Carcass" */
			}
			else if (bParam1 == -935543049)
			{
				bVar0 = -832850511; /* GXTEntry: "Perfect Chipmunk Carcass" */
				bVar1 = -1464585113; /* GXTEntry: "Perfect Oriole Carcass" */
				bVar2 = -1290897778; /* GXTEntry: "Perfect Robin Carcass" */
			}
			else if (bParam1 == -1464585113)
			{
				bVar0 = -832850511; /* GXTEntry: "Perfect Chipmunk Carcass" */
				bVar1 = -935543049; /* GXTEntry: "Perfect Opossum Carcass" */
				bVar2 = -1290897778; /* GXTEntry: "Perfect Robin Carcass" */
			}
			else if (bParam1 == -1290897778)
			{
				bVar0 = -832850511; /* GXTEntry: "Perfect Chipmunk Carcass" */
				bVar1 = -935543049; /* GXTEntry: "Perfect Opossum Carcass" */
				bVar2 = -1464585113; /* GXTEntry: "Perfect Oriole Carcass" */
			}
			break;
		case 1520110311:
			if (bParam1 == -100913452)
			{
				bVar0 = 313332607; /* GXTEntry: "Perfect Sparrow Carcass" */
				bVar1 = -124539232; /* GXTEntry: "Perfect Toad Carcass" */
				bVar2 = 102446365; /* GXTEntry: "Perfect Skunk Carcass" */
				bVar3 = -1882344824; /* GXTEntry: "Perfect Bullfrog Carcass" */
			}
			else if (bParam1 == 313332607)
			{
				bVar0 = -100913452; /* GXTEntry: "Perfect Songbird Carcass" */
				bVar1 = -124539232; /* GXTEntry: "Perfect Toad Carcass" */
				bVar2 = 102446365; /* GXTEntry: "Perfect Skunk Carcass" */
				bVar3 = -1882344824; /* GXTEntry: "Perfect Bullfrog Carcass" */
			}
			else if (bParam1 == -124539232)
			{
				bVar0 = -100913452; /* GXTEntry: "Perfect Songbird Carcass" */
				bVar1 = 313332607; /* GXTEntry: "Perfect Sparrow Carcass" */
				bVar2 = 102446365; /* GXTEntry: "Perfect Skunk Carcass" */
				bVar3 = -1882344824; /* GXTEntry: "Perfect Bullfrog Carcass" */
			}
			else if (bParam1 == 102446365)
			{
				bVar0 = -100913452; /* GXTEntry: "Perfect Songbird Carcass" */
				bVar1 = 313332607; /* GXTEntry: "Perfect Sparrow Carcass" */
				bVar2 = -124539232; /* GXTEntry: "Perfect Toad Carcass" */
				bVar3 = -1882344824; /* GXTEntry: "Perfect Bullfrog Carcass" */
			}
			else if (bParam1 == -1882344824)
			{
				bVar0 = -100913452; /* GXTEntry: "Perfect Songbird Carcass" */
				bVar1 = 313332607; /* GXTEntry: "Perfect Sparrow Carcass" */
				bVar2 = -124539232; /* GXTEntry: "Perfect Toad Carcass" */
				bVar3 = 102446365; /* GXTEntry: "Perfect Skunk Carcass" */
			}
			break;
		case -1992824800:
			if (bParam1 == 905173572)
			{
				bVar0 = 1432949803; /* GXTEntry: "Perfect Bat Carcass" */
				bVar1 = -983831788; /* GXTEntry: "Perfect Blue Jay Carcass" */
				bVar2 = 59384454; /* GXTEntry: "Perfect Crow Carcass" */
				bVar3 = 924882045; /* GXTEntry: "Perfect Beaver Carcass" */
			}
			else if (bParam1 == 1432949803)
			{
				bVar0 = 905173572; /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
				bVar1 = -983831788; /* GXTEntry: "Perfect Blue Jay Carcass" */
				bVar2 = 59384454; /* GXTEntry: "Perfect Crow Carcass" */
				bVar3 = 924882045; /* GXTEntry: "Perfect Beaver Carcass" */
			}
			else if (bParam1 == -983831788)
			{
				bVar0 = 905173572; /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
				bVar1 = 1432949803; /* GXTEntry: "Perfect Bat Carcass" */
				bVar2 = 59384454; /* GXTEntry: "Perfect Crow Carcass" */
				bVar3 = 924882045; /* GXTEntry: "Perfect Beaver Carcass" */
			}
			else if (bParam1 == 59384454)
			{
				bVar0 = 905173572; /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
				bVar1 = 1432949803; /* GXTEntry: "Perfect Bat Carcass" */
				bVar2 = -983831788; /* GXTEntry: "Perfect Blue Jay Carcass" */
				bVar3 = 924882045; /* GXTEntry: "Perfect Beaver Carcass" */
			}
			else if (bParam1 == 924882045)
			{
				bVar0 = 905173572; /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
				bVar1 = 1432949803; /* GXTEntry: "Perfect Bat Carcass" */
				bVar2 = -983831788; /* GXTEntry: "Perfect Blue Jay Carcass" */
				bVar3 = 59384454; /* GXTEntry: "Perfect Crow Carcass" */
			}
			break;
	}
	if (iParam0 == -949689219)
	{
		if (bParam3)
		{
			if (func_801(bParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_801(bParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_801(bVar0))
		{
			*sParam2++;
		}
		if (func_801(bVar0))
		{
			return 1;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_801(bParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_801(bParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_801(bVar0))
		{
			*sParam2++;
		}
		if (func_801(bVar1))
		{
			*sParam2++;
		}
		if (func_801(bVar0) && func_801(bVar1))
		{
			return 1;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_801(bParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_801(bParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_801(bVar0))
		{
			*sParam2++;
		}
		if (func_801(bVar1))
		{
			*sParam2++;
		}
		if (func_801(bVar2))
		{
			*sParam2++;
		}
		if ((func_801(bVar0) && func_801(bVar1)) && func_801(bVar2))
		{
			return 1;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_801(bParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_801(bParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_801(bVar0))
		{
			*sParam2++;
		}
		if (func_801(bVar1))
		{
			*sParam2++;
		}
		if (func_801(bVar2))
		{
			*sParam2++;
		}
		if (func_801(bVar3))
		{
			*sParam2++;
		}
		if (((func_801(bVar0) && func_801(bVar1)) && func_801(bVar2)) && func_801(bVar3))
		{
			return 1;
		}
	}
	return 0;
}

void func_693(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_830(1497516462);
			func_831(2016141805);
			func_831(1010885152);
			func_831(-502324015);
			break;
		case 2016141805:
			func_831(1497516462);
			func_830(2016141805);
			func_831(1010885152);
			func_831(-502324015);
			break;
		case 1010885152:
			func_831(1497516462);
			func_831(2016141805);
			func_830(1010885152);
			func_831(-502324015);
			break;
		case -502324015:
			func_831(1497516462);
			func_831(2016141805);
			func_831(1010885152);
			func_830(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_831(-538889627);
			func_831(-538880323);
			func_831(-1056767524);
			func_830(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_832();
			func_830(iParam0);
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
			func_833();
			func_830(iParam0);
			break;
		case 2019386373:
			func_831(-664252410);
			func_831(2109952320);
			func_830(2019386373);
			break;
		case -664252410:
			func_831(2019386373);
			func_831(2109952320);
			func_830(-664252410);
			break;
		case 2109952320:
			func_831(2019386373);
			func_831(-664252410);
			func_830(2109952320);
			break;
		case -1674179981:
			func_831(-1835851517);
			func_831(-1838352012);
			func_830(-1674179981);
			break;
		case -1835851517:
			func_831(-1674179981);
			func_831(-1838352012);
			func_830(-1835851517);
			break;
		case -1838352012:
			func_831(-1674179981);
			func_831(-1835851517);
			func_830(-1838352012);
			break;
		case -1717960576:
			func_831(210001842);
			func_830(-1717960576);
			break;
		case 210001842:
			func_831(-1717960576);
			func_830(210001842);
			break;
		case -150493654:
			func_831(-1271608261);
			func_831(1846061697);
			func_831(-1145519186);
			func_830(-150493654);
			break;
		case -1271608261:
			func_831(-150493654);
			func_831(1846061697);
			func_831(-1145519186);
			func_830(-1271608261);
			break;
		case 1846061697:
			func_831(-150493654);
			func_831(-1271608261);
			func_831(-1145519186);
			func_830(1846061697);
			break;
		case -1145519186:
			func_831(-150493654);
			func_831(-1271608261);
			func_831(1846061697);
			func_830(-1145519186);
			break;
		case 1766284049:
			func_831(280705402);
			func_831(1926308480);
			func_830(1766284049);
			break;
		case 280705402:
			func_831(1766284049);
			func_831(1926308480);
			func_830(280705402);
			break;
		case 1926308480:
			func_831(1766284049);
			func_831(280705402);
			func_830(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_831(439465264);
				func_830(1609506757);
			}
			else
			{
				func_831(1609506757);
				func_831(439465264);
			}
			break;
		case 439465264:
			if (func_834(1609506757))
			{
				if (bParam1)
				{
					func_830(439465264);
				}
				else
				{
					func_831(439465264);
				}
			}
			break;
		case 1822001510:
			func_831(-1612662716);
			func_830(1822001510);
			break;
		case -1612662716:
			func_831(1822001510);
			func_830(-1612662716);
			break;
		case 1306158345:
			func_831(1952610440);
			func_831(-223469678);
			func_831(-404698347);
			func_831(1517904467);
			func_830(1306158345);
			break;
		case 1952610440:
			func_831(1306158345);
			func_831(-223469678);
			func_831(-404698347);
			func_831(1517904467);
			func_830(1952610440);
			break;
		case -223469678:
			func_831(1306158345);
			func_831(1952610440);
			func_831(-404698347);
			func_831(1517904467);
			func_830(-223469678);
			break;
		case -404698347:
			func_831(1306158345);
			func_831(1952610440);
			func_831(-223469678);
			func_831(1517904467);
			func_830(-404698347);
			break;
		case 1517904467:
			func_831(1306158345);
			func_831(1952610440);
			func_831(-223469678);
			func_831(-404698347);
			func_830(1517904467);
			break;
		case 1376646519:
			func_831(931649776);
			func_831(-434590080);
			func_831(1743048395);
			func_831(449774763);
			func_830(1376646519);
			break;
		case 931649776:
			func_831(1376646519);
			func_831(-434590080);
			func_831(1743048395);
			func_831(449774763);
			func_830(931649776);
			break;
		case -434590080:
			func_831(1376646519);
			func_831(931649776);
			func_831(1743048395);
			func_831(449774763);
			func_830(-434590080);
			break;
		case 1743048395:
			func_831(1376646519);
			func_831(931649776);
			func_831(-434590080);
			func_831(449774763);
			func_830(1743048395);
			break;
		case 449774763:
			func_831(1376646519);
			func_831(931649776);
			func_831(-434590080);
			func_831(1743048395);
			func_830(449774763);
			break;
		case -1414537028:
			func_831(38162571);
			func_831(1350391819);
			func_831(54073871);
			func_830(-1414537028);
			break;
		case 38162571:
			func_831(-1414537028);
			func_831(1350391819);
			func_831(54073871);
			func_830(38162571);
			break;
		case 1350391819:
			func_831(-1414537028);
			func_831(38162571);
			func_831(54073871);
			func_830(1350391819);
			break;
		case 54073871:
			func_831(-1414537028);
			func_831(38162571);
			func_831(1350391819);
			func_830(54073871);
			break;
		case 198200492:
			func_830(198200492);
			func_831(-1124061431);
			func_831(52706132);
			func_831(-259123672);
			break;
		case -1124061431:
			func_831(198200492);
			func_830(-1124061431);
			func_831(52706132);
			func_831(-259123672);
			break;
		case 52706132:
			func_831(198200492);
			func_831(-1124061431);
			func_830(52706132);
			func_831(-259123672);
			break;
		case -259123672:
			func_831(198200492);
			func_831(-1124061431);
			func_831(52706132);
			func_830(-259123672);
			break;
		case -919512195:
			func_830(-919512195);
			func_831(-1925798111);
			func_831(420709909);
			func_831(1703426636);
			break;
		case -1925798111:
			func_830(-1925798111);
			func_831(-919512195);
			func_831(420709909);
			func_831(1703426636);
			break;
		case 420709909:
			func_830(420709909);
			func_831(-919512195);
			func_831(-1925798111);
			func_831(1703426636);
			break;
		case 1703426636:
			func_830(1703426636);
			func_831(-919512195);
			func_831(-1925798111);
			func_831(420709909);
			break;
		case -1223121209:
			func_830(-1223121209);
			func_831(630808005);
			break;
		case 630808005:
			func_830(630808005);
			func_831(-1223121209);
			break;
		case 1453909576:
			func_830(1453909576);
			func_831(1643531967);
			break;
		case 1643531967:
			func_830(1643531967);
			func_831(1453909576);
			break;
		case 0:
			func_830(0);
			func_831(473295046);
			func_831(-1738165526);
			break;
		case 473295046:
			func_830(473295046);
			func_831(0);
			func_831(-1738165526);
			break;
		case -1738165526:
			func_830(-1738165526);
			func_831(0);
			func_831(473295046);
			break;
		case 932909855:
			func_830(932909855);
			func_831(2051822093);
			break;
		case 2051822093:
			func_830(2051822093);
			func_831(932909855);
			break;
		case 405586984:
			func_830(405586984);
			func_831(1509509592);
			func_831(-959357075);
			func_831(-1311865656);
			break;
		case 1509509592:
			func_830(1509509592);
			func_831(405586984);
			func_831(-959357075);
			func_831(-1311865656);
			break;
		case -959357075:
			func_830(-959357075);
			func_831(1509509592);
			func_831(405586984);
			func_831(-1311865656);
			break;
		case -1311865656:
			func_830(-1311865656);
			func_831(1509509592);
			func_831(-959357075);
			func_831(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_830(-524145696);
			}
			else
			{
				func_831(-524145696);
			}
			func_831(1626481264);
			func_831(282809459);
			break;
		case 282809459:
			func_830(282809459);
			func_831(1626481264);
			func_831(-524145696);
			break;
		case 1626481264:
			func_830(1626481264);
			func_831(-524145696);
			func_831(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_830(885203519);
			}
			else
			{
				func_831(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_830(-1080627546);
			}
			else
			{
				func_831(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_834(iParam0))
				{
					func_830(iParam0);
				}
			}
			else if (func_834(iParam0))
			{
				func_831(iParam0);
			}
			break;
	}
}

void func_694(int iParam0)
{
	if (!func_835(iParam0))
	{
		func_837(func_836(iParam0));
	}
}

int func_695()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_835(COLLECTION::_0x126CBEBBA46693CF(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_696(bool bParam0, int iParam1, int iParam2)
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
			bVar9 = 281887510; /* GXTEntry: "Little Egret Plume" */
			bVar10 = -164081697; /* GXTEntry: "Reddish Egret Plume" */
			bVar11 = -1161319399; /* GXTEntry: "Snowy Egret Plume" */
			bVar12 = joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT");
			break;
		case 2:
			bVar9 = -222563712; /* GXTEntry: "Heron Plume" */
			bVar10 = joaat("PROVISION_RO_FLOWER_LADY_SLIPPER");
			bVar11 = joaat("PROVISION_RO_FLOWER_MOCCASIN");
			break;
		case 4:
			bVar9 = 2116770557; /* GXTEntry: "Gator Egg" */
			bVar10 = joaat("PROVISION_RO_FLOWER_ACUNAS_STAR");
			bVar11 = joaat("PROVISION_RO_FLOWER_CIGAR");
			bVar12 = joaat("PROVISION_RO_FLOWER_GHOST");
			break;
		case 8:
			bVar9 = 2085530337; /* GXTEntry: "Spoonbill Plume" */
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
	iVar1 = func_697(bVar9);
	iVar2 = func_697(bVar10);
	iVar3 = func_697(bVar11);
	iVar5 = func_698(bVar9);
	iVar6 = func_698(bVar10);
	iVar7 = func_698(bVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_697(bVar12);
		iVar8 = func_698(bVar12);
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

int func_697(bool bParam0)
{
	int iVar0;

	if (func_549(bParam0, 1, 0))
	{
		iVar0 = func_502(bParam0, 0, 0);
	}
	return iVar0;
}

int func_698(bool bParam0)
{
	switch (bParam0)
	{
		case 281887510: /* GXTEntry: "Little Egret Plume" */
			return 5;
		case -164081697: /* GXTEntry: "Reddish Egret Plume" */
			return 5;
		case -1161319399: /* GXTEntry: "Snowy Egret Plume" */
			return 5;
		case joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"):
			return 15;
		case -222563712: /* GXTEntry: "Heron Plume" */
			return 20;
		case joaat("PROVISION_RO_FLOWER_LADY_SLIPPER"):
			return 7;
		case joaat("PROVISION_RO_FLOWER_MOCCASIN"):
			return 10;
		case 2116770557: /* GXTEntry: "Gator Egg" */
			return 25;
		case joaat("PROVISION_RO_FLOWER_ACUNAS_STAR"):
			return 3;
		case joaat("PROVISION_RO_FLOWER_CIGAR"):
			return 7;
		case joaat("PROVISION_RO_FLOWER_GHOST"):
			return 5;
		case 2085530337: /* GXTEntry: "Spoonbill Plume" */
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

int func_699(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0);
}

void func_700(int iParam0, int iParam1)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, iParam1);
}

int func_701(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;

	if (!func_785(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
	return uVar5;
}

void func_702(bool bParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((bParam0 == func_701(iParam1, 5) || bParam0 == func_701(iParam1, 6)) || bParam0 == func_701(iParam1, 7)) || bParam0 == func_701(iParam1, 8)) || bParam0 == func_701(iParam1, 9))
	{
		func_692(iParam1, bParam0, &sParam2, 0, iParam3, bParam4);
		func_515(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_517(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_703(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 1;
	if ((((bParam0 == func_701(iParam1, 5) || bParam0 == func_701(iParam1, 6)) || bParam0 == func_701(iParam1, 7)) || bParam0 == func_701(iParam1, 8)) || bParam0 == func_701(iParam1, 9))
	{
		if (func_692(iParam1, bParam0, &iVar0, 0, 0, 0))
		{
			func_515(51, bParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_517(51, 0, 0, iVar0, func_645(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_515(51, bParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_517(51, 0, 0, iVar0, func_645(iParam1, 20), 1, 0);
			}
		}
	}
}

int func_704()
{
	if (func_209(((*Global_1347702)[37 /*49*/])->f_15) && Global_1392388->f_7)
	{
		return 1;
	}
	return 0;
}

int func_705(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_498(bParam0, 0))
	{
		return 0;
	}
	if (Global_1935630->f_12)
	{
		return 0;
	}
	bVar0 = func_634(bParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_720("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_721(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_618(Var4.f_4))
			{
			}
			else if (WEAPON::_0x5C2EA6C44F515F34(Var4.f_4) == bVar0)
			{
				func_722(iVar1);
				return 1;
			}
			iVar3++;
		}
		func_722(iVar1);
	}
	return 0;
}

void func_706(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
}

void func_707(int iParam0)
{
	if (!func_838(iParam0))
	{
		COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	}
}

void func_708(int iParam0)
{
	COLLECTION::_0x398FAB9C96A81924(iParam0, 1);
}

void func_709(bool bParam0, int iParam1, var uParam2)
{
	*iParam1 = 0;
	*uParam2 = 0;
	switch (bParam0)
	{
		case 1234009870: /* GXTEntry: "Revolver Cartridges - Regular" */
			*iParam1 = joaat("revolver_ammo_box");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case -1202134084: /* GXTEntry: "Opened Revolver Cartridges" */
			*iParam1 = joaat("revolver_ammo_box_used");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case 1297050066: /* GXTEntry: "Revolver Cartridges - Express" */
			*iParam1 = joaat("revolver_ammo_box_express");
			*uParam2 = joaat("AMMO_REVOLVER_EXPRESS");
			break;
		case -1780177928: /* GXTEntry: "Revolver Cartridges - High Velocity" */
			*iParam1 = joaat("revolver_ammo_box_high_velocity");
			*uParam2 = joaat("AMMO_REVOLVER_HIGH_VELOCITY");
			break;
		case -1467836497: /* GXTEntry: "Pistol Cartridges - Regular" */
			*iParam1 = joaat("pistol_ammo_box");
			*uParam2 = joaat("ammo_pistol");
			break;
		case 1723805622: /* GXTEntry: "Opened Pistol Cartridges" */
			*iParam1 = joaat("pistol_ammo_box_used");
			*uParam2 = joaat("ammo_pistol");
			break;
		case -153287664: /* GXTEntry: "Pistol Cartridges - Express" */
			*iParam1 = joaat("pistol_ammo_box_express");
			*uParam2 = joaat("AMMO_PISTOL_EXPRESS");
			break;
		case 1845082736: /* GXTEntry: "Pistol Cartridges - High Velocity" */
			*iParam1 = joaat("pistol_ammo_box_high_velocity");
			*uParam2 = joaat("AMMO_PISTOL_HIGH_VELOCITY");
			break;
		case 406755377: /* GXTEntry: "Rifle Cartridges - Regular" */
			*iParam1 = joaat("rifle_ammo_box");
			*uParam2 = joaat("ammo_rifle");
			break;
		case 1469029564: /* GXTEntry: "Opened Rifle Cartridges" */
			*iParam1 = joaat("rifle_ammo_box_used");
			*uParam2 = joaat("ammo_rifle");
			break;
		case 45760211: /* GXTEntry: "Rifle Cartridges - Express" */
			*iParam1 = joaat("rifle_ammo_box_express");
			*uParam2 = joaat("AMMO_RIFLE_EXPRESS");
			break;
		case -276295943: /* GXTEntry: "Rifle Cartridges - High Velocity" */
			*iParam1 = joaat("rifle_ammo_box_high_velocity");
			*uParam2 = joaat("AMMO_RIFLE_HIGH_VELOCITY");
			break;
		case -2029793397: /* GXTEntry: "Repeater Cartridges - Regular" */
			*iParam1 = joaat("repeater_ammo_box");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case 2120467495: /* GXTEntry: "Opened Repeater Cartridges" */
			*iParam1 = joaat("repeater_ammo_box_used");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case -2075613923: /* GXTEntry: "Repeater Cartridges - Express" */
			*iParam1 = joaat("repeater_ammo_box_express");
			*uParam2 = joaat("AMMO_REPEATER_EXPRESS");
			break;
		case 122656217: /* GXTEntry: "Repeater Cartridges - High Velocity" */
			*iParam1 = joaat("repeater_ammo_box_high_velocity");
			*uParam2 = joaat("AMMO_REPEATER_HIGH_VELOCITY");
			break;
		case 2107187484: /* GXTEntry: "Shotgun Shells - Regular" */
			*iParam1 = joaat("shotgun_ammo_box");
			*uParam2 = joaat("ammo_shotgun");
			break;
		case -791844268: /* GXTEntry: "Opened Shotgun Shells" */
			*iParam1 = joaat("shotgun_ammo_box_used");
			*uParam2 = joaat("ammo_shotgun");
			break;
		case 305770744: /* GXTEntry: "Shotgun - Slug" */
			*iParam1 = joaat("shotgun_ammo_box_slug");
			*uParam2 = joaat("AMMO_SHOTGUN_SLUG");
			break;
		case 550900979: /* GXTEntry: "Rifle Cartridges - Varmint" */
			*iParam1 = joaat("22_ammo_box");
			*uParam2 = joaat("AMMO_22");
			break;
	}
}

int func_710(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if ((Global_1946804->f_57[iVar0 /*11*/])->f_8 == iParam0)
		{
			return func_839(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_711(bool bParam0, int iParam1)
{
	switch (bParam0)
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

int func_712(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	func_840();
	if (iParam2 == 39)
	{
		Var0 = { func_628(bParam0, 1, 0) };
		iParam2 = func_711(func_710(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return 0;
	}
	if (func_519(bParam0, 866047851) && func_820(&(Global_1946804->f_1378)) >= 2)
	{
		return 0;
	}
	if ((func_715(32768) && iParam2 == 10) && bParam0 != &Global_1946804->f_57[iParam2 /*11*/])
	{
		func_841(func_839(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_842(iParam2);
	func_843(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2 /*3*/] != &Global_1946804->f_57[iParam2 /*11*/] && (Global_1946804->f_57[iParam2 /*11*/])->f_1 > 1)
	{
		func_844(Global_1946804->f_1378.f_1[iParam2 /*3*/], 4, 6);
		func_844(Global_1946804->f_1497.f_1[iParam2 /*3*/], 4, 6);
	}
	func_845(&(Global_1946804->f_1378), bParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = (Global_1946804->f_1378.f_1[iParam2 /*3*/])->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2 /*3*/] = bParam0;
	(Global_1946804->f_1378.f_1[iParam2 /*3*/])->f_1 = func_846(bParam0, iParam2, iParam1, func_208() != -1);
	if (bParam4)
	{
		func_847(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_847(&(Global_1946804->f_1378), 1, 0);
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
				func_848(func_839(&(Global_1946804->f_2589.f_2[iVar6 /*2*/]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return 1;
}

void func_713(bool bParam0, bool bParam1, bool bParam2)
{
	func_849(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

void func_714(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_850(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = bParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_851(Var0);
}

bool func_715(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_716()
{
	func_852(&(Global_1946804->f_2776));
	func_853(32768);
	func_848(1108822547, 8, 6);
}

int func_717(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_711(bParam0, 1);
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

void func_718(int iParam0)
{
	struct<4> Var0;

	if (func_854(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_855(Var0);
}

void func_719(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;

	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_855(Var0);
}

int func_720(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_636(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_721(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_722(int iParam0)
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

float func_723()
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

	if (func_856())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_857(2);
	}
	if (Global_1347477->f_119)
	{
		return func_857(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_858();
	fVar2 = func_859();
	fVar3 = func_860();
	fVar4 = func_861();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_862()));
	fVar7 = (func_857(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_863(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_864(3, fVar9, fVar9 > 100f);
	return func_865(fVar7, -100f, 100f);
}

float func_724()
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

	if (func_856())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_857(1);
	}
	if (Global_1347477->f_119)
	{
		return func_857(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_858();
	fVar2 = func_859();
	fVar3 = func_860();
	fVar4 = func_861();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_862()));
	fVar7 = (func_857(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_863(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_864(2, fVar9, fVar9 > 100f);
	return func_865(fVar7, -100f, 100f);
}

float func_725()
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

	if (func_856())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_857(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_866())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_867())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_857(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_858();
	fVar2 = func_859();
	fVar3 = func_860();
	fVar4 = func_861();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_862()));
	fVar7 = (func_857(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_863(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_864(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && PLAYER::_0x0317C947D062854E(PLAYER::PLAYER_ID()) < 1f)
	{
		return func_857(0);
	}
	return func_865(fVar7, -100f, 100f);
}

bool func_726(int iParam0, int iParam1)
{
	return ((Global_1905944->f_22[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_727(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_728(bool bParam0, var uParam1, var uParam2, bool bParam3, int iParam4, bool bParam5)
{
	if (!func_498(bParam0, 0))
	{
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return 0;
	}
	if (func_632(bParam0, uParam2, bParam3, bParam5, 0))
	{
		return 0;
	}
	if (!func_527(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_636(0), uParam1, uParam2, bParam0, uParam2->f_4, bParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_729(int iParam0, bool bParam1)
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
				return func_868();
			}
			break;
	}
	return 0;
}

int func_730(bool bParam0)
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
		case 509954990: /* GXTEntry: "The Chevalier" */
			return 29;
		case -445916744: /* GXTEntry: "The Heartlands" */
			return 30;
		case -866249154: /* GXTEntry: "The Gambler" */
			return 31;
		case -2077063704: /* GXTEntry: "The Earl" */
			return 32;
		case 205207539: /* GXTEntry: "The McLaughlin" */
			return 33;
		case -1033657275: /* GXTEntry: "The Josiah" */
			return 34;
		case 1806002837: /* GXTEntry: "The Farrier" */
			return 35;
		case 705324896: /* GXTEntry: "The Donegal" */
			return 36;
		case -1541763703: /* GXTEntry: "The Bulldogger" */
			return 37;
		case 387052410: /* GXTEntry: "The Ranch Hand" */
			return 38;
		case -361288914: /* GXTEntry: "The Scrapper" */
			return 39;
		case -911054515: /* GXTEntry: "The Armadillo" */
			return 40;
		case 1084200963: /* GXTEntry: "The Valentine" */
			return 41;
		case 1847948074: /* GXTEntry: "The Vaquero" */
			return 42;
		case -1212526764: /* GXTEntry: "The Dewberry Creek" */
			return 43;
		case 1851440270: /* GXTEntry: "The Clairmont" */
			return 44;
		case -2028985700: /* GXTEntry: "The Roscoe" */
			return 45;
		case 1074435214: /* GXTEntry: "The Estate Boss" */
			return 46;
		case -883015675: /* GXTEntry: "The Drover" */
			return 47;
		case -1047155604: /* GXTEntry: "The Calumet" */
			return 48;
		case 1123231221: /* GXTEntry: "The Cowpuncher" */
			return 49;
		case 1866989210: /* GXTEntry: "The Tumbleweed" */
			return 50;
		case 478183719: /* GXTEntry: "The Drifter" */
			return 51;
		case -1698955868: /* GXTEntry: "The Leatherman" */
			return 52;
		case -2029378634: /* GXTEntry: "The Cumberland" */
			return 53;
		case 1339864416: /* GXTEntry: "The Millesani" */
			return 54;
		case 890998115: /* GXTEntry: "The Faulkton" */
			return 55;
		case -1376288999: /* GXTEntry: "The Dolton" */
			return 56;
		case -1041123771: /* GXTEntry: "The Corson" */
			return 57;
		case 1389254668: /* GXTEntry: "The Saint Denis" */
			return 58;
		case -346112633: /* GXTEntry: "The Deauville" */
			return 59;
		case 773309172: /* GXTEntry: "The Bretagne" */
			return 60;
		case -291256376:
			return 23;
		default:
			break;
	}
	return -1;
}

int func_731(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return 0;
	}
	return 1;
}

void func_732(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	if (!func_731(iParam0))
	{
		return;
	}
	if (func_869(iParam0))
	{
		return;
	}
	if (!func_870(iParam0))
	{
		func_871(iParam0, 1, 0);
	}
	bVar0 = func_872(iParam0);
	if (bVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_873(iParam0, 512))
		{
			func_714(30, bVar0, 0, 0, 0);
		}
	}
	if ((!func_874() && !bParam1) && !func_875(0, 0, 1))
	{
		func_876(MISC::_CREATE_VAR_STRING(10, "OUT_JOURN_DONE", MISC::_CREATE_VAR_STRING(0, bVar0)), 10000, 0, 0, 0, 1);
	}
	func_877(iParam0, 6);
	if (bParam2)
	{
		if (!func_875(0, 0, 1))
		{
			func_126(1, 4);
		}
	}
}

int func_733()
{
	return Global_1946804->f_1;
}

bool func_734(int iParam0, bool bParam1)
{
	return func_729(iParam0, 0) < func_878(iParam0, bParam1);
}

int func_735(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		bVar1 = &Global_1946804->f_2657[iVar0];
		if (func_523(bVar1) == iParam0)
		{
			*bParam1 = bVar1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_736(bool bParam0)
{
	if (bParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_711(bParam0, 1) /*3*/] != &Global_1946804->f_57[func_711(bParam0, 1) /*11*/];
}

void func_737(int iParam0, bool bParam1)
{
	if (func_519(bParam1, 130796156))
	{
		func_879(bParam1, 0);
	}
	else if (func_519(bParam1, 930141731))
	{
		func_879(bParam1, 1);
		func_880(iParam0);
	}
}

void func_738(var uParam0, int iParam1)
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
		if ((((iParam1 == 617531372 && &uParam0->f_1[iVar0] == 291123060) || (iParam1 == 291123060 && &uParam0->f_1[iVar0] == 617531372)) || (iParam1 == 1356624740 && &uParam0->f_1[iVar0] == 1884295263)) || (iParam1 == 1884295263 && &uParam0->f_1[iVar0] == 1356624740))
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

int func_739(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_881(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_882(uParam2, iParam0, Var1);
	return 1;
}

int func_740(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_741(int iParam0)
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

int func_742(bool bParam0)
{
	var uVar0;

	if (!func_883(bParam0, &uVar0, joaat("inventory"), 0, 0, joaat("ui_itemviewer")))
	{
		return joaat("_placeholder");
	}
	return uVar0;
}

var func_743(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_884(sParam0, sParam1, iParam2);
	return uVar20;
}

bool func_744()
{
	return !&Global_1911774;
}

void func_745(bool bParam0, bool bParam1, bool bParam2, int iParam3)
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

char* func_746(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_747(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_748(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

bool func_749(bool bParam0, int iParam1)
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

int func_750(bool bParam0, int iParam1)
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

bool func_751(bool bParam0, int iParam1)
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
	if (!func_749(bParam0, iVar0))
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

void func_752(bool bParam0)
{
	DECORATOR::DECOR_REMOVE(bParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(bParam0, "metaped_outfit_request_name");
}

int func_753(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, bool bParam10, int iParam11, bool bParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
	while (iVar0 < 48)
	{
		if (func_447(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == ((*Global_1945938)[iVar0 /*18*/])->f_11 && iParam1 == ((*Global_1945938)[iVar0 /*18*/])->f_4)
				{
					if (iParam3 <= Global_1945938[iVar0 /*18*/])
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
				func_623(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, bParam10, iParam11, bParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}

void func_754(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	int iVar0;

	if (bParam4 && !func_174(iParam0))
	{
		return;
	}
	iVar0 = func_315(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, MISC::_CREATE_VAR_STRING(10, sParam1, sParam2, sParam3));
}

int func_755(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 3;
	}
	return 0;
}

int func_756(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;

	bVar0 = func_208() != -1;
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

int func_757(bool bParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_885(iVar2) != 0 && PERSCHAR::_0x800DF3FC913355F3(func_886(iVar2)))
		{
			if (func_886(iVar2) == iVar0)
			{
				return iVar2;
			}
		}
		iVar1++;
	}
	return -1;
}

int func_758(var uParam0, char* sParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 1;
	}
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		return 1;
	}
	if (!ANIMSCENE::_0xA9016536015DE29D(*uParam0, sParam1))
	{
		return 1;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, sParam1))
	{
		return 1;
	}
	if (ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, sParam1) || ANIMSCENE::_0x0DF57F86FE71DBE5(*uParam0, sParam1))
	{
		ANIMSCENE::_0xAE6ADA8FE7E84ACC(*uParam0, sParam1);
	}
	return 0;
}

float func_759(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_760(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_498(bParam0, 0))
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

struct<4> func_761(bool bParam0)
{
	return func_665(joaat("character"), func_887(), -1591664384, bParam0);
}

struct<4> func_762(bool bParam0)
{
	int iVar0;

	iVar0 = func_636(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224214))
		{
			*Global_1224214 = { func_665(923904168, func_761(bParam0), -740156546, bParam0) };
		}
		return *Global_1224214;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224222))
		{
			*Global_1224222 = { func_665(923904168, func_761(bParam0), -740156546, 0) };
		}
		return *Global_1224222;
	}
	return func_665(923904168, func_761(bParam0), -740156546, 0);
}

int func_763(bool bParam0, bool bParam1)
{
	if (func_523(bParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_0xD955FEE4B87AFA07(bParam0))
	{
		if (bParam1)
		{
			return func_630(joaat("UPGRADE_OFFHAND_HOLSTER"), 0) > 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

struct<4> func_764(bool bParam0)
{
	int iVar0;

	iVar0 = func_636(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224218))
		{
			*Global_1224218 = { func_665(271701509, func_761(bParam0), 12999093, 0) };
		}
		return *Global_1224218;
	}
	return func_665(271701509, func_761(bParam0), 12999093, 0);
}

int func_765(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_523(bParam0);
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

int func_766(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(func_636(bParam5), &uParam0, uParam4, !bParam6))
	{
		return 0;
	}
	return 1;
}

int func_767(bool bParam0)
{
	if (!func_498(*bParam0, 0))
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
		case -1424823393: /* GXTEntry: "Opened Cigarettes" */
			*bParam0 = joaat("CONSUMABLE_CIGARETTE_BOX");
			return 1;
		default:
			break;
	}
	return 0;
}

int func_768(bool bParam0, var uParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	bool bVar28;
	int iVar29;

	if (!func_498(bParam0, 0))
	{
		return 0;
	}
	Var0 = { func_628(bParam0, 0, 1) };
	iVar5 = 1728382685; /* GXTEntry: "Right" */
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_662((375 + iVar29), 1);
		if (func_663(bParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_664(bParam0, &Var6, iVar5);
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

int func_769(bool bParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;

	if (!func_498(bParam0, 0))
	{
		return 0;
	}
	Var0 = { func_665(bParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_636(bParam6), &Var0, 0);
	return uVar4;
}

struct<14> func_770(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_771(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_772(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_636(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_773(int iParam0)
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

float func_774(int iParam0)
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
			return func_888(iParam0);
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
			return func_888(iParam0);
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
			return func_888(iParam0);
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

int func_775(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_521(18);
		case 2:
			return func_521(20);
		case 1:
			return func_521(19);
		default:
			break;
	}
	return 1;
}

int func_776(int iParam0)
{
	return func_889(&(Global_40.f_11095.f_11[iParam0]));
}

void func_777(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	if (func_208() != -1)
	{
		return;
	}
	if (Global_1347477->f_117 || !func_521(31))
	{
		return;
	}
	iVar0 = func_776(iParam0);
	fVar1 = &Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_776(iParam0);
	if (func_890(iParam0) && func_891(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_892(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_893(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_509(func_894(iParam0), 0);
					}
					func_895(iParam0, iVar2, iVar3);
					func_896(iParam0, 7000);
				}
				Global_1347477->f_8 = 1;
			}
		}
	}
	Global_1347477->f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
}

char* func_778(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_779(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("itemtype_player_stamina");
		case 0:
			return joaat("itemtype_player_health");
		case 2:
			return joaat("itemtype_player_deadeye");
		default:
			break;
	}
	return 0;
}

bool func_780(int iParam0, int iParam1)
{
	if (func_208() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iParam0]), iParam1);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iParam0]), iParam1);
}

int func_781(int iParam0)
{
	if (func_208() != -1)
	{
		if (func_726(iParam0, 4))
		{
			return 0;
		}
	}
	else if (func_726(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_782(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_726(iParam0, 65536) && !func_726(iParam0, 32768))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if ((Global_40.f_7756[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_726(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0 /*3*/] - iVar1);
			if ((Global_40.f_7756[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && func_726(iParam0, 32768))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_783(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_784()
{
	return Global_1905944->f_5694;
}

int func_785(int iParam0, var uParam1)
{
	if (!func_897(iParam0))
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

int func_786()
{
	return func_898(Global_40.f_12018);
}

int func_787()
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		bVar2 = func_644(iVar1);
		if (func_549(bVar2, 1, 0) || func_793(func_792(bVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_788()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_899(COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("dino_bones"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_789()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_798(COLLECTION::_0x126CBEBBA46693CF(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_790()
{
	return COLLECTION::_0x3A65F4844913A047(joaat("rock_carvings"), 0);
}

int func_791(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 554799588 /* GXTEntry: "Cigarette Cards Famous Gunslingers" */;
		case 1:
			return -1021394391 /* GXTEntry: "Cigarette Cards Artists & Poets" */;
		case 2:
			return -987306668 /* GXTEntry: "Cigarette Cards Vistas of America" */;
		case 3:
			return -1028735103 /* GXTEntry: "Cigarette Cards Gems Of Beauty" */;
		case 4:
			return 515229791 /* GXTEntry: "Cigarette Cards Flora of America" */;
		case 5:
			return -1230863414 /* GXTEntry: "Cigarette Cards Stars of the Stage" */;
		case 6:
			return 232875659 /* GXTEntry: "Cigarette Cards Fauna of North America" */;
		case 7:
			return 1423129537 /* GXTEntry: "Cigarette Cards Marvels of Travel" */;
		case 8:
			return -435742319 /* GXTEntry: "Cigarette Cards The World\'s Champions" */;
		case 9:
			return -1854702679 /* GXTEntry: "Cigarette Cards Amazing Inventions" */;
		case 10:
			return 1265323898 /* GXTEntry: "Cigarette Cards Breeds of Horses" */;
		case 11:
			return -479775696 /* GXTEntry: "Cigarette Cards Prominent Americans" */;
		default:
			break;
	}
	return 0;
}

int func_792(bool bParam0)
{
	switch (bParam0)
	{
		case -1230863414: /* GXTEntry: "Cigarette Cards Stars of the Stage" */
			return 1;
		case -1021394391: /* GXTEntry: "Cigarette Cards Artists & Poets" */
			return 8;
		case 232875659: /* GXTEntry: "Cigarette Cards Fauna of North America" */
			return 4;
		case -1028735103: /* GXTEntry: "Cigarette Cards Gems Of Beauty" */
			return 16;
		case 554799588: /* GXTEntry: "Cigarette Cards Famous Gunslingers" */
			return 32;
		case 1265323898: /* GXTEntry: "Cigarette Cards Breeds of Horses" */
			return 64;
		case -1854702679: /* GXTEntry: "Cigarette Cards Amazing Inventions" */
			return 128;
		case -987306668: /* GXTEntry: "Cigarette Cards Vistas of America" */
			return 256;
		case -479775696: /* GXTEntry: "Cigarette Cards Prominent Americans" */
			return 2;
		case 515229791: /* GXTEntry: "Cigarette Cards Flora of America" */
			return 512;
		case -435742319: /* GXTEntry: "Cigarette Cards The World\'s Champions" */
			return 1024;
		case 1423129537: /* GXTEntry: "Cigarette Cards Marvels of Travel" */
			return 2048;
		default:
			break;
	}
	return 0;
}

bool func_793(var uParam0)
{
	return (Global_40.f_12018 && uParam0) != 0;
}

char* func_794(int iParam0)
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

int func_795(int iParam0)
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

int func_796(int iParam0)
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

char* func_797(bool bParam0)
{
	switch (bParam0)
	{
		case 281887510: /* GXTEntry: "Little Egret Plume" */
			return "COL_EP_LITTLE_FOUND";
		case -164081697: /* GXTEntry: "Reddish Egret Plume" */
			return "COL_EP_REDDISH_FOUND";
		case -1161319399: /* GXTEntry: "Snowy Egret Plume" */
			return "COL_EP_SNOWY_FOUND";
		case joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"):
			return "COL_RO_LADY_OF_NIGHT_FOUND";
		case -222563712: /* GXTEntry: "Heron Plume" */
			return "COL_HF_FOUND";
		case joaat("PROVISION_RO_FLOWER_LADY_SLIPPER"):
			return "COL_RO_LADY_SLIPPER_FOUND";
		case joaat("PROVISION_RO_FLOWER_MOCCASIN"):
			return "COL_RO_MOCCASIN_FOUND";
		case 2116770557: /* GXTEntry: "Gator Egg" */
			return "COL_GF_FOUND";
		case joaat("PROVISION_RO_FLOWER_ACUNAS_STAR"):
			return "COL_RO_ACUNAS_STAR_FOUND";
		case joaat("PROVISION_RO_FLOWER_CIGAR"):
			return "COL_RO_CIGAR_FOUND";
		case joaat("PROVISION_RO_FLOWER_GHOST"):
			return "COL_RO_GHOST_FOUND";
		case 2085530337: /* GXTEntry: "Spoonbill Plume" */
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

bool func_798(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

char* func_799(int iParam0)
{
	switch (iParam0)
	{
		case -1865241121:
			return "PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY";
		case 2117142684:
			return "PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY";
		case -1409326024:
			return "PROVISION_FISH_LAKE_STURGEON_LEGENDARY";
		case -641744968:
			return "PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY";
		case -946988203:
			return "PROVISION_FISH_LONGNOSE_GAR_LEGENDARY";
		case -646136018:
			return "PROVISION_FISH_MUSKIE_LEGENDARY";
		case -955835837:
			return "PROVISION_FISH_PERCH_LEGENDARY";
		case -179276075:
			return "PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY";
		case -492711560:
			return "PROVISION_FISH_ROCK_BASS_LEGENDARY";
		case 1764383959:
			return "PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY";
		case 317501533:
			return "PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY";
		case 817753087:
			return "PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY";
		case 576606016:
			return "PROVISION_FISH_BLUEGILL_LEGENDARY";
		default:
			break;
	}
	return "";
}

char* func_800(int iParam0)
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

int func_801(bool bParam0)
{
	if (func_900(bParam0) && func_549(bParam0, 1, 0))
	{
		return 1;
	}
	else if (func_901(bParam0) && func_902(bParam0))
	{
		return 1;
	}
	return 0;
}

char* func_802(bool bParam0)
{
	if (!func_498(bParam0, 0))
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(func_567(bParam0));
}

int func_803(int iParam0)
{
	return &(Global_1898164->f_1[iParam0 /*5*/]);
}

void func_804(bool bParam0)
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

void func_805(bool bParam0)
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

void func_806(bool bParam0)
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

void func_807(bool bParam0)
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

void func_808(bool bParam0)
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

void func_809(bool bParam0)
{
	int iVar0;

	iVar0 = 398076311;
	if (bParam0)
	{
		HUD::_0x4CC5F2FC1332577F(iVar0);
	}
	else
	{
		HUD::_0x8BC7C1F929D07BF3(iVar0);
	}
}

void func_810(bool bParam0)
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

void func_811(bool bParam0)
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

int func_812(bool bParam0)
{
	if (bParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_711(bParam0, 1) /*3*/]);
}

void func_813()
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-1526891582))
	{
		func_903();
		UNLOCK::_UNLOCK_SET_UNLOCKED(-1526891582, true);
		func_526(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"));
		func_573(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), true, 2, false, false);
		func_526(joaat("WEAPON_MELEE_KNIFE_JOHN"));
		func_573(joaat("WEAPON_MELEE_KNIFE_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_MELEE_KNIFE_JOHN"), true, 4, false, false);
	}
}

int func_814(bool bParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_636(0);
	*uParam1 = { func_665(bParam0, func_762(0), iParam3, 0) };
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

int func_815(bool bParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(bParam0))
	{
		return 1;
	}
	return 0;
}

int func_816(int iParam0, bool bParam1)
{
	if (iParam0 > bParam1)
	{
		return bParam1;
	}
	return iParam0;
}

void func_817(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_904(*iParam0);
	iVar1 = func_905(*iParam0);
	iVar2 = func_906(*iParam0);
	iVar3 = func_131(*iParam0);
	iVar4 = func_907(*iParam0);
	iVar5 = func_908(*iParam0);
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
	iVar6 = func_909(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_909(iVar1, iVar0);
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
	func_910(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_818(bool bParam0)
{
	return WEAPON::_0xC4DEC3CA8C365A5D(bParam0);
}

bool func_819(bool bParam0)
{
	struct<5> Var0;

	Var0 = { func_628(bParam0, 1, 0) };
	return func_710(Var0.f_4);
}

int func_820(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_519(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_519(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_519(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_519(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_519(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_519(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

int func_821(int iParam0, var uParam1)
{
	bool bVar0;
	int iVar1;

	iVar1 = func_711(func_911(iParam0), 1);
	if (iVar1 >= 39)
	{
		return 0;
	}
	if (&Global_1946804->f_1497.f_1[iVar1 /*3*/] != 0 && &Global_1946804->f_1497.f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
	{
		bVar0 = &Global_1946804->f_1497.f_1[iVar1 /*3*/];
		if (func_523(bVar0) == iParam0)
		{
			*uParam1 = bVar0;
			return 1;
		}
	}
	*uParam1 = 0;
	return 0;
}

int func_822(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam0 == &Global_1946804->f_57[func_711(bParam1, 1) /*11*/])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_715(524288))
	{
		switch (bParam1)
		{
			case 673166414:
				iVar0++;
				break;
			case -207860920:
				iVar0++;
				break;
		}
	}
	iVar0 = (iVar0 + PED::_0x31B2E7F2E3C58B89(bParam0, joaat("base"), iParam2, bParam3));
	return iVar0;
}

int func_823(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 968830139 /* GXTEntry: "Legendary Beaver Tooth" */;
		case 1:
			return -649219937 /* GXTEntry: "Legendary Tatanka Bison Horn" */;
		case 2:
			return -858567048 /* GXTEntry: "Legendary Buck Antler" */;
		case 3:
			return -718162726 /* GXTEntry: "Legendary Cougar Fang" */;
		case 4:
			return -1284282080 /* GXTEntry: "Legendary Coyote Fang" */;
		case 5:
			return -725003445 /* GXTEntry: "Legendary Elk Antler" */;
		case 6:
			return -1445630104 /* GXTEntry: "Legendary Fox Claw" */;
		case 7:
			return joaat("PROVISION_LIONS_PAW");
		case 8:
			return 967601061 /* GXTEntry: "Legendary Moose Antler" */;
		case 9:
			return 1946030891 /* GXTEntry: "Legendary Panther Eye" */;
		case 10:
			return -1511404982 /* GXTEntry: "Legendary Pronghorn Horn" */;
		case 11:
			return -944465290 /* GXTEntry: "Legendary Ram Horn" */;
		case 12:
			return -1701098855 /* GXTEntry: "Legendary Wolf Heart" */;
		case 13:
			return 425319238 /* GXTEntry: "Legendary Alligator Tooth" */;
		case 14:
			return joaat("PROVISION_CC_VINTAGE_HANDCUFFS");
		case 15:
			return joaat("PROVISION_BRACELET_GOLD");
		case 16:
			return -1540119664 /* GXTEntry: "Legendary Bear Claw" */;
		case 17:
			return joaat("PROVISION_RC_QUARTZ_CHUNK");
		case 18:
			return joaat("PROVISION_BRACELET_SILVER");
		case 19:
			return -390982951 /* GXTEntry: "Legendary Boar Tusk" */;
		case 20:
			return joaat("PROVISION_RF_WOOD_COBALT");
		case 21:
			return joaat("PROVISION_EARRING_GOLD");
		case 22:
			return -2054602073 /* GXTEntry: "Legendary Bison Horn" */;
		case 23:
			return joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT");
		case 24:
			return joaat("PROVISION_EARRING_SILVER");
		case 25:
			return 1566949660 /* GXTEntry: "Old Brass Compass" */;
		default:
			break;
	}
	return 0;
}

int func_824(int iParam0)
{
	return func_912(iParam0, -1);
}

bool func_825(int iParam0, bool bParam1)
{
	return func_913(func_91(), iParam0, bParam1);
}

int func_826()
{
	if (func_672())
	{
		return DLC::_0x1DB9D61E505AE3FC();
	}
	return 0;
}

void func_827(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_914((Global_40.f_4283.f_325 + iParam0));
}

void func_828(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_826())
	{
		func_743(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_gang_savings_special"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
	else
	{
		func_743(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_gang_savings"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
}

bool func_829(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

void func_830(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_915(iParam0, 1);
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

void func_831(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_915(iParam0, 1);
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

void func_832()
{
	func_831(-939420910);
	func_831(-1187950766);
	func_831(356365161);
	func_831(753127042);
	func_831(-2038424081);
	func_831(1884271742);
	func_831(459290420);
}

void func_833()
{
	func_831(704802028);
	func_831(588987611);
	func_831(2008888900);
	func_831(1649996811);
	func_831(227918160);
	func_831(168171957);
	func_831(1193080109);
	func_831(-491981251);
	func_831(-639037538);
	func_831(-618620429);
}

bool func_834(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_915(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return MISC::IS_BIT_SET(&(Global_40.f_283[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_835(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_836(int iParam0)
{
	switch (iParam0)
	{
		case -1791518714:
			return 1;
		case -2087881550:
			return 2;
		case 1908068621:
			return 4;
		case 1611247019:
			return 8;
		case 1319635688:
			return 16;
		default:
			break;
	}
	return 0;
}

void func_837(var uParam0)
{
	Global_40.f_12018.f_43 = (Global_40.f_12018.f_43 || uParam0);
}

bool func_838(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_839(int iParam0, int iParam1)
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

void func_840()
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

void func_841(int iParam0)
{
	func_848(iParam0, 8, 6);
}

void func_842(int iParam0)
{
	func_916(&(Global_1946804->f_2589), iParam0);
}

void func_843(int iParam0, int iParam1)
{
	func_917(&(Global_1946804->f_2589), iParam0, iParam1);
}

void func_844(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_845(var uParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 12;
	iVar2 = func_523(&(uParam0->f_1[iParam2 /*3*/]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_918(iParam2, 65536) && &uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
		(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
		if (bParam4)
		{
			func_843(iVar1, iVar3);
		}
	}
	if (func_736(-1586649372) && func_918(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
		(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
		if (bParam4)
		{
			func_843(iVar1, iVar3);
		}
	}
	switch (iVar2)
	{
		case 698653232:
			if (bParam1 == &Global_1946804->f_57[iParam2 /*11*/])
			{
				iVar1 = 12;
				if (&uParam0->f_1[iVar1 /*3*/] == 1516947474)
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_843(iVar1, iVar3);
					}
				}
			}
			func_919(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_919(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
			iVar1 = 22;
			if (&uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
			{
			}
			else
			{
				iVar0 = 16;
				if ((uParam0->f_1[iVar0 /*3*/])->f_1 == joaat("base") || (uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_843(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 525
				func_919(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1 /*3*/])->f_1 == joaat("base")
				{
					(uParam0->f_1[iVar1 /*3*/])->f_1 = -1539589426;
					if (bParam4)
					{
						func_843(iVar1, iVar3);
					}
				}
				if ((uParam0->f_1[iVar1 /*3*/])->f_1 == 1530758430)
				{
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 1334603721;
					if (bParam4)
					{
						func_843(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 656
				func_919(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1170; //curOff = 691
				func_919(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_843(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 786
				func_919(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_843(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_843(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_523(&(uParam0->f_1[iVar1 /*3*/])))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_843(iVar1, iVar3);
						}
					}
				}
				Jump @1170; //curOff = 1025
				iVar1 = 36;
				if (&uParam0->f_1[iParam2 /*3*/] != &Global_1946804->f_57[iParam2 /*11*/] && func_519(&(Global_1946804->f_1497.f_1[iVar1 /*3*/]), -1638171711))
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
			switch (func_523(bParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_523(&(uParam0->f_1[iVar1 /*3*/])))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_843(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_523(&(uParam0->f_1[iVar1 /*3*/])) || func_519(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_843(iVar1, iVar3);
						}
					}
					break;
			}
		}

int func_846(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_920(0);
	if (iParam2 != 0 && func_921(bParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_922(bParam0, func_839(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_847(var uParam0, bool bParam1, int iParam2)
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

	bVar6 = func_208() != -1;
	iVar7 = func_920(0);
	if (func_715(32768))
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
			bVar5 = func_839(iVar0, 1);
			if (func_923(bVar5, 8))
			{
			}
			else if (&(Global_1946804->f_57[iVar0 /*11*/])->f_2[0] == joaat("MISSING") || &uParam0->f_1[iVar0 /*3*/] == 0)
			{
			}
			else if (func_923(bVar5, 6) || &uParam0->f_1[iVar0 /*3*/] == &Global_1946804->f_57[iVar0 /*11*/])
			{
			}
			else
			{
				iVar4 = func_822(&(uParam0->f_1[iVar0 /*3*/]), bVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_924(uParam0);
				if (iVar3 > 0)
				{
					if (!func_715(524288))
					{
						func_850(524288);
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
							bVar5 = func_839(iVar0, 1);
							if (func_923(bVar5, 8))
							{
							}
							else if (&(Global_1946804->f_57[iVar0 /*11*/])->f_2[0] == joaat("MISSING") || &uParam0->f_1[iVar0 /*3*/] == 0)
							{
							}
							else if (func_923(bVar5, 6) || &uParam0->f_1[iVar0 /*3*/] == &Global_1946804->f_57[iVar0 /*11*/])
							{
							}
							else
							{
								iVar4 = func_822(&(uParam0->f_1[iVar0 /*3*/]), bVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
									(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
									if (bParam1)
									{
										func_843(iVar0, iParam2);
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
					func_853(524288);
				}
			}
		}
	}

void func_848(bool bParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_711(bParam0, 1) /*11*/])->f_10 = ((Global_1946804->f_57[func_711(bParam0, 1) /*11*/])->f_10 - ((Global_1946804->f_57[func_711(bParam0, 1) /*11*/])->f_10 && iParam1));
}

void func_849(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_925(&(uParam0->f_2[iVar0 /*2*/]), bParam1, bParam2);
		iVar0++;
	}
	if (func_208() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_926(2, Global_26795.f_776)) || Global_1946804->f_1497 != func_872(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = (&Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= 4096;
				Global_1946804->f_1497 = func_872(Global_40.f_7729);
				Global_1946804->f_1378 = func_872(Global_40.f_7729);
				Global_26795.f_776 = 0;
				func_927(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_928(0, 1);
	}
}

void func_850(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_851(struct<4> Param0)
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
			if (func_929(Param0))
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
			func_930(Param0);
			*(Global_1946804->f_668[Global_1946804->f_856 /*4*/]) = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_850(8);
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
			if (func_929(Param0))
			{
				return;
			}
			func_930(Param0);
			*(Global_1946804->f_567[Global_1946804->f_851 /*4*/]) = { Param0 };
			Global_1946804->f_851++;
			func_850(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_719(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

void func_852(var uParam0)
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

void func_853(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

bool func_854(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_855(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_929(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1 /*4*/] == Param0 && (Global_1946804->f_769[iVar1 /*4*/])->f_2 == Param0.f_2) && (Global_1946804->f_769[iVar1 /*4*/])->f_3 == Param0.f_3) && (Global_1946804->f_769[iVar1 /*4*/])->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1 /*4*/] == 34 && func_929(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_930(Param0);
	*(Global_1946804->f_769[Global_1946804->f_854 /*4*/]) = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_850(8);
}

int func_856()
{
	if (Global_1572887->f_12 != -1)
	{
		return 0;
	}
	return Global_1347477->f_203;
}

float func_857(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

float func_858()
{
	float fVar0;
	int iVar1;

	fVar0 = func_931(13);
	iVar1 = func_932(fVar0);
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

float func_859()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_860()
{
	if (func_672())
	{
		if (DLC::_0xA16B4FBA7887D7BA())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_861()
{
	if (Global_40.f_39 == joaat("player_three"))
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

float func_862()
{
	return Global_1955565->f_3;
}

void func_863(int iParam0, char* sParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = func_933(iParam0, 1, 0, 0);
	bVar0 = MISC::_CREATE_VAR_STRING(2, bVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[1]), bVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[1]), bParam2);
}

void func_864(int iParam0, float fParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = func_933(iParam0, 2, 0, 0);
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

float func_865(float fParam0, float fParam1, float fParam2)
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

bool func_866()
{
	return func_931(12) <= -99f;
}

bool func_867()
{
	return func_931(12) >= 99f;
}

int func_868()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		bVar1 = &Global_1946804->f_2657[iVar0];
		if (func_523(bVar1) == -999503751)
		{
			if (func_934() != bVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

int func_869(int iParam0)
{
	if (!func_731(iParam0))
	{
		return 0;
	}
	if (func_873(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

int func_870(int iParam0)
{
	if (!func_731(iParam0))
	{
		return 0;
	}
	if (func_873(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

void func_871(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_731(iParam0))
	{
		return;
	}
	if (!func_870(iParam0))
	{
		func_877(iParam0, 2);
		if (bParam2)
		{
			if (!func_875(0, 0, 1))
			{
				func_126(1, 4);
			}
		}
		if ((!func_874() && !bParam1) && !func_875(0, 0, 1))
		{
			func_876(MISC::_CREATE_VAR_STRING(10, "OUT_JOURN_ADD", func_935(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

int func_872(int iParam0)
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
			return 509954990 /* GXTEntry: "The Chevalier" */;
		case 30:
			return -445916744 /* GXTEntry: "The Heartlands" */;
		case 31:
			return -866249154 /* GXTEntry: "The Gambler" */;
		case 32:
			return -2077063704 /* GXTEntry: "The Earl" */;
		case 33:
			return 205207539 /* GXTEntry: "The McLaughlin" */;
		case 34:
			return -1033657275 /* GXTEntry: "The Josiah" */;
		case 35:
			return 1806002837 /* GXTEntry: "The Farrier" */;
		case 36:
			return 705324896 /* GXTEntry: "The Donegal" */;
		case 37:
			return -1541763703 /* GXTEntry: "The Bulldogger" */;
		case 38:
			return 387052410 /* GXTEntry: "The Ranch Hand" */;
		case 39:
			return -361288914 /* GXTEntry: "The Scrapper" */;
		case 40:
			return -911054515 /* GXTEntry: "The Armadillo" */;
		case 41:
			return 1084200963 /* GXTEntry: "The Valentine" */;
		case 42:
			return 1847948074 /* GXTEntry: "The Vaquero" */;
		case 43:
			return -1212526764 /* GXTEntry: "The Dewberry Creek" */;
		case 44:
			return 1851440270 /* GXTEntry: "The Clairmont" */;
		case 45:
			return -2028985700 /* GXTEntry: "The Roscoe" */;
		case 46:
			return 1074435214 /* GXTEntry: "The Estate Boss" */;
		case 47:
			return -883015675 /* GXTEntry: "The Drover" */;
		case 48:
			return -1047155604 /* GXTEntry: "The Calumet" */;
		case 49:
			return 1123231221 /* GXTEntry: "The Cowpuncher" */;
		case 50:
			return 1866989210 /* GXTEntry: "The Tumbleweed" */;
		case 51:
			return 478183719 /* GXTEntry: "The Drifter" */;
		case 52:
			return -1698955868 /* GXTEntry: "The Leatherman" */;
		case 53:
			return -2029378634 /* GXTEntry: "The Cumberland" */;
		case 54:
			return 1339864416 /* GXTEntry: "The Millesani" */;
		case 55:
			return 890998115 /* GXTEntry: "The Faulkton" */;
		case 56:
			return -1376288999 /* GXTEntry: "The Dolton" */;
		case 57:
			return -1041123771 /* GXTEntry: "The Corson" */;
		case 58:
			return 1389254668 /* GXTEntry: "The Saint Denis" */;
		case 59:
			return -346112633 /* GXTEntry: "The Deauville" */;
		case 60:
			return 773309172 /* GXTEntry: "The Bretagne" */;
		default:
			break;
	}
	return 0;
}

bool func_873(int iParam0, int iParam1)
{
	if (!func_731(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0 /*3*/] && iParam1) != 0;
}

bool func_874()
{
	int iVar0;

	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && _NAMESPACE71::_0x59FA676177DBE4C9(iVar0) == 4);
}

int func_875(int iParam0, bool bParam1, bool bParam2)
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
		if (func_936())
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
		iVar0 = func_937(&(Global_1898164->f_1[0 /*5*/]));
		if (func_643(iVar0) && func_938(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_111(&(Global_1898164->f_1[0 /*5*/])))
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

var func_876(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	uVar15 = _NAMESPACE71::_0x049D5C615BD38BAD(&Var0, &Var13, iParam5);
	return uVar15;
}

void func_877(int iParam0, int iParam1)
{
	if (!func_731(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0 /*3*/] = (Global_40.f_7157[iParam0 /*3*/] || iParam1);
}

int func_878(int iParam0, bool bParam1)
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

void func_879(bool bParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_939(bParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_522(50);
			}
			else
			{
				func_522(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_522(51);
			}
			else
			{
				func_522(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_940(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_554();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_554();
			}
			break;
		case 3:
			func_522(24);
			if (bParam1)
			{
				if (!func_940(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_554();
				}
			}
			break;
	}
}

void func_880(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_941(0))
			{
				iVar0++;
			}
			if (func_941(2))
			{
				iVar0++;
			}
			if (func_941(4))
			{
				iVar0++;
			}
			if (!func_942(16))
			{
				if (iVar0 == 1)
				{
					func_943();
					func_509(456, 1);
					func_944(16);
				}
			}
			if (!func_942(32))
			{
				if (iVar0 >= 3)
				{
					func_943();
					func_509(456, 1);
					func_944(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_941(1))
			{
				iVar0++;
			}
			if (func_941(3))
			{
				iVar0++;
			}
			if (func_941(7))
			{
				iVar0++;
			}
			if (!func_942(1))
			{
				if (iVar0 == 1)
				{
					func_945();
					func_509(457, 1);
					func_944(1);
				}
			}
			if (!func_942(2))
			{
				if (iVar0 >= 3)
				{
					func_945();
					func_509(457, 1);
					func_944(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_941(5))
			{
				iVar0++;
			}
			if (func_941(6))
			{
				iVar0++;
			}
			if (func_941(8))
			{
				iVar0++;
			}
			if (!func_942(4))
			{
				if (iVar0 == 1)
				{
					func_946();
					func_509(455, 1);
					func_944(4);
				}
			}
			if (!func_942(8))
			{
				if (iVar0 >= 3)
				{
					func_946();
					func_509(455, 1);
					func_944(8);
				}
			}
			break;
	}
}

void func_881(var uParam0)
{
	func_738(uParam0, 143479330);
	if (Global_1946804->f_1 == 2026485318)
	{
		func_738(uParam0, 617531372);
	}
	else
	{
		func_738(uParam0, 291123060);
	}
}

void func_882(var uParam0, int iParam1, struct<14> Param2)
{
	int iVar0;
	struct<21> Var1;

	if (!func_947(uParam0))
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

int func_883(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_884(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(-466562563, MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(1885309238, MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(-826961056, iParam2);
}

int func_885(int iParam0)
{
	if (!func_948(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

int func_886(int iParam0)
{
	if (!func_948(iParam0))
	{
		return 0;
	}
	return ((*Global_1895087)[iParam0 /*3*/])->f_1;
}

struct<4> func_887()
{
	struct<4> Var0;

	return Var0;
}

float func_888(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar4 = func_773(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = &Global_40.f_11095.f_11[iVar4];
			iVar5 = func_889(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_949(iVar6) - func_949(iVar5));
			fVar2 = (IntToFloat(iVar1) * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1f;
}

int func_889(float fParam0)
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

int func_890(int iParam0)
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

int func_891(int iParam0)
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

int func_892(float fParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_889(fParam0);
	fVar1 = BUILTIN::TO_FLOAT(func_949(iVar0));
	fVar2 = BUILTIN::TO_FLOAT(func_949(iVar0 + 1));
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

int func_893(int iParam0)
{
	int iVar0;

	if (func_950(iParam0, &iVar0))
	{
		return func_949(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_951())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_951())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_951())
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

int func_894(int iParam0)
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

void func_895(int iParam0, int iParam1, int iParam2)
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
	iVar3 = (iVar3 + func_952(iParam0));
	sVar4 = func_954(func_953(iVar3, iParam2));
	sVar6 = func_955(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = MISC::_CREATE_VAR_STRING(10, sVar0, func_956(iParam0));
	iVar8 = func_957(iParam0);
	iVar9 = MISC::GET_HASH_KEY(sVar4);
	if (bVar2)
	{
		Var10 = sVar7;
		Var10.f_1 = sVar1;
		Var10.f_3 = iVar9;
		Var10.f_2 = iVar8;
		Var10.f_4 = 1;
		Var10.f_5 = func_958(iParam0);
		UILOG::_UILOG_POST_NOTIFICATION(&Var10);
	}
	func_653(sVar7, sVar1, iVar8, iVar9, joaat("stats_menu"), "INPUT_FEED_INTERACT_GENERIC", func_959(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

void func_896(int iParam0, int iParam1)
{
	Global_1347477->f_9[iParam0 /*2*/] = (MISC::GET_GAME_TIMER() + iParam1);
}

bool func_897(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_898(int iParam0)
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

bool func_899(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

int func_900(bool bParam0)
{
	switch (bParam0)
	{
		case 444160793: /* GXTEntry: "Perfect Squirrel Carcass" */
			return 1;
		case -1969404854: /* GXTEntry: "Perfect Cardinal Carcass" */
			return 1;
		case 1761263432: /* GXTEntry: "Perfect Rat Carcass" */
			return 1;
		case -843795569: /* GXTEntry: "Perfect Woodpecker Carcass" */
			return 1;
		case -832850511: /* GXTEntry: "Perfect Chipmunk Carcass" */
			return 1;
		case -1464585113: /* GXTEntry: "Perfect Oriole Carcass" */
			return 1;
		case -1290897778: /* GXTEntry: "Perfect Robin Carcass" */
			return 1;
		case -100913452: /* GXTEntry: "Perfect Songbird Carcass" */
			return 1;
		case 313332607: /* GXTEntry: "Perfect Sparrow Carcass" */
			return 1;
		case -124539232: /* GXTEntry: "Perfect Toad Carcass" */
			return 1;
		case 59384454: /* GXTEntry: "Perfect Crow Carcass" */
			return 1;
		case 905173572: /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
			return 1;
		case 1432949803: /* GXTEntry: "Perfect Bat Carcass" */
			return 1;
		case -983831788: /* GXTEntry: "Perfect Blue Jay Carcass" */
			return 1;
		case -1882344824: /* GXTEntry: "Perfect Bullfrog Carcass" */
			return 1;
		default:
			break;
	}
	return 0;
}

int func_901(bool bParam0)
{
	switch (bParam0)
	{
		case -1866642239: /* GXTEntry: "Perfect Rabbit Carcass" */
			return 1;
		case -935543049: /* GXTEntry: "Perfect Opossum Carcass" */
			return 1;
		case 102446365: /* GXTEntry: "Perfect Skunk Carcass" */
			return 1;
		case 924882045: /* GXTEntry: "Perfect Beaver Carcass" */
			return 1;
		default:
			break;
	}
	return 0;
}

int func_902(bool bParam0)
{
	int iVar0;
	struct<11> Var1;
	int iVar95;

	Var1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_960(&iVar0, 0, iVar95, &Var1) && !func_960(&iVar0, 1, iVar95, &Var1))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(Var1))
		{
			func_961(iVar0, &Var1);
			if (func_498(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

void func_903()
{
	int iVar0;
	struct<4> Var30;

	if (!INVENTORY::_0x7C7E4AB748EA3B07())
	{
		return;
	}
	iVar0 = 29;
	func_962(Global_35, &iVar0);
	Var30 = { func_761(0) };
	INVENTORY::_0xE36D4A38D28D9CFB(0);
	INVENTORY::_0xC04F47D488EF9EBA(5, 1, &Var30, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	func_963(0);
	func_964(7);
	func_965(joaat("KIT_BANDANA"), 1, 1, 0);
	if (func_733() == 1160113249)
	{
		func_965(joaat("clothing_p3_player_three_ms1_hat_000_000"), 1, 1, 1);
		func_965(-361635024 /* GXTEntry: "The Cowboy" */, 1, 1, 1);
	}
	func_966(Global_35, &iVar0);
}

int func_904(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_622(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_905(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_906(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_907(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_908(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_909(int iParam0, int iParam1)
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

void func_910(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_967(iParam0, iParam6);
	func_968(iParam0, iParam5);
	func_969(iParam0, iParam4);
	func_970(iParam0, iParam3);
	func_971(iParam0, iParam2);
	func_972(iParam0, iParam1);
}

int func_911(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_710(iVar0);
}

int func_912(int iParam0, int iParam1)
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
		iParam1 = func_636(0);
	}
	if (!INVENTORY::_0x112BCA290D2EB53C(iParam1, iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	func_967(&uVar6, iVar0);
	func_968(&uVar6, iVar1);
	func_969(&uVar6, iVar2);
	func_970(&uVar6, iVar3);
	func_971(&uVar6, iVar4);
	func_972(&uVar6, iVar5);
	return uVar6;
}

bool func_913(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_973(iParam1) || !func_973(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_914(int iParam0)
{
	struct<2> Var0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_171(1356759001) };
	STATS::STAT_ID_SET_INT(&Var0, iParam0, true);
}

int func_915(int iParam0, int iParam1)
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
		case -2066272360:
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
		case -1861414976:
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
		case -1610966108:
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
		case -1455998786:
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
		case -1340339190:
			return 331;
		case -1329135070:
			return 140;
		case -1318987693:
			return 222;
		case -1311865656:
			return 37;
		case -1296807958:
			return 320;
		case -1283202000:
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
		case -911126844:
			return 336;
		case -897750037:
			return 334;
		case -895073533:
			return 356;
		case -879507474:
			return 236;
		case -868076593:
			return 84;
		case -857964358:
			return 83;
		case -853383233:
			return 65;
		case -851626677:
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
		case -781631220:
			return 345;
		case -764163380:
			return 228;
		case -748969569:
			return 78;
		case -741351766:
			return 60;
		case -736853952:
			return 366;
		case -734416508:
			return 340;
		case -699277634:
			return 4;
		case -693828600:
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
		case -524787708:
			return 352;
		case -524145696:
			return 117;
		case -523522517:
			return 364;
		case -515561750:
			return 238;
		case -503955743:
			return 249;
		case -502473159:
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
		case -355531636:
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
		case -108780030:
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
		case -61411516:
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
		case 74872959:
			return 348;
		case 93964309:
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
		case 229371495:
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
		case 509781469:
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
		case 582380806:
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
		case 784360470:
			return 330;
		case 791041526:
			return 18;
		case 817925178:
			return 240;
		case 868326136:
			return 285;
		case 885203519:
			return 379;
		case 885378256:
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
		case 1159471771:
			return 329;
		case 1160698568:
			return 135;
		case 1164928979:
			return 158;
		case 1166612791:
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
		case 1238086793:
			return 313;
		case 1250636944:
			return 259;
		case 1302228510:
			return 315;
		case 1306158345:
			return 202;
		case 1321892118:
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
		case 1549124796:
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
		case 1703398561:
			return 332;
		case 1703426636:
			return 43;
		case 1708045337:
			return 346;
		case 1713221411:
			return 137;
		case 1743048395:
			return 226;
		case 1744443559:
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
		case 1932172605:
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
		case 2113625508:
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

void func_916(var uParam0, int iParam1)
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
			if ((func_974(uParam0->f_2[iVar0 /*2*/], 2) || &uParam0->f_2[iVar0 /*2*/] == iParam1) || &uParam0->f_2[iVar0 /*2*/] == 39)
			{
				*(uParam0->f_2[iVar0 /*2*/]) = { Var2 };
			}
			else
			{
				if (func_974(uParam0->f_2[iVar0 /*2*/], 1))
				{
					func_975(uParam0->f_2[iVar0 /*2*/], 2, 6);
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

void func_917(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_976(uParam0, 1))
	{
		func_977(uParam0, 1);
	}
	(uParam0->f_2[*uParam0 /*2*/])->f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

bool func_918(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[iParam0 /*11*/])->f_9 && iParam1) != 0;
}

void func_919(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			(uParam0->f_1[iVar1 /*3*/])->f_1 = joaat("base");
		}
		if (bParam2)
		{
			func_843(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_843(iVar3, iVar0);
		}
	}
	if ((uParam0->f_1[iVar2 /*3*/])->f_1 == -1333118809 || (uParam0->f_1[iVar2 /*3*/])->f_1 == joaat("custom"))
	{
		(uParam0->f_1[iVar2 /*3*/])->f_1 = joaat("base");
		if (bParam3)
		{
			func_843(iVar2, iVar0);
		}
	}
}

int func_920(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_733();
	}
	iVar0 = 0;
	if (iParam0 == 24043185)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_921(bool bParam0, int iParam1, int iParam2, bool bParam3)
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

int func_922(bool bParam0, bool bParam1, int iParam2)
{
	*iParam2 = joaat("base");
	return 1;
}

bool func_923(bool bParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_711(bParam0, 1) /*11*/])->f_10 && iParam1) != 0;
}

int func_924(var uParam0)
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

void func_925(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*(Global_1946804->f_1497.f_1[iParam0 /*3*/]) = { *(Global_1946804->f_1378.f_1[iParam0 /*3*/]) };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_208() == -1)
	{
		func_978(Global_1946804->f_1497.f_1[iParam0 /*3*/], iParam0, Global_26795.f_776);
	}
	else
	{
		func_979(Global_1946804->f_1497.f_1[iParam0 /*3*/], iParam0, Global_36637.f_45.f_350.f_1011);
	}
}

int func_926(int iParam0, int iParam1)
{
	if (func_208() == -1)
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

void func_927(int iParam0, bool bParam1, int iParam2)
{
	func_980(&(Global_1946804->f_1378), iParam0);
	func_981(2, iParam0, 6);
	if (bParam1)
	{
		func_928(0, 1);
	}
}

void func_928(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_982(0);
	}
	if (bParam0)
	{
		func_850(8);
		func_850(512);
	}
	else
	{
		func_850(8);
		func_850(16);
	}
}

bool func_929(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_930(int iParam0)
{
	Global_1946804->f_529[iParam0] = (&Global_1946804->f_529[iParam0] + 1);
}

float func_931(int iParam0)
{
	return &(Global_40.f_11095.f_11[iParam0]);
}

int func_932(float fParam0)
{
	return BUILTIN::ROUND(((fParam0 / 100f) * BUILTIN::TO_FLOAT(10)));
}

char* func_933(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_746(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_746(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

int func_934()
{
	return Global_1946804->f_1497;
}

char* func_935(int iParam0)
{
	bool bVar0;

	bVar0 = func_872(iParam0);
	if (bVar0 == 0)
	{
		return "OUT_UNKNOWN";
	}
	return func_802(bVar0);
}

int func_936()
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

int func_937(int iParam0)
{
	if (!func_111(iParam0))
	{
		return -1;
	}
	return func_983(func_227(iParam0));
}

bool func_938(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_939(bool bParam0)
{
	int iVar0;

	if (func_984(bParam0))
	{
		iVar0 = 0;
	}
	else if (func_985(bParam0))
	{
		iVar0 = 1;
	}
	else if (func_986(bParam0))
	{
		iVar0 = 2;
	}
	else if (func_987(bParam0))
	{
		iVar0 = 3;
	}
	return iVar0;
}

int func_940(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_549(func_988(iVar0, iParam0), 1, 0))
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

int func_941(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_549(func_989(iVar0, iParam0), 1, 0))
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

bool func_942(int iParam0)
{
	return (Global_40.f_12003 && iParam0) != 0;
}

void func_943()
{
	int iVar0;

	if (func_208() != -1)
	{
		return;
	}
	func_573(1654063339, 1, 752097756);
	iVar0 = func_776(1);
	func_895(1, iVar0, 0);
}

void func_944(int iParam0)
{
	Global_40.f_12003 = (Global_40.f_12003 || iParam0);
}

void func_945()
{
	int iVar0;

	if (func_208() != -1)
	{
		return;
	}
	func_573(1623931083, 1, 752097756);
	iVar0 = func_776(2);
	func_895(2, iVar0, 0);
}

void func_946()
{
	int iVar0;

	if (func_208() != -1)
	{
		return;
	}
	func_573(-1845241476, 1, 752097756);
	iVar0 = func_776(0);
	func_895(0, iVar0, 0);
}

int func_947(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_948(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

int func_949(int iParam0)
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

int func_950(int iParam0, int iParam1)
{
	return 0;
}

int func_951()
{
	return 0;
}

int func_952(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return INVENTORY::_0xE787F05DFC977BDE(func_636(0), -1845241476, 0);
		case 1:
			return INVENTORY::_0xE787F05DFC977BDE(func_636(0), 1654063339, 0);
		case 2:
			return INVENTORY::_0xE787F05DFC977BDE(func_636(0), 1623931083, 0);
	}
	return 0;
}

struct<4> func_953(int iParam0, int iParam1)
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

char* func_954(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_955(int iParam0)
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

char* func_956(int iParam0)
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

int func_957(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("toast_rpg_level_stamina");
		case 0:
			return joaat("toast_rpg_level_health");
		case 2:
			return joaat("toast_rpg_level_deadeye");
		default:
			break;
	}
	return 0;
}

int func_958(int iParam0)
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

int func_959(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1896546861;
		case 1:
			return 304419444;
		case 2:
			return 1497019382;
		default:
			break;
	}
	return 0;
}

int func_960(int iParam0, int iParam1, int iParam2, var uParam3)
{
	bool bVar0;
	struct<4> Var1;
	int iVar5;

	if (func_990(iParam1) && !func_991(iParam1))
	{
		bVar0 = func_992(iParam1);
	}
	else
	{
		return 0;
	}
	func_993(uParam3);
	iVar5 = func_994(iParam2);
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
	uParam3->f_3 = ENTITY::_0x0FD25587BB306C86(*iParam0);
	return 1;
}

void func_961(int iParam0, int iParam1)
{
	bool bVar0;

	bVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		func_995(bVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_996(&(iParam1->f_1), bVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

void func_962(int iParam0, int* iParam1)
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
		if (func_618(bVar31))
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

void func_963(bool bParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = 17;
	while (iVar0 >= 0)
	{
		bVar1 = &Global_1946804->f_2657[iVar0];
		if (func_498(bVar1, 0))
		{
			func_997(bVar1, 0, bParam0);
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

void func_964(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	Global_1946804->f_2657.f_26.f_2 = 3;
	Global_1946804->f_2657.f_26.f_1 = 3;
	Global_1946804->f_2657.f_26 = 3;
	if (func_208() == -1)
	{
		func_998(352481484);
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
		if (func_523(bVar2) != -999503751)
		{
			func_999(&(Global_1946804->f_2657.f_26.f_26), bVar2, iVar0);
		}
		if (func_1000(bVar2, 0))
		{
			func_1001(bVar2, &Global_1946804->f_1497.f_1[iVar1 /*3*/] == &Global_1946804->f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_965(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;

	if (!func_1002(bParam0))
	{
		return;
	}
	iVar0 = func_523(bParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_1003(bParam0, &(Global_1946804->f_2657.f_21), Global_1946804->f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_1003(bParam0, &(Global_1946804->f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_1003(bParam0, &(Global_1946804->f_2657.f_20), Global_1946804->f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = func_1003(bParam0, &(Global_1946804->f_2657.f_22), Global_1946804->f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_1003(bParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_1003(bParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (bParam0 == func_1004(0))
	{
		func_1005(bParam0, 1);
		if (func_733() == 1160113249)
		{
			func_1005(func_1004(-2125499975), 0);
		}
		else
		{
			func_1005(func_1004(1160113249), 0);
		}
	}
	func_1006();
	if (func_1007(iVar0))
	{
		INVENTORY::_0x766315A564594401(func_636(0), bParam0, 0);
	}
	func_1001(bParam0, bParam3);
	if (bParam2)
	{
		func_928(0, 0);
	}
}

void func_966(int iParam0, int iParam1)
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
				if (func_661(iParam1[iVar0]))
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

void func_967(int iParam0, int iParam1)
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

void func_968(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_969(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_905(*iParam0);
	iVar1 = func_904(*iParam0);
	if (iParam1 < 1 || iParam1 > func_909(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_970(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_971(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_972(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

int func_973(int iParam0)
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
	iVar0 = func_908(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_907(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_131(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_904(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return 0;
	}
	iVar4 = func_905(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_906(iParam0);
	if (iVar5 < 1 || iVar5 > func_909(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

bool func_974(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_975(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_976(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_977(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_978(var uParam0, int iParam1, int iParam2)
{
	*((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/]) = { *uParam0 };
	((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 = (((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 - ((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 & 1);
}

void func_979(var uParam0, int iParam1, int iParam2)
{
	*((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/]) = { *uParam0 };
	((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 = (((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 - ((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 & 1);
}

void func_980(var uParam0, int iParam1)
{
	int iVar0;

	if (func_208() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		(Global_26795.f_26[iParam1 /*120*/])->f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_978(uParam0->f_1[iVar0 /*3*/], iVar0, iParam1);
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
		func_979(uParam0->f_1[iVar0 /*3*/], iVar0, iParam1);
		iVar0++;
	}
}

void func_981(int iParam0, int iParam1, int iParam2)
{
	if (func_208() == -1)
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

void func_982(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

int func_983(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

int func_984(bool bParam0)
{
	if (!func_498(bParam0, 0))
	{
		return 0;
	}
	if (func_519(bParam0, -1066545920))
	{
		return 1;
	}
	return 0;
}

int func_985(bool bParam0)
{
	if (!func_498(bParam0, 0))
	{
		return 0;
	}
	if (func_519(bParam0, -284267618))
	{
		return 1;
	}
	return 0;
}

int func_986(bool bParam0)
{
	if (!func_498(bParam0, 0))
	{
		return 0;
	}
	if (func_519(bParam0, 363491182))
	{
		return 1;
	}
	return 0;
}

int func_987(bool bParam0)
{
	if (!func_498(bParam0, 0))
	{
		return 0;
	}
	if (func_519(bParam0, 1406113494))
	{
		return 1;
	}
	return 0;
}

int func_988(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1008(iParam0);
		case 1:
			return func_1009(iParam0);
		case 2:
			return func_1010(iParam0);
		case 3:
			return func_1011(iParam0);
	}
	return 0;
}

int func_989(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1012(iParam0);
		case 1:
			return func_1013(iParam0);
		case 2:
			return func_1014(iParam0);
		case 3:
			return func_1015(iParam0);
		case 4:
			return func_1016(iParam0);
		case 5:
			return func_1017(iParam0);
		case 6:
			return func_1018(iParam0);
		case 7:
			return func_1019(iParam0);
		case 8:
			return func_1020(iParam0);
	}
	return 0;
}

int func_990(int iParam0)
{
	iParam0 = func_1021(iParam0);
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

int func_991(int iParam0)
{
	bool bVar0;

	iParam0 = func_1021(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_990(iParam0))
	{
		return 0;
	}
	bVar0 = func_992(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(bVar0) || PED::IS_PED_INJURED(bVar0))
	{
		return 1;
	}
	return 0;
}

int func_992(int iParam0)
{
	iParam0 = func_1021(iParam0);
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

void func_993(var uParam0)
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

int func_994(int iParam0)
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

void func_995(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam3 = PED::_0x88EFFED5FE8B0B4A(bParam0);
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
		*uParam4 = PED::_0x7BCC6087D130312A(bParam0);
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

bool func_996(bool bParam0, bool bParam1, int iParam2, int iParam3)
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

void func_997(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	switch (func_523(bParam0))
	{
		case -2061583405:
			bVar0 = func_1022(bParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_1022(bParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_1022(bParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_1022(bParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_1022(bParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_1022(bParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_1006();
	}
	if (bParam1)
	{
		func_928(0, 0);
	}
}

void func_998(int iParam0)
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
	Var2 = { func_770(0, -1591664384, -1591664384, -1591664384, 0, iParam0) };
	if (func_772(&Var2, &iVar0, &iVar1, 0))
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
		func_722(iVar0);
	}
}

void func_999(var uParam0, bool bParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_1023(iParam2, *uParam0);
	func_1024(uParam0->f_1[*uParam0 /*5*/], bParam1, -1, 1, 0);
	*uParam0++;
}

int func_1000(bool bParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_628(bParam0, 0, 0) };
	Var5 = { func_665(bParam0, Var0, Var0.f_4, 0) };
	if (func_769(bParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x9A113C660AEA3832(func_636(0), &Var5, iParam1);
	return 1;
}

void func_1001(bool bParam0, bool bParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_628(bParam0, 0, 0) };
	Var5 = { func_665(bParam0, Var0, Var0.f_4, 0) };
	if (func_769(bParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(func_636(0), &Var5, bParam1);
}

int func_1002(bool bParam0)
{
	if (func_208() == -1)
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

int func_1003(bool bParam0, var uParam1, int iParam2, bool bParam3)
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
	if (func_1025(bVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_1000(bParam0, 0))
	{
		return 0;
	}
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = bVar1;
	if (func_523(bParam0) != -999503751)
	{
		func_999(&(Global_1946804->f_2657.f_26.f_26), bParam0, Global_1946804->f_2657.f_19);
	}
	Global_1946804->f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_1004(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_733();
	}
	if (iParam0 == 1160113249)
	{
		return joaat("clothing_p3_player_three_ms1_hat_000_000");
	}
	return joaat("clothing_item_hat_pzero_000");
}

int func_1005(bool bParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_628(bParam0, 0, 0) };
	Var5 = { func_665(bParam0, Var0, Var0.f_4, 0) };
	if (func_769(bParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x0349404A22736740(iParam1, func_636(0), &Var5);
	return 1;
}

void func_1006()
{
	int iVar0;

	if (func_208() == -1)
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

bool func_1007(int iParam0)
{
	return func_1027(func_1026(iParam0));
}

int func_1008(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 227686058 /* GXTEntry: "Bandit Bandolier" */;
		case 1:
			return 1877538667 /* GXTEntry: "Explorer Bandolier" */;
		case 2:
			return -747118240 /* GXTEntry: "Gambler Bandolier" */;
		case 3:
			return 356885366 /* GXTEntry: "Herbalist Bandolier" */;
		case 4:
			return -733784435 /* GXTEntry: "Master Hunter Bandolier" */;
		case 5:
			return -2010021430 /* GXTEntry: "Horseman Bandolier" */;
		case 6:
			return -1563051210 /* GXTEntry: "Sharpshooter Bandolier" */;
		case 7:
			return 1532314048 /* GXTEntry: "Survivalist Bandolier" */;
		case 8:
			return -1378972544 /* GXTEntry: "Weapons Expert Bandolier" */;
		default:
			break;
	}
	return 0;
}

int func_1009(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -77597297 /* GXTEntry: "Bandit Gun Belt" */;
		case 1:
			return 1289620458 /* GXTEntry: "Explorer Gun Belt" */;
		case 2:
			return 351104126 /* GXTEntry: "Gambler Gun Belt" */;
		case 3:
			return -991258198 /* GXTEntry: "Herbalist Gun Belt" */;
		case 4:
			return -446539844 /* GXTEntry: "Master Hunter Gun Belt" */;
		case 5:
			return 2146082234 /* GXTEntry: "Horseman Gun Belt" */;
		case 6:
			return 330185476 /* GXTEntry: "Sharpshooter Gun Belt" */;
		case 7:
			return -1208917184 /* GXTEntry: "Survivalist Gun Belt" */;
		case 8:
			return -12904227 /* GXTEntry: "Weapons Expert Gun Belt" */;
		default:
			break;
	}
	return 0;
}

int func_1010(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 624387589 /* GXTEntry: "Bandit Holster" */;
		case 1:
			return 1398329674 /* GXTEntry: "Explorer Holster" */;
		case 2:
			return -35737408 /* GXTEntry: "Gambler Holster" */;
		case 3:
			return 651323163 /* GXTEntry: "Herbalist Holster" */;
		case 4:
			return 343794650 /* GXTEntry: "Master Hunter Holster" */;
		case 5:
			return 2072880089 /* GXTEntry: "Horseman Holster" */;
		case 6:
			return -2120749726 /* GXTEntry: "Sharpshooter Holster" */;
		case 7:
			return -1749072364 /* GXTEntry: "Survivalist Holster" */;
		case 8:
			return -583780175 /* GXTEntry: "Weapons Expert Holster" */;
		default:
			break;
	}
	return 0;
}

int func_1011(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1066104444 /* GXTEntry: "Bandit Off-Hand Holster" */;
		case 1:
			return -567070698 /* GXTEntry: "Explorer Off-Hand Holster" */;
		case 2:
			return 797308288 /* GXTEntry: "Gambler Off-Hand Holster" */;
		case 3:
			return -1669506545 /* GXTEntry: "Herbalist Off-Hand Holster" */;
		case 4:
			return -1011624341 /* GXTEntry: "Master Hunter Off-Hand Holster" */;
		case 5:
			return 516134254 /* GXTEntry: "Horseman Off-Hand Holster" */;
		case 6:
			return -940514956 /* GXTEntry: "Sharpshooter Off-Hand Holster" */;
		case 7:
			return 2030473481 /* GXTEntry: "Survivalist Off-Hand Holster" */;
		case 8:
			return 2084389834 /* GXTEntry: "Weapons Expert Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_1012(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 227686058 /* GXTEntry: "Bandit Bandolier" */;
		case 1:
			return -77597297 /* GXTEntry: "Bandit Gun Belt" */;
		case 2:
			return 624387589 /* GXTEntry: "Bandit Holster" */;
		case 3:
			return 1066104444 /* GXTEntry: "Bandit Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_1013(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1877538667 /* GXTEntry: "Explorer Bandolier" */;
		case 1:
			return 1289620458 /* GXTEntry: "Explorer Gun Belt" */;
		case 2:
			return 1398329674 /* GXTEntry: "Explorer Holster" */;
		case 3:
			return -567070698 /* GXTEntry: "Explorer Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_1014(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -747118240 /* GXTEntry: "Gambler Bandolier" */;
		case 1:
			return 351104126 /* GXTEntry: "Gambler Gun Belt" */;
		case 2:
			return -35737408 /* GXTEntry: "Gambler Holster" */;
		case 3:
			return 797308288 /* GXTEntry: "Gambler Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_1015(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 356885366 /* GXTEntry: "Herbalist Bandolier" */;
		case 1:
			return -991258198 /* GXTEntry: "Herbalist Gun Belt" */;
		case 2:
			return 651323163 /* GXTEntry: "Herbalist Holster" */;
		case 3:
			return -1669506545 /* GXTEntry: "Herbalist Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_1016(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -733784435 /* GXTEntry: "Master Hunter Bandolier" */;
		case 1:
			return -446539844 /* GXTEntry: "Master Hunter Gun Belt" */;
		case 2:
			return 343794650 /* GXTEntry: "Master Hunter Holster" */;
		case 3:
			return -1011624341 /* GXTEntry: "Master Hunter Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_1017(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -2010021430 /* GXTEntry: "Horseman Bandolier" */;
		case 1:
			return 2146082234 /* GXTEntry: "Horseman Gun Belt" */;
		case 2:
			return 2072880089 /* GXTEntry: "Horseman Holster" */;
		case 3:
			return 516134254 /* GXTEntry: "Horseman Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_1018(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1563051210 /* GXTEntry: "Sharpshooter Bandolier" */;
		case 1:
			return 330185476 /* GXTEntry: "Sharpshooter Gun Belt" */;
		case 2:
			return -2120749726 /* GXTEntry: "Sharpshooter Holster" */;
		case 3:
			return -940514956 /* GXTEntry: "Sharpshooter Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_1019(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1532314048 /* GXTEntry: "Survivalist Bandolier" */;
		case 1:
			return -1208917184 /* GXTEntry: "Survivalist Gun Belt" */;
		case 2:
			return -1749072364 /* GXTEntry: "Survivalist Holster" */;
		case 3:
			return 2030473481 /* GXTEntry: "Survivalist Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_1020(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1378972544 /* GXTEntry: "Weapons Expert Bandolier" */;
		case 1:
			return -12904227 /* GXTEntry: "Weapons Expert Gun Belt" */;
		case 2:
			return -583780175 /* GXTEntry: "Weapons Expert Holster" */;
		case 3:
			return 2084389834 /* GXTEntry: "Weapons Expert Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_1021(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_1022(bool bParam0, var uParam1)
{
	int iVar0;
	bool bVar1;

	bVar1 = bParam0;
	if (!func_1025(bVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_523(bParam0) != -999503751)
		{
			func_1028(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_523(bParam0) != -999503751)
	{
		func_1028(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_1000(bParam0, 1);
	return 1;
}

void func_1023(int iParam0, var uParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = uParam1;
}

void func_1024(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	if (PED::_0x93FFD92F05EC32FD(uParam0->f_3.f_1))
	{
		func_1029(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_711(func_819(bParam1), 1);
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
		func_1030(uParam0);
	}
}

int func_1025(bool bParam0, int iParam1)
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

int func_1026(int iParam0)
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

bool func_1027(var uParam0)
{
	return (Global_1946804->f_2657.f_26.f_6 && uParam0) != 0;
}

void func_1028(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = func_1031(iParam1);
	func_1032(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_1033(&(uParam0->f_26), iVar1);
		if (func_1034(uParam0->f_26, &iVar0))
		{
			func_1035(iVar0, iVar1);
		}
	}
}

void func_1029(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_1036(&(uParam0->f_3));
}

void func_1030(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	func_1037(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

int func_1031(int iParam0)
{
	return &(Global_1946804->f_2657.f_26.f_7[iParam0]);
}

void func_1032(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = &Global_1946804->f_2657.f_26.f_7[iParam0];
	Global_1946804->f_2657.f_26.f_7[iParam0] = &Global_1946804->f_2657.f_26.f_7[iParam1];
	Global_1946804->f_2657.f_26.f_7[iParam1] = uVar0;
}

void func_1033(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - 1);
	func_1029(uParam0->f_1[iParam1 /*5*/]);
	*(uParam0->f_1[iParam1 /*5*/]) = { *(uParam0->f_1[*uParam0 /*5*/]) };
}

int func_1034(int iParam0, int iParam1)
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

void func_1035(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = iParam1;
}

void func_1036(var uParam0)
{
	if (*uParam0 && PED::_0x93FFD92F05EC32FD(uParam0->f_1))
	{
		PED::_0x13E7320C762F0477(uParam0->f_1);
		uParam0->f_1 = -1;
	}
	*uParam0 = 0;
}

void func_1037(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_1038(func_733());
	if (*uParam0)
	{
		func_1036(uParam0);
	}
	uParam0->f_1 = PED::_0xF6D9E1F3560CBF8E(iVar0, iParam1, 0, func_208() != -1, iParam2);
	*uParam0 = 1;
}

int func_1038(int iParam0)
{
	if (func_208() == -1)
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
		case 2026485318:
			return 0;
		case 24043185:
			return 1;
		default:
			break;
	}
	return 0;
}

