#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 29 member(s).
namespace StateRepository {
class Globals {
public:
    class PartitionSettings;
    class PolicySettings;
    class Registry;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteStatus@Globals@StateRepository@@YAJPEBG@Z
    long DeleteStatus(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExpandMacros@Globals@StateRepository@@YAJPEBGAEAV?$AutoArray@G$1??$AutoArrayDeallocate@G@Common@@YAXPEAG@Z@Common@@@Z
    long ExpandMacros(unsigned short const *, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppRepositoryPath@Globals@StateRepository@@YAJAEAV?$AutoArray@G$1??$AutoArrayDeallocate@G@Common@@YAXPEAG@Z@Common@@@Z
    long GetAppRepositoryPath(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCheckpointLastPerformedAsUInt64@Globals@StateRepository@@YA_KXZ
    uint64_t GetCheckpointLastPerformedAsUInt64();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDatabaseCorruptionLastReported@Globals@StateRepository@@YAJW4Partition@2@PEA_K11@Z
    long GetDatabaseCorruptionLastReported(int, uint64_t *, uint64_t *, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDatabaseStatisticsLastUpdatedAsUInt64@Globals@StateRepository@@YA_KW4Partition@2@@Z
    uint64_t GetDatabaseStatisticsLastUpdatedAsUInt64(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGCTimeToLiveExpiredAsFileTime@Globals@StateRepository@@YA?AU_FILETIME@@XZ
    _FILETIME GetGCTimeToLiveExpiredAsFileTime();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaintenanceLastPerformedAsUInt64@Globals@StateRepository@@YA_KXZ
    uint64_t GetMaintenanceLastPerformedAsUInt64();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRegistryNameDatabaseStatisticsLastUpdated@Globals@StateRepository@@YAPEBGW4Partition@2@@Z
    unsigned short const * GetRegistryNameDatabaseStatisticsLastUpdated(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRegistryNameReindexLastUpdated@Globals@StateRepository@@YAPEBGW4Partition@2@@Z
    unsigned short const * GetRegistryNameReindexLastUpdated(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRegistrySubkeyStatusForPartition@Globals@StateRepository@@YAPEBGW4Partition@2@@Z
    unsigned short const * GetRegistrySubkeyStatusForPartition(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetReindexLastUpdatedAsUInt64@Globals@StateRepository@@YA_KW4Partition@2@@Z
    uint64_t GetReindexLastUpdatedAsUInt64(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSetting@Globals@StateRepository@@YAJAEAVRegistryKey@Common@@PEBG1AEAV?$AutoArray@G$1??$AutoArrayDeallocate@G@Common@@YAXPEAG@Z@4@@Z
    long GetSetting(WindissectOpaque &, unsigned short const *, unsigned short const *, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSetting@Globals@StateRepository@@YAJAEAVRegistryKey@Common@@PEBGIPEAI@Z
    long GetSetting(WindissectOpaque &, unsigned short const *, unsigned int, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSetting@Globals@StateRepository@@YAJAEAVRegistryKey@Common@@PEBG_KPEA_K@Z
    long GetSetting(WindissectOpaque &, unsigned short const *, uint64_t, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStatus@Globals@StateRepository@@YAJPEBG_KPEA_K@Z
    long GetStatus(unsigned short const *, uint64_t, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStatus@Globals@StateRepository@@YAJPEBGIPEAI@Z
    long GetStatus(unsigned short const *, unsigned int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@Globals@StateRepository@@YAJP6AJW4Partition@2@PEAPEAG@ZPEBG33W4Flags@12@@Z
    long Initialize(long ( *)(int, unsigned short * *), unsigned short const *, unsigned short const *, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadSettings@Globals@StateRepository@@YAJW4Flags@12@@Z
    long LoadSettings(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetAutoCheckIntegrity@Globals@StateRepository@@YAJXZ
    long ResetAutoCheckIntegrity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetDatabaseCorruptionLastReported@Globals@StateRepository@@YAJW4Partition@2@@Z
    long ResetDatabaseCorruptionLastReported(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCheckpointLastPerformed@Globals@StateRepository@@YAJ_K@Z
    long SetCheckpointLastPerformed(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDatabaseCorruptionLastReported@Globals@StateRepository@@YAJW4Partition@2@_K11@Z
    long SetDatabaseCorruptionLastReported(int, uint64_t, uint64_t, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMaintenanceLastPerformed@Globals@StateRepository@@YAJ_K@Z
    long SetMaintenanceLastPerformed(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetReindexLastUpdated@Globals@StateRepository@@YAJW4Partition@2@_K@Z
    long SetReindexLastUpdated(int, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetServiceLastKnownStatus@Globals@StateRepository@@YAJW4ServiceLastKnownStatus@12@@Z
    long SetServiceLastKnownStatus(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStatus@Globals@StateRepository@@YAJPEBGI@Z
    long SetStatus(unsigned short const *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStatus@Globals@StateRepository@@YAJPEBG_K@Z
    long SetStatus(unsigned short const *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@Globals@StateRepository@@YAJW4Flags@12@@Z
    long Shutdown(int);
};
} // namespace StateRepository
