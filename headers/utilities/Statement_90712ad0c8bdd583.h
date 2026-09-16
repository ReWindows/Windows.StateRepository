#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 37 member(s).
namespace StateRepository {
class Statement {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Bind@Statement@StateRepository@@QEAAJHPEBG@Z
    long Bind(int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Bind@Statement@StateRepository@@QEAAJH_J@Z
    long Bind(int, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Bind@Statement@StateRepository@@QEAAJHQEAX@Z
    long Bind(int, void * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Bind@Statement@StateRepository@@QEAAJHHPEBX@Z
    long Bind(int, int, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Bind@Statement@StateRepository@@QEAAJHH@Z
    long Bind(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Bind@Statement@StateRepository@@QEAAJH_KPEBX@Z
    long Bind(int, uint64_t, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindAddress@Statement@StateRepository@@QEAAJHQEAX@Z
    long BindAddress(int, void * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindAddress@Statement@StateRepository@@QEAAJHHPEBX@Z
    long BindAddress(int, int, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindAddress@Statement@StateRepository@@QEAAJH_KPEBX@Z
    long BindAddress(int, uint64_t, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindAddress@Statement@StateRepository@@QEAAJHPEBG@Z
    long BindAddress(int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindAddress@Statement@StateRepository@@QEAAJHAEBVBlob@2@@Z
    long BindAddress(int, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindIfWorkInProgress@Statement@StateRepository@@QEAAJH_J@Z
    long BindIfWorkInProgress(int, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindNull@Statement@StateRepository@@QEAAJH@Z
    long BindNull(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FetchForCount@Statement@StateRepository@@QEAAJPEA_K@Z
    long FetchForCount(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FetchForExists@Statement@StateRepository@@QEAAJPEA_N@Z
    long FetchForExists(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FetchNoRow@Statement@StateRepository@@QEAAJXZ
    long FetchNoRow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FetchRow@Statement@StateRepository@@QEAAJPEA_N@Z
    long FetchRow(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Finalize@Statement@StateRepository@@QEAAJXZ
    long Finalize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalizeAndAddressOf@Statement@StateRepository@@QEAAPEAPEAUsqlite3_stmt@@XZ
    sqlite3_stmt * * FinalizeAndAddressOf();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColumnBlob@Statement@StateRepository@@QEBAJHAEAVBlob@2@@Z
    long GetColumnBlob(int, WindissectOpaque &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColumnBoolean@Statement@StateRepository@@QEBAJHPEA_N@Z
    long GetColumnBoolean(int, bool *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColumnDateTime@Statement@StateRepository@@QEBAJHPEAU_FILETIME@@@Z
    long GetColumnDateTime(int, _FILETIME *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColumnGuid@Statement@StateRepository@@QEBAJHPEAU_GUID@@@Z
    long GetColumnGuid(int, _GUID *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColumnInt32@Statement@StateRepository@@QEBAJHPEAH@Z
    long GetColumnInt32(int, int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColumnInt64@Statement@StateRepository@@QEBAJHPEA_J@Z
    long GetColumnInt64(int, int64_t *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColumnIsNull@Statement@StateRepository@@QEBAJHPEA_N@Z
    long GetColumnIsNull(int, bool *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColumnText@Statement@StateRepository@@QEBAJHAEAVText@2@@Z
    long GetColumnText(int, WindissectOpaque &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColumnUInt32@Statement@StateRepository@@QEBAJHPEAI@Z
    long GetColumnUInt32(int, unsigned int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColumnUInt64@Statement@StateRepository@@QEBAJHPEA_K@Z
    long GetColumnUInt64(int, uint64_t *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSql@Statement@StateRepository@@QEBAPEBDXZ
    char const * GetSql() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetAndClearBindings@Statement@StateRepository@@QEAAJXZ
    long ResetAndClearBindings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?dal_finalize@Statement@StateRepository@@SAJPEAUsqlite3_stmt@@@Z
    static long dal_finalize(sqlite3_stmt *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?dal_reset@Statement@StateRepository@@SAJPEAUsqlite3_stmt@@@Z
    static long dal_reset(sqlite3_stmt *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?dal_step@Statement@StateRepository@@SAJPEAUsqlite3_stmt@@@Z
    static long dal_step(sqlite3_stmt *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Statement@StateRepository@@QEAA@XZ
    ~Statement();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDatabase@Statement@StateRepository@@AEBAPEAUsqlite3@@XZ
    sqlite3* GetDatabase() const;
};
} // namespace StateRepository
