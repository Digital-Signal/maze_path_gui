/***************************************************************
 * Name:      MazePathApp.cpp
 * Purpose:   Code for Application Class
 * Author:     ()
 * Created:   2022-02-22
 * Copyright:  ()
 * License:
 **************************************************************/

#include "MazePathApp.h"

//(*AppHeaders
#include "MazePathMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(MazePathApp);

bool MazePathApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	MazePathFrame* Frame = new MazePathFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
