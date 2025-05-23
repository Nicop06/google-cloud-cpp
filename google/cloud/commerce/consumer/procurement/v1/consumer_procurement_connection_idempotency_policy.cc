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
// source:
// google/cloud/commerce/consumer/procurement/v1/procurement_service.proto

#include "google/cloud/commerce/consumer/procurement/v1/consumer_procurement_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace commerce_consumer_procurement_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

ConsumerProcurementServiceConnectionIdempotencyPolicy::
    ~ConsumerProcurementServiceConnectionIdempotencyPolicy() = default;

std::unique_ptr<ConsumerProcurementServiceConnectionIdempotencyPolicy>
ConsumerProcurementServiceConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<
      ConsumerProcurementServiceConnectionIdempotencyPolicy>(*this);
}

Idempotency ConsumerProcurementServiceConnectionIdempotencyPolicy::PlaceOrder(
    google::cloud::commerce::consumer::procurement::v1::
        PlaceOrderRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ConsumerProcurementServiceConnectionIdempotencyPolicy::GetOrder(
    google::cloud::commerce::consumer::procurement::v1::
        GetOrderRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ConsumerProcurementServiceConnectionIdempotencyPolicy::ListOrders(
    google::cloud::commerce::consumer::procurement::v1::
        ListOrdersRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ConsumerProcurementServiceConnectionIdempotencyPolicy::ModifyOrder(
    google::cloud::commerce::consumer::procurement::v1::
        ModifyOrderRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ConsumerProcurementServiceConnectionIdempotencyPolicy::CancelOrder(
    google::cloud::commerce::consumer::procurement::v1::
        CancelOrderRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ConsumerProcurementServiceConnectionIdempotencyPolicy::GetOperation(
    google::longrunning::GetOperationRequest const&) {
  return Idempotency::kIdempotent;
}

std::unique_ptr<ConsumerProcurementServiceConnectionIdempotencyPolicy>
MakeDefaultConsumerProcurementServiceConnectionIdempotencyPolicy() {
  return std::make_unique<
      ConsumerProcurementServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace commerce_consumer_procurement_v1
}  // namespace cloud
}  // namespace google
