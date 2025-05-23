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
// source: google/cloud/compute/reservations/v1/reservations.proto

#include "google/cloud/compute/reservations/v1/internal/reservations_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_reservations_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ReservationsTracingConnection::ReservationsTracingConnection(
    std::shared_ptr<compute_reservations_v1::ReservationsConnection> child)
    : child_(std::move(child)) {}

StreamRange<std::pair<std::string,
                      google::cloud::cpp::compute::v1::ReservationsScopedList>>
ReservationsTracingConnection::AggregatedListReservations(
    google::cloud::cpp::compute::reservations::v1::
        AggregatedListReservationsRequest request) {
  auto span = internal::MakeSpan(
      "compute_reservations_v1::ReservationsConnection::"
      "AggregatedListReservations");
  internal::OTelScope scope(span);
  auto sr = child_->AggregatedListReservations(std::move(request));
  return internal::MakeTracedStreamRange<std::pair<
      std::string, google::cloud::cpp::compute::v1::ReservationsScopedList>>(
      std::move(span), std::move(sr));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ReservationsTracingConnection::DeleteReservation(
    google::cloud::cpp::compute::reservations::v1::
        DeleteReservationRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_reservations_v1::ReservationsConnection::DeleteReservation");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteReservation(request));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
ReservationsTracingConnection::DeleteReservation(
    NoAwaitTag, google::cloud::cpp::compute::reservations::v1::
                    DeleteReservationRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_reservations_v1::ReservationsConnection::DeleteReservation");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->DeleteReservation(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ReservationsTracingConnection::DeleteReservation(
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto span = internal::MakeSpan(
      "compute_reservations_v1::ReservationsConnection::DeleteReservation");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteReservation(operation));
}

StatusOr<google::cloud::cpp::compute::v1::Reservation>
ReservationsTracingConnection::GetReservation(
    google::cloud::cpp::compute::reservations::v1::GetReservationRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_reservations_v1::ReservationsConnection::GetReservation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetReservation(request));
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
ReservationsTracingConnection::GetIamPolicy(
    google::cloud::cpp::compute::reservations::v1::GetIamPolicyRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_reservations_v1::ReservationsConnection::GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetIamPolicy(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ReservationsTracingConnection::InsertReservation(
    google::cloud::cpp::compute::reservations::v1::
        InsertReservationRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_reservations_v1::ReservationsConnection::InsertReservation");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->InsertReservation(request));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
ReservationsTracingConnection::InsertReservation(
    NoAwaitTag, google::cloud::cpp::compute::reservations::v1::
                    InsertReservationRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_reservations_v1::ReservationsConnection::InsertReservation");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->InsertReservation(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ReservationsTracingConnection::InsertReservation(
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto span = internal::MakeSpan(
      "compute_reservations_v1::ReservationsConnection::InsertReservation");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->InsertReservation(operation));
}

StreamRange<google::cloud::cpp::compute::v1::Reservation>
ReservationsTracingConnection::ListReservations(
    google::cloud::cpp::compute::reservations::v1::ListReservationsRequest
        request) {
  auto span = internal::MakeSpan(
      "compute_reservations_v1::ReservationsConnection::ListReservations");
  internal::OTelScope scope(span);
  auto sr = child_->ListReservations(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cpp::compute::v1::Reservation>(std::move(span),
                                                    std::move(sr));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ReservationsTracingConnection::PerformMaintenance(
    google::cloud::cpp::compute::reservations::v1::
        PerformMaintenanceRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_reservations_v1::ReservationsConnection::PerformMaintenance");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->PerformMaintenance(request));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
ReservationsTracingConnection::PerformMaintenance(
    NoAwaitTag, google::cloud::cpp::compute::reservations::v1::
                    PerformMaintenanceRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_reservations_v1::ReservationsConnection::PerformMaintenance");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->PerformMaintenance(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ReservationsTracingConnection::PerformMaintenance(
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto span = internal::MakeSpan(
      "compute_reservations_v1::ReservationsConnection::PerformMaintenance");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->PerformMaintenance(operation));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ReservationsTracingConnection::Resize(
    google::cloud::cpp::compute::reservations::v1::ResizeRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_reservations_v1::ReservationsConnection::Resize");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->Resize(request));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
ReservationsTracingConnection::Resize(
    NoAwaitTag,
    google::cloud::cpp::compute::reservations::v1::ResizeRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_reservations_v1::ReservationsConnection::Resize");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->Resize(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ReservationsTracingConnection::Resize(
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto span = internal::MakeSpan(
      "compute_reservations_v1::ReservationsConnection::Resize");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->Resize(operation));
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
ReservationsTracingConnection::SetIamPolicy(
    google::cloud::cpp::compute::reservations::v1::SetIamPolicyRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_reservations_v1::ReservationsConnection::SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->SetIamPolicy(request));
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
ReservationsTracingConnection::TestIamPermissions(
    google::cloud::cpp::compute::reservations::v1::
        TestIamPermissionsRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_reservations_v1::ReservationsConnection::TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->TestIamPermissions(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ReservationsTracingConnection::UpdateReservation(
    google::cloud::cpp::compute::reservations::v1::
        UpdateReservationRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_reservations_v1::ReservationsConnection::UpdateReservation");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateReservation(request));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
ReservationsTracingConnection::UpdateReservation(
    NoAwaitTag, google::cloud::cpp::compute::reservations::v1::
                    UpdateReservationRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_reservations_v1::ReservationsConnection::UpdateReservation");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->UpdateReservation(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ReservationsTracingConnection::UpdateReservation(
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto span = internal::MakeSpan(
      "compute_reservations_v1::ReservationsConnection::UpdateReservation");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UpdateReservation(operation));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<compute_reservations_v1::ReservationsConnection>
MakeReservationsTracingConnection(
    std::shared_ptr<compute_reservations_v1::ReservationsConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<ReservationsTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_reservations_v1_internal
}  // namespace cloud
}  // namespace google
