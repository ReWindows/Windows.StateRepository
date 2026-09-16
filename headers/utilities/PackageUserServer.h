#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 58 member(s).
namespace Windows::Internal::StateRepository {
class PackageUserServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PackageUserServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Copy@PackageUserServer@StateRepository@Internal@Windows@@SAJPEAUIPackageUser@234@AEAVPackageUser@Entity@2@@Z
    static long Copy(::Windows::Internal::StateRepository::IPackageUser *, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PackageUserServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackage@PackageUserServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIPackage@234@@Z
    virtual long GetPackage(::Windows::Internal::StateRepository::IPackage * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PackageUserServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PackageUserServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUser@PackageUserServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIUser@234@@Z
    virtual long GetUser(::Windows::Internal::StateRepository::IUser * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Get_Dictionary@PackageUserServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long Get_Dictionary(unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@PackageUserServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@PackageUserServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@PackageUserServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackageUserServer@StateRepository@Internal@Windows@@QEAA@XZ
    PackageUserServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostCopy@PackageUserServer@StateRepository@Internal@Windows@@SAJPEAUIPackageUser@234@AEAVPackageUser@Entity@2@@Z
    static long PostCopy(::Windows::Internal::StateRepository::IPackageUser *, WindissectOpaque &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PackageUserServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PackageUserServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPackage@PackageUserServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@@Z
    virtual long SetPackage(::Windows::Internal::StateRepository::IPackage *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUser@PackageUserServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@@Z
    virtual long SetUser(::Windows::Internal::StateRepository::IUser *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWhenRestoredToNull@PackageUserServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long SetWhenRestoredToNull();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Set_Dictionary@PackageUserServer@StateRepository@Internal@Windows@@UEAAJIPEAE@Z
    virtual long Set_Dictionary(unsigned int, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Set_DictionaryToNull@PackageUserServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Set_DictionaryToNull();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppDataVolume@PackageUserServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_AppDataVolume(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DeploymentState@PackageUserServer@StateRepository@Internal@Windows@@UEAAJPEAW4DeploymentState@234@@Z
    virtual long get_DeploymentState(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Flags@PackageUserServer@StateRepository@Internal@Windows@@UEAAJPEAW4PackageUserFlags@234@@Z
    virtual long get_Flags(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InstallTime@PackageUserServer@StateRepository@Internal@Windows@@UEAAJPEAUDateTime@Foundation@4@@Z
    virtual long get_InstallTime(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsExplicitlyInstalled@PackageUserServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsExplicitlyInstalled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsWhenRestoredNull@PackageUserServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsWhenRestoredNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Is_DictionaryNull@PackageUserServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Is_DictionaryNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OSVersionWhenInstalled@PackageUserServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get_OSVersionWhenInstalled(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Package@PackageUserServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_Package(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_User@PackageUserServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_User(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WhenRestored@PackageUserServer@StateRepository@Internal@Windows@@UEAAJPEAUDateTime@Foundation@4@@Z
    virtual long get_WhenRestored(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__PackageUserID@PackageUserServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__PackageUserID(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Revision@PackageUserServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get__Revision(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AppDataVolume@PackageUserServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long put_AppDataVolume(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DeploymentState@PackageUserServer@StateRepository@Internal@Windows@@UEAAJW4DeploymentState@234@@Z
    virtual long put_DeploymentState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_InstallTime@PackageUserServer@StateRepository@Internal@Windows@@UEAAJUDateTime@Foundation@4@@Z
    virtual long put_InstallTime(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsExplicitlyInstalled@PackageUserServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_IsExplicitlyInstalled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_OSVersionWhenInstalled@PackageUserServer@StateRepository@Internal@Windows@@UEAAJ_K@Z
    virtual long put_OSVersionWhenInstalled(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Package@PackageUserServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long put_Package(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_User@PackageUserServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long put_User(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_WhenRestored@PackageUserServer@StateRepository@Internal@Windows@@UEAAJUDateTime@Foundation@4@@Z
    virtual long put_WhenRestored(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put__PackageUserID@PackageUserServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long put__PackageUserID(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put__Revision@PackageUserServer@StateRepository@Internal@Windows@@UEAAJ_K@Z
    virtual long put__Revision(uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageUserServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~PackageUserServer();
};
} // namespace Windows::Internal::StateRepository
