#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 32 member(s).
namespace Windows::Internal::StateRepository {
class FileTypeAssociationFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@FileTypeAssociationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@FileTypeAssociationFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByContentType@FileTypeAssociationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long ExistsByContentType(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByContentTypeAndExtension@FileTypeAssociationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAUIApplicationExtension@234@PEAE@Z
    virtual long ExistsByContentTypeAndExtension(HSTRING__*, ::Windows::Internal::StateRepository::IApplicationExtension *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByExtension@FileTypeAssociationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplicationExtension@234@PEAE@Z
    virtual long ExistsByExtension(::Windows::Internal::StateRepository::IApplicationExtension *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByExtensionAndIndex@FileTypeAssociationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplicationExtension@234@HPEAE@Z
    virtual long ExistsByExtensionAndIndex(::Windows::Internal::StateRepository::IApplicationExtension *, int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByFileType@FileTypeAssociationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long ExistsByFileType(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByFileTypeAndExtension@FileTypeAssociationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAUIApplicationExtension@234@PEAE@Z
    virtual long ExistsByFileTypeAndExtension(HSTRING__*, ::Windows::Internal::StateRepository::IApplicationExtension *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByProgID@FileTypeAssociationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long ExistsByProgID(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByProgIDAndExtension@FileTypeAssociationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAUIApplicationExtension@234@PEAE@Z
    virtual long ExistsByProgIDAndExtension(HSTRING__*, ::Windows::Internal::StateRepository::IApplicationExtension *, unsigned char *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0FileTypeAssociationFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    FileTypeAssociationFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@FileTypeAssociationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVFileTypeAssociation@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByContentType@FileTypeAssociationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVFileTypeAssociation@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByContentType(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByContentTypeAndExtension@FileTypeAssociationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAUIApplicationExtension@234@PEAPEAU?$IVectorView@PEAVFileTypeAssociation@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByContentTypeAndExtension(HSTRING__*, ::Windows::Internal::StateRepository::IApplicationExtension *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByExtension@FileTypeAssociationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplicationExtension@234@PEAPEAU?$IVectorView@PEAVFileTypeAssociation@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByExtension(::Windows::Internal::StateRepository::IApplicationExtension *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByFileType@FileTypeAssociationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVFileTypeAssociation@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByFileType(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByFileTypeAndExtension@FileTypeAssociationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAUIApplicationExtension@234@PEAPEAU?$IVectorView@PEAVFileTypeAssociation@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByFileTypeAndExtension(HSTRING__*, ::Windows::Internal::StateRepository::IApplicationExtension *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByProgID@FileTypeAssociationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVFileTypeAssociation@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByProgID(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByProgIDAndExtension@FileTypeAssociationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAUIApplicationExtension@234@PEAPEAU?$IVectorView@PEAVFileTypeAssociation@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByProgIDAndExtension(HSTRING__*, ::Windows::Internal::StateRepository::IApplicationExtension *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUser@FileTypeAssociationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAPEAU?$IVectorView@PEAVFileTypeAssociation@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUser(::Windows::Internal::StateRepository::IUser *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndFileType@FileTypeAssociationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVFileTypeAssociation@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndFileType(::Windows::Internal::StateRepository::IUser *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindLauncherInfoByUserOrDefaultAccountAndFileType@FileTypeAssociationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVFileTypeAssociationLauncherInfo@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindLauncherInfoByUserOrDefaultAccountAndFileType(::Windows::Internal::StateRepository::IUser *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindLauncherInfoByUserOrDefaultAccountAndFileTypeAndPackageFamilyName@FileTypeAssociationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@1PEAPEAU?$IVectorView@PEAVFileTypeAssociationLauncherInfo@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindLauncherInfoByUserOrDefaultAccountAndFileTypeAndPackageFamilyName(::Windows::Internal::StateRepository::IUser *, HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindLauncherInfoByUserOrDefaultAccountAndProgId@FileTypeAssociationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVFileTypeAssociationLauncherInfo@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindLauncherInfoByUserOrDefaultAccountAndProgId(::Windows::Internal::StateRepository::IUser *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@FileTypeAssociationFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIFileTypeAssociation@234@@Z
    virtual long Get(int64_t, ::Windows::Internal::StateRepository::IFileTypeAssociation * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByExtensionAndIndex@FileTypeAssociationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplicationExtension@234@HPEAPEAUIFileTypeAssociation@234@@Z
    virtual long GetByExtensionAndIndex(::Windows::Internal::StateRepository::IApplicationExtension *, int, ::Windows::Internal::StateRepository::IFileTypeAssociation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@FileTypeAssociationFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIFileTypeAssociation@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::IFileTypeAssociation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByExtensionAndIndex@FileTypeAssociationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplicationExtension@234@HPEAPEAUIFileTypeAssociation@234@@Z
    virtual long TryGetByExtensionAndIndex(::Windows::Internal::StateRepository::IApplicationExtension *, int, ::Windows::Internal::StateRepository::IFileTypeAssociation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@FileTypeAssociationFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUIFileTypeAssociation@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::IFileTypeAssociation * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FileTypeAssociationFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~FileTypeAssociationFactoryServer();
};
} // namespace Windows::Internal::StateRepository
