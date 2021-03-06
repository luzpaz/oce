// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_PersonAndOrganizationAssignment_HeaderFile
#define _StepBasic_PersonAndOrganizationAssignment_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepBasic_PersonAndOrganizationAssignment.hxx>

#include <Handle_StepBasic_PersonAndOrganization.hxx>
#include <Handle_StepBasic_PersonAndOrganizationRole.hxx>
#include <MMgt_TShared.hxx>
class StepBasic_PersonAndOrganization;
class StepBasic_PersonAndOrganizationRole;



class StepBasic_PersonAndOrganizationAssignment : public MMgt_TShared
{

public:

  
  Standard_EXPORT virtual   void Init (const Handle(StepBasic_PersonAndOrganization)& aAssignedPersonAndOrganization, const Handle(StepBasic_PersonAndOrganizationRole)& aRole) ;
  
  Standard_EXPORT   void SetAssignedPersonAndOrganization (const Handle(StepBasic_PersonAndOrganization)& aAssignedPersonAndOrganization) ;
  
  Standard_EXPORT   Handle(StepBasic_PersonAndOrganization) AssignedPersonAndOrganization()  const;
  
  Standard_EXPORT   void SetRole (const Handle(StepBasic_PersonAndOrganizationRole)& aRole) ;
  
  Standard_EXPORT   Handle(StepBasic_PersonAndOrganizationRole) Role()  const;




  DEFINE_STANDARD_RTTI(StepBasic_PersonAndOrganizationAssignment)

protected:




private: 


  Handle(StepBasic_PersonAndOrganization) assignedPersonAndOrganization;
  Handle(StepBasic_PersonAndOrganizationRole) role;


};







#endif // _StepBasic_PersonAndOrganizationAssignment_HeaderFile
