class InactivityEventFilter : public QObject
{
Q_OBJECT
protected:
  bool eventFilter(QObject *obj, QEvent *ev)
  {
    if(ev->type() == QEvent::KeyPress || 
       ev->type() == QEvent::MouseMove)
         // now reset your timer, for example
         resetInactivityTimer();

    return QObject::eventFilter(obj, ev);
  }
}
