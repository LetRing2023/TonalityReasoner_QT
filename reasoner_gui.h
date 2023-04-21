#include <QWidget>
#include <QLabel>
#include <QVBoxLayout>

class Reasoner_GUI : public QWidget
{
public:
	Reasoner_GUI();
	~Reasoner_GUI();
private:
	QVBoxLayout* layout1;
	QLabel* lab1;
};