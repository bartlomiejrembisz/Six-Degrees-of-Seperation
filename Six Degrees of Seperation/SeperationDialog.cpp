#include "SeperationDialog.h"
#include <thread>



SeperationDialog::SeperationDialog(QWidget *parent, std::vector<Actor*> *actorList)
{
	ui.setupUi(this);

	connect(ui.FirstActorButton, SIGNAL(clicked()), parent, SLOT(setFirstActor()));
	connect(ui.SecondActorButton, SIGNAL(clicked()), parent, SLOT(setSecondActor()));
	connect(ui.beginSearch, SIGNAL(clicked()), parent, SLOT(beginSearch()));

	//Using another thread to populate the list due to it's enormous size
	std::thread t1([this, actorList]() { populateList(actorList); });
	t1.detach();
}

//Populate the list of actors
void SeperationDialog::populateList(std::vector<Actor*> *actorList)
{
	for (int i = 0; i < actorList->size(); i++)
	{
		CustomActorListObject *actorItem = new CustomActorListObject;
		actorItem->setActor((*actorList)[i]);
		actorItem->setText(QString::fromStdString(actorItem->getActor()->getName()));
		ui.ActorsList->addItem(actorItem);
		customObjects.push_back(actorItem);
	}
}

void SeperationDialog::reject()
{
	delete this;
}

//Return selected actor from list
Actor* SeperationDialog::getSelectedActor()
{
	CustomActorListObject *tempObject = dynamic_cast<CustomActorListObject*>(ui.ActorsList->currentItem());
	return tempObject->getActor();
}

SeperationDialog::~SeperationDialog()
{
	for (auto object : customObjects)
		delete object;
}
