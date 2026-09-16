#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 38 member(s).
namespace StateRepository {
class CacheManagement {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIntegrity@CacheManagement@StateRepository@@SAJAEAVDatabase@2@AEAVManager_NoThrow@Cache@2@W4ExecutionFlags@2@AEA_K@Z
    static long CheckIntegrity(WindissectOpaque &, WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteIndexKeys@CacheManagement@StateRepository@@SAJAEAVContext_NoThrow@Cache@2@PEBG@Z
    static long DeleteIndexKeys(WindissectOpaque &, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteIndexKeysIfExists@CacheManagement@StateRepository@@SAJAEAVManager_NoThrow@Cache@2@AEAVContext_NoThrow@42@PEBG2@Z
    static long DeleteIndexKeysIfExists(WindissectOpaque &, WindissectOpaque &, unsigned short const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIndexKeys@CacheManagement@StateRepository@@SAJAEAVContext_NoThrow@Cache@2@PEBGPEAPEAG@Z
    static long GetIndexKeys(WindissectOpaque &, unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CacheManagement@StateRepository@@SAJW4Options@12@P6AJPEAX@Z1@Z
    static long Initialize(int, long ( *)(void *), void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@CacheManagement@StateRepository@@SAJW4Options@12@@Z
    static long Update(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@CacheManagement@StateRepository@@SAJAEAVDatabase@2@W4Options@12@@Z
    static long Update(WindissectOpaque &, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CacheManagement@StateRepository@@CAJAEAVDatabase@2@W4Options@12@P6AJPEAX@Z2@Z
    static long _Initialize(WindissectOpaque &, int, long ( *)(void *), void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize_Structure@CacheManagement@StateRepository@@CAJAEAVManager_NoThrow@Cache@2@@Z
    static long _Initialize_Structure(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Shutdown@CacheManagement@StateRepository@@CAJW4Options@12@@Z
    static long _Shutdown(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Update@CacheManagement@StateRepository@@CAJAEAVDatabase@2@W4Options@12@@Z
    static long _Update(WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Update_JournalEntry@CacheManagement@StateRepository@@CAJAEAVDatabase@2@AEAVManager_NoThrow@Cache@2@AEAVSRJournal@Entity@2@@Z
    static long _Update_JournalEntry(WindissectOpaque &, WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Update_JournalEntry_Activation@CacheManagement@StateRepository@@CAJAEAVDatabase@2@AEAVManager_NoThrow@Cache@2@AEAVSRJournal@Entity@2@@Z
    static long _Update_JournalEntry_Activation(WindissectOpaque &, WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Update_JournalEntry_AppExtension@CacheManagement@StateRepository@@CAJAEAVDatabase@2@AEAVManager_NoThrow@Cache@2@AEAVSRJournal@Entity@2@@Z
    static long _Update_JournalEntry_AppExtension(WindissectOpaque &, WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Update_JournalEntry_AppUriHandler@CacheManagement@StateRepository@@CAJAEAVDatabase@2@AEAVManager_NoThrow@Cache@2@AEAVSRJournal@Entity@2@@Z
    static long _Update_JournalEntry_AppUriHandler(WindissectOpaque &, WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Update_JournalEntry_AppUriHandlerGroup@CacheManagement@StateRepository@@CAJAEAVDatabase@2@AEAVManager_NoThrow@Cache@2@AEAVSRJournal@Entity@2@@Z
    static long _Update_JournalEntry_AppUriHandlerGroup(WindissectOpaque &, WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Update_JournalEntry_Application@CacheManagement@StateRepository@@CAJAEAVDatabase@2@AEAVManager_NoThrow@Cache@2@AEAVSRJournal@Entity@2@@Z
    static long _Update_JournalEntry_Application(WindissectOpaque &, WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Update_JournalEntry_ApplicationExtension@CacheManagement@StateRepository@@CAJAEAVDatabase@2@AEAVManager_NoThrow@Cache@2@AEAVSRJournal@Entity@2@@Z
    static long _Update_JournalEntry_ApplicationExtension(WindissectOpaque &, WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Update_JournalEntry_ApplicationUser@CacheManagement@StateRepository@@CAJAEAVDatabase@2@AEAVManager_NoThrow@Cache@2@AEAVSRJournal@Entity@2@@Z
    static long _Update_JournalEntry_ApplicationUser(WindissectOpaque &, WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Update_JournalEntry_DependencyGraph@CacheManagement@StateRepository@@CAJAEAVDatabase@2@AEAVManager_NoThrow@Cache@2@AEAVSRJournal@Entity@2@@Z
    static long _Update_JournalEntry_DependencyGraph(WindissectOpaque &, WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Update_JournalEntry_DynamicAppUriHandler@CacheManagement@StateRepository@@CAJAEAVDatabase@2@AEAVManager_NoThrow@Cache@2@AEAVSRJournal@Entity@2@@Z
    static long _Update_JournalEntry_DynamicAppUriHandler(WindissectOpaque &, WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Update_JournalEntry_DynamicAppUriHandlerGroup@CacheManagement@StateRepository@@CAJAEAVDatabase@2@AEAVManager_NoThrow@Cache@2@AEAVSRJournal@Entity@2@@Z
    static long _Update_JournalEntry_DynamicAppUriHandlerGroup(WindissectOpaque &, WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Update_JournalEntry_FileTypeAssociation@CacheManagement@StateRepository@@CAJAEAVDatabase@2@AEAVManager_NoThrow@Cache@2@AEAVSRJournal@Entity@2@@Z
    static long _Update_JournalEntry_FileTypeAssociation(WindissectOpaque &, WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Update_JournalEntry_HostRuntime@CacheManagement@StateRepository@@CAJAEAVDatabase@2@AEAVManager_NoThrow@Cache@2@AEAVSRJournal@Entity@2@@Z
    static long _Update_JournalEntry_HostRuntime(WindissectOpaque &, WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Update_JournalEntry_OptionalBundle@CacheManagement@StateRepository@@CAJAEAVDatabase@2@AEAVManager_NoThrow@Cache@2@AEAVSRJournal@Entity@2@@Z
    static long _Update_JournalEntry_OptionalBundle(WindissectOpaque &, WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Update_JournalEntry_Package@CacheManagement@StateRepository@@CAJAEAVDatabase@2@AEAVManager_NoThrow@Cache@2@AEAVSRJournal@Entity@2@@Z
    static long _Update_JournalEntry_Package(WindissectOpaque &, WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Update_JournalEntry_PackageExtension@CacheManagement@StateRepository@@CAJAEAVDatabase@2@AEAVManager_NoThrow@Cache@2@AEAVSRJournal@Entity@2@@Z
    static long _Update_JournalEntry_PackageExtension(WindissectOpaque &, WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Update_JournalEntry_PackageExternalLocation@CacheManagement@StateRepository@@CAJAEAVDatabase@2@AEAVManager_NoThrow@Cache@2@AEAVSRJournal@Entity@2@@Z
    static long _Update_JournalEntry_PackageExternalLocation(WindissectOpaque &, WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Update_JournalEntry_PackageFamily@CacheManagement@StateRepository@@CAJAEAVDatabase@2@AEAVManager_NoThrow@Cache@2@AEAVSRJournal@Entity@2@@Z
    static long _Update_JournalEntry_PackageFamily(WindissectOpaque &, WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Update_JournalEntry_PackageFamilyUser@CacheManagement@StateRepository@@CAJAEAVDatabase@2@AEAVManager_NoThrow@Cache@2@AEAVSRJournal@Entity@2@@Z
    static long _Update_JournalEntry_PackageFamilyUser(WindissectOpaque &, WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Update_JournalEntry_PackageMachineStatus@CacheManagement@StateRepository@@CAJAEAVDatabase@2@AEAVManager_NoThrow@Cache@2@AEAVSRJournal@Entity@2@@Z
    static long _Update_JournalEntry_PackageMachineStatus(WindissectOpaque &, WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Update_JournalEntry_PackageProperty@CacheManagement@StateRepository@@CAJAEAVDatabase@2@AEAVManager_NoThrow@Cache@2@AEAVSRJournal@Entity@2@@Z
    static long _Update_JournalEntry_PackageProperty(WindissectOpaque &, WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Update_JournalEntry_PackageUser@CacheManagement@StateRepository@@CAJAEAVDatabase@2@AEAVManager_NoThrow@Cache@2@AEAVSRJournal@Entity@2@@Z
    static long _Update_JournalEntry_PackageUser(WindissectOpaque &, WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Update_JournalEntry_PackageUserStatus@CacheManagement@StateRepository@@CAJAEAVDatabase@2@AEAVManager_NoThrow@Cache@2@AEAVSRJournal@Entity@2@@Z
    static long _Update_JournalEntry_PackageUserStatus(WindissectOpaque &, WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Update_JournalEntry_PkgExtension@CacheManagement@StateRepository@@CAJAEAVDatabase@2@AEAVManager_NoThrow@Cache@2@AEAVSRJournal@Entity@2@@Z
    static long _Update_JournalEntry_PkgExtension(WindissectOpaque &, WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Update_JournalEntry_Protocol@CacheManagement@StateRepository@@CAJAEAVDatabase@2@AEAVManager_NoThrow@Cache@2@AEAVSRJournal@Entity@2@@Z
    static long _Update_JournalEntry_Protocol(WindissectOpaque &, WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Update_JournalEntry_SecondaryTileUser@CacheManagement@StateRepository@@CAJAEAVDatabase@2@AEAVManager_NoThrow@Cache@2@AEAVSRJournal@Entity@2@@Z
    static long _Update_JournalEntry_SecondaryTileUser(WindissectOpaque &, WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Update_JournalEntry_User@CacheManagement@StateRepository@@CAJAEAVDatabase@2@AEAVManager_NoThrow@Cache@2@AEAVSRJournal@Entity@2@@Z
    static long _Update_JournalEntry_User(WindissectOpaque &, WindissectOpaque &, WindissectOpaque &);
};
} // namespace StateRepository
