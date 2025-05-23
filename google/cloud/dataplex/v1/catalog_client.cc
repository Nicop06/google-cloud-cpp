// Copyright 2024 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/dataplex/v1/catalog.proto

#include "google/cloud/dataplex/v1/catalog_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dataplex_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CatalogServiceClient::CatalogServiceClient(
    std::shared_ptr<CatalogServiceConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
CatalogServiceClient::~CatalogServiceClient() = default;

future<StatusOr<google::cloud::dataplex::v1::EntryType>>
CatalogServiceClient::CreateEntryType(
    std::string const& parent,
    google::cloud::dataplex::v1::EntryType const& entry_type,
    std::string const& entry_type_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataplex::v1::CreateEntryTypeRequest request;
  request.set_parent(parent);
  *request.mutable_entry_type() = entry_type;
  request.set_entry_type_id(entry_type_id);
  return connection_->CreateEntryType(request);
}

StatusOr<google::longrunning::Operation> CatalogServiceClient::CreateEntryType(
    NoAwaitTag, std::string const& parent,
    google::cloud::dataplex::v1::EntryType const& entry_type,
    std::string const& entry_type_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataplex::v1::CreateEntryTypeRequest request;
  request.set_parent(parent);
  *request.mutable_entry_type() = entry_type;
  request.set_entry_type_id(entry_type_id);
  return connection_->CreateEntryType(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::dataplex::v1::EntryType>>
CatalogServiceClient::CreateEntryType(
    google::cloud::dataplex::v1::CreateEntryTypeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateEntryType(request);
}

StatusOr<google::longrunning::Operation> CatalogServiceClient::CreateEntryType(
    NoAwaitTag,
    google::cloud::dataplex::v1::CreateEntryTypeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateEntryType(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::dataplex::v1::EntryType>>
CatalogServiceClient::CreateEntryType(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateEntryType(operation);
}

future<StatusOr<google::cloud::dataplex::v1::EntryType>>
CatalogServiceClient::UpdateEntryType(
    google::cloud::dataplex::v1::EntryType const& entry_type,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataplex::v1::UpdateEntryTypeRequest request;
  *request.mutable_entry_type() = entry_type;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateEntryType(request);
}

StatusOr<google::longrunning::Operation> CatalogServiceClient::UpdateEntryType(
    NoAwaitTag, google::cloud::dataplex::v1::EntryType const& entry_type,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataplex::v1::UpdateEntryTypeRequest request;
  *request.mutable_entry_type() = entry_type;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateEntryType(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::dataplex::v1::EntryType>>
CatalogServiceClient::UpdateEntryType(
    google::cloud::dataplex::v1::UpdateEntryTypeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateEntryType(request);
}

StatusOr<google::longrunning::Operation> CatalogServiceClient::UpdateEntryType(
    NoAwaitTag,
    google::cloud::dataplex::v1::UpdateEntryTypeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateEntryType(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::dataplex::v1::EntryType>>
CatalogServiceClient::UpdateEntryType(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateEntryType(operation);
}

future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>
CatalogServiceClient::DeleteEntryType(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataplex::v1::DeleteEntryTypeRequest request;
  request.set_name(name);
  return connection_->DeleteEntryType(request);
}

StatusOr<google::longrunning::Operation> CatalogServiceClient::DeleteEntryType(
    NoAwaitTag, std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataplex::v1::DeleteEntryTypeRequest request;
  request.set_name(name);
  return connection_->DeleteEntryType(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>
CatalogServiceClient::DeleteEntryType(
    google::cloud::dataplex::v1::DeleteEntryTypeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteEntryType(request);
}

StatusOr<google::longrunning::Operation> CatalogServiceClient::DeleteEntryType(
    NoAwaitTag,
    google::cloud::dataplex::v1::DeleteEntryTypeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteEntryType(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>
CatalogServiceClient::DeleteEntryType(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteEntryType(operation);
}

StreamRange<google::cloud::dataplex::v1::EntryType>
CatalogServiceClient::ListEntryTypes(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataplex::v1::ListEntryTypesRequest request;
  request.set_parent(parent);
  return connection_->ListEntryTypes(request);
}

StreamRange<google::cloud::dataplex::v1::EntryType>
CatalogServiceClient::ListEntryTypes(
    google::cloud::dataplex::v1::ListEntryTypesRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListEntryTypes(std::move(request));
}

StatusOr<google::cloud::dataplex::v1::EntryType>
CatalogServiceClient::GetEntryType(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataplex::v1::GetEntryTypeRequest request;
  request.set_name(name);
  return connection_->GetEntryType(request);
}

StatusOr<google::cloud::dataplex::v1::EntryType>
CatalogServiceClient::GetEntryType(
    google::cloud::dataplex::v1::GetEntryTypeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetEntryType(request);
}

future<StatusOr<google::cloud::dataplex::v1::AspectType>>
CatalogServiceClient::CreateAspectType(
    std::string const& parent,
    google::cloud::dataplex::v1::AspectType const& aspect_type,
    std::string const& aspect_type_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataplex::v1::CreateAspectTypeRequest request;
  request.set_parent(parent);
  *request.mutable_aspect_type() = aspect_type;
  request.set_aspect_type_id(aspect_type_id);
  return connection_->CreateAspectType(request);
}

StatusOr<google::longrunning::Operation> CatalogServiceClient::CreateAspectType(
    NoAwaitTag, std::string const& parent,
    google::cloud::dataplex::v1::AspectType const& aspect_type,
    std::string const& aspect_type_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataplex::v1::CreateAspectTypeRequest request;
  request.set_parent(parent);
  *request.mutable_aspect_type() = aspect_type;
  request.set_aspect_type_id(aspect_type_id);
  return connection_->CreateAspectType(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::dataplex::v1::AspectType>>
CatalogServiceClient::CreateAspectType(
    google::cloud::dataplex::v1::CreateAspectTypeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateAspectType(request);
}

StatusOr<google::longrunning::Operation> CatalogServiceClient::CreateAspectType(
    NoAwaitTag,
    google::cloud::dataplex::v1::CreateAspectTypeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateAspectType(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::dataplex::v1::AspectType>>
CatalogServiceClient::CreateAspectType(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateAspectType(operation);
}

future<StatusOr<google::cloud::dataplex::v1::AspectType>>
CatalogServiceClient::UpdateAspectType(
    google::cloud::dataplex::v1::AspectType const& aspect_type,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataplex::v1::UpdateAspectTypeRequest request;
  *request.mutable_aspect_type() = aspect_type;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateAspectType(request);
}

StatusOr<google::longrunning::Operation> CatalogServiceClient::UpdateAspectType(
    NoAwaitTag, google::cloud::dataplex::v1::AspectType const& aspect_type,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataplex::v1::UpdateAspectTypeRequest request;
  *request.mutable_aspect_type() = aspect_type;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateAspectType(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::dataplex::v1::AspectType>>
CatalogServiceClient::UpdateAspectType(
    google::cloud::dataplex::v1::UpdateAspectTypeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateAspectType(request);
}

StatusOr<google::longrunning::Operation> CatalogServiceClient::UpdateAspectType(
    NoAwaitTag,
    google::cloud::dataplex::v1::UpdateAspectTypeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateAspectType(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::dataplex::v1::AspectType>>
CatalogServiceClient::UpdateAspectType(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateAspectType(operation);
}

future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>
CatalogServiceClient::DeleteAspectType(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataplex::v1::DeleteAspectTypeRequest request;
  request.set_name(name);
  return connection_->DeleteAspectType(request);
}

StatusOr<google::longrunning::Operation> CatalogServiceClient::DeleteAspectType(
    NoAwaitTag, std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataplex::v1::DeleteAspectTypeRequest request;
  request.set_name(name);
  return connection_->DeleteAspectType(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>
CatalogServiceClient::DeleteAspectType(
    google::cloud::dataplex::v1::DeleteAspectTypeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteAspectType(request);
}

StatusOr<google::longrunning::Operation> CatalogServiceClient::DeleteAspectType(
    NoAwaitTag,
    google::cloud::dataplex::v1::DeleteAspectTypeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteAspectType(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>
CatalogServiceClient::DeleteAspectType(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteAspectType(operation);
}

StreamRange<google::cloud::dataplex::v1::AspectType>
CatalogServiceClient::ListAspectTypes(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataplex::v1::ListAspectTypesRequest request;
  request.set_parent(parent);
  return connection_->ListAspectTypes(request);
}

StreamRange<google::cloud::dataplex::v1::AspectType>
CatalogServiceClient::ListAspectTypes(
    google::cloud::dataplex::v1::ListAspectTypesRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListAspectTypes(std::move(request));
}

StatusOr<google::cloud::dataplex::v1::AspectType>
CatalogServiceClient::GetAspectType(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataplex::v1::GetAspectTypeRequest request;
  request.set_name(name);
  return connection_->GetAspectType(request);
}

StatusOr<google::cloud::dataplex::v1::AspectType>
CatalogServiceClient::GetAspectType(
    google::cloud::dataplex::v1::GetAspectTypeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetAspectType(request);
}

future<StatusOr<google::cloud::dataplex::v1::EntryGroup>>
CatalogServiceClient::CreateEntryGroup(
    std::string const& parent,
    google::cloud::dataplex::v1::EntryGroup const& entry_group,
    std::string const& entry_group_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataplex::v1::CreateEntryGroupRequest request;
  request.set_parent(parent);
  *request.mutable_entry_group() = entry_group;
  request.set_entry_group_id(entry_group_id);
  return connection_->CreateEntryGroup(request);
}

StatusOr<google::longrunning::Operation> CatalogServiceClient::CreateEntryGroup(
    NoAwaitTag, std::string const& parent,
    google::cloud::dataplex::v1::EntryGroup const& entry_group,
    std::string const& entry_group_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataplex::v1::CreateEntryGroupRequest request;
  request.set_parent(parent);
  *request.mutable_entry_group() = entry_group;
  request.set_entry_group_id(entry_group_id);
  return connection_->CreateEntryGroup(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::dataplex::v1::EntryGroup>>
CatalogServiceClient::CreateEntryGroup(
    google::cloud::dataplex::v1::CreateEntryGroupRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateEntryGroup(request);
}

StatusOr<google::longrunning::Operation> CatalogServiceClient::CreateEntryGroup(
    NoAwaitTag,
    google::cloud::dataplex::v1::CreateEntryGroupRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateEntryGroup(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::dataplex::v1::EntryGroup>>
CatalogServiceClient::CreateEntryGroup(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateEntryGroup(operation);
}

future<StatusOr<google::cloud::dataplex::v1::EntryGroup>>
CatalogServiceClient::UpdateEntryGroup(
    google::cloud::dataplex::v1::EntryGroup const& entry_group,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataplex::v1::UpdateEntryGroupRequest request;
  *request.mutable_entry_group() = entry_group;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateEntryGroup(request);
}

StatusOr<google::longrunning::Operation> CatalogServiceClient::UpdateEntryGroup(
    NoAwaitTag, google::cloud::dataplex::v1::EntryGroup const& entry_group,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataplex::v1::UpdateEntryGroupRequest request;
  *request.mutable_entry_group() = entry_group;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateEntryGroup(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::dataplex::v1::EntryGroup>>
CatalogServiceClient::UpdateEntryGroup(
    google::cloud::dataplex::v1::UpdateEntryGroupRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateEntryGroup(request);
}

StatusOr<google::longrunning::Operation> CatalogServiceClient::UpdateEntryGroup(
    NoAwaitTag,
    google::cloud::dataplex::v1::UpdateEntryGroupRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateEntryGroup(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::dataplex::v1::EntryGroup>>
CatalogServiceClient::UpdateEntryGroup(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateEntryGroup(operation);
}

future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>
CatalogServiceClient::DeleteEntryGroup(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataplex::v1::DeleteEntryGroupRequest request;
  request.set_name(name);
  return connection_->DeleteEntryGroup(request);
}

StatusOr<google::longrunning::Operation> CatalogServiceClient::DeleteEntryGroup(
    NoAwaitTag, std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataplex::v1::DeleteEntryGroupRequest request;
  request.set_name(name);
  return connection_->DeleteEntryGroup(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>
CatalogServiceClient::DeleteEntryGroup(
    google::cloud::dataplex::v1::DeleteEntryGroupRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteEntryGroup(request);
}

StatusOr<google::longrunning::Operation> CatalogServiceClient::DeleteEntryGroup(
    NoAwaitTag,
    google::cloud::dataplex::v1::DeleteEntryGroupRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteEntryGroup(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>
CatalogServiceClient::DeleteEntryGroup(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteEntryGroup(operation);
}

StreamRange<google::cloud::dataplex::v1::EntryGroup>
CatalogServiceClient::ListEntryGroups(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataplex::v1::ListEntryGroupsRequest request;
  request.set_parent(parent);
  return connection_->ListEntryGroups(request);
}

StreamRange<google::cloud::dataplex::v1::EntryGroup>
CatalogServiceClient::ListEntryGroups(
    google::cloud::dataplex::v1::ListEntryGroupsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListEntryGroups(std::move(request));
}

StatusOr<google::cloud::dataplex::v1::EntryGroup>
CatalogServiceClient::GetEntryGroup(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataplex::v1::GetEntryGroupRequest request;
  request.set_name(name);
  return connection_->GetEntryGroup(request);
}

StatusOr<google::cloud::dataplex::v1::EntryGroup>
CatalogServiceClient::GetEntryGroup(
    google::cloud::dataplex::v1::GetEntryGroupRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetEntryGroup(request);
}

StatusOr<google::cloud::dataplex::v1::Entry> CatalogServiceClient::CreateEntry(
    std::string const& parent, google::cloud::dataplex::v1::Entry const& entry,
    std::string const& entry_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataplex::v1::CreateEntryRequest request;
  request.set_parent(parent);
  *request.mutable_entry() = entry;
  request.set_entry_id(entry_id);
  return connection_->CreateEntry(request);
}

StatusOr<google::cloud::dataplex::v1::Entry> CatalogServiceClient::CreateEntry(
    google::cloud::dataplex::v1::CreateEntryRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateEntry(request);
}

StatusOr<google::cloud::dataplex::v1::Entry> CatalogServiceClient::UpdateEntry(
    google::cloud::dataplex::v1::Entry const& entry,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataplex::v1::UpdateEntryRequest request;
  *request.mutable_entry() = entry;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateEntry(request);
}

StatusOr<google::cloud::dataplex::v1::Entry> CatalogServiceClient::UpdateEntry(
    google::cloud::dataplex::v1::UpdateEntryRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateEntry(request);
}

StatusOr<google::cloud::dataplex::v1::Entry> CatalogServiceClient::DeleteEntry(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataplex::v1::DeleteEntryRequest request;
  request.set_name(name);
  return connection_->DeleteEntry(request);
}

StatusOr<google::cloud::dataplex::v1::Entry> CatalogServiceClient::DeleteEntry(
    google::cloud::dataplex::v1::DeleteEntryRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteEntry(request);
}

StreamRange<google::cloud::dataplex::v1::Entry>
CatalogServiceClient::ListEntries(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataplex::v1::ListEntriesRequest request;
  request.set_parent(parent);
  return connection_->ListEntries(request);
}

StreamRange<google::cloud::dataplex::v1::Entry>
CatalogServiceClient::ListEntries(
    google::cloud::dataplex::v1::ListEntriesRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListEntries(std::move(request));
}

StatusOr<google::cloud::dataplex::v1::Entry> CatalogServiceClient::GetEntry(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataplex::v1::GetEntryRequest request;
  request.set_name(name);
  return connection_->GetEntry(request);
}

StatusOr<google::cloud::dataplex::v1::Entry> CatalogServiceClient::GetEntry(
    google::cloud::dataplex::v1::GetEntryRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetEntry(request);
}

StatusOr<google::cloud::dataplex::v1::Entry> CatalogServiceClient::LookupEntry(
    google::cloud::dataplex::v1::LookupEntryRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->LookupEntry(request);
}

StreamRange<google::cloud::dataplex::v1::SearchEntriesResult>
CatalogServiceClient::SearchEntries(std::string const& name,
                                    std::string const& query, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataplex::v1::SearchEntriesRequest request;
  request.set_name(name);
  request.set_query(query);
  return connection_->SearchEntries(request);
}

StreamRange<google::cloud::dataplex::v1::SearchEntriesResult>
CatalogServiceClient::SearchEntries(
    google::cloud::dataplex::v1::SearchEntriesRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SearchEntries(std::move(request));
}

future<StatusOr<google::cloud::dataplex::v1::MetadataJob>>
CatalogServiceClient::CreateMetadataJob(
    std::string const& parent,
    google::cloud::dataplex::v1::MetadataJob const& metadata_job,
    std::string const& metadata_job_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataplex::v1::CreateMetadataJobRequest request;
  request.set_parent(parent);
  *request.mutable_metadata_job() = metadata_job;
  request.set_metadata_job_id(metadata_job_id);
  return connection_->CreateMetadataJob(request);
}

StatusOr<google::longrunning::Operation>
CatalogServiceClient::CreateMetadataJob(
    NoAwaitTag, std::string const& parent,
    google::cloud::dataplex::v1::MetadataJob const& metadata_job,
    std::string const& metadata_job_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataplex::v1::CreateMetadataJobRequest request;
  request.set_parent(parent);
  *request.mutable_metadata_job() = metadata_job;
  request.set_metadata_job_id(metadata_job_id);
  return connection_->CreateMetadataJob(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::dataplex::v1::MetadataJob>>
CatalogServiceClient::CreateMetadataJob(
    google::cloud::dataplex::v1::CreateMetadataJobRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateMetadataJob(request);
}

StatusOr<google::longrunning::Operation>
CatalogServiceClient::CreateMetadataJob(
    NoAwaitTag,
    google::cloud::dataplex::v1::CreateMetadataJobRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateMetadataJob(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::dataplex::v1::MetadataJob>>
CatalogServiceClient::CreateMetadataJob(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateMetadataJob(operation);
}

StatusOr<google::cloud::dataplex::v1::MetadataJob>
CatalogServiceClient::GetMetadataJob(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataplex::v1::GetMetadataJobRequest request;
  request.set_name(name);
  return connection_->GetMetadataJob(request);
}

StatusOr<google::cloud::dataplex::v1::MetadataJob>
CatalogServiceClient::GetMetadataJob(
    google::cloud::dataplex::v1::GetMetadataJobRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetMetadataJob(request);
}

StreamRange<google::cloud::dataplex::v1::MetadataJob>
CatalogServiceClient::ListMetadataJobs(std::string const& parent,
                                       Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataplex::v1::ListMetadataJobsRequest request;
  request.set_parent(parent);
  return connection_->ListMetadataJobs(request);
}

StreamRange<google::cloud::dataplex::v1::MetadataJob>
CatalogServiceClient::ListMetadataJobs(
    google::cloud::dataplex::v1::ListMetadataJobsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListMetadataJobs(std::move(request));
}

Status CatalogServiceClient::CancelMetadataJob(std::string const& name,
                                               Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataplex::v1::CancelMetadataJobRequest request;
  request.set_name(name);
  return connection_->CancelMetadataJob(request);
}

Status CatalogServiceClient::CancelMetadataJob(
    google::cloud::dataplex::v1::CancelMetadataJobRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CancelMetadataJob(request);
}

StreamRange<google::cloud::location::Location>
CatalogServiceClient::ListLocations(
    google::cloud::location::ListLocationsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListLocations(std::move(request));
}

StatusOr<google::cloud::location::Location> CatalogServiceClient::GetLocation(
    google::cloud::location::GetLocationRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetLocation(request);
}

StatusOr<google::iam::v1::Policy> CatalogServiceClient::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetIamPolicy(request);
}

StatusOr<google::iam::v1::Policy> CatalogServiceClient::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetIamPolicy(request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
CatalogServiceClient::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->TestIamPermissions(request);
}

StreamRange<google::longrunning::Operation>
CatalogServiceClient::ListOperations(std::string const& name,
                                     std::string const& filter, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::longrunning::ListOperationsRequest request;
  request.set_name(name);
  request.set_filter(filter);
  return connection_->ListOperations(request);
}

StreamRange<google::longrunning::Operation>
CatalogServiceClient::ListOperations(
    google::longrunning::ListOperationsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListOperations(std::move(request));
}

StatusOr<google::longrunning::Operation> CatalogServiceClient::GetOperation(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::longrunning::GetOperationRequest request;
  request.set_name(name);
  return connection_->GetOperation(request);
}

StatusOr<google::longrunning::Operation> CatalogServiceClient::GetOperation(
    google::longrunning::GetOperationRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetOperation(request);
}

Status CatalogServiceClient::DeleteOperation(std::string const& name,
                                             Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::longrunning::DeleteOperationRequest request;
  request.set_name(name);
  return connection_->DeleteOperation(request);
}

Status CatalogServiceClient::DeleteOperation(
    google::longrunning::DeleteOperationRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteOperation(request);
}

Status CatalogServiceClient::CancelOperation(std::string const& name,
                                             Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::longrunning::CancelOperationRequest request;
  request.set_name(name);
  return connection_->CancelOperation(request);
}

Status CatalogServiceClient::CancelOperation(
    google::longrunning::CancelOperationRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CancelOperation(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataplex_v1
}  // namespace cloud
}  // namespace google
