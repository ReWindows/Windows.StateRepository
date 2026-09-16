#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 62 member(s).
namespace Windows::Internal::StateRepository {
class PackagePolicyFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@PackagePolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@PackagePolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackagePolicy@234@@Z
    virtual long Add(::Windows::Internal::StateRepository::IPackagePolicy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearWorkByWorkId@PackagePolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long ClearWorkByWorkId(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete@PackagePolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackagePolicy@234@@Z
    virtual long Delete(::Windows::Internal::StateRepository::IPackagePolicy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByUserAndPackageAndNameAndIndex@PackagePolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackage@234@PEAUHSTRING__@@H@Z
    virtual long DeleteByUserAndPackageAndNameAndIndex(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackage *, HSTRING__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByWorkId@PackagePolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long DeleteByWorkId(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@PackagePolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByName@PackagePolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long ExistsByName(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByNameAndIndex@PackagePolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@HPEAE@Z
    virtual long ExistsByNameAndIndex(HSTRING__*, int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByNameAndIndexAndValueNumber@PackagePolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@H_KPEAE@Z
    virtual long ExistsByNameAndIndexAndValueNumber(HSTRING__*, int, uint64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByNameAndIndexAndValueString@PackagePolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@H0PEAE@Z
    virtual long ExistsByNameAndIndexAndValueString(HSTRING__*, int, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByNameAndValueNumber@PackagePolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@_KPEAE@Z
    virtual long ExistsByNameAndValueNumber(HSTRING__*, uint64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByNameAndValueString@PackagePolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@0PEAE@Z
    virtual long ExistsByNameAndValueString(HSTRING__*, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackage@PackagePolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAE@Z
    virtual long ExistsByPackage(::Windows::Internal::StateRepository::IPackage *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageAndName@PackagePolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAUHSTRING__@@PEAE@Z
    virtual long ExistsByPackageAndName(::Windows::Internal::StateRepository::IPackage *, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageAndNameAndIndex@PackagePolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAUHSTRING__@@HPEAE@Z
    virtual long ExistsByPackageAndNameAndIndex(::Windows::Internal::StateRepository::IPackage *, HSTRING__*, int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUser@PackagePolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAE@Z
    virtual long ExistsByUser(::Windows::Internal::StateRepository::IUser *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndName@PackagePolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAE@Z
    virtual long ExistsByUserAndName(::Windows::Internal::StateRepository::IUser *, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndNameAndIndex@PackagePolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@HPEAE@Z
    virtual long ExistsByUserAndNameAndIndex(::Windows::Internal::StateRepository::IUser *, HSTRING__*, int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndNameAndIndexAndValueNumber@PackagePolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@H_KPEAE@Z
    virtual long ExistsByUserAndNameAndIndexAndValueNumber(::Windows::Internal::StateRepository::IUser *, HSTRING__*, int, uint64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndNameAndIndexAndValueString@PackagePolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@H1PEAE@Z
    virtual long ExistsByUserAndNameAndIndexAndValueString(::Windows::Internal::StateRepository::IUser *, HSTRING__*, int, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndNameAndValueNumber@PackagePolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@_KPEAE@Z
    virtual long ExistsByUserAndNameAndValueNumber(::Windows::Internal::StateRepository::IUser *, HSTRING__*, uint64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndNameAndValueString@PackagePolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@1PEAE@Z
    virtual long ExistsByUserAndNameAndValueString(::Windows::Internal::StateRepository::IUser *, HSTRING__*, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackage@PackagePolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackage@234@PEAE@Z
    virtual long ExistsByUserAndPackage(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackage *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackageAndName@PackagePolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackage@234@PEAUHSTRING__@@PEAE@Z
    virtual long ExistsByUserAndPackageAndName(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackage *, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackageAndNameAndIndex@PackagePolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackage@234@PEAUHSTRING__@@HPEAE@Z
    virtual long ExistsByUserAndPackageAndNameAndIndex(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackage *, HSTRING__*, int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackageAndNameAndValueNumber@PackagePolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackage@234@PEAUHSTRING__@@_KPEAE@Z
    virtual long ExistsByUserAndPackageAndNameAndValueNumber(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackage *, HSTRING__*, uint64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackageAndNameAndValueString@PackagePolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackage@234@PEAUHSTRING__@@2PEAE@Z
    virtual long ExistsByUserAndPackageAndNameAndValueString(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackage *, HSTRING__*, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@PackagePolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVPackagePolicy@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByName@PackagePolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVPackagePolicy@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByName(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByNameAndIndex@PackagePolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@HPEAPEAU?$IVectorView@PEAVPackagePolicy@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByNameAndIndex(HSTRING__*, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByNameAndIndexAndValueNumber@PackagePolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@H_KPEAPEAU?$IVectorView@PEAVPackagePolicy@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByNameAndIndexAndValueNumber(HSTRING__*, int, uint64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByNameAndIndexAndValueString@PackagePolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@H0PEAPEAU?$IVectorView@PEAVPackagePolicy@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByNameAndIndexAndValueString(HSTRING__*, int, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByNameAndValueNumber@PackagePolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@_KPEAPEAU?$IVectorView@PEAVPackagePolicy@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByNameAndValueNumber(HSTRING__*, uint64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByNameAndValueString@PackagePolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@0PEAPEAU?$IVectorView@PEAVPackagePolicy@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByNameAndValueString(HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackage@PackagePolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAPEAU?$IVectorView@PEAVPackagePolicy@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByPackage(::Windows::Internal::StateRepository::IPackage *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackageAndName@PackagePolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVPackagePolicy@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByPackageAndName(::Windows::Internal::StateRepository::IPackage *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackageAndNameAndIndex@PackagePolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAUHSTRING__@@HPEAPEAU?$IVectorView@PEAVPackagePolicy@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByPackageAndNameAndIndex(::Windows::Internal::StateRepository::IPackage *, HSTRING__*, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUser@PackagePolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAPEAU?$IVectorView@PEAVPackagePolicy@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUser(::Windows::Internal::StateRepository::IUser *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndName@PackagePolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVPackagePolicy@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndName(::Windows::Internal::StateRepository::IUser *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndNameAndIndex@PackagePolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@HPEAPEAU?$IVectorView@PEAVPackagePolicy@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndNameAndIndex(::Windows::Internal::StateRepository::IUser *, HSTRING__*, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndNameAndIndexAndValueNumber@PackagePolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@H_KPEAPEAU?$IVectorView@PEAVPackagePolicy@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndNameAndIndexAndValueNumber(::Windows::Internal::StateRepository::IUser *, HSTRING__*, int, uint64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndNameAndIndexAndValueString@PackagePolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@H1PEAPEAU?$IVectorView@PEAVPackagePolicy@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndNameAndIndexAndValueString(::Windows::Internal::StateRepository::IUser *, HSTRING__*, int, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndNameAndValueNumber@PackagePolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@_KPEAPEAU?$IVectorView@PEAVPackagePolicy@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndNameAndValueNumber(::Windows::Internal::StateRepository::IUser *, HSTRING__*, uint64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndNameAndValueString@PackagePolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@1PEAPEAU?$IVectorView@PEAVPackagePolicy@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndNameAndValueString(::Windows::Internal::StateRepository::IUser *, HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndPackage@PackagePolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackage@234@PEAPEAU?$IVectorView@PEAVPackagePolicy@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndPackage(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackage *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndPackageAndName@PackagePolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackage@234@PEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVPackagePolicy@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndPackageAndName(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackage *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndPackageAndNameAndValueNumber@PackagePolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackage@234@PEAUHSTRING__@@_KPEAPEAU?$IVectorView@PEAVPackagePolicy@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndPackageAndNameAndValueNumber(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackage *, HSTRING__*, uint64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndPackageAndNameAndValueString@PackagePolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackage@234@PEAUHSTRING__@@2PEAPEAU?$IVectorView@PEAVPackagePolicy@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndPackageAndNameAndValueString(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackage *, HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@PackagePolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIPackagePolicy@234@@Z
    virtual long Get(int64_t, ::Windows::Internal::StateRepository::IPackagePolicy * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByUserAndPackageAndNameAndIndex@PackagePolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackage@234@PEAUHSTRING__@@HPEAPEAUIPackagePolicy@234@@Z
    virtual long GetByUserAndPackageAndNameAndIndex(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackage *, HSTRING__*, int, ::Windows::Internal::StateRepository::IPackagePolicy * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackagePolicyFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    PackagePolicyFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@PackagePolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIPackagePolicy@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::IPackagePolicy * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUserAndPackageAndNameAndIndex@PackagePolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackage@234@PEAUHSTRING__@@HPEAPEAUIPackagePolicy@234@@Z
    virtual long TryGetByUserAndPackageAndNameAndIndex(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackage *, HSTRING__*, int, ::Windows::Internal::StateRepository::IPackagePolicy * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUserIsEveryoneAndPackageAndNameAndIndex@PackagePolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAUHSTRING__@@HPEAPEAUIPackagePolicy@234@@Z
    virtual long TryGetByUserIsEveryoneAndPackageAndNameAndIndex(::Windows::Internal::StateRepository::IPackage *, HSTRING__*, int, ::Windows::Internal::StateRepository::IPackagePolicy * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@PackagePolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackagePolicy@234@@Z
    virtual long Update(::Windows::Internal::StateRepository::IPackagePolicy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateWorkId@PackagePolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJ_J0@Z
    virtual long UpdateWorkId(int64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Upsert@PackagePolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackagePolicy@234@@Z
    virtual long Upsert(::Windows::Internal::StateRepository::IPackagePolicy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@PackagePolicyFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUIPackagePolicy@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::IPackagePolicy * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackagePolicyFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~PackagePolicyFactoryServer();
};
} // namespace Windows::Internal::StateRepository
