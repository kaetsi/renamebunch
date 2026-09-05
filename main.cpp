#include <wx/wx.h>

class RenameBunchFrame : public wxFrame
{
public:
    RenameBunchFrame() : wxFrame(nullptr, wxID_ANY, "renamebunch")
    {
        SetSize(600, 400);
    }
};

class RenameBunchApp : public wxApp
{
public:
    bool OnInit() override
    {
        RenameBunchFrame *frame = new RenameBunchFrame();
        frame->Show(true);
        return true;
    }
};

wxIMPLEMENT_APP(RenameBunchApp);