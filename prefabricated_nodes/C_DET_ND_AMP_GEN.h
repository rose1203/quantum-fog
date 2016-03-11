#pragma once#include "C_AMP_GEN.h"#include "DET_ND.h"class QB_NET;class C_PI_WIND;class C_HOST_VIEW;//AMP_GEN = amplitude generator//******************************************class  DET_ND_AMP_GEN_ENTRIES{public:	DET_ND_TYPE		its_nd_type;		BOOLEAN			its_cnot_pa1_is_control; //pa1 = first parent	BOOLEAN			its_cnot_1fires;		USHORT			its_marg_pos;//marg = marginalizer	USHORT			its_marg_len;		DOUBLE			its_pshifter_theta;	BOOLEAN			its_pshifter_do_multiples;		DET_ND_AMP_GEN_ENTRIES();	};//******************************************class  C_DET_ND_AMP_GEN: public C_AMP_GEN{private:		DET_ND_AMP_GEN_ENTRIES			its_entries;		C_HOST_VIEW  *					its_host_view_p;public:		C_DET_ND_AMP_GEN(DET_ND * nd_p, QB_NET * net_p, C_PI_WIND * pi_wind_p);	VOID		get_entries(DET_ND_AMP_GEN_ENTRIES & entries);//different from get_wind_entries()	VOID		set_entries(const DET_ND_AMP_GEN_ENTRIES & entries);			VOID  		reset_subpane(const DET_ND_AMP_GEN_ENTRIES &	entries);	BOOLEAN		parents_are_canonical(DET_ND_TYPE nd_type);	BOOLEAN		get_wind_entries(DET_ND_AMP_GEN_ENTRIES & entries);	VOID		fill_trans_mat_and_st_names_of_nd();	BOOLEAN		talk();	};#pragma mark -//******************************************inlineVOID		C_DET_ND_AMP_GEN::get_entries(DET_ND_AMP_GEN_ENTRIES & entries){	entries = its_entries;}//******************************************inlineVOID		C_DET_ND_AMP_GEN::set_entries(const DET_ND_AMP_GEN_ENTRIES & entries){	ThrowIf_(entries.its_nd_type!=its_entries.its_nd_type);	its_entries = entries;}