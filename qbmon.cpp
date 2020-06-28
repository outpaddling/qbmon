#include <QApplication>
#include <QPushButton>
#include <QVBoxLayout>
#include "qbmon.h"

qbmon::qbmon( QWidget *parent ) : QWidget(parent)

{
    QPushButton *backup = new QPushButton("Backup to Server", this),
		*update = new QPushButton("Install Updates", this),
		*quit = new QPushButton("Quit", this);
    
    connect(quit, SIGNAL(clicked()), qApp, SLOT(quit()));
    
    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(quit);
    setLayout(layout);
}

