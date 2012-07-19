#ifndef AMIGA_H
#define AMIGA_H

#include <QMainWindow>

namespace Ui {
class amiga;
}

class amiga : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit amiga(QWidget *parent = 0);
    ~amiga();
    
private:
    Ui::amiga *ui;
};

#endif // AMIGA_H
