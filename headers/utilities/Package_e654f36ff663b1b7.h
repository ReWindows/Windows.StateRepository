#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 90 member(s).
namespace StateRepository::Entity {
class Package {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIntegrity@Package@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long CheckIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long Exists(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByEditionId@Package@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEA_N@Z
    static long ExistsByEditionId(WindissectOpaque &, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageFamily@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long ExistsByPackageFamily(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageFamilyAndPackageType@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_JW4PackageType@3@AEA_N@Z
    static long ExistsByPackageFamilyAndPackageType(WindissectOpaque &, int64_t, int, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageFamilyAndPackageTypeAndArchitectureAndGEVersionAndDeploymentStates@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_JW4PackageType@3@I_KW4DeploymentState@3@4AEA_N@Z
    static long ExistsByPackageFamilyAndPackageTypeAndArchitectureAndGEVersionAndDeploymentStates(WindissectOpaque &, int64_t, int, unsigned int, uint64_t, int, int, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageFamilyAndPackageTypeAndResourceId@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_JW4PackageType@3@PEBGAEA_N@Z
    static long ExistsByPackageFamilyAndPackageTypeAndResourceId(WindissectOpaque &, int64_t, int, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageFamilyAndPackageTypeAndResourceIdAndVersion@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_JW4PackageType@3@PEBG_KAEA_N@Z
    static long ExistsByPackageFamilyAndPackageTypeAndResourceIdAndVersion(WindissectOpaque &, int64_t, int, unsigned short const *, uint64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageFamilyAndResourceId@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEA_N@Z
    static long ExistsByPackageFamilyAndResourceId(WindissectOpaque &, int64_t, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageFamilyAndResourceIdAndArchitecture@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGIAEA_N@Z
    static long ExistsByPackageFamilyAndResourceIdAndArchitecture(WindissectOpaque &, int64_t, unsigned short const *, unsigned int, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageFamilyAndResourceIdAndArchitectureAndVersion@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGI_KAEA_N@Z
    static long ExistsByPackageFamilyAndResourceIdAndArchitectureAndVersion(WindissectOpaque &, int64_t, unsigned short const *, unsigned int, uint64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageFamilyName@Package@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEA_N@Z
    static long ExistsByPackageFamilyName(WindissectOpaque &, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageFamilyNameAndPackageType@Package@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGW4PackageType@3@AEA_N@Z
    static long ExistsByPackageFamilyNameAndPackageType(WindissectOpaque &, unsigned short const *, int, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageFullName@Package@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEA_N@Z
    static long ExistsByPackageFullName(WindissectOpaque &, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageFullName_ReadUncommitted@Package@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEA_N@Z
    static long ExistsByPackageFullName_ReadUncommitted(WindissectOpaque &, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsBySourceBundle@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long ExistsBySourceBundle(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsBySourceBundleAndPackageType@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_JW4PackageType@3@AEA_N@Z
    static long ExistsBySourceBundleAndPackageType(WindissectOpaque &, int64_t, int, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndApplicationUserModelId@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEA_N@Z
    static long ExistsByUserAndApplicationUserModelId(WindissectOpaque &, int64_t, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackageFamily@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_J1AEA_N@Z
    static long ExistsByUserAndPackageFamily(WindissectOpaque &, int64_t, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackageFamilyAndPackageType@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_J1W4PackageType@3@AEA_N@Z
    static long ExistsByUserAndPackageFamilyAndPackageType(WindissectOpaque &, int64_t, int64_t, int, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackageFamilyName@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEA_N@Z
    static long ExistsByUserAndPackageFamilyName(WindissectOpaque &, int64_t, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackageFamilyNameAndPackageType@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGW4PackageType@3@AEA_N@Z
    static long ExistsByUserAndPackageFamilyNameAndPackageType(WindissectOpaque &, int64_t, unsigned short const *, int, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackageFullName@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEA_N@Z
    static long ExistsByUserAndPackageFullName(WindissectOpaque &, int64_t, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackageFullName_ReadUncommitted@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEA_N@Z
    static long ExistsByUserAndPackageFullName_ReadUncommitted(WindissectOpaque &, int64_t, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserOrDefaultAccountAndApplicationUserModelId@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEA_N@Z
    static long ExistsByUserOrDefaultAccountAndApplicationUserModelId(WindissectOpaque &, int64_t, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserOrDefaultAccountAndPackageFamilyNameAndPackageType@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGW4PackageType@3@AEA_N@Z
    static long ExistsByUserOrDefaultAccountAndPackageFamilyNameAndPackageType(WindissectOpaque &, int64_t, unsigned short const *, int, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserOrDefaultAccountAndPackageFullName@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEA_N@Z
    static long ExistsByUserOrDefaultAccountAndPackageFullName(WindissectOpaque &, int64_t, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@Package@Entity@StateRepository@@SAJAEAVDatabase@3@AEAVStatement@3@@Z
    static long Find(WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindBundleByContainedPackageTypeAndUserAndNotOtherUser@Package@Entity@StateRepository@@SAJAEAVDatabase@3@W4PackageType@3@QEAX2AEAVStatement@3@@Z
    static long FindBundleByContainedPackageTypeAndUserAndNotOtherUser(WindissectOpaque &, int, void * const, void * const, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByEditionId@Package@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEAVStatement@3@@Z
    static long FindByEditionId(WindissectOpaque &, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackageFamily@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAVStatement@3@@Z
    static long FindByPackageFamily(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackageFamilyAndPackageType@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_JW4PackageType@3@AEAVStatement@3@@Z
    static long FindByPackageFamilyAndPackageType(WindissectOpaque &, int64_t, int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackageFamilyAndPackageTypeAndResourceId@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_JW4PackageType@3@PEBGAEAVStatement@3@@Z
    static long FindByPackageFamilyAndPackageTypeAndResourceId(WindissectOpaque &, int64_t, int, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackageFamilyAndPackageTypeAndResourceIdAndVersion@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_JW4PackageType@3@PEBG_KAEAVStatement@3@@Z
    static long FindByPackageFamilyAndPackageTypeAndResourceIdAndVersion(WindissectOpaque &, int64_t, int, unsigned short const *, uint64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackageFamilyAndResourceId@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEAVStatement@3@@Z
    static long FindByPackageFamilyAndResourceId(WindissectOpaque &, int64_t, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackageFamilyAndResourceIdAndArchitecture@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGIAEAVStatement@3@@Z
    static long FindByPackageFamilyAndResourceIdAndArchitecture(WindissectOpaque &, int64_t, unsigned short const *, unsigned int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackageFamilyName@Package@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEAVStatement@3@@Z
    static long FindByPackageFamilyName(WindissectOpaque &, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackageFamilyNameAndPackageType@Package@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGW4PackageType@3@AEAVStatement@3@@Z
    static long FindByPackageFamilyNameAndPackageType(WindissectOpaque &, unsigned short const *, int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackageOrigin@Package@Entity@StateRepository@@SAJAEAVDatabase@3@W4PackageOrigin@3@AEAVStatement@3@@Z
    static long FindByPackageOrigin(WindissectOpaque &, int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindBySourceBundle@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAVStatement@3@@Z
    static long FindBySourceBundle(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindBySourceBundleAndPackageType@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_JW4PackageType@3@AEAVStatement@3@@Z
    static long FindBySourceBundleAndPackageType(WindissectOpaque &, int64_t, int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUser@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAVStatement@3@@Z
    static long FindByUser(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndDeploymentStateAndPackageTypeAndFlags2@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_JW4DeploymentState@3@W4PackageType@3@W4PackageFlags2@3@AEAVStatement@3@@Z
    static long FindByUserAndDeploymentStateAndPackageTypeAndFlags2(WindissectOpaque &, int64_t, int, int, int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndPackageFamily@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_J1AEAVStatement@3@@Z
    static long FindByUserAndPackageFamily(WindissectOpaque &, int64_t, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndPackageFamilyAndPackageType@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_J1W4PackageType@3@AEAVStatement@3@@Z
    static long FindByUserAndPackageFamilyAndPackageType(WindissectOpaque &, int64_t, int64_t, int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndPackageFamilyName@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEAVStatement@3@@Z
    static long FindByUserAndPackageFamilyName(WindissectOpaque &, int64_t, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndPackageFamilyNameAndPackageType@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGW4PackageType@3@AEAVStatement@3@@Z
    static long FindByUserAndPackageFamilyNameAndPackageType(WindissectOpaque &, int64_t, unsigned short const *, int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndPackageFamilyNameAndPackageTypeAndArchitectureAndGEVersionAndNEPackageFullName@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGW4PackageType@3@I_K2AEAVStatement@3@@Z
    static long FindByUserAndPackageFamilyNameAndPackageTypeAndArchitectureAndGEVersionAndNEPackageFullName(WindissectOpaque &, int64_t, unsigned short const *, int, unsigned int, uint64_t, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndPackageFamilyNameAndPackageTypeAndArchitectureTypeAndGEVersionAndDeploymentState_GroupByArchitecture_MaxVersion@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGW4PackageType@3@W4SRProcessorArchitectureType@3@_KW4DeploymentState@3@AEAVStatement@3@@Z
    static long FindByUserAndPackageFamilyNameAndPackageTypeAndArchitectureTypeAndGEVersionAndDeploymentState_GroupByArchitecture_MaxVersion(WindissectOpaque &, int64_t, unsigned short const *, int, int, uint64_t, int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndPackageFamilyNameAndPackageTypeAndGEVersion_SortedByVersionDescending@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGW4PackageType@3@_KAEAVStatement@3@@Z
    static long FindByUserAndPackageFamilyNameAndPackageTypeAndGEVersion_SortedByVersionDescending(WindissectOpaque &, int64_t, unsigned short const *, int, uint64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndPackageTypeAndNotOtherUser@Package@Entity@StateRepository@@SAJAEAVDatabase@3@QEAXW4PackageType@3@1AEAVStatement@3@@Z
    static long FindByUserAndPackageTypeAndNotOtherUser(WindissectOpaque &, void * const, int, void * const, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndPackageTypeAndNotOtherUserAndBundle@Package@Entity@StateRepository@@SAJAEAVDatabase@3@QEAXW4PackageType@3@1_JAEAVStatement@3@@Z
    static long FindByUserAndPackageTypeAndNotOtherUserAndBundle(WindissectOpaque &, void * const, int, void * const, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserOrDefaultAccount@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAVStatement@3@@Z
    static long FindByUserOrDefaultAccount(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserOrDefaultAccountAndApplicationUserModelId@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEAVStatement@3@@Z
    static long FindByUserOrDefaultAccountAndApplicationUserModelId(WindissectOpaque &, int64_t, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserOrDefaultAccountAndPackageFullName@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEAVStatement@3@@Z
    static long FindByUserOrDefaultAccountAndPackageFullName(WindissectOpaque &, int64_t, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserOrSignatureOriginAndPackageFamilyNameAndPackageTypeAndGEVersion_SortedByVersionDescending@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGW4PackageType@3@_KW4SignatureOrigin@3@AEAVStatement@3@@Z
    static long FindByUserOrSignatureOriginAndPackageFamilyNameAndPackageTypeAndGEVersion_SortedByVersionDescending(WindissectOpaque &, int64_t, unsigned short const *, int, uint64_t, int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindMainOrOptionalByUserAndNotByFamilyAndOtherUser@Package@Entity@StateRepository@@SAJAEAVDatabase@3@QEAX1AEAVStatement@3@@Z
    static long FindMainOrOptionalByUserAndNotByFamilyAndOtherUser(WindissectOpaque &, void * const, void * const, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNext@Package@Entity@StateRepository@@SAJAEAVStatement@3@AEAV123@AEA_N@Z
    static long FindNext(WindissectOpaque &, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNext_PrimaryKey_PackageFamily_PackageType_Architecture_Version@Package@Entity@StateRepository@@SAJAEAVStatement@3@AEA_J1AEAW4PackageType@3@AEAIAEA_KAEA_N@Z
    static long FindNext_PrimaryKey_PackageFamily_PackageType_Architecture_Version(WindissectOpaque &, int64_t &, int64_t &, int &, unsigned int &, uint64_t &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPackageFullNamesByUserSidAndPackageTypeAndTargetDeviceFamily@Package@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGW4PackageType@3@IAEAVStatement@3@@Z
    static long FindPackageFullNamesByUserSidAndPackageTypeAndTargetDeviceFamily(WindissectOpaque &, unsigned short const *, int, unsigned int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixIntegrity@Package@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long FixIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByPackageFullName@Package@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEAV123@@Z
    static long GetByPackageFullName(WindissectOpaque &, unsigned short const *, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveIsUninstallable@Package@Entity@StateRepository@@QEBAJAEAVDatabase@3@PEA_N@Z
    long GetEffectiveIsUninstallable(WindissectOpaque &, bool *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveIsUninstallableByPackageFullName@Package@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGPEA_N@Z
    static long GetEffectiveIsUninstallableByPackageFullName(WindissectOpaque &, unsigned short const *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsStub@Package@Entity@StateRepository@@QEAAJAEAVDatabase@3@AEA_N@Z
    long GetIsStub(WindissectOpaque &, bool &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Package@Entity@StateRepository@@QEAA@XZ
    Package();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreCheckIntegrity@Package@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long PreCheckIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreFixIntegrity@Package@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long PreFixIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDoNotAllowExecution@Package@Entity@StateRepository@@QEAAJ_N@Z
    long SetDoNotAllowExecution(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@AEA_N@Z
    static long TryGet(WindissectOpaque &, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByInstalledLocation@Package@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEAV123@AEA_N@Z
    static long TryGetByInstalledLocation(WindissectOpaque &, unsigned short const *, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByPackageFamilyAndResourceIdAndArchitectureAndVersion@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGI_KAEAV123@AEA_N@Z
    static long TryGetByPackageFamilyAndResourceIdAndArchitectureAndVersion(WindissectOpaque &, int64_t, unsigned short const *, unsigned int, uint64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByPackageFullName@Package@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEAV123@AEA_N@Z
    static long TryGetByPackageFullName(WindissectOpaque &, unsigned short const *, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUserAndApplicationUserModelId@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEAV123@AEA_N@Z
    static long TryGetByUserAndApplicationUserModelId(WindissectOpaque &, int64_t, unsigned short const *, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUserAndPackageFullName@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEAV123@AEA_N@Z
    static long TryGetByUserAndPackageFullName(WindissectOpaque &, int64_t, unsigned short const *, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUserOrDefaultAccountAndPackageFullName@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEAV123@AEA_N@Z
    static long TryGetByUserOrDefaultAccountAndPackageFullName(WindissectOpaque &, int64_t, unsigned short const *, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetEffectiveLocationByUserAndApplication@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_J1AEAVText@3@AEA_N@Z
    static long TryGetEffectiveLocationByUserAndApplication(WindissectOpaque &, int64_t, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetEffectiveLocationByUserAndApplicationUserModelId@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEAVText@3@AEA_N@Z
    static long TryGetEffectiveLocationByUserAndApplicationUserModelId(WindissectOpaque &, int64_t, unsigned short const *, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetEffectiveLocationByUserAndPackage@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_J1AEAVText@3@AEA_N@Z
    static long TryGetEffectiveLocationByUserAndPackage(WindissectOpaque &, int64_t, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetEffectiveLocationByUserAndPackageFullName@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEAVText@3@AEA_N@Z
    static long TryGetEffectiveLocationByUserAndPackageFullName(WindissectOpaque &, int64_t, unsigned short const *, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetEffectiveSupportedUsersByPackageFullName@Package@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGPEAW4SupportedUsers@3@AEA_N@Z
    static long TryGetEffectiveSupportedUsersByPackageFullName(WindissectOpaque &, unsigned short const *, int *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetEffectiveSupportedUsersByUserAndApplicationUserModelId@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGPEAW4SupportedUsers@3@AEA_N@Z
    static long TryGetEffectiveSupportedUsersByUserAndApplicationUserModelId(WindissectOpaque &, int64_t, unsigned short const *, int *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetMainPackageDependencyByUserAndSupplierPackage@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_J1AEAV123@AEA_N@Z
    static long TryGetMainPackageDependencyByUserAndSupplierPackage(WindissectOpaque &, int64_t, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetPackageOriginByPackageFullName@Package@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGPEAW4PackageOrigin@3@AEA_N@Z
    static long TryGetPackageOriginByPackageFullName(WindissectOpaque &, unsigned short const *, int *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetPackageOriginByUserAndPackageFullName@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGPEAW4PackageOrigin@3@AEA_N@Z
    static long TryGetPackageOriginByUserAndPackageFullName(WindissectOpaque &, int64_t, unsigned short const *, int *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetPackageReadyOrNewerAvailableStatus@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBG_KW4SRProcessorArchitectureType@3@AEAW4PackageReadyOrNewerAvailableStatus@3@@Z
    static long TryGetPackageReadyOrNewerAvailableStatus(WindissectOpaque &, int64_t, unsigned short const *, uint64_t, int, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsMachineRegisteredByPackageFullName@Package@Entity@StateRepository@@SAJAEAVDatabase@3@PEBG_N@Z
    static long UpdateIsMachineRegisteredByPackageFullName(WindissectOpaque &, unsigned short const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsSingletonRegistered@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_J_N@Z
    static long UpdateIsSingletonRegistered(WindissectOpaque &, int64_t, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Package@Entity@StateRepository@@QEAA@XZ
    ~Package();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@Package@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@_J@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &, int64_t);
};
} // namespace StateRepository::Entity
