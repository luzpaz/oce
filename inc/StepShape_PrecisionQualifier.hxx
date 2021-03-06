// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepShape_PrecisionQualifier_HeaderFile
#define _StepShape_PrecisionQualifier_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepShape_PrecisionQualifier.hxx>

#include <Standard_Integer.hxx>
#include <MMgt_TShared.hxx>


//! Added for Dimensional Tolerances
class StepShape_PrecisionQualifier : public MMgt_TShared
{

public:

  
  Standard_EXPORT StepShape_PrecisionQualifier();
  
  Standard_EXPORT   void Init (const Standard_Integer precision_value) ;
  
  Standard_EXPORT   Standard_Integer PrecisionValue()  const;
  
  Standard_EXPORT   void SetPrecisionValue (const Standard_Integer precision_value) ;




  DEFINE_STANDARD_RTTI(StepShape_PrecisionQualifier)

protected:




private: 


  Standard_Integer thePrecisionValue;


};







#endif // _StepShape_PrecisionQualifier_HeaderFile
