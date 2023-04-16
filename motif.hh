#ifndef MOTIF_HH
#define MOTIF_HH
#include "subsequence.hh"
typedef std::unordered_map<std::string, char> HashMap;
//Split function that allows me to split my input strings from they xx+yy form into v[0]="xx" and v[1]="yy" 
std::vector<std::string> split (const std::string &s, char delim);
//Hashmap Creation functions
HashMap globalMap_Hairpins(HashMap x);
HashMap globalMap_Internals(HashMap x);
//Input management function for Hairpin loops (single RNA sequence)
std::string InputManagement(const Basic_Subsequence<char,unsigned int> &a);
//Input management function for Internal loops (two RNA sequences)
std::string InputManagement2(const Basic_Subsequence<char, unsigned int> &a, const Basic_Subsequence<char, unsigned int> &b);
//Overloaded identify_motif function
char identify_motif(const Basic_Subsequence<char, unsigned int> &a);
char identify_motif(const Basic_Subsequence<char, unsigned int> &a, const Basic_Subsequence<char, unsigned int> &b);
#endif