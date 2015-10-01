// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// add_placement_score_to_db
void add_placement_score_to_db(std::string str_key, double value);
RcppExport SEXP l1ou_add_placement_score_to_db(SEXP str_keySEXP, SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type str_key(str_keySEXP);
    Rcpp::traits::input_parameter< double >::type value(valueSEXP);
    add_placement_score_to_db(str_key, value);
    return R_NilValue;
END_RCPP
}
// erase_placement_score_db
void erase_placement_score_db();
RcppExport SEXP l1ou_erase_placement_score_db() {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    erase_placement_score_db();
    return R_NilValue;
END_RCPP
}
// get_score_of_placement
Rcpp::List get_score_of_placement(std::string str_key);
RcppExport SEXP l1ou_get_score_of_placement(SEXP str_keySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type str_key(str_keySEXP);
    __result = Rcpp::wrap(get_score_of_placement(str_key));
    return __result;
END_RCPP
}
