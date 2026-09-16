#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 42 member(s).
namespace Windows::Internal::StateRepository {
class AppExecutionAliasUserServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AppExecutionAliasUserServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppExecutionAliasUserServer@StateRepository@Internal@Windows@@QEAA@XZ
    AppExecutionAliasUserServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Copy@AppExecutionAliasUserServer@StateRepository@Internal@Windows@@SAJPEAUIAppExecutionAliasUser@234@AEAVAppExecutionAliasUser@Entity@2@@Z
    static long Copy(::Windows::Internal::StateRepository::IAppExecutionAliasUser *, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAliasAsStorageFile@AppExecutionAliasUserServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIStorageFile@Storage@4@@Z
    virtual long GetAliasAsStorageFile(::Windows::Storage::IStorageFile * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationIdentity@AppExecutionAliasUserServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIApplicationIdentity@234@@Z
    virtual long GetApplicationIdentity(::Windows::Internal::StateRepository::IApplicationIdentity * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AppExecutionAliasUserServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AppExecutionAliasUserServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AppExecutionAliasUserServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUser@AppExecutionAliasUserServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIUser@234@@Z
    virtual long GetUser(::Windows::Internal::StateRepository::IUser * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Get_Dictionary@AppExecutionAliasUserServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long Get_Dictionary(unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@AppExecutionAliasUserServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@AppExecutionAliasUserServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@AppExecutionAliasUserServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AppExecutionAliasUserServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AppExecutionAliasUserServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAliasAsStorageFile@AppExecutionAliasUserServer@StateRepository@Internal@Windows@@UEAAJPEAUIStorageFile@Storage@4@@Z
    virtual long SetAliasAsStorageFile(::Windows::Storage::IStorageFile *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetApplicationIdentity@AppExecutionAliasUserServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplicationIdentity@234@@Z
    virtual long SetApplicationIdentity(::Windows::Internal::StateRepository::IApplicationIdentity *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUser@AppExecutionAliasUserServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@@Z
    virtual long SetUser(::Windows::Internal::StateRepository::IUser *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Set_Dictionary@AppExecutionAliasUserServer@StateRepository@Internal@Windows@@UEAAJIPEAE@Z
    virtual long Set_Dictionary(unsigned int, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Set_DictionaryToNull@AppExecutionAliasUserServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Set_DictionaryToNull();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Alias@AppExecutionAliasUserServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Alias(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ApplicationIdentity@AppExecutionAliasUserServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_ApplicationIdentity(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Is_DictionaryNull@AppExecutionAliasUserServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Is_DictionaryNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Status@AppExecutionAliasUserServer@StateRepository@Internal@Windows@@UEAAJPEAW4AppExecutionAliasStatus@234@@Z
    virtual long get_Status(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_User@AppExecutionAliasUserServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_User(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__AppExecutionAliasUserID@AppExecutionAliasUserServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__AppExecutionAliasUserID(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Revision@AppExecutionAliasUserServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get__Revision(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Alias@AppExecutionAliasUserServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Alias(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ApplicationIdentity@AppExecutionAliasUserServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long put_ApplicationIdentity(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Status@AppExecutionAliasUserServer@StateRepository@Internal@Windows@@UEAAJW4AppExecutionAliasStatus@234@@Z
    virtual long put_Status(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_User@AppExecutionAliasUserServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long put_User(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put__AppExecutionAliasUserID@AppExecutionAliasUserServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long put__AppExecutionAliasUserID(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put__Revision@AppExecutionAliasUserServer@StateRepository@Internal@Windows@@UEAAJ_K@Z
    virtual long put__Revision(uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppExecutionAliasUserServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~AppExecutionAliasUserServer();
};
} // namespace Windows::Internal::StateRepository
