#pragma once

namespace OdbDesign
{

struct ParserOptions
{
    bool altium_compat = true;

    bool optional_attr = true;
    bool optional_dcode = true;
    bool optional_orient = true;
    bool optional_mirror = true;

    bool case_insensitive_path = true;
    bool allow_missing_attr_table = true;
};

extern ParserOptions g_parser_options;

}
