// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DsgPrs_MidPointPresentation_HeaderFile
#define _DsgPrs_MidPointPresentation_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Handle_Prs3d_Presentation.hxx>
#include <Prs3d_Drawer.hxx>
#include <Standard_Boolean.hxx>
class Prs3d_Presentation;
class gp_Ax2;
class gp_Pnt;
class gp_Circ;
class gp_Elips;



class DsgPrs_MidPointPresentation 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! draws the representation of a MidPoint between
  //! two vertices.
  Standard_EXPORT static   void Add (const Handle(Prs3d_Presentation)& aPresentation, const Handle(Prs3d_Drawer)& aDrawer, const gp_Ax2& theAxe, const gp_Pnt& MidPoint, const gp_Pnt& Position, const gp_Pnt& AttachPoint, const Standard_Boolean first) ;
  
  //! draws the representation of a MidPoint between
  //! two lines or linear segments.
  Standard_EXPORT static   void Add (const Handle(Prs3d_Presentation)& aPresentation, const Handle(Prs3d_Drawer)& aDrawer, const gp_Ax2& theAxe, const gp_Pnt& MidPoint, const gp_Pnt& Position, const gp_Pnt& AttachPoint, const gp_Pnt& Point1, const gp_Pnt& Point2, const Standard_Boolean first) ;
  
  //! draws the representation of a MidPoint between
  //! two entire circles or two circular arcs.
  Standard_EXPORT static   void Add (const Handle(Prs3d_Presentation)& aPresentation, const Handle(Prs3d_Drawer)& aDrawer, const gp_Circ& aCircle, const gp_Pnt& MidPoint, const gp_Pnt& Position, const gp_Pnt& AttachPoint, const gp_Pnt& Point1, const gp_Pnt& Point2, const Standard_Boolean first) ;
  
  //! draws the representation of a MidPoint between
  //! two entire ellipses or two elliptic arcs.
  Standard_EXPORT static   void Add (const Handle(Prs3d_Presentation)& aPresentation, const Handle(Prs3d_Drawer)& aDrawer, const gp_Elips& anElips, const gp_Pnt& MidPoint, const gp_Pnt& Position, const gp_Pnt& AttachPoint, const gp_Pnt& Point1, const gp_Pnt& Point2, const Standard_Boolean first) ;




protected:





private:





};







#endif // _DsgPrs_MidPointPresentation_HeaderFile
