//--------------------------------------------
//
//     Project:   Operating Room
//
//     Author:    Luis Ibanez
//
//     Division of Neurosugery
//     Department of Surgery
//     University of North Carolina
//     Chapel Hill, NC 27599
//
//--------------------------------------------


#include "fltkShape3D.h"
#include "liCommandGLRedrawModelFixed.h"
#include <FL/Fl.H>

namespace li {

//--------------------------------------------------
//
//    Constructor
//
//--------------------------------------------------
CommandGLRedrawModelFixed::CommandGLRedrawModelFixed(void)  
{
}


//--------------------------------------------------
//
//    Set Window
//
//--------------------------------------------------
void
CommandGLRedrawModelFixed::SetModelShape( fltk::Shape3D * model )  
{
  m_ModelShape  = model;
}




//--------------------------------------------------
//
//    Execute
//
//--------------------------------------------------
void
CommandGLRedrawModelFixed::Execute( itk::Object *, unsigned long )
{
  if( m_ModelShape )
  {
    m_ModelShape->SetAutoSensing( false );
    m_ModelShape->SetRestoreTransform( true );
    m_ModelShape->glDraw();
    m_ModelShape->SetRestoreTransform( false );
  }
}




//--------------------------------------------------
//
//    Execute
//
//--------------------------------------------------
void
CommandGLRedrawModelFixed::Execute(const itk::Object * , unsigned long )
{
  if( m_ModelShape )
  {
    m_ModelShape->SetAutoSensing( false );
    m_ModelShape->SetRestoreTransform( true );
    m_ModelShape->glDraw();
    m_ModelShape->SetRestoreTransform( false );
  }
}

 


} // end namespace li


