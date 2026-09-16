#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 6 member(s).
namespace StateRepository::Notifications {
class NotificationChannel {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@NotificationChannel@Notifications@StateRepository@@QEAAJPEBG0PEAXAEAVText@3@@Z
    long Create(unsigned short const *, unsigned short const *, void *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseChangedEvent@NotificationChannel@Notifications@StateRepository@@QEAAJXZ
    long RaiseChangedEvent();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NotificationChannel@Notifications@StateRepository@@QEAA@XZ
    ~NotificationChannel();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSecurityDescriptor@NotificationChannel@Notifications@StateRepository@@CAJPEAXPEAPEAX1@Z
    static long CreateSecurityDescriptor(void *, void * *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateName@NotificationChannel@Notifications@StateRepository@@AEAAJPEBG@Z
    long GenerateName(unsigned short const *);
};
} // namespace StateRepository::Notifications
