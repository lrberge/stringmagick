// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// cpp_paste_conditional
SEXP cpp_paste_conditional(SEXP x, IntegerVector id, std::string sep, std::string sep_last);
RcppExport SEXP _stringmagic_cpp_paste_conditional(SEXP xSEXP, SEXP idSEXP, SEXP sepSEXP, SEXP sep_lastSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type id(idSEXP);
    Rcpp::traits::input_parameter< std::string >::type sep(sepSEXP);
    Rcpp::traits::input_parameter< std::string >::type sep_last(sep_lastSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_paste_conditional(x, id, sep, sep_last));
    return rcpp_result_gen;
END_RCPP
}
// cpp_normalize_ws
SEXP cpp_normalize_ws(SEXP Rstr);
RcppExport SEXP _stringmagic_cpp_normalize_ws(SEXP RstrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type Rstr(RstrSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_normalize_ws(Rstr));
    return rcpp_result_gen;
END_RCPP
}
// cpp_normalize_string
SEXP cpp_normalize_string(SEXP Rstr, bool clean_punct, bool clean_digit, bool clean_isolated);
RcppExport SEXP _stringmagic_cpp_normalize_string(SEXP RstrSEXP, SEXP clean_punctSEXP, SEXP clean_digitSEXP, SEXP clean_isolatedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type Rstr(RstrSEXP);
    Rcpp::traits::input_parameter< bool >::type clean_punct(clean_punctSEXP);
    Rcpp::traits::input_parameter< bool >::type clean_digit(clean_digitSEXP);
    Rcpp::traits::input_parameter< bool >::type clean_isolated(clean_isolatedSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_normalize_string(Rstr, clean_punct, clean_digit, clean_isolated));
    return rcpp_result_gen;
END_RCPP
}
// cpp_trimws_in_place
SEXP cpp_trimws_in_place(SEXP x);
RcppExport SEXP _stringmagic_cpp_trimws_in_place(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_trimws_in_place(x));
    return rcpp_result_gen;
END_RCPP
}
// cpp_which_empty
std::vector<int> cpp_which_empty(SEXP Rstr);
RcppExport SEXP _stringmagic_cpp_which_empty(SEXP RstrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type Rstr(RstrSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_which_empty(Rstr));
    return rcpp_result_gen;
END_RCPP
}
// cpp_find_first_index
std::vector<int> cpp_find_first_index(IntegerVector index, int nb, bool is_last);
RcppExport SEXP _stringmagic_cpp_find_first_index(SEXP indexSEXP, SEXP nbSEXP, SEXP is_lastSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type index(indexSEXP);
    Rcpp::traits::input_parameter< int >::type nb(nbSEXP);
    Rcpp::traits::input_parameter< bool >::type is_last(is_lastSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_find_first_index(index, nb, is_last));
    return rcpp_result_gen;
END_RCPP
}
// cpp_group_rev_index
IntegerVector cpp_group_rev_index(IntegerVector index);
RcppExport SEXP _stringmagic_cpp_group_rev_index(SEXP indexSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type index(indexSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_group_rev_index(index));
    return rcpp_result_gen;
END_RCPP
}
// cpp_recreate_index
IntegerVector cpp_recreate_index(IntegerVector id);
RcppExport SEXP _stringmagic_cpp_recreate_index(SEXP idSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type id(idSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_recreate_index(id));
    return rcpp_result_gen;
END_RCPP
}
// cpp_parse_regex_pattern
List cpp_parse_regex_pattern(SEXP Rstr, bool parse_flags, bool parse_logical);
RcppExport SEXP _stringmagic_cpp_parse_regex_pattern(SEXP RstrSEXP, SEXP parse_flagsSEXP, SEXP parse_logicalSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type Rstr(RstrSEXP);
    Rcpp::traits::input_parameter< bool >::type parse_flags(parse_flagsSEXP);
    Rcpp::traits::input_parameter< bool >::type parse_logical(parse_logicalSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_parse_regex_pattern(Rstr, parse_flags, parse_logical));
    return rcpp_result_gen;
END_RCPP
}
// cpp_smagic_parser
List cpp_smagic_parser(SEXP Rstr, SEXP Rdelimiters, bool only_last_parsed_section);
RcppExport SEXP _stringmagic_cpp_smagic_parser(SEXP RstrSEXP, SEXP RdelimitersSEXP, SEXP only_last_parsed_sectionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type Rstr(RstrSEXP);
    Rcpp::traits::input_parameter< SEXP >::type Rdelimiters(RdelimitersSEXP);
    Rcpp::traits::input_parameter< bool >::type only_last_parsed_section(only_last_parsed_sectionSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_smagic_parser(Rstr, Rdelimiters, only_last_parsed_section));
    return rcpp_result_gen;
END_RCPP
}
// cpp_extract_quote_from_op
SEXP cpp_extract_quote_from_op(SEXP Rstr);
RcppExport SEXP _stringmagic_cpp_extract_quote_from_op(SEXP RstrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type Rstr(RstrSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_extract_quote_from_op(Rstr));
    return rcpp_result_gen;
END_RCPP
}
// cpp_parse_operator
List cpp_parse_operator(SEXP Rstr);
RcppExport SEXP _stringmagic_cpp_parse_operator(SEXP RstrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type Rstr(RstrSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_parse_operator(Rstr));
    return rcpp_result_gen;
END_RCPP
}
// cpp_extract_pipe
List cpp_extract_pipe(SEXP Rstr, bool check_double);
RcppExport SEXP _stringmagic_cpp_extract_pipe(SEXP RstrSEXP, SEXP check_doubleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type Rstr(RstrSEXP);
    Rcpp::traits::input_parameter< bool >::type check_double(check_doubleSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_extract_pipe(Rstr, check_double));
    return rcpp_result_gen;
END_RCPP
}
// cpp_parse_simple_operations
SEXP cpp_parse_simple_operations(SEXP Rstr, SEXP Rdelimiters);
RcppExport SEXP _stringmagic_cpp_parse_simple_operations(SEXP RstrSEXP, SEXP RdelimitersSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type Rstr(RstrSEXP);
    Rcpp::traits::input_parameter< SEXP >::type Rdelimiters(RdelimitersSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_parse_simple_operations(Rstr, Rdelimiters));
    return rcpp_result_gen;
END_RCPP
}
// cpp_parse_slash
SEXP cpp_parse_slash(SEXP Rstr, SEXP Rdelimiters);
RcppExport SEXP _stringmagic_cpp_parse_slash(SEXP RstrSEXP, SEXP RdelimitersSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type Rstr(RstrSEXP);
    Rcpp::traits::input_parameter< SEXP >::type Rdelimiters(RdelimitersSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_parse_slash(Rstr, Rdelimiters));
    return rcpp_result_gen;
END_RCPP
}
// cpp_find_closing_problem
SEXP cpp_find_closing_problem(SEXP Rstr, SEXP Rdelimiters);
RcppExport SEXP _stringmagic_cpp_find_closing_problem(SEXP RstrSEXP, SEXP RdelimitersSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type Rstr(RstrSEXP);
    Rcpp::traits::input_parameter< SEXP >::type Rdelimiters(RdelimitersSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_find_closing_problem(Rstr, Rdelimiters));
    return rcpp_result_gen;
END_RCPP
}
// cpp_to_integer
IntegerVector cpp_to_integer(SEXP x);
RcppExport SEXP _stringmagic_cpp_to_integer(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_to_integer(x));
    return rcpp_result_gen;
END_RCPP
}
// cpp_combine_clusters
IntegerVector cpp_combine_clusters(SEXP cluster_list, IntegerVector index);
RcppExport SEXP _stringmagic_cpp_combine_clusters(SEXP cluster_listSEXP, SEXP indexSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type cluster_list(cluster_listSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type index(indexSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_combine_clusters(cluster_list, index));
    return rcpp_result_gen;
END_RCPP
}
// cpp_create_pos
IntegerVector cpp_create_pos(IntegerVector index);
RcppExport SEXP _stringmagic_cpp_create_pos(SEXP indexSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type index(indexSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_create_pos(index));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_stringmagic_cpp_paste_conditional", (DL_FUNC) &_stringmagic_cpp_paste_conditional, 4},
    {"_stringmagic_cpp_normalize_ws", (DL_FUNC) &_stringmagic_cpp_normalize_ws, 1},
    {"_stringmagic_cpp_normalize_string", (DL_FUNC) &_stringmagic_cpp_normalize_string, 4},
    {"_stringmagic_cpp_trimws_in_place", (DL_FUNC) &_stringmagic_cpp_trimws_in_place, 1},
    {"_stringmagic_cpp_which_empty", (DL_FUNC) &_stringmagic_cpp_which_empty, 1},
    {"_stringmagic_cpp_find_first_index", (DL_FUNC) &_stringmagic_cpp_find_first_index, 3},
    {"_stringmagic_cpp_group_rev_index", (DL_FUNC) &_stringmagic_cpp_group_rev_index, 1},
    {"_stringmagic_cpp_recreate_index", (DL_FUNC) &_stringmagic_cpp_recreate_index, 1},
    {"_stringmagic_cpp_parse_regex_pattern", (DL_FUNC) &_stringmagic_cpp_parse_regex_pattern, 3},
    {"_stringmagic_cpp_smagic_parser", (DL_FUNC) &_stringmagic_cpp_smagic_parser, 3},
    {"_stringmagic_cpp_extract_quote_from_op", (DL_FUNC) &_stringmagic_cpp_extract_quote_from_op, 1},
    {"_stringmagic_cpp_parse_operator", (DL_FUNC) &_stringmagic_cpp_parse_operator, 1},
    {"_stringmagic_cpp_extract_pipe", (DL_FUNC) &_stringmagic_cpp_extract_pipe, 2},
    {"_stringmagic_cpp_parse_simple_operations", (DL_FUNC) &_stringmagic_cpp_parse_simple_operations, 2},
    {"_stringmagic_cpp_parse_slash", (DL_FUNC) &_stringmagic_cpp_parse_slash, 2},
    {"_stringmagic_cpp_find_closing_problem", (DL_FUNC) &_stringmagic_cpp_find_closing_problem, 2},
    {"_stringmagic_cpp_to_integer", (DL_FUNC) &_stringmagic_cpp_to_integer, 1},
    {"_stringmagic_cpp_combine_clusters", (DL_FUNC) &_stringmagic_cpp_combine_clusters, 2},
    {"_stringmagic_cpp_create_pos", (DL_FUNC) &_stringmagic_cpp_create_pos, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_stringmagic(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
