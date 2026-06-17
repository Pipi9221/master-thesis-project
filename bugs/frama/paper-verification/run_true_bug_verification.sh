#!/usr/bin/env bash
set -u
BASE=/home/cyuan/projects/Slicing
OUT=/paper-verification-2026-03-27
LOG=/logs
RES=/results
GEN=/generated
mkdir -p   
SUMMARY=/true_bug_verification_summary.tsv
: > 
echo -e issuetresulttevidence >> 

run_compile_bug() {
  issue=; casefile=; sliceargs=; pattern=
  wdir=/issues/
  stem=
  outc=/_.sliced.c
  flog=/_.frama.log
  glog=/_.gcc.log
  (cd  && opam exec --switch=4.14.2 -- frama-c cases/  -then-on Slicing
