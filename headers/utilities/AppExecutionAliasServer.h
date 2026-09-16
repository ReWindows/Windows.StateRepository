#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 30 member(s).
namespace Windows::Internal::StateRepository {
class AppExecutionAliasServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AppExecutionAliasServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppExecutionAliasServer@StateRepository@Internal@Windows@@QEAA@XZ
    AppExecutionAliasServer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAliasAsStorageFile@AppExecutionAliasServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIStorageFile@Storage@4@@Z
    virtual long GetAliasAsStorageFile(::Windows::Storage::IStorageFile * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExtension@AppExecutionAliasServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIApplicationExtension@234@@Z
    virtual long GetExtension(::Windows::Internal::StateRepository::IApplicationExtension * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AppExecutionAliasServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AppExecutionAliasServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AppExecutionAliasServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Get_Dictionary@AppExecutionAliasServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long Get_Dictionary(unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@AppExecutionAliasServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@AppExecutionAliasServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@AppExecutionAliasServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AppExecutionAliasServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AppExecutionAliasServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Alias@AppExecutionAliasServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Alias(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AllowOverride@AppExecutionAliasServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_AllowOverride(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Extension@AppExecutionAliasServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_Extension(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Flags@AppExecutionAliasServer@StateRepository@Internal@Windows@@UEAAJPEAW4AppExecutionAliasFlags@234@@Z
    virtual long get_Flags(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Is_DictionaryNull@AppExecutionAliasServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Is_DictionaryNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__AppExecutionAliasID@AppExecutionAliasServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__AppExecutionAliasID(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Revision@AppExecutionAliasServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get__Revision(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AllowOverride@AppExecutionAliasServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_AllowOverride(unsigned char);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppExecutionAliasServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~AppExecutionAliasServer();
};
} // namespace Windows::Internal::StateRepository
