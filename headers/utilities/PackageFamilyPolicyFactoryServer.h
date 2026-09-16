#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 60 member(s).
namespace Windows::Internal::StateRepository {
class PackageFamilyPolicyFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@PackageFamilyPolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@PackageFamilyPolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackageFamilyPolicy@234@@Z
    virtual long Add(::Windows::Internal::StateRepository::IPackageFamilyPolicy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearWorkByWorkId@PackageFamilyPolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long ClearWorkByWorkId(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete@PackageFamilyPolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackageFamilyPolicy@234@@Z
    virtual long Delete(::Windows::Internal::StateRepository::IPackageFamilyPolicy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByUserAndPackageFamilyAndNameAndIndex@PackageFamilyPolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackageFamily@234@PEAUHSTRING__@@H@Z
    virtual long DeleteByUserAndPackageFamilyAndNameAndIndex(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackageFamily *, HSTRING__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByWorkId@PackageFamilyPolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long DeleteByWorkId(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@PackageFamilyPolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByName@PackageFamilyPolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long ExistsByName(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByNameAndIndex@PackageFamilyPolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@HPEAE@Z
    virtual long ExistsByNameAndIndex(HSTRING__*, int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByNameAndIndexAndValueNumber@PackageFamilyPolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@H_KPEAE@Z
    virtual long ExistsByNameAndIndexAndValueNumber(HSTRING__*, int, uint64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByNameAndIndexAndValueString@PackageFamilyPolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@H0PEAE@Z
    virtual long ExistsByNameAndIndexAndValueString(HSTRING__*, int, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByNameAndValueNumber@PackageFamilyPolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@_KPEAE@Z
    virtual long ExistsByNameAndValueNumber(HSTRING__*, uint64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByNameAndValueString@PackageFamilyPolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@0PEAE@Z
    virtual long ExistsByNameAndValueString(HSTRING__*, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageFamily@PackageFamilyPolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackageFamily@234@PEAE@Z
    virtual long ExistsByPackageFamily(::Windows::Internal::StateRepository::IPackageFamily *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageFamilyAndName@PackageFamilyPolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackageFamily@234@PEAUHSTRING__@@PEAE@Z
    virtual long ExistsByPackageFamilyAndName(::Windows::Internal::StateRepository::IPackageFamily *, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageFamilyAndNameAndIndex@PackageFamilyPolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackageFamily@234@PEAUHSTRING__@@HPEAE@Z
    virtual long ExistsByPackageFamilyAndNameAndIndex(::Windows::Internal::StateRepository::IPackageFamily *, HSTRING__*, int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUser@PackageFamilyPolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAE@Z
    virtual long ExistsByUser(::Windows::Internal::StateRepository::IUser *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndName@PackageFamilyPolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAE@Z
    virtual long ExistsByUserAndName(::Windows::Internal::StateRepository::IUser *, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndNameAndIndex@PackageFamilyPolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@HPEAE@Z
    virtual long ExistsByUserAndNameAndIndex(::Windows::Internal::StateRepository::IUser *, HSTRING__*, int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndNameAndIndexAndValueNumber@PackageFamilyPolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@H_KPEAE@Z
    virtual long ExistsByUserAndNameAndIndexAndValueNumber(::Windows::Internal::StateRepository::IUser *, HSTRING__*, int, uint64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndNameAndIndexAndValueString@PackageFamilyPolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@H1PEAE@Z
    virtual long ExistsByUserAndNameAndIndexAndValueString(::Windows::Internal::StateRepository::IUser *, HSTRING__*, int, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndNameAndValueNumber@PackageFamilyPolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@_KPEAE@Z
    virtual long ExistsByUserAndNameAndValueNumber(::Windows::Internal::StateRepository::IUser *, HSTRING__*, uint64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndNameAndValueString@PackageFamilyPolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@1PEAE@Z
    virtual long ExistsByUserAndNameAndValueString(::Windows::Internal::StateRepository::IUser *, HSTRING__*, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackageFamily@PackageFamilyPolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackageFamily@234@PEAE@Z
    virtual long ExistsByUserAndPackageFamily(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackageFamily *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackageFamilyAndName@PackageFamilyPolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackageFamily@234@PEAUHSTRING__@@PEAE@Z
    virtual long ExistsByUserAndPackageFamilyAndName(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackageFamily *, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackageFamilyAndNameAndIndex@PackageFamilyPolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackageFamily@234@PEAUHSTRING__@@HPEAE@Z
    virtual long ExistsByUserAndPackageFamilyAndNameAndIndex(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackageFamily *, HSTRING__*, int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackageFamilyAndNameAndValueNumber@PackageFamilyPolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackageFamily@234@PEAUHSTRING__@@_KPEAE@Z
    virtual long ExistsByUserAndPackageFamilyAndNameAndValueNumber(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackageFamily *, HSTRING__*, uint64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackageFamilyAndNameAndValueString@PackageFamilyPolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackageFamily@234@PEAUHSTRING__@@2PEAE@Z
    virtual long ExistsByUserAndPackageFamilyAndNameAndValueString(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackageFamily *, HSTRING__*, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@PackageFamilyPolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVPackageFamilyPolicy@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByName@PackageFamilyPolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVPackageFamilyPolicy@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByName(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByNameAndIndex@PackageFamilyPolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@HPEAPEAU?$IVectorView@PEAVPackageFamilyPolicy@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByNameAndIndex(HSTRING__*, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByNameAndIndexAndValueNumber@PackageFamilyPolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@H_KPEAPEAU?$IVectorView@PEAVPackageFamilyPolicy@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByNameAndIndexAndValueNumber(HSTRING__*, int, uint64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByNameAndIndexAndValueString@PackageFamilyPolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@H0PEAPEAU?$IVectorView@PEAVPackageFamilyPolicy@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByNameAndIndexAndValueString(HSTRING__*, int, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByNameAndValueNumber@PackageFamilyPolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@_KPEAPEAU?$IVectorView@PEAVPackageFamilyPolicy@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByNameAndValueNumber(HSTRING__*, uint64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByNameAndValueString@PackageFamilyPolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@0PEAPEAU?$IVectorView@PEAVPackageFamilyPolicy@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByNameAndValueString(HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackageFamily@PackageFamilyPolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackageFamily@234@PEAPEAU?$IVectorView@PEAVPackageFamilyPolicy@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByPackageFamily(::Windows::Internal::StateRepository::IPackageFamily *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackageFamilyAndName@PackageFamilyPolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackageFamily@234@PEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVPackageFamilyPolicy@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByPackageFamilyAndName(::Windows::Internal::StateRepository::IPackageFamily *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackageFamilyAndNameAndIndex@PackageFamilyPolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackageFamily@234@PEAUHSTRING__@@HPEAPEAU?$IVectorView@PEAVPackageFamilyPolicy@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByPackageFamilyAndNameAndIndex(::Windows::Internal::StateRepository::IPackageFamily *, HSTRING__*, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUser@PackageFamilyPolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAPEAU?$IVectorView@PEAVPackageFamilyPolicy@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUser(::Windows::Internal::StateRepository::IUser *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndName@PackageFamilyPolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVPackageFamilyPolicy@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndName(::Windows::Internal::StateRepository::IUser *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndNameAndIndex@PackageFamilyPolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@HPEAPEAU?$IVectorView@PEAVPackageFamilyPolicy@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndNameAndIndex(::Windows::Internal::StateRepository::IUser *, HSTRING__*, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndNameAndIndexAndValueNumber@PackageFamilyPolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@H_KPEAPEAU?$IVectorView@PEAVPackageFamilyPolicy@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndNameAndIndexAndValueNumber(::Windows::Internal::StateRepository::IUser *, HSTRING__*, int, uint64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndNameAndIndexAndValueString@PackageFamilyPolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@H1PEAPEAU?$IVectorView@PEAVPackageFamilyPolicy@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndNameAndIndexAndValueString(::Windows::Internal::StateRepository::IUser *, HSTRING__*, int, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndNameAndValueNumber@PackageFamilyPolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@_KPEAPEAU?$IVectorView@PEAVPackageFamilyPolicy@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndNameAndValueNumber(::Windows::Internal::StateRepository::IUser *, HSTRING__*, uint64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndNameAndValueString@PackageFamilyPolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@1PEAPEAU?$IVectorView@PEAVPackageFamilyPolicy@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndNameAndValueString(::Windows::Internal::StateRepository::IUser *, HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndPackageFamily@PackageFamilyPolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackageFamily@234@PEAPEAU?$IVectorView@PEAVPackageFamilyPolicy@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndPackageFamily(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackageFamily *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndPackageFamilyAndName@PackageFamilyPolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackageFamily@234@PEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVPackageFamilyPolicy@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndPackageFamilyAndName(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackageFamily *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndPackageFamilyAndNameAndValueNumber@PackageFamilyPolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackageFamily@234@PEAUHSTRING__@@_KPEAPEAU?$IVectorView@PEAVPackageFamilyPolicy@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndPackageFamilyAndNameAndValueNumber(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackageFamily *, HSTRING__*, uint64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndPackageFamilyAndNameAndValueString@PackageFamilyPolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackageFamily@234@PEAUHSTRING__@@2PEAPEAU?$IVectorView@PEAVPackageFamilyPolicy@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndPackageFamilyAndNameAndValueString(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackageFamily *, HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@PackageFamilyPolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIPackageFamilyPolicy@234@@Z
    virtual long Get(int64_t, ::Windows::Internal::StateRepository::IPackageFamilyPolicy * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByUserAndPackageFamilyAndNameAndIndex@PackageFamilyPolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackageFamily@234@PEAUHSTRING__@@HPEAPEAUIPackageFamilyPolicy@234@@Z
    virtual long GetByUserAndPackageFamilyAndNameAndIndex(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackageFamily *, HSTRING__*, int, ::Windows::Internal::StateRepository::IPackageFamilyPolicy * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackageFamilyPolicyFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    PackageFamilyPolicyFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@PackageFamilyPolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIPackageFamilyPolicy@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::IPackageFamilyPolicy * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUserAndPackageFamilyAndNameAndIndex@PackageFamilyPolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackageFamily@234@PEAUHSTRING__@@HPEAPEAUIPackageFamilyPolicy@234@@Z
    virtual long TryGetByUserAndPackageFamilyAndNameAndIndex(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackageFamily *, HSTRING__*, int, ::Windows::Internal::StateRepository::IPackageFamilyPolicy * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@PackageFamilyPolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackageFamilyPolicy@234@@Z
    virtual long Update(::Windows::Internal::StateRepository::IPackageFamilyPolicy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateWorkId@PackageFamilyPolicyFactoryServer@StateRepository@Internal@Windows@@UEAAJ_J0@Z
    virtual long UpdateWorkId(int64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@PackageFamilyPolicyFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUIPackageFamilyPolicy@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::IPackageFamilyPolicy * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageFamilyPolicyFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~PackageFamilyPolicyFactoryServer();
};
} // namespace Windows::Internal::StateRepository
