#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 58 member(s).
namespace Windows::Internal::StateRepository {
class CustomInstallWorkServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CustomInstallWorkServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Copy@CustomInstallWorkServer@StateRepository@Internal@Windows@@SAJPEAUICustomInstallWork@234@AEAVCustomInstallWork@Entity@2@@Z
    static long Copy(::Windows::Internal::StateRepository::ICustomInstallWork *, WindissectOpaque &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CustomInstallWorkServer@StateRepository@Internal@Windows@@QEAA@XZ
    CustomInstallWorkServer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFileAsStorageFile@CustomInstallWorkServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIStorageFile@Storage@4@@Z
    virtual long GetFileAsStorageFile(::Windows::Storage::IStorageFile * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CustomInstallWorkServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackage@CustomInstallWorkServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIPackage@234@@Z
    virtual long GetPackage(::Windows::Internal::StateRepository::IPackage * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CustomInstallWorkServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CustomInstallWorkServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUser@CustomInstallWorkServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIUser@234@@Z
    virtual long GetUser(::Windows::Internal::StateRepository::IUser * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Get_Dictionary@CustomInstallWorkServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long Get_Dictionary(unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CustomInstallWorkServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CustomInstallWorkServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CustomInstallWorkServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CustomInstallWorkServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CustomInstallWorkServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetArgumentsToNull@CustomInstallWorkServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long SetArgumentsToNull();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFileAsStorageFile@CustomInstallWorkServer@StateRepository@Internal@Windows@@UEAAJPEAUIStorageFile@Storage@4@@Z
    virtual long SetFileAsStorageFile(::Windows::Storage::IStorageFile *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPackage@CustomInstallWorkServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@@Z
    virtual long SetPackage(::Windows::Internal::StateRepository::IPackage *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUser@CustomInstallWorkServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@@Z
    virtual long SetUser(::Windows::Internal::StateRepository::IUser *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Set_Dictionary@CustomInstallWorkServer@StateRepository@Internal@Windows@@UEAAJIPEAE@Z
    virtual long Set_Dictionary(unsigned int, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Set_DictionaryToNull@CustomInstallWorkServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Set_DictionaryToNull();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Arguments@CustomInstallWorkServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Arguments(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_File@CustomInstallWorkServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_File(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Flags@CustomInstallWorkServer@StateRepository@Internal@Windows@@UEAAJPEAW4CustomInstallWorkFlags@234@@Z
    virtual long get_Flags(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Index@CustomInstallWorkServer@StateRepository@Internal@Windows@@UEAAJPEAH@Z
    virtual long get_Index(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsArgumentsNull@CustomInstallWorkServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsArgumentsNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Is_DictionaryNull@CustomInstallWorkServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Is_DictionaryNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MustRunUninstall@CustomInstallWorkServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_MustRunUninstall(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Name@CustomInstallWorkServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Name(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Package@CustomInstallWorkServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_Package(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Repair@CustomInstallWorkServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Repair(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Status@CustomInstallWorkServer@StateRepository@Internal@Windows@@UEAAJPEAW4CustomInstallWorkStatus@234@@Z
    virtual long get_Status(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Uninstall@CustomInstallWorkServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Uninstall(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_User@CustomInstallWorkServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_User(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__CustomInstallWorkID@CustomInstallWorkServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__CustomInstallWorkID(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Revision@CustomInstallWorkServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get__Revision(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Arguments@CustomInstallWorkServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Arguments(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_File@CustomInstallWorkServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_File(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Flags@CustomInstallWorkServer@StateRepository@Internal@Windows@@UEAAJW4CustomInstallWorkFlags@234@@Z
    virtual long put_Flags(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Index@CustomInstallWorkServer@StateRepository@Internal@Windows@@UEAAJH@Z
    virtual long put_Index(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MustRunUninstall@CustomInstallWorkServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_MustRunUninstall(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Name@CustomInstallWorkServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Name(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Package@CustomInstallWorkServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long put_Package(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Repair@CustomInstallWorkServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_Repair(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Status@CustomInstallWorkServer@StateRepository@Internal@Windows@@UEAAJW4CustomInstallWorkStatus@234@@Z
    virtual long put_Status(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Uninstall@CustomInstallWorkServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_Uninstall(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_User@CustomInstallWorkServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long put_User(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put__CustomInstallWorkID@CustomInstallWorkServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long put__CustomInstallWorkID(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put__Revision@CustomInstallWorkServer@StateRepository@Internal@Windows@@UEAAJ_K@Z
    virtual long put__Revision(uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CustomInstallWorkServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~CustomInstallWorkServer();
};
} // namespace Windows::Internal::StateRepository
