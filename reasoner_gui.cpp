#include "reasoner_gui.h"

Reasoner_GUI::Reasoner_GUI()
{
	lab1 = new QLabel(tr("<h1>TonalityReasoner</h1>"), this);
	lab1->setAlignment(Qt::AlignCenter);

	layout1 = new QVBoxLayout(this);
	layout1->addWidget(lab1);
	this->setLayout(layout1);
}

Reasoner_GUI::~Reasoner_GUI()
{
	delete lab1;
	delete layout1;
}