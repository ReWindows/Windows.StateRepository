#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 12 member(s).
class Common {
public:
    class AutoCoImpersonate;
    class AutoHandle;
    class AutoHandleModule;
    class AutoLock;
    class AutoWinRTInitialize;
    class Base32Encoding;
    class BcryptLibrary;
    class ByteBuffer;
    class CryptoProvider;
    class FileInUseProcessInformation;
    class PathHelpers;
    class RegistryKey;
    class SidHelper;
    class StateSeparation;
    class StaticLock;
    class String;
    class StringBuffer;
    class StringBufferBuilder;
    class StringBuilder;
    class UInt32;
    class UserProfile;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AutoPtrSidRtlFreeSid@Common@@YAXPEAX@Z
    void AutoPtrSidRtlFreeSid(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseHandleHelper@Common@@YAXPEAX@Z
    void CloseHandleHelper(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyStringToOutput@Common@@YAJPEBGPEAPEAG@Z
    long CopyStringToOutput(unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCacheMapIfNeeded@Common@@YAJXZ
    long CreateCacheMapIfNeeded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ErrorIsFileSystemEntryNotFound@Common@@YA_NK@Z
    bool ErrorIsFileSystemEntryNotFound(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FileExists@Common@@YAJPEBGPEA_N@Z
    long FileExists(unsigned short const *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FileInUseByProcesses@Common@@YAJPEBGIPEAIPEAK@Z
    long FileInUseByProcesses(unsigned short const *, unsigned int, unsigned int *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenericMapCaseInsensitiveCompare@Common@@YA?AW4_RTL_GENERIC_COMPARE_RESULTS@@PEAU_RTL_AVL_TABLE@@PEAX1@Z
    int GenericMapCaseInsensitiveCompare(_RTL_AVL_TABLE *, void *, void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFileInUseProcessInformation@Common@@YAJKPEAXAEAUFileInUseProcessInformation@1@@Z
    long GetFileInUseProcessInformation(unsigned long, void *, WindissectOpaque &);
};
