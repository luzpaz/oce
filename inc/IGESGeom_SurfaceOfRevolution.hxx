// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESGeom_SurfaceOfRevolution_HeaderFile
#define _IGESGeom_SurfaceOfRevolution_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_IGESGeom_SurfaceOfRevolution.hxx>

#include <Handle_IGESGeom_Line.hxx>
#include <Handle_IGESData_IGESEntity.hxx>
#include <Standard_Real.hxx>
#include <IGESData_IGESEntity.hxx>
class IGESGeom_Line;
class IGESData_IGESEntity;


//! defines IGESSurfaceOfRevolution, Type <120> Form <0>
//! in package IGESGeom
//! A surface of revolution is defined by an axis of rotation
//! a generatrix, and start and terminate rotation angles. The
//! surface is created by rotating the generatrix about the axis
//! of rotation through the start and terminate rotation angles.
class IGESGeom_SurfaceOfRevolution : public IGESData_IGESEntity
{

public:

  
  Standard_EXPORT IGESGeom_SurfaceOfRevolution();
  
  //! This method is used to set the fields of the class Line
  //! - anAxis      : Axis of revolution
  //! - aGeneratrix : The curve which is revolved about the axis
  //! - aStartAngle : Start angle of the surface of revolution
  //! - anEndAngle  : End angle of the surface of revolution
  Standard_EXPORT   void Init (const Handle(IGESGeom_Line)& anAxis, const Handle(IGESData_IGESEntity)& aGeneratrix, const Standard_Real aStartAngle, const Standard_Real anEndAngle) ;
  
  //! returns the axis of revolution
  Standard_EXPORT   Handle(IGESGeom_Line) AxisOfRevolution()  const;
  
  //! returns the curve which is revolved about the axis
  Standard_EXPORT   Handle(IGESData_IGESEntity) Generatrix()  const;
  
  //! returns start angle of revolution
  Standard_EXPORT   Standard_Real StartAngle()  const;
  
  //! returns end angle of revolution
  Standard_EXPORT   Standard_Real EndAngle()  const;




  DEFINE_STANDARD_RTTI(IGESGeom_SurfaceOfRevolution)

protected:




private: 


  Handle(IGESGeom_Line) theLine;
  Handle(IGESData_IGESEntity) theGeneratrix;
  Standard_Real theStartAngle;
  Standard_Real theEndAngle;


};







#endif // _IGESGeom_SurfaceOfRevolution_HeaderFile
