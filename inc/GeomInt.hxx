// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomInt_HeaderFile
#define _GeomInt_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Boolean.hxx>
#include <Standard_Real.hxx>
class GeomInt_IntSS;
class GeomInt_LineConstructor;
class GeomInt_LineTool;
class GeomInt_WLApprox;
class GeomInt_ParameterAndOrientation;
class GeomInt_SequenceOfParameterAndOrientation;
class GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox;
class GeomInt_TheInt2SOfThePrmPrmSvSurfacesOfWLApprox;
class GeomInt_ThePrmPrmSvSurfacesOfWLApprox;
class GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox;
class GeomInt_TheImpPrmSvSurfacesOfWLApprox;
class GeomInt_TheMultiLineOfWLApprox;
class GeomInt_TheMultiLineToolOfWLApprox;
class GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox;
class GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox;
class GeomInt_BSpGradient_BFGSOfMyBSplGradientOfTheComputeLineOfWLApprox;
class GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox;
class GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox;
class GeomInt_ResConstraintOfMyGradientbisOfTheComputeLineOfWLApprox;
class GeomInt_ParFunctionOfMyGradientbisOfTheComputeLineOfWLApprox;
class GeomInt_Gradient_BFGSOfMyGradientbisOfTheComputeLineOfWLApprox;
class GeomInt_MyGradientbisOfTheComputeLineOfWLApprox;
class GeomInt_TheComputeLineOfWLApprox;
class GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox;
class GeomInt_ResConstraintOfMyGradientOfTheComputeLineBezierOfWLApprox;
class GeomInt_ParFunctionOfMyGradientOfTheComputeLineBezierOfWLApprox;
class GeomInt_Gradient_BFGSOfMyGradientOfTheComputeLineBezierOfWLApprox;
class GeomInt_MyGradientOfTheComputeLineBezierOfWLApprox;
class GeomInt_TheComputeLineBezierOfWLApprox;
class GeomInt_SequenceNodeOfSequenceOfParameterAndOrientation;


//! Provides intersections on between two surfaces of Geom.
//! The result are curves from Geom.
class GeomInt 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Adjusts the parameter <thePar> to the range [theParMin,  theParMax]
  Standard_EXPORT static   Standard_Boolean AdjustPeriodic (const Standard_Real thePar, const Standard_Real theParMin, const Standard_Real theParMax, const Standard_Real thePeriod, Standard_Real& theNewPar, Standard_Real& theOffset, const Standard_Real theEps = 0.0) ;




protected:





private:




friend class GeomInt_IntSS;
friend class GeomInt_LineConstructor;
friend class GeomInt_LineTool;
friend class GeomInt_WLApprox;
friend class GeomInt_ParameterAndOrientation;
friend class GeomInt_SequenceOfParameterAndOrientation;
friend class GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox;
friend class GeomInt_TheInt2SOfThePrmPrmSvSurfacesOfWLApprox;
friend class GeomInt_ThePrmPrmSvSurfacesOfWLApprox;
friend class GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox;
friend class GeomInt_TheImpPrmSvSurfacesOfWLApprox;
friend class GeomInt_TheMultiLineOfWLApprox;
friend class GeomInt_TheMultiLineToolOfWLApprox;
friend class GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox;
friend class GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox;
friend class GeomInt_BSpGradient_BFGSOfMyBSplGradientOfTheComputeLineOfWLApprox;
friend class GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox;
friend class GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox;
friend class GeomInt_ResConstraintOfMyGradientbisOfTheComputeLineOfWLApprox;
friend class GeomInt_ParFunctionOfMyGradientbisOfTheComputeLineOfWLApprox;
friend class GeomInt_Gradient_BFGSOfMyGradientbisOfTheComputeLineOfWLApprox;
friend class GeomInt_MyGradientbisOfTheComputeLineOfWLApprox;
friend class GeomInt_TheComputeLineOfWLApprox;
friend class GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox;
friend class GeomInt_ResConstraintOfMyGradientOfTheComputeLineBezierOfWLApprox;
friend class GeomInt_ParFunctionOfMyGradientOfTheComputeLineBezierOfWLApprox;
friend class GeomInt_Gradient_BFGSOfMyGradientOfTheComputeLineBezierOfWLApprox;
friend class GeomInt_MyGradientOfTheComputeLineBezierOfWLApprox;
friend class GeomInt_TheComputeLineBezierOfWLApprox;
friend class GeomInt_SequenceNodeOfSequenceOfParameterAndOrientation;

};







#endif // _GeomInt_HeaderFile
