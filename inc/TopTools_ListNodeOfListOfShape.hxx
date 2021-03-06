// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopTools_ListNodeOfListOfShape_HeaderFile
#define _TopTools_ListNodeOfListOfShape_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_TopTools_ListNodeOfListOfShape.hxx>

#include <TopoDS_Shape.hxx>
#include <TCollection_MapNode.hxx>
#include <TCollection_MapNodePtr.hxx>
class TopoDS_Shape;
class TopTools_ListOfShape;
class TopTools_ListIteratorOfListOfShape;



class TopTools_ListNodeOfListOfShape : public TCollection_MapNode
{

public:

  
    TopTools_ListNodeOfListOfShape(const TopoDS_Shape& I, const TCollection_MapNodePtr& n);
  
      TopoDS_Shape& Value()  const;




  DEFINE_STANDARD_RTTI(TopTools_ListNodeOfListOfShape)

protected:




private: 


  TopoDS_Shape myValue;


};

#define Item TopoDS_Shape
#define Item_hxx <TopoDS_Shape.hxx>
#define TCollection_ListNode TopTools_ListNodeOfListOfShape
#define TCollection_ListNode_hxx <TopTools_ListNodeOfListOfShape.hxx>
#define TCollection_ListIterator TopTools_ListIteratorOfListOfShape
#define TCollection_ListIterator_hxx <TopTools_ListIteratorOfListOfShape.hxx>
#define Handle_TCollection_ListNode Handle_TopTools_ListNodeOfListOfShape
#define TCollection_ListNode_Type_() TopTools_ListNodeOfListOfShape_Type_()
#define TCollection_List TopTools_ListOfShape
#define TCollection_List_hxx <TopTools_ListOfShape.hxx>

#include <TCollection_ListNode.lxx>

#undef Item
#undef Item_hxx
#undef TCollection_ListNode
#undef TCollection_ListNode_hxx
#undef TCollection_ListIterator
#undef TCollection_ListIterator_hxx
#undef Handle_TCollection_ListNode
#undef TCollection_ListNode_Type_
#undef TCollection_List
#undef TCollection_List_hxx




#endif // _TopTools_ListNodeOfListOfShape_HeaderFile
