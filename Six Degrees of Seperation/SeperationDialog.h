#pragma once
#include <QtWidgets/qdialog.h>
#include "ui_SeperationDialog.h"
#include "CustomActorListObject.h"

namespace Ui {class SeperationDialog;}

class SeperationDialog :
	public QDialog
{
public:
	SeperationDialog(QWidget *parent, std::vector<Actor*> *actorList);
	~SeperationDialog();

	void populateList(std::vector<Actor*>* actorList);
	void reject() override;

	Actor* getSelectedActor();


private:
	Ui::SeperationDialogClass ui;

	std::vector<CustomActorListObject*> customObjects;
};

