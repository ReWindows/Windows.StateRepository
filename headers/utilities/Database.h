#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 113 member(s).
namespace StateRepository {
class Database {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToCache@Database@StateRepository@@QEAAJAEAVStatement@2@@Z
    long AddToCache(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Analyze@Database@StateRepository@@QEAAJP6AJPEAX@Z0@Z
    long Analyze(long ( *)(void *), void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Analyze@Database@StateRepository@@QEAAJPEBD@Z
    long Analyze(char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Analyze_Incremental@Database@StateRepository@@QEAAJPEBDP6AJPEAX@Z1@Z
    long Analyze_Incremental(char const *, long ( *)(void *), void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachDatabase@Database@StateRepository@@QEAAJPEBGPEBD@Z
    long AttachDatabase(unsigned short const *, char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachDatabase@Database@StateRepository@@QEAAJW4Partition@2@PEBD@Z
    long AttachDatabase(int, char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachDatabase@Database@StateRepository@@QEAAJPEBD0@Z
    long AttachDatabase(char const *, char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginTransaction@Database@StateRepository@@QEAAJAEBU_GUID@@P6AJPEAX@Z1@Z
    long BeginTransaction(_GUID const &, long ( *)(void *), void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginTransaction@Database@StateRepository@@QEAAJW4BeginTransactionLock@12@AEBU_GUID@@P6AJPEAX@Z2@Z
    long BeginTransaction(int, _GUID const &, long ( *)(void *), void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginTransaction@Database@StateRepository@@QEAAJAEBU_GUID@@AEAVAutoPriority@ResourcePriority@2@P6AJPEAX@Z2@Z
    long BeginTransaction(_GUID const &, WindissectOpaque &, long ( *)(void *), void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Checkpoint@Database@StateRepository@@QEAAJPEBDW4CheckpointMode@12@PEAH2@Z
    long Checkpoint(char const *, int, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckpointIfThresholdExceeded@Database@StateRepository@@QEAAJPEBDW4CheckpointMode@12@PEB_KPEAH3@Z
    long CheckpointIfThresholdExceeded(char const *, int, uint64_t const *, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearCache@Database@StateRepository@@QEAAJXZ
    long ClearCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@Database@StateRepository@@QEAAJXZ
    long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Commit@Database@StateRepository@@QEAAJXZ
    long Commit();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Database@StateRepository@@QEAA@XZ
    Database();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachDatabase@Database@StateRepository@@QEAAJPEBD@Z
    long DetachDatabase(char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableProfile@Database@StateRepository@@QEAAJ_N@Z
    long EnableProfile(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableTrace@Database@StateRepository@@QEAAJ_N@Z
    long EnableTrace(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@Database@StateRepository@@QEAAJPEBDP6AJPEAX@Z1@Z
    long Execute(char const *, long ( *)(void *), void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChanges@Database@StateRepository@@QEBAHXZ
    int GetChanges() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDatabaseSize@Database@StateRepository@@QEAAJPEBDPEA_J1@Z
    long GetDatabaseSize(char const *, int64_t *, int64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFileHandle@Database@StateRepository@@QEAAJPEBDAEAPEAX@Z
    long GetFileHandle(char const *, void * &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFilename@Database@StateRepository@@QEBAPEBDPEBD@Z
    char const * GetFilename(char const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetJournalFileHandle@Database@StateRepository@@QEAAJPEBDAEAPEAX@Z
    long GetJournalFileHandle(char const *, void * &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetJournalMode@Database@StateRepository@@QEAAJPEAW4JournalMode@12@@Z
    long GetJournalMode(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastInsertRowID@Database@StateRepository@@QEBA_JXZ
    int64_t GetLastInsertRowID() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLockingMode@Database@StateRepository@@QEAAJPEAW4LockingMode@12@@Z
    long GetLockingMode(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOptimalCacheSize@Database@StateRepository@@QEBAJPEAI@Z
    long GetOptimalCacheSize(unsigned int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOptimalPageSize@Database@StateRepository@@QEBAJPEAI@Z
    long GetOptimalPageSize(unsigned int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPragma@Database@StateRepository@@QEAAJPEBDAEAVTextA@2@@Z
    long GetPragma(char const *, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPragma@Database@StateRepository@@QEAAJPEBDPEAH@Z
    long GetPragma(char const *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPragma@Database@StateRepository@@QEAAJPEBDPEAI@Z
    long GetPragma(char const *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSynchronous@Database@StateRepository@@QEAAJPEAW4Synchronous@12@@Z
    long GetSynchronous(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransactionCallerId@Database@StateRepository@@QEAA?AU_GUID@@XZ
    _GUID GetTransactionCallerId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWalFileSize@Database@StateRepository@@QEAAJPEBDPEA_K@Z
    long GetWalFileSize(char const *, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDatabaseStatisticsUpdateDue@Database@StateRepository@@SA_NW4Partition@2@_KW4DatabaseStatisticsOptions@12@@Z
    static bool IsDatabaseStatisticsUpdateDue(int, uint64_t, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInAutoCommitMode@Database@StateRepository@@QEAA_NXZ
    bool IsInAutoCommitMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogStatistics@Database@StateRepository@@QEAAJXZ
    long LogStatistics();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Open@Database@StateRepository@@QEAAJPEBGW4OpenFlags@12@PEBI@Z
    long Open(unsigned short const *, int, unsigned int const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Open@Database@StateRepository@@QEAAJPEBDW4OpenFlags@12@PEBI@Z
    long Open(char const *, int, unsigned int const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Optimize@Database@StateRepository@@QEAAJW4OptimizeOptions@12@@Z
    long Optimize(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareFromCache@Database@StateRepository@@QEAAJPEBDAEAVStatement@2@@Z
    long PrepareFromCache(char const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterFunctions@Database@StateRepository@@QEAAJXZ
    long RegisterFunctions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reindex@Database@StateRepository@@QEAAJP6AJPEAX@Z0@Z
    long Reindex(long ( *)(void *), void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reindex@Database@StateRepository@@QEAAJPEBD@Z
    long Reindex(char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReindexIndices@Database@StateRepository@@QEAAJPEBDW4ReindexOptions@12@P6AJPEAX@Z2@Z
    long ReindexIndices(char const *, int, long ( *)(void *), void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReindexIndices@Database@StateRepository@@QEAAJW4ReindexOptions@12@P6AJPEAX@Z1@Z
    long ReindexIndices(int, long ( *)(void *), void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reindex_Incremental@Database@StateRepository@@QEAAJPEBDP6AJPEAX@Z1@Z
    long Reindex_Incremental(char const *, long ( *)(void *), void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@Database@StateRepository@@QEAAJXZ
    long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Rollback@Database@StateRepository@@QEAAJXZ
    long Rollback();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAutoCheckpointBytes@Database@StateRepository@@QEAAJI@Z
    long SetAutoCheckpointBytes(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAutoCheckpointPages@Database@StateRepository@@QEAAJI@Z
    long SetAutoCheckpointPages(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBusyTimeout@Database@StateRepository@@QEAAJH@Z
    long SetBusyTimeout(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCheckpointOnClose@Database@StateRepository@@QEAAJ_N@Z
    long SetCheckpointOnClose(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFileChunkSize@Database@StateRepository@@QEAAJH@Z
    long SetFileChunkSize(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetJournalMode@Database@StateRepository@@QEAAJW4JournalMode@12@@Z
    long SetJournalMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLockingMode@Database@StateRepository@@QEAAJW4LockingMode@12@@Z
    long SetLockingMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPageSize@Database@StateRepository@@QEAAJI@Z
    long SetPageSize(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPragma@Database@StateRepository@@QEAAJPEBD0@Z
    long SetPragma(char const *, char const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPragma@Database@StateRepository@@QEAAJPEBD_J@Z
    long SetPragma(char const *, int64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPragma@Database@StateRepository@@QEAAJPEBD_K@Z
    long SetPragma(char const *, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSynchronous@Database@StateRepository@@QEAAJW4Synchronous@12@@Z
    long SetSynchronous(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWalFilesPersistence@Database@StateRepository@@QEAAJPEBDW4WalFilesPersistence@12@@Z
    long SetWalFilesPersistence(char const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDatabaseStatistics@Database@StateRepository@@QEAAJPEBDW4DatabaseStatisticsOptions@12@P6AJPEAX@Z2@Z
    long UpdateDatabaseStatistics(char const *, int, long ( *)(void *), void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDatabaseStatistics@Database@StateRepository@@QEAAJW4DatabaseStatisticsOptions@12@P6AJPEAX@Z1@Z
    long UpdateDatabaseStatistics(int, long ( *)(void *), void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?dal_exec@Database@StateRepository@@SAJPEAUsqlite3@@PEBDP6AHPEAXHPEAPEAD3@Z23W4Partition@2@P6AJ2@Z2@Z
    static long dal_exec(sqlite3*, char const *, int ( *)(void *, int, char * *, char * *), void *, char * *, int, long ( *)(void *), void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?dal_prepare_v2@Database@StateRepository@@SAJPEAUsqlite3@@PEBDHPEAPEAUsqlite3_stmt@@PEAPEBD@Z
    static long dal_prepare_v2(sqlite3*, char const *, int, sqlite3_stmt * *, char const * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Database@StateRepository@@QEAA@XZ
    ~Database();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckBusyStatements@Database@StateRepository@@CAJPEAUsqlite3@@_NPEAI@Z
    static long CheckBusyStatements(sqlite3*, bool, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckBusyStatementsWalker@Database@StateRepository@@CAXAEAV12@AEAVStatement@2@PEAX@Z
    static void CheckBusyStatementsWalker(WindissectOpaque &, WindissectOpaque &, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExecuteGetPragma@Database@StateRepository@@AEAAJPEBDAEAVStatement@2@@Z
    long ExecuteGetPragma(char const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FailFastIfNestingTransaction@Database@StateRepository@@CAXPEAUsqlite3@@@Z
    static void FailFastIfNestingTransaction(sqlite3*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FormatSql@Database@StateRepository@@CAJPEAD_KPEBDAEBU_GUID@@@Z
    static long FormatSql(char *, uint64_t, char const *, _GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFileSize@Database@StateRepository@@CAJPEAXAEA_J@Z
    static long GetFileSize(void *, int64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?JournalModeToString@Database@StateRepository@@CAPEBDW4JournalMode@12@@Z
    static char const * JournalModeToString(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockingModeToString@Database@StateRepository@@CAPEBDW4LockingMode@12@@Z
    static char const * LockingModeToString(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenFlagsToJournalMode@Database@StateRepository@@CA?AW4JournalMode@12@W4OpenFlags@12@@Z
    static int OpenFlagsToJournalMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenFlagsToLockingMode@Database@StateRepository@@CA?AW4LockingMode@12@W4OpenFlags@12@@Z
    static int OpenFlagsToLockingMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenFlagsToOpenFlags@Database@StateRepository@@CAHW4OpenFlags@12@@Z
    static int OpenFlagsToOpenFlags(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenFlagsToSynchronous@Database@StateRepository@@CA?AW4Synchronous@12@W4OpenFlags@12@@Z
    static int OpenFlagsToSynchronous(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenFlagsToWalFilesPersistence@Database@StateRepository@@CA?AW4WalFilesPersistence@12@W4OpenFlags@12@@Z
    static int OpenFlagsToWalFilesPersistence(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Profile@Database@StateRepository@@AEBAXPEBD_K@Z
    void Profile(char const *, uint64_t) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetConnectionId@Database@StateRepository@@AEAAJXZ
    long SetConnectionId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StringToJournalMode@Database@StateRepository@@CAJPEBDPEAW4JournalMode@12@@Z
    static long StringToJournalMode(char const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StringToLockingMode@Database@StateRepository@@CAJPEBDPEAW4LockingMode@12@@Z
    static long StringToLockingMode(char const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StringToSynchronous@Database@StateRepository@@CAJPEBDPEAW4Synchronous@12@@Z
    static long StringToSynchronous(char const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SynchronousToString@Database@StateRepository@@CAPEBDW4Synchronous@12@@Z
    static char const * SynchronousToString(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifyResourcePriorities@Database@StateRepository@@AEAAXAEBU_GUID@@PEBD@Z
    void VerifyResourcePriorities(_GUID const &, char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?dal_function_changeid_next_value@Database@StateRepository@@CAXPEAUsqlite3_context@@HPEAPEAUsqlite3_value@@@Z
    static void dal_function_changeid_next_value(sqlite3_context *, int, sqlite3_value * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?dal_function_compare_uint@Database@StateRepository@@CAXPEAUsqlite3_context@@HPEAPEAUsqlite3_value@@@Z
    static void dal_function_compare_uint(sqlite3_context *, int, sqlite3_value * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?dal_function_compress@Database@StateRepository@@CAXPEAUsqlite3_context@@HPEAPEAUsqlite3_value@@@Z
    static void dal_function_compress(sqlite3_context *, int, sqlite3_value * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?dal_function_endswith@Database@StateRepository@@CAXPEAUsqlite3_context@@HPEAPEAUsqlite3_value@@@Z
    static void dal_function_endswith(sqlite3_context *, int, sqlite3_value * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?dal_function_execution_flags@Database@StateRepository@@CAXPEAUsqlite3_context@@HPEAPEAUsqlite3_value@@@Z
    static void dal_function_execution_flags(sqlite3_context *, int, sqlite3_value * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?dal_function_ge_uint@Database@StateRepository@@CAXPEAUsqlite3_context@@HPEAPEAUsqlite3_value@@@Z
    static void dal_function_ge_uint(sqlite3_context *, int, sqlite3_value * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?dal_function_gt_uint@Database@StateRepository@@CAXPEAUsqlite3_context@@HPEAPEAUsqlite3_value@@@Z
    static void dal_function_gt_uint(sqlite3_context *, int, sqlite3_value * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?dal_function_hash_base32@Database@StateRepository@@CAXPEAUsqlite3_context@@HPEAPEAUsqlite3_value@@@Z
    static void dal_function_hash_base32(sqlite3_context *, int, sqlite3_value * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?dal_function_is_srjournal_enabled@Database@StateRepository@@CAXPEAUsqlite3_context@@HPEAPEAUsqlite3_value@@@Z
    static void dal_function_is_srjournal_enabled(sqlite3_context *, int, sqlite3_value * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?dal_function_is_triggers_enabled@Database@StateRepository@@CAXPEAUsqlite3_context@@HPEAPEAUsqlite3_value@@@Z
    static void dal_function_is_triggers_enabled(sqlite3_context *, int, sqlite3_value * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?dal_function_le_uint@Database@StateRepository@@CAXPEAUsqlite3_context@@HPEAPEAUsqlite3_value@@@Z
    static void dal_function_le_uint(sqlite3_context *, int, sqlite3_value * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?dal_function_log@Database@StateRepository@@CAXPEAUsqlite3_context@@HPEAPEAUsqlite3_value@@@Z
    static void dal_function_log(sqlite3_context *, int, sqlite3_value * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?dal_function_lt_uint@Database@StateRepository@@CAXPEAUsqlite3_context@@HPEAPEAUsqlite3_value@@@Z
    static void dal_function_lt_uint(sqlite3_context *, int, sqlite3_value * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?dal_function_max_uint@Database@StateRepository@@CAXPEAUsqlite3_context@@HPEAPEAUsqlite3_value@@@Z
    static void dal_function_max_uint(sqlite3_context *, int, sqlite3_value * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?dal_function_max_uint_Finalize@Database@StateRepository@@CAXPEAUsqlite3_context@@@Z
    static void dal_function_max_uint_Finalize(sqlite3_context *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?dal_function_max_uint_Step@Database@StateRepository@@CAXPEAUsqlite3_context@@HPEAPEAUsqlite3_value@@@Z
    static void dal_function_max_uint_Step(sqlite3_context *, int, sqlite3_value * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?dal_function_min_uint@Database@StateRepository@@CAXPEAUsqlite3_context@@HPEAPEAUsqlite3_value@@@Z
    static void dal_function_min_uint(sqlite3_context *, int, sqlite3_value * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?dal_function_min_uint_Finalize@Database@StateRepository@@CAXPEAUsqlite3_context@@@Z
    static void dal_function_min_uint_Finalize(sqlite3_context *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?dal_function_min_uint_Step@Database@StateRepository@@CAXPEAUsqlite3_context@@HPEAPEAUsqlite3_value@@@Z
    static void dal_function_min_uint_Step(sqlite3_context *, int, sqlite3_value * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?dal_function_now@Database@StateRepository@@CAXPEAUsqlite3_context@@HPEAPEAUsqlite3_value@@@Z
    static void dal_function_now(sqlite3_context *, int, sqlite3_value * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?dal_function_sroptions@Database@StateRepository@@CAXPEAUsqlite3_context@@HPEAPEAUsqlite3_value@@@Z
    static void dal_function_sroptions(sqlite3_context *, int, sqlite3_value * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?dal_function_startswith@Database@StateRepository@@CAXPEAUsqlite3_context@@HPEAPEAUsqlite3_value@@@Z
    static void dal_function_startswith(sqlite3_context *, int, sqlite3_value * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?dal_function_uncompress@Database@StateRepository@@CAXPEAUsqlite3_context@@HPEAPEAUsqlite3_value@@@Z
    static void dal_function_uncompress(sqlite3_context *, int, sqlite3_value * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?dal_function_workid@Database@StateRepository@@CAXPEAUsqlite3_context@@HPEAPEAUsqlite3_value@@@Z
    static void dal_function_workid(sqlite3_context *, int, sqlite3_value * *);
};
} // namespace StateRepository
