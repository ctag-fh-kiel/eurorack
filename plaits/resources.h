// Copyright 2016 Emilie Gillet.
//
// Author: Emilie Gillet (emilie.o.gillet@gmail.com)
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
// 
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
// 
// See http://creativecommons.org/licenses/MIT/ for more information.
//
// -----------------------------------------------------------------------------
//
// Resources definitions.
//
// Automatically generated with:
// make resources


#ifndef PLAITS_RESOURCES_H_
#define PLAITS_RESOURCES_H_


#include "stmlib/stmlib.h"



namespace plaits {

typedef uint8_t ResourceId;

extern const float* lookup_table_table[];

extern const int16_t* lookup_table_i16_table[];

extern const int8_t* lookup_table_i8_table[];

extern const int16_t* wavetables_table[];

extern const float lut_sine[];
extern const float lut_fm_frequency_quantizer[];
extern const float lut_fold[];
extern const float lut_fold_2[];
extern const float lut_stiffness[];
extern const float lut_svf_shift[];
extern const int16_t lut_ws_inverse_tan[];
extern const int16_t lut_ws_inverse_sin[];
extern const int16_t lut_ws_linear[];
extern const int16_t lut_ws_bump[];
extern const int16_t lut_ws_double_bump[];
extern const int8_t lut_lpc_excitation_pulse[];
extern const int16_t wav_integrated_waves[];
#undef LUT_SINE
#define LUT_SINE 0
#undef LUT_SINE_SIZE
#define LUT_SINE_SIZE 1281
#undef LUT_FM_FREQUENCY_QUANTIZER
#define LUT_FM_FREQUENCY_QUANTIZER 1
#undef LUT_FM_FREQUENCY_QUANTIZER_SIZE
#define LUT_FM_FREQUENCY_QUANTIZER_SIZE 129
#undef LUT_FOLD
#define LUT_FOLD 2
#undef LUT_FOLD_SIZE
#define LUT_FOLD_SIZE 516
#undef LUT_FOLD_2
#define LUT_FOLD_2 3
#undef LUT_FOLD_2_SIZE
#define LUT_FOLD_2_SIZE 516
#undef LUT_STIFFNESS
#define LUT_STIFFNESS 4
#undef LUT_STIFFNESS_SIZE
#define LUT_STIFFNESS_SIZE 65
#undef LUT_SVF_SHIFT
#define LUT_SVF_SHIFT 5
#undef LUT_SVF_SHIFT_SIZE
#define LUT_SVF_SHIFT_SIZE 257
#undef LUT_WS_INVERSE_TAN
#define LUT_WS_INVERSE_TAN 0
#undef LUT_WS_INVERSE_TAN_SIZE
#define LUT_WS_INVERSE_TAN_SIZE 257
#undef LUT_WS_INVERSE_SIN
#define LUT_WS_INVERSE_SIN 1
#undef LUT_WS_INVERSE_SIN_SIZE
#define LUT_WS_INVERSE_SIN_SIZE 257
#undef LUT_WS_LINEAR
#define LUT_WS_LINEAR 2
#undef LUT_WS_LINEAR_SIZE
#define LUT_WS_LINEAR_SIZE 257
#undef LUT_WS_BUMP
#define LUT_WS_BUMP 3
#undef LUT_WS_BUMP_SIZE
#define LUT_WS_BUMP_SIZE 257
#undef LUT_WS_DOUBLE_BUMP
#define LUT_WS_DOUBLE_BUMP 4
#undef LUT_WS_DOUBLE_BUMP_SIZE
#define LUT_WS_DOUBLE_BUMP_SIZE 257
#undef LUT_WS_DOUBLE_BUMP_SENTINEL
#define LUT_WS_DOUBLE_BUMP_SENTINEL 5
#undef LUT_WS_DOUBLE_BUMP_SENTINEL_SIZE
#define LUT_WS_DOUBLE_BUMP_SENTINEL_SIZE 257
#undef LUT_LPC_EXCITATION_PULSE
#define LUT_LPC_EXCITATION_PULSE 0
#undef LUT_LPC_EXCITATION_PULSE_SIZE
#define LUT_LPC_EXCITATION_PULSE_SIZE 640
#undef WAV_INTEGRATED_WAVES
#define WAV_INTEGRATED_WAVES 0
#undef WAV_INTEGRATED_WAVES_SIZE
#define WAV_INTEGRATED_WAVES_SIZE 49920

}  // namespace plaits

#endif  // PLAITS_RESOURCES_H_
