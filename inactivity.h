
#include <QObject>

class InactivityEventFilter : public QObject
{
Q_OBJECT
protected:
  bool eventFilter(QObject *obj, QEvent *ev)
  {
    if(ev->type() == QEvent::KeyPress || 
       ev->type() == QEvent::MouseMove)
         resetInactivityTimer();

    return QObject::eventFilter(obj, ev);
  }
}

#ifndef ELAPSED_TIMER_H
#define ELAPSED_TIMER_H
#include <QTime>

class Elapsed_timer {
public:
  Elapsed_timer();
  void restart();
  int elapsed();

private:
  QTime start_time;
};

#endif
