/*
 * RxLine.cpp
 *
 */

#include "RxLine.h"

namespace ModPowerSystems {

namespace PhasorSinglePhase {

namespace Lines {

RxLine::RxLine() {
  // TODO Auto-generated constructor stub

}

RxLine::RxLine(const RxLine &rhs):ModBaseClass(rhs) {

  this->_length = rhs._length;
  this->_r = rhs._r;
  this->_x = rhs._x;
  this->_r_displayUnit = rhs._r_displayUnit;
  this->_x_displayUnit = rhs._x_displayUnit;
}

RxLine& RxLine::operator=(const RxLine &rhs) {

  if(this == &rhs) return *this;
  ModBaseClass::operator=(rhs);
  this->_length = rhs._length;
  this->_r = rhs._r;
  this->_x = rhs._x;
  this->_r_displayUnit = rhs._r_displayUnit;
  this->_x_displayUnit = rhs._x_displayUnit;

  return *this;
}


RxLine::~RxLine() {
  // TODO Auto-generated destructor stub
}

bool RxLine::set_template_values(ctemplate::TemplateDictionary *dictionary) {

  dictionary->SetValue("NAME", this->name());
  dictionary->SetFormattedValue("LENGTH", "%.3f", this->length());
  dictionary->SetFormattedValue("R", "%.6f", this->r());
  dictionary->SetFormattedValue("X", "%.6f", this->x());

  this->set_template_annotation_values(dictionary);

  return true;
}

} /* namespace Lines */

} /* namespace PhasorSinglePhase */

} /* namespace ModPowerSystems */
