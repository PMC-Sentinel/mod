class CfgGroups {
	class WEST {
		class PMCS_B {
			name = CSTRING(BLUFOR_DisplayName_D);

			class Infantry {
				name = CSTRING(GroupSet_Infantry);

				class pmcs_b_inf_sq {
					name = CSTRING(Group_I_Squad);
					GMETA;

					UNIT_0(SERGEANT,PMCS_B_SquadLeader);
					UNIT_1(CORPORAL,PMCS_B_Medic);
					UNIT_2(CORPORAL,PMCS_B_EOD);

					UNIT_3(SERGEANT,PMCS_B_TeamLeader);
					UNIT_4(CORPORAL,PMCS_B_Autorifleman);
					UNIT_5(CORPORAL,PMCS_B_MissileSpecialist);
				};

				class pmcs_b_inf_ft {
					name = CSTRING(Group_I_FireTeam);
					GMETA;

					UNIT_0(SERGEANT,PMCS_B_TeamLeader);
					UNIT_1(PRIVATE,PMCS_B_Rifleman);
					UNIT_2(CORPORAL,PMCS_B_Autorifleman);
				};

				class pmcs_b_inf_ft_at {
					name = CSTRING(Group_I_FireTeam_AT);
					GMETA;

					UNIT_0(SERGEANT,PMCS_B_TeamLeader);
					UNIT_1(CORPORAL,PMCS_B_Autorifleman);
					UNIT_2(CORPORAL,PMCS_B_MissileSpecialist);
				};

				class pmcs_b_inf_ft_cls {
					name = CSTRING(Group_I_FireTeam_CLS);
					GMETA;

					UNIT_0(SERGEANT,PMCS_B_TeamLeader);
					UNIT_1(PRIVATE,PMCS_B_Rifleman);
					UNIT_2(CORPORAL,PMCS_B_Medic);
				};

				class pmcs_b_inf_ft_eod {
					name = CSTRING(Group_I_FireTeam_EOD);
					GMETA;

					UNIT_0(SERGEANT,PMCS_B_TeamLeader);
					UNIT_1(PRIVATE,PMCS_B_Rifleman);
					UNIT_2(CORPORAL,PMCS_B_EOD);
				};
			};

			class Mechanized {
				name = CSTRING(GroupSet_Mechanized);

				class pmcs_b_mch_ptrl {
					name = CSTRING(Group_ME_Patrol);
					GMETA;

					UNIT_0(PRIVATE,PMCS_B_D_M113);

					#define pmcs_b_mch_ptrl_UNIT_1_POS {0,-7,0}
					UNIT_XX(1,pmcs_b_mch_ptrl_UNIT_1_POS,SERGEANT,PMCS_B_TeamLeader);

					#define pmcs_b_mch_ptrl_UNIT_2_POS {5,-12,0}
					UNIT_XX(2,pmcs_b_mch_ptrl_UNIT_2_POS,CORPORAL,PMCS_B_Autorifleman);

					#define pmcs_b_mch_ptrl_UNIT_4_POS {10,-17,0}
					UNIT_XX(4,pmcs_b_mch_ptrl_UNIT_4_POS,CORPORAL,PMCS_B_MissileSpecialist);
				};
			};

			class Motorized {
				name = CSTRING(GroupSet_Motorized);

				class pmcs_b_mot_ptrl {
					name = CSTRING(Group_MO_Patrol);
					GMETA;

					UNIT_0(PRIVATE,PMCS_B_D_M1165A1_GMV_M2_M240_SOCOM);

					#define pmcs_b_mot_ptrl_UNIT_1_POS {0,-7,0}
					UNIT_XX(1,pmcs_b_mot_ptrl_UNIT_1_POS,SERGEANT,PMCS_B_TeamLeader);

					#define pmcs_b_mot_ptrl_UNIT_2_POS {5,-12,0}
					UNIT_XX(2,pmcs_b_mot_ptrl_UNIT_2_POS,CORPORAL,PMCS_B_Autorifleman);

					#define pmcs_b_mot_ptrl_UNIT_3_POS {-5,-12,0}
					UNIT_XX(3,pmcs_b_mot_ptrl_UNIT_3_POS,CORPORAL,PMCS_B_EOD);
				};

				class pmcs_b_mot_ptrl_h {
					name = CSTRING(Group_MO_PatrolHeavy);
					GMETA;

					UNIT_0(PRIVATE,PMCS_B_D_M1232_MC_M2);

					#define pmcs_b_mot_ptrl_h_UNIT_1_POS {0,-7,0}
					UNIT_XX(1,pmcs_b_mot_ptrl_h_UNIT_1_POS,SERGEANT,PMCS_B_TeamLeader);

					#define pmcs_b_mot_ptrl_h_UNIT_2_POS {5,-12,0}
					UNIT_XX(2,pmcs_b_mot_ptrl_h_UNIT_2_POS,CORPORAL,PMCS_B_Autorifleman);

					#define pmcs_b_mot_ptrl_h_UNIT_3_POS {-5,-12,0}
					UNIT_XX(3,pmcs_b_mot_ptrl_h_UNIT_3_POS,CORPORAL,PMCS_B_MissileSpecialist);
				};

				class pmcs_b_mot_transport {
					name = CSTRING(Group_MO_Transport);
					GMETA;

					UNIT_0(SERGEANT,PMCS_B_SquadLeader);
					UNIT_1(CORPORAL,PMCS_B_Medic);
					UNIT_2(CORPORAL,PMCS_B_EOD);

					UNIT_3(SERGEANT,PMCS_B_TeamLeader);
					UNIT_4(CORPORAL,PMCS_B_Autorifleman);
					UNIT_5(CORPORAL,PMCS_B_MissileSpecialist);

					#define pmcs_b_mot_transport_UNIT_8_POS {0,-22,0}
					UNIT_XX(8,pmcs_b_mot_transport_UNIT_8_POS,PRIVATE,PMCS_B_D_M1083A1P2_M2_fmtv);
				};
			};

			class SpecOps {
				name = CSTRING(GroupSet_SpecOps);

				class pmcs_b_so_recon {
					name = CSTRING(Group_SP_ReconTeam);
					GMETA;

					UNIT_0(SERGEANT,PMCS_B_SquadLeader);
					UNIT_1(CORPORAL,PMCS_B_Marksman);
					UNIT_2(CORPORAL,PMCS_B_Marksman);
				};
			};

			class Support {
				name = CSTRING(GroupSet_Support);

				class pmcs_b_su_gp {
					name = CSTRING(Group_SU_GunnerPair);
					GMETA;

					UNIT_0(SERGEANT,PMCS_B_Autorifleman);
					UNIT_1(CORPORAL,PMCS_B_Autorifleman);
				};
			};
		};
	};
};