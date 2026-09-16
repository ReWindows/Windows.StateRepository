#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 27 member(s).
namespace StateRepository::ProcessPackageDependency {
class PackageDependency {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareId@PackageDependency@ProcessPackageDependency@StateRepository@@QEBAHPEBG@Z
    int CompareId(unsigned short const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareUser@PackageDependency@ProcessPackageDependency@StateRepository@@QEBAHPEAX@Z
    int CompareUser(void *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyFrom@PackageDependency@ProcessPackageDependency@StateRepository@@QEAAJAEBV123@@Z
    long CopyFrom(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete@PackageDependency@ProcessPackageDependency@StateRepository@@SAJAEAVDatabase@3@PEBG@Z
    static long Delete(WindissectOpaque &, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureLifetimeArtifactIsValid@PackageDependency@ProcessPackageDependency@StateRepository@@QEBAJXZ
    long EnsureLifetimeArtifactIsValid() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?GeneratePersistedId@PackageDependency@ProcessPackageDependency@StateRepository@@QEAAJXZ
    long GeneratePersistedId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsExpired@PackageDependency@ProcessPackageDependency@StateRepository@@QEBAJAEA_N@Z
    long IsExpired(bool &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsExpired@PackageDependency@ProcessPackageDependency@StateRepository@@SAJPEAXW4PackageDependencyLifetimeKind@3@PEBG_KAEA_N@Z
    static long IsExpired(void *, int, unsigned short const *, uint64_t, bool &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsExpired@PackageDependency@ProcessPackageDependency@StateRepository@@SAJPEAXW4PackageDependencyLifetimeKind@3@PEBGU_FILETIME@@AEA_N@Z
    static long IsExpired(void *, int, unsigned short const *, _FILETIME, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Log@PackageDependency@ProcessPackageDependency@StateRepository@@QEBAJPEBDII@Z
    long Log(char const *, unsigned int, unsigned int) const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackageDependency@ProcessPackageDependency@StateRepository@@QEAA@XZ
    PackageDependency();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resolve@PackageDependency@ProcessPackageDependency@StateRepository@@QEAAJIAEAVDatabase@3@AEAW4SRAddPackageDependencyInformation@@@Z
    long Resolve(unsigned int, WindissectOpaque &, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@PackageDependency@ProcessPackageDependency@StateRepository@@QEAAJPEAXAEAW4SRAddPackageDependencyInformation@@@Z
    long Save(void *, int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPackageFullName@PackageDependency@ProcessPackageDependency@StateRepository@@QEAAJPEBG@Z
    long SetPackageFullName(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUserSid@PackageDependency@ProcessPackageDependency@StateRepository@@QEAAJPEAX@Z
    long SetUserSid(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Verify@PackageDependency@ProcessPackageDependency@StateRepository@@QEBAJXZ
    long Verify() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifyLifetimeArtifact@PackageDependency@ProcessPackageDependency@StateRepository@@SAJW4PackageDependencyLifetimeKind@3@PEBG_K@Z
    static long VerifyLifetimeArtifact(int, unsigned short const *, uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageDependency@ProcessPackageDependency@StateRepository@@QEAA@XZ
    ~PackageDependency();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FilePathLifetimeArtifactExists@PackageDependency@ProcessPackageDependency@StateRepository@@CAJPEBGAEA_N@Z
    static long FilePathLifetimeArtifactExists(unsigned short const *, bool &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBetterFitPackage@PackageDependency@ProcessPackageDependency@StateRepository@@AEBAJAEAVDatabase@3@_NAEBVPackage@Entity@3@IAEAVText@3@AEA_KAEAIAEA_NAEAW4SRAddPackageDependencyInformation@@@Z
    long IsBetterFitPackage(WindissectOpaque &, bool, WindissectOpaque const &, unsigned int, WindissectOpaque &, uint64_t &, unsigned int &, bool &, int &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBetterFitPackage_Inbox@PackageDependency@ProcessPackageDependency@StateRepository@@AEBAJ_NAEBVPackage@Entity@3@IAEAVText@3@AEA_KAEAIAEA_NAEAW4SRAddPackageDependencyInformation@@@Z
    long IsBetterFitPackage_Inbox(bool, WindissectOpaque const &, unsigned int, WindissectOpaque &, uint64_t &, unsigned int &, bool &, int &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeetsArchitectureFilter@PackageDependency@ProcessPackageDependency@StateRepository@@AEBA_NII@Z
    bool MeetsArchitectureFilter(unsigned int, unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegistryKeyExists@PackageDependency@ProcessPackageDependency@StateRepository@@CAJPEAUHKEY__@@PEBG1AEA_N@Z
    static long RegistryKeyExists(HKEY__*, unsigned short const *, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegistryKeyExists@PackageDependency@ProcessPackageDependency@StateRepository@@CAJPEAUHKEY__@@PEBGAEA_N@Z
    static long RegistryKeyExists(HKEY__*, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegistryKeyLifetimeArtifactExists@PackageDependency@ProcessPackageDependency@StateRepository@@CAJPEAXPEBGAEA_N@Z
    static long RegistryKeyLifetimeArtifactExists(void *, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifyCreate@PackageDependency@ProcessPackageDependency@StateRepository@@AEBAJAEAVDatabase@3@AEAW4SRAddPackageDependencyInformation@@@Z
    long VerifyCreate(WindissectOpaque &, int &) const;
};
} // namespace StateRepository::ProcessPackageDependency
