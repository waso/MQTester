#include "testcaseform.h"
#include "ui_testcaseform.h"

TestCaseForm::TestCaseForm(QPersistentModelIndex *tci, QWidget *parent) :
    TabForm(parent), ui(new Ui::TestCaseForm)
{
    ui->setupUi(this);
	tcIndex = tci;
	tc = static_cast<TestCaseItem *>(tci->internalPointer());
	loadData();

	connect(ui->pageDetailsSelector, SIGNAL(currentIndexChanged(int)), this, SLOT(changePage(int)));
    connect(ui->messageIdSetType, SIGNAL(currentIndexChanged(int)), this, SLOT(messageIdSetTypeChanged(int)));
    connect(ui->correlationIdSetType, SIGNAL(currentIndexChanged(int)), this, SLOT(correlationIdSetTypeChanged(int)));
    connect(ui->acAdd, SIGNAL(clicked(bool)), this, SLOT(addAcItem()));
    connect(ui->acRemove, SIGNAL(clicked(bool)), this, SLOT(removeAcItem()));
    ui->stackedWidget->setCurrentIndex(0);
    ui->testStatus->setScene(new QGraphicsScene());
    ui->testStatus->setAutoFillBackground(true);

    changed = false;
}

TestCaseForm::~TestCaseForm()
{
    delete ui;
	delete tcIndex;
}

void TestCaseForm::changePage(int index)
{
	ui->stackedWidget->setCurrentIndex(index);
}

void TestCaseForm::loadData(void)
{
	ui->reqHostName->setText( tc->getInQueueDetails()->getHostName() );
	ui->reqPort->setText( tc->getInQueueDetails()->getPortNumber() );
	ui->reqQueueManager->setText( tc->getInQueueDetails()->getQueueManagerName() );
	ui->reqQueue->setText( tc->getInQueueDetails()->getQueueName() );
	ui->reqChannel->setText( tc->getInQueueDetails()->getChannelName() );
    ui->reqIpVersion->setCurrentIndex( ui->resIpVersion->findText(tc->getInQueueDetails()->getIpVersion() ));
    ui->reqTransportType->setCurrentIndex( ui->reqTransportType->findText( tc->getInQueueDetails()->getTransportType() ));
    ui->reqMessageFormat->setCurrentIndex( ui->reqMessageFormat->findText( tc->getInQueueDetails()->getMessageFormat() ));
    ui->reqUserId->insert( tc->getInQueueDetails()->getUserId() );
    ui->reqPassword->insert( tc->getInQueueDetails()->getPassword() );
    ui->messageIdSetType->setCurrentIndex( tc->getReqMsgIdSetType()  );
    ui->reqUserMessageId->setText( tc->getUserMsgId() );
    ui->correlationIdSetType->setCurrentIndex( tc->getReqCorrelIdSetType() );
    ui->reqUserCorrelationId->setText( tc->getUserCorrelId() );

	ui->resHostName->setText( tc->getOutQueueDetails()->getHostName() );
	ui->resPort->setText( tc->getOutQueueDetails()->getPortNumber() );
	ui->resQueueManager->setText( tc->getOutQueueDetails()->getQueueManagerName() );
	ui->resQueue->setText( tc->getOutQueueDetails()->getQueueName() );
	ui->resChannel->setText( tc->getOutQueueDetails()->getChannelName() );
    ui->resIpVersion->setCurrentIndex( ui->resIpVersion->findText( tc->getOutQueueDetails()->getIpVersion() ));
    ui->resTransportType->setCurrentIndex( ui->resTransportType->findText( tc->getOutQueueDetails()->getTransportType() ));
    ui->resMessageFormat->setCurrentIndex( ui->resMessageFormat->findText( tc->getOutQueueDetails()->getMessageFormat() ));
    ui->resUserId->insert( tc->getOutQueueDetails()->getUserId() );
    ui->resPassword->insert( tc->getOutQueueDetails()->getPassword() );
    ui->resSelectionMethod->setCurrentIndex( tc->getResponseSelectionMethod() );
    ui->responseTimeout->setValue(tc->getResponseTimeout());
	ui->acList->clear();
    ui->acList->addItems(tc->getACList());
	ui->reqMessage->setPlainText( tc->getRequest() );
	ui->resMessage->setPlainText( tc->getResponse() );

    if(ui->messageIdSetType->currentIndex() == MessageIdSetMethod::Automatically)
        ui->reqUserMessageId->setEnabled(false);
    else
        ui->reqUserMessageId->setEnabled(true);

    if(ui->correlationIdSetType->currentIndex() == MessageIdSetMethod::Automatically)
        ui->reqUserCorrelationId->setEnabled(false);
    else
        ui->reqUserCorrelationId->setEnabled(true);
}

void TestCaseForm::saveData(void)
{
	tc->getInQueueDetails()->setHostName( ui->reqHostName->text() );
	tc->getInQueueDetails()->setPortNumber( ui->reqPort->text() );
	tc->getInQueueDetails()->setQueueManagerName( ui->reqQueueManager->text() );
	tc->getInQueueDetails()->setQueueName( ui->reqQueue->text() );
	tc->getInQueueDetails()->setChannelName( ui->reqChannel->text() );
    tc->getInQueueDetails()->setIpVersion( ui->reqIpVersion->currentText() );
    tc->getInQueueDetails()->setTransportType( ui->reqTransportType->currentText() );
    tc->getInQueueDetails()->setMessageFormat( ui->reqMessageFormat->currentText() );
    tc->getInQueueDetails()->setUserId( ui->reqUserId->text() );
    tc->getInQueueDetails()->setPassword( ui->reqPassword->text() );

    tc->setReqMsgIdSetType( ui->messageIdSetType->currentIndex() );
    tc->setUserMsgId( ui->reqUserMessageId->text() );
    tc->setReqCorrelIdSetType( ui->correlationIdSetType->currentIndex() );
    tc->setUserCorrelId( ui->reqUserCorrelationId->text() );

	tc->getOutQueueDetails()->setHostName( ui->resHostName->text() );
	tc->getOutQueueDetails()->setPortNumber( ui->resPort->text() );
	tc->getOutQueueDetails()->setQueueManagerName( ui->resQueueManager->text() );
	tc->getOutQueueDetails()->setQueueName( ui->resQueue->text() );
	tc->getOutQueueDetails()->setChannelName( ui->resChannel->text() );
    tc->getOutQueueDetails()->setIpVersion( ui->resIpVersion->currentText() );
    tc->getOutQueueDetails()->setTransportType( ui->resTransportType->currentText() );
    tc->getOutQueueDetails()->setMessageFormat( ui->resMessageFormat->currentText() );
    tc->getOutQueueDetails()->setUserId( ui->resUserId->text() );
    tc->getOutQueueDetails()->setPassword( ui->resPassword->text() );
    tc->setResponseSelectionMethod( ui->resSelectionMethod->currentIndex() );
    tc->setResponseTimeout(ui->responseTimeout->value());

	tc->setRequest( ui->reqMessage->toPlainText() );
	tc->setResponse( ui->resMessage->toPlainText() );

    changed = false;
}

void TestCaseForm::updateResponseMessage()
{
	ui->resMessage->setPlainText(tc->getResponse());

    if(ui->messageIdSetType->currentIndex() == MessageIdSetMethod::Automatically)
        ui->reqUserMessageId->insert(tc->getRealRequestMsgId());

    if(ui->correlationIdSetType->currentIndex() == MessageIdSetMethod::Automatically)
        ui->reqUserCorrelationId->insert(tc->getRealRequestCorrelId());

    ui->resMessageId->setText(tc->getRealResponseMsgId());
    ui->resCorrelationId->del();
    ui->resCorrelationId->setText(tc->getRealResponseCorrelId());
    changed = true;
}

bool TestCaseForm::isChanged()
{
	//bool changed = false;
	if(tc->getInQueueDetails()->getHostName().compare(ui->reqHostName->text())) changed = true;
	if(tc->getInQueueDetails()->getPortNumber().compare(ui->reqPort->text())) changed = true;
	if(tc->getInQueueDetails()->getQueueManagerName().compare(ui->reqQueueManager->text())) changed = true;
	if(tc->getInQueueDetails()->getQueueName().compare(ui->reqQueue->text())) changed = true;
	if(tc->getInQueueDetails()->getChannelName().compare(ui->reqChannel->text())) changed = true;

    if(changed) return true;

	if(tc->getOutQueueDetails()->getHostName().compare(ui->resHostName->text())) changed = true;
	if(tc->getOutQueueDetails()->getPortNumber().compare(ui->resPort->text())) changed = true;
	if(tc->getOutQueueDetails()->getQueueManagerName().compare(ui->resQueueManager->text())) changed = true;
	if(tc->getOutQueueDetails()->getQueueName().compare(ui->resQueue->text())) changed = true;
	if(tc->getOutQueueDetails()->getChannelName().compare(ui->resChannel->text())) changed = true;

	if(tc->getRequest().compare(ui->reqMessage->toPlainText())) changed = true;

	return changed;
}

void TestCaseForm::messageIdSetTypeChanged(int index)
{
    if(index == MessageIdSetMethod::Automatically)
        ui->reqUserMessageId->setEnabled(false);
    else
        ui->reqUserMessageId->setEnabled(true);

    changed = true;
}

void TestCaseForm::correlationIdSetTypeChanged(int index)
{
    if(index == MessageIdSetMethod::Automatically)
        ui->reqUserCorrelationId->setEnabled(false);
    else
        ui->reqUserCorrelationId->setEnabled(true);

    changed = true;
}

void TestCaseForm::setTestStatus(bool status)
{
    if(status)
        ui->testStatus->setBackgroundBrush(QBrush(QColor::fromRgb(0,235,78)));
    else
        ui->testStatus->setBackgroundBrush(QBrush(QColor::fromRgb(255,0,51)));
}

void TestCaseForm::addAcItem()
{
    ACEditor ed = ACEditor(this);
    ed.exec();
    QString text = ed.getUserInput();
    if( ! text.isEmpty())
    {
        tc->addAcceptanceCriteria(text);
        ui->acList->clear();
        ui->acList->addItems(tc->getACList());
        changed = true;
    }
}

void TestCaseForm::removeAcItem()
{
    if(ui->acList->selectedItems().count() > 0)
    {
        QString itemToDelete = ui->acList->currentItem()->text();
        tc->removeAcceptanceCriteria(itemToDelete);
        ui->acList->clear();
        ui->acList->addItems(tc->getACList());
        changed = true;
    }
}

void TestCaseForm::updateRunHour()
{
    ui->lastRunHour->setText(QTime::currentTime().toString());
}