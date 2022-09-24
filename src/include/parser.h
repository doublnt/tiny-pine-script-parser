#ifndef __TINY_COMPILE_SRC_INCLUDE_PARSER__
#define __TINY_COMPILE_SRC_INCLUDE_PARSER__

#include "util.h"
#include <string>

namespace TINY_COMPILER {
class PARSER {
public:
  void lexical_analysis(const std::string &src);

  void syntax_analysis();

private:
  void split_expression_tree();
};
} // namespace TINY_COMPILER

#endif