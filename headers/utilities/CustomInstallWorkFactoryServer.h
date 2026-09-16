#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 26 member(s).
namespace Windows::Internal::StateRepository {
class CustomInstallWorkFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CustomInstallWorkFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@CustomInstallWorkFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUICustomInstallWork@234@@Z
    virtual long Add(::Windows::Internal::StateRepository::ICustomInstallWork *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearWorkByWorkId@CustomInstallWorkFactoryServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long ClearWorkByWorkId(int64_t);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CustomInstallWorkFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    CustomInstallWorkFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete@CustomInstallWorkFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUICustomInstallWork@234@@Z
    virtual long Delete(::Windows::Internal::StateRepository::ICustomInstallWork *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByUserAndPackageAndIndex@CustomInstallWorkFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackage@234@H@Z
    virtual long DeleteByUserAndPackageAndIndex(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackage *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByUserAndPackageAndName@CustomInstallWorkFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackage@234@PEAUHSTRING__@@@Z
    virtual long DeleteByUserAndPackageAndName(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackage *, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByWorkId@CustomInstallWorkFactoryServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long DeleteByWorkId(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@CustomInstallWorkFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUser@CustomInstallWorkFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAE@Z
    virtual long ExistsByUser(::Windows::Internal::StateRepository::IUser *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackage@CustomInstallWorkFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackage@234@PEAE@Z
    virtual long ExistsByUserAndPackage(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackage *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackageAndIndex@CustomInstallWorkFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackage@234@HPEAE@Z
    virtual long ExistsByUserAndPackageAndIndex(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackage *, int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackageAndName@CustomInstallWorkFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackage@234@PEAUHSTRING__@@PEAE@Z
    virtual long ExistsByUserAndPackageAndName(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackage *, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@CustomInstallWorkFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVCustomInstallWork@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUser@CustomInstallWorkFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAPEAU?$IVectorView@PEAVCustomInstallWork@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUser(::Windows::Internal::StateRepository::IUser *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndPackage@CustomInstallWorkFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackage@234@PEAPEAU?$IVectorView@PEAVCustomInstallWork@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndPackage(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackage *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndPackageAnd_WorkId@CustomInstallWorkFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackage@234@_JPEAPEAU?$IVectorView@PEAVCustomInstallWork@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndPackageAnd_WorkId(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackage *, int64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@CustomInstallWorkFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUICustomInstallWork@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::ICustomInstallWork * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUserAndPackageAndIndex@CustomInstallWorkFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackage@234@HPEAPEAUICustomInstallWork@234@@Z
    virtual long TryGetByUserAndPackageAndIndex(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackage *, int, ::Windows::Internal::StateRepository::ICustomInstallWork * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUserAndPackageAndName@CustomInstallWorkFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackage@234@PEAUHSTRING__@@PEAPEAUICustomInstallWork@234@@Z
    virtual long TryGetByUserAndPackageAndName(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackage *, HSTRING__*, ::Windows::Internal::StateRepository::ICustomInstallWork * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@CustomInstallWorkFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUICustomInstallWork@234@@Z
    virtual long Update(::Windows::Internal::StateRepository::ICustomInstallWork *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateWorkId@CustomInstallWorkFactoryServer@StateRepository@Internal@Windows@@UEAAJ_J0@Z
    virtual long UpdateWorkId(int64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@CustomInstallWorkFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUICustomInstallWork@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::ICustomInstallWork * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CustomInstallWorkFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~CustomInstallWorkFactoryServer();
};
} // namespace Windows::Internal::StateRepository
