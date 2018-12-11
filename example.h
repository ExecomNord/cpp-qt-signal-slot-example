#ifndef EXAMPLE_H
#define EXAMPLE_H

#include <QObject>
#include <QDialog>
#include <QPushButton>
#include <QTextEdit>
#include <QTimer>

class Example : public QObject
{
    Q_OBJECT
public:
    explicit Example(QObject *parent = nullptr);

signals:
    void test(const QString &text);

public slots:
    void onButtonClicked(bool checked);
    void onTimeout();

    void onTest1(const QString &text);
    void onTest2(const QString &text);
    void onOpenInvite();

private:
    void setUp();
    void events();

    void addText(const QString &text);

    QString getTime();

    QDialog m_dialog;
    QPushButton *m_button;
    QTextEdit* m_textEdit;
    QTimer m_timer;
};

#endif // EXAMPLE_H
