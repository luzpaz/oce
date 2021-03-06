// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeFix_Solid_HeaderFile
#define _ShapeFix_Solid_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_ShapeFix_Solid.hxx>

#include <TopoDS_Shape.hxx>
#include <Handle_ShapeFix_Shell.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
#include <ShapeFix_Root.hxx>
#include <Handle_Message_ProgressIndicator.hxx>
#include <ShapeExtend_Status.hxx>
#include <Handle_ShapeExtend_BasicMsgRegistrator.hxx>
#include <Standard_Real.hxx>
class ShapeFix_Shell;
class TopoDS_Solid;
class Message_ProgressIndicator;
class TopoDS_Shell;
class TopoDS_Shape;
class ShapeExtend_BasicMsgRegistrator;


//! Provides method to build a solid from a shells and
//! orients them in order to have a valid solid with finite volume
class ShapeFix_Solid : public ShapeFix_Root
{

public:

  
  //! Empty constructor;
  Standard_EXPORT ShapeFix_Solid();
  
  //! Initializes by solid.
  Standard_EXPORT ShapeFix_Solid(const TopoDS_Solid& solid);
  
  //! Initializes by solid .
  Standard_EXPORT virtual   void Init (const TopoDS_Solid& solid) ;
  
  //! Iterates on shells and performs fixes
  //! (calls ShapeFix_Shell for each subshell). The passed
  //! progress indicator allows user to consult the current
  //! progress stage and abort algorithm if needed.
  Standard_EXPORT virtual   Standard_Boolean Perform (const Handle(Message_ProgressIndicator)& theProgress = 0) ;
  
  //! Calls MakeSolid and orients the solid to be "not infinite"
  Standard_EXPORT   TopoDS_Solid SolidFromShell (const TopoDS_Shell& shell) ;
  
  //! Returns the status of the last Fix.
  Standard_EXPORT   Standard_Integer Status (const ShapeExtend_Status status)  const;
  
  //! Returns resulting solid.
  Standard_EXPORT   TopoDS_Shape Solid()  const;
  
  //! Returns tool for fixing shells.
      Handle(ShapeFix_Shell) FixShellTool()  const;
  
  //! Sets message registrator
  Standard_EXPORT virtual   void SetMsgRegistrator (const Handle(ShapeExtend_BasicMsgRegistrator)& msgreg) ;
  
  //! Sets basic precision value (also to FixShellTool)
  Standard_EXPORT virtual   void SetPrecision (const Standard_Real preci) ;
  
  //! Sets minimal allowed tolerance (also to FixShellTool)
  Standard_EXPORT virtual   void SetMinTolerance (const Standard_Real mintol) ;
  
  //! Sets maximal allowed tolerance (also to FixShellTool)
  Standard_EXPORT virtual   void SetMaxTolerance (const Standard_Real maxtol) ;
  
  //! Returns (modifiable) the mode for applying fixes of
  //! ShapeFix_Shell, by default True.
      Standard_Integer& FixShellMode() ;
  
  //! Returns (modifiable) the mode for creation of solids.
  //! If mode myCreateOpenSolidMode is equal to true
  //! solids are created from open shells
  //! else solids are created  from closed shells only.
  //! ShapeFix_Shell, by default False.
      Standard_Boolean& CreateOpenSolidMode() ;
  
  //! In case of multiconnexity returns compound of fixed solids
  //! else returns one solid.
  Standard_EXPORT   TopoDS_Shape Shape() ;




  DEFINE_STANDARD_RTTI(ShapeFix_Solid)

protected:


  TopoDS_Shape mySolid;
  Handle(ShapeFix_Shell) myFixShell;
  Standard_Integer myStatus;
  Standard_Integer myFixShellMode;


private: 


  Standard_Boolean myCreateOpenSolidMode;


};


#include <ShapeFix_Solid.lxx>





#endif // _ShapeFix_Solid_HeaderFile
