#include "hello.hpp"

#include <iostream>

Hello::Hello() : button_("Hello World") {
  button_.set_margin(10);

  button_.signal_clicked().connect(sigc::mem_fun(*this,
              &Hello::on_button_clicked));

  // This packs the button into the Window (a container).
  set_child(button_);
}

Hello::~Hello() {
}

void Hello::on_button_clicked()
{
  std::cout << "Hello World" << std::endl;
}

