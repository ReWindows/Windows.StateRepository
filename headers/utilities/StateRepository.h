#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 9 member(s).
class StateRepository {
public:
    class AutoAddDatabaseToCache;
    class AutoCoSid;
    class AutoDetachDatabase;
    class AutoEnableTriggersScopeExit;
    class AutoSid;
    class AutoTransaction;
    class Blob;
    class CacheManagement;
    class ChangeTracking;
    class Database;
    class DatabaseCache;
    class DatabaseCacheEntry;
    class DatabaseCacheSingleton;
    class DatabaseTriggers;
    class Entities;
    class Globals;
    class Integrity;
    class Localization;
    class Logging;
    class LongRunningTransaction;
    class Macros;
    class Maintenance;
    class MultiUser;
    class PackageDependency;
    class ProcessIdList_NoThrow;
    class ProcessPackageDependency;
    class Repair;
    class Repository;
    class Security;
    class Service;
    class ServiceControl;
    class ServiceRpc;
    class Snapshot;
    class Statement;
    class StatementCache;
    class StatementCacheEntry;
    class StatementExecution;
    class StringList_NoThrow;
    class Text;
    class TextA;
    class Time;
    class Utf16String;
    class VfsNoImpersonation;
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPartitionDatabaseFilename@StateRepository@@YAJW4Partition@1@PEAPEAG@Z
    long GetPartitionDatabaseFilename(int, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@StateRepository@@YAJW4InitializeFlags@1@@Z
    long Initialize(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoggerInitialized@StateRepository@@YAXXZ
    void LoggerInitialized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoggerShutdown@StateRepository@@YAXXZ
    void LoggerShutdown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@StateRepository@@YAJP6AXXZW4InitializeFlags@1@@Z
    long Shutdown(void ( *)(void), int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@StateRepository@@YAJW4InitializeFlags@1@@Z
    long Shutdown(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateUupProductChanges@StateRepository@@YAJXZ
    long _UpdateUupProductChanges();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Upgrade@StateRepository@@YAJXZ
    long _Upgrade();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpgradeTdlToTileStore@StateRepository@@YAXXZ
    void _UpgradeTdlToTileStore();
};
