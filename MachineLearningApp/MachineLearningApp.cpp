#include "MachineLearningApp.h"
#include "data2plot.h"
#include "ui_MachineLearningApp.h"
#include "QCoreApplication"
#include "QFileDialog"
#include "QTextEdit"
#include "QTextStream"
#include "QMessageBox"
#include "QComboBox"
#include <sstream>
#include <iostream>

MachineLearningApp::MachineLearningApp(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MachineLearningApp)
{

    ui->setupUi(this);
    setWindowTitle("Team Assignment: Machine Learning Application");
    this->connect(this->ui->browse_Button, SIGNAL(clicked()), this, SLOT(Browse_Click()));
    this->connect(this->ui->reset_Button, SIGNAL(clicked()), this, SLOT(ResetAll()));
    this->connect(this->ui->run_Button, SIGNAL(clicked()), this, SLOT(Run_Trainer()));


}

MachineLearningApp::~MachineLearningApp()
{
    delete ui;
}

// When browse is clicked, initiate the file browser and print selection to editable textspace...
void MachineLearningApp::Browse_Click(){this->ui->filepath_Edit->setText(MachineLearningApp::Browse_File());}

// Launch browser in /home diretory and return filename...
QString MachineLearningApp::Browse_File(){
    return QFileDialog::getOpenFileName(this,tr("Select file..."), "/home", tr("Text Files (*.txt)"));
}

// Read in file (parse out features, columns, etc.)
void MachineLearningApp::ProcFile(){

    QString filename = ui->filepath_Edit->toPlainText();
    QFile datafile(filename);

    if(!datafile.open(QIODevice::ReadOnly)){
        QMessageBox::information(0,"error", datafile.errorString());
    }

    QTextStream datastream(&datafile);

    Features_Menu(datastream.readLine());
    PlotData();
    //this->ui->datawindow_textBrowser->setText(firstline);

    datafile.close();
}

// Plotting function
void MachineLearningApp::PlotData(){

    int X_index = this->ui->X_comboBox->currentIndex();
    int Y_index = this->ui->X_comboBox->currentIndex();
    int Z_index = this->ui->X_comboBox->currentIndex();


    //this->ui->datawindow_textBrowser->setText(X_index);

}

// Reset ALL
void MachineLearningApp::ResetAll(){

    // Reset file path
    this->ui->filepath_Edit->QTextEdit::clear();

    // Reset combo boxes...
    this->ui->X_comboBox->clear();
    this->ui->Y_comboBox->clear();
    this->ui->Z_comboBox->clear();
}

void MachineLearningApp::Run_Trainer(){
    ProcFile();
}

void MachineLearningApp::Features_Menu(QString FeatureString){

    QTextStream stream;
    stream.setString(&FeatureString);
    QString temp;

    // Initialize combo boxes...
    this->ui->X_comboBox->clear();
    this->ui->Y_comboBox->clear();
    this->ui->Z_comboBox->clear();

    // Create a null selection option...
    this->ui->X_comboBox->addItem("---");
    this->ui->Y_comboBox->addItem("---");
    this->ui->Z_comboBox->addItem("---");

    // Pass features to comboBoxes
    QStringList Features_List = FeatureString.split(" ");
    this->ui->X_comboBox->addItems(Features_List);
    this->ui->Y_comboBox->addItems(Features_List);
    this->ui->Z_comboBox->addItems(Features_List);



}
