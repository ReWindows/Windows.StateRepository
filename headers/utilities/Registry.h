#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 7 member(s).
namespace StateRepository::Globals {
class Registry {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@Registry@Globals@StateRepository@@YAJAEAVRegistryKey@Common@@PEBGPEAK@Z
    long Create(WindissectOpaque &, unsigned short const *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteValue@Registry@Globals@StateRepository@@YAJAEAVRegistryKey@Common@@PEBG@Z
    long DeleteValue(WindissectOpaque &, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Open@Registry@Globals@StateRepository@@YAJAEAVRegistryKey@Common@@PEBGK_N@Z
    long Open(WindissectOpaque &, unsigned short const *, unsigned long, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadValue@Registry@Globals@StateRepository@@YAJAEAVRegistryKey@Common@@PEBG_KPEA_K@Z
    long ReadValue(WindissectOpaque &, unsigned short const *, uint64_t, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadValue@Registry@Globals@StateRepository@@YAJAEAVRegistryKey@Common@@PEBGIPEAI@Z
    long ReadValue(WindissectOpaque &, unsigned short const *, unsigned int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteValue@Registry@Globals@StateRepository@@YAJAEAVRegistryKey@Common@@PEBGI@Z
    long WriteValue(WindissectOpaque &, unsigned short const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteValue@Registry@Globals@StateRepository@@YAJAEAVRegistryKey@Common@@PEBG_K@Z
    long WriteValue(WindissectOpaque &, unsigned short const *, uint64_t);
};
} // namespace StateRepository::Globals
