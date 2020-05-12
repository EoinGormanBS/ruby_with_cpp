#include <ruby.h>
#include "Dog.h"

VALUE method_test(VALUE self, VALUE name) {
  std::string string_name = rb_string_value_cstr(&name);
  Dog* dog = new Dog(string_name);
  dog->speak();
  //dog.iWantAHumanName();

  std::string dogName = dog->getName();
  char cStyleDogName[dogName.length() + 1];
  strcpy(cStyleDogName, dogName.c_str());

  delete dog;

  return rb_str_new2(cStyleDogName);
}

//Code run by 'require' in ruby
extern "C" void Init_Gorlami(){  //Declares that this function can be used by a C client, hints to compiler for some dark magic stuff
  VALUE module = rb_define_module("Test");
  rb_define_method(module, "test", (VALUE(*)(ANYARGS))method_test, 1); //Nobody ask about (VALUE(*)(ANYARGS)) please...
}
