#ifndef HELLO_HPP
#define HELLO_HPP

#include <gtkmm/button.h>
#include <gtkmm/window.h>

class Hello : public Gtk::Window {
public:
  Hello();
  ~Hello() override;

protected:
  //Signal handlers:
  void on_button_clicked();

  //Member widgets:
  Gtk::Button button_;
};

#endif  // HELLO_HPP
