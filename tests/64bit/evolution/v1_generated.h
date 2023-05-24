// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_V1_V1_H_
#define FLATBUFFERS_GENERATED_V1_V1_H_

#include "flatbuffers/flatbuffers.h"

// Ensure the included flatbuffers.h is the same version as when this file was
// generated, otherwise it may not be compatible.
static_assert(FLATBUFFERS_VERSION_MAJOR == 23 &&
              FLATBUFFERS_VERSION_MINOR == 5 &&
              FLATBUFFERS_VERSION_REVISION == 9,
             "Non-compatible flatbuffers version included");

namespace v1 {

struct RootTable;
struct RootTableBuilder;
struct RootTableT;

bool operator==(const RootTableT &lhs, const RootTableT &rhs);
bool operator!=(const RootTableT &lhs, const RootTableT &rhs);

inline const ::flatbuffers::TypeTable *RootTableTypeTable();

struct RootTableT : public ::flatbuffers::NativeTable {
  typedef RootTable TableType;
  float a = 0.0f;
  std::vector<uint8_t> b{};
};

struct RootTable FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef RootTableT NativeTableType;
  typedef RootTableBuilder Builder;
  static const ::flatbuffers::TypeTable *MiniReflectTypeTable() {
    return RootTableTypeTable();
  }
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_A = 4,
    VT_B = 6
  };
  float a() const {
    return GetField<float>(VT_A, 0.0f);
  }
  bool mutate_a(float _a = 0.0f) {
    return SetField<float>(VT_A, _a, 0.0f);
  }
  const ::flatbuffers::Vector<uint8_t> *b() const {
    return GetPointer<const ::flatbuffers::Vector<uint8_t> *>(VT_B);
  }
  ::flatbuffers::Vector<uint8_t> *mutable_b() {
    return GetPointer<::flatbuffers::Vector<uint8_t> *>(VT_B);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<float>(verifier, VT_A, 4) &&
           VerifyOffset(verifier, VT_B) &&
           verifier.VerifyVector(b()) &&
           verifier.EndTable();
  }
  RootTableT *UnPack(const ::flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(RootTableT *_o, const ::flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static ::flatbuffers::Offset<RootTable> Pack(::flatbuffers::FlatBufferBuilder &_fbb, const RootTableT* _o, const ::flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct RootTableBuilder {
  typedef RootTable Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_a(float a) {
    fbb_.AddElement<float>(RootTable::VT_A, a, 0.0f);
  }
  void add_b(::flatbuffers::Offset<::flatbuffers::Vector<uint8_t>> b) {
    fbb_.AddOffset(RootTable::VT_B, b);
  }
  explicit RootTableBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<RootTable> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<RootTable>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<RootTable> CreateRootTable(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    float a = 0.0f,
    ::flatbuffers::Offset<::flatbuffers::Vector<uint8_t>> b = 0) {
  RootTableBuilder builder_(_fbb);
  builder_.add_b(b);
  builder_.add_a(a);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<RootTable> CreateRootTableDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    float a = 0.0f,
    const std::vector<uint8_t> *b = nullptr) {
  auto b__ = b ? _fbb.CreateVector<uint8_t>(*b) : 0;
  return v1::CreateRootTable(
      _fbb,
      a,
      b__);
}

::flatbuffers::Offset<RootTable> CreateRootTable(::flatbuffers::FlatBufferBuilder &_fbb, const RootTableT *_o, const ::flatbuffers::rehasher_function_t *_rehasher = nullptr);


inline bool operator==(const RootTableT &lhs, const RootTableT &rhs) {
  return
      (lhs.a == rhs.a) &&
      (lhs.b == rhs.b);
}

inline bool operator!=(const RootTableT &lhs, const RootTableT &rhs) {
    return !(lhs == rhs);
}


inline RootTableT *RootTable::UnPack(const ::flatbuffers::resolver_function_t *_resolver) const {
  auto _o = std::unique_ptr<RootTableT>(new RootTableT());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void RootTable::UnPackTo(RootTableT *_o, const ::flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = a(); _o->a = _e; }
  { auto _e = b(); if (_e) { _o->b.resize(_e->size()); std::copy(_e->begin(), _e->end(), _o->b.begin()); } }
}

inline ::flatbuffers::Offset<RootTable> RootTable::Pack(::flatbuffers::FlatBufferBuilder &_fbb, const RootTableT* _o, const ::flatbuffers::rehasher_function_t *_rehasher) {
  return CreateRootTable(_fbb, _o, _rehasher);
}

inline ::flatbuffers::Offset<RootTable> CreateRootTable(::flatbuffers::FlatBufferBuilder &_fbb, const RootTableT *_o, const ::flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { ::flatbuffers::FlatBufferBuilder *__fbb; const RootTableT* __o; const ::flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _a = _o->a;
  auto _b = _o->b.size() ? _fbb.CreateVector(_o->b) : 0;
  return v1::CreateRootTable(
      _fbb,
      _a,
      _b);
}

inline const ::flatbuffers::TypeTable *RootTableTypeTable() {
  static const ::flatbuffers::TypeCode type_codes[] = {
    { ::flatbuffers::ET_FLOAT, 0, -1 },
    { ::flatbuffers::ET_UCHAR, 1, -1 }
  };
  static const char * const names[] = {
    "a",
    "b"
  };
  static const ::flatbuffers::TypeTable tt = {
    ::flatbuffers::ST_TABLE, 2, type_codes, nullptr, nullptr, nullptr, names
  };
  return &tt;
}

inline const v1::RootTable *GetRootTable(const void *buf) {
  return ::flatbuffers::GetRoot<v1::RootTable>(buf);
}

inline const v1::RootTable *GetSizePrefixedRootTable(const void *buf) {
  return ::flatbuffers::GetSizePrefixedRoot<v1::RootTable>(buf);
}

inline RootTable *GetMutableRootTable(void *buf) {
  return ::flatbuffers::GetMutableRoot<RootTable>(buf);
}

inline v1::RootTable *GetMutableSizePrefixedRootTable(void *buf) {
  return ::flatbuffers::GetMutableSizePrefixedRoot<v1::RootTable>(buf);
}

inline bool VerifyRootTableBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<v1::RootTable>(nullptr);
}

inline bool VerifySizePrefixedRootTableBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<v1::RootTable>(nullptr);
}

inline void FinishRootTableBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<v1::RootTable> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedRootTableBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<v1::RootTable> root) {
  fbb.FinishSizePrefixed(root);
}

inline std::unique_ptr<v1::RootTableT> UnPackRootTable(
    const void *buf,
    const ::flatbuffers::resolver_function_t *res = nullptr) {
  return std::unique_ptr<v1::RootTableT>(GetRootTable(buf)->UnPack(res));
}

inline std::unique_ptr<v1::RootTableT> UnPackSizePrefixedRootTable(
    const void *buf,
    const ::flatbuffers::resolver_function_t *res = nullptr) {
  return std::unique_ptr<v1::RootTableT>(GetSizePrefixedRootTable(buf)->UnPack(res));
}

}  // namespace v1

#endif  // FLATBUFFERS_GENERATED_V1_V1_H_
