/**
 * \file kersel.hh
 * gemm kernel selector for skr2k.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at https://mozilla.org/MPL/2.0/.
 */
#pragma once
#include <complex>
typedef std::complex<float>  scomplex;
typedef std::complex<double> dcomplex;

// no optimized microkernel available.
static const bool mker_available = 0;
// block size
inline void set_blk_size(float    *dum, unsigned *mr, unsigned *nr) { *mr = 6; *nr = 8; }
inline void set_blk_size(double   *dum, unsigned *mr, unsigned *nr) { *mr = 6; *nr = 8; }
inline void set_blk_size(scomplex *dum, unsigned *mr, unsigned *nr) { *mr = 4; *nr = 4; }
inline void set_blk_size(dcomplex *dum, unsigned *mr, unsigned *nr) { *mr = 4; *nr = 4; }
// gemm kernels
// mr * nr kernels.
inline void ugemmn(unsigned k, float *alpha, float *pakA, float *pakB, float *beta, float *C, unsigned ldC)
{ std::_Exit(EXIT_FAILURE); }
inline void ugemmn(unsigned k, double *alpha, double *pakA, double *pakB, double *beta, double *C, unsigned ldC)
{ std::_Exit(EXIT_FAILURE); }
inline void ugemmn(unsigned k, scomplex *alpha, scomplex *pakA, scomplex *pakB, scomplex *beta, scomplex *C, unsigned ldC)
{ std::_Exit(EXIT_FAILURE); }
inline void ugemmn(unsigned k, dcomplex *alpha, dcomplex *pakA, dcomplex *pakB, dcomplex *beta, dcomplex *C, unsigned ldC)
{ std::_Exit(EXIT_FAILURE); }
// nr * mr kernels.
inline void ugemmt(unsigned k, float *alpha, float *pakA, float *pakB, float *beta, float *C, unsigned ldC)
{ std::_Exit(EXIT_FAILURE); }
inline void ugemmt(unsigned k, double *alpha, double *pakA, double *pakB, double *beta, double *C, unsigned ldC)
{ std::_Exit(EXIT_FAILURE); }
inline void ugemmt(unsigned k, scomplex *alpha, scomplex *pakA, scomplex *pakB, scomplex *beta, scomplex *C, unsigned ldC)
{ std::_Exit(EXIT_FAILURE); }
inline void ugemmt(unsigned k, dcomplex *alpha, dcomplex *pakA, dcomplex *pakB, dcomplex *beta, dcomplex *C, unsigned ldC)
{ std::_Exit(EXIT_FAILURE); }
