// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CardData.proto

#include "CardData.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace CD {
class CardDataDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<CardData>
      _instance;
} _CardData_default_instance_;
}  // namespace CD
namespace protobuf_CardData_2eproto {
static void InitDefaultsCardData() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::CD::_CardData_default_instance_;
    new (ptr) ::CD::CardData();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::CD::CardData::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_CardData =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsCardData}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_CardData.base);
}

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::CD::CardData, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::CD::CardData, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::CD::CardData, id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::CD::CardData, name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::CD::CardData, ctype_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::CD::CardData, etype_),
  1,
  0,
  2,
  3,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 9, sizeof(::CD::CardData)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::CD::_CardData_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "CardData.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\016CardData.proto\022\002CD\"\276\002\n\010CardData\022\n\n\002id\030"
      "\001 \001(\005\022\014\n\004name\030\002 \001(\t\022$\n\005cType\030\003 \001(\0162\025.CD."
      "CardData.CardType\022&\n\005eType\030\004 \001(\0162\027.CD.Ca"
      "rdData.EnergyType\"B\n\010CardType\022\n\n\006CT_ANY\020"
      "\000\022\013\n\007CT_PKMN\020\001\022\r\n\tCT_ENERGY\020\002\022\016\n\nCT_TRAI"
      "NER\020\003\"\205\001\n\nEnergyType\022\n\n\006ET_ANY\020\000\022\014\n\010ET_W"
      "ATER\020\001\022\013\n\007ET_FIRE\020\002\022\014\n\010ET_GRASS\020\003\022\017\n\013ET_"
      "ELECTRIC\020\004\022\016\n\nET_PSYCHIC\020\005\022\017\n\013ET_FIGHTIN"
      "G\020\006\022\020\n\014ET_COLORLESS\020\007"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 341);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "CardData.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_CardData_2eproto
namespace CD {
const ::google::protobuf::EnumDescriptor* CardData_CardType_descriptor() {
  protobuf_CardData_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_CardData_2eproto::file_level_enum_descriptors[0];
}
bool CardData_CardType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const CardData_CardType CardData::CT_ANY;
const CardData_CardType CardData::CT_PKMN;
const CardData_CardType CardData::CT_ENERGY;
const CardData_CardType CardData::CT_TRAINER;
const CardData_CardType CardData::CardType_MIN;
const CardData_CardType CardData::CardType_MAX;
const int CardData::CardType_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
const ::google::protobuf::EnumDescriptor* CardData_EnergyType_descriptor() {
  protobuf_CardData_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_CardData_2eproto::file_level_enum_descriptors[1];
}
bool CardData_EnergyType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const CardData_EnergyType CardData::ET_ANY;
const CardData_EnergyType CardData::ET_WATER;
const CardData_EnergyType CardData::ET_FIRE;
const CardData_EnergyType CardData::ET_GRASS;
const CardData_EnergyType CardData::ET_ELECTRIC;
const CardData_EnergyType CardData::ET_PSYCHIC;
const CardData_EnergyType CardData::ET_FIGHTING;
const CardData_EnergyType CardData::ET_COLORLESS;
const CardData_EnergyType CardData::EnergyType_MIN;
const CardData_EnergyType CardData::EnergyType_MAX;
const int CardData::EnergyType_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

void CardData::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int CardData::kIdFieldNumber;
const int CardData::kNameFieldNumber;
const int CardData::kCTypeFieldNumber;
const int CardData::kETypeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

CardData::CardData()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_CardData_2eproto::scc_info_CardData.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:CD.CardData)
}
CardData::CardData(const CardData& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_name()) {
    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  ::memcpy(&id_, &from.id_,
    static_cast<size_t>(reinterpret_cast<char*>(&etype_) -
    reinterpret_cast<char*>(&id_)) + sizeof(etype_));
  // @@protoc_insertion_point(copy_constructor:CD.CardData)
}

void CardData::SharedCtor() {
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&etype_) -
      reinterpret_cast<char*>(&id_)) + sizeof(etype_));
}

CardData::~CardData() {
  // @@protoc_insertion_point(destructor:CD.CardData)
  SharedDtor();
}

void CardData::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void CardData::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* CardData::descriptor() {
  ::protobuf_CardData_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_CardData_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const CardData& CardData::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_CardData_2eproto::scc_info_CardData.base);
  return *internal_default_instance();
}


void CardData::Clear() {
// @@protoc_insertion_point(message_clear_start:CD.CardData)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    name_.ClearNonDefaultToEmptyNoArena();
  }
  if (cached_has_bits & 14u) {
    ::memset(&id_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&etype_) -
        reinterpret_cast<char*>(&id_)) + sizeof(etype_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool CardData::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:CD.CardData)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          set_has_id();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string name = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->name().data(), static_cast<int>(this->name().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "CD.CardData.name");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .CD.CardData.CardType cType = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::CD::CardData_CardType_IsValid(value)) {
            set_ctype(static_cast< ::CD::CardData_CardType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(
                3, static_cast< ::google::protobuf::uint64>(value));
          }
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .CD.CardData.EnergyType eType = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::CD::CardData_EnergyType_IsValid(value)) {
            set_etype(static_cast< ::CD::CardData_EnergyType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(
                4, static_cast< ::google::protobuf::uint64>(value));
          }
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:CD.CardData)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:CD.CardData)
  return false;
#undef DO_
}

void CardData::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:CD.CardData)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional int32 id = 1;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }

  // optional string name = 2;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "CD.CardData.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->name(), output);
  }

  // optional .CD.CardData.CardType cType = 3;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      3, this->ctype(), output);
  }

  // optional .CD.CardData.EnergyType eType = 4;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      4, this->etype(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:CD.CardData)
}

::google::protobuf::uint8* CardData::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:CD.CardData)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional int32 id = 1;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->id(), target);
  }

  // optional string name = 2;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "CD.CardData.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->name(), target);
  }

  // optional .CD.CardData.CardType cType = 3;
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      3, this->ctype(), target);
  }

  // optional .CD.CardData.EnergyType eType = 4;
  if (cached_has_bits & 0x00000008u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      4, this->etype(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:CD.CardData)
  return target;
}

size_t CardData::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:CD.CardData)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (_has_bits_[0 / 32] & 15u) {
    // optional string name = 2;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }

    // optional int32 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->id());
    }

    // optional .CD.CardData.CardType cType = 3;
    if (has_ctype()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->ctype());
    }

    // optional .CD.CardData.EnergyType eType = 4;
    if (has_etype()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->etype());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void CardData::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:CD.CardData)
  GOOGLE_DCHECK_NE(&from, this);
  const CardData* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const CardData>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:CD.CardData)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:CD.CardData)
    MergeFrom(*source);
  }
}

void CardData::MergeFrom(const CardData& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:CD.CardData)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 15u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_name();
      name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
    }
    if (cached_has_bits & 0x00000002u) {
      id_ = from.id_;
    }
    if (cached_has_bits & 0x00000004u) {
      ctype_ = from.ctype_;
    }
    if (cached_has_bits & 0x00000008u) {
      etype_ = from.etype_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void CardData::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:CD.CardData)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CardData::CopyFrom(const CardData& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:CD.CardData)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CardData::IsInitialized() const {
  return true;
}

void CardData::Swap(CardData* other) {
  if (other == this) return;
  InternalSwap(other);
}
void CardData::InternalSwap(CardData* other) {
  using std::swap;
  name_.Swap(&other->name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(id_, other->id_);
  swap(ctype_, other->ctype_);
  swap(etype_, other->etype_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata CardData::GetMetadata() const {
  protobuf_CardData_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_CardData_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace CD
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::CD::CardData* Arena::CreateMaybeMessage< ::CD::CardData >(Arena* arena) {
  return Arena::CreateInternal< ::CD::CardData >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
