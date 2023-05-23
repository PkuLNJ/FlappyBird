#ifndef HELP_H
#define HELP_H

#include <QWidget>

namespace Ui {
class Help;
}

class Help : public QWidget
{
    Q_OBJECT

public:
    explicit Help(QWidget *parent = nullptr);
    ~Help();

signals:
    void show_main_page();

private slots:
    void Show_Help_Page();

    void on_backBtn_clicked();

private:
    Ui::Help *ui;
};

#endif // HELP_H
