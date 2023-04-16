#ifndef MOTIF_HH
#define MOTIF_HH

inline char identify_motif(const Basic_Subsequence<char,unsigned int> &a) {

	char res = '.';

	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == C_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == C_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == C_BASE &&
		base_t(a.seq->seq[a.i+1]) == C_BASE &&
		base_t(a.seq->seq[a.i+2]) == U_BASE &&
		base_t(a.seq->seq[a.i+3]) == U_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == U_BASE &&
		base_t(a.seq->seq[a.i+2]) == C_BASE &&
		base_t(a.seq->seq[a.i+3]) == C_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == C_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == C_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == C_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == C_BASE &&
		base_t(a.seq->seq[a.i+3]) == U_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == C_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == C_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == U_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == A_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == C_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == A_BASE &&
		base_t(a.seq->seq[a.i+1]) == C_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == C_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == A_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == C_BASE &&
		base_t(a.seq->seq[a.i+3]) == U_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == C_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == C_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == C_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == C_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == C_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == A_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == C_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == A_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == U_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == U_BASE &&
		base_t(a.seq->seq[a.i+2]) == C_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == C_BASE &&
		base_t(a.seq->seq[a.i+2]) == U_BASE &&
		base_t(a.seq->seq[a.i+3]) == U_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == C_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == A_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == C_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == A_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == C_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == C_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == A_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == U_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == A_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == U_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == U_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == U_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == U_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == A_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == U_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == A_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == A_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == C_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == C_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == A_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == C_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == C_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == A_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == C_BASE &&
		base_t(a.seq->seq[a.i+3]) == C_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == C_BASE &&
		base_t(a.seq->seq[a.i+1]) == C_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == A_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == A_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == C_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == C_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == C_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == A_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == C_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == U_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == U_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == C_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == C_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == U_BASE) {
	res='4';
	}
	if(a.j-a.i == 3 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == C_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE) {
	res='3';
	}
	if(a.j-a.i == 3 &&
		base_t(a.seq->seq[a.i+0]) == A_BASE &&
		base_t(a.seq->seq[a.i+1]) == C_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE) {
	res='3';
	}
	if(a.j-a.i == 3 &&
		base_t(a.seq->seq[a.i+0]) == C_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE) {
	res='3';
	}
	if(a.j-a.i == 3 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == C_BASE) {
	res='3';
	}
	if(a.j-a.i == 3 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE) {
	res='3';
	}
	if(a.j-a.i == 3 &&
		base_t(a.seq->seq[a.i+0]) == A_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE) {
	res='3';
	}
	if(a.j-a.i == 3 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == U_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE) {
	res='3';
	}
	if(a.j-a.i == 3 &&
		base_t(a.seq->seq[a.i+0]) == A_BASE &&
		base_t(a.seq->seq[a.i+1]) == U_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE) {
	res='3';
	}
	if(a.j-a.i == 3 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == U_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE) {
	res='3';
	}
	if(a.j-a.i == 3 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == U_BASE &&
		base_t(a.seq->seq[a.i+2]) == U_BASE) {
	res='3';
	}
	if(a.j-a.i == 3 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == C_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE) {
	res='3';
	}
	if(a.j-a.i == 3 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == C_BASE &&
		base_t(a.seq->seq[a.i+2]) == U_BASE) {
	res='3';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == U_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == A_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == U_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == C_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == U_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == C_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == A_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == C_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == A_BASE &&
		base_t(a.seq->seq[a.i+1]) == C_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == U_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == C_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == A_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == C_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == C_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == A_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == C_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE) {
	res='4';
	}
	if(a.j-a.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == A_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE) {
	res='4';
	}
	if(a.j-a.i == 7 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == G_BASE &&
		base_t(a.seq->seq[a.i+6]) == U_BASE) {
	res='2';
	}
	if(a.j-a.i == 7 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == G_BASE &&
		base_t(a.seq->seq[a.i+6]) == U_BASE) {
	res='2';
	}
	if(a.j-a.i == 7 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == U_BASE &&
		base_t(a.seq->seq[a.i+2]) == C_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == U_BASE &&
		base_t(a.seq->seq[a.i+6]) == U_BASE) {
	res='2';
	}
	if(a.j-a.i == 7 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == U_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == C_BASE &&
		base_t(a.seq->seq[a.i+5]) == U_BASE &&
		base_t(a.seq->seq[a.i+6]) == U_BASE) {
	res='2';
	}
	if(a.j-a.i == 7 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == U_BASE &&
		base_t(a.seq->seq[a.i+6]) == U_BASE) {
	res='2';
	}
	if(a.j-a.i == 7 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == U_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == G_BASE &&
		base_t(a.seq->seq[a.i+6]) == U_BASE) {
	res='2';
	}
	if(a.j-a.i == 7 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == U_BASE &&
		base_t(a.seq->seq[a.i+2]) == C_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == G_BASE &&
		base_t(a.seq->seq[a.i+6]) == A_BASE) {
	res='2';
	}
	if(a.j-a.i == 7 &&
		base_t(a.seq->seq[a.i+0]) == A_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE &&
		base_t(a.seq->seq[a.i+4]) == C_BASE &&
		base_t(a.seq->seq[a.i+5]) == U_BASE &&
		base_t(a.seq->seq[a.i+6]) == U_BASE) {
	res='2';
	}
	if(a.j-a.i == 7 &&
		base_t(a.seq->seq[a.i+0]) == A_BASE &&
		base_t(a.seq->seq[a.i+1]) == U_BASE &&
		base_t(a.seq->seq[a.i+2]) == U_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == A_BASE &&
		base_t(a.seq->seq[a.i+6]) == G_BASE) {
	res='2';
	}
	if(a.j-a.i == 7 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE &&
		base_t(a.seq->seq[a.i+4]) == U_BASE &&
		base_t(a.seq->seq[a.i+5]) == U_BASE &&
		base_t(a.seq->seq[a.i+6]) == A_BASE) {
	res='2';
	}
	if(a.j-a.i == 7 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == C_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == C_BASE &&
		base_t(a.seq->seq[a.i+6]) == U_BASE) {
	res='2';
	}
	if(a.j-a.i == 7 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == C_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == C_BASE &&
		base_t(a.seq->seq[a.i+5]) == G_BASE &&
		base_t(a.seq->seq[a.i+6]) == U_BASE) {
	res='2';
	}
	if(a.j-a.i == 7 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == U_BASE &&
		base_t(a.seq->seq[a.i+2]) == C_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == G_BASE &&
		base_t(a.seq->seq[a.i+6]) == C_BASE) {
	res='2';
	}
	if(a.j-a.i == 7 &&
		base_t(a.seq->seq[a.i+0]) == C_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE &&
		base_t(a.seq->seq[a.i+4]) == C_BASE &&
		base_t(a.seq->seq[a.i+5]) == U_BASE &&
		base_t(a.seq->seq[a.i+6]) == U_BASE) {
	res='2';
	}
	if(a.j-a.i == 7 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == A_BASE &&
		base_t(a.seq->seq[a.i+6]) == C_BASE) {
	res='2';
	}
	if(a.j-a.i == 7 &&
		base_t(a.seq->seq[a.i+0]) == C_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == G_BASE &&
		base_t(a.seq->seq[a.i+6]) == U_BASE) {
	res='2';
	}
	if(a.j-a.i == 7 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == U_BASE &&
		base_t(a.seq->seq[a.i+2]) == U_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE &&
		base_t(a.seq->seq[a.i+4]) == U_BASE &&
		base_t(a.seq->seq[a.i+5]) == A_BASE &&
		base_t(a.seq->seq[a.i+6]) == U_BASE) {
	res='2';
	}
	if(a.j-a.i == 7 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == U_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE &&
		base_t(a.seq->seq[a.i+4]) == U_BASE &&
		base_t(a.seq->seq[a.i+5]) == U_BASE &&
		base_t(a.seq->seq[a.i+6]) == U_BASE) {
	res='2';
	}
	if(a.j-a.i == 7 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == U_BASE &&
		base_t(a.seq->seq[a.i+2]) == C_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == A_BASE &&
		base_t(a.seq->seq[a.i+6]) == U_BASE) {
	res='2';
	}
	if(a.j-a.i == 7 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == C_BASE &&
		base_t(a.seq->seq[a.i+5]) == U_BASE &&
		base_t(a.seq->seq[a.i+6]) == U_BASE) {
	res='2';
	}
	if(a.j-a.i == 7 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == U_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == U_BASE &&
		base_t(a.seq->seq[a.i+6]) == U_BASE) {
	res='2';
	}
	if(a.j-a.i == 7 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == U_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == U_BASE &&
		base_t(a.seq->seq[a.i+6]) == U_BASE) {
	res='2';
	}
	if(a.j-a.i == 7 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == U_BASE &&
		base_t(a.seq->seq[a.i+2]) == U_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE &&
		base_t(a.seq->seq[a.i+4]) == U_BASE &&
		base_t(a.seq->seq[a.i+5]) == A_BASE &&
		base_t(a.seq->seq[a.i+6]) == G_BASE) {
	res='2';
	}
	if(a.j-a.i == 7 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == U_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE &&
		base_t(a.seq->seq[a.i+4]) == U_BASE &&
		base_t(a.seq->seq[a.i+5]) == U_BASE &&
		base_t(a.seq->seq[a.i+6]) == U_BASE) {
	res='2';
	}
	if(a.j-a.i == 7 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == U_BASE &&
		base_t(a.seq->seq[a.i+2]) == C_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == G_BASE &&
		base_t(a.seq->seq[a.i+6]) == U_BASE) {
	res='2';
	}
	if(a.j-a.i == 7 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == C_BASE &&
		base_t(a.seq->seq[a.i+5]) == U_BASE &&
		base_t(a.seq->seq[a.i+6]) == U_BASE) {
	res='2';
	}
	if(a.j-a.i == 7 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == U_BASE &&
		base_t(a.seq->seq[a.i+2]) == C_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == U_BASE &&
		base_t(a.seq->seq[a.i+6]) == U_BASE) {
	res='2';
	}
	if(a.j-a.i == 7 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == U_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE &&
		base_t(a.seq->seq[a.i+4]) == C_BASE &&
		base_t(a.seq->seq[a.i+5]) == U_BASE &&
		base_t(a.seq->seq[a.i+6]) == U_BASE) {
	res='2';
	}
	if(a.j-a.i == 7 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == U_BASE &&
		base_t(a.seq->seq[a.i+2]) == C_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == A_BASE &&
		base_t(a.seq->seq[a.i+6]) == U_BASE) {
	res='2';
	}
	if(a.j-a.i == 7 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE &&
		base_t(a.seq->seq[a.i+4]) == C_BASE &&
		base_t(a.seq->seq[a.i+5]) == U_BASE &&
		base_t(a.seq->seq[a.i+6]) == U_BASE) {
	res='2';
	}
	if(a.j-a.i == 7 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == C_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == G_BASE &&
		base_t(a.seq->seq[a.i+6]) == C_BASE) {
	res='2';
	}
	if(a.j-a.i == 7 &&
		base_t(a.seq->seq[a.i+0]) == C_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == C_BASE &&
		base_t(a.seq->seq[a.i+5]) == G_BASE &&
		base_t(a.seq->seq[a.i+6]) == U_BASE) {
	res='2';
	}
	if(a.j-a.i == 7 &&
		base_t(a.seq->seq[a.i+0]) == C_BASE &&
		base_t(a.seq->seq[a.i+1]) == U_BASE &&
		base_t(a.seq->seq[a.i+2]) == U_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == A_BASE &&
		base_t(a.seq->seq[a.i+6]) == A_BASE) {
	res='2';
	}
	if(a.j-a.i == 7 &&
		base_t(a.seq->seq[a.i+0]) == A_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE &&
		base_t(a.seq->seq[a.i+4]) == U_BASE &&
		base_t(a.seq->seq[a.i+5]) == U_BASE &&
		base_t(a.seq->seq[a.i+6]) == C_BASE) {
	res='2';
	}
	if(a.j-a.i == 7 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == U_BASE &&
		base_t(a.seq->seq[a.i+2]) == C_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == G_BASE &&
		base_t(a.seq->seq[a.i+6]) == U_BASE) {
	res='2';
	}
	if(a.j-a.i == 7 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE &&
		base_t(a.seq->seq[a.i+4]) == C_BASE &&
		base_t(a.seq->seq[a.i+5]) == U_BASE &&
		base_t(a.seq->seq[a.i+6]) == U_BASE) {
	res='2';
	}
	if(a.j-a.i == 7 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == U_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == U_BASE &&
		base_t(a.seq->seq[a.i+6]) == U_BASE) {
	res='2';
	}
	if(a.j-a.i == 7 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == U_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == U_BASE &&
		base_t(a.seq->seq[a.i+5]) == G_BASE &&
		base_t(a.seq->seq[a.i+6]) == U_BASE) {
	res='2';
	}
	if(a.j-a.i == 7 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == A_BASE &&
		base_t(a.seq->seq[a.i+6]) == U_BASE) {
	res='2';
	}
	if(a.j-a.i == 7 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == G_BASE &&
		base_t(a.seq->seq[a.i+6]) == U_BASE) {
	res='2';
	}
	if(a.j-a.i == 7 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == U_BASE &&
		base_t(a.seq->seq[a.i+2]) == C_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == U_BASE &&
		base_t(a.seq->seq[a.i+6]) == C_BASE) {
	res='2';
	}
	if(a.j-a.i == 7 &&
		base_t(a.seq->seq[a.i+0]) == C_BASE &&
		base_t(a.seq->seq[a.i+1]) == U_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE &&
		base_t(a.seq->seq[a.i+4]) == C_BASE &&
		base_t(a.seq->seq[a.i+5]) == U_BASE &&
		base_t(a.seq->seq[a.i+6]) == U_BASE) {
	res='2';
	}
	if(a.j-a.i == 7 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == A_BASE &&
		base_t(a.seq->seq[a.i+6]) == G_BASE) {
	res='2';
	}
	if(a.j-a.i == 7 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == G_BASE &&
		base_t(a.seq->seq[a.i+6]) == U_BASE) {
	res='2';
	}
	if(a.j-a.i == 7 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == U_BASE &&
		base_t(a.seq->seq[a.i+2]) == C_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == C_BASE &&
		base_t(a.seq->seq[a.i+6]) == U_BASE) {
	res='2';
	}
	if(a.j-a.i == 7 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == C_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE &&
		base_t(a.seq->seq[a.i+4]) == C_BASE &&
		base_t(a.seq->seq[a.i+5]) == U_BASE &&
		base_t(a.seq->seq[a.i+6]) == U_BASE) {
	res='2';
	}
	if(a.j-a.i == 7 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == C_BASE &&
		base_t(a.seq->seq[a.i+6]) == U_BASE) {
	res='2';
	}
	if(a.j-a.i == 7 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == C_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == G_BASE &&
		base_t(a.seq->seq[a.i+6]) == U_BASE) {
	res='2';
	}
	if(a.j-a.i == 7 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == C_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == G_BASE &&
		base_t(a.seq->seq[a.i+6]) == U_BASE) {
	res='2';
	}
	if(a.j-a.i == 7 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == C_BASE &&
		base_t(a.seq->seq[a.i+5]) == G_BASE &&
		base_t(a.seq->seq[a.i+6]) == U_BASE) {
	res='2';
	}

	return res;
}

inline char identify_motif(const Basic_Subsequence<char,unsigned int> &a, const Basic_Subsequence<char,unsigned int> &b) {

	char res = '.';

	if(a.j-a.i == 4 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+0]) == C_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == C_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == C_BASE &&
		base_t(b.seq->seq[b.i+5]) == G_BASE) {
	res ='K';
	}
	if(a.j-a.i == 4 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == U_BASE &&
		base_t(a.seq->seq[a.i+2]) == C_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == U_BASE &&
		base_t(b.seq->seq[b.i+1]) == U_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == U_BASE &&
		base_t(b.seq->seq[b.i+5]) == U_BASE) {
	res ='K';
	}
	if(a.j-a.i == 4 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == A_BASE &&
		base_t(b.seq->seq[b.i+5]) == A_BASE) {
	res ='K';
	}
	if(a.j-a.i == 4 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == U_BASE &&
		base_t(b.seq->seq[b.i+5]) == C_BASE) {
	res ='K';
	}
	if(a.j-a.i == 4 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == U_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == U_BASE &&
		base_t(b.seq->seq[b.i+5]) == C_BASE) {
	res ='K';
	}
	if(a.j-a.i == 4 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == U_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == A_BASE &&
		base_t(b.seq->seq[b.i+5]) == G_BASE) {
	res ='K';
	}
	if(a.j-a.i == 4 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+0]) == C_BASE &&
		base_t(a.seq->seq[a.i+1]) == C_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == U_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == U_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == C_BASE &&
		base_t(b.seq->seq[b.i+5]) == G_BASE) {
	res ='K';
	}
	if(a.j-a.i == 4 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+0]) == C_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == A_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == U_BASE &&
		base_t(b.seq->seq[b.i+5]) == G_BASE) {
	res ='K';
	}
	if(a.j-a.i == 4 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == A_BASE &&
		base_t(b.seq->seq[b.i+5]) == G_BASE) {
	res ='K';
	}
	if(a.j-a.i == 4 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == A_BASE &&
		base_t(b.seq->seq[b.i+1]) == U_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == U_BASE &&
		base_t(b.seq->seq[b.i+5]) == C_BASE) {
	res ='K';
	}
	if(a.j-a.i == 4 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == U_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == U_BASE &&
		base_t(b.seq->seq[b.i+5]) == C_BASE) {
	res ='K';
	}
	if(a.j-a.i == 4 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+0]) == A_BASE &&
		base_t(a.seq->seq[a.i+1]) == C_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == U_BASE &&
		base_t(b.seq->seq[b.i+1]) == U_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == C_BASE &&
		base_t(b.seq->seq[b.i+5]) == U_BASE) {
	res ='K';
	}
	if(a.j-a.i == 4 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == U_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == A_BASE &&
		base_t(b.seq->seq[b.i+5]) == C_BASE) {
	res ='K';
	}
	if(a.j-a.i == 4 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+0]) == C_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == A_BASE &&
		base_t(b.seq->seq[b.i+5]) == G_BASE) {
	res ='K';
	}
	if(a.j-a.i == 4 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == U_BASE &&
		base_t(b.seq->seq[b.i+1]) == U_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == U_BASE &&
		base_t(b.seq->seq[b.i+5]) == C_BASE) {
	res ='K';
	}
	if(a.j-a.i == 4 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == A_BASE &&
		base_t(b.seq->seq[b.i+5]) == G_BASE) {
	res ='K';
	}
	if(a.j-a.i == 4 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == U_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == U_BASE &&
		base_t(b.seq->seq[b.i+5]) == C_BASE) {
	res ='K';
	}
	if(a.j-a.i == 4 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == C_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(b.seq->seq[b.i+-1]) == U_BASE &&
		base_t(b.seq->seq[b.i+0]) == U_BASE &&
		base_t(b.seq->seq[b.i+1]) == U_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == C_BASE &&
		base_t(b.seq->seq[b.i+5]) == G_BASE) {
	res ='K';
	}
	if(a.j-a.i == 4 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == C_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == U_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == C_BASE &&
		base_t(b.seq->seq[b.i+5]) == C_BASE) {
	res ='K';
	}
	if(a.j-a.i == 4 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == U_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == A_BASE &&
		base_t(b.seq->seq[b.i+5]) == G_BASE) {
	res ='K';
	}
	if(a.j-a.i == 4 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == A_BASE &&
		base_t(b.seq->seq[b.i+5]) == C_BASE) {
	res ='K';
	}
	if(a.j-a.i == 4 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == C_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == A_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == C_BASE &&
		base_t(b.seq->seq[b.i+5]) == G_BASE) {
	res ='K';
	}
	if(a.j-a.i == 4 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == C_BASE &&
		base_t(b.seq->seq[b.i+-1]) == G_BASE &&
		base_t(b.seq->seq[b.i+0]) == A_BASE &&
		base_t(b.seq->seq[b.i+1]) == U_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == A_BASE &&
		base_t(b.seq->seq[b.i+5]) == G_BASE) {
	res ='K';
	}
	if(a.j-a.i == 4 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == U_BASE &&
		base_t(b.seq->seq[b.i+-1]) == A_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == U_BASE &&
		base_t(b.seq->seq[b.i+5]) == C_BASE) {
	res ='K';
	}
	if(a.j-a.i == 4 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == C_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(b.seq->seq[b.i+-1]) == U_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == A_BASE &&
		base_t(b.seq->seq[b.i+5]) == G_BASE) {
	res ='K';
	}
	if(a.j-a.i == 3 && b.j-b.i == 1 &&
		base_t(a.seq->seq[a.i+-1]) == U_BASE &&
		base_t(a.seq->seq[a.i+0]) == C_BASE &&
		base_t(a.seq->seq[a.i+1]) == C_BASE &&
		base_t(a.seq->seq[a.i+2]) == C_BASE &&
		base_t(a.seq->seq[a.i+3]) == U_BASE &&
		base_t(b.seq->seq[b.i+0]) == A_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE) {
	res ='C';
	}
	if(a.j-a.i == 3 && b.j-b.i == 1 &&
		base_t(a.seq->seq[a.i+-1]) == C_BASE &&
		base_t(a.seq->seq[a.i+0]) == C_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == C_BASE &&
		base_t(a.seq->seq[a.i+3]) == U_BASE &&
		base_t(b.seq->seq[b.i+0]) == A_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE) {
	res ='C';
	}
	if(a.j-a.i == 3 && b.j-b.i == 1 &&
		base_t(a.seq->seq[a.i+-1]) == C_BASE &&
		base_t(a.seq->seq[a.i+0]) == C_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == C_BASE &&
		base_t(a.seq->seq[a.i+3]) == U_BASE &&
		base_t(b.seq->seq[b.i+0]) == A_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE) {
	res ='C';
	}
	if(a.j-a.i == 3 && b.j-b.i == 1 &&
		base_t(a.seq->seq[a.i+-1]) == G_BASE &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE &&
		base_t(b.seq->seq[b.i+0]) == C_BASE &&
		base_t(b.seq->seq[b.i+1]) == C_BASE) {
	res ='C';
	}
	if(a.j-a.i == 3 && b.j-b.i == 1 &&
		base_t(a.seq->seq[a.i+-1]) == U_BASE &&
		base_t(a.seq->seq[a.i+0]) == C_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == C_BASE &&
		base_t(a.seq->seq[a.i+3]) == U_BASE &&
		base_t(b.seq->seq[b.i+0]) == A_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE) {
	res ='C';
	}
	if(a.j-a.i == 3 && b.j-b.i == 1 &&
		base_t(a.seq->seq[a.i+-1]) == C_BASE &&
		base_t(a.seq->seq[a.i+0]) == C_BASE &&
		base_t(a.seq->seq[a.i+1]) == U_BASE &&
		base_t(a.seq->seq[a.i+2]) == C_BASE &&
		base_t(a.seq->seq[a.i+3]) == U_BASE &&
		base_t(b.seq->seq[b.i+0]) == A_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE) {
	res ='C';
	}
	if(a.j-a.i == 3 && b.j-b.i == 1 &&
		base_t(a.seq->seq[a.i+-1]) == G_BASE &&
		base_t(a.seq->seq[a.i+0]) == C_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == U_BASE &&
		base_t(b.seq->seq[b.i+0]) == A_BASE &&
		base_t(b.seq->seq[b.i+1]) == C_BASE) {
	res ='C';
	}
	if(a.j-a.i == 3 && b.j-b.i == 1 &&
		base_t(a.seq->seq[a.i+-1]) == G_BASE &&
		base_t(a.seq->seq[a.i+0]) == C_BASE &&
		base_t(a.seq->seq[a.i+1]) == U_BASE &&
		base_t(a.seq->seq[a.i+2]) == C_BASE &&
		base_t(a.seq->seq[a.i+3]) == U_BASE &&
		base_t(b.seq->seq[b.i+0]) == A_BASE &&
		base_t(b.seq->seq[b.i+1]) == C_BASE) {
	res ='C';
	}
	if(a.j-a.i == 3 && b.j-b.i == 1 &&
		base_t(a.seq->seq[a.i+-1]) == G_BASE &&
		base_t(a.seq->seq[a.i+0]) == C_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == C_BASE &&
		base_t(a.seq->seq[a.i+3]) == U_BASE &&
		base_t(b.seq->seq[b.i+0]) == A_BASE &&
		base_t(b.seq->seq[b.i+1]) == C_BASE) {
	res ='C';
	}
	if(a.j-a.i == 6 && b.j-b.i == 6 &&
		base_t(a.seq->seq[a.i+-1]) == C_BASE &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == U_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE &&
		base_t(a.seq->seq[a.i+4]) == U_BASE &&
		base_t(a.seq->seq[a.i+5]) == A_BASE &&
		base_t(a.seq->seq[a.i+6]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == C_BASE &&
		base_t(b.seq->seq[b.i+5]) == A_BASE &&
		base_t(b.seq->seq[b.i+6]) == G_BASE) {
	res ='S';
	}
	if(a.j-a.i == 6 && b.j-b.i == 6 &&
		base_t(a.seq->seq[a.i+-1]) == A_BASE &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE &&
		base_t(a.seq->seq[a.i+4]) == U_BASE &&
		base_t(a.seq->seq[a.i+5]) == A_BASE &&
		base_t(a.seq->seq[a.i+6]) == A_BASE &&
		base_t(b.seq->seq[b.i+0]) == U_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == A_BASE &&
		base_t(b.seq->seq[b.i+5]) == U_BASE &&
		base_t(b.seq->seq[b.i+6]) == U_BASE) {
	res ='S';
	}
	if(a.j-a.i == 6 && b.j-b.i == 6 &&
		base_t(a.seq->seq[a.i+-1]) == A_BASE &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE &&
		base_t(a.seq->seq[a.i+4]) == U_BASE &&
		base_t(a.seq->seq[a.i+5]) == A_BASE &&
		base_t(a.seq->seq[a.i+6]) == A_BASE &&
		base_t(b.seq->seq[b.i+0]) == U_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == A_BASE &&
		base_t(b.seq->seq[b.i+5]) == U_BASE &&
		base_t(b.seq->seq[b.i+6]) == U_BASE) {
	res ='S';
	}
	if(a.j-a.i == 6 && b.j-b.i == 6 &&
		base_t(a.seq->seq[a.i+-1]) == C_BASE &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == C_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE &&
		base_t(a.seq->seq[a.i+4]) == U_BASE &&
		base_t(a.seq->seq[a.i+5]) == A_BASE &&
		base_t(a.seq->seq[a.i+6]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == C_BASE &&
		base_t(b.seq->seq[b.i+5]) == U_BASE &&
		base_t(b.seq->seq[b.i+6]) == G_BASE) {
	res ='S';
	}
	if(a.j-a.i == 6 && b.j-b.i == 6 &&
		base_t(a.seq->seq[a.i+-1]) == C_BASE &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == U_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE &&
		base_t(a.seq->seq[a.i+4]) == U_BASE &&
		base_t(a.seq->seq[a.i+5]) == A_BASE &&
		base_t(a.seq->seq[a.i+6]) == G_BASE &&
		base_t(b.seq->seq[b.i+0]) == C_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == A_BASE &&
		base_t(b.seq->seq[b.i+5]) == C_BASE &&
		base_t(b.seq->seq[b.i+6]) == G_BASE) {
	res ='S';
	}
	if(a.j-a.i == 6 && b.j-b.i == 6 &&
		base_t(a.seq->seq[a.i+-1]) == G_BASE &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == U_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE &&
		base_t(a.seq->seq[a.i+4]) == U_BASE &&
		base_t(a.seq->seq[a.i+5]) == A_BASE &&
		base_t(a.seq->seq[a.i+6]) == G_BASE &&
		base_t(b.seq->seq[b.i+0]) == C_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == C_BASE &&
		base_t(b.seq->seq[b.i+5]) == C_BASE &&
		base_t(b.seq->seq[b.i+6]) == C_BASE) {
	res ='S';
	}
	if(a.j-a.i == 6 && b.j-b.i == 6 &&
		base_t(a.seq->seq[a.i+-1]) == G_BASE &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE &&
		base_t(a.seq->seq[a.i+4]) == U_BASE &&
		base_t(a.seq->seq[a.i+5]) == A_BASE &&
		base_t(a.seq->seq[a.i+6]) == G_BASE &&
		base_t(b.seq->seq[b.i+0]) == U_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == A_BASE &&
		base_t(b.seq->seq[b.i+5]) == U_BASE &&
		base_t(b.seq->seq[b.i+6]) == C_BASE) {
	res ='S';
	}
	if(a.j-a.i == 6 && b.j-b.i == 6 &&
		base_t(a.seq->seq[a.i+-1]) == C_BASE &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == C_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE &&
		base_t(a.seq->seq[a.i+4]) == U_BASE &&
		base_t(a.seq->seq[a.i+5]) == A_BASE &&
		base_t(a.seq->seq[a.i+6]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == C_BASE &&
		base_t(b.seq->seq[b.i+5]) == C_BASE &&
		base_t(b.seq->seq[b.i+6]) == G_BASE) {
	res ='S';
	}
	if(a.j-a.i == 6 && b.j-b.i == 6 &&
		base_t(a.seq->seq[a.i+-1]) == A_BASE &&
		base_t(a.seq->seq[a.i+0]) == C_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE &&
		base_t(a.seq->seq[a.i+4]) == U_BASE &&
		base_t(a.seq->seq[a.i+5]) == A_BASE &&
		base_t(a.seq->seq[a.i+6]) == G_BASE &&
		base_t(b.seq->seq[b.i+0]) == C_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == A_BASE &&
		base_t(b.seq->seq[b.i+5]) == C_BASE &&
		base_t(b.seq->seq[b.i+6]) == U_BASE) {
	res ='S';
	}
	if(a.j-a.i == 6 && b.j-b.i == 6 &&
		base_t(a.seq->seq[a.i+-1]) == C_BASE &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == C_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE &&
		base_t(a.seq->seq[a.i+4]) == U_BASE &&
		base_t(a.seq->seq[a.i+5]) == A_BASE &&
		base_t(a.seq->seq[a.i+6]) == U_BASE &&
		base_t(b.seq->seq[b.i+0]) == A_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == C_BASE &&
		base_t(b.seq->seq[b.i+5]) == U_BASE &&
		base_t(b.seq->seq[b.i+6]) == G_BASE) {
	res ='S';
	}
	if(a.j-a.i == 6 && b.j-b.i == 6 &&
		base_t(a.seq->seq[a.i+-1]) == C_BASE &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE &&
		base_t(a.seq->seq[a.i+4]) == U_BASE &&
		base_t(a.seq->seq[a.i+5]) == A_BASE &&
		base_t(a.seq->seq[a.i+6]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == C_BASE &&
		base_t(b.seq->seq[b.i+5]) == U_BASE &&
		base_t(b.seq->seq[b.i+6]) == G_BASE) {
	res ='S';
	}
	if(a.j-a.i == 6 && b.j-b.i == 6 &&
		base_t(a.seq->seq[a.i+-1]) == C_BASE &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == C_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE &&
		base_t(a.seq->seq[a.i+4]) == U_BASE &&
		base_t(a.seq->seq[a.i+5]) == A_BASE &&
		base_t(a.seq->seq[a.i+6]) == U_BASE &&
		base_t(b.seq->seq[b.i+0]) == A_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == C_BASE &&
		base_t(b.seq->seq[b.i+5]) == C_BASE &&
		base_t(b.seq->seq[b.i+6]) == G_BASE) {
	res ='S';
	}
	if(a.j-a.i == 5 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+-1]) == G_BASE &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == U_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == A_BASE &&
		base_t(b.seq->seq[b.i+5]) == U_BASE) {
	res ='S';
	}
	if(a.j-a.i == 5 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+-1]) == A_BASE &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == U_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == C_BASE &&
		base_t(b.seq->seq[b.i+5]) == U_BASE) {
	res ='S';
	}
	if(a.j-a.i == 5 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+-1]) == U_BASE &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == U_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == A_BASE &&
		base_t(b.seq->seq[b.i+0]) == U_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == C_BASE &&
		base_t(b.seq->seq[b.i+5]) == G_BASE) {
	res ='S';
	}
	if(a.j-a.i == 5 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+-1]) == U_BASE &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == U_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == C_BASE &&
		base_t(b.seq->seq[b.i+4]) == C_BASE &&
		base_t(b.seq->seq[b.i+5]) == G_BASE) {
	res ='S';
	}
	if(a.j-a.i == 5 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+-1]) == G_BASE &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == U_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == G_BASE &&
		base_t(b.seq->seq[b.i+0]) == C_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == A_BASE &&
		base_t(b.seq->seq[b.i+5]) == C_BASE) {
	res ='S';
	}
	if(a.j-a.i == 5 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+-1]) == C_BASE &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == U_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == C_BASE &&
		base_t(b.seq->seq[b.i+4]) == C_BASE &&
		base_t(b.seq->seq[b.i+5]) == G_BASE) {
	res ='S';
	}
	if(a.j-a.i == 5 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+-1]) == C_BASE &&
		base_t(a.seq->seq[a.i+0]) == C_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == U_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == A_BASE &&
		base_t(b.seq->seq[b.i+0]) == U_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == C_BASE &&
		base_t(b.seq->seq[b.i+4]) == C_BASE &&
		base_t(b.seq->seq[b.i+5]) == G_BASE) {
	res ='S';
	}
	if(a.j-a.i == 5 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+-1]) == U_BASE &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == U_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == G_BASE &&
		base_t(b.seq->seq[b.i+0]) == C_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == A_BASE &&
		base_t(b.seq->seq[b.i+5]) == G_BASE) {
	res ='S';
	}
	if(a.j-a.i == 5 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+-1]) == A_BASE &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == U_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == G_BASE &&
		base_t(b.seq->seq[b.i+0]) == U_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == C_BASE &&
		base_t(b.seq->seq[b.i+5]) == U_BASE) {
	res ='S';
	}
	if(a.j-a.i == 5 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+-1]) == C_BASE &&
		base_t(a.seq->seq[a.i+0]) == C_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == U_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == G_BASE &&
		base_t(b.seq->seq[b.i+0]) == C_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == C_BASE &&
		base_t(b.seq->seq[b.i+5]) == G_BASE) {
	res ='S';
	}
	if(a.j-a.i == 5 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+-1]) == U_BASE &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == U_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == U_BASE &&
		base_t(b.seq->seq[b.i+0]) == A_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == A_BASE &&
		base_t(b.seq->seq[b.i+5]) == A_BASE) {
	res ='S';
	}
	if(a.j-a.i == 4 && b.j-b.i == 3 &&
		base_t(a.seq->seq[a.i+-1]) == C_BASE &&
		base_t(a.seq->seq[a.i+0]) == A_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == G_BASE &&
		base_t(b.seq->seq[b.i+0]) == C_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == G_BASE) {
	res ='K';
	}
	if(a.j-a.i == 4 && b.j-b.i == 3 &&
		base_t(a.seq->seq[a.i+-1]) == C_BASE &&
		base_t(a.seq->seq[a.i+0]) == A_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == G_BASE &&
		base_t(b.seq->seq[b.i+0]) == U_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == G_BASE) {
	res ='K';
	}
	if(a.j-a.i == 4 && b.j-b.i == 3 &&
		base_t(a.seq->seq[a.i+-1]) == C_BASE &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == G_BASE &&
		base_t(b.seq->seq[b.i+0]) == C_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == G_BASE) {
	res ='K';
	}
	if(a.j-a.i == 7 && b.j-b.i == 7 &&
		base_t(a.seq->seq[a.i+-1]) == C_BASE &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == U_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE &&
		base_t(a.seq->seq[a.i+4]) == G_BASE &&
		base_t(a.seq->seq[a.i+5]) == U_BASE &&
		base_t(a.seq->seq[a.i+6]) == A_BASE &&
		base_t(a.seq->seq[a.i+7]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == G_BASE &&
		base_t(b.seq->seq[b.i+5]) == U_BASE &&
		base_t(b.seq->seq[b.i+6]) == A_BASE &&
		base_t(b.seq->seq[b.i+7]) == G_BASE) {
	res ='E';
	}
	if(a.j-a.i == 7 && b.j-b.i == 7 &&
		base_t(a.seq->seq[a.i+-1]) == C_BASE &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == U_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE &&
		base_t(a.seq->seq[a.i+4]) == G_BASE &&
		base_t(a.seq->seq[a.i+5]) == U_BASE &&
		base_t(a.seq->seq[a.i+6]) == A_BASE &&
		base_t(a.seq->seq[a.i+7]) == C_BASE &&
		base_t(b.seq->seq[b.i+-1]) == G_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == G_BASE &&
		base_t(b.seq->seq[b.i+5]) == U_BASE &&
		base_t(b.seq->seq[b.i+6]) == A_BASE &&
		base_t(b.seq->seq[b.i+7]) == G_BASE) {
	res ='E';
	}
	if(a.j-a.i == 7 && b.j-b.i == 7 &&
		base_t(a.seq->seq[a.i+-1]) == C_BASE &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == G_BASE &&
		base_t(a.seq->seq[a.i+5]) == U_BASE &&
		base_t(a.seq->seq[a.i+6]) == A_BASE &&
		base_t(a.seq->seq[a.i+7]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == U_BASE &&
		base_t(b.seq->seq[b.i+3]) == G_BASE &&
		base_t(b.seq->seq[b.i+4]) == G_BASE &&
		base_t(b.seq->seq[b.i+5]) == U_BASE &&
		base_t(b.seq->seq[b.i+6]) == A_BASE &&
		base_t(b.seq->seq[b.i+7]) == G_BASE) {
	res ='E';
	}
	if(a.j-a.i == 7 && b.j-b.i == 7 &&
		base_t(a.seq->seq[a.i+-1]) == C_BASE &&
		base_t(a.seq->seq[a.i+0]) == A_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == U_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == U_BASE &&
		base_t(a.seq->seq[a.i+6]) == A_BASE &&
		base_t(a.seq->seq[a.i+7]) == C_BASE &&
		base_t(b.seq->seq[b.i+-1]) == G_BASE &&
		base_t(b.seq->seq[b.i+0]) == A_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == G_BASE &&
		base_t(b.seq->seq[b.i+5]) == U_BASE &&
		base_t(b.seq->seq[b.i+6]) == C_BASE &&
		base_t(b.seq->seq[b.i+7]) == G_BASE) {
	res ='E';
	}
	if(a.j-a.i == 3 && b.j-b.i == 1 &&
		base_t(a.seq->seq[a.i+-1]) == U_BASE &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == C_BASE &&
		base_t(a.seq->seq[a.i+3]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE) {
	res ='C';
	}
	if(a.j-a.i == 3 && b.j-b.i == 1 &&
		base_t(a.seq->seq[a.i+-1]) == U_BASE &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == C_BASE &&
		base_t(a.seq->seq[a.i+3]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE) {
	res ='C';
	}
	if(a.j-a.i == 3 && b.j-b.i == 1 &&
		base_t(a.seq->seq[a.i+-1]) == C_BASE &&
		base_t(a.seq->seq[a.i+0]) == C_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE) {
	res ='C';
	}
	if(a.j-a.i == 3 && b.j-b.i == 1 &&
		base_t(a.seq->seq[a.i+-1]) == A_BASE &&
		base_t(a.seq->seq[a.i+0]) == C_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == U_BASE &&
		base_t(b.seq->seq[b.i+0]) == A_BASE &&
		base_t(b.seq->seq[b.i+1]) == U_BASE) {
	res ='C';
	}
	if(a.j-a.i == 4 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == A_BASE &&
		base_t(b.seq->seq[b.i+5]) == C_BASE) {
	res ='K';
	}
	if(a.j-a.i == 4 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+0]) == C_BASE &&
		base_t(a.seq->seq[a.i+1]) == C_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == U_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == C_BASE &&
		base_t(b.seq->seq[b.i+5]) == G_BASE) {
	res ='K';
	}
	if(a.j-a.i == 5 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+-1]) == G_BASE &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == U_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == G_BASE &&
		base_t(b.seq->seq[b.i+0]) == C_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == G_BASE &&
		base_t(b.seq->seq[b.i+4]) == A_BASE &&
		base_t(b.seq->seq[b.i+5]) == C_BASE) {
	res ='S';
	}
	if(a.j-a.i == 5 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+-1]) == G_BASE &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == U_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == G_BASE &&
		base_t(b.seq->seq[b.i+0]) == C_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == G_BASE &&
		base_t(b.seq->seq[b.i+4]) == A_BASE &&
		base_t(b.seq->seq[b.i+5]) == C_BASE) {
	res ='S';
	}
	if(a.j-a.i == 5 && b.j-b.i == 3 &&
		base_t(a.seq->seq[a.i+-1]) == C_BASE &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == G_BASE &&
		base_t(b.seq->seq[b.i+0]) == C_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == G_BASE) {
	res ='K';
	}
	if(a.j-a.i == 5 && b.j-b.i == 4 &&
		base_t(a.seq->seq[a.i+-1]) == C_BASE &&
		base_t(a.seq->seq[a.i+0]) == A_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == U_BASE &&
		base_t(a.seq->seq[a.i+5]) == G_BASE &&
		base_t(b.seq->seq[b.i+0]) == U_BASE &&
		base_t(b.seq->seq[b.i+1]) == U_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == G_BASE) {
	res ='K';
	}
	if(a.j-a.i == 5 && b.j-b.i == 4 &&
		base_t(a.seq->seq[a.i+-1]) == G_BASE &&
		base_t(a.seq->seq[a.i+0]) == C_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == U_BASE &&
		base_t(a.seq->seq[a.i+5]) == G_BASE &&
		base_t(b.seq->seq[b.i+0]) == C_BASE &&
		base_t(b.seq->seq[b.i+1]) == U_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == C_BASE) {
	res ='K';
	}
	if(a.j-a.i == 5 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+-1]) == G_BASE &&
		base_t(a.seq->seq[a.i+0]) == A_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == U_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == U_BASE &&
		base_t(b.seq->seq[b.i+4]) == G_BASE &&
		base_t(b.seq->seq[b.i+5]) == C_BASE) {
	res ='S';
	}
	if(a.j-a.i == 5 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+-1]) == G_BASE &&
		base_t(a.seq->seq[a.i+0]) == A_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == U_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == A_BASE &&
		base_t(b.seq->seq[b.i+-1]) == U_BASE &&
		base_t(b.seq->seq[b.i+0]) == A_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == U_BASE &&
		base_t(b.seq->seq[b.i+4]) == A_BASE &&
		base_t(b.seq->seq[b.i+5]) == U_BASE) {
	res ='S';
	}
	if(a.j-a.i == 5 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+-1]) == G_BASE &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == U_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == U_BASE &&
		base_t(b.seq->seq[b.i+4]) == A_BASE &&
		base_t(b.seq->seq[b.i+5]) == C_BASE) {
	res ='S';
	}
	if(a.j-a.i == 4 && b.j-b.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(b.seq->seq[b.i+-1]) == U_BASE &&
		base_t(b.seq->seq[b.i+0]) == A_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == U_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == G_BASE) {
	res ='S';
	}
	if(a.j-a.i == 4 && b.j-b.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == C_BASE &&
		base_t(a.seq->seq[a.i+4]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == U_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == C_BASE) {
	res ='S';
	}
	if(a.j-a.i == 6 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+-1]) == G_BASE &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == U_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == U_BASE &&
		base_t(a.seq->seq[a.i+6]) == G_BASE &&
		base_t(b.seq->seq[b.i+0]) == U_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == A_BASE &&
		base_t(b.seq->seq[b.i+5]) == C_BASE) {
	res ='S';
	}
	if(a.j-a.i == 6 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+-1]) == G_BASE &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == U_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == C_BASE &&
		base_t(a.seq->seq[a.i+6]) == G_BASE &&
		base_t(b.seq->seq[b.i+0]) == U_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == A_BASE &&
		base_t(b.seq->seq[b.i+5]) == C_BASE) {
	res ='S';
	}
	if(a.j-a.i == 6 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+-1]) == G_BASE &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == U_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == C_BASE &&
		base_t(a.seq->seq[a.i+6]) == G_BASE &&
		base_t(b.seq->seq[b.i+0]) == U_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == A_BASE &&
		base_t(b.seq->seq[b.i+5]) == C_BASE) {
	res ='S';
	}
	if(a.j-a.i == 7 && b.j-b.i == 7 &&
		base_t(a.seq->seq[a.i+-1]) == G_BASE &&
		base_t(a.seq->seq[a.i+0]) == A_BASE &&
		base_t(a.seq->seq[a.i+1]) == U_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == G_BASE &&
		base_t(a.seq->seq[a.i+5]) == U_BASE &&
		base_t(a.seq->seq[a.i+6]) == A_BASE &&
		base_t(a.seq->seq[a.i+7]) == G_BASE &&
		base_t(b.seq->seq[b.i+0]) == U_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == A_BASE &&
		base_t(b.seq->seq[b.i+5]) == G_BASE &&
		base_t(b.seq->seq[b.i+6]) == G_BASE &&
		base_t(b.seq->seq[b.i+7]) == C_BASE) {
	res ='S';
	}
	if(a.j-a.i == 3 && b.j-b.i == 3 &&
		base_t(a.seq->seq[a.i+-1]) == U_BASE &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == U_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == G_BASE) {
	res ='S';
	}
	if(a.j-a.i == 3 && b.j-b.i == 3 &&
		base_t(a.seq->seq[a.i+-1]) == G_BASE &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == U_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == A_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == C_BASE) {
	res ='S';
	}
	if(a.j-a.i == 4 && b.j-b.i == 2 &&
		base_t(a.seq->seq[a.i+-1]) == C_BASE &&
		base_t(a.seq->seq[a.i+0]) == C_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == U_BASE &&
		base_t(a.seq->seq[a.i+4]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE) {
	res ='C';
	}
	if(a.j-a.i == 4 && b.j-b.i == 2 &&
		base_t(a.seq->seq[a.i+-1]) == G_BASE &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == U_BASE &&
		base_t(a.seq->seq[a.i+4]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == U_BASE &&
		base_t(b.seq->seq[b.i+2]) == C_BASE) {
	res ='C';
	}
	if(a.j-a.i == 5 && b.j-b.i == 6 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == U_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == C_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == U_BASE &&
		base_t(b.seq->seq[b.i+5]) == A_BASE &&
		base_t(b.seq->seq[b.i+6]) == C_BASE) {
	res ='K';
	}
	if(a.j-a.i == 4 && b.j-b.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == A_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == G_BASE) {
	res ='K';
	}
	if(a.j-a.i == 4 && b.j-b.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == U_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == G_BASE) {
	res ='K';
	}
	if(a.j-a.i == 6 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+-1]) == C_BASE &&
		base_t(a.seq->seq[a.i+0]) == A_BASE &&
		base_t(a.seq->seq[a.i+1]) == U_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE &&
		base_t(a.seq->seq[a.i+4]) == U_BASE &&
		base_t(a.seq->seq[a.i+5]) == A_BASE &&
		base_t(a.seq->seq[a.i+6]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == G_BASE &&
		base_t(b.seq->seq[b.i+5]) == G_BASE) {
	res ='S';
	}
	if(a.j-a.i == 6 && b.j-b.i == 2 &&
		base_t(a.seq->seq[a.i+-1]) == C_BASE &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == C_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == U_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == A_BASE &&
		base_t(a.seq->seq[a.i+6]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == C_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE) {
	res ='V';
	}
	if(a.j-a.i == 6 && b.j-b.i == 9 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE &&
		base_t(a.seq->seq[a.i+4]) == U_BASE &&
		base_t(a.seq->seq[a.i+5]) == A_BASE &&
		base_t(a.seq->seq[a.i+6]) == A_BASE &&
		base_t(b.seq->seq[b.i+-1]) == U_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == G_BASE &&
		base_t(b.seq->seq[b.i+4]) == C_BASE &&
		base_t(b.seq->seq[b.i+5]) == A_BASE &&
		base_t(b.seq->seq[b.i+6]) == A_BASE &&
		base_t(b.seq->seq[b.i+7]) == C_BASE &&
		base_t(b.seq->seq[b.i+8]) == G_BASE &&
		base_t(b.seq->seq[b.i+9]) == C_BASE) {
	res ='S';
	}
	if(a.j-a.i == 7 && b.j-b.i == 7 &&
		base_t(a.seq->seq[a.i+-1]) == G_BASE &&
		base_t(a.seq->seq[a.i+0]) == A_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == G_BASE &&
		base_t(a.seq->seq[a.i+5]) == U_BASE &&
		base_t(a.seq->seq[a.i+6]) == A_BASE &&
		base_t(a.seq->seq[a.i+7]) == U_BASE &&
		base_t(b.seq->seq[b.i+-1]) == A_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == G_BASE &&
		base_t(b.seq->seq[b.i+4]) == G_BASE &&
		base_t(b.seq->seq[b.i+5]) == C_BASE &&
		base_t(b.seq->seq[b.i+6]) == A_BASE &&
		base_t(b.seq->seq[b.i+7]) == C_BASE) {
	res ='S';
	}
	if(a.j-a.i == 7 && b.j-b.i == 7 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == C_BASE &&
		base_t(a.seq->seq[a.i+6]) == U_BASE &&
		base_t(a.seq->seq[a.i+7]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == U_BASE &&
		base_t(b.seq->seq[b.i+1]) == U_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == G_BASE &&
		base_t(b.seq->seq[b.i+4]) == U_BASE &&
		base_t(b.seq->seq[b.i+5]) == A_BASE &&
		base_t(b.seq->seq[b.i+6]) == C_BASE &&
		base_t(b.seq->seq[b.i+7]) == C_BASE) {
	res ='S';
	}
	if(a.j-a.i == 6 && b.j-b.i == 6 &&
		base_t(a.seq->seq[a.i+0]) == C_BASE &&
		base_t(a.seq->seq[a.i+1]) == C_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == C_BASE &&
		base_t(a.seq->seq[a.i+5]) == C_BASE &&
		base_t(a.seq->seq[a.i+6]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == C_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == U_BASE &&
		base_t(b.seq->seq[b.i+4]) == A_BASE &&
		base_t(b.seq->seq[b.i+5]) == C_BASE &&
		base_t(b.seq->seq[b.i+6]) == G_BASE) {
	res ='S';
	}
	if(a.j-a.i == 4 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == U_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == U_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == G_BASE &&
		base_t(b.seq->seq[b.i+5]) == A_BASE) {
	res ='K';
	}
	if(a.j-a.i == 5 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+-1]) == U_BASE &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == U_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == U_BASE &&
		base_t(b.seq->seq[b.i+5]) == A_BASE) {
	res ='S';
	}
	if(a.j-a.i == 5 && b.j-b.i == 4 &&
		base_t(a.seq->seq[a.i+-1]) == C_BASE &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == C_BASE &&
		base_t(a.seq->seq[a.i+5]) == G_BASE &&
		base_t(b.seq->seq[b.i+0]) == C_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == C_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == G_BASE) {
	res ='K';
	}
	if(a.j-a.i == 5 && b.j-b.i == 4 &&
		base_t(a.seq->seq[a.i+-1]) == C_BASE &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == U_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == U_BASE &&
		base_t(a.seq->seq[a.i+5]) == U_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == U_BASE &&
		base_t(b.seq->seq[b.i+2]) == C_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == G_BASE) {
	res ='K';
	}
	if(a.j-a.i == 5 && b.j-b.i == 4 &&
		base_t(a.seq->seq[a.i+-1]) == C_BASE &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == A_BASE &&
		base_t(b.seq->seq[b.i+0]) == U_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == G_BASE) {
	res ='K';
	}
	if(a.j-a.i == 5 && b.j-b.i == 4 &&
		base_t(a.seq->seq[a.i+-1]) == C_BASE &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == U_BASE &&
		base_t(a.seq->seq[a.i+5]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == G_BASE) {
	res ='K';
	}
	if(a.j-a.i == 5 && b.j-b.i == 4 &&
		base_t(a.seq->seq[a.i+-1]) == C_BASE &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == U_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == U_BASE &&
		base_t(a.seq->seq[a.i+5]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == G_BASE) {
	res ='K';
	}
	if(a.j-a.i == 5 && b.j-b.i == 4 &&
		base_t(a.seq->seq[a.i+-1]) == C_BASE &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == U_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == G_BASE &&
		base_t(b.seq->seq[b.i+0]) == U_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == G_BASE) {
	res ='K';
	}
	if(a.j-a.i == 5 && b.j-b.i == 4 &&
		base_t(a.seq->seq[a.i+-1]) == U_BASE &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == U_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == C_BASE &&
		base_t(a.seq->seq[a.i+5]) == G_BASE &&
		base_t(b.seq->seq[b.i+0]) == C_BASE &&
		base_t(b.seq->seq[b.i+1]) == C_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == G_BASE) {
	res ='K';
	}
	if(a.j-a.i == 5 && b.j-b.i == 4 &&
		base_t(a.seq->seq[a.i+-1]) == C_BASE &&
		base_t(a.seq->seq[a.i+0]) == A_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == U_BASE &&
		base_t(a.seq->seq[a.i+5]) == G_BASE &&
		base_t(b.seq->seq[b.i+0]) == C_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == G_BASE) {
	res ='K';
	}
	if(a.j-a.i == 5 && b.j-b.i == 4 &&
		base_t(a.seq->seq[a.i+-1]) == C_BASE &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == G_BASE &&
		base_t(b.seq->seq[b.i+0]) == U_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == G_BASE) {
	res ='K';
	}
	if(a.j-a.i == 5 && b.j-b.i == 4 &&
		base_t(a.seq->seq[a.i+-1]) == C_BASE &&
		base_t(a.seq->seq[a.i+0]) == A_BASE &&
		base_t(a.seq->seq[a.i+1]) == U_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == U_BASE &&
		base_t(a.seq->seq[a.i+5]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == G_BASE) {
	res ='K';
	}
	if(a.j-a.i == 5 && b.j-b.i == 4 &&
		base_t(a.seq->seq[a.i+-1]) == C_BASE &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == U_BASE &&
		base_t(a.seq->seq[a.i+5]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == U_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == G_BASE) {
	res ='K';
	}
	if(a.j-a.i == 5 && b.j-b.i == 4 &&
		base_t(a.seq->seq[a.i+-1]) == C_BASE &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == U_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == C_BASE &&
		base_t(a.seq->seq[a.i+5]) == U_BASE &&
		base_t(b.seq->seq[b.i+0]) == A_BASE &&
		base_t(b.seq->seq[b.i+1]) == C_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == G_BASE) {
	res ='K';
	}
	if(a.j-a.i == 5 && b.j-b.i == 4 &&
		base_t(a.seq->seq[a.i+-1]) == C_BASE &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == G_BASE) {
	res ='K';
	}
	if(a.j-a.i == 5 && b.j-b.i == 4 &&
		base_t(a.seq->seq[a.i+-1]) == C_BASE &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == G_BASE &&
		base_t(b.seq->seq[b.i+0]) == C_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == G_BASE) {
	res ='K';
	}
	if(a.j-a.i == 5 && b.j-b.i == 4 &&
		base_t(a.seq->seq[a.i+-1]) == C_BASE &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == U_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == U_BASE &&
		base_t(a.seq->seq[a.i+5]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == G_BASE) {
	res ='K';
	}
	if(a.j-a.i == 5 && b.j-b.i == 4 &&
		base_t(a.seq->seq[a.i+-1]) == C_BASE &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == G_BASE &&
		base_t(b.seq->seq[b.i+0]) == U_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == G_BASE) {
	res ='K';
	}
	if(a.j-a.i == 5 && b.j-b.i == 4 &&
		base_t(a.seq->seq[a.i+-1]) == C_BASE &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == U_BASE &&
		base_t(a.seq->seq[a.i+5]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == U_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == G_BASE) {
	res ='K';
	}
	if(a.j-a.i == 5 && b.j-b.i == 4 &&
		base_t(a.seq->seq[a.i+-1]) == U_BASE &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == U_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == C_BASE &&
		base_t(a.seq->seq[a.i+5]) == G_BASE &&
		base_t(b.seq->seq[b.i+0]) == U_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == C_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == A_BASE) {
	res ='K';
	}
	if(a.j-a.i == 5 && b.j-b.i == 4 &&
		base_t(a.seq->seq[a.i+-1]) == U_BASE &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == C_BASE &&
		base_t(a.seq->seq[a.i+5]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == C_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == G_BASE) {
	res ='K';
	}
	if(a.j-a.i == 5 && b.j-b.i == 4 &&
		base_t(a.seq->seq[a.i+-1]) == C_BASE &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == G_BASE &&
		base_t(b.seq->seq[b.i+0]) == U_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == G_BASE) {
	res ='K';
	}
	if(a.j-a.i == 5 && b.j-b.i == 4 &&
		base_t(a.seq->seq[a.i+-1]) == C_BASE &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == G_BASE) {
	res ='K';
	}
	if(a.j-a.i == 5 && b.j-b.i == 4 &&
		base_t(a.seq->seq[a.i+-1]) == C_BASE &&
		base_t(a.seq->seq[a.i+0]) == A_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == C_BASE &&
		base_t(a.seq->seq[a.i+5]) == G_BASE &&
		base_t(b.seq->seq[b.i+0]) == U_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == C_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == G_BASE) {
	res ='K';
	}
	if(a.j-a.i == 5 && b.j-b.i == 4 &&
		base_t(a.seq->seq[a.i+-1]) == G_BASE &&
		base_t(a.seq->seq[a.i+0]) == A_BASE &&
		base_t(a.seq->seq[a.i+1]) == U_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == G_BASE &&
		base_t(b.seq->seq[b.i+0]) == U_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == C_BASE) {
	res ='K';
	}
	if(a.j-a.i == 5 && b.j-b.i == 4 &&
		base_t(a.seq->seq[a.i+-1]) == A_BASE &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == U_BASE &&
		base_t(a.seq->seq[a.i+5]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == U_BASE) {
	res ='K';
	}
	if(a.j-a.i == 5 && b.j-b.i == 4 &&
		base_t(a.seq->seq[a.i+-1]) == U_BASE &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == G_BASE &&
		base_t(b.seq->seq[b.i+0]) == U_BASE &&
		base_t(b.seq->seq[b.i+1]) == C_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == A_BASE) {
	res ='K';
	}
	if(a.j-a.i == 1 && b.j-b.i == 3 &&
		base_t(a.seq->seq[a.i+0]) == A_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+-1]) == U_BASE &&
		base_t(b.seq->seq[b.i+0]) == C_BASE &&
		base_t(b.seq->seq[b.i+1]) == C_BASE &&
		base_t(b.seq->seq[b.i+2]) == C_BASE &&
		base_t(b.seq->seq[b.i+3]) == U_BASE) {
	res ='C';
	}
	if(a.j-a.i == 1 && b.j-b.i == 3 &&
		base_t(a.seq->seq[a.i+0]) == A_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == C_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == C_BASE &&
		base_t(b.seq->seq[b.i+3]) == U_BASE) {
	res ='C';
	}
	if(a.j-a.i == 1 && b.j-b.i == 3 &&
		base_t(a.seq->seq[a.i+0]) == A_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == C_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == C_BASE &&
		base_t(b.seq->seq[b.i+3]) == U_BASE) {
	res ='C';
	}
	if(a.j-a.i == 1 && b.j-b.i == 3 &&
		base_t(a.seq->seq[a.i+0]) == C_BASE &&
		base_t(a.seq->seq[a.i+1]) == C_BASE &&
		base_t(b.seq->seq[b.i+-1]) == G_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == G_BASE) {
	res ='C';
	}
	if(a.j-a.i == 1 && b.j-b.i == 3 &&
		base_t(a.seq->seq[a.i+0]) == A_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+-1]) == U_BASE &&
		base_t(b.seq->seq[b.i+0]) == C_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == C_BASE &&
		base_t(b.seq->seq[b.i+3]) == U_BASE) {
	res ='C';
	}
	if(a.j-a.i == 1 && b.j-b.i == 3 &&
		base_t(a.seq->seq[a.i+0]) == A_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == C_BASE &&
		base_t(b.seq->seq[b.i+1]) == U_BASE &&
		base_t(b.seq->seq[b.i+2]) == C_BASE &&
		base_t(b.seq->seq[b.i+3]) == U_BASE) {
	res ='C';
	}
	if(a.j-a.i == 1 && b.j-b.i == 3 &&
		base_t(a.seq->seq[a.i+0]) == A_BASE &&
		base_t(a.seq->seq[a.i+1]) == C_BASE &&
		base_t(b.seq->seq[b.i+-1]) == G_BASE &&
		base_t(b.seq->seq[b.i+0]) == C_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == U_BASE) {
	res ='C';
	}
	if(a.j-a.i == 1 && b.j-b.i == 3 &&
		base_t(a.seq->seq[a.i+0]) == A_BASE &&
		base_t(a.seq->seq[a.i+1]) == C_BASE &&
		base_t(b.seq->seq[b.i+-1]) == G_BASE &&
		base_t(b.seq->seq[b.i+0]) == C_BASE &&
		base_t(b.seq->seq[b.i+1]) == U_BASE &&
		base_t(b.seq->seq[b.i+2]) == C_BASE &&
		base_t(b.seq->seq[b.i+3]) == U_BASE) {
	res ='C';
	}
	if(a.j-a.i == 1 && b.j-b.i == 3 &&
		base_t(a.seq->seq[a.i+0]) == A_BASE &&
		base_t(a.seq->seq[a.i+1]) == C_BASE &&
		base_t(b.seq->seq[b.i+-1]) == G_BASE &&
		base_t(b.seq->seq[b.i+0]) == C_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == C_BASE &&
		base_t(b.seq->seq[b.i+3]) == U_BASE) {
	res ='C';
	}
	if(a.j-a.i == 6 && b.j-b.i == 6 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == C_BASE &&
		base_t(a.seq->seq[a.i+5]) == A_BASE &&
		base_t(a.seq->seq[a.i+6]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == U_BASE &&
		base_t(b.seq->seq[b.i+1]) == U_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == G_BASE &&
		base_t(b.seq->seq[b.i+4]) == U_BASE &&
		base_t(b.seq->seq[b.i+5]) == A_BASE &&
		base_t(b.seq->seq[b.i+6]) == C_BASE) {
	res ='S';
	}
	if(a.j-a.i == 6 && b.j-b.i == 6 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == U_BASE &&
		base_t(a.seq->seq[a.i+6]) == U_BASE &&
		base_t(b.seq->seq[b.i+-1]) == A_BASE &&
		base_t(b.seq->seq[b.i+0]) == U_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == G_BASE &&
		base_t(b.seq->seq[b.i+4]) == U_BASE &&
		base_t(b.seq->seq[b.i+5]) == A_BASE &&
		base_t(b.seq->seq[b.i+6]) == A_BASE) {
	res ='S';
	}
	if(a.j-a.i == 6 && b.j-b.i == 6 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == U_BASE &&
		base_t(a.seq->seq[a.i+6]) == U_BASE &&
		base_t(b.seq->seq[b.i+-1]) == A_BASE &&
		base_t(b.seq->seq[b.i+0]) == U_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == G_BASE &&
		base_t(b.seq->seq[b.i+4]) == U_BASE &&
		base_t(b.seq->seq[b.i+5]) == A_BASE &&
		base_t(b.seq->seq[b.i+6]) == A_BASE) {
	res ='S';
	}
	if(a.j-a.i == 6 && b.j-b.i == 6 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == C_BASE &&
		base_t(a.seq->seq[a.i+5]) == U_BASE &&
		base_t(a.seq->seq[a.i+6]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == U_BASE &&
		base_t(b.seq->seq[b.i+1]) == C_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == G_BASE &&
		base_t(b.seq->seq[b.i+4]) == U_BASE &&
		base_t(b.seq->seq[b.i+5]) == A_BASE &&
		base_t(b.seq->seq[b.i+6]) == C_BASE) {
	res ='S';
	}
	if(a.j-a.i == 6 && b.j-b.i == 6 &&
		base_t(a.seq->seq[a.i+0]) == C_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == C_BASE &&
		base_t(a.seq->seq[a.i+6]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == U_BASE &&
		base_t(b.seq->seq[b.i+1]) == U_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == G_BASE &&
		base_t(b.seq->seq[b.i+4]) == U_BASE &&
		base_t(b.seq->seq[b.i+5]) == A_BASE &&
		base_t(b.seq->seq[b.i+6]) == G_BASE) {
	res ='S';
	}
	if(a.j-a.i == 6 && b.j-b.i == 6 &&
		base_t(a.seq->seq[a.i+0]) == C_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == C_BASE &&
		base_t(a.seq->seq[a.i+5]) == C_BASE &&
		base_t(a.seq->seq[a.i+6]) == C_BASE &&
		base_t(b.seq->seq[b.i+-1]) == G_BASE &&
		base_t(b.seq->seq[b.i+0]) == U_BASE &&
		base_t(b.seq->seq[b.i+1]) == U_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == G_BASE &&
		base_t(b.seq->seq[b.i+4]) == U_BASE &&
		base_t(b.seq->seq[b.i+5]) == A_BASE &&
		base_t(b.seq->seq[b.i+6]) == G_BASE) {
	res ='S';
	}
	if(a.j-a.i == 6 && b.j-b.i == 6 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == U_BASE &&
		base_t(a.seq->seq[a.i+6]) == C_BASE &&
		base_t(b.seq->seq[b.i+-1]) == G_BASE &&
		base_t(b.seq->seq[b.i+0]) == U_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == G_BASE &&
		base_t(b.seq->seq[b.i+4]) == U_BASE &&
		base_t(b.seq->seq[b.i+5]) == A_BASE &&
		base_t(b.seq->seq[b.i+6]) == G_BASE) {
	res ='S';
	}
	if(a.j-a.i == 6 && b.j-b.i == 6 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == C_BASE &&
		base_t(a.seq->seq[a.i+5]) == C_BASE &&
		base_t(a.seq->seq[a.i+6]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == U_BASE &&
		base_t(b.seq->seq[b.i+1]) == C_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == G_BASE &&
		base_t(b.seq->seq[b.i+4]) == U_BASE &&
		base_t(b.seq->seq[b.i+5]) == A_BASE &&
		base_t(b.seq->seq[b.i+6]) == C_BASE) {
	res ='S';
	}
	if(a.j-a.i == 6 && b.j-b.i == 6 &&
		base_t(a.seq->seq[a.i+0]) == C_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == C_BASE &&
		base_t(a.seq->seq[a.i+6]) == U_BASE &&
		base_t(b.seq->seq[b.i+-1]) == A_BASE &&
		base_t(b.seq->seq[b.i+0]) == C_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == G_BASE &&
		base_t(b.seq->seq[b.i+4]) == U_BASE &&
		base_t(b.seq->seq[b.i+5]) == A_BASE &&
		base_t(b.seq->seq[b.i+6]) == G_BASE) {
	res ='S';
	}
	if(a.j-a.i == 6 && b.j-b.i == 6 &&
		base_t(a.seq->seq[a.i+0]) == A_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == C_BASE &&
		base_t(a.seq->seq[a.i+5]) == U_BASE &&
		base_t(a.seq->seq[a.i+6]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == U_BASE &&
		base_t(b.seq->seq[b.i+1]) == C_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == G_BASE &&
		base_t(b.seq->seq[b.i+4]) == U_BASE &&
		base_t(b.seq->seq[b.i+5]) == A_BASE &&
		base_t(b.seq->seq[b.i+6]) == U_BASE) {
	res ='S';
	}
	if(a.j-a.i == 6 && b.j-b.i == 6 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == C_BASE &&
		base_t(a.seq->seq[a.i+5]) == U_BASE &&
		base_t(a.seq->seq[a.i+6]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == U_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == G_BASE &&
		base_t(b.seq->seq[b.i+4]) == U_BASE &&
		base_t(b.seq->seq[b.i+5]) == A_BASE &&
		base_t(b.seq->seq[b.i+6]) == C_BASE) {
	res ='S';
	}
	if(a.j-a.i == 6 && b.j-b.i == 6 &&
		base_t(a.seq->seq[a.i+0]) == A_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == C_BASE &&
		base_t(a.seq->seq[a.i+5]) == C_BASE &&
		base_t(a.seq->seq[a.i+6]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == U_BASE &&
		base_t(b.seq->seq[b.i+1]) == C_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == G_BASE &&
		base_t(b.seq->seq[b.i+4]) == U_BASE &&
		base_t(b.seq->seq[b.i+5]) == A_BASE &&
		base_t(b.seq->seq[b.i+6]) == U_BASE) {
	res ='S';
	}
	if(a.j-a.i == 5 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == U_BASE &&
		base_t(b.seq->seq[b.i+-1]) == G_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == U_BASE &&
		base_t(b.seq->seq[b.i+4]) == A_BASE &&
		base_t(b.seq->seq[b.i+5]) == C_BASE) {
	res ='S';
	}
	if(a.j-a.i == 5 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == C_BASE &&
		base_t(a.seq->seq[a.i+5]) == U_BASE &&
		base_t(b.seq->seq[b.i+-1]) == A_BASE &&
		base_t(b.seq->seq[b.i+0]) == U_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == U_BASE &&
		base_t(b.seq->seq[b.i+4]) == A_BASE &&
		base_t(b.seq->seq[b.i+5]) == C_BASE) {
	res ='S';
	}
	if(a.j-a.i == 5 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == C_BASE &&
		base_t(a.seq->seq[a.i+5]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == U_BASE &&
		base_t(b.seq->seq[b.i+0]) == U_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == U_BASE &&
		base_t(b.seq->seq[b.i+4]) == A_BASE &&
		base_t(b.seq->seq[b.i+5]) == A_BASE) {
	res ='S';
	}
	if(a.j-a.i == 5 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == C_BASE &&
		base_t(a.seq->seq[a.i+4]) == C_BASE &&
		base_t(a.seq->seq[a.i+5]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == U_BASE &&
		base_t(b.seq->seq[b.i+0]) == U_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == U_BASE &&
		base_t(b.seq->seq[b.i+4]) == A_BASE &&
		base_t(b.seq->seq[b.i+5]) == C_BASE) {
	res ='S';
	}
	if(a.j-a.i == 5 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+0]) == C_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == C_BASE &&
		base_t(b.seq->seq[b.i+-1]) == G_BASE &&
		base_t(b.seq->seq[b.i+0]) == U_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == U_BASE &&
		base_t(b.seq->seq[b.i+4]) == A_BASE &&
		base_t(b.seq->seq[b.i+5]) == G_BASE) {
	res ='S';
	}
	if(a.j-a.i == 5 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == C_BASE &&
		base_t(a.seq->seq[a.i+4]) == C_BASE &&
		base_t(a.seq->seq[a.i+5]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == U_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == U_BASE &&
		base_t(b.seq->seq[b.i+4]) == A_BASE &&
		base_t(b.seq->seq[b.i+5]) == C_BASE) {
	res ='S';
	}
	if(a.j-a.i == 5 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == C_BASE &&
		base_t(a.seq->seq[a.i+4]) == C_BASE &&
		base_t(a.seq->seq[a.i+5]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == C_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == U_BASE &&
		base_t(b.seq->seq[b.i+4]) == A_BASE &&
		base_t(b.seq->seq[b.i+5]) == A_BASE) {
	res ='S';
	}
	if(a.j-a.i == 5 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+0]) == C_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == U_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == U_BASE &&
		base_t(b.seq->seq[b.i+4]) == A_BASE &&
		base_t(b.seq->seq[b.i+5]) == G_BASE) {
	res ='S';
	}
	if(a.j-a.i == 5 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == C_BASE &&
		base_t(a.seq->seq[a.i+5]) == U_BASE &&
		base_t(b.seq->seq[b.i+-1]) == A_BASE &&
		base_t(b.seq->seq[b.i+0]) == U_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == U_BASE &&
		base_t(b.seq->seq[b.i+4]) == A_BASE &&
		base_t(b.seq->seq[b.i+5]) == G_BASE) {
	res ='S';
	}
	if(a.j-a.i == 5 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+0]) == C_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == C_BASE &&
		base_t(a.seq->seq[a.i+5]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == C_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == U_BASE &&
		base_t(b.seq->seq[b.i+4]) == A_BASE &&
		base_t(b.seq->seq[b.i+5]) == G_BASE) {
	res ='S';
	}
	if(a.j-a.i == 5 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+0]) == A_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == A_BASE &&
		base_t(b.seq->seq[b.i+-1]) == U_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == U_BASE &&
		base_t(b.seq->seq[b.i+4]) == A_BASE &&
		base_t(b.seq->seq[b.i+5]) == U_BASE) {
	res ='S';
	}
	if(a.j-a.i == 3 && b.j-b.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == C_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == A_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == G_BASE) {
	res ='K';
	}
	if(a.j-a.i == 3 && b.j-b.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == A_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == G_BASE) {
	res ='K';
	}
	if(a.j-a.i == 3 && b.j-b.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == C_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == G_BASE) {
	res ='K';
	}
	if(a.j-a.i == 7 && b.j-b.i == 7 &&
		base_t(a.seq->seq[a.i+-1]) == C_BASE &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == G_BASE &&
		base_t(a.seq->seq[a.i+5]) == U_BASE &&
		base_t(a.seq->seq[a.i+6]) == A_BASE &&
		base_t(a.seq->seq[a.i+7]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == U_BASE &&
		base_t(b.seq->seq[b.i+3]) == G_BASE &&
		base_t(b.seq->seq[b.i+4]) == G_BASE &&
		base_t(b.seq->seq[b.i+5]) == U_BASE &&
		base_t(b.seq->seq[b.i+6]) == A_BASE &&
		base_t(b.seq->seq[b.i+7]) == G_BASE) {
	res ='E';
	}
	if(a.j-a.i == 7 && b.j-b.i == 7 &&
		base_t(a.seq->seq[a.i+-1]) == G_BASE &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == G_BASE &&
		base_t(a.seq->seq[a.i+5]) == U_BASE &&
		base_t(a.seq->seq[a.i+6]) == A_BASE &&
		base_t(a.seq->seq[a.i+7]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == U_BASE &&
		base_t(b.seq->seq[b.i+3]) == G_BASE &&
		base_t(b.seq->seq[b.i+4]) == G_BASE &&
		base_t(b.seq->seq[b.i+5]) == U_BASE &&
		base_t(b.seq->seq[b.i+6]) == A_BASE &&
		base_t(b.seq->seq[b.i+7]) == C_BASE) {
	res ='E';
	}
	if(a.j-a.i == 7 && b.j-b.i == 7 &&
		base_t(a.seq->seq[a.i+-1]) == C_BASE &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == U_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE &&
		base_t(a.seq->seq[a.i+4]) == G_BASE &&
		base_t(a.seq->seq[a.i+5]) == U_BASE &&
		base_t(a.seq->seq[a.i+6]) == A_BASE &&
		base_t(a.seq->seq[a.i+7]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == G_BASE &&
		base_t(b.seq->seq[b.i+5]) == U_BASE &&
		base_t(b.seq->seq[b.i+6]) == A_BASE &&
		base_t(b.seq->seq[b.i+7]) == G_BASE) {
	res ='E';
	}
	if(a.j-a.i == 7 && b.j-b.i == 7 &&
		base_t(a.seq->seq[a.i+-1]) == G_BASE &&
		base_t(a.seq->seq[a.i+0]) == A_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == G_BASE &&
		base_t(a.seq->seq[a.i+5]) == U_BASE &&
		base_t(a.seq->seq[a.i+6]) == C_BASE &&
		base_t(a.seq->seq[a.i+7]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == A_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == U_BASE &&
		base_t(b.seq->seq[b.i+3]) == G_BASE &&
		base_t(b.seq->seq[b.i+4]) == A_BASE &&
		base_t(b.seq->seq[b.i+5]) == U_BASE &&
		base_t(b.seq->seq[b.i+6]) == A_BASE &&
		base_t(b.seq->seq[b.i+7]) == C_BASE) {
	res ='E';
	}
	if(a.j-a.i == 1 && b.j-b.i == 3 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == U_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == C_BASE &&
		base_t(b.seq->seq[b.i+3]) == C_BASE) {
	res ='C';
	}
	if(a.j-a.i == 1 && b.j-b.i == 3 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == U_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == C_BASE &&
		base_t(b.seq->seq[b.i+3]) == C_BASE) {
	res ='C';
	}
	if(a.j-a.i == 1 && b.j-b.i == 3 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == C_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == C_BASE) {
	res ='C';
	}
	if(a.j-a.i == 1 && b.j-b.i == 3 &&
		base_t(a.seq->seq[a.i+0]) == A_BASE &&
		base_t(a.seq->seq[a.i+1]) == U_BASE &&
		base_t(b.seq->seq[b.i+-1]) == A_BASE &&
		base_t(b.seq->seq[b.i+0]) == C_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == U_BASE) {
	res ='C';
	}
	if(a.j-a.i == 5 && b.j-b.i == 4 &&
		base_t(a.seq->seq[a.i+-1]) == C_BASE &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == G_BASE) {
	res ='K';
	}
	if(a.j-a.i == 5 && b.j-b.i == 4 &&
		base_t(a.seq->seq[a.i+-1]) == C_BASE &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == U_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == C_BASE &&
		base_t(a.seq->seq[a.i+5]) == G_BASE &&
		base_t(b.seq->seq[b.i+0]) == C_BASE &&
		base_t(b.seq->seq[b.i+1]) == C_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == G_BASE) {
	res ='K';
	}
	if(a.j-a.i == 5 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+0]) == C_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == C_BASE &&
		base_t(b.seq->seq[b.i+-1]) == G_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == U_BASE &&
		base_t(b.seq->seq[b.i+4]) == A_BASE &&
		base_t(b.seq->seq[b.i+5]) == G_BASE) {
	res ='S';
	}
	if(a.j-a.i == 5 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+0]) == C_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == C_BASE &&
		base_t(b.seq->seq[b.i+-1]) == G_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == U_BASE &&
		base_t(b.seq->seq[b.i+4]) == A_BASE &&
		base_t(b.seq->seq[b.i+5]) == G_BASE) {
	res ='S';
	}
	if(a.j-a.i == 3 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+0]) == C_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == A_BASE &&
		base_t(b.seq->seq[b.i+5]) == G_BASE) {
	res ='K';
	}
	if(a.j-a.i == 4 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == U_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == A_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == U_BASE &&
		base_t(b.seq->seq[b.i+5]) == G_BASE) {
	res ='K';
	}
	if(a.j-a.i == 4 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+0]) == C_BASE &&
		base_t(a.seq->seq[a.i+1]) == U_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == C_BASE &&
		base_t(b.seq->seq[b.i+-1]) == G_BASE &&
		base_t(b.seq->seq[b.i+0]) == C_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == U_BASE &&
		base_t(b.seq->seq[b.i+5]) == G_BASE) {
	res ='K';
	}
	if(a.j-a.i == 5 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+-1]) == C_BASE &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == U_BASE &&
		base_t(a.seq->seq[a.i+4]) == G_BASE &&
		base_t(a.seq->seq[a.i+5]) == C_BASE &&
		base_t(b.seq->seq[b.i+-1]) == G_BASE &&
		base_t(b.seq->seq[b.i+0]) == A_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == U_BASE &&
		base_t(b.seq->seq[b.i+4]) == A_BASE &&
		base_t(b.seq->seq[b.i+5]) == G_BASE) {
	res ='S';
	}
	if(a.j-a.i == 5 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+-1]) == U_BASE &&
		base_t(a.seq->seq[a.i+0]) == A_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == U_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == U_BASE &&
		base_t(b.seq->seq[b.i+-1]) == G_BASE &&
		base_t(b.seq->seq[b.i+0]) == A_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == U_BASE &&
		base_t(b.seq->seq[b.i+4]) == A_BASE &&
		base_t(b.seq->seq[b.i+5]) == A_BASE) {
	res ='S';
	}
	if(a.j-a.i == 5 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+-1]) == C_BASE &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == U_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == C_BASE &&
		base_t(b.seq->seq[b.i+-1]) == G_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == U_BASE &&
		base_t(b.seq->seq[b.i+4]) == A_BASE &&
		base_t(b.seq->seq[b.i+5]) == G_BASE) {
	res ='S';
	}
	if(a.j-a.i == 4 && b.j-b.i == 4 &&
		base_t(a.seq->seq[a.i+-1]) == U_BASE &&
		base_t(a.seq->seq[a.i+0]) == A_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == U_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == G_BASE &&
		base_t(b.seq->seq[b.i+0]) == U_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == A_BASE) {
	res ='S';
	}
	if(a.j-a.i == 4 && b.j-b.i == 4 &&
		base_t(a.seq->seq[a.i+-1]) == C_BASE &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == U_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == C_BASE &&
		base_t(b.seq->seq[b.i+4]) == G_BASE) {
	res ='S';
	}
	if(a.j-a.i == 5 && b.j-b.i == 6 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == C_BASE &&
		base_t(b.seq->seq[b.i+-1]) == G_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == U_BASE &&
		base_t(b.seq->seq[b.i+4]) == A_BASE &&
		base_t(b.seq->seq[b.i+5]) == U_BASE &&
		base_t(b.seq->seq[b.i+6]) == G_BASE) {
	res ='S';
	}
	if(a.j-a.i == 5 && b.j-b.i == 6 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == C_BASE &&
		base_t(b.seq->seq[b.i+-1]) == G_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == U_BASE &&
		base_t(b.seq->seq[b.i+4]) == A_BASE &&
		base_t(b.seq->seq[b.i+5]) == C_BASE &&
		base_t(b.seq->seq[b.i+6]) == G_BASE) {
	res ='S';
	}
	if(a.j-a.i == 5 && b.j-b.i == 6 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == C_BASE &&
		base_t(b.seq->seq[b.i+-1]) == G_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == U_BASE &&
		base_t(b.seq->seq[b.i+4]) == A_BASE &&
		base_t(b.seq->seq[b.i+5]) == C_BASE &&
		base_t(b.seq->seq[b.i+6]) == G_BASE) {
	res ='S';
	}
	if(a.j-a.i == 7 && b.j-b.i == 7 &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == G_BASE &&
		base_t(a.seq->seq[a.i+6]) == G_BASE &&
		base_t(a.seq->seq[a.i+7]) == C_BASE &&
		base_t(b.seq->seq[b.i+-1]) == G_BASE &&
		base_t(b.seq->seq[b.i+0]) == A_BASE &&
		base_t(b.seq->seq[b.i+1]) == U_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == G_BASE &&
		base_t(b.seq->seq[b.i+5]) == U_BASE &&
		base_t(b.seq->seq[b.i+6]) == A_BASE &&
		base_t(b.seq->seq[b.i+7]) == G_BASE) {
	res ='S';
	}
	if(a.j-a.i == 3 && b.j-b.i == 3 &&
		base_t(a.seq->seq[a.i+-1]) == C_BASE &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == U_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == U_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == G_BASE) {
	res ='S';
	}
	if(a.j-a.i == 3 && b.j-b.i == 3 &&
		base_t(a.seq->seq[a.i+-1]) == C_BASE &&
		base_t(a.seq->seq[a.i+0]) == A_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == C_BASE &&
		base_t(b.seq->seq[b.i+-1]) == G_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == U_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == G_BASE) {
	res ='S';
	}
	if(a.j-a.i == 2 && b.j-b.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == C_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == U_BASE &&
		base_t(b.seq->seq[b.i+4]) == C_BASE) {
	res ='C';
	}
	if(a.j-a.i == 2 && b.j-b.i == 4 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == U_BASE &&
		base_t(a.seq->seq[a.i+2]) == C_BASE &&
		base_t(b.seq->seq[b.i+-1]) == G_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == U_BASE &&
		base_t(b.seq->seq[b.i+4]) == C_BASE) {
	res ='C';
	}
	if(a.j-a.i == 6 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+-1]) == C_BASE &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == C_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == U_BASE &&
		base_t(a.seq->seq[a.i+5]) == A_BASE &&
		base_t(a.seq->seq[a.i+6]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == U_BASE &&
		base_t(b.seq->seq[b.i+4]) == A_BASE &&
		base_t(b.seq->seq[b.i+5]) == G_BASE) {
	res ='K';
	}
	if(a.j-a.i == 4 && b.j-b.i == 4 &&
		base_t(a.seq->seq[a.i+-1]) == C_BASE &&
		base_t(a.seq->seq[a.i+0]) == A_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == G_BASE &&
		base_t(b.seq->seq[b.i+0]) == U_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == G_BASE) {
	res ='K';
	}
	if(a.j-a.i == 4 && b.j-b.i == 4 &&
		base_t(a.seq->seq[a.i+-1]) == C_BASE &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == G_BASE &&
		base_t(b.seq->seq[b.i+0]) == U_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == G_BASE) {
	res ='K';
	}
	if(a.j-a.i == 5 && b.j-b.i == 6 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == G_BASE &&
		base_t(a.seq->seq[a.i+5]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == A_BASE &&
		base_t(b.seq->seq[b.i+1]) == U_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == G_BASE &&
		base_t(b.seq->seq[b.i+4]) == U_BASE &&
		base_t(b.seq->seq[b.i+5]) == A_BASE &&
		base_t(b.seq->seq[b.i+6]) == C_BASE) {
	res ='S';
	}
	if(a.j-a.i == 2 && b.j-b.i == 6 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == C_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+-1]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == C_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == U_BASE &&
		base_t(b.seq->seq[b.i+4]) == A_BASE &&
		base_t(b.seq->seq[b.i+5]) == A_BASE &&
		base_t(b.seq->seq[b.i+6]) == C_BASE) {
	res ='V';
	}
	if(a.j-a.i == 9 && b.j-b.i == 6 &&
		base_t(a.seq->seq[a.i+-1]) == U_BASE &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE &&
		base_t(a.seq->seq[a.i+4]) == C_BASE &&
		base_t(a.seq->seq[a.i+5]) == A_BASE &&
		base_t(a.seq->seq[a.i+6]) == A_BASE &&
		base_t(a.seq->seq[a.i+7]) == C_BASE &&
		base_t(a.seq->seq[a.i+8]) == G_BASE &&
		base_t(a.seq->seq[a.i+9]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == A_BASE &&
		base_t(b.seq->seq[b.i+3]) == G_BASE &&
		base_t(b.seq->seq[b.i+4]) == U_BASE &&
		base_t(b.seq->seq[b.i+5]) == A_BASE &&
		base_t(b.seq->seq[b.i+6]) == A_BASE) {
	res ='S';
	}
	if(a.j-a.i == 7 && b.j-b.i == 7 &&
		base_t(a.seq->seq[a.i+-1]) == A_BASE &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE &&
		base_t(a.seq->seq[a.i+4]) == G_BASE &&
		base_t(a.seq->seq[a.i+5]) == C_BASE &&
		base_t(a.seq->seq[a.i+6]) == A_BASE &&
		base_t(a.seq->seq[a.i+7]) == C_BASE &&
		base_t(b.seq->seq[b.i+-1]) == G_BASE &&
		base_t(b.seq->seq[b.i+0]) == A_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == G_BASE &&
		base_t(b.seq->seq[b.i+5]) == U_BASE &&
		base_t(b.seq->seq[b.i+6]) == A_BASE &&
		base_t(b.seq->seq[b.i+7]) == U_BASE) {
	res ='S';
	}
	if(a.j-a.i == 7 && b.j-b.i == 7 &&
		base_t(a.seq->seq[a.i+-1]) == C_BASE &&
		base_t(a.seq->seq[a.i+0]) == U_BASE &&
		base_t(a.seq->seq[a.i+1]) == U_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == G_BASE &&
		base_t(a.seq->seq[a.i+4]) == U_BASE &&
		base_t(a.seq->seq[a.i+5]) == A_BASE &&
		base_t(a.seq->seq[a.i+6]) == C_BASE &&
		base_t(a.seq->seq[a.i+7]) == C_BASE &&
		base_t(b.seq->seq[b.i+0]) == G_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == A_BASE &&
		base_t(b.seq->seq[b.i+5]) == C_BASE &&
		base_t(b.seq->seq[b.i+6]) == U_BASE &&
		base_t(b.seq->seq[b.i+7]) == G_BASE) {
	res ='S';
	}
	if(a.j-a.i == 6 && b.j-b.i == 6 &&
		base_t(a.seq->seq[a.i+-1]) == C_BASE &&
		base_t(a.seq->seq[a.i+0]) == C_BASE &&
		base_t(a.seq->seq[a.i+1]) == A_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == U_BASE &&
		base_t(a.seq->seq[a.i+4]) == A_BASE &&
		base_t(a.seq->seq[a.i+5]) == C_BASE &&
		base_t(a.seq->seq[a.i+6]) == G_BASE &&
		base_t(b.seq->seq[b.i+0]) == C_BASE &&
		base_t(b.seq->seq[b.i+1]) == C_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == C_BASE &&
		base_t(b.seq->seq[b.i+5]) == C_BASE &&
		base_t(b.seq->seq[b.i+6]) == G_BASE) {
	res ='S';
	}
	if(a.j-a.i == 5 && b.j-b.i == 4 &&
		base_t(a.seq->seq[a.i+-1]) == C_BASE &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == U_BASE &&
		base_t(a.seq->seq[a.i+2]) == G_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == G_BASE &&
		base_t(a.seq->seq[a.i+5]) == A_BASE &&
		base_t(b.seq->seq[b.i+0]) == U_BASE &&
		base_t(b.seq->seq[b.i+1]) == G_BASE &&
		base_t(b.seq->seq[b.i+2]) == U_BASE &&
		base_t(b.seq->seq[b.i+3]) == A_BASE &&
		base_t(b.seq->seq[b.i+4]) == G_BASE) {
	res ='K';
	}
	if(a.j-a.i == 5 && b.j-b.i == 5 &&
		base_t(a.seq->seq[a.i+0]) == G_BASE &&
		base_t(a.seq->seq[a.i+1]) == G_BASE &&
		base_t(a.seq->seq[a.i+2]) == A_BASE &&
		base_t(a.seq->seq[a.i+3]) == A_BASE &&
		base_t(a.seq->seq[a.i+4]) == U_BASE &&
		base_t(a.seq->seq[a.i+5]) == A_BASE &&
		base_t(b.seq->seq[b.i+-1]) == U_BASE &&
		base_t(b.seq->seq[b.i+0]) == U_BASE &&
		base_t(b.seq->seq[b.i+1]) == A_BASE &&
		base_t(b.seq->seq[b.i+2]) == G_BASE &&
		base_t(b.seq->seq[b.i+3]) == U_BASE &&
		base_t(b.seq->seq[b.i+4]) == A_BASE &&
		base_t(b.seq->seq[b.i+5]) == C_BASE) {
	res ='S';
	}

	return res;

}

#endif