#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 26 member(s).
namespace StateRepository {
class Repository {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToCache@Repository@StateRepository@@SAJAEAVDatabase@2@@Z
    static long AddToCache(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Checkpoint@Repository@StateRepository@@SAJW4CheckpointOptions@12@@Z
    static long Checkpoint(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Checkpoint@Repository@StateRepository@@SAJ_KPEAVDatabase@2@PEAH2W4CheckpointOptions@12@@Z
    static long Checkpoint(uint64_t, WindissectOpaque *, int *, int *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDatabaseForDeploymentPartition@Repository@StateRepository@@SAJPEBGW4CreateFlags@12@W4Options@12@PEAW4CreateDisposition@12@PEAHP6AJPEAX@Z5@Z
    static long CreateDatabaseForDeploymentPartition(unsigned short const *, int, int, int *, int *, long ( *)(void *), void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDatabaseForMachinePartition@Repository@StateRepository@@SAJPEBGW4CreateFlags@12@W4Options@12@PEAW4CreateDisposition@12@PEAHP6AJPEAX@Z5@Z
    static long CreateDatabaseForMachinePartition(unsigned short const *, int, int, int *, int *, long ( *)(void *), void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDatabaseSize@Repository@StateRepository@@SAJW4Partition@2@PEA_J1@Z
    static long GetDatabaseSize(int, int64_t *, int64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSettings@Repository@StateRepository@@SAJW4Partition@2@PEAPEAGPEAW4Options@12@@Z
    static long GetSettings(int, unsigned short * *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenDatabase@Repository@StateRepository@@SAJPEBGW4Partition@2@W4Options@12@AEAVDatabase@2@@Z
    static long OpenDatabase(unsigned short const *, int, int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenDatabase@Repository@StateRepository@@SAJW4Partition@2@W4OpenFlags@12@AEAVDatabase@2@@Z
    static long OpenDatabase(int, int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenDatabaseFromCache@Repository@StateRepository@@SAJW4Partition@2@W4OpenFlags@12@AEAVDatabase@2@@Z
    static long OpenDatabaseFromCache(int, int, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCheckpointIsDue@Repository@StateRepository@@SAJ_N@Z
    static long SetCheckpointIsDue(bool);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustDatabaseOpenFlagsPerOptions@Repository@StateRepository@@CAJW4Options@12@PEAH@Z
    static long AdjustDatabaseOpenFlagsPerOptions(int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDatabase@Repository@StateRepository@@CAJW4Partition@2@PEBGW4CreateFlags@12@W4Options@12@PEBD4444PEAW4CreateDisposition@12@PEAHP6AJPEAX@Z7@Z
    static long CreateDatabase(int, unsigned short const *, int, int, char const *, char const *, char const *, char const *, char const *, int *, int *, long ( *)(void *), void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDatabaseOrFatalIfNecessary@Repository@StateRepository@@CAJW4Partition@2@PEBGW4CreateFlags@12@W4Options@12@PEBD4444PEAW4CreateDisposition@12@PEAHP6AJPEAX@Z7@Z
    static long CreateDatabaseOrFatalIfNecessary(int, unsigned short const *, int, int, char const *, char const *, char const *, char const *, char const *, int *, int *, long ( *)(void *), void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDatabase_Create@Repository@StateRepository@@CAJW4Partition@2@PEBGW4CreateFlags@12@W4Options@12@PEBD4444HAEAVDatabase@2@P6AJPEAX@Z6@Z
    static long CreateDatabase_Create(int, unsigned short const *, int, int, char const *, char const *, char const *, char const *, char const *, int, WindissectOpaque &, long ( *)(void *), void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDatabase_PreImport@Repository@StateRepository@@CAJW4Partition@2@HAEAVDatabase@2@@Z
    static long CreateDatabase_PreImport(int, int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDatabase_Upgrade@Repository@StateRepository@@CAJW4Partition@2@PEBGW4CreateFlags@12@W4Options@12@PEBD4444HHP6AJPEAX@Z5@Z
    static long CreateDatabase_Upgrade(int, unsigned short const *, int, int, char const *, char const *, char const *, char const *, char const *, int, int, long ( *)(void *), void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteFileIfExists@Repository@StateRepository@@CAJPEBG@Z
    static long DeleteFileIfExists(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveFileIfExists@Repository@StateRepository@@CAJPEBG0@Z
    static long MoveFileIfExists(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenDatabaseFromDisk@Repository@StateRepository@@CAJPEBDW4Partition@2@W4Options@12@AEAVDatabase@2@@Z
    static long OpenDatabaseFromDisk(char const *, int, int, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCacheSize@Repository@StateRepository@@CAJW4Options@12@AEAVDatabase@2@@Z
    static long SetCacheSize(int, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFileChunkSize@Repository@StateRepository@@CAJAEAVDatabase@2@@Z
    static long SetFileChunkSize(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetJournalSizeLimit@Repository@StateRepository@@CAJAEAVDatabase@2@@Z
    static long SetJournalSizeLimit(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOption_CheckpointOnClose@Repository@StateRepository@@CAJAEAVDatabase@2@W4Options@12@@Z
    static long SetOption_CheckpointOnClose(WindissectOpaque &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOptions@Repository@StateRepository@@CAJAEAVDatabase@2@W4Options@12@@Z
    static long SetOptions(WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Checkpoint@Repository@StateRepository@@CAJAEAVDatabase@2@W4CheckpointOptions@12@PEAH2@Z
    static long _Checkpoint(WindissectOpaque &, int, int *, int *);
};
} // namespace StateRepository
