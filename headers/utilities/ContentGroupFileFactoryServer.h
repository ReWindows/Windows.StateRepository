#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 15 member(s).
namespace Windows::Internal::StateRepository {
class ContentGroupFileFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@ContentGroupFileFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ContentGroupFileFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    ContentGroupFileFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@ContentGroupFileFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByContentGroup@ContentGroupFileFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIContentGroup@234@PEAE@Z
    virtual long ExistsByContentGroup(::Windows::Internal::StateRepository::IContentGroup *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByContentGroupAndFile@ContentGroupFileFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIContentGroup@234@PEAUIFile@234@PEAE@Z
    virtual long ExistsByContentGroupAndFile(::Windows::Internal::StateRepository::IContentGroup *, ::Windows::Internal::StateRepository::IFile *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@ContentGroupFileFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVContentGroupFile@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByContentGroup@ContentGroupFileFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIContentGroup@234@PEAPEAU?$IVectorView@PEAVContentGroupFile@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByContentGroup(::Windows::Internal::StateRepository::IContentGroup *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@ContentGroupFileFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIContentGroupFile@234@@Z
    virtual long Get(int64_t, ::Windows::Internal::StateRepository::IContentGroupFile * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByContentGroupAndFile@ContentGroupFileFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIContentGroup@234@PEAUIFile@234@PEAPEAUIContentGroupFile@234@@Z
    virtual long GetByContentGroupAndFile(::Windows::Internal::StateRepository::IContentGroup *, ::Windows::Internal::StateRepository::IFile *, ::Windows::Internal::StateRepository::IContentGroupFile * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@ContentGroupFileFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIContentGroupFile@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::IContentGroupFile * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByContentGroupAndFile@ContentGroupFileFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIContentGroup@234@PEAUIFile@234@PEAPEAUIContentGroupFile@234@@Z
    virtual long TryGetByContentGroupAndFile(::Windows::Internal::StateRepository::IContentGroup *, ::Windows::Internal::StateRepository::IFile *, ::Windows::Internal::StateRepository::IContentGroupFile * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@ContentGroupFileFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUIContentGroupFile@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::IContentGroupFile * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ContentGroupFileFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~ContentGroupFileFactoryServer();
};
} // namespace Windows::Internal::StateRepository
