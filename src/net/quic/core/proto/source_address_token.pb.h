// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: source_address_token.proto

#ifndef PROTOBUF_source_5faddress_5ftoken_2eproto__INCLUDED
#define PROTOBUF_source_5faddress_5ftoken_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3004000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include "cached_network_parameters.pb.h"
// @@protoc_insertion_point(includes)

namespace protobuf_source_5faddress_5ftoken_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void InitDefaultsSourceAddressTokenImpl();
void InitDefaultsSourceAddressToken();
void InitDefaultsSourceAddressTokensImpl();
void InitDefaultsSourceAddressTokens();
inline void InitDefaults() {
  InitDefaultsSourceAddressToken();
  InitDefaultsSourceAddressTokens();
}
}  // namespace protobuf_source_5faddress_5ftoken_2eproto
namespace net {
class SourceAddressToken;
class SourceAddressTokenDefaultTypeInternal;
extern SourceAddressTokenDefaultTypeInternal _SourceAddressToken_default_instance_;
class SourceAddressTokens;
class SourceAddressTokensDefaultTypeInternal;
extern SourceAddressTokensDefaultTypeInternal _SourceAddressTokens_default_instance_;
}  // namespace net
namespace net {

// ===================================================================

class SourceAddressToken : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:net.SourceAddressToken) */ {
 public:
  SourceAddressToken();
  virtual ~SourceAddressToken();

  SourceAddressToken(const SourceAddressToken& from);

  inline SourceAddressToken& operator=(const SourceAddressToken& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SourceAddressToken(SourceAddressToken&& from) noexcept
    : SourceAddressToken() {
    *this = ::std::move(from);
  }

  inline SourceAddressToken& operator=(SourceAddressToken&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const SourceAddressToken& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SourceAddressToken* internal_default_instance() {
    return reinterpret_cast<const SourceAddressToken*>(
               &_SourceAddressToken_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(SourceAddressToken* other);
  friend void swap(SourceAddressToken& a, SourceAddressToken& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SourceAddressToken* New() const PROTOBUF_FINAL { return New(NULL); }

  SourceAddressToken* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const SourceAddressToken& from);
  void MergeFrom(const SourceAddressToken& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  void DiscardUnknownFields();
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(SourceAddressToken* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required bytes ip = 1;
  bool has_ip() const;
  void clear_ip();
  static const int kIpFieldNumber = 1;
  const ::std::string& ip() const;
  void set_ip(const ::std::string& value);
  #if LANG_CXX11
  void set_ip(::std::string&& value);
  #endif
  void set_ip(const char* value);
  void set_ip(const void* value, size_t size);
  ::std::string* mutable_ip();
  ::std::string* release_ip();
  void set_allocated_ip(::std::string* ip);

  // optional .net.CachedNetworkParameters cached_network_parameters = 3;
  bool has_cached_network_parameters() const;
  void clear_cached_network_parameters();
  static const int kCachedNetworkParametersFieldNumber = 3;
  const ::net::CachedNetworkParameters& cached_network_parameters() const;
  ::net::CachedNetworkParameters* release_cached_network_parameters();
  ::net::CachedNetworkParameters* mutable_cached_network_parameters();
  void set_allocated_cached_network_parameters(::net::CachedNetworkParameters* cached_network_parameters);

  // required int64 timestamp = 2;
  bool has_timestamp() const;
  void clear_timestamp();
  static const int kTimestampFieldNumber = 2;
  ::google::protobuf::int64 timestamp() const;
  void set_timestamp(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:net.SourceAddressToken)
 private:
  void set_has_ip();
  void clear_has_ip();
  void set_has_timestamp();
  void clear_has_timestamp();
  void set_has_cached_network_parameters();
  void clear_has_cached_network_parameters();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr ip_;
  ::net::CachedNetworkParameters* cached_network_parameters_;
  ::google::protobuf::int64 timestamp_;
  friend struct ::protobuf_source_5faddress_5ftoken_2eproto::TableStruct;
  friend void ::protobuf_source_5faddress_5ftoken_2eproto::InitDefaultsSourceAddressTokenImpl();
};
// -------------------------------------------------------------------

class SourceAddressTokens : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:net.SourceAddressTokens) */ {
 public:
  SourceAddressTokens();
  virtual ~SourceAddressTokens();

  SourceAddressTokens(const SourceAddressTokens& from);

  inline SourceAddressTokens& operator=(const SourceAddressTokens& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SourceAddressTokens(SourceAddressTokens&& from) noexcept
    : SourceAddressTokens() {
    *this = ::std::move(from);
  }

  inline SourceAddressTokens& operator=(SourceAddressTokens&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const SourceAddressTokens& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SourceAddressTokens* internal_default_instance() {
    return reinterpret_cast<const SourceAddressTokens*>(
               &_SourceAddressTokens_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(SourceAddressTokens* other);
  friend void swap(SourceAddressTokens& a, SourceAddressTokens& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SourceAddressTokens* New() const PROTOBUF_FINAL { return New(NULL); }

  SourceAddressTokens* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const SourceAddressTokens& from);
  void MergeFrom(const SourceAddressTokens& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  void DiscardUnknownFields();
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(SourceAddressTokens* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .net.SourceAddressToken tokens = 4;
  int tokens_size() const;
  void clear_tokens();
  static const int kTokensFieldNumber = 4;
  const ::net::SourceAddressToken& tokens(int index) const;
  ::net::SourceAddressToken* mutable_tokens(int index);
  ::net::SourceAddressToken* add_tokens();
  ::google::protobuf::RepeatedPtrField< ::net::SourceAddressToken >*
      mutable_tokens();
  const ::google::protobuf::RepeatedPtrField< ::net::SourceAddressToken >&
      tokens() const;

  // @@protoc_insertion_point(class_scope:net.SourceAddressTokens)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::net::SourceAddressToken > tokens_;
  friend struct ::protobuf_source_5faddress_5ftoken_2eproto::TableStruct;
  friend void ::protobuf_source_5faddress_5ftoken_2eproto::InitDefaultsSourceAddressTokensImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SourceAddressToken

// required bytes ip = 1;
inline bool SourceAddressToken::has_ip() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SourceAddressToken::set_has_ip() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SourceAddressToken::clear_has_ip() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SourceAddressToken::clear_ip() {
  ip_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_ip();
}
inline const ::std::string& SourceAddressToken::ip() const {
  // @@protoc_insertion_point(field_get:net.SourceAddressToken.ip)
  return ip_.GetNoArena();
}
inline void SourceAddressToken::set_ip(const ::std::string& value) {
  set_has_ip();
  ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:net.SourceAddressToken.ip)
}
#if LANG_CXX11
inline void SourceAddressToken::set_ip(::std::string&& value) {
  set_has_ip();
  ip_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:net.SourceAddressToken.ip)
}
#endif
inline void SourceAddressToken::set_ip(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_ip();
  ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:net.SourceAddressToken.ip)
}
inline void SourceAddressToken::set_ip(const void* value, size_t size) {
  set_has_ip();
  ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:net.SourceAddressToken.ip)
}
inline ::std::string* SourceAddressToken::mutable_ip() {
  set_has_ip();
  // @@protoc_insertion_point(field_mutable:net.SourceAddressToken.ip)
  return ip_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SourceAddressToken::release_ip() {
  // @@protoc_insertion_point(field_release:net.SourceAddressToken.ip)
  clear_has_ip();
  return ip_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SourceAddressToken::set_allocated_ip(::std::string* ip) {
  if (ip != NULL) {
    set_has_ip();
  } else {
    clear_has_ip();
  }
  ip_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ip);
  // @@protoc_insertion_point(field_set_allocated:net.SourceAddressToken.ip)
}

// required int64 timestamp = 2;
inline bool SourceAddressToken::has_timestamp() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void SourceAddressToken::set_has_timestamp() {
  _has_bits_[0] |= 0x00000004u;
}
inline void SourceAddressToken::clear_has_timestamp() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void SourceAddressToken::clear_timestamp() {
  timestamp_ = GOOGLE_LONGLONG(0);
  clear_has_timestamp();
}
inline ::google::protobuf::int64 SourceAddressToken::timestamp() const {
  // @@protoc_insertion_point(field_get:net.SourceAddressToken.timestamp)
  return timestamp_;
}
inline void SourceAddressToken::set_timestamp(::google::protobuf::int64 value) {
  set_has_timestamp();
  timestamp_ = value;
  // @@protoc_insertion_point(field_set:net.SourceAddressToken.timestamp)
}

// optional .net.CachedNetworkParameters cached_network_parameters = 3;
inline bool SourceAddressToken::has_cached_network_parameters() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SourceAddressToken::set_has_cached_network_parameters() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SourceAddressToken::clear_has_cached_network_parameters() {
  _has_bits_[0] &= ~0x00000002u;
}
inline const ::net::CachedNetworkParameters& SourceAddressToken::cached_network_parameters() const {
  const ::net::CachedNetworkParameters* p = cached_network_parameters_;
  // @@protoc_insertion_point(field_get:net.SourceAddressToken.cached_network_parameters)
  return p != NULL ? *p : *reinterpret_cast<const ::net::CachedNetworkParameters*>(
      &::net::_CachedNetworkParameters_default_instance_);
}
inline ::net::CachedNetworkParameters* SourceAddressToken::release_cached_network_parameters() {
  // @@protoc_insertion_point(field_release:net.SourceAddressToken.cached_network_parameters)
  clear_has_cached_network_parameters();
  ::net::CachedNetworkParameters* temp = cached_network_parameters_;
  cached_network_parameters_ = NULL;
  return temp;
}
inline ::net::CachedNetworkParameters* SourceAddressToken::mutable_cached_network_parameters() {
  set_has_cached_network_parameters();
  if (cached_network_parameters_ == NULL) {
    cached_network_parameters_ = new ::net::CachedNetworkParameters;
  }
  // @@protoc_insertion_point(field_mutable:net.SourceAddressToken.cached_network_parameters)
  return cached_network_parameters_;
}
inline void SourceAddressToken::set_allocated_cached_network_parameters(::net::CachedNetworkParameters* cached_network_parameters) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(cached_network_parameters_);
  }
  if (cached_network_parameters) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      cached_network_parameters = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, cached_network_parameters, submessage_arena);
    }
    set_has_cached_network_parameters();
  } else {
    clear_has_cached_network_parameters();
  }
  cached_network_parameters_ = cached_network_parameters;
  // @@protoc_insertion_point(field_set_allocated:net.SourceAddressToken.cached_network_parameters)
}

// -------------------------------------------------------------------

// SourceAddressTokens

// repeated .net.SourceAddressToken tokens = 4;
inline int SourceAddressTokens::tokens_size() const {
  return tokens_.size();
}
inline void SourceAddressTokens::clear_tokens() {
  tokens_.Clear();
}
inline const ::net::SourceAddressToken& SourceAddressTokens::tokens(int index) const {
  // @@protoc_insertion_point(field_get:net.SourceAddressTokens.tokens)
  return tokens_.Get(index);
}
inline ::net::SourceAddressToken* SourceAddressTokens::mutable_tokens(int index) {
  // @@protoc_insertion_point(field_mutable:net.SourceAddressTokens.tokens)
  return tokens_.Mutable(index);
}
inline ::net::SourceAddressToken* SourceAddressTokens::add_tokens() {
  // @@protoc_insertion_point(field_add:net.SourceAddressTokens.tokens)
  return tokens_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::net::SourceAddressToken >*
SourceAddressTokens::mutable_tokens() {
  // @@protoc_insertion_point(field_mutable_list:net.SourceAddressTokens.tokens)
  return &tokens_;
}
inline const ::google::protobuf::RepeatedPtrField< ::net::SourceAddressToken >&
SourceAddressTokens::tokens() const {
  // @@protoc_insertion_point(field_list:net.SourceAddressTokens.tokens)
  return tokens_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace net

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_source_5faddress_5ftoken_2eproto__INCLUDED
