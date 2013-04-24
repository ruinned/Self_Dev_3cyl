#ifndef HAL_GPIO_H
#define HAL_GPIO_H

//=============================================================================
// include files
//=============================================================================
#include "reuse.h"

//=============================================================================
// HAL_GPIO_SET_FSE_Enable
//=============================================================================
 void HAL_GPIO_SET_FSE_Enable(bool in_enable);
//=============================================================================
//HAL_GPIO_GET_FSE_Status
//=============================================================================
  bool HAL_GPIO_GET_FSE_Status(void);
//=============================================================================
//HAL_GPIO_SET_GEN_Enable
//=============================================================================
  void HAL_GPIO_SET_GEN_Enable(bool in_enable);
//=============================================================================
// HAL_GPIO_GET_GEN_Status
//=============================================================================
    bool HAL_GPIO_GET_GEN_Status(void);
//=============================================================================
// HAL_GPIO_SET_ESTSYNC_Enable
//=============================================================================
  void HAL_GPIO_SET_ESTSYNC_Enable(bool in_enable);
//=============================================================================
//HAL_GPIO_SET_ESTSYNC_Enable
//=============================================================================
   bool HAL_GPIO_GET_ESTSYNC_Status(void);

//=============================================================================
//HAL_GPIO_SET_ETCDIS_Enable 
//=============================================================================
  void HAL_GPIO_SET_ETCDIS_Enable(bool in_enable);
//=============================================================================
//HAL_GPIO_GET_ETCDIS_Status
//=============================================================================
   bool HAL_GPIO_GET_ETCDIS_Status(void);

//=============================================================================
// HAL_GPIO_SET_ETCDIR_Enable
//=============================================================================
    void HAL_GPIO_SET_ETCDIR_Enable(bool in_enable);
//=============================================================================
// HAL_GPIO_GET_ETCDIR_Status
//=============================================================================
   bool HAL_GPIO_GET_ETCDIR_Status(void) ;
//=============================================================================
// HAL_GPIO_SET_VGIS1_Enable
//=============================================================================
    void HAL_GPIO_SET_VGIS1_Enable(bool in_enable);

//=============================================================================
// HAL_GPIO_GET_VGIS1_Status
//=============================================================================	
   bool HAL_GPIO_GET_VGIS1_Status(void);   
//=============================================================================
// HAL_GPIO_SET_VGIS2_Enable
//=============================================================================
    void HAL_GPIO_SET_VGIS2_Enable(bool in_enable);
//=============================================================================
//HAL_GPIO_GET_VGIS2_Status
//=============================================================================	
   bool HAL_GPIO_GET_VGIS2_Status(void);   
//=============================================================================
//HAL_GPIO_SET_MPR_Enable
//=============================================================================
    void HAL_GPIO_SET_MPR_Enable(bool in_enable);
//=============================================================================
// HAL_GPIO_GET_MPR_Status
//=============================================================================		
   bool HAL_GPIO_GET_MPR_Status(void);
//=============================================================================
//HAL_GPIO_SET_FPR_Enable
//=============================================================================
    void HAL_GPIO_SET_FPR_Enable(bool in_enable);
//=============================================================================
// HAL_GPIO_GET_FPR_Status
//=============================================================================			
   bool HAL_GPIO_GET_FPR_Status(void) ;   
//=============================================================================
// HAL_GPIO_SET_ACClutch_Enable
//=============================================================================
    void HAL_GPIO_SET_ACClutch_Enable(bool in_enable);
//=============================================================================
// HAL_GPIO_GET_ACClutch_Status
//=============================================================================			
   bool HAL_GPIO_GET_ACClutch_Status(void) ;   
//=============================================================================
//HAL_GPIO_SET_FAN2_Enable
//=============================================================================
 void HAL_GPIO_SET_FAN2_Enable(bool in_enable);
//=============================================================================
//HAL_GPIO_GET_FAN2_Status
//=============================================================================			
   bool HAL_GPIO_GET_FAN2_Status(void);   
//=============================================================================
// HAL_GPIO_SET_IMMOREQ_Enable
//=============================================================================
  void HAL_GPIO_SET_IMMOREQ_Enable(bool in_enable);
//=============================================================================
//HAL_GPIO_GET_IMMOREQ_Status
//=============================================================================			
   bool HAL_GPIO_GET_IMMOREQ_Status(void);
//=============================================================================
// HAL_GPIO_SET_MIL_Enable
//=============================================================================
   void HAL_GPIO_SET_MIL_Enable(bool in_enable);
//=============================================================================
// HAL_GPIO_GET_MIL_Status
//=============================================================================			
   bool HAL_GPIO_GET_MIL_Status(void);
//=============================================================================
//HAL_GPIO_SET_SVS_Enable
//=============================================================================
    void HAL_GPIO_SET_SVS_Enable(bool in_enable);
//=============================================================================
// HAL_GPIO_GET_SVS_Status
//=============================================================================			
   bool HAL_GPIO_GET_SVS_Status(void);
//=============================================================================
//HAL_GPIO_SET_FAN1_Enable
//=============================================================================
 void HAL_GPIO_SET_FAN1_Enable(bool in_enable);
 //=============================================================================
//HAL_GPIO_GET_FAN1_Status
//=============================================================================			
   bool HAL_GPIO_GET_FAN1_Status(void);
//=============================================================================
// HAL_GPIO_SET_SMR_Enable
//=============================================================================
 void HAL_GPIO_SET_SMR_Enable(bool in_enable);
//=============================================================================
//HAL_GPIO_GET_SMR_Status 
//=============================================================================		
   bool HAL_GPIO_GET_SMR_Status(void);
//=============================================================================
//HAL_GPIO_GET_ELOAD1_Status 
//=============================================================================		
   bool HAL_GPIO_GET_ELOAD1_Status(void);
//=============================================================================
//HAL_GPIO_GET_ELOAD2_Status 
//=============================================================================		
   bool HAL_GPIO_GET_ELOAD2_Status(void);
//=============================================================================
//HAL_GPIO_GET_BRKLMPDI_Status 
//=============================================================================		
   bool HAL_GPIO_GET_BRKLMPDI_Status(void);
//=============================================================================
//HAL_GPIO_GET_BRKSWDI_Status 
//=============================================================================		
   bool HAL_GPIO_GET_BRKSWDI_Status(void);
//=============================================================================
//HAL_GPIO_SET_TODO_Enable
//=============================================================================
 void HAL_GPIO_SET_TODO_Enable(bool in_enable);
  //=============================================================================
//HAL_GPIO_SET_ELOAD1DICTL_Enable
//=============================================================================
 void HAL_GPIO_SET_ELOAD1DICTL_Enable(bool in_enable);

 //=============================================================================
//HAL_GPIO_SET_BRKLMPDICTL_Enable
//=============================================================================
 void HAL_GPIO_SET_BRKLMPDICTL_Enable(bool in_enable);
 //=============================================================================
//HAL_GPIO_SET_BRKLMPDICTL_Enable
//=============================================================================
 void HAL_GPIO_SET_ELOAD2DICTL_Enable(bool in_enable) ;
   //=============================================================================
//HAL_GPIO_SET_Reset_DIO_Enable
//=============================================================================
 void HAL_GPIO_SET_Reset_DIO_Enable(bool in_enable);

//=============================================================================
//HAL_GPIO_GET_Reset_DIO_Status 
//=============================================================================		
   bool HAL_GPIO_GET_Reset_DIO_Status(void) ;  
   //=============================================================================
//HAL_GPIO_Reset_DIO_Output_Confige 
//=============================================================================		
   void HAL_GPIO_Reset_DIO_Output_Confige(bool enable) ;

//=============================================================================
//HAL_GPIO_DI_Active_Status_Init 
//=============================================================================		
   void HAL_GPIO_DI_Active_Status_Init(void) ;

//=============================================================================
//HAL_GPIO_GET_ACRequest_Status 
//=============================================================================		
   bool HAL_GPIO_GET_ACRequest_Status(void);

//=============================================================================
//HAL_GPIO_GET_PSPS_Status 
//=============================================================================		
   bool HAL_GPIO_GET_PSPS_Status(void);

//=============================================================================
//HAL_GPIO_GET_MIDAC_Status 
//=============================================================================		
   bool HAL_GPIO_GET_MIDAC_Status(void) ;

 

#endif
