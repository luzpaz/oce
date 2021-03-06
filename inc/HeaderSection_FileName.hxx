// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HeaderSection_FileName_HeaderFile
#define _HeaderSection_FileName_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_HeaderSection_FileName.hxx>

#include <Handle_TCollection_HAsciiString.hxx>
#include <Handle_Interface_HArray1OfHAsciiString.hxx>
#include <MMgt_TShared.hxx>
#include <Standard_Integer.hxx>
class TCollection_HAsciiString;
class Interface_HArray1OfHAsciiString;



class HeaderSection_FileName : public MMgt_TShared
{

public:

  
  //! Returns a FileName
  Standard_EXPORT HeaderSection_FileName();
  
  Standard_EXPORT   void Init (const Handle(TCollection_HAsciiString)& aName, const Handle(TCollection_HAsciiString)& aTimeStamp, const Handle(Interface_HArray1OfHAsciiString)& aAuthor, const Handle(Interface_HArray1OfHAsciiString)& aOrganization, const Handle(TCollection_HAsciiString)& aPreprocessorVersion, const Handle(TCollection_HAsciiString)& aOriginatingSystem, const Handle(TCollection_HAsciiString)& aAuthorisation) ;
  
  Standard_EXPORT   void SetName (const Handle(TCollection_HAsciiString)& aName) ;
  
  Standard_EXPORT   Handle(TCollection_HAsciiString) Name()  const;
  
  Standard_EXPORT   void SetTimeStamp (const Handle(TCollection_HAsciiString)& aTimeStamp) ;
  
  Standard_EXPORT   Handle(TCollection_HAsciiString) TimeStamp()  const;
  
  Standard_EXPORT   void SetAuthor (const Handle(Interface_HArray1OfHAsciiString)& aAuthor) ;
  
  Standard_EXPORT   Handle(Interface_HArray1OfHAsciiString) Author()  const;
  
  Standard_EXPORT   Handle(TCollection_HAsciiString) AuthorValue (const Standard_Integer num)  const;
  
  Standard_EXPORT   Standard_Integer NbAuthor()  const;
  
  Standard_EXPORT   void SetOrganization (const Handle(Interface_HArray1OfHAsciiString)& aOrganization) ;
  
  Standard_EXPORT   Handle(Interface_HArray1OfHAsciiString) Organization()  const;
  
  Standard_EXPORT   Handle(TCollection_HAsciiString) OrganizationValue (const Standard_Integer num)  const;
  
  Standard_EXPORT   Standard_Integer NbOrganization()  const;
  
  Standard_EXPORT   void SetPreprocessorVersion (const Handle(TCollection_HAsciiString)& aPreprocessorVersion) ;
  
  Standard_EXPORT   Handle(TCollection_HAsciiString) PreprocessorVersion()  const;
  
  Standard_EXPORT   void SetOriginatingSystem (const Handle(TCollection_HAsciiString)& aOriginatingSystem) ;
  
  Standard_EXPORT   Handle(TCollection_HAsciiString) OriginatingSystem()  const;
  
  Standard_EXPORT   void SetAuthorisation (const Handle(TCollection_HAsciiString)& aAuthorisation) ;
  
  Standard_EXPORT   Handle(TCollection_HAsciiString) Authorisation()  const;




  DEFINE_STANDARD_RTTI(HeaderSection_FileName)

protected:




private: 


  Handle(TCollection_HAsciiString) name;
  Handle(TCollection_HAsciiString) timeStamp;
  Handle(Interface_HArray1OfHAsciiString) author;
  Handle(Interface_HArray1OfHAsciiString) organization;
  Handle(TCollection_HAsciiString) preprocessorVersion;
  Handle(TCollection_HAsciiString) originatingSystem;
  Handle(TCollection_HAsciiString) authorisation;


};







#endif // _HeaderSection_FileName_HeaderFile
