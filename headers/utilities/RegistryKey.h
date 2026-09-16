#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 15 member(s).
namespace Common {
class RegistryKey {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@RegistryKey@Common@@QEAAJQEAUHKEY__@@PEBGKKQEAU_SECURITY_ATTRIBUTES@@PEAK@Z
    long Create(HKEY__* const, unsigned short const *, unsigned long, unsigned long, _SECURITY_ATTRIBUTES * const, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteSubKeyTree@RegistryKey@Common@@QEAAJPEBG@Z
    long DeleteSubKeyTree(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteValue@RegistryKey@Common@@QEAAJPEBG@Z
    long DeleteValue(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumKey@RegistryKey@Common@@QEAAJKAEAVStringBuffer@2@PEAU_FILETIME@@@Z
    long EnumKey(unsigned long, WindissectOpaque &, _FILETIME *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStringValue@RegistryKey@Common@@QEAAJPEBGKPEAKPEAG1@Z
    long GetStringValue(unsigned short const *, unsigned long, unsigned long *, unsigned short *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStringValue@RegistryKey@Common@@QEAAJPEBG_KAEAVStringBuffer@2@PEAK@Z
    long GetStringValue(unsigned short const *, uint64_t, WindissectOpaque &, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUInt32Value@RegistryKey@Common@@QEAAJPEBGPEAI@Z
    long GetUInt32Value(unsigned short const *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUInt64Value@RegistryKey@Common@@QEAAJPEBGPEA_K@Z
    long GetUInt64Value(unsigned short const *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Open@RegistryKey@Common@@QEAAJQEAUHKEY__@@PEBGK@Z
    long Open(HKEY__* const, unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenIfExists@RegistryKey@Common@@QEAAJQEAUHKEY__@@PEBGK@Z
    long OpenIfExists(HKEY__* const, unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSubKey@RegistryKey@Common@@QEAAJPEBGKAEAVAutoHandleHKEY@2@@Z
    long OpenSubKey(unsigned short const *, unsigned long, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@RegistryKey@Common@@QEAAJPEBGPEBXKK@Z
    long SetValue(unsigned short const *, void const *, unsigned long, unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RegistryKey@Common@@QEAA@XZ
    ~RegistryKey();
};
} // namespace Common
