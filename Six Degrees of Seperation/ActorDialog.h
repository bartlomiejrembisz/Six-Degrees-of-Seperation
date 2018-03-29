#pragma once
#include "C:\Qt\5.8\msvc2015_64\include\QtWidgets\qdialog.h"
#include "ui_ActorDialog.h"
#include "ActorInfo.h"
#include "CustomActorListObject.h"

namespace Ui { class ActorDialog; }

class ActorDialog :
	public QDialog
{
public:
	ActorDialog(QWidget *parent, std::vector<Actor*> *actorList);
	~ActorDialog();

	Actor* getSelectedActor();

private:
	Ui::ActorDialogClass ui;

	std::vector<CustomActorListObject*> customObjects;

	void populateList(std::vector<Actor*> *actorList);
	void reject() override;
};

