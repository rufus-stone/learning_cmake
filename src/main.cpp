#include <spdlog/spdlog.h>

#include "blah.hpp"

#include <xmpl/xmpl.hpp>

int main()
{
  spdlog::info("Hello!");

  example::do_thing();

  int r = xmpl::rando();

  spdlog::info("r == {}", r);

  return EXIT_SUCCESS;
}
