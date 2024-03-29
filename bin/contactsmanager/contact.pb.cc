// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "contactsmanager/contact.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace contactsmanager {
namespace proto {

namespace {

const ::google::protobuf::Descriptor* PContact_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PContact_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_contactsmanager_2fcontact_2eproto() {
  protobuf_AddDesc_contactsmanager_2fcontact_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "contactsmanager/contact.proto");
  GOOGLE_CHECK(file != NULL);
  PContact_descriptor_ = file->message_type(0);
  static const int PContact_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PContact, firstname_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PContact, middlename_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PContact, lastname_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PContact, mobile_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PContact, homepage_),
  };
  PContact_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      PContact_descriptor_,
      PContact::default_instance_,
      PContact_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PContact, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PContact, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(PContact));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_contactsmanager_2fcontact_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    PContact_descriptor_, &PContact::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_contactsmanager_2fcontact_2eproto() {
  delete PContact::default_instance_;
  delete PContact_reflection_;
}

void protobuf_AddDesc_contactsmanager_2fcontact_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\035contactsmanager/contact.proto\022\025contact"
    "smanager.proto\"e\n\010PContact\022\021\n\tfirstName\030"
    "\001 \001(\t\022\022\n\nmiddleName\030\002 \001(\t\022\020\n\010lastName\030\003 "
    "\001(\t\022\016\n\006mobile\030\004 \001(\t\022\020\n\010homepage\030\005 \001(\t", 157);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "contactsmanager/contact.proto", &protobuf_RegisterTypes);
  PContact::default_instance_ = new PContact();
  PContact::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_contactsmanager_2fcontact_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_contactsmanager_2fcontact_2eproto {
  StaticDescriptorInitializer_contactsmanager_2fcontact_2eproto() {
    protobuf_AddDesc_contactsmanager_2fcontact_2eproto();
  }
} static_descriptor_initializer_contactsmanager_2fcontact_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int PContact::kFirstNameFieldNumber;
const int PContact::kMiddleNameFieldNumber;
const int PContact::kLastNameFieldNumber;
const int PContact::kMobileFieldNumber;
const int PContact::kHomepageFieldNumber;
#endif  // !_MSC_VER

PContact::PContact()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void PContact::InitAsDefaultInstance() {
}

PContact::PContact(const PContact& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void PContact::SharedCtor() {
  _cached_size_ = 0;
  firstname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  middlename_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  lastname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  mobile_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  homepage_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

PContact::~PContact() {
  SharedDtor();
}

void PContact::SharedDtor() {
  if (firstname_ != &::google::protobuf::internal::kEmptyString) {
    delete firstname_;
  }
  if (middlename_ != &::google::protobuf::internal::kEmptyString) {
    delete middlename_;
  }
  if (lastname_ != &::google::protobuf::internal::kEmptyString) {
    delete lastname_;
  }
  if (mobile_ != &::google::protobuf::internal::kEmptyString) {
    delete mobile_;
  }
  if (homepage_ != &::google::protobuf::internal::kEmptyString) {
    delete homepage_;
  }
  if (this != default_instance_) {
  }
}

void PContact::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PContact::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PContact_descriptor_;
}

const PContact& PContact::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_contactsmanager_2fcontact_2eproto();  return *default_instance_;
}

PContact* PContact::default_instance_ = NULL;

PContact* PContact::New() const {
  return new PContact;
}

void PContact::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_firstname()) {
      if (firstname_ != &::google::protobuf::internal::kEmptyString) {
        firstname_->clear();
      }
    }
    if (has_middlename()) {
      if (middlename_ != &::google::protobuf::internal::kEmptyString) {
        middlename_->clear();
      }
    }
    if (has_lastname()) {
      if (lastname_ != &::google::protobuf::internal::kEmptyString) {
        lastname_->clear();
      }
    }
    if (has_mobile()) {
      if (mobile_ != &::google::protobuf::internal::kEmptyString) {
        mobile_->clear();
      }
    }
    if (has_homepage()) {
      if (homepage_ != &::google::protobuf::internal::kEmptyString) {
        homepage_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool PContact::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string firstName = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_firstname()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->firstname().data(), this->firstname().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_middleName;
        break;
      }
      
      // optional string middleName = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_middleName:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_middlename()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->middlename().data(), this->middlename().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_lastName;
        break;
      }
      
      // optional string lastName = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_lastName:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_lastname()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->lastname().data(), this->lastname().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_mobile;
        break;
      }
      
      // optional string mobile = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_mobile:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_mobile()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->mobile().data(), this->mobile().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(42)) goto parse_homepage;
        break;
      }
      
      // optional string homepage = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_homepage:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_homepage()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->homepage().data(), this->homepage().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void PContact::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional string firstName = 1;
  if (has_firstname()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->firstname().data(), this->firstname().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->firstname(), output);
  }
  
  // optional string middleName = 2;
  if (has_middlename()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->middlename().data(), this->middlename().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->middlename(), output);
  }
  
  // optional string lastName = 3;
  if (has_lastname()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->lastname().data(), this->lastname().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->lastname(), output);
  }
  
  // optional string mobile = 4;
  if (has_mobile()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->mobile().data(), this->mobile().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      4, this->mobile(), output);
  }
  
  // optional string homepage = 5;
  if (has_homepage()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->homepage().data(), this->homepage().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      5, this->homepage(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* PContact::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional string firstName = 1;
  if (has_firstname()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->firstname().data(), this->firstname().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->firstname(), target);
  }
  
  // optional string middleName = 2;
  if (has_middlename()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->middlename().data(), this->middlename().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->middlename(), target);
  }
  
  // optional string lastName = 3;
  if (has_lastname()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->lastname().data(), this->lastname().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->lastname(), target);
  }
  
  // optional string mobile = 4;
  if (has_mobile()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->mobile().data(), this->mobile().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->mobile(), target);
  }
  
  // optional string homepage = 5;
  if (has_homepage()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->homepage().data(), this->homepage().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->homepage(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int PContact::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string firstName = 1;
    if (has_firstname()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->firstname());
    }
    
    // optional string middleName = 2;
    if (has_middlename()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->middlename());
    }
    
    // optional string lastName = 3;
    if (has_lastname()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->lastname());
    }
    
    // optional string mobile = 4;
    if (has_mobile()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->mobile());
    }
    
    // optional string homepage = 5;
    if (has_homepage()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->homepage());
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PContact::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const PContact* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const PContact*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void PContact::MergeFrom(const PContact& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_firstname()) {
      set_firstname(from.firstname());
    }
    if (from.has_middlename()) {
      set_middlename(from.middlename());
    }
    if (from.has_lastname()) {
      set_lastname(from.lastname());
    }
    if (from.has_mobile()) {
      set_mobile(from.mobile());
    }
    if (from.has_homepage()) {
      set_homepage(from.homepage());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void PContact::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PContact::CopyFrom(const PContact& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PContact::IsInitialized() const {
  
  return true;
}

void PContact::Swap(PContact* other) {
  if (other != this) {
    std::swap(firstname_, other->firstname_);
    std::swap(middlename_, other->middlename_);
    std::swap(lastname_, other->lastname_);
    std::swap(mobile_, other->mobile_);
    std::swap(homepage_, other->homepage_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata PContact::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PContact_descriptor_;
  metadata.reflection = PContact_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace contactsmanager

// @@protoc_insertion_point(global_scope)
