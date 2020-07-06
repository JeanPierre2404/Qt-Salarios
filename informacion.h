#ifndef INFORMACION_H
#define INFORMACION_H

#include <QDialog>

namespace Ui {
class Informacion;
}

class Informacion : public QDialog
{
    Q_OBJECT

public:
    explicit Informacion(QWidget *parent = nullptr);
    ~Informacion();

private:
    Ui::Informacion *ui;
};

#endif // INFORMACION_H
