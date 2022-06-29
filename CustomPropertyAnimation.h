#ifndef CUSTOMPROPERTYANIMATION_H
#define CUSTOMPROPERTYANIMATION_H

#include <QPropertyAnimation>
#include <QDebug>
#include <QObject>

class CustomPropertyAnimation : public QPropertyAnimation
{
public:
    explicit CustomPropertyAnimation(QObject *target, const QByteArray &propertyName, QObject *parent = nullptr);
protected:
    bool event(QEvent *event) override;
};

#endif // CUSTOMPROPERTYANIMATION_H
