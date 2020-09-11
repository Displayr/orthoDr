// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// gen_solver
List gen_solver(arma::mat B, Rcpp::Function f, Rcpp::Function g, Environment env, int useg, double rho, double eta, double gamma, double tau, double epsilon, double btol, double ftol, double gtol, int maxitr, int verbose);
RcppExport SEXP _orthoDrLite_gen_solver(SEXP BSEXP, SEXP fSEXP, SEXP gSEXP, SEXP envSEXP, SEXP usegSEXP, SEXP rhoSEXP, SEXP etaSEXP, SEXP gammaSEXP, SEXP tauSEXP, SEXP epsilonSEXP, SEXP btolSEXP, SEXP ftolSEXP, SEXP gtolSEXP, SEXP maxitrSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type B(BSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type f(fSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type g(gSEXP);
    Rcpp::traits::input_parameter< Environment >::type env(envSEXP);
    Rcpp::traits::input_parameter< int >::type useg(usegSEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< double >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< double >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< double >::type btol(btolSEXP);
    Rcpp::traits::input_parameter< double >::type ftol(ftolSEXP);
    Rcpp::traits::input_parameter< double >::type gtol(gtolSEXP);
    Rcpp::traits::input_parameter< int >::type maxitr(maxitrSEXP);
    Rcpp::traits::input_parameter< int >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(gen_solver(B, f, g, env, useg, rho, eta, gamma, tau, epsilon, btol, ftol, gtol, maxitr, verbose));
    return rcpp_result_gen;
END_RCPP
}
// pdose_direct_solver
List pdose_direct_solver(arma::mat B, const arma::mat X, const arma::colvec A, const arma::mat a_dist, const arma::colvec a_seq, const arma::colvec R, const arma::colvec lambda, double bw, double rho, double eta, double gamma, double tau, double epsilon, double btol, double ftol, double gtol, int maxitr, int verbose, int ncore);
RcppExport SEXP _orthoDrLite_pdose_direct_solver(SEXP BSEXP, SEXP XSEXP, SEXP ASEXP, SEXP a_distSEXP, SEXP a_seqSEXP, SEXP RSEXP, SEXP lambdaSEXP, SEXP bwSEXP, SEXP rhoSEXP, SEXP etaSEXP, SEXP gammaSEXP, SEXP tauSEXP, SEXP epsilonSEXP, SEXP btolSEXP, SEXP ftolSEXP, SEXP gtolSEXP, SEXP maxitrSEXP, SEXP verboseSEXP, SEXP ncoreSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type B(BSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::colvec >::type A(ASEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type a_dist(a_distSEXP);
    Rcpp::traits::input_parameter< const arma::colvec >::type a_seq(a_seqSEXP);
    Rcpp::traits::input_parameter< const arma::colvec >::type R(RSEXP);
    Rcpp::traits::input_parameter< const arma::colvec >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< double >::type bw(bwSEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< double >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< double >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< double >::type btol(btolSEXP);
    Rcpp::traits::input_parameter< double >::type ftol(ftolSEXP);
    Rcpp::traits::input_parameter< double >::type gtol(gtolSEXP);
    Rcpp::traits::input_parameter< int >::type maxitr(maxitrSEXP);
    Rcpp::traits::input_parameter< int >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< int >::type ncore(ncoreSEXP);
    rcpp_result_gen = Rcpp::wrap(pdose_direct_solver(B, X, A, a_dist, a_seq, R, lambda, bw, rho, eta, gamma, tau, epsilon, btol, ftol, gtol, maxitr, verbose, ncore));
    return rcpp_result_gen;
END_RCPP
}
// dosepred
arma::vec dosepred(arma::mat B, arma::mat X, arma::mat X_test, double bw, arma::colvec W);
RcppExport SEXP _orthoDrLite_dosepred(SEXP BSEXP, SEXP XSEXP, SEXP X_testSEXP, SEXP bwSEXP, SEXP WSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type B(BSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X_test(X_testSEXP);
    Rcpp::traits::input_parameter< double >::type bw(bwSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type W(WSEXP);
    rcpp_result_gen = Rcpp::wrap(dosepred(B, X, X_test, bw, W));
    return rcpp_result_gen;
END_RCPP
}
// pdose_semi_solver
List pdose_semi_solver(arma::mat& B, const arma::mat& X, const arma::colvec& R, const arma::colvec& A, const arma::mat a_dist, const arma::colvec a_seq, const arma::colvec lambda, const double bw, double rho, double eta, double gamma, double tau, double epsilon, double btol, double ftol, double gtol, int maxitr, int verbose, int ncore);
RcppExport SEXP _orthoDrLite_pdose_semi_solver(SEXP BSEXP, SEXP XSEXP, SEXP RSEXP, SEXP ASEXP, SEXP a_distSEXP, SEXP a_seqSEXP, SEXP lambdaSEXP, SEXP bwSEXP, SEXP rhoSEXP, SEXP etaSEXP, SEXP gammaSEXP, SEXP tauSEXP, SEXP epsilonSEXP, SEXP btolSEXP, SEXP ftolSEXP, SEXP gtolSEXP, SEXP maxitrSEXP, SEXP verboseSEXP, SEXP ncoreSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type B(BSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type R(RSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type a_dist(a_distSEXP);
    Rcpp::traits::input_parameter< const arma::colvec >::type a_seq(a_seqSEXP);
    Rcpp::traits::input_parameter< const arma::colvec >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< const double >::type bw(bwSEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< double >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< double >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< double >::type btol(btolSEXP);
    Rcpp::traits::input_parameter< double >::type ftol(ftolSEXP);
    Rcpp::traits::input_parameter< double >::type gtol(gtolSEXP);
    Rcpp::traits::input_parameter< int >::type maxitr(maxitrSEXP);
    Rcpp::traits::input_parameter< int >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< int >::type ncore(ncoreSEXP);
    rcpp_result_gen = Rcpp::wrap(pdose_semi_solver(B, X, R, A, a_dist, a_seq, lambda, bw, rho, eta, gamma, tau, epsilon, btol, ftol, gtol, maxitr, verbose, ncore));
    return rcpp_result_gen;
END_RCPP
}
// local_f
double local_f(const arma::mat& B, const arma::mat& X, const arma::mat& Y, double bw, int ncore);
RcppExport SEXP _orthoDrLite_local_f(SEXP BSEXP, SEXP XSEXP, SEXP YSEXP, SEXP bwSEXP, SEXP ncoreSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type B(BSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< double >::type bw(bwSEXP);
    Rcpp::traits::input_parameter< int >::type ncore(ncoreSEXP);
    rcpp_result_gen = Rcpp::wrap(local_f(B, X, Y, bw, ncore));
    return rcpp_result_gen;
END_RCPP
}
// local_solver
List local_solver(arma::mat B, arma::mat& X, arma::mat& Y, double bw, double rho, double eta, double gamma, double tau, double epsilon, double btol, double ftol, double gtol, int maxitr, int verbose, int ncore);
RcppExport SEXP _orthoDrLite_local_solver(SEXP BSEXP, SEXP XSEXP, SEXP YSEXP, SEXP bwSEXP, SEXP rhoSEXP, SEXP etaSEXP, SEXP gammaSEXP, SEXP tauSEXP, SEXP epsilonSEXP, SEXP btolSEXP, SEXP ftolSEXP, SEXP gtolSEXP, SEXP maxitrSEXP, SEXP verboseSEXP, SEXP ncoreSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type B(BSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< double >::type bw(bwSEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< double >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< double >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< double >::type btol(btolSEXP);
    Rcpp::traits::input_parameter< double >::type ftol(ftolSEXP);
    Rcpp::traits::input_parameter< double >::type gtol(gtolSEXP);
    Rcpp::traits::input_parameter< int >::type maxitr(maxitrSEXP);
    Rcpp::traits::input_parameter< int >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< int >::type ncore(ncoreSEXP);
    rcpp_result_gen = Rcpp::wrap(local_solver(B, X, Y, bw, rho, eta, gamma, tau, epsilon, btol, ftol, gtol, maxitr, verbose, ncore));
    return rcpp_result_gen;
END_RCPP
}
// phd_init
double phd_init(const arma::mat& B, const arma::mat& X, const arma::mat& Y, double bw, int ncore);
RcppExport SEXP _orthoDrLite_phd_init(SEXP BSEXP, SEXP XSEXP, SEXP YSEXP, SEXP bwSEXP, SEXP ncoreSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type B(BSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< double >::type bw(bwSEXP);
    Rcpp::traits::input_parameter< int >::type ncore(ncoreSEXP);
    rcpp_result_gen = Rcpp::wrap(phd_init(B, X, Y, bw, ncore));
    return rcpp_result_gen;
END_RCPP
}
// phd_solver
List phd_solver(arma::mat B, arma::mat& X, arma::mat& Y, double bw, double rho, double eta, double gamma, double tau, double epsilon, double btol, double ftol, double gtol, int maxitr, int verbose, int ncore);
RcppExport SEXP _orthoDrLite_phd_solver(SEXP BSEXP, SEXP XSEXP, SEXP YSEXP, SEXP bwSEXP, SEXP rhoSEXP, SEXP etaSEXP, SEXP gammaSEXP, SEXP tauSEXP, SEXP epsilonSEXP, SEXP btolSEXP, SEXP ftolSEXP, SEXP gtolSEXP, SEXP maxitrSEXP, SEXP verboseSEXP, SEXP ncoreSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type B(BSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< double >::type bw(bwSEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< double >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< double >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< double >::type btol(btolSEXP);
    Rcpp::traits::input_parameter< double >::type ftol(ftolSEXP);
    Rcpp::traits::input_parameter< double >::type gtol(gtolSEXP);
    Rcpp::traits::input_parameter< int >::type maxitr(maxitrSEXP);
    Rcpp::traits::input_parameter< int >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< int >::type ncore(ncoreSEXP);
    rcpp_result_gen = Rcpp::wrap(phd_solver(B, X, Y, bw, rho, eta, gamma, tau, epsilon, btol, ftol, gtol, maxitr, verbose, ncore));
    return rcpp_result_gen;
END_RCPP
}
// save_init
double save_init(const arma::mat& B, const arma::mat& X, const arma::mat& Y, double bw, int ncore);
RcppExport SEXP _orthoDrLite_save_init(SEXP BSEXP, SEXP XSEXP, SEXP YSEXP, SEXP bwSEXP, SEXP ncoreSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type B(BSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< double >::type bw(bwSEXP);
    Rcpp::traits::input_parameter< int >::type ncore(ncoreSEXP);
    rcpp_result_gen = Rcpp::wrap(save_init(B, X, Y, bw, ncore));
    return rcpp_result_gen;
END_RCPP
}
// save_solver
List save_solver(arma::mat B, arma::mat& X, arma::mat& Y, double bw, double rho, double eta, double gamma, double tau, double epsilon, double btol, double ftol, double gtol, int maxitr, int verbose, int ncore);
RcppExport SEXP _orthoDrLite_save_solver(SEXP BSEXP, SEXP XSEXP, SEXP YSEXP, SEXP bwSEXP, SEXP rhoSEXP, SEXP etaSEXP, SEXP gammaSEXP, SEXP tauSEXP, SEXP epsilonSEXP, SEXP btolSEXP, SEXP ftolSEXP, SEXP gtolSEXP, SEXP maxitrSEXP, SEXP verboseSEXP, SEXP ncoreSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type B(BSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< double >::type bw(bwSEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< double >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< double >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< double >::type btol(btolSEXP);
    Rcpp::traits::input_parameter< double >::type ftol(ftolSEXP);
    Rcpp::traits::input_parameter< double >::type gtol(gtolSEXP);
    Rcpp::traits::input_parameter< int >::type maxitr(maxitrSEXP);
    Rcpp::traits::input_parameter< int >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< int >::type ncore(ncoreSEXP);
    rcpp_result_gen = Rcpp::wrap(save_solver(B, X, Y, bw, rho, eta, gamma, tau, epsilon, btol, ftol, gtol, maxitr, verbose, ncore));
    return rcpp_result_gen;
END_RCPP
}
// seff_init
double seff_init(const arma::mat& B, const arma::mat& X, const arma::mat& Y, double bw, int ncore);
RcppExport SEXP _orthoDrLite_seff_init(SEXP BSEXP, SEXP XSEXP, SEXP YSEXP, SEXP bwSEXP, SEXP ncoreSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type B(BSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< double >::type bw(bwSEXP);
    Rcpp::traits::input_parameter< int >::type ncore(ncoreSEXP);
    rcpp_result_gen = Rcpp::wrap(seff_init(B, X, Y, bw, ncore));
    return rcpp_result_gen;
END_RCPP
}
// seff_solver
List seff_solver(arma::mat B, arma::mat& X, arma::mat& Y, double bw, double rho, double eta, double gamma, double tau, double epsilon, double btol, double ftol, double gtol, int maxitr, int verbose, int ncore);
RcppExport SEXP _orthoDrLite_seff_solver(SEXP BSEXP, SEXP XSEXP, SEXP YSEXP, SEXP bwSEXP, SEXP rhoSEXP, SEXP etaSEXP, SEXP gammaSEXP, SEXP tauSEXP, SEXP epsilonSEXP, SEXP btolSEXP, SEXP ftolSEXP, SEXP gtolSEXP, SEXP maxitrSEXP, SEXP verboseSEXP, SEXP ncoreSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type B(BSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< double >::type bw(bwSEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< double >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< double >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< double >::type btol(btolSEXP);
    Rcpp::traits::input_parameter< double >::type ftol(ftolSEXP);
    Rcpp::traits::input_parameter< double >::type gtol(gtolSEXP);
    Rcpp::traits::input_parameter< int >::type maxitr(maxitrSEXP);
    Rcpp::traits::input_parameter< int >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< int >::type ncore(ncoreSEXP);
    rcpp_result_gen = Rcpp::wrap(seff_solver(B, X, Y, bw, rho, eta, gamma, tau, epsilon, btol, ftol, gtol, maxitr, verbose, ncore));
    return rcpp_result_gen;
END_RCPP
}
// sir_init
double sir_init(const arma::mat& B, const arma::mat& X, const arma::mat& Y, double bw, int ncore);
RcppExport SEXP _orthoDrLite_sir_init(SEXP BSEXP, SEXP XSEXP, SEXP YSEXP, SEXP bwSEXP, SEXP ncoreSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type B(BSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< double >::type bw(bwSEXP);
    Rcpp::traits::input_parameter< int >::type ncore(ncoreSEXP);
    rcpp_result_gen = Rcpp::wrap(sir_init(B, X, Y, bw, ncore));
    return rcpp_result_gen;
END_RCPP
}
// sir_solver
List sir_solver(arma::mat B, arma::mat& X, arma::mat& Y, double bw, double rho, double eta, double gamma, double tau, double epsilon, double btol, double ftol, double gtol, int maxitr, int verbose, int ncore);
RcppExport SEXP _orthoDrLite_sir_solver(SEXP BSEXP, SEXP XSEXP, SEXP YSEXP, SEXP bwSEXP, SEXP rhoSEXP, SEXP etaSEXP, SEXP gammaSEXP, SEXP tauSEXP, SEXP epsilonSEXP, SEXP btolSEXP, SEXP ftolSEXP, SEXP gtolSEXP, SEXP maxitrSEXP, SEXP verboseSEXP, SEXP ncoreSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type B(BSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< double >::type bw(bwSEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< double >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< double >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< double >::type btol(btolSEXP);
    Rcpp::traits::input_parameter< double >::type ftol(ftolSEXP);
    Rcpp::traits::input_parameter< double >::type gtol(gtolSEXP);
    Rcpp::traits::input_parameter< int >::type maxitr(maxitrSEXP);
    Rcpp::traits::input_parameter< int >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< int >::type ncore(ncoreSEXP);
    rcpp_result_gen = Rcpp::wrap(sir_solver(B, X, Y, bw, rho, eta, gamma, tau, epsilon, btol, ftol, gtol, maxitr, verbose, ncore));
    return rcpp_result_gen;
END_RCPP
}
// surv_dm_solver
List surv_dm_solver(arma::mat B, const arma::mat& X, const arma::mat& Phit, const arma::vec& Fail_Ind, double bw, double rho, double eta, double gamma, double tau, double epsilon, double btol, double ftol, double gtol, int maxitr, int verbose, int ncore);
RcppExport SEXP _orthoDrLite_surv_dm_solver(SEXP BSEXP, SEXP XSEXP, SEXP PhitSEXP, SEXP Fail_IndSEXP, SEXP bwSEXP, SEXP rhoSEXP, SEXP etaSEXP, SEXP gammaSEXP, SEXP tauSEXP, SEXP epsilonSEXP, SEXP btolSEXP, SEXP ftolSEXP, SEXP gtolSEXP, SEXP maxitrSEXP, SEXP verboseSEXP, SEXP ncoreSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type B(BSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Phit(PhitSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Fail_Ind(Fail_IndSEXP);
    Rcpp::traits::input_parameter< double >::type bw(bwSEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< double >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< double >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< double >::type btol(btolSEXP);
    Rcpp::traits::input_parameter< double >::type ftol(ftolSEXP);
    Rcpp::traits::input_parameter< double >::type gtol(gtolSEXP);
    Rcpp::traits::input_parameter< int >::type maxitr(maxitrSEXP);
    Rcpp::traits::input_parameter< int >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< int >::type ncore(ncoreSEXP);
    rcpp_result_gen = Rcpp::wrap(surv_dm_solver(B, X, Phit, Fail_Ind, bw, rho, eta, gamma, tau, epsilon, btol, ftol, gtol, maxitr, verbose, ncore));
    return rcpp_result_gen;
END_RCPP
}
// surv_dn_solver
List surv_dn_solver(arma::mat B, const arma::mat& X, const arma::mat& Phit, const arma::vec& Fail_Ind, double bw, double rho, double eta, double gamma, double tau, double epsilon, double btol, double ftol, double gtol, int maxitr, int verbose, int ncore);
RcppExport SEXP _orthoDrLite_surv_dn_solver(SEXP BSEXP, SEXP XSEXP, SEXP PhitSEXP, SEXP Fail_IndSEXP, SEXP bwSEXP, SEXP rhoSEXP, SEXP etaSEXP, SEXP gammaSEXP, SEXP tauSEXP, SEXP epsilonSEXP, SEXP btolSEXP, SEXP ftolSEXP, SEXP gtolSEXP, SEXP maxitrSEXP, SEXP verboseSEXP, SEXP ncoreSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type B(BSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Phit(PhitSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Fail_Ind(Fail_IndSEXP);
    Rcpp::traits::input_parameter< double >::type bw(bwSEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< double >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< double >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< double >::type btol(btolSEXP);
    Rcpp::traits::input_parameter< double >::type ftol(ftolSEXP);
    Rcpp::traits::input_parameter< double >::type gtol(gtolSEXP);
    Rcpp::traits::input_parameter< int >::type maxitr(maxitrSEXP);
    Rcpp::traits::input_parameter< int >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< int >::type ncore(ncoreSEXP);
    rcpp_result_gen = Rcpp::wrap(surv_dn_solver(B, X, Phit, Fail_Ind, bw, rho, eta, gamma, tau, epsilon, btol, ftol, gtol, maxitr, verbose, ncore));
    return rcpp_result_gen;
END_RCPP
}
// surv_forward_solver
List surv_forward_solver(arma::mat B, const arma::mat& X, const arma::vec& Fail_Ind, double bw, double rho, double eta, double gamma, double tau, double epsilon, double btol, double ftol, double gtol, int maxitr, int verbose, int ncore);
RcppExport SEXP _orthoDrLite_surv_forward_solver(SEXP BSEXP, SEXP XSEXP, SEXP Fail_IndSEXP, SEXP bwSEXP, SEXP rhoSEXP, SEXP etaSEXP, SEXP gammaSEXP, SEXP tauSEXP, SEXP epsilonSEXP, SEXP btolSEXP, SEXP ftolSEXP, SEXP gtolSEXP, SEXP maxitrSEXP, SEXP verboseSEXP, SEXP ncoreSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type B(BSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Fail_Ind(Fail_IndSEXP);
    Rcpp::traits::input_parameter< double >::type bw(bwSEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< double >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< double >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< double >::type btol(btolSEXP);
    Rcpp::traits::input_parameter< double >::type ftol(ftolSEXP);
    Rcpp::traits::input_parameter< double >::type gtol(gtolSEXP);
    Rcpp::traits::input_parameter< int >::type maxitr(maxitrSEXP);
    Rcpp::traits::input_parameter< int >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< int >::type ncore(ncoreSEXP);
    rcpp_result_gen = Rcpp::wrap(surv_forward_solver(B, X, Fail_Ind, bw, rho, eta, gamma, tau, epsilon, btol, ftol, gtol, maxitr, verbose, ncore));
    return rcpp_result_gen;
END_RCPP
}
// KernelDist_cross
NumericMatrix KernelDist_cross(const arma::mat& TestX, const arma::mat& X);
RcppExport SEXP _orthoDrLite_KernelDist_cross(SEXP TestXSEXP, SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type TestX(TestXSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(KernelDist_cross(TestX, X));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_orthoDrLite_gen_solver", (DL_FUNC) &_orthoDrLite_gen_solver, 15},
    {"_orthoDrLite_pdose_direct_solver", (DL_FUNC) &_orthoDrLite_pdose_direct_solver, 19},
    {"_orthoDrLite_dosepred", (DL_FUNC) &_orthoDrLite_dosepred, 5},
    {"_orthoDrLite_pdose_semi_solver", (DL_FUNC) &_orthoDrLite_pdose_semi_solver, 19},
    {"_orthoDrLite_local_f", (DL_FUNC) &_orthoDrLite_local_f, 5},
    {"_orthoDrLite_local_solver", (DL_FUNC) &_orthoDrLite_local_solver, 15},
    {"_orthoDrLite_phd_init", (DL_FUNC) &_orthoDrLite_phd_init, 5},
    {"_orthoDrLite_phd_solver", (DL_FUNC) &_orthoDrLite_phd_solver, 15},
    {"_orthoDrLite_save_init", (DL_FUNC) &_orthoDrLite_save_init, 5},
    {"_orthoDrLite_save_solver", (DL_FUNC) &_orthoDrLite_save_solver, 15},
    {"_orthoDrLite_seff_init", (DL_FUNC) &_orthoDrLite_seff_init, 5},
    {"_orthoDrLite_seff_solver", (DL_FUNC) &_orthoDrLite_seff_solver, 15},
    {"_orthoDrLite_sir_init", (DL_FUNC) &_orthoDrLite_sir_init, 5},
    {"_orthoDrLite_sir_solver", (DL_FUNC) &_orthoDrLite_sir_solver, 15},
    {"_orthoDrLite_surv_dm_solver", (DL_FUNC) &_orthoDrLite_surv_dm_solver, 16},
    {"_orthoDrLite_surv_dn_solver", (DL_FUNC) &_orthoDrLite_surv_dn_solver, 16},
    {"_orthoDrLite_surv_forward_solver", (DL_FUNC) &_orthoDrLite_surv_forward_solver, 15},
    {"_orthoDrLite_KernelDist_cross", (DL_FUNC) &_orthoDrLite_KernelDist_cross, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_orthoDrLite(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
