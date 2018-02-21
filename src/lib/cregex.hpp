#ifndef CREGEX_HPP
#define CREGEX_HPP

#ifdef USE_POSIX_REGEX
#include "posix_regex.hpp"
#else
#include "pcre_regex.hpp"
#endif

namespace hi {


#ifdef USE_POSIX_REGEX
    typedef posix_regex cregex;
#else
    typedef pcre_regex cregex;
#endif


}


#endif /* CREGEX_HPP */

