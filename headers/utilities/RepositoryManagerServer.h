#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 63 member(s).
namespace Windows::Internal::StateRepository::Management {
class RepositoryManagerServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@RepositoryManagerServer@Management@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplySnapshot@RepositoryManagerServer@Management@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@W4SnapshotOptions@2345@@Z
    virtual long ApplySnapshot(HSTRING__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BlockRequests@RepositoryManagerServer@Management@StateRepository@Internal@Windows@@UEAAJW4RepositoryOptions@2345@@Z
    virtual long BlockRequests(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cache_CheckIntegrity@RepositoryManagerServer@Management@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long Cache_CheckIntegrity(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cache_Initialize@RepositoryManagerServer@Management@StateRepository@Internal@Windows@@UEAAJW4CacheManagementOptions@2345@@Z
    virtual long Cache_Initialize(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cache_Update@RepositoryManagerServer@Management@StateRepository@Internal@Windows@@UEAAJW4CacheManagementOptions@2345@@Z
    virtual long Cache_Update(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIntegrity@RepositoryManagerServer@Management@StateRepository@Internal@Windows@@UEAAJW4IntegrityOptions@2345@PEAW4IntegrityDisposition@2345@PEA_K@Z
    virtual long CheckIntegrity(int, int *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Checkpoint@RepositoryManagerServer@Management@StateRepository@Internal@Windows@@UEAAJW4CheckpointOptions@2345@@Z
    virtual long Checkpoint(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearChangelogs@RepositoryManagerServer@Management@StateRepository@Internal@Windows@@UEAAJW4ChangelogOptions@2345@@Z
    virtual long ClearChangelogs(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearDatabaseCache@RepositoryManagerServer@Management@StateRepository@Internal@Windows@@UEAAJW4RepositoryOptions@2345@@Z
    virtual long ClearDatabaseCache(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSnapshot@RepositoryManagerServer@Management@StateRepository@Internal@Windows@@UEAAJW4SnapshotOptions@2345@PEAPEAUHSTRING__@@@Z
    virtual long CreateSnapshot(int, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteSnapshot@RepositoryManagerServer@Management@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@W4SnapshotOptions@2345@@Z
    virtual long DeleteSnapshot(HSTRING__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoMaintenance@RepositoryManagerServer@Management@StateRepository@Internal@Windows@@UEAAJW4MaintenanceOptions@2345@@Z
    virtual long DoMaintenance(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GCChangelogs@RepositoryManagerServer@Management@StateRepository@Internal@Windows@@UEAAJW4ChangelogOptions@2345@@Z
    virtual long GCChangelogs(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDatabaseSize@RepositoryManagerServer@Management@StateRepository@Internal@Windows@@UEAAJW4Partition@2345@PEA_J1@Z
    virtual long GetDatabaseSize(int, int64_t *, int64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@RepositoryManagerServer@Management@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@RepositoryManagerServer@Management@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@RepositoryManagerServer@Management@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImportPackageUserStatus@RepositoryManagerServer@Management@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@0PEAI1@Z
    virtual long ImportPackageUserStatus(HSTRING__*, HSTRING__*, unsigned int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImportSnapshot@RepositoryManagerServer@Management@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@00000W4SnapshotOptions@2345@PEAPEAU6@@Z
    virtual long ImportSnapshot(HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, int, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@RepositoryManagerServer@Management@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@RepositoryManagerServer@Management@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@RepositoryManagerServer@Management@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Optimize@RepositoryManagerServer@Management@StateRepository@Internal@Windows@@UEAAJW4OptimizeOptions@2345@@Z
    virtual long Optimize(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PackageDependency_Dump@RepositoryManagerServer@Management@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long PackageDependency_Dump();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@RepositoryManagerServer@Management@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RebuildApplicationUser@RepositoryManagerServer@Management@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long RebuildApplicationUser();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reindex@RepositoryManagerServer@Management@StateRepository@Internal@Windows@@UEAAJW4ReindexOptions@2345@@Z
    virtual long Reindex(int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@RepositoryManagerServer@Management@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Repair@RepositoryManagerServer@Management@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@W4RepairOptions@2345@PEAI2@Z
    virtual long Repair(HSTRING__*, int, unsigned int *, unsigned int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RepositoryManagerServer@Management@StateRepository@Internal@Windows@@QEAA@XZ
    RepositoryManagerServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetAutoCheck@RepositoryManagerServer@Management@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long ResetAutoCheck();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Rpc_Disable@RepositoryManagerServer@Management@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Rpc_Disable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Rpc_Enable@RepositoryManagerServer@Management@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Rpc_Enable();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAutoCheck@RepositoryManagerServer@Management@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long SetAutoCheck();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCheckpointIsDue@RepositoryManagerServer@Management@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long SetCheckpointIsDue(unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMaintenanceIsDue@RepositoryManagerServer@Management@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long SetMaintenanceIsDue(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnblockRequests@RepositoryManagerServer@Management@StateRepository@Internal@Windows@@UEAAJW4RepositoryOptions@2345@@Z
    virtual long UnblockRequests(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAllMultiPartTransactionsCascading@RepositoryManagerServer@Management@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long UpdateAllMultiPartTransactionsCascading();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStatistics@RepositoryManagerServer@Management@StateRepository@Internal@Windows@@UEAAJW4UpdateStatisticsOptions@2345@@Z
    virtual long UpdateStatistics(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Upgrade@RepositoryManagerServer@Management@StateRepository@Internal@Windows@@UEAAJW4UpgradeOptions@2345@@Z
    virtual long Upgrade(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsAutoCheck@RepositoryManagerServer@Management@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsAutoCheck(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsBlockRequests@RepositoryManagerServer@Management@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsBlockRequests(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsCheckpointDue@RepositoryManagerServer@Management@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsCheckpointDue(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsMaintenanceDue@RepositoryManagerServer@Management@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsMaintenanceDue(unsigned char *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RepositoryManagerServer@Management@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~RepositoryManagerServer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OptimizeForPartition@RepositoryManagerServer@Management@StateRepository@Internal@Windows@@AEAAJW4OptimizeOptions@2345@W4Partition@3@@Z
    long OptimizeForPartition(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReindexForPartition@RepositoryManagerServer@Management@StateRepository@Internal@Windows@@AEAAJW4ReindexOptions@2345@W4Partition@3@@Z
    long ReindexForPartition(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStatisticsForPartition@RepositoryManagerServer@Management@StateRepository@Internal@Windows@@AEAAJW4UpdateStatisticsOptions@2345@W4Partition@3@@Z
    long UpdateStatisticsForPartition(int, int);
};
} // namespace Windows::Internal::StateRepository::Management
