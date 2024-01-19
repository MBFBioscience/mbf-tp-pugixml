// from pugi author zeux @ https://stackoverflow.com/questions/14329075/using-pugixml-in-wchar-t-mode-and-in-usual-mode-in-one-project

#ifndef HEADER_PUGIXML_WCHAR_HPP
#define HEADER_PUGIXML_WCHAR_HPP

#define PUGIXML_WCHAR_MODE
#define pugi pugiwchar

#undef HEADER_PUGIXML_HPP
#undef HEADER_PUGICONFIG_HPP
#undef SOURCE_PUGIXML_CPP

#undef PUGIXML_TEXT
#undef PUGIXML_CHAR

#include "pugixml.hpp"

#undef PUGIXML_TEXT
#undef PUGIXML_CHAR

#undef HEADER_PUGIXML_HPP
#undef HEADER_PUGICONFIG_HPP
#undef SOURCE_PUGIXML_CPP

#undef pugi
#undef PUGIXML_WCHAR_MODE

#endif // HEADER_PUGIXML_WCHAR_HPP
