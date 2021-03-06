#pragma once

/**
 * Get the long and short effect name.
 */ 
bool assignNameAndTag(unsigned effectId, char *name, byte szName, char *tag, byte szTag) {

  memset(name, 0, szName);
  memset(tag, 0, szTag);

  switch(effectId) {
      
    case ID_COMP1:              
        snprintf(name, szName, "COMP1");
        snprintf(tag, szTag, "CMP1");
        break;
    case ID_COMP2:              
        snprintf(name, szName, "COMP2");
        snprintf(tag, szTag, "CMP2");
        break;
    case ID_COMP3:              
        snprintf(name, szName, "COMP3");
        snprintf(tag, szTag, "CMP3");
        break;
    case ID_COMP4:              
        snprintf(name, szName, "COMP4");
        snprintf(tag, szTag, "CMP4");
        break;
    case ID_GRAPHEQ1:              
        snprintf(name, szName, "GRAPHEQ1");
        snprintf(tag, szTag, "GEQ1");
        break;
    case ID_GRAPHEQ2:              
        snprintf(name, szName, "GRAPHEQ2");
        snprintf(tag, szTag, "GEQ2");
        break;
    case ID_GRAPHEQ3:              
        snprintf(name, szName, "GRAPHEQ3");
        snprintf(tag, szTag, "GEQ3");
        break;
    case ID_GRAPHEQ4:              
        snprintf(name, szName, "GRAPHEQ4");
        snprintf(tag, szTag, "GEQ4");
        break;
    case ID_PARAEQ1:              
        snprintf(name, szName, "PARAEQ1");
        snprintf(tag, szTag, "PEQ1");
        break;
    case ID_PARAEQ2:              
        snprintf(name, szName, "PARAEQ2");
        snprintf(tag, szTag, "PEQ2");
        break;
    case ID_PARAEQ3:              
        snprintf(name, szName, "PARAEQ3");
        snprintf(tag, szTag, "PEQ3");
        break;
    case ID_PARAEQ4:              
        snprintf(name, szName, "PARAEQ4");
        snprintf(tag, szTag, "PEQ4");
        break;
    case ID_DISTORT1:              
        snprintf(name, szName, "DISTORT1");
        snprintf(tag, szTag, "DRV1");
        break;
    case ID_DISTORT2:              
        snprintf(name, szName, "DISTORT2");
        snprintf(tag, szTag, "DRV2");
        break;
    case ID_DISTORT3:              
        snprintf(name, szName, "DISTORT3");
        snprintf(tag, szTag, "DRV3");
        break;
    case ID_DISTORT4:              
        snprintf(name, szName, "DISTORT4");
        snprintf(tag, szTag, "DRV4");
        break;
    case ID_CAB1:              
        snprintf(name, szName, "CAB1");
        snprintf(tag, szTag, "CAB1");
        break;
    case ID_CAB2:              
        snprintf(name, szName, "CAB2");
        snprintf(tag, szTag, "CAB2");
        break;
    case ID_CAB3:              
        snprintf(name, szName, "CAB3");
        snprintf(tag, szTag, "CAB3");
        break;
    case ID_CAB4:              
        snprintf(name, szName, "CAB4");
        snprintf(tag, szTag, "CAB4");
        break;
    case ID_REVERB1:              
        snprintf(name, szName, "REVERB1");
        snprintf(tag, szTag, "REV1");
        break;
    case ID_REVERB2:              
        snprintf(name, szName, "REVERB2");
        snprintf(tag, szTag, "REV2");
        break;
    case ID_REVERB3:              
        snprintf(name, szName, "REVERB3");
        snprintf(tag, szTag, "REV3");
        break;
    case ID_REVERB4:              
        snprintf(name, szName, "REVERB4");
        snprintf(tag, szTag, "REV4");
        break;
    case ID_DELAY1:              
        snprintf(name, szName, "DELAY1");
        snprintf(tag, szTag, "DLY1");
        break;
    case ID_DELAY2:              
        snprintf(name, szName, "DELAY2");
        snprintf(tag, szTag, "DLY2");
        break;
    case ID_DELAY3:              
        snprintf(name, szName, "DELAY3");
        snprintf(tag, szTag, "DLY3");
        break;
    case ID_DELAY4:              
        snprintf(name, szName, "DELAY4");
        snprintf(tag, szTag, "DLY4");
        break;
    case ID_MULTITAP1:              
        snprintf(name, szName, "MULTITAP1");
        snprintf(tag, szTag, "MTD1");
        break;
    case ID_MULTITAP2:              
        snprintf(name, szName, "MULTITAP2");
        snprintf(tag, szTag, "MTD2");
        break;
    case ID_MULTITAP3:              
        snprintf(name, szName, "MULTITAP3");
        snprintf(tag, szTag, "MTD3");
        break;
    case ID_MULTITAP4:              
        snprintf(name, szName, "MULTITAP4");
        snprintf(tag, szTag, "MTD4");
        break;
    case ID_CHORUS1:              
        snprintf(name, szName, "CHORUS1");
        snprintf(tag, szTag, "CHO1");
        break;
    case ID_CHORUS2:              
        snprintf(name, szName, "CHORUS2");
        snprintf(tag, szTag, "CHO2");
        break;
    case ID_CHORUS3:              
        snprintf(name, szName, "CHORUS3");
        snprintf(tag, szTag, "CHO3");
        break;
    case ID_CHORUS4:              
        snprintf(name, szName, "CHORUS4");
        snprintf(tag, szTag, "CHO4");
        break;
    case ID_FLANGER1:              
        snprintf(name, szName, "FLANGER1");
        snprintf(tag, szTag, "FLG1");
        break;
    case ID_FLANGER2:              
        snprintf(name, szName, "FLANGER2");
        snprintf(tag, szTag, "FLG2");
        break;
    case ID_FLANGER3:              
        snprintf(name, szName, "FLANGER3");
        snprintf(tag, szTag, "FLG3");
        break;
    case ID_FLANGER4:              
        snprintf(name, szName, "FLANGER4");
        snprintf(tag, szTag, "FLG4");
        break;
    case ID_ROTARY1:              
        snprintf(name, szName, "ROTARY1");
        snprintf(tag, szTag, "ROT1");
        break;
    case ID_ROTARY2:              
        snprintf(name, szName, "ROTARY2");
        snprintf(tag, szTag, "ROT1");
        break;
    case ID_ROTARY3:              
        snprintf(name, szName, "ROTARY3");
        snprintf(tag, szTag, "ROT3");
        break;
    case ID_ROTARY4:              
        snprintf(name, szName, "ROTARY4");
        snprintf(tag, szTag, "ROT4");
        break;
    case ID_PHASER1:              
        snprintf(name, szName, "PHASER1");
        snprintf(tag, szTag, "PHR1");
        break;
    case ID_PHASER2:              
        snprintf(name, szName, "PHASER2");
        snprintf(tag, szTag, "PHR2");
        break;
    case ID_PHASER3:              
        snprintf(name, szName, "PHASER3");
        snprintf(tag, szTag, "PHR3");
        break;
    case ID_PHASER4:              
        snprintf(name, szName, "PHASER4");
        snprintf(tag, szTag, "PHR4");
        break;
    case ID_WAH1:              
        snprintf(name, szName, "WAH1");
        snprintf(tag, szTag, "WAH1");
        break;
    case ID_WAH2:              
        snprintf(name, szName, "WAH2");
        snprintf(tag, szTag, "WAH2");
        break;
    case ID_WAH3:              
        snprintf(name, szName, "WAH3");
        snprintf(tag, szTag, "WAH3");
        break;
    case ID_WAH4:              
        snprintf(name, szName, "WAH4");
        snprintf(tag, szTag, "WAH4");
        break;
    case ID_FORMANT1:              
        snprintf(name, szName, "FORMANT1");
        snprintf(tag, szTag, "FRM1");
        break;
    case ID_FORMANT2:              
        snprintf(name, szName, "FORMANT2");
        snprintf(tag, szTag, "FRM2");
        break;
    case ID_FORMANT3:              
        snprintf(name, szName, "FORMANT3");
        snprintf(tag, szTag, "FRM3");
        break;
    case ID_FORMANT4:              
        snprintf(name, szName, "FORMANT4");
        snprintf(tag, szTag, "FRM4");
        break;
    case ID_VOLUME1:              
        snprintf(name, szName, "VOLUME1");
        snprintf(tag, szTag, "VOL1");
        break;
    case ID_VOLUME2:              
        snprintf(name, szName, "VOLUME2");
        snprintf(tag, szTag, "VOL2");
        break;
    case ID_VOLUME3:              
        snprintf(name, szName, "VOLUME3");
        snprintf(tag, szTag, "VOL3");
        break;
    case ID_VOLUME4:              
        snprintf(name, szName, "VOLUME4");
        snprintf(tag, szTag, "VOL4");
        break;
    case ID_TREMOLO1:              
        snprintf(name, szName, "TREMOLO1");
        snprintf(tag, szTag, "TRM1");
        break;
    case ID_TREMOLO2:              
        snprintf(name, szName, "TREMOLO2");
        snprintf(tag, szTag, "TRM2");
        break;
    case ID_TREMOLO3:              
        snprintf(name, szName, "TREMOLO3");
        snprintf(tag, szTag, "TRM3");
        break;
    case ID_TREMOLO4:              
        snprintf(name, szName, "TREMOLO4");
        snprintf(tag, szTag, "TRM4");
        break;
    case ID_PITCH1:              
        snprintf(name, szName, "PITCH1");
        snprintf(tag, szTag, "PIT1");
        break;
    case ID_PITCH2:              
        snprintf(name, szName, "PITCH2");
        snprintf(tag, szTag, "PIT2");
        break;
    case ID_PITCH3:              
        snprintf(name, szName, "PITCH3");
        snprintf(tag, szTag, "PIT3");
        break;
    case ID_PITCH4:              
        snprintf(name, szName, "PITCH4");
        snprintf(tag, szTag, "PIT4");
        break;
    case ID_FILTER1:              
        snprintf(name, szName, "FILTER1");
        snprintf(tag, szTag, "FIL1");
        break;
    case ID_FILTER2:              
        snprintf(name, szName, "FILTER2");
        snprintf(tag, szTag, "FIL2");
        break;
    case ID_FILTER3:              
        snprintf(name, szName, "FILTER3");
        snprintf(tag, szTag, "FIL3");
        break;
    case ID_FILTER4:              
        snprintf(name, szName, "FILTER4");
        snprintf(tag, szTag, "FIL4");
        break;
    case ID_FUZZ1:              
        snprintf(name, szName, "FUZZ1");
        snprintf(tag, szTag, "FUZ1");
        break;
    case ID_FUZZ2:              
        snprintf(name, szName, "FUZZ2");
        snprintf(tag, szTag, "FUZ2");
        break;
    case ID_FUZZ3:              
        snprintf(name, szName, "FUZZ3");
        snprintf(tag, szTag, "FUZ3");
        break;
    case ID_FUZZ4:              
        snprintf(name, szName, "FUZZ4");
        snprintf(tag, szTag, "FUZ4");
        break;
    case ID_ENHANCER1:              
        snprintf(name, szName, "ENHANCER1");
        snprintf(tag, szTag, "ENH1");
        break;
    case ID_ENHANCER2:              
        snprintf(name, szName, "ENHANCER2");
        snprintf(tag, szTag, "ENH2");
        break;
    case ID_ENHANCER3:              
        snprintf(name, szName, "ENHANCER3");
        snprintf(tag, szTag, "ENH3");
        break;
    case ID_ENHANCER4:              
        snprintf(name, szName, "ENHANCER4");
        snprintf(tag, szTag, "ENH4");
        break;
    case ID_MIXER1:              
        snprintf(name, szName, "MIXER1");
        snprintf(tag, szTag, "MIX1");
        break;
    case ID_MIXER2:              
        snprintf(name, szName, "MIXER2");
        snprintf(tag, szTag, "MIX2");
        break;
    case ID_MIXER3:              
        snprintf(name, szName, "MIXER3");
        snprintf(tag, szTag, "MIX3");
        break;
    case ID_MIXER4:              
        snprintf(name, szName, "MIXER4");
        snprintf(tag, szTag, "MIX4");
        break;
    case ID_SYNTH1:              
        snprintf(name, szName, "SYNTH1");
        snprintf(tag, szTag, "SYN1");
        break;
    case ID_SYNTH2:              
        snprintf(name, szName, "SYNTH2");
        snprintf(tag, szTag, "SYN2");
        break;
    case ID_SYNTH3:              
        snprintf(name, szName, "SYNTH3");
        snprintf(tag, szTag, "SYN3");
        break;
    case ID_SYNTH4:              
        snprintf(name, szName, "SYNTH4");
        snprintf(tag, szTag, "SYN4");
        break;
    case ID_VOCODER1:              
        snprintf(name, szName, "VOCODER1");
        snprintf(tag, szTag, "VOC1");
        break;
    case ID_VOCODER2:              
        snprintf(name, szName, "VOCODER2");
        snprintf(tag, szTag, "VOC2");
        break;
    case ID_VOCODER3:              
        snprintf(name, szName, "VOCODER3");
        snprintf(tag, szTag, "VOC3");
        break;
    case ID_VOCODER4:              
        snprintf(name, szName, "VOCODER4");
        snprintf(tag, szTag, "VOC4");
        break;
    case ID_MEGATAP1:              
        snprintf(name, szName, "MEGATAP1");
        snprintf(tag, szTag, "MGT1");
        break;
    case ID_MEGATAP2:              
        snprintf(name, szName, "MEGATAP2");
        snprintf(tag, szTag, "MGT2");
        break;
    case ID_MEGATAP3:              
        snprintf(name, szName, "MEGATAP3");
        snprintf(tag, szTag, "MGT3");
        break;
    case ID_MEGATAP4:              
        snprintf(name, szName, "MEGATAP4");
        snprintf(tag, szTag, "MGT4");
        break;
    case ID_CROSSOVER1:              
        snprintf(name, szName, "CROSSOVER1");
        snprintf(tag, szTag, "XVR1");
        break;
    case ID_CROSSOVER2:              
        snprintf(name, szName, "CROSSOVER2");
        snprintf(tag, szTag, "XVR2");
        break;
    case ID_CROSSOVER3:              
        snprintf(name, szName, "CROSSOVER3");
        snprintf(tag, szTag, "XVR3");
        break;
    case ID_CROSSOVER4:              
        snprintf(name, szName, "CROSSOVER4");
        snprintf(tag, szTag, "XVR4");
        break;
    case ID_GATE1:              
        snprintf(name, szName, "GATE1");
        snprintf(tag, szTag, "GTE1");
        break;
    case ID_GATE2:              
        snprintf(name, szName, "GATE2");
        snprintf(tag, szTag, "GTE2");
        break;
    case ID_GATE3:              
        snprintf(name, szName, "GATE3");
        snprintf(tag, szTag, "GTE3");
        break;
    case ID_GATE4:              
        snprintf(name, szName, "GATE4");
        snprintf(tag, szTag, "GTE4");
        break;
    case ID_RINGMOD1:              
        snprintf(name, szName, "RINGMOD1");
        snprintf(tag, szTag, "RNG1");
        break;
    case ID_RINGMOD2:              
        snprintf(name, szName, "RINGMOD2");
        snprintf(tag, szTag, "RNG2");
        break;
    case ID_RINGMOD3:              
        snprintf(name, szName, "RINGMOD3");
        snprintf(tag, szTag, "RNG3");
        break;
    case ID_RINGMOD4:              
        snprintf(name, szName, "RINGMOD4");
        snprintf(tag, szTag, "RNG4");
        break;
    case ID_MULTICOMP1:              
        snprintf(name, szName, "MULTICOMP1");
        snprintf(tag, szTag, "MBC1");
        break;
    case ID_MULTICOMP2:              
        snprintf(name, szName, "MULTICOMP2");
        snprintf(tag, szTag, "MBC2");
        break;
    case ID_MULTICOMP3:              
        snprintf(name, szName, "MULTICOMP3");
        snprintf(tag, szTag, "MBC3");
        break;
    case ID_MULTICOMP4:              
        snprintf(name, szName, "MULTICOMP4");
        snprintf(tag, szTag, "MBC4");
        break;
    case ID_TENTAP1:              
        snprintf(name, szName, "TENTAP1");
        snprintf(tag, szTag, "TTD1");
        break;
    case ID_TENTAP2:              
        snprintf(name, szName, "TENTAP2");
        snprintf(tag, szTag, "TTD2");
        break;
    case ID_TENTAP3:              
        snprintf(name, szName, "TENTAP3");
        snprintf(tag, szTag, "TTD3");
        break;
    case ID_TENTAP4:              
        snprintf(name, szName, "TENTAP4");
        snprintf(tag, szTag, "TTD4");
        break;
    case ID_RESONATOR1:              
        snprintf(name, szName, "RESONATOR1");
        snprintf(tag, szTag, "RES1");
        break;
    case ID_RESONATOR2:              
        snprintf(name, szName, "RESONATOR2");
        snprintf(tag, szTag, "RES2");           
        break;
    case ID_RESONATOR3:              
        snprintf(name, szName, "RESONATOR3");
        snprintf(tag, szTag, "RES3");
        break;
    case ID_RESONATOR4:              
        snprintf(name, szName, "RESONATOR4");
        snprintf(tag, szTag, "RES4");
        break;
    case ID_LOOPER1:              
        snprintf(name, szName, "LOOPER1");
        snprintf(tag, szTag, "LPR1");
        break;
    case ID_LOOPER2:              
        snprintf(name, szName, "LOOPER2");
        snprintf(tag, szTag, "LPR2");
        break;
    case ID_LOOPER3:              
        snprintf(name, szName, "LOOPER3");
        snprintf(tag, szTag, "LPR3");
        break;
    case ID_LOOPER4:              
        snprintf(name, szName, "LOOPER4");
        snprintf(tag, szTag, "LPR4");
        break;
    case ID_PLEX1:              
        snprintf(name, szName, "PLEX1");
        snprintf(tag, szTag, "PX1");
        break;
    case ID_PLEX2:              
        snprintf(name, szName, "PLEX2");
        snprintf(tag, szTag, "PLX2");
        break;
    case ID_PLEX3:              
        snprintf(name, szName, "PLEX3");
        snprintf(tag, szTag, "PLX3");
        break;
    case ID_PLEX4:              
        snprintf(name, szName, "PLEX4");
        snprintf(tag, szTag, "PLX4");
        break;
      case ID_MIDIBLOCK:              
        snprintf(name, szName, "MIDIBLOCK");
        snprintf(tag, szTag, "MIDI");
        break;
      default:
        return false;
    
    }

    return true;

}
