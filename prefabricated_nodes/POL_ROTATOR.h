#pragma once#include "QFog_constants.h"#ifdef   _mac_gui_app //''''''''''''''''''''''''''''''''''''''''''''\\.	#include "C_COLORS.h"	class QB_NET;	class C_PI_WIND;	class C_PHASOR_YZER_AMP_GEN;#endif //_mac_gui_app \\............................................//#include "NODE.h"//******************************************class POL_ROTATOR : public NODE{public:	POL_ROTATOR();	virtual 	~POL_ROTATOR();#ifdef   _mac_gui_app //''''''''''''''''''''''''''''''''''''''''''''\\.private:public:	POL_ROTATOR(const Point  &  m_down_pt);	STRINGY			get_class_str();	ND_CLASS_ID		get_class_id();		VOID  	draw();	VOID	call_amp_gen(QB_NET *  net_p, C_PI_WIND * pi_wind_p);				VOID	obey_amp_gen(const DOUBLE & theta, USHORT max_m_sum, const USHORT * mx_p, const USHORT * my_p);#endif //_mac_gui_app \\............................................//};#pragma mark -#ifdef   _mac_gui_app //''''''''''''''''''''''''''''''''''''''''''''\\.//******************************************inlineSTRINGY		POL_ROTATOR::get_class_str(){	return "POL_ROTATOR";}//******************************************inlineND_CLASS_ID		POL_ROTATOR::get_class_id(){	return POL_ROTATOR_id;}#endif //_mac_gui_app \\............................................//