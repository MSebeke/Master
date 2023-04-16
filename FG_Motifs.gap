import rna
import "Extensions/typesRNAfolding.hh"
import "Extensions/singlefold.hh"
import "Extensions/mfesubopt.hh"
import "Extensions/rnaoptions_defaults.hh"
import "Extensions/rnaoptions.hh"
import "motif.hh"
input rna
type shape_t = shape
type base_t = extern
type answer_macrostate_pfunc = extern

//Signature

include "Signatures/sig_foldrna.gap"


//Algebras

algebra count auto count;
algebra enum auto enum;
include "Algebras/MFE/alg_mfe.gap" //Also contains alg_mfe_subopt
include "Algebras/DotBracket/alg_dotBracket.gap" //Basically algebra pretty without the motifs in the dotBracket string
include "Algebras/Pfunc/alg_pfunc_macrostate.gap" //Contains alg_pfunc_macrostate along with two additions <- Enabling this leads to the whole programm not compiling, answer_macrostate_pfunc is not defined? 

algebra motif implements sig_foldrna(alphabet = char, answer = string){

  string sadd(Subsequence lb, string e) {
    return e;
  }

  string cadd(string x, string e) {
    string res;
    append(res, x);
    append(res, e);
    return res;
  }

  string dall(Subsequence lb, string e, Subsequence rb) { //dlr changed to dall ? Not sure if I did that correctly
    return e;
  }


  string sr(Subsequence lb, string e, Subsequence rb) {
    return e;
  }

  string hl(Subsequence f1, Subsequence x, Subsequence f2) {
    string r;
    char mot = identify_motif(x);
    if (mot != '.') {
        append(r,mot);
    }
    return r;
  }

  string bl(Subsequence f1, Subsequence x, string e, Subsequence f2) {
    return e;
  }

  string br(Subsequence f1, string e, Subsequence x, Subsequence f2) {
    return e;
  }

  string il(Subsequence f2, Subsequence r1, string x, Subsequence r2, Subsequence f3) {
    string r;
    char mot = identify_motif(r1,r2);
    append(r,x);    
    if (mot != '.') {
        append(r,mot);
    }
    return r;
  }

  string ml(Subsequence f1, string x, Subsequence f2) {
    return x;
  }

  string app(string c1, string c) {
    string r;
    append(r, c1);
    append(r, c);
    return r;
  }

  string trafo(string c1) { //changes from ul to trafo ? Idk if that's right
    return c1;
  }

  string addss(string c1, Subsequence e) {
    return c1;
  }

  string ssadd(Subsequence e, string x) {
    return x;
  }

  string nil(Subsequence a) {
    string r;
    return r;
  }
  //None of the following functions are of any use, so they're all left empty
  string edl(Subsequence a, string x, Subsequence c){
    return x;
  }

  string edr(Subsequence a, string x, Subsequence c){
    return x;
  }

  string edlr(Subsequence a, string x, Subsequence c){
    return x;
  }

  string drem(Subsequence a, string x, Subsequence c){
    return x;
  }

  string mlall(Subsequence a, string x, Subsequence c){
    return x;
  }
  
  string mldr(Subsequence a, string x, Subsequence c, Subsequence d){
    return x;
  }

  string mldlr(Subsequence a, Subsequence b, string x, Subsequence c, Subsequence d){
    return x;
  }

  string mldl(Subsequence a,Subsequence b, string x, Subsequence c){
    return x;
  }

  string incl(string x){
    return x;
  }

  string cadd_Pr(string x, string y){
    string r;
    append(r,x);
    append(r,y);
    return r; 
  }

  string cadd_Pr_Pr( string x, string y){
    string r;
    append(r,x);
    append(r,y);
    return r;
  }

  string cadd_Pr_Pr_Pr(string x, string y){
    string r;
    append(r,x);
    append(r,y);
    return r;
  }

  string ambd(string x, Subsequence a, string y){
    string r;
    append(r,x);
    append(r,y);
    return r;
  }

  string ambd_Pr(string x, Subsequence a, string y){
    string r;
    append(r,x);
    append(r,y);
    return r;
  }

  string mladr(Subsequence a, string x, Subsequence b, Subsequence c){
    return x;
  }

  string mladlr(Subsequence a, Subsequence b, string x, Subsequence c, Subsequence d){
    return x;
  }

  string mldladr(Subsequence a, Subsequence b, string x, Subsequence c, Subsequence d){
    return x;
  }

  string mladldr(Subsequence a, Subsequence b, string x, Subsequence c, Subsequence d){
    return x;
  }

  string mladl(Subsequence a, Subsequence b, string x, Subsequence c){
    return x;
  }

  string combine(string x, string y){
    string r;
    append(r,x);
    append(r,y);
    return r;
  } 

  string acomb(string x, Subsequence a, string y){
    string r;
    append(r,x);
    append(r,y);
    return r;
  }



  choice [string] h([string] i)
  {
    return unique(i);
  }
}
algebra pretty implements sig_foldrna(alphabet = char, answer = string){

  string sadd(Subsequence lb, string e) {
    string res;
    append(res, '.');
    append(res, e);
    return res;
  } 

  string cadd(string x, string e) {
    string res;
    append(res, x);
    append(res, e);
    return res;
  }

  string dall(Subsequence lb, string e, Subsequence rb) {
    return e;
  }

  string sr(Subsequence lb, string e, Subsequence rb) {
    string r;
    append(r, '(');
    append(r, e);
    append(r, ')');
    return r;
  }

  string bl(Subsequence f1, Subsequence x, string e, Subsequence f2) {
    string r;
    append(r, "((", 2);
    append(r, '.', size(x));
    append(r, e);
    append(r, "))", 2);
    return r;
  }

  string br(Subsequence f1, string e, Subsequence x, Subsequence f2) {
    string r;
    append(r, "((", 2);
    append(r, e);
    append(r, '.', size(x));
    append(r, "))", 2);
    return r;
  }

  string hl(Subsequence f1, Subsequence x, Subsequence f2) {
    string r;
    char mot = identify_motif(x);
    append(r, "((", 2);
    append(r, mot, size(x));
    append(r, "))", 2);
    return r;
  }

  string il(Subsequence f2, Subsequence r1, string x, Subsequence r2, Subsequence f3) {
    string r;
    append(r, "((", 2);
    char mot = identify_motif(r1,r2);
    append(r,mot,size(r1));
    append(r, x);
    append(r,mot,size(r2));
    append(r, "))", 2);
    return r;
  }

  string ml(Subsequence f1, string x, Subsequence f2) {
    string r;
    append(r, "((", 2);
    append(r, x);
    append(r, "))", 2);
    return r;
  }

  string app(string c1, string c) {
    string r;
    append(r, c1);
    append(r, c);
    return r;
  }

  string trafo(string c1) {
    return c1;
  }

  string addss(string c1, Subsequence e) {
    string r;
    append(r, c1);
    append(r, '.', size(e));
    return r;
  }

  string ssadd(Subsequence e, string x) {
    string r;
    append(r, '.', size(e));
    append(r, x);
    return r;
  }

  string nil(Subsequence a) {
    string r;
    return r;
  }

  string edl(Subsequence a, string x, Subsequence c){
    return x;
  }

  string edr(Subsequence a, string x, Subsequence c){
    return x;
  }

  string edlr(Subsequence a, string x, Subsequence c){
    return x;
  }

  string drem(Subsequence a, string x, Subsequence c){
    return x;
  }

  string mlall(Subsequence a, string x, Subsequence c){
    return x;
  }
  
  string mldr(Subsequence a, string x, Subsequence c, Subsequence d){
    return x;
  }

  string mldlr(Subsequence a, Subsequence b, string x, Subsequence c, Subsequence d){
    return x;
  }

  string mldl(Subsequence a,Subsequence b, string x, Subsequence c){
    return x;
  }

  string incl(string x){
    return x;
  }

  string cadd_Pr(string x, string y){
    string r;
    append(r,x);
    append(r,y);
    return r; 
  }

  string cadd_Pr_Pr( string x, string y){
    string r;
    append(r,x);
    append(r,y);
    return r;
  }

  string cadd_Pr_Pr_Pr(string x, string y){
    string r;
    append(r,x);
    append(r,y);
    return r;
  }

  string ambd(string x, Subsequence a, string y){
    string r;
    append(r,x);
    append(r,y);
    return r;
  }

  string ambd_Pr(string x, Subsequence a, string y){
    string r;
    append(r,x);
    append(r,y);
    return r;
  }

  string mladr(Subsequence a, string x, Subsequence b, Subsequence c){
    return x;
  }

  string mladlr(Subsequence a, Subsequence b, string x, Subsequence c, Subsequence d){
    return x;
  }

  string mldladr(Subsequence a, Subsequence b, string x, Subsequence c, Subsequence d){
    return x;
  }

  string mladldr(Subsequence a, Subsequence b, string x, Subsequence c, Subsequence d){
    return x;
  }

  string mladl(Subsequence a, Subsequence b, string x, Subsequence c){
    return x;
  }

  string combine(string x, string y){
    string r;
    append(r,x);
    append(r,y);
    return r;
  } 

  string acomb(string x, Subsequence a, string y){
    string r;
    append(r,x);
    append(r,y);
    return r;
  }

  choice [string] h([string] i)
  {
    return i;
  }
}


//Grammars

include "Grammars/gra_macrostate.gap"


//Instances

instance motpfc = gra_macrostate(motif*alg_pfunc);
instance motmfepretty = gra_macrostate ((motif * alg_mfe) * pretty);
instance motmfepretty_subopt = gra_macrostate ((motif * alg_mfe_subopt) * pretty);
instance motmfedotBracket = gra_macrostate ((motif * alg_mfe_subopt) * alg_dotBracket);