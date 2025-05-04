# add sources to config, headers added for intellij
file(GLOB SRCS_FILES
        plaits/dsp/*.h
        plaits/dsp/*.cc
        plaits/dsp/chords/*.cc
        plaits/dsp/downsampler/*.h
        plaits/dsp/drums/*.h
        plaits/dsp/engine/*.h
        plaits/dsp/engine/*.cc
        plaits/dsp/engine2/*.cc
        plaits/dsp/fm/*.cc
        plaits/dsp/fm/*.h
        plaits/dsp/fx/*.cc
        plaits/dsp/noise/*.h
        plaits/dsp/oscillator/*.cc
        plaits/dsp/oscillator/*.h
        plaits/dsp/speech/*.cc
        plaits/dsp/speech/*.h
        plaits/dsp/physical_modelling/*.h
        plaits/dsp/physical_modelling/*.cc
        plaits/resources.cc
        plaits/resources.h
        rings/dsp/fm_voice.cc
        rings/dsp/part.cc
        rings/dsp/string_synth_part.cc
        rings/dsp/string.cc
        rings/dsp/resonator.cc
        rings/resources.cc
        tides2/poly_slope_generator.cc
        tides2/poly_slope_generator.h
        tides2/ramp/ramp_extractor.cc
        tides2/ramp/ramp_extractor.h
        tides2/resources.cc
        clouds/resources.cc
        stmlib/utils/random.cc
        stmlib/utils/random.h
        stmlib/dsp/atan.cc
        stmlib/dsp/units.cc
        stmlib/dsp/dsp.h
        braids/svf.h
        braids/resources.cc
        braids/resources.h
        braids/analog_oscillator.cc
        braids/analog_oscillator.h
        braids/signature_waveshaper.h
        braids/digital_oscillator.h
        braids/digital_oscillator.cc
        braids/macro_oscillator.h
        braids/macro_oscillator.cc
        braids/excitation.h
        braids/quantizer.cc
        braids/quantizer.h
        braids/quantizer_scales.h
        clouds/resources.cc
        clouds/resources.h
        clouds/dsp/audio_buffer.h
        clouds/dsp/correlator.cc
        clouds/dsp/correlator.h
        clouds/dsp/frame.h
        clouds/dsp/grain.h
        clouds/dsp/granular_processor.cc
        clouds/dsp/granular_processor.h
        clouds/dsp/granular_sample_player.h
        clouds/dsp/looping_sample_player.h
        clouds/dsp/mu_law.cc
        clouds/dsp/mu_law.h
        clouds/dsp/parameters.h
        clouds/dsp/sample_rate_converter.h
        clouds/dsp/window.h
        clouds/dsp/wsola_sample_player.h
        clouds/dsp/fx/diffuser.h
        clouds/dsp/fx/fx_engine.h
        clouds/dsp/fx/pitch_shifter.h
        clouds/dsp/fx/reverb.h
        clouds/dsp/pvoc/frame_transformation.cc
        clouds/dsp/pvoc/frame_transformation.h
        clouds/dsp/pvoc/phase_vocoder.cc
        clouds/dsp/pvoc/phase_vocoder.h
        clouds/dsp/pvoc/stft.cc
        clouds/dsp/pvoc/stft.h
)

# __idf_esp_system

add_library(mutable STATIC ${SRCS_FILES})
target_include_directories(mutable PUBLIC .)
# target_link_libraries(mutable 
#         PRIVATE tbd_helpers)
target_compile_options(mutable PRIVATE
        -Wno-unused-variable
        -Wno-shift-negative-value
)
target_compile_definitions(mutable PUBLIC MUTABLE_STD_CPP=1)
