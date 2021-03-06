#include "win_panel.h"
#include "win_window.h"

WinPanel::WinPanel(WinWindow* panel)
    : MainPanel((QWidget*) panel),
      winPanel(panel)
{
    this->adjustSize();
}

// Button events
void WinPanel::pushButtonMinimize()
{
    winPanel->minimize();
}

void WinPanel::pushButtonMaximize()
{
    winPanel->maximize();
}

void WinPanel::pushButtonClose()
{
    winPanel->closeWindow();
}

