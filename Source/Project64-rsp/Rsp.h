#pragma once
#include <Project64-plugin-spec/Rsp.h>
#include <Project64-rsp-core/cpu/RspTypes.h>

// Profiling
#define Default_ProfilingOn false
#define Default_IndvidualBlock false
#define Default_ShowErrors false
#define Default_AudioHle false

uint32_t AsciiToHex(char * HexValue);
void DisplayError(char * Message, ...);

extern bool DebuggingEnabled, Profiling, IndvidualBlock, ShowErrors, BreakOnStart, LogRDP, LogX86Code;
extern DEBUG_INFO DebugInfo;
extern void * hinstDLL;