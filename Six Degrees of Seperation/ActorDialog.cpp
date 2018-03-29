#include "ActorDialog.h"
#include <thread>


ActorDialog::ActorDialog(QWidget *parent, std::vector<Actor*> *actorList)
{
	//set up UI
	ui.setupUi(this);
	
	//initialize event handlers
	connect(ui.ViewActorButton, SIGNAL(clicked()), parent, SLOT(viewActor()));

	//Using another thread to populate the list due to it's enormous size
	std::thread t1([this, actorList]() { populateList(actorList); });
	t1.detach();
}

//Populate the actors list
void ActorDialog::populateList(std::vector<Actor*> *actorList)
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

void ActorDialog::reject()
{
	delete this;
}

ActorDialog::~ActorDialog()
{
	for (auto object : customObjects)
		delete object;
}

//Return the selected actor 
Actor* ActorDialog::getSelectedActor()
{
	CustomActorListObject *tempObject = dynamic_cast<CustomActorListObject*>(ui.ActorsList->currentItem());
	Actor* newActor = tempObject->getActor();
	return newActor;
}