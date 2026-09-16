#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 5 member(s).
namespace StateRepository::Notifications {
class NotificationChannels {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@NotificationChannels@Notifications@StateRepository@@QEAAJPEBG0PEAXAEAVHString@Wrappers@WRL@Microsoft@@@Z
    long Add(unsigned short const *, unsigned short const *, void *, ::Microsoft::WRL::Wrappers::HString &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@NotificationChannels@Notifications@StateRepository@@QEAAJPEBG0PEAXAEAVText@3@@Z
    long Add(unsigned short const *, unsigned short const *, void *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@NotificationChannels@Notifications@StateRepository@@QEAAJXZ
    long Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseChangedEvent@NotificationChannels@Notifications@StateRepository@@QEAAJPEBG@Z
    long RaiseChangedEvent(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@NotificationChannels@Notifications@StateRepository@@QEAAJPEBG@Z
    long Remove(unsigned short const *);
};
} // namespace StateRepository::Notifications
