// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// log_dmvn
double log_dmvn(arma::vec& x, arma::mat& Sigma);
RcppExport SEXP _mpsBART6_log_dmvn(SEXP xSEXP, SEXP SigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec& >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Sigma(SigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(log_dmvn(x, Sigma));
    return rcpp_result_gen;
END_RCPP
}
// sum_exclude_col
arma::mat sum_exclude_col(arma::mat mat, int exclude_int);
RcppExport SEXP _mpsBART6_sum_exclude_col(SEXP matSEXP, SEXP exclude_intSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type mat(matSEXP);
    Rcpp::traits::input_parameter< int >::type exclude_int(exclude_intSEXP);
    rcpp_result_gen = Rcpp::wrap(sum_exclude_col(mat, exclude_int));
    return rcpp_result_gen;
END_RCPP
}
// bspline
arma::mat bspline(arma::vec x, arma::vec x_obs);
RcppExport SEXP _mpsBART6_bspline(SEXP xSEXP, SEXP x_obsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type x_obs(x_obsSEXP);
    rcpp_result_gen = Rcpp::wrap(bspline(x, x_obs));
    return rcpp_result_gen;
END_RCPP
}
// sbart
Rcpp::List sbart(arma::mat x_train, arma::vec y_train, arma::mat x_test, arma::cube B_train, arma::cube B_test, arma::mat D, int n_tree, int n_mcmc, int n_burn, double tau, double mu, double tau_mu, double tau_b, double tau_b_intercept, double alpha, double beta, double a_tau, double d_tau, double nu, double delta, double a_delta, double d_delta, double a_tau_b, double d_tau_b, arma::vec p_sample, arma::vec p_sample_levels, bool intercept_model, bool stump);
RcppExport SEXP _mpsBART6_sbart(SEXP x_trainSEXP, SEXP y_trainSEXP, SEXP x_testSEXP, SEXP B_trainSEXP, SEXP B_testSEXP, SEXP DSEXP, SEXP n_treeSEXP, SEXP n_mcmcSEXP, SEXP n_burnSEXP, SEXP tauSEXP, SEXP muSEXP, SEXP tau_muSEXP, SEXP tau_bSEXP, SEXP tau_b_interceptSEXP, SEXP alphaSEXP, SEXP betaSEXP, SEXP a_tauSEXP, SEXP d_tauSEXP, SEXP nuSEXP, SEXP deltaSEXP, SEXP a_deltaSEXP, SEXP d_deltaSEXP, SEXP a_tau_bSEXP, SEXP d_tau_bSEXP, SEXP p_sampleSEXP, SEXP p_sample_levelsSEXP, SEXP intercept_modelSEXP, SEXP stumpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x_train(x_trainSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y_train(y_trainSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type x_test(x_testSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type B_train(B_trainSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type B_test(B_testSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type D(DSEXP);
    Rcpp::traits::input_parameter< int >::type n_tree(n_treeSEXP);
    Rcpp::traits::input_parameter< int >::type n_mcmc(n_mcmcSEXP);
    Rcpp::traits::input_parameter< int >::type n_burn(n_burnSEXP);
    Rcpp::traits::input_parameter< double >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< double >::type mu(muSEXP);
    Rcpp::traits::input_parameter< double >::type tau_mu(tau_muSEXP);
    Rcpp::traits::input_parameter< double >::type tau_b(tau_bSEXP);
    Rcpp::traits::input_parameter< double >::type tau_b_intercept(tau_b_interceptSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< double >::type a_tau(a_tauSEXP);
    Rcpp::traits::input_parameter< double >::type d_tau(d_tauSEXP);
    Rcpp::traits::input_parameter< double >::type nu(nuSEXP);
    Rcpp::traits::input_parameter< double >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< double >::type a_delta(a_deltaSEXP);
    Rcpp::traits::input_parameter< double >::type d_delta(d_deltaSEXP);
    Rcpp::traits::input_parameter< double >::type a_tau_b(a_tau_bSEXP);
    Rcpp::traits::input_parameter< double >::type d_tau_b(d_tau_bSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type p_sample(p_sampleSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type p_sample_levels(p_sample_levelsSEXP);
    Rcpp::traits::input_parameter< bool >::type intercept_model(intercept_modelSEXP);
    Rcpp::traits::input_parameter< bool >::type stump(stumpSEXP);
    rcpp_result_gen = Rcpp::wrap(sbart(x_train, y_train, x_test, B_train, B_test, D, n_tree, n_mcmc, n_burn, tau, mu, tau_mu, tau_b, tau_b_intercept, alpha, beta, a_tau, d_tau, nu, delta, a_delta, d_delta, a_tau_b, d_tau_b, p_sample, p_sample_levels, intercept_model, stump));
    return rcpp_result_gen;
END_RCPP
}
// mat_init
arma::mat mat_init(int n);
RcppExport SEXP _mpsBART6_mat_init(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(mat_init(n));
    return rcpp_result_gen;
END_RCPP
}
// vec_init
arma::vec vec_init(int n);
RcppExport SEXP _mpsBART6_vec_init(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(vec_init(n));
    return rcpp_result_gen;
END_RCPP
}
// std_inv
arma::mat std_inv(arma::mat A, arma::vec diag);
RcppExport SEXP _mpsBART6_std_inv(SEXP ASEXP, SEXP diagSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type A(ASEXP);
    Rcpp::traits::input_parameter< arma::vec >::type diag(diagSEXP);
    rcpp_result_gen = Rcpp::wrap(std_inv(A, diag));
    return rcpp_result_gen;
END_RCPP
}
// std_pinv
arma::mat std_pinv(arma::mat A, arma::vec diag);
RcppExport SEXP _mpsBART6_std_pinv(SEXP ASEXP, SEXP diagSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type A(ASEXP);
    Rcpp::traits::input_parameter< arma::vec >::type diag(diagSEXP);
    rcpp_result_gen = Rcpp::wrap(std_pinv(A, diag));
    return rcpp_result_gen;
END_RCPP
}
// faster_simple_std_inv
arma::mat faster_simple_std_inv(arma::mat A, arma::vec diag);
RcppExport SEXP _mpsBART6_faster_simple_std_inv(SEXP ASEXP, SEXP diagSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type A(ASEXP);
    Rcpp::traits::input_parameter< arma::vec >::type diag(diagSEXP);
    rcpp_result_gen = Rcpp::wrap(faster_simple_std_inv(A, diag));
    return rcpp_result_gen;
END_RCPP
}
// faster_std_inv
arma::mat faster_std_inv(arma::mat A, arma::vec diag);
RcppExport SEXP _mpsBART6_faster_std_inv(SEXP ASEXP, SEXP diagSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type A(ASEXP);
    Rcpp::traits::input_parameter< arma::vec >::type diag(diagSEXP);
    rcpp_result_gen = Rcpp::wrap(faster_std_inv(A, diag));
    return rcpp_result_gen;
END_RCPP
}
// rMVN2
arma::vec rMVN2(const arma::vec& b, const arma::mat& Q);
RcppExport SEXP _mpsBART6_rMVN2(SEXP bSEXP, SEXP QSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type b(bSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Q(QSEXP);
    rcpp_result_gen = Rcpp::wrap(rMVN2(b, Q));
    return rcpp_result_gen;
END_RCPP
}
// rMVNslow
arma::vec rMVNslow(const arma::vec& b, const arma::mat& Q);
RcppExport SEXP _mpsBART6_rMVNslow(SEXP bSEXP, SEXP QSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type b(bSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Q(QSEXP);
    rcpp_result_gen = Rcpp::wrap(rMVNslow(b, Q));
    return rcpp_result_gen;
END_RCPP
}
// matrix_mat
arma::mat matrix_mat(arma::cube array);
RcppExport SEXP _mpsBART6_matrix_mat(SEXP arraySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type array(arraySEXP);
    rcpp_result_gen = Rcpp::wrap(matrix_mat(array));
    return rcpp_result_gen;
END_RCPP
}
// rand_unif
double rand_unif();
RcppExport SEXP _mpsBART6_rand_unif() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rand_unif());
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_mpsBART6_log_dmvn", (DL_FUNC) &_mpsBART6_log_dmvn, 2},
    {"_mpsBART6_sum_exclude_col", (DL_FUNC) &_mpsBART6_sum_exclude_col, 2},
    {"_mpsBART6_bspline", (DL_FUNC) &_mpsBART6_bspline, 2},
    {"_mpsBART6_sbart", (DL_FUNC) &_mpsBART6_sbart, 28},
    {"_mpsBART6_mat_init", (DL_FUNC) &_mpsBART6_mat_init, 1},
    {"_mpsBART6_vec_init", (DL_FUNC) &_mpsBART6_vec_init, 1},
    {"_mpsBART6_std_inv", (DL_FUNC) &_mpsBART6_std_inv, 2},
    {"_mpsBART6_std_pinv", (DL_FUNC) &_mpsBART6_std_pinv, 2},
    {"_mpsBART6_faster_simple_std_inv", (DL_FUNC) &_mpsBART6_faster_simple_std_inv, 2},
    {"_mpsBART6_faster_std_inv", (DL_FUNC) &_mpsBART6_faster_std_inv, 2},
    {"_mpsBART6_rMVN2", (DL_FUNC) &_mpsBART6_rMVN2, 2},
    {"_mpsBART6_rMVNslow", (DL_FUNC) &_mpsBART6_rMVNslow, 2},
    {"_mpsBART6_matrix_mat", (DL_FUNC) &_mpsBART6_matrix_mat, 1},
    {"_mpsBART6_rand_unif", (DL_FUNC) &_mpsBART6_rand_unif, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_mpsBART6(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
