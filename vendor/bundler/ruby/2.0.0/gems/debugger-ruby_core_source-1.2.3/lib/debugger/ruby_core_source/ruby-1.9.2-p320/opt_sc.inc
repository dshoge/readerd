/* -*-c-*- *********************************************************/
/*******************************************************************/
/*******************************************************************/
/**
  This file is for threaded code.

  ----
  This file is auto generated by insns2vm.rb
  DO NOT TOUCH!

  If you want to fix something, you must edit 'template/opt_sc.inc.tmpl'
  or rb/insns2vm.rb
 */

#define SC_STATE_SIZE 6

#define SCS_XX 1
#define SCS_AX 2
#define SCS_BX 3
#define SCS_AB 4
#define SCS_BA 5

#define SC_ERROR 0xffffffff

static const VALUE sc_insn_info[][SC_STATE_SIZE] = {
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR},
  {
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR,
SC_ERROR}
};

static const VALUE sc_insn_next[] = {
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX,
  SCS_XX
};
