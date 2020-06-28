#include <QApplication>

#include "qbmon.h"

int     main(int argc, char *argv[])

{
    QApplication app(argc, argv);
    
    qbmon *menu = new qbmon();
    
    //QT3 only app.setMainWidget( menu );
    menu->show();
    
    return app.exec();
}
