// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CardData.proto

#ifndef PROTOBUF_INCLUDED_CardData_2eproto
#define PROTOBUF_INCLUDED_CardData_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_CardData_2eproto 

namespace protobuf_CardData_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_CardData_2eproto
namespace CD {
class CardData;
class CardDataDefaultTypeInternal;
extern CardDataDefaultTypeInternal _CardData_default_instance_;
}  // namespace CD
namespace google {
namespace protobuf {
template<> ::CD::CardData* Arena::CreateMaybeMessage<::CD::CardData>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace CD {

enum CardData_CardType {
  CardData_CardType_CT_ANY = 0,
  CardData_CardType_CT_PKMN = 1,
  CardData_CardType_CT_ENERGY = 2,
  CardData_CardType_CT_TRAINER = 3
};
bool CardData_CardType_IsValid(int value);
const CardData_CardType CardData_CardType_CardType_MIN = CardData_CardType_CT_ANY;
const CardData_CardType CardData_CardType_CardType_MAX = CardData_CardType_CT_TRAINER;
const int CardData_CardType_CardType_ARRAYSIZE = CardData_CardType_CardType_MAX + 1;

const ::google::protobuf::EnumDescriptor* CardData_CardType_descriptor();
inline const ::std::string& CardData_CardType_Name(CardData_CardType value) {
  return ::google::protobuf::internal::NameOfEnum(
    CardData_CardType_descriptor(), value);
}
inline bool CardData_CardType_Parse(
    const ::std::string& name, CardData_CardType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<CardData_CardType>(
    CardData_CardType_descriptor(), name, value);
}
enum CardData_EnergyType {
  CardData_EnergyType_ET_ANY = 0,
  CardData_EnergyType_ET_WATER = 1,
  CardData_EnergyType_ET_FIRE = 2,
  CardData_EnergyType_ET_GRASS = 3,
  CardData_EnergyType_ET_ELECTRIC = 4,
  CardData_EnergyType_ET_PSYCHIC = 5,
  CardData_EnergyType_ET_FIGHTING = 6,
  CardData_EnergyType_ET_COLORLESS = 7
};
bool CardData_EnergyType_IsValid(int value);
const CardData_EnergyType CardData_EnergyType_EnergyType_MIN = CardData_EnergyType_ET_ANY;
const CardData_EnergyType CardData_EnergyType_EnergyType_MAX = CardData_EnergyType_ET_COLORLESS;
const int CardData_EnergyType_EnergyType_ARRAYSIZE = CardData_EnergyType_EnergyType_MAX + 1;

const ::google::protobuf::EnumDescriptor* CardData_EnergyType_descriptor();
inline const ::std::string& CardData_EnergyType_Name(CardData_EnergyType value) {
  return ::google::protobuf::internal::NameOfEnum(
    CardData_EnergyType_descriptor(), value);
}
inline bool CardData_EnergyType_Parse(
    const ::std::string& name, CardData_EnergyType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<CardData_EnergyType>(
    CardData_EnergyType_descriptor(), name, value);
}
// ===================================================================

class CardData : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:CD.CardData) */ {
 public:
  CardData();
  virtual ~CardData();

  CardData(const CardData& from);

  inline CardData& operator=(const CardData& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  CardData(CardData&& from) noexcept
    : CardData() {
    *this = ::std::move(from);
  }

  inline CardData& operator=(CardData&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const CardData& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CardData* internal_default_instance() {
    return reinterpret_cast<const CardData*>(
               &_CardData_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(CardData* other);
  friend void swap(CardData& a, CardData& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline CardData* New() const final {
    return CreateMaybeMessage<CardData>(NULL);
  }

  CardData* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<CardData>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const CardData& from);
  void MergeFrom(const CardData& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(CardData* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef CardData_CardType CardType;
  static const CardType CT_ANY =
    CardData_CardType_CT_ANY;
  static const CardType CT_PKMN =
    CardData_CardType_CT_PKMN;
  static const CardType CT_ENERGY =
    CardData_CardType_CT_ENERGY;
  static const CardType CT_TRAINER =
    CardData_CardType_CT_TRAINER;
  static inline bool CardType_IsValid(int value) {
    return CardData_CardType_IsValid(value);
  }
  static const CardType CardType_MIN =
    CardData_CardType_CardType_MIN;
  static const CardType CardType_MAX =
    CardData_CardType_CardType_MAX;
  static const int CardType_ARRAYSIZE =
    CardData_CardType_CardType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  CardType_descriptor() {
    return CardData_CardType_descriptor();
  }
  static inline const ::std::string& CardType_Name(CardType value) {
    return CardData_CardType_Name(value);
  }
  static inline bool CardType_Parse(const ::std::string& name,
      CardType* value) {
    return CardData_CardType_Parse(name, value);
  }

  typedef CardData_EnergyType EnergyType;
  static const EnergyType ET_ANY =
    CardData_EnergyType_ET_ANY;
  static const EnergyType ET_WATER =
    CardData_EnergyType_ET_WATER;
  static const EnergyType ET_FIRE =
    CardData_EnergyType_ET_FIRE;
  static const EnergyType ET_GRASS =
    CardData_EnergyType_ET_GRASS;
  static const EnergyType ET_ELECTRIC =
    CardData_EnergyType_ET_ELECTRIC;
  static const EnergyType ET_PSYCHIC =
    CardData_EnergyType_ET_PSYCHIC;
  static const EnergyType ET_FIGHTING =
    CardData_EnergyType_ET_FIGHTING;
  static const EnergyType ET_COLORLESS =
    CardData_EnergyType_ET_COLORLESS;
  static inline bool EnergyType_IsValid(int value) {
    return CardData_EnergyType_IsValid(value);
  }
  static const EnergyType EnergyType_MIN =
    CardData_EnergyType_EnergyType_MIN;
  static const EnergyType EnergyType_MAX =
    CardData_EnergyType_EnergyType_MAX;
  static const int EnergyType_ARRAYSIZE =
    CardData_EnergyType_EnergyType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  EnergyType_descriptor() {
    return CardData_EnergyType_descriptor();
  }
  static inline const ::std::string& EnergyType_Name(EnergyType value) {
    return CardData_EnergyType_Name(value);
  }
  static inline bool EnergyType_Parse(const ::std::string& name,
      EnergyType* value) {
    return CardData_EnergyType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional string name = 2;
  bool has_name() const;
  void clear_name();
  static const int kNameFieldNumber = 2;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // optional int32 id = 1;
  bool has_id() const;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::int32 id() const;
  void set_id(::google::protobuf::int32 value);

  // optional .CD.CardData.CardType cType = 3;
  bool has_ctype() const;
  void clear_ctype();
  static const int kCTypeFieldNumber = 3;
  ::CD::CardData_CardType ctype() const;
  void set_ctype(::CD::CardData_CardType value);

  // optional .CD.CardData.EnergyType eType = 4;
  bool has_etype() const;
  void clear_etype();
  static const int kETypeFieldNumber = 4;
  ::CD::CardData_EnergyType etype() const;
  void set_etype(::CD::CardData_EnergyType value);

  // @@protoc_insertion_point(class_scope:CD.CardData)
 private:
  void set_has_id();
  void clear_has_id();
  void set_has_name();
  void clear_has_name();
  void set_has_ctype();
  void clear_has_ctype();
  void set_has_etype();
  void clear_has_etype();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::int32 id_;
  int ctype_;
  int etype_;
  friend struct ::protobuf_CardData_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CardData

// optional int32 id = 1;
inline bool CardData::has_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CardData::set_has_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CardData::clear_has_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CardData::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 CardData::id() const {
  // @@protoc_insertion_point(field_get:CD.CardData.id)
  return id_;
}
inline void CardData::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:CD.CardData.id)
}

// optional string name = 2;
inline bool CardData::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CardData::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CardData::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CardData::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_name();
}
inline const ::std::string& CardData::name() const {
  // @@protoc_insertion_point(field_get:CD.CardData.name)
  return name_.GetNoArena();
}
inline void CardData::set_name(const ::std::string& value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:CD.CardData.name)
}
#if LANG_CXX11
inline void CardData::set_name(::std::string&& value) {
  set_has_name();
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:CD.CardData.name)
}
#endif
inline void CardData::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:CD.CardData.name)
}
inline void CardData::set_name(const char* value, size_t size) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:CD.CardData.name)
}
inline ::std::string* CardData::mutable_name() {
  set_has_name();
  // @@protoc_insertion_point(field_mutable:CD.CardData.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CardData::release_name() {
  // @@protoc_insertion_point(field_release:CD.CardData.name)
  if (!has_name()) {
    return NULL;
  }
  clear_has_name();
  return name_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CardData::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    set_has_name();
  } else {
    clear_has_name();
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:CD.CardData.name)
}

// optional .CD.CardData.CardType cType = 3;
inline bool CardData::has_ctype() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void CardData::set_has_ctype() {
  _has_bits_[0] |= 0x00000004u;
}
inline void CardData::clear_has_ctype() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void CardData::clear_ctype() {
  ctype_ = 0;
  clear_has_ctype();
}
inline ::CD::CardData_CardType CardData::ctype() const {
  // @@protoc_insertion_point(field_get:CD.CardData.cType)
  return static_cast< ::CD::CardData_CardType >(ctype_);
}
inline void CardData::set_ctype(::CD::CardData_CardType value) {
  assert(::CD::CardData_CardType_IsValid(value));
  set_has_ctype();
  ctype_ = value;
  // @@protoc_insertion_point(field_set:CD.CardData.cType)
}

// optional .CD.CardData.EnergyType eType = 4;
inline bool CardData::has_etype() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void CardData::set_has_etype() {
  _has_bits_[0] |= 0x00000008u;
}
inline void CardData::clear_has_etype() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void CardData::clear_etype() {
  etype_ = 0;
  clear_has_etype();
}
inline ::CD::CardData_EnergyType CardData::etype() const {
  // @@protoc_insertion_point(field_get:CD.CardData.eType)
  return static_cast< ::CD::CardData_EnergyType >(etype_);
}
inline void CardData::set_etype(::CD::CardData_EnergyType value) {
  assert(::CD::CardData_EnergyType_IsValid(value));
  set_has_etype();
  etype_ = value;
  // @@protoc_insertion_point(field_set:CD.CardData.eType)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace CD

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::CD::CardData_CardType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::CD::CardData_CardType>() {
  return ::CD::CardData_CardType_descriptor();
}
template <> struct is_proto_enum< ::CD::CardData_EnergyType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::CD::CardData_EnergyType>() {
  return ::CD::CardData_EnergyType_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_CardData_2eproto
