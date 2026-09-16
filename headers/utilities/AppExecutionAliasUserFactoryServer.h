#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 23 member(s).
namespace Windows::Internal::StateRepository {
class AppExecutionAliasUserFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@AppExecutionAliasUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@AppExecutionAliasUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIAppExecutionAliasUser@234@@Z
    virtual long Add(::Windows::Internal::StateRepository::IAppExecutionAliasUser *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppExecutionAliasUserFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    AppExecutionAliasUserFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete@AppExecutionAliasUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIAppExecutionAliasUser@234@@Z
    virtual long Delete(::Windows::Internal::StateRepository::IAppExecutionAliasUser *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByApplicationIdentityAndUserAndAlias@AppExecutionAliasUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplicationIdentity@234@PEAUIUser@234@PEAUHSTRING__@@@Z
    virtual long DeleteByApplicationIdentityAndUserAndAlias(::Windows::Internal::StateRepository::IApplicationIdentity *, ::Windows::Internal::StateRepository::IUser *, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@AppExecutionAliasUserFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByApplicationIdentity@AppExecutionAliasUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplicationIdentity@234@PEAE@Z
    virtual long ExistsByApplicationIdentity(::Windows::Internal::StateRepository::IApplicationIdentity *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByApplicationIdentityAndUser@AppExecutionAliasUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplicationIdentity@234@PEAUIUser@234@PEAE@Z
    virtual long ExistsByApplicationIdentityAndUser(::Windows::Internal::StateRepository::IApplicationIdentity *, ::Windows::Internal::StateRepository::IUser *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByApplicationIdentityAndUserAndAlias@AppExecutionAliasUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplicationIdentity@234@PEAUIUser@234@PEAUHSTRING__@@PEAE@Z
    virtual long ExistsByApplicationIdentityAndUserAndAlias(::Windows::Internal::StateRepository::IApplicationIdentity *, ::Windows::Internal::StateRepository::IUser *, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUser@AppExecutionAliasUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAE@Z
    virtual long ExistsByUser(::Windows::Internal::StateRepository::IUser *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@AppExecutionAliasUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVAppExecutionAliasUser@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByApplicationIdentity@AppExecutionAliasUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplicationIdentity@234@PEAPEAU?$IVectorView@PEAVAppExecutionAliasUser@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByApplicationIdentity(::Windows::Internal::StateRepository::IApplicationIdentity *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByApplicationIdentityAndUser@AppExecutionAliasUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplicationIdentity@234@PEAUIUser@234@PEAPEAU?$IVectorView@PEAVAppExecutionAliasUser@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByApplicationIdentityAndUser(::Windows::Internal::StateRepository::IApplicationIdentity *, ::Windows::Internal::StateRepository::IUser *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUser@AppExecutionAliasUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAPEAU?$IVectorView@PEAVAppExecutionAliasUser@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUser(::Windows::Internal::StateRepository::IUser *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@AppExecutionAliasUserFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIAppExecutionAliasUser@234@@Z
    virtual long Get(int64_t, ::Windows::Internal::StateRepository::IAppExecutionAliasUser * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByApplicationIdentityAndUserAndAlias@AppExecutionAliasUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplicationIdentity@234@PEAUIUser@234@PEAUHSTRING__@@PEAPEAUIAppExecutionAliasUser@234@@Z
    virtual long GetByApplicationIdentityAndUserAndAlias(::Windows::Internal::StateRepository::IApplicationIdentity *, ::Windows::Internal::StateRepository::IUser *, HSTRING__*, ::Windows::Internal::StateRepository::IAppExecutionAliasUser * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@AppExecutionAliasUserFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIAppExecutionAliasUser@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::IAppExecutionAliasUser * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByApplicationIdentityAndUserAndAlias@AppExecutionAliasUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplicationIdentity@234@PEAUIUser@234@PEAUHSTRING__@@PEAPEAUIAppExecutionAliasUser@234@@Z
    virtual long TryGetByApplicationIdentityAndUserAndAlias(::Windows::Internal::StateRepository::IApplicationIdentity *, ::Windows::Internal::StateRepository::IUser *, HSTRING__*, ::Windows::Internal::StateRepository::IAppExecutionAliasUser * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@AppExecutionAliasUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIAppExecutionAliasUser@234@@Z
    virtual long Update(::Windows::Internal::StateRepository::IAppExecutionAliasUser *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@AppExecutionAliasUserFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUIAppExecutionAliasUser@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::IAppExecutionAliasUser * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppExecutionAliasUserFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~AppExecutionAliasUserFactoryServer();
};
} // namespace Windows::Internal::StateRepository
