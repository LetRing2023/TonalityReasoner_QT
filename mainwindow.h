#include <QMainWindow>
#include "reasoner_gui.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QString title);
    ~MainWindow();
private:
    Reasoner_GUI* lr_central;
};