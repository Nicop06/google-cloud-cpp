// Copyright 2023 Google LLC
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
// source: google/cloud/securesourcemanager/v1/secure_source_manager.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SECURESOURCEMANAGER_V1_INTERNAL_SECURE_SOURCE_MANAGER_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SECURESOURCEMANAGER_V1_INTERNAL_SECURE_SOURCE_MANAGER_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/location/locations.grpc.pb.h>
#include <google/cloud/securesourcemanager/v1/secure_source_manager.grpc.pb.h>
#include <google/iam/v1/iam_policy.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace securesourcemanager_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class SecureSourceManagerStub {
 public:
  virtual ~SecureSourceManagerStub() = 0;

  virtual StatusOr<
      google::cloud::securesourcemanager::v1::ListInstancesResponse>
  ListInstances(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securesourcemanager::v1::ListInstancesRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::securesourcemanager::v1::Instance>
  GetInstance(grpc::ClientContext& context, Options const& options,
              google::cloud::securesourcemanager::v1::GetInstanceRequest const&
                  request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncCreateInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::securesourcemanager::v1::CreateInstanceRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> CreateInstance(
      grpc::ClientContext& context, Options options,
      google::cloud::securesourcemanager::v1::CreateInstanceRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncDeleteInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::securesourcemanager::v1::DeleteInstanceRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> DeleteInstance(
      grpc::ClientContext& context, Options options,
      google::cloud::securesourcemanager::v1::DeleteInstanceRequest const&
          request) = 0;

  virtual StatusOr<
      google::cloud::securesourcemanager::v1::ListRepositoriesResponse>
  ListRepositories(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securesourcemanager::v1::ListRepositoriesRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::securesourcemanager::v1::Repository>
  GetRepository(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securesourcemanager::v1::GetRepositoryRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncCreateRepository(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::securesourcemanager::v1::CreateRepositoryRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> CreateRepository(
      grpc::ClientContext& context, Options options,
      google::cloud::securesourcemanager::v1::CreateRepositoryRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteRepository(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::securesourcemanager::v1::DeleteRepositoryRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> DeleteRepository(
      grpc::ClientContext& context, Options options,
      google::cloud::securesourcemanager::v1::DeleteRepositoryRequest const&
          request) = 0;

  virtual StatusOr<google::iam::v1::Policy> GetIamPolicyRepo(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::GetIamPolicyRequest const& request) = 0;

  virtual StatusOr<google::iam::v1::Policy> SetIamPolicyRepo(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::SetIamPolicyRequest const& request) = 0;

  virtual StatusOr<google::iam::v1::TestIamPermissionsResponse>
  TestIamPermissionsRepo(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::TestIamPermissionsRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncCreateBranchRule(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::securesourcemanager::v1::CreateBranchRuleRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> CreateBranchRule(
      grpc::ClientContext& context, Options options,
      google::cloud::securesourcemanager::v1::CreateBranchRuleRequest const&
          request) = 0;

  virtual StatusOr<
      google::cloud::securesourcemanager::v1::ListBranchRulesResponse>
  ListBranchRules(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securesourcemanager::v1::ListBranchRulesRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::securesourcemanager::v1::BranchRule>
  GetBranchRule(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securesourcemanager::v1::GetBranchRuleRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncUpdateBranchRule(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::securesourcemanager::v1::UpdateBranchRuleRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> UpdateBranchRule(
      grpc::ClientContext& context, Options options,
      google::cloud::securesourcemanager::v1::UpdateBranchRuleRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteBranchRule(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::securesourcemanager::v1::DeleteBranchRuleRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> DeleteBranchRule(
      grpc::ClientContext& context, Options options,
      google::cloud::securesourcemanager::v1::DeleteBranchRuleRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::location::ListLocationsResponse>
  ListLocations(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::ListLocationsRequest const& request) = 0;

  virtual StatusOr<google::cloud::location::Location> GetLocation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::GetLocationRequest const& request) = 0;

  virtual StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::SetIamPolicyRequest const& request) = 0;

  virtual StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::GetIamPolicyRequest const& request) = 0;

  virtual StatusOr<google::iam::v1::TestIamPermissionsResponse>
  TestIamPermissions(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::TestIamPermissionsRequest const& request) = 0;

  virtual StatusOr<google::longrunning::ListOperationsResponse> ListOperations(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::ListOperationsRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> GetOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::GetOperationRequest const& request) = 0;

  virtual Status DeleteOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::DeleteOperationRequest const& request) = 0;

  virtual Status CancelOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::GetOperationRequest const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::CancelOperationRequest const& request) = 0;
};

class DefaultSecureSourceManagerStub : public SecureSourceManagerStub {
 public:
  DefaultSecureSourceManagerStub(
      std::unique_ptr<google::cloud::securesourcemanager::v1::
                          SecureSourceManager::StubInterface>
          grpc_stub,
      std::unique_ptr<google::iam::v1::IAMPolicy::StubInterface> iampolicy_stub,
      std::unique_ptr<google::cloud::location::Locations::StubInterface>
          locations_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations_stub)
      : grpc_stub_(std::move(grpc_stub)),
        iampolicy_stub_(std::move(iampolicy_stub)),
        locations_stub_(std::move(locations_stub)),
        operations_stub_(std::move(operations_stub)) {}

  StatusOr<google::cloud::securesourcemanager::v1::ListInstancesResponse>
  ListInstances(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securesourcemanager::v1::ListInstancesRequest const&
          request) override;

  StatusOr<google::cloud::securesourcemanager::v1::Instance> GetInstance(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securesourcemanager::v1::GetInstanceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::securesourcemanager::v1::CreateInstanceRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> CreateInstance(
      grpc::ClientContext& context, Options options,
      google::cloud::securesourcemanager::v1::CreateInstanceRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::securesourcemanager::v1::DeleteInstanceRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeleteInstance(
      grpc::ClientContext& context, Options options,
      google::cloud::securesourcemanager::v1::DeleteInstanceRequest const&
          request) override;

  StatusOr<google::cloud::securesourcemanager::v1::ListRepositoriesResponse>
  ListRepositories(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securesourcemanager::v1::ListRepositoriesRequest const&
          request) override;

  StatusOr<google::cloud::securesourcemanager::v1::Repository> GetRepository(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securesourcemanager::v1::GetRepositoryRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateRepository(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::securesourcemanager::v1::CreateRepositoryRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> CreateRepository(
      grpc::ClientContext& context, Options options,
      google::cloud::securesourcemanager::v1::CreateRepositoryRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteRepository(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::securesourcemanager::v1::DeleteRepositoryRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeleteRepository(
      grpc::ClientContext& context, Options options,
      google::cloud::securesourcemanager::v1::DeleteRepositoryRequest const&
          request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicyRepo(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicyRepo(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissionsRepo(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateBranchRule(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::securesourcemanager::v1::CreateBranchRuleRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> CreateBranchRule(
      grpc::ClientContext& context, Options options,
      google::cloud::securesourcemanager::v1::CreateBranchRuleRequest const&
          request) override;

  StatusOr<google::cloud::securesourcemanager::v1::ListBranchRulesResponse>
  ListBranchRules(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securesourcemanager::v1::ListBranchRulesRequest const&
          request) override;

  StatusOr<google::cloud::securesourcemanager::v1::BranchRule> GetBranchRule(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securesourcemanager::v1::GetBranchRuleRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateBranchRule(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::securesourcemanager::v1::UpdateBranchRuleRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> UpdateBranchRule(
      grpc::ClientContext& context, Options options,
      google::cloud::securesourcemanager::v1::UpdateBranchRuleRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteBranchRule(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::securesourcemanager::v1::DeleteBranchRuleRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeleteBranchRule(
      grpc::ClientContext& context, Options options,
      google::cloud::securesourcemanager::v1::DeleteBranchRuleRequest const&
          request) override;

  StatusOr<google::cloud::location::ListLocationsResponse> ListLocations(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::ListLocationsRequest const& request) override;

  StatusOr<google::cloud::location::Location> GetLocation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::GetLocationRequest const& request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  StatusOr<google::longrunning::ListOperationsResponse> ListOperations(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::ListOperationsRequest const& request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

  Status DeleteOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::DeleteOperationRequest const& request) override;

  Status CancelOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::unique_ptr<google::cloud::securesourcemanager::v1::SecureSourceManager::
                      StubInterface>
      grpc_stub_;
  std::unique_ptr<google::iam::v1::IAMPolicy::StubInterface> iampolicy_stub_;
  std::unique_ptr<google::cloud::location::Locations::StubInterface>
      locations_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface>
      operations_stub_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace securesourcemanager_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SECURESOURCEMANAGER_V1_INTERNAL_SECURE_SOURCE_MANAGER_STUB_H
