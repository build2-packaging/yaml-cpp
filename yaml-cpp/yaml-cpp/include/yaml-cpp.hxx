#pragma once

#include <iosfwd>
#include <string>

#include <export.hxx>

namespace yaml_cpp
{
  // Print a greeting for the specified name into the specified
  // stream. Throw std::invalid_argument if the name is empty.
  //
  YAML_CPP_SYMEXPORT void
  say_hello (std::ostream&, const std::string& name);
}
