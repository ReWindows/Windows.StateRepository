#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 1 member(s).
namespace StateRepository {
class ProcessPackageDependency {
public:
    class PackageDependency;
    class PackageDependencyList;
    class PackageDependencyManager;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArchitectureToArchitectureFilter@ProcessPackageDependency@StateRepository@@YA?AW4PackageDependencyProcessorArchitectures@2@I@Z
    int ArchitectureToArchitectureFilter(unsigned int);
};
} // namespace StateRepository
