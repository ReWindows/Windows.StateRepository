#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 17 member(s).
namespace Windows::Internal::StateRepository {
class FileFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@FileFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@FileFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByDigest@FileFactoryServer@StateRepository@Internal@Windows@@UEAAJIPEAE0@Z
    virtual long ExistsByDigest(unsigned int, unsigned char *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackage@FileFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAE@Z
    virtual long ExistsByPackage(::Windows::Internal::StateRepository::IPackage *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageAndRelativeFilePath@FileFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAUHSTRING__@@PEAE@Z
    virtual long ExistsByPackageAndRelativeFilePath(::Windows::Internal::StateRepository::IPackage *, HSTRING__*, unsigned char *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0FileFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    FileFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@FileFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVFile@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByDigest@FileFactoryServer@StateRepository@Internal@Windows@@UEAAJIPEAEPEAPEAU?$IVectorView@PEAVFile@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByDigest(unsigned int, unsigned char *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackage@FileFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAPEAU?$IVectorView@PEAVFile@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByPackage(::Windows::Internal::StateRepository::IPackage *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@FileFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIFile@234@@Z
    virtual long Get(int64_t, ::Windows::Internal::StateRepository::IFile * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByPackageAndRelativeFilePath@FileFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAUHSTRING__@@PEAPEAUIFile@234@@Z
    virtual long GetByPackageAndRelativeFilePath(::Windows::Internal::StateRepository::IPackage *, HSTRING__*, ::Windows::Internal::StateRepository::IFile * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@FileFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIFile@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::IFile * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByPackageAndRelativeFilePath@FileFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAUHSTRING__@@PEAPEAUIFile@234@@Z
    virtual long TryGetByPackageAndRelativeFilePath(::Windows::Internal::StateRepository::IPackage *, HSTRING__*, ::Windows::Internal::StateRepository::IFile * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@FileFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUIFile@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::IFile * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FileFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~FileFactoryServer();
};
} // namespace Windows::Internal::StateRepository
