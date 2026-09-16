#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 16 member(s).
namespace StateRepository::Cache {
class Context_NoThrow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToCache@Context_NoThrow@Cache@StateRepository@@QEAAJPEBG@Z
    long AddToCache(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@Context_NoThrow@Cache@StateRepository@@QEAAJAEAVManager_NoThrow@23@PEBGW4SRCacheFlags@@@Z
    long Create(WindissectOpaque &, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete@Context_NoThrow@Cache@StateRepository@@QEAAJPEBG@Z
    long Delete(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumerateData@Context_NoThrow@Cache@StateRepository@@QEAAJHAEA_J@Z
    long EnumerateData(int, int64_t &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetField@Context_NoThrow@Cache@StateRepository@@QEAAJPEBGPEAPEAG@Z
    long GetField(unsigned short const *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetField@Context_NoThrow@Cache@StateRepository@@QEAAJPEBGAEAI@Z
    long GetField(unsigned short const *, unsigned int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetField@Context_NoThrow@Cache@StateRepository@@QEAAJPEBGAEA_K@Z
    long GetField(unsigned short const *, uint64_t &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetField@Context_NoThrow@Cache@StateRepository@@QEAAJPEBGAEAIPEAPEAE@Z
    long GetField(unsigned short const *, unsigned int &, unsigned char * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetField_MultiString@Context_NoThrow@Cache@StateRepository@@QEAAJPEBGPEAPEAG@Z
    long GetField_MultiString(unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Open@Context_NoThrow@Cache@StateRepository@@QEAAJAEAVManager_NoThrow@23@PEBGW4SRCacheFlags@@AEA_N@Z
    long Open(WindissectOpaque &, unsigned short const *, int, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSubContext@Context_NoThrow@Cache@StateRepository@@QEAAJAEAV123@PEBGW4SRCacheFlags@@AEA_N@Z
    long OpenSubContext(WindissectOpaque &, unsigned short const *, int, bool &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetField@Context_NoThrow@Cache@StateRepository@@QEAAJPEBGI@Z
    long SetField(unsigned short const *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetField@Context_NoThrow@Cache@StateRepository@@QEAAJPEBG0@Z
    long SetField(unsigned short const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetField@Context_NoThrow@Cache@StateRepository@@QEAAJPEBGIPEBX@Z
    long SetField(unsigned short const *, unsigned int, void const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetField_MultiString@Context_NoThrow@Cache@StateRepository@@QEAAJPEBG0I@Z
    long SetField_MultiString(unsigned short const *, unsigned short const *, unsigned int);
};
} // namespace StateRepository::Cache
