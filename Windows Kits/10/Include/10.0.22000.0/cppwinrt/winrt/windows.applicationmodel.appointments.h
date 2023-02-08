// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Appointments_H
#define WINRT_Windows_ApplicationModel_Appointments_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.201201.7"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.201201.7"
#include "winrt/Windows.ApplicationModel.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.System.2.h"
#include "winrt/impl/Windows.UI.2.h"
#include "winrt/impl/Windows.UI.Popups.2.h"
#include "winrt/impl/Windows.ApplicationModel.Appointments.2.h"
namespace winrt::impl
{
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::DateTime) consume_Windows_ApplicationModel_Appointments_IAppointment<D>::StartTime() const
    {
        Windows::Foundation::DateTime value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointment)->get_StartTime(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Appointments_IAppointment<D>::StartTime(Windows::Foundation::DateTime const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointment)->put_StartTime(impl::bind_in(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) consume_Windows_ApplicationModel_Appointments_IAppointment<D>::Duration() const
    {
        Windows::Foundation::TimeSpan value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointment)->get_Duration(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Appointments_IAppointment<D>::Duration(Windows::Foundation::TimeSpan const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointment)->put_Duration(impl::bind_in(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Appointments_IAppointment<D>::Location() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointment)->get_Location(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Appointments_IAppointment<D>::Location(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointment)->put_Location(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Appointments_IAppointment<D>::Subject() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointment)->get_Subject(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Appointments_IAppointment<D>::Subject(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointment)->put_Subject(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Appointments_IAppointment<D>::Details() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointment)->get_Details(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Appointments_IAppointment<D>::Details(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointment)->put_Details(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::Foundation::TimeSpan>) consume_Windows_ApplicationModel_Appointments_IAppointment<D>::Reminder() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointment)->get_Reminder(&value));
        return Windows::Foundation::IReference<Windows::Foundation::TimeSpan>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Appointments_IAppointment<D>::Reminder(Windows::Foundation::IReference<Windows::Foundation::TimeSpan> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointment)->put_Reminder(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Appointments::AppointmentOrganizer) consume_Windows_ApplicationModel_Appointments_IAppointment<D>::Organizer() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointment)->get_Organizer(&value));
        return Windows::ApplicationModel::Appointments::AppointmentOrganizer{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Appointments_IAppointment<D>::Organizer(Windows::ApplicationModel::Appointments::AppointmentOrganizer const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointment)->put_Organizer(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Appointments::AppointmentInvitee>) consume_Windows_ApplicationModel_Appointments_IAppointment<D>::Invitees() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointment)->get_Invitees(&value));
        return Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Appointments::AppointmentInvitee>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Appointments::AppointmentRecurrence) consume_Windows_ApplicationModel_Appointments_IAppointment<D>::Recurrence() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointment)->get_Recurrence(&value));
        return Windows::ApplicationModel::Appointments::AppointmentRecurrence{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Appointments_IAppointment<D>::Recurrence(Windows::ApplicationModel::Appointments::AppointmentRecurrence const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointment)->put_Recurrence(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Appointments::AppointmentBusyStatus) consume_Windows_ApplicationModel_Appointments_IAppointment<D>::BusyStatus() const
    {
        Windows::ApplicationModel::Appointments::AppointmentBusyStatus value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointment)->get_BusyStatus(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Appointments_IAppointment<D>::BusyStatus(Windows::ApplicationModel::Appointments::AppointmentBusyStatus const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointment)->put_BusyStatus(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_Appointments_IAppointment<D>::AllDay() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointment)->get_AllDay(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Appointments_IAppointment<D>::AllDay(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointment)->put_AllDay(value));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Appointments::AppointmentSensitivity) consume_Windows_ApplicationModel_Appointments_IAppointment<D>::Sensitivity() const
    {
        Windows::ApplicationModel::Appointments::AppointmentSensitivity value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointment)->get_Sensitivity(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Appointments_IAppointment<D>::Sensitivity(Windows::ApplicationModel::Appointments::AppointmentSensitivity const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointment)->put_Sensitivity(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Uri) consume_Windows_ApplicationModel_Appointments_IAppointment<D>::Uri() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointment)->get_Uri(&value));
        return Windows::Foundation::Uri{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Appointments_IAppointment<D>::Uri(Windows::Foundation::Uri const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointment)->put_Uri(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Appointments_IAppointment2<D>::LocalId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointment2)->get_LocalId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Appointments_IAppointment2<D>::CalendarId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointment2)->get_CalendarId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Appointments_IAppointment2<D>::RoamingId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointment2)->get_RoamingId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Appointments_IAppointment2<D>::RoamingId(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointment2)->put_RoamingId(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::Foundation::DateTime>) consume_Windows_ApplicationModel_Appointments_IAppointment2<D>::OriginalStartTime() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointment2)->get_OriginalStartTime(&value));
        return Windows::Foundation::IReference<Windows::Foundation::DateTime>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_Appointments_IAppointment2<D>::IsResponseRequested() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointment2)->get_IsResponseRequested(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Appointments_IAppointment2<D>::IsResponseRequested(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointment2)->put_IsResponseRequested(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_Appointments_IAppointment2<D>::AllowNewTimeProposal() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointment2)->get_AllowNewTimeProposal(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Appointments_IAppointment2<D>::AllowNewTimeProposal(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointment2)->put_AllowNewTimeProposal(value));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Appointments_IAppointment2<D>::OnlineMeetingLink() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointment2)->get_OnlineMeetingLink(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Appointments_IAppointment2<D>::OnlineMeetingLink(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointment2)->put_OnlineMeetingLink(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::Foundation::DateTime>) consume_Windows_ApplicationModel_Appointments_IAppointment2<D>::ReplyTime() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointment2)->get_ReplyTime(&value));
        return Windows::Foundation::IReference<Windows::Foundation::DateTime>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Appointments_IAppointment2<D>::ReplyTime(Windows::Foundation::IReference<Windows::Foundation::DateTime> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointment2)->put_ReplyTime(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Appointments::AppointmentParticipantResponse) consume_Windows_ApplicationModel_Appointments_IAppointment2<D>::UserResponse() const
    {
        Windows::ApplicationModel::Appointments::AppointmentParticipantResponse value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointment2)->get_UserResponse(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Appointments_IAppointment2<D>::UserResponse(Windows::ApplicationModel::Appointments::AppointmentParticipantResponse const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointment2)->put_UserResponse(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_Appointments_IAppointment2<D>::HasInvitees() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointment2)->get_HasInvitees(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_Appointments_IAppointment2<D>::IsCanceledMeeting() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointment2)->get_IsCanceledMeeting(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Appointments_IAppointment2<D>::IsCanceledMeeting(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointment2)->put_IsCanceledMeeting(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_Appointments_IAppointment2<D>::IsOrganizedByUser() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointment2)->get_IsOrganizedByUser(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Appointments_IAppointment2<D>::IsOrganizedByUser(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointment2)->put_IsOrganizedByUser(value));
    }
    template <typename D> WINRT_IMPL_AUTO(uint64_t) consume_Windows_ApplicationModel_Appointments_IAppointment3<D>::ChangeNumber() const
    {
        uint64_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointment3)->get_ChangeNumber(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint64_t) consume_Windows_ApplicationModel_Appointments_IAppointment3<D>::RemoteChangeNumber() const
    {
        uint64_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointment3)->get_RemoteChangeNumber(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Appointments_IAppointment3<D>::RemoteChangeNumber(uint64_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointment3)->put_RemoteChangeNumber(value));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Appointments::AppointmentDetailsKind) consume_Windows_ApplicationModel_Appointments_IAppointment3<D>::DetailsKind() const
    {
        Windows::ApplicationModel::Appointments::AppointmentDetailsKind value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointment3)->get_DetailsKind(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Appointments_IAppointment3<D>::DetailsKind(Windows::ApplicationModel::Appointments::AppointmentDetailsKind const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointment3)->put_DetailsKind(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Color) consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar<D>::DisplayColor() const
    {
        Windows::UI::Color value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar)->get_DisplayColor(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar<D>::DisplayName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar)->get_DisplayName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar<D>::DisplayName(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar)->put_DisplayName(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar<D>::LocalId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar)->get_LocalId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar<D>::IsHidden() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar)->get_IsHidden(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppReadAccess) consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar<D>::OtherAppReadAccess() const
    {
        Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppReadAccess value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar)->get_OtherAppReadAccess(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar<D>::OtherAppReadAccess(Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppReadAccess const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar)->put_OtherAppReadAccess(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppWriteAccess) consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar<D>::OtherAppWriteAccess() const
    {
        Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppWriteAccess value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar)->get_OtherAppWriteAccess(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar<D>::OtherAppWriteAccess(Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppWriteAccess const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar)->put_OtherAppWriteAccess(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar<D>::SourceDisplayName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar)->get_SourceDisplayName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Appointments::AppointmentSummaryCardView) consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar<D>::SummaryCardView() const
    {
        Windows::ApplicationModel::Appointments::AppointmentSummaryCardView value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar)->get_SummaryCardView(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar<D>::SummaryCardView(Windows::ApplicationModel::Appointments::AppointmentSummaryCardView const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar)->put_SummaryCardView(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>>) consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar<D>::FindAppointmentsAsync(Windows::Foundation::DateTime const& rangeStart, Windows::Foundation::TimeSpan const& rangeLength) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar)->FindAppointmentsAsync(impl::bind_in(rangeStart), impl::bind_in(rangeLength), &result));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>>{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>>) consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar<D>::FindAppointmentsAsync(Windows::Foundation::DateTime const& rangeStart, Windows::Foundation::TimeSpan const& rangeLength, Windows::ApplicationModel::Appointments::FindAppointmentsOptions const& options) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar)->FindAppointmentsAsyncWithOptions(impl::bind_in(rangeStart), impl::bind_in(rangeLength), *(void**)(&options), &result));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>>{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentException>>) consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar<D>::FindExceptionsFromMasterAsync(param::hstring const& masterLocalId) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar)->FindExceptionsFromMasterAsync(*(void**)(&masterLocalId), &value));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentException>>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>>) consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar<D>::FindAllInstancesAsync(param::hstring const& masterLocalId, Windows::Foundation::DateTime const& rangeStart, Windows::Foundation::TimeSpan const& rangeLength) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar)->FindAllInstancesAsync(*(void**)(&masterLocalId), impl::bind_in(rangeStart), impl::bind_in(rangeLength), &value));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>>) consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar<D>::FindAllInstancesAsync(param::hstring const& masterLocalId, Windows::Foundation::DateTime const& rangeStart, Windows::Foundation::TimeSpan const& rangeLength, Windows::ApplicationModel::Appointments::FindAppointmentsOptions const& pOptions) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar)->FindAllInstancesAsyncWithOptions(*(void**)(&masterLocalId), impl::bind_in(rangeStart), impl::bind_in(rangeLength), *(void**)(&pOptions), &value));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::Appointment>) consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar<D>::GetAppointmentAsync(param::hstring const& localId) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar)->GetAppointmentAsync(*(void**)(&localId), &result));
        return Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::Appointment>{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::Appointment>) consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar<D>::GetAppointmentInstanceAsync(param::hstring const& localId, Windows::Foundation::DateTime const& instanceStartTime) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar)->GetAppointmentInstanceAsync(*(void**)(&localId), impl::bind_in(instanceStartTime), &result));
        return Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::Appointment>{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>>) consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar<D>::FindUnexpandedAppointmentsAsync() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar)->FindUnexpandedAppointmentsAsync(&result));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>>{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>>) consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar<D>::FindUnexpandedAppointmentsAsync(Windows::ApplicationModel::Appointments::FindAppointmentsOptions const& options) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar)->FindUnexpandedAppointmentsAsyncWithOptions(*(void**)(&options), &result));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>>{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar<D>::DeleteAsync() const
    {
        void* asyncAction{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar)->DeleteAsync(&asyncAction));
        return Windows::Foundation::IAsyncAction{ asyncAction, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar<D>::SaveAsync() const
    {
        void* asyncAction{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar)->SaveAsync(&asyncAction));
        return Windows::Foundation::IAsyncAction{ asyncAction, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar<D>::DeleteAppointmentAsync(param::hstring const& localId) const
    {
        void* asyncAction{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar)->DeleteAppointmentAsync(*(void**)(&localId), &asyncAction));
        return Windows::Foundation::IAsyncAction{ asyncAction, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar<D>::DeleteAppointmentInstanceAsync(param::hstring const& localId, Windows::Foundation::DateTime const& instanceStartTime) const
    {
        void* asyncAction{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar)->DeleteAppointmentInstanceAsync(*(void**)(&localId), impl::bind_in(instanceStartTime), &asyncAction));
        return Windows::Foundation::IAsyncAction{ asyncAction, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar<D>::SaveAppointmentAsync(Windows::ApplicationModel::Appointments::Appointment const& pAppointment) const
    {
        void* asyncAction{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar)->SaveAppointmentAsync(*(void**)(&pAppointment), &asyncAction));
        return Windows::Foundation::IAsyncAction{ asyncAction, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Appointments::AppointmentCalendarSyncManager) consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar2<D>::SyncManager() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar2)->get_SyncManager(&value));
        return Windows::ApplicationModel::Appointments::AppointmentCalendarSyncManager{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar2<D>::RemoteId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar2)->get_RemoteId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar2<D>::RemoteId(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar2)->put_RemoteId(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar2<D>::DisplayColor(Windows::UI::Color const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar2)->put_DisplayColor(impl::bind_in(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar2<D>::IsHidden(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar2)->put_IsHidden(value));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar2<D>::UserDataAccountId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar2)->get_UserDataAccountId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar2<D>::CanCreateOrUpdateAppointments() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar2)->get_CanCreateOrUpdateAppointments(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar2<D>::CanCreateOrUpdateAppointments(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar2)->put_CanCreateOrUpdateAppointments(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar2<D>::CanCancelMeetings() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar2)->get_CanCancelMeetings(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar2<D>::CanCancelMeetings(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar2)->put_CanCancelMeetings(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar2<D>::CanForwardMeetings() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar2)->get_CanForwardMeetings(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar2<D>::CanForwardMeetings(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar2)->put_CanForwardMeetings(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar2<D>::CanProposeNewTimeForMeetings() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar2)->get_CanProposeNewTimeForMeetings(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar2<D>::CanProposeNewTimeForMeetings(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar2)->put_CanProposeNewTimeForMeetings(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar2<D>::CanUpdateMeetingResponses() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar2)->get_CanUpdateMeetingResponses(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar2<D>::CanUpdateMeetingResponses(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar2)->put_CanUpdateMeetingResponses(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar2<D>::CanNotifyInvitees() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar2)->get_CanNotifyInvitees(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar2<D>::CanNotifyInvitees(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar2)->put_CanNotifyInvitees(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar2<D>::MustNofityInvitees() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar2)->get_MustNofityInvitees(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar2<D>::MustNofityInvitees(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar2)->put_MustNofityInvitees(value));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar2<D>::TryCreateOrUpdateAppointmentAsync(Windows::ApplicationModel::Appointments::Appointment const& appointment, bool notifyInvitees) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar2)->TryCreateOrUpdateAppointmentAsync(*(void**)(&appointment), notifyInvitees, &result));
        return Windows::Foundation::IAsyncOperation<bool>{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar2<D>::TryCancelMeetingAsync(Windows::ApplicationModel::Appointments::Appointment const& meeting, param::hstring const& subject, param::hstring const& comment, bool notifyInvitees) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar2)->TryCancelMeetingAsync(*(void**)(&meeting), *(void**)(&subject), *(void**)(&comment), notifyInvitees, &result));
        return Windows::Foundation::IAsyncOperation<bool>{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar2<D>::TryForwardMeetingAsync(Windows::ApplicationModel::Appointments::Appointment const& meeting, param::async_iterable<Windows::ApplicationModel::Appointments::AppointmentInvitee> const& invitees, param::hstring const& subject, param::hstring const& forwardHeader, param::hstring const& comment) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar2)->TryForwardMeetingAsync(*(void**)(&meeting), *(void**)(&invitees), *(void**)(&subject), *(void**)(&forwardHeader), *(void**)(&comment), &result));
        return Windows::Foundation::IAsyncOperation<bool>{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar2<D>::TryProposeNewTimeForMeetingAsync(Windows::ApplicationModel::Appointments::Appointment const& meeting, Windows::Foundation::DateTime const& newStartTime, Windows::Foundation::TimeSpan const& newDuration, param::hstring const& subject, param::hstring const& comment) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar2)->TryProposeNewTimeForMeetingAsync(*(void**)(&meeting), impl::bind_in(newStartTime), impl::bind_in(newDuration), *(void**)(&subject), *(void**)(&comment), &result));
        return Windows::Foundation::IAsyncOperation<bool>{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar2<D>::TryUpdateMeetingResponseAsync(Windows::ApplicationModel::Appointments::Appointment const& meeting, Windows::ApplicationModel::Appointments::AppointmentParticipantResponse const& response, param::hstring const& subject, param::hstring const& comment, bool sendUpdate) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar2)->TryUpdateMeetingResponseAsync(*(void**)(&meeting), static_cast<int32_t>(response), *(void**)(&subject), *(void**)(&comment), sendUpdate, &result));
        return Windows::Foundation::IAsyncOperation<bool>{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar3<D>::RegisterSyncManagerAsync() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar3)->RegisterSyncManagerAsync(&result));
        return Windows::Foundation::IAsyncAction{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Appointments::AppointmentCalendarSyncStatus) consume_Windows_ApplicationModel_Appointments_IAppointmentCalendarSyncManager<D>::Status() const
    {
        Windows::ApplicationModel::Appointments::AppointmentCalendarSyncStatus value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager)->get_Status(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::DateTime) consume_Windows_ApplicationModel_Appointments_IAppointmentCalendarSyncManager<D>::LastSuccessfulSyncTime() const
    {
        Windows::Foundation::DateTime value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager)->get_LastSuccessfulSyncTime(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::DateTime) consume_Windows_ApplicationModel_Appointments_IAppointmentCalendarSyncManager<D>::LastAttemptedSyncTime() const
    {
        Windows::Foundation::DateTime value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager)->get_LastAttemptedSyncTime(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) consume_Windows_ApplicationModel_Appointments_IAppointmentCalendarSyncManager<D>::SyncAsync() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager)->SyncAsync(&result));
        return Windows::Foundation::IAsyncOperation<bool>{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_ApplicationModel_Appointments_IAppointmentCalendarSyncManager<D>::SyncStatusChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::AppointmentCalendarSyncManager, Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager)->add_SyncStatusChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_ApplicationModel_Appointments_IAppointmentCalendarSyncManager<D>::SyncStatusChanged_revoker consume_Windows_ApplicationModel_Appointments_IAppointmentCalendarSyncManager<D>::SyncStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::AppointmentCalendarSyncManager, Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, SyncStatusChanged_revoker>(this, SyncStatusChanged(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Appointments_IAppointmentCalendarSyncManager<D>::SyncStatusChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager)->remove_SyncStatusChanged(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Appointments_IAppointmentCalendarSyncManager2<D>::Status(Windows::ApplicationModel::Appointments::AppointmentCalendarSyncStatus const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager2)->put_Status(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Appointments_IAppointmentCalendarSyncManager2<D>::LastSuccessfulSyncTime(Windows::Foundation::DateTime const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager2)->put_LastSuccessfulSyncTime(impl::bind_in(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Appointments_IAppointmentCalendarSyncManager2<D>::LastAttemptedSyncTime(Windows::Foundation::DateTime const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager2)->put_LastAttemptedSyncTime(impl::bind_in(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Appointments::AppointmentConflictType) consume_Windows_ApplicationModel_Appointments_IAppointmentConflictResult<D>::Type() const
    {
        Windows::ApplicationModel::Appointments::AppointmentConflictType value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentConflictResult)->get_Type(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::DateTime) consume_Windows_ApplicationModel_Appointments_IAppointmentConflictResult<D>::Date() const
    {
        Windows::Foundation::DateTime value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentConflictResult)->get_Date(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Appointments::Appointment) consume_Windows_ApplicationModel_Appointments_IAppointmentException<D>::Appointment() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentException)->get_Appointment(&value));
        return Windows::ApplicationModel::Appointments::Appointment{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<hstring>) consume_Windows_ApplicationModel_Appointments_IAppointmentException<D>::ExceptionProperties() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentException)->get_ExceptionProperties(&value));
        return Windows::Foundation::Collections::IVectorView<hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_Appointments_IAppointmentException<D>::IsDeleted() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentException)->get_IsDeleted(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Appointments::AppointmentParticipantRole) consume_Windows_ApplicationModel_Appointments_IAppointmentInvitee<D>::Role() const
    {
        Windows::ApplicationModel::Appointments::AppointmentParticipantRole value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentInvitee)->get_Role(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Appointments_IAppointmentInvitee<D>::Role(Windows::ApplicationModel::Appointments::AppointmentParticipantRole const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentInvitee)->put_Role(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Appointments::AppointmentParticipantResponse) consume_Windows_ApplicationModel_Appointments_IAppointmentInvitee<D>::Response() const
    {
        Windows::ApplicationModel::Appointments::AppointmentParticipantResponse value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentInvitee)->get_Response(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Appointments_IAppointmentInvitee<D>::Response(Windows::ApplicationModel::Appointments::AppointmentParticipantResponse const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentInvitee)->put_Response(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<hstring>) consume_Windows_ApplicationModel_Appointments_IAppointmentManagerForUser<D>::ShowAddAppointmentAsync(Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentManagerForUser)->ShowAddAppointmentAsync(*(void**)(&appointment), impl::bind_in(selection), &result));
        return Windows::Foundation::IAsyncOperation<hstring>{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<hstring>) consume_Windows_ApplicationModel_Appointments_IAppointmentManagerForUser<D>::ShowAddAppointmentAsync(Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentManagerForUser)->ShowAddAppointmentWithPlacementAsync(*(void**)(&appointment), impl::bind_in(selection), static_cast<int32_t>(preferredPlacement), &result));
        return Windows::Foundation::IAsyncOperation<hstring>{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<hstring>) consume_Windows_ApplicationModel_Appointments_IAppointmentManagerForUser<D>::ShowReplaceAppointmentAsync(param::hstring const& appointmentId, Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentManagerForUser)->ShowReplaceAppointmentAsync(*(void**)(&appointmentId), *(void**)(&appointment), impl::bind_in(selection), &result));
        return Windows::Foundation::IAsyncOperation<hstring>{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<hstring>) consume_Windows_ApplicationModel_Appointments_IAppointmentManagerForUser<D>::ShowReplaceAppointmentAsync(param::hstring const& appointmentId, Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentManagerForUser)->ShowReplaceAppointmentWithPlacementAsync(*(void**)(&appointmentId), *(void**)(&appointment), impl::bind_in(selection), static_cast<int32_t>(preferredPlacement), &result));
        return Windows::Foundation::IAsyncOperation<hstring>{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<hstring>) consume_Windows_ApplicationModel_Appointments_IAppointmentManagerForUser<D>::ShowReplaceAppointmentAsync(param::hstring const& appointmentId, Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement, Windows::Foundation::DateTime const& instanceStartDate) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentManagerForUser)->ShowReplaceAppointmentWithPlacementAndDateAsync(*(void**)(&appointmentId), *(void**)(&appointment), impl::bind_in(selection), static_cast<int32_t>(preferredPlacement), impl::bind_in(instanceStartDate), &result));
        return Windows::Foundation::IAsyncOperation<hstring>{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) consume_Windows_ApplicationModel_Appointments_IAppointmentManagerForUser<D>::ShowRemoveAppointmentAsync(param::hstring const& appointmentId, Windows::Foundation::Rect const& selection) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentManagerForUser)->ShowRemoveAppointmentAsync(*(void**)(&appointmentId), impl::bind_in(selection), &result));
        return Windows::Foundation::IAsyncOperation<bool>{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) consume_Windows_ApplicationModel_Appointments_IAppointmentManagerForUser<D>::ShowRemoveAppointmentAsync(param::hstring const& appointmentId, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentManagerForUser)->ShowRemoveAppointmentWithPlacementAsync(*(void**)(&appointmentId), impl::bind_in(selection), static_cast<int32_t>(preferredPlacement), &result));
        return Windows::Foundation::IAsyncOperation<bool>{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) consume_Windows_ApplicationModel_Appointments_IAppointmentManagerForUser<D>::ShowRemoveAppointmentAsync(param::hstring const& appointmentId, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement, Windows::Foundation::DateTime const& instanceStartDate) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentManagerForUser)->ShowRemoveAppointmentWithPlacementAndDateAsync(*(void**)(&appointmentId), impl::bind_in(selection), static_cast<int32_t>(preferredPlacement), impl::bind_in(instanceStartDate), &result));
        return Windows::Foundation::IAsyncOperation<bool>{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) consume_Windows_ApplicationModel_Appointments_IAppointmentManagerForUser<D>::ShowTimeFrameAsync(Windows::Foundation::DateTime const& timeToShow, Windows::Foundation::TimeSpan const& duration) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentManagerForUser)->ShowTimeFrameAsync(impl::bind_in(timeToShow), impl::bind_in(duration), &result));
        return Windows::Foundation::IAsyncAction{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) consume_Windows_ApplicationModel_Appointments_IAppointmentManagerForUser<D>::ShowAppointmentDetailsAsync(param::hstring const& appointmentId) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentManagerForUser)->ShowAppointmentDetailsAsync(*(void**)(&appointmentId), &result));
        return Windows::Foundation::IAsyncAction{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) consume_Windows_ApplicationModel_Appointments_IAppointmentManagerForUser<D>::ShowAppointmentDetailsAsync(param::hstring const& appointmentId, Windows::Foundation::DateTime const& instanceStartDate) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentManagerForUser)->ShowAppointmentDetailsWithDateAsync(*(void**)(&appointmentId), impl::bind_in(instanceStartDate), &result));
        return Windows::Foundation::IAsyncAction{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<hstring>) consume_Windows_ApplicationModel_Appointments_IAppointmentManagerForUser<D>::ShowEditNewAppointmentAsync(Windows::ApplicationModel::Appointments::Appointment const& appointment) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentManagerForUser)->ShowEditNewAppointmentAsync(*(void**)(&appointment), &result));
        return Windows::Foundation::IAsyncOperation<hstring>{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentStore>) consume_Windows_ApplicationModel_Appointments_IAppointmentManagerForUser<D>::RequestStoreAsync(Windows::ApplicationModel::Appointments::AppointmentStoreAccessType const& options) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentManagerForUser)->RequestStoreAsync(static_cast<int32_t>(options), &result));
        return Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentStore>{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::System::User) consume_Windows_ApplicationModel_Appointments_IAppointmentManagerForUser<D>::User() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentManagerForUser)->get_User(&value));
        return Windows::System::User{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<hstring>) consume_Windows_ApplicationModel_Appointments_IAppointmentManagerStatics<D>::ShowAddAppointmentAsync(Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentManagerStatics)->ShowAddAppointmentAsync(*(void**)(&appointment), impl::bind_in(selection), &operation));
        return Windows::Foundation::IAsyncOperation<hstring>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<hstring>) consume_Windows_ApplicationModel_Appointments_IAppointmentManagerStatics<D>::ShowAddAppointmentAsync(Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentManagerStatics)->ShowAddAppointmentWithPlacementAsync(*(void**)(&appointment), impl::bind_in(selection), static_cast<int32_t>(preferredPlacement), &operation));
        return Windows::Foundation::IAsyncOperation<hstring>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<hstring>) consume_Windows_ApplicationModel_Appointments_IAppointmentManagerStatics<D>::ShowReplaceAppointmentAsync(param::hstring const& appointmentId, Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentManagerStatics)->ShowReplaceAppointmentAsync(*(void**)(&appointmentId), *(void**)(&appointment), impl::bind_in(selection), &operation));
        return Windows::Foundation::IAsyncOperation<hstring>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<hstring>) consume_Windows_ApplicationModel_Appointments_IAppointmentManagerStatics<D>::ShowReplaceAppointmentAsync(param::hstring const& appointmentId, Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentManagerStatics)->ShowReplaceAppointmentWithPlacementAsync(*(void**)(&appointmentId), *(void**)(&appointment), impl::bind_in(selection), static_cast<int32_t>(preferredPlacement), &operation));
        return Windows::Foundation::IAsyncOperation<hstring>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<hstring>) consume_Windows_ApplicationModel_Appointments_IAppointmentManagerStatics<D>::ShowReplaceAppointmentAsync(param::hstring const& appointmentId, Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement, Windows::Foundation::DateTime const& instanceStartDate) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentManagerStatics)->ShowReplaceAppointmentWithPlacementAndDateAsync(*(void**)(&appointmentId), *(void**)(&appointment), impl::bind_in(selection), static_cast<int32_t>(preferredPlacement), impl::bind_in(instanceStartDate), &operation));
        return Windows::Foundation::IAsyncOperation<hstring>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) consume_Windows_ApplicationModel_Appointments_IAppointmentManagerStatics<D>::ShowRemoveAppointmentAsync(param::hstring const& appointmentId, Windows::Foundation::Rect const& selection) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentManagerStatics)->ShowRemoveAppointmentAsync(*(void**)(&appointmentId), impl::bind_in(selection), &operation));
        return Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) consume_Windows_ApplicationModel_Appointments_IAppointmentManagerStatics<D>::ShowRemoveAppointmentAsync(param::hstring const& appointmentId, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentManagerStatics)->ShowRemoveAppointmentWithPlacementAsync(*(void**)(&appointmentId), impl::bind_in(selection), static_cast<int32_t>(preferredPlacement), &operation));
        return Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) consume_Windows_ApplicationModel_Appointments_IAppointmentManagerStatics<D>::ShowRemoveAppointmentAsync(param::hstring const& appointmentId, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement, Windows::Foundation::DateTime const& instanceStartDate) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentManagerStatics)->ShowRemoveAppointmentWithPlacementAndDateAsync(*(void**)(&appointmentId), impl::bind_in(selection), static_cast<int32_t>(preferredPlacement), impl::bind_in(instanceStartDate), &operation));
        return Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) consume_Windows_ApplicationModel_Appointments_IAppointmentManagerStatics<D>::ShowTimeFrameAsync(Windows::Foundation::DateTime const& timeToShow, Windows::Foundation::TimeSpan const& duration) const
    {
        void* asyncAction{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentManagerStatics)->ShowTimeFrameAsync(impl::bind_in(timeToShow), impl::bind_in(duration), &asyncAction));
        return Windows::Foundation::IAsyncAction{ asyncAction, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) consume_Windows_ApplicationModel_Appointments_IAppointmentManagerStatics2<D>::ShowAppointmentDetailsAsync(param::hstring const& appointmentId) const
    {
        void* asyncAction{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentManagerStatics2)->ShowAppointmentDetailsAsync(*(void**)(&appointmentId), &asyncAction));
        return Windows::Foundation::IAsyncAction{ asyncAction, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) consume_Windows_ApplicationModel_Appointments_IAppointmentManagerStatics2<D>::ShowAppointmentDetailsAsync(param::hstring const& appointmentId, Windows::Foundation::DateTime const& instanceStartDate) const
    {
        void* asyncAction{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentManagerStatics2)->ShowAppointmentDetailsWithDateAsync(*(void**)(&appointmentId), impl::bind_in(instanceStartDate), &asyncAction));
        return Windows::Foundation::IAsyncAction{ asyncAction, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<hstring>) consume_Windows_ApplicationModel_Appointments_IAppointmentManagerStatics2<D>::ShowEditNewAppointmentAsync(Windows::ApplicationModel::Appointments::Appointment const& appointment) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentManagerStatics2)->ShowEditNewAppointmentAsync(*(void**)(&appointment), &operation));
        return Windows::Foundation::IAsyncOperation<hstring>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentStore>) consume_Windows_ApplicationModel_Appointments_IAppointmentManagerStatics2<D>::RequestStoreAsync(Windows::ApplicationModel::Appointments::AppointmentStoreAccessType const& options) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentManagerStatics2)->RequestStoreAsync(static_cast<int32_t>(options), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentStore>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Appointments::AppointmentManagerForUser) consume_Windows_ApplicationModel_Appointments_IAppointmentManagerStatics3<D>::GetForUser(Windows::System::User const& user) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentManagerStatics3)->GetForUser(*(void**)(&user), &result));
        return Windows::ApplicationModel::Appointments::AppointmentManagerForUser{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Appointments_IAppointmentParticipant<D>::DisplayName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentParticipant)->get_DisplayName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Appointments_IAppointmentParticipant<D>::DisplayName(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentParticipant)->put_DisplayName(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Appointments_IAppointmentParticipant<D>::Address() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentParticipant)->get_Address(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Appointments_IAppointmentParticipant<D>::Address(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentParticipant)->put_Address(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics<D>::Subject() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics)->get_Subject(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics<D>::Location() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics)->get_Location(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics<D>::StartTime() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics)->get_StartTime(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics<D>::Duration() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics)->get_Duration(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics<D>::Reminder() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics)->get_Reminder(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics<D>::BusyStatus() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics)->get_BusyStatus(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics<D>::Sensitivity() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics)->get_Sensitivity(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics<D>::OriginalStartTime() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics)->get_OriginalStartTime(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics<D>::IsResponseRequested() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics)->get_IsResponseRequested(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics<D>::AllowNewTimeProposal() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics)->get_AllowNewTimeProposal(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics<D>::AllDay() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics)->get_AllDay(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics<D>::Details() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics)->get_Details(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics<D>::OnlineMeetingLink() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics)->get_OnlineMeetingLink(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics<D>::ReplyTime() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics)->get_ReplyTime(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics<D>::Organizer() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics)->get_Organizer(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics<D>::UserResponse() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics)->get_UserResponse(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics<D>::HasInvitees() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics)->get_HasInvitees(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics<D>::IsCanceledMeeting() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics)->get_IsCanceledMeeting(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics<D>::IsOrganizedByUser() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics)->get_IsOrganizedByUser(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics<D>::Recurrence() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics)->get_Recurrence(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics<D>::Uri() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics)->get_Uri(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics<D>::Invitees() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics)->get_Invitees(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<hstring>) consume_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics<D>::DefaultProperties() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics)->get_DefaultProperties(&value));
        return Windows::Foundation::Collections::IVector<hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics2<D>::ChangeNumber() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics2)->get_ChangeNumber(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics2<D>::RemoteChangeNumber() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics2)->get_RemoteChangeNumber(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics2<D>::DetailsKind() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics2)->get_DetailsKind(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Appointments::AppointmentRecurrenceUnit) consume_Windows_ApplicationModel_Appointments_IAppointmentRecurrence<D>::Unit() const
    {
        Windows::ApplicationModel::Appointments::AppointmentRecurrenceUnit value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentRecurrence)->get_Unit(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Appointments_IAppointmentRecurrence<D>::Unit(Windows::ApplicationModel::Appointments::AppointmentRecurrenceUnit const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentRecurrence)->put_Unit(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IReference<uint32_t>) consume_Windows_ApplicationModel_Appointments_IAppointmentRecurrence<D>::Occurrences() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentRecurrence)->get_Occurrences(&value));
        return Windows::Foundation::IReference<uint32_t>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Appointments_IAppointmentRecurrence<D>::Occurrences(Windows::Foundation::IReference<uint32_t> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentRecurrence)->put_Occurrences(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::Foundation::DateTime>) consume_Windows_ApplicationModel_Appointments_IAppointmentRecurrence<D>::Until() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentRecurrence)->get_Until(&value));
        return Windows::Foundation::IReference<Windows::Foundation::DateTime>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Appointments_IAppointmentRecurrence<D>::Until(Windows::Foundation::IReference<Windows::Foundation::DateTime> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentRecurrence)->put_Until(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_ApplicationModel_Appointments_IAppointmentRecurrence<D>::Interval() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentRecurrence)->get_Interval(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Appointments_IAppointmentRecurrence<D>::Interval(uint32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentRecurrence)->put_Interval(value));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Appointments::AppointmentDaysOfWeek) consume_Windows_ApplicationModel_Appointments_IAppointmentRecurrence<D>::DaysOfWeek() const
    {
        Windows::ApplicationModel::Appointments::AppointmentDaysOfWeek value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentRecurrence)->get_DaysOfWeek(reinterpret_cast<uint32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Appointments_IAppointmentRecurrence<D>::DaysOfWeek(Windows::ApplicationModel::Appointments::AppointmentDaysOfWeek const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentRecurrence)->put_DaysOfWeek(static_cast<uint32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Appointments::AppointmentWeekOfMonth) consume_Windows_ApplicationModel_Appointments_IAppointmentRecurrence<D>::WeekOfMonth() const
    {
        Windows::ApplicationModel::Appointments::AppointmentWeekOfMonth value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentRecurrence)->get_WeekOfMonth(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Appointments_IAppointmentRecurrence<D>::WeekOfMonth(Windows::ApplicationModel::Appointments::AppointmentWeekOfMonth const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentRecurrence)->put_WeekOfMonth(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_ApplicationModel_Appointments_IAppointmentRecurrence<D>::Month() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentRecurrence)->get_Month(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Appointments_IAppointmentRecurrence<D>::Month(uint32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentRecurrence)->put_Month(value));
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_ApplicationModel_Appointments_IAppointmentRecurrence<D>::Day() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentRecurrence)->get_Day(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Appointments_IAppointmentRecurrence<D>::Day(uint32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentRecurrence)->put_Day(value));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Appointments::RecurrenceType) consume_Windows_ApplicationModel_Appointments_IAppointmentRecurrence2<D>::RecurrenceType() const
    {
        Windows::ApplicationModel::Appointments::RecurrenceType value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentRecurrence2)->get_RecurrenceType(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Appointments_IAppointmentRecurrence2<D>::TimeZone() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentRecurrence2)->get_TimeZone(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Appointments_IAppointmentRecurrence2<D>::TimeZone(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentRecurrence2)->put_TimeZone(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Appointments_IAppointmentRecurrence3<D>::CalendarIdentifier() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentRecurrence3)->get_CalendarIdentifier(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Appointments::AppointmentStoreChangeTracker) consume_Windows_ApplicationModel_Appointments_IAppointmentStore<D>::ChangeTracker() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStore)->get_ChangeTracker(&value));
        return Windows::ApplicationModel::Appointments::AppointmentStoreChangeTracker{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentCalendar>) consume_Windows_ApplicationModel_Appointments_IAppointmentStore<D>::CreateAppointmentCalendarAsync(param::hstring const& name) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStore)->CreateAppointmentCalendarAsync(*(void**)(&name), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentCalendar>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentCalendar>) consume_Windows_ApplicationModel_Appointments_IAppointmentStore<D>::GetAppointmentCalendarAsync(param::hstring const& calendarId) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStore)->GetAppointmentCalendarAsync(*(void**)(&calendarId), &result));
        return Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentCalendar>{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::Appointment>) consume_Windows_ApplicationModel_Appointments_IAppointmentStore<D>::GetAppointmentAsync(param::hstring const& localId) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStore)->GetAppointmentAsync(*(void**)(&localId), &result));
        return Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::Appointment>{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::Appointment>) consume_Windows_ApplicationModel_Appointments_IAppointmentStore<D>::GetAppointmentInstanceAsync(param::hstring const& localId, Windows::Foundation::DateTime const& instanceStartTime) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStore)->GetAppointmentInstanceAsync(*(void**)(&localId), impl::bind_in(instanceStartTime), &result));
        return Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::Appointment>{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentCalendar>>) consume_Windows_ApplicationModel_Appointments_IAppointmentStore<D>::FindAppointmentCalendarsAsync() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStore)->FindAppointmentCalendarsAsync(&result));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentCalendar>>{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentCalendar>>) consume_Windows_ApplicationModel_Appointments_IAppointmentStore<D>::FindAppointmentCalendarsAsync(Windows::ApplicationModel::Appointments::FindAppointmentCalendarsOptions const& options) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStore)->FindAppointmentCalendarsAsyncWithOptions(static_cast<uint32_t>(options), &result));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentCalendar>>{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>>) consume_Windows_ApplicationModel_Appointments_IAppointmentStore<D>::FindAppointmentsAsync(Windows::Foundation::DateTime const& rangeStart, Windows::Foundation::TimeSpan const& rangeLength) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStore)->FindAppointmentsAsync(impl::bind_in(rangeStart), impl::bind_in(rangeLength), &result));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>>{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>>) consume_Windows_ApplicationModel_Appointments_IAppointmentStore<D>::FindAppointmentsAsync(Windows::Foundation::DateTime const& rangeStart, Windows::Foundation::TimeSpan const& rangeLength, Windows::ApplicationModel::Appointments::FindAppointmentsOptions const& options) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStore)->FindAppointmentsAsyncWithOptions(impl::bind_in(rangeStart), impl::bind_in(rangeLength), *(void**)(&options), &result));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>>{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentConflictResult>) consume_Windows_ApplicationModel_Appointments_IAppointmentStore<D>::FindConflictAsync(Windows::ApplicationModel::Appointments::Appointment const& appointment) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStore)->FindConflictAsync(*(void**)(&appointment), &result));
        return Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentConflictResult>{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentConflictResult>) consume_Windows_ApplicationModel_Appointments_IAppointmentStore<D>::FindConflictAsync(Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::DateTime const& instanceStartTime) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStore)->FindConflictAsyncWithInstanceStart(*(void**)(&appointment), impl::bind_in(instanceStartTime), &result));
        return Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentConflictResult>{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) consume_Windows_ApplicationModel_Appointments_IAppointmentStore<D>::MoveAppointmentAsync(Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::ApplicationModel::Appointments::AppointmentCalendar const& destinationCalendar) const
    {
        void* asyncAction{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStore)->MoveAppointmentAsync(*(void**)(&appointment), *(void**)(&destinationCalendar), &asyncAction));
        return Windows::Foundation::IAsyncAction{ asyncAction, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<hstring>) consume_Windows_ApplicationModel_Appointments_IAppointmentStore<D>::ShowAddAppointmentAsync(Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStore)->ShowAddAppointmentAsync(*(void**)(&appointment), impl::bind_in(selection), &operation));
        return Windows::Foundation::IAsyncOperation<hstring>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<hstring>) consume_Windows_ApplicationModel_Appointments_IAppointmentStore<D>::ShowReplaceAppointmentAsync(param::hstring const& localId, Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStore)->ShowReplaceAppointmentAsync(*(void**)(&localId), *(void**)(&appointment), impl::bind_in(selection), &operation));
        return Windows::Foundation::IAsyncOperation<hstring>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<hstring>) consume_Windows_ApplicationModel_Appointments_IAppointmentStore<D>::ShowReplaceAppointmentAsync(param::hstring const& localId, Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement, Windows::Foundation::DateTime const& instanceStartDate) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStore)->ShowReplaceAppointmentWithPlacementAndDateAsync(*(void**)(&localId), *(void**)(&appointment), impl::bind_in(selection), static_cast<int32_t>(preferredPlacement), impl::bind_in(instanceStartDate), &operation));
        return Windows::Foundation::IAsyncOperation<hstring>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) consume_Windows_ApplicationModel_Appointments_IAppointmentStore<D>::ShowRemoveAppointmentAsync(param::hstring const& localId, Windows::Foundation::Rect const& selection) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStore)->ShowRemoveAppointmentAsync(*(void**)(&localId), impl::bind_in(selection), &operation));
        return Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) consume_Windows_ApplicationModel_Appointments_IAppointmentStore<D>::ShowRemoveAppointmentAsync(param::hstring const& localId, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement, Windows::Foundation::DateTime const& instanceStartDate) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStore)->ShowRemoveAppointmentWithPlacementAndDateAsync(*(void**)(&localId), impl::bind_in(selection), static_cast<int32_t>(preferredPlacement), impl::bind_in(instanceStartDate), &operation));
        return Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) consume_Windows_ApplicationModel_Appointments_IAppointmentStore<D>::ShowAppointmentDetailsAsync(param::hstring const& localId) const
    {
        void* asyncAction{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStore)->ShowAppointmentDetailsAsync(*(void**)(&localId), &asyncAction));
        return Windows::Foundation::IAsyncAction{ asyncAction, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) consume_Windows_ApplicationModel_Appointments_IAppointmentStore<D>::ShowAppointmentDetailsAsync(param::hstring const& localId, Windows::Foundation::DateTime const& instanceStartDate) const
    {
        void* asyncAction{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStore)->ShowAppointmentDetailsWithDateAsync(*(void**)(&localId), impl::bind_in(instanceStartDate), &asyncAction));
        return Windows::Foundation::IAsyncAction{ asyncAction, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<hstring>) consume_Windows_ApplicationModel_Appointments_IAppointmentStore<D>::ShowEditNewAppointmentAsync(Windows::ApplicationModel::Appointments::Appointment const& appointment) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStore)->ShowEditNewAppointmentAsync(*(void**)(&appointment), &operation));
        return Windows::Foundation::IAsyncOperation<hstring>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>>) consume_Windows_ApplicationModel_Appointments_IAppointmentStore<D>::FindLocalIdsFromRoamingIdAsync(param::hstring const& roamingId) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStore)->FindLocalIdsFromRoamingIdAsync(*(void**)(&roamingId), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_ApplicationModel_Appointments_IAppointmentStore2<D>::StoreChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::AppointmentStore, Windows::ApplicationModel::Appointments::AppointmentStoreChangedEventArgs> const& pHandler) const
    {
        winrt::event_token pToken{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStore2)->add_StoreChanged(*(void**)(&pHandler), put_abi(pToken)));
        return pToken;
    }
    template <typename D> typename consume_Windows_ApplicationModel_Appointments_IAppointmentStore2<D>::StoreChanged_revoker consume_Windows_ApplicationModel_Appointments_IAppointmentStore2<D>::StoreChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::AppointmentStore, Windows::ApplicationModel::Appointments::AppointmentStoreChangedEventArgs> const& pHandler) const
    {
        return impl::make_event_revoker<D, StoreChanged_revoker>(this, StoreChanged(pHandler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Appointments_IAppointmentStore2<D>::StoreChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStore2)->remove_StoreChanged(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentCalendar>) consume_Windows_ApplicationModel_Appointments_IAppointmentStore2<D>::CreateAppointmentCalendarAsync(param::hstring const& name, param::hstring const& userDataAccountId) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStore2)->CreateAppointmentCalendarInAccountAsync(*(void**)(&name), *(void**)(&userDataAccountId), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentCalendar>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Appointments::AppointmentStoreChangeTracker) consume_Windows_ApplicationModel_Appointments_IAppointmentStore3<D>::GetChangeTracker(param::hstring const& identity) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStore3)->GetChangeTracker(*(void**)(&identity), &result));
        return Windows::ApplicationModel::Appointments::AppointmentStoreChangeTracker{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Appointments::Appointment) consume_Windows_ApplicationModel_Appointments_IAppointmentStoreChange<D>::Appointment() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStoreChange)->get_Appointment(&value));
        return Windows::ApplicationModel::Appointments::Appointment{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Appointments::AppointmentStoreChangeType) consume_Windows_ApplicationModel_Appointments_IAppointmentStoreChange<D>::ChangeType() const
    {
        Windows::ApplicationModel::Appointments::AppointmentStoreChangeType value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStoreChange)->get_ChangeType(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Appointments::AppointmentCalendar) consume_Windows_ApplicationModel_Appointments_IAppointmentStoreChange2<D>::AppointmentCalendar() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStoreChange2)->get_AppointmentCalendar(&value));
        return Windows::ApplicationModel::Appointments::AppointmentCalendar{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentStoreChange>>) consume_Windows_ApplicationModel_Appointments_IAppointmentStoreChangeReader<D>::ReadBatchAsync() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStoreChangeReader)->ReadBatchAsync(&result));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentStoreChange>>{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Appointments_IAppointmentStoreChangeReader<D>::AcceptChanges() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStoreChangeReader)->AcceptChanges());
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Appointments_IAppointmentStoreChangeReader<D>::AcceptChangesThrough(Windows::ApplicationModel::Appointments::AppointmentStoreChange const& lastChangeToAccept) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStoreChangeReader)->AcceptChangesThrough(*(void**)(&lastChangeToAccept)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Appointments::AppointmentStoreChangeReader) consume_Windows_ApplicationModel_Appointments_IAppointmentStoreChangeTracker<D>::GetChangeReader() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker)->GetChangeReader(&value));
        return Windows::ApplicationModel::Appointments::AppointmentStoreChangeReader{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Appointments_IAppointmentStoreChangeTracker<D>::Enable() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker)->Enable());
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Appointments_IAppointmentStoreChangeTracker<D>::Reset() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker)->Reset());
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_Appointments_IAppointmentStoreChangeTracker2<D>::IsTracking() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker2)->get_IsTracking(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Appointments_IAppointmentStoreChangedDeferral<D>::Complete() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStoreChangedDeferral)->Complete());
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Appointments::AppointmentStoreChangedDeferral) consume_Windows_ApplicationModel_Appointments_IAppointmentStoreChangedEventArgs<D>::GetDeferral() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStoreChangedEventArgs)->GetDeferral(&result));
        return Windows::ApplicationModel::Appointments::AppointmentStoreChangedDeferral{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<hstring>) consume_Windows_ApplicationModel_Appointments_IFindAppointmentsOptions<D>::CalendarIds() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IFindAppointmentsOptions)->get_CalendarIds(&value));
        return Windows::Foundation::Collections::IVector<hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<hstring>) consume_Windows_ApplicationModel_Appointments_IFindAppointmentsOptions<D>::FetchProperties() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IFindAppointmentsOptions)->get_FetchProperties(&value));
        return Windows::Foundation::Collections::IVector<hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_Appointments_IFindAppointmentsOptions<D>::IncludeHidden() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IFindAppointmentsOptions)->get_IncludeHidden(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Appointments_IFindAppointmentsOptions<D>::IncludeHidden(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IFindAppointmentsOptions)->put_IncludeHidden(value));
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_ApplicationModel_Appointments_IFindAppointmentsOptions<D>::MaxCount() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IFindAppointmentsOptions)->get_MaxCount(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Appointments_IFindAppointmentsOptions<D>::MaxCount(uint32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Appointments::IFindAppointmentsOptions)->put_MaxCount(value));
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Appointments::IAppointment> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointment>
    {
        int32_t __stdcall get_StartTime(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::DateTime>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().StartTime());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_StartTime(int64_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartTime(*reinterpret_cast<Windows::Foundation::DateTime const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Duration(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().Duration());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Duration(int64_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Duration(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Location(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Location());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Location(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Location(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Subject(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Subject());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Subject(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Subject(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Details(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Details());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Details(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Details(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Reminder(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::TimeSpan>>(this->shim().Reminder());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Reminder(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Reminder(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::TimeSpan> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Organizer(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Appointments::AppointmentOrganizer>(this->shim().Organizer());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Organizer(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Organizer(*reinterpret_cast<Windows::ApplicationModel::Appointments::AppointmentOrganizer const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Invitees(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Appointments::AppointmentInvitee>>(this->shim().Invitees());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Recurrence(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Appointments::AppointmentRecurrence>(this->shim().Recurrence());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Recurrence(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Recurrence(*reinterpret_cast<Windows::ApplicationModel::Appointments::AppointmentRecurrence const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BusyStatus(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Appointments::AppointmentBusyStatus>(this->shim().BusyStatus());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_BusyStatus(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BusyStatus(*reinterpret_cast<Windows::ApplicationModel::Appointments::AppointmentBusyStatus const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AllDay(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AllDay());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AllDay(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllDay(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Sensitivity(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Appointments::AppointmentSensitivity>(this->shim().Sensitivity());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Sensitivity(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Sensitivity(*reinterpret_cast<Windows::ApplicationModel::Appointments::AppointmentSensitivity const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Uri(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().Uri());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Uri(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Uri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Appointments::IAppointment2> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointment2>
    {
        int32_t __stdcall get_LocalId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().LocalId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CalendarId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().CalendarId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RoamingId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().RoamingId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_RoamingId(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RoamingId(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_OriginalStartTime(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::DateTime>>(this->shim().OriginalStartTime());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsResponseRequested(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsResponseRequested());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_IsResponseRequested(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsResponseRequested(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AllowNewTimeProposal(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AllowNewTimeProposal());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AllowNewTimeProposal(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllowNewTimeProposal(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_OnlineMeetingLink(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().OnlineMeetingLink());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_OnlineMeetingLink(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OnlineMeetingLink(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ReplyTime(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::DateTime>>(this->shim().ReplyTime());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ReplyTime(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReplyTime(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::DateTime> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_UserResponse(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Appointments::AppointmentParticipantResponse>(this->shim().UserResponse());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_UserResponse(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UserResponse(*reinterpret_cast<Windows::ApplicationModel::Appointments::AppointmentParticipantResponse const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HasInvitees(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().HasInvitees());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsCanceledMeeting(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsCanceledMeeting());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_IsCanceledMeeting(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsCanceledMeeting(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsOrganizedByUser(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsOrganizedByUser());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_IsOrganizedByUser(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsOrganizedByUser(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Appointments::IAppointment3> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointment3>
    {
        int32_t __stdcall get_ChangeNumber(uint64_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().ChangeNumber());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RemoteChangeNumber(uint64_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().RemoteChangeNumber());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_RemoteChangeNumber(uint64_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoteChangeNumber(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DetailsKind(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Appointments::AppointmentDetailsKind>(this->shim().DetailsKind());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_DetailsKind(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DetailsKind(*reinterpret_cast<Windows::ApplicationModel::Appointments::AppointmentDetailsKind const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentCalendar> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentCalendar>
    {
        int32_t __stdcall get_DisplayColor(struct struct_Windows_UI_Color* value) noexcept final try
        {
            zero_abi<Windows::UI::Color>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().DisplayColor());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DisplayName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DisplayName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_DisplayName(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisplayName(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_LocalId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().LocalId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsHidden(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsHidden());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_OtherAppReadAccess(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppReadAccess>(this->shim().OtherAppReadAccess());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_OtherAppReadAccess(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OtherAppReadAccess(*reinterpret_cast<Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppReadAccess const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_OtherAppWriteAccess(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppWriteAccess>(this->shim().OtherAppWriteAccess());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_OtherAppWriteAccess(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OtherAppWriteAccess(*reinterpret_cast<Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppWriteAccess const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SourceDisplayName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SourceDisplayName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SummaryCardView(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Appointments::AppointmentSummaryCardView>(this->shim().SummaryCardView());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_SummaryCardView(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SummaryCardView(*reinterpret_cast<Windows::ApplicationModel::Appointments::AppointmentSummaryCardView const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindAppointmentsAsync(int64_t rangeStart, int64_t rangeLength, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>>>(this->shim().FindAppointmentsAsync(*reinterpret_cast<Windows::Foundation::DateTime const*>(&rangeStart), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&rangeLength)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindAppointmentsAsyncWithOptions(int64_t rangeStart, int64_t rangeLength, void* options, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>>>(this->shim().FindAppointmentsAsync(*reinterpret_cast<Windows::Foundation::DateTime const*>(&rangeStart), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&rangeLength), *reinterpret_cast<Windows::ApplicationModel::Appointments::FindAppointmentsOptions const*>(&options)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindExceptionsFromMasterAsync(void* masterLocalId, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentException>>>(this->shim().FindExceptionsFromMasterAsync(*reinterpret_cast<hstring const*>(&masterLocalId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindAllInstancesAsync(void* masterLocalId, int64_t rangeStart, int64_t rangeLength, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>>>(this->shim().FindAllInstancesAsync(*reinterpret_cast<hstring const*>(&masterLocalId), *reinterpret_cast<Windows::Foundation::DateTime const*>(&rangeStart), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&rangeLength)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindAllInstancesAsyncWithOptions(void* masterLocalId, int64_t rangeStart, int64_t rangeLength, void* pOptions, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>>>(this->shim().FindAllInstancesAsync(*reinterpret_cast<hstring const*>(&masterLocalId), *reinterpret_cast<Windows::Foundation::DateTime const*>(&rangeStart), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&rangeLength), *reinterpret_cast<Windows::ApplicationModel::Appointments::FindAppointmentsOptions const*>(&pOptions)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetAppointmentAsync(void* localId, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::Appointment>>(this->shim().GetAppointmentAsync(*reinterpret_cast<hstring const*>(&localId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetAppointmentInstanceAsync(void* localId, int64_t instanceStartTime, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::Appointment>>(this->shim().GetAppointmentInstanceAsync(*reinterpret_cast<hstring const*>(&localId), *reinterpret_cast<Windows::Foundation::DateTime const*>(&instanceStartTime)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindUnexpandedAppointmentsAsync(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>>>(this->shim().FindUnexpandedAppointmentsAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindUnexpandedAppointmentsAsyncWithOptions(void* options, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>>>(this->shim().FindUnexpandedAppointmentsAsync(*reinterpret_cast<Windows::ApplicationModel::Appointments::FindAppointmentsOptions const*>(&options)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall DeleteAsync(void** asyncAction) noexcept final try
        {
            clear_abi(asyncAction);
            typename D::abi_guard guard(this->shim());
            *asyncAction = detach_from<Windows::Foundation::IAsyncAction>(this->shim().DeleteAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SaveAsync(void** asyncAction) noexcept final try
        {
            clear_abi(asyncAction);
            typename D::abi_guard guard(this->shim());
            *asyncAction = detach_from<Windows::Foundation::IAsyncAction>(this->shim().SaveAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall DeleteAppointmentAsync(void* localId, void** asyncAction) noexcept final try
        {
            clear_abi(asyncAction);
            typename D::abi_guard guard(this->shim());
            *asyncAction = detach_from<Windows::Foundation::IAsyncAction>(this->shim().DeleteAppointmentAsync(*reinterpret_cast<hstring const*>(&localId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall DeleteAppointmentInstanceAsync(void* localId, int64_t instanceStartTime, void** asyncAction) noexcept final try
        {
            clear_abi(asyncAction);
            typename D::abi_guard guard(this->shim());
            *asyncAction = detach_from<Windows::Foundation::IAsyncAction>(this->shim().DeleteAppointmentInstanceAsync(*reinterpret_cast<hstring const*>(&localId), *reinterpret_cast<Windows::Foundation::DateTime const*>(&instanceStartTime)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SaveAppointmentAsync(void* pAppointment, void** asyncAction) noexcept final try
        {
            clear_abi(asyncAction);
            typename D::abi_guard guard(this->shim());
            *asyncAction = detach_from<Windows::Foundation::IAsyncAction>(this->shim().SaveAppointmentAsync(*reinterpret_cast<Windows::ApplicationModel::Appointments::Appointment const*>(&pAppointment)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentCalendar2> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentCalendar2>
    {
        int32_t __stdcall get_SyncManager(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Appointments::AppointmentCalendarSyncManager>(this->shim().SyncManager());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RemoteId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().RemoteId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_RemoteId(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoteId(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_DisplayColor(struct struct_Windows_UI_Color value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisplayColor(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_IsHidden(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsHidden(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_UserDataAccountId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().UserDataAccountId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CanCreateOrUpdateAppointments(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().CanCreateOrUpdateAppointments());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_CanCreateOrUpdateAppointments(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CanCreateOrUpdateAppointments(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CanCancelMeetings(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().CanCancelMeetings());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_CanCancelMeetings(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CanCancelMeetings(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CanForwardMeetings(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().CanForwardMeetings());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_CanForwardMeetings(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CanForwardMeetings(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CanProposeNewTimeForMeetings(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().CanProposeNewTimeForMeetings());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_CanProposeNewTimeForMeetings(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CanProposeNewTimeForMeetings(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CanUpdateMeetingResponses(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().CanUpdateMeetingResponses());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_CanUpdateMeetingResponses(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CanUpdateMeetingResponses(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CanNotifyInvitees(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().CanNotifyInvitees());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_CanNotifyInvitees(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CanNotifyInvitees(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MustNofityInvitees(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().MustNofityInvitees());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_MustNofityInvitees(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MustNofityInvitees(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryCreateOrUpdateAppointmentAsync(void* appointment, bool notifyInvitees, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().TryCreateOrUpdateAppointmentAsync(*reinterpret_cast<Windows::ApplicationModel::Appointments::Appointment const*>(&appointment), notifyInvitees));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryCancelMeetingAsync(void* meeting, void* subject, void* comment, bool notifyInvitees, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().TryCancelMeetingAsync(*reinterpret_cast<Windows::ApplicationModel::Appointments::Appointment const*>(&meeting), *reinterpret_cast<hstring const*>(&subject), *reinterpret_cast<hstring const*>(&comment), notifyInvitees));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryForwardMeetingAsync(void* meeting, void* invitees, void* subject, void* forwardHeader, void* comment, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().TryForwardMeetingAsync(*reinterpret_cast<Windows::ApplicationModel::Appointments::Appointment const*>(&meeting), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Appointments::AppointmentInvitee> const*>(&invitees), *reinterpret_cast<hstring const*>(&subject), *reinterpret_cast<hstring const*>(&forwardHeader), *reinterpret_cast<hstring const*>(&comment)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryProposeNewTimeForMeetingAsync(void* meeting, int64_t newStartTime, int64_t newDuration, void* subject, void* comment, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().TryProposeNewTimeForMeetingAsync(*reinterpret_cast<Windows::ApplicationModel::Appointments::Appointment const*>(&meeting), *reinterpret_cast<Windows::Foundation::DateTime const*>(&newStartTime), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&newDuration), *reinterpret_cast<hstring const*>(&subject), *reinterpret_cast<hstring const*>(&comment)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryUpdateMeetingResponseAsync(void* meeting, int32_t response, void* subject, void* comment, bool sendUpdate, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().TryUpdateMeetingResponseAsync(*reinterpret_cast<Windows::ApplicationModel::Appointments::Appointment const*>(&meeting), *reinterpret_cast<Windows::ApplicationModel::Appointments::AppointmentParticipantResponse const*>(&response), *reinterpret_cast<hstring const*>(&subject), *reinterpret_cast<hstring const*>(&comment), sendUpdate));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentCalendar3> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentCalendar3>
    {
        int32_t __stdcall RegisterSyncManagerAsync(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncAction>(this->shim().RegisterSyncManagerAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager>
    {
        int32_t __stdcall get_Status(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Appointments::AppointmentCalendarSyncStatus>(this->shim().Status());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_LastSuccessfulSyncTime(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::DateTime>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().LastSuccessfulSyncTime());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_LastAttemptedSyncTime(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::DateTime>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().LastAttemptedSyncTime());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SyncAsync(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().SyncAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_SyncStatusChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().SyncStatusChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::AppointmentCalendarSyncManager, Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_SyncStatusChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SyncStatusChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager2> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager2>
    {
        int32_t __stdcall put_Status(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Status(*reinterpret_cast<Windows::ApplicationModel::Appointments::AppointmentCalendarSyncStatus const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_LastSuccessfulSyncTime(int64_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LastSuccessfulSyncTime(*reinterpret_cast<Windows::Foundation::DateTime const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_LastAttemptedSyncTime(int64_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LastAttemptedSyncTime(*reinterpret_cast<Windows::Foundation::DateTime const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentConflictResult> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentConflictResult>
    {
        int32_t __stdcall get_Type(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Appointments::AppointmentConflictType>(this->shim().Type());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Date(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::DateTime>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().Date());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentException> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentException>
    {
        int32_t __stdcall get_Appointment(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Appointments::Appointment>(this->shim().Appointment());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ExceptionProperties(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<hstring>>(this->shim().ExceptionProperties());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsDeleted(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsDeleted());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentInvitee> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentInvitee>
    {
        int32_t __stdcall get_Role(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Appointments::AppointmentParticipantRole>(this->shim().Role());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Role(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Role(*reinterpret_cast<Windows::ApplicationModel::Appointments::AppointmentParticipantRole const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Response(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Appointments::AppointmentParticipantResponse>(this->shim().Response());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Response(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Response(*reinterpret_cast<Windows::ApplicationModel::Appointments::AppointmentParticipantResponse const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentManagerForUser> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentManagerForUser>
    {
        int32_t __stdcall ShowAddAppointmentAsync(void* appointment, Windows::Foundation::Rect selection, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<hstring>>(this->shim().ShowAddAppointmentAsync(*reinterpret_cast<Windows::ApplicationModel::Appointments::Appointment const*>(&appointment), *reinterpret_cast<Windows::Foundation::Rect const*>(&selection)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ShowAddAppointmentWithPlacementAsync(void* appointment, Windows::Foundation::Rect selection, int32_t preferredPlacement, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<hstring>>(this->shim().ShowAddAppointmentAsync(*reinterpret_cast<Windows::ApplicationModel::Appointments::Appointment const*>(&appointment), *reinterpret_cast<Windows::Foundation::Rect const*>(&selection), *reinterpret_cast<Windows::UI::Popups::Placement const*>(&preferredPlacement)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ShowReplaceAppointmentAsync(void* appointmentId, void* appointment, Windows::Foundation::Rect selection, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<hstring>>(this->shim().ShowReplaceAppointmentAsync(*reinterpret_cast<hstring const*>(&appointmentId), *reinterpret_cast<Windows::ApplicationModel::Appointments::Appointment const*>(&appointment), *reinterpret_cast<Windows::Foundation::Rect const*>(&selection)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ShowReplaceAppointmentWithPlacementAsync(void* appointmentId, void* appointment, Windows::Foundation::Rect selection, int32_t preferredPlacement, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<hstring>>(this->shim().ShowReplaceAppointmentAsync(*reinterpret_cast<hstring const*>(&appointmentId), *reinterpret_cast<Windows::ApplicationModel::Appointments::Appointment const*>(&appointment), *reinterpret_cast<Windows::Foundation::Rect const*>(&selection), *reinterpret_cast<Windows::UI::Popups::Placement const*>(&preferredPlacement)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ShowReplaceAppointmentWithPlacementAndDateAsync(void* appointmentId, void* appointment, Windows::Foundation::Rect selection, int32_t preferredPlacement, int64_t instanceStartDate, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<hstring>>(this->shim().ShowReplaceAppointmentAsync(*reinterpret_cast<hstring const*>(&appointmentId), *reinterpret_cast<Windows::ApplicationModel::Appointments::Appointment const*>(&appointment), *reinterpret_cast<Windows::Foundation::Rect const*>(&selection), *reinterpret_cast<Windows::UI::Popups::Placement const*>(&preferredPlacement), *reinterpret_cast<Windows::Foundation::DateTime const*>(&instanceStartDate)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ShowRemoveAppointmentAsync(void* appointmentId, Windows::Foundation::Rect selection, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().ShowRemoveAppointmentAsync(*reinterpret_cast<hstring const*>(&appointmentId), *reinterpret_cast<Windows::Foundation::Rect const*>(&selection)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ShowRemoveAppointmentWithPlacementAsync(void* appointmentId, Windows::Foundation::Rect selection, int32_t preferredPlacement, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().ShowRemoveAppointmentAsync(*reinterpret_cast<hstring const*>(&appointmentId), *reinterpret_cast<Windows::Foundation::Rect const*>(&selection), *reinterpret_cast<Windows::UI::Popups::Placement const*>(&preferredPlacement)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ShowRemoveAppointmentWithPlacementAndDateAsync(void* appointmentId, Windows::Foundation::Rect selection, int32_t preferredPlacement, int64_t instanceStartDate, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().ShowRemoveAppointmentAsync(*reinterpret_cast<hstring const*>(&appointmentId), *reinterpret_cast<Windows::Foundation::Rect const*>(&selection), *reinterpret_cast<Windows::UI::Popups::Placement const*>(&preferredPlacement), *reinterpret_cast<Windows::Foundation::DateTime const*>(&instanceStartDate)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ShowTimeFrameAsync(int64_t timeToShow, int64_t duration, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ShowTimeFrameAsync(*reinterpret_cast<Windows::Foundation::DateTime const*>(&timeToShow), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&duration)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ShowAppointmentDetailsAsync(void* appointmentId, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ShowAppointmentDetailsAsync(*reinterpret_cast<hstring const*>(&appointmentId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ShowAppointmentDetailsWithDateAsync(void* appointmentId, int64_t instanceStartDate, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ShowAppointmentDetailsAsync(*reinterpret_cast<hstring const*>(&appointmentId), *reinterpret_cast<Windows::Foundation::DateTime const*>(&instanceStartDate)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ShowEditNewAppointmentAsync(void* appointment, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<hstring>>(this->shim().ShowEditNewAppointmentAsync(*reinterpret_cast<Windows::ApplicationModel::Appointments::Appointment const*>(&appointment)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RequestStoreAsync(int32_t options, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentStore>>(this->shim().RequestStoreAsync(*reinterpret_cast<Windows::ApplicationModel::Appointments::AppointmentStoreAccessType const*>(&options)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_User(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::User>(this->shim().User());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentManagerStatics> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentManagerStatics>
    {
        int32_t __stdcall ShowAddAppointmentAsync(void* appointment, Windows::Foundation::Rect selection, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<hstring>>(this->shim().ShowAddAppointmentAsync(*reinterpret_cast<Windows::ApplicationModel::Appointments::Appointment const*>(&appointment), *reinterpret_cast<Windows::Foundation::Rect const*>(&selection)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ShowAddAppointmentWithPlacementAsync(void* appointment, Windows::Foundation::Rect selection, int32_t preferredPlacement, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<hstring>>(this->shim().ShowAddAppointmentAsync(*reinterpret_cast<Windows::ApplicationModel::Appointments::Appointment const*>(&appointment), *reinterpret_cast<Windows::Foundation::Rect const*>(&selection), *reinterpret_cast<Windows::UI::Popups::Placement const*>(&preferredPlacement)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ShowReplaceAppointmentAsync(void* appointmentId, void* appointment, Windows::Foundation::Rect selection, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<hstring>>(this->shim().ShowReplaceAppointmentAsync(*reinterpret_cast<hstring const*>(&appointmentId), *reinterpret_cast<Windows::ApplicationModel::Appointments::Appointment const*>(&appointment), *reinterpret_cast<Windows::Foundation::Rect const*>(&selection)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ShowReplaceAppointmentWithPlacementAsync(void* appointmentId, void* appointment, Windows::Foundation::Rect selection, int32_t preferredPlacement, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<hstring>>(this->shim().ShowReplaceAppointmentAsync(*reinterpret_cast<hstring const*>(&appointmentId), *reinterpret_cast<Windows::ApplicationModel::Appointments::Appointment const*>(&appointment), *reinterpret_cast<Windows::Foundation::Rect const*>(&selection), *reinterpret_cast<Windows::UI::Popups::Placement const*>(&preferredPlacement)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ShowReplaceAppointmentWithPlacementAndDateAsync(void* appointmentId, void* appointment, Windows::Foundation::Rect selection, int32_t preferredPlacement, int64_t instanceStartDate, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<hstring>>(this->shim().ShowReplaceAppointmentAsync(*reinterpret_cast<hstring const*>(&appointmentId), *reinterpret_cast<Windows::ApplicationModel::Appointments::Appointment const*>(&appointment), *reinterpret_cast<Windows::Foundation::Rect const*>(&selection), *reinterpret_cast<Windows::UI::Popups::Placement const*>(&preferredPlacement), *reinterpret_cast<Windows::Foundation::DateTime const*>(&instanceStartDate)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ShowRemoveAppointmentAsync(void* appointmentId, Windows::Foundation::Rect selection, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().ShowRemoveAppointmentAsync(*reinterpret_cast<hstring const*>(&appointmentId), *reinterpret_cast<Windows::Foundation::Rect const*>(&selection)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ShowRemoveAppointmentWithPlacementAsync(void* appointmentId, Windows::Foundation::Rect selection, int32_t preferredPlacement, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().ShowRemoveAppointmentAsync(*reinterpret_cast<hstring const*>(&appointmentId), *reinterpret_cast<Windows::Foundation::Rect const*>(&selection), *reinterpret_cast<Windows::UI::Popups::Placement const*>(&preferredPlacement)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ShowRemoveAppointmentWithPlacementAndDateAsync(void* appointmentId, Windows::Foundation::Rect selection, int32_t preferredPlacement, int64_t instanceStartDate, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().ShowRemoveAppointmentAsync(*reinterpret_cast<hstring const*>(&appointmentId), *reinterpret_cast<Windows::Foundation::Rect const*>(&selection), *reinterpret_cast<Windows::UI::Popups::Placement const*>(&preferredPlacement), *reinterpret_cast<Windows::Foundation::DateTime const*>(&instanceStartDate)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ShowTimeFrameAsync(int64_t timeToShow, int64_t duration, void** asyncAction) noexcept final try
        {
            clear_abi(asyncAction);
            typename D::abi_guard guard(this->shim());
            *asyncAction = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ShowTimeFrameAsync(*reinterpret_cast<Windows::Foundation::DateTime const*>(&timeToShow), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&duration)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentManagerStatics2> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentManagerStatics2>
    {
        int32_t __stdcall ShowAppointmentDetailsAsync(void* appointmentId, void** asyncAction) noexcept final try
        {
            clear_abi(asyncAction);
            typename D::abi_guard guard(this->shim());
            *asyncAction = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ShowAppointmentDetailsAsync(*reinterpret_cast<hstring const*>(&appointmentId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ShowAppointmentDetailsWithDateAsync(void* appointmentId, int64_t instanceStartDate, void** asyncAction) noexcept final try
        {
            clear_abi(asyncAction);
            typename D::abi_guard guard(this->shim());
            *asyncAction = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ShowAppointmentDetailsAsync(*reinterpret_cast<hstring const*>(&appointmentId), *reinterpret_cast<Windows::Foundation::DateTime const*>(&instanceStartDate)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ShowEditNewAppointmentAsync(void* appointment, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<hstring>>(this->shim().ShowEditNewAppointmentAsync(*reinterpret_cast<Windows::ApplicationModel::Appointments::Appointment const*>(&appointment)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RequestStoreAsync(int32_t options, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentStore>>(this->shim().RequestStoreAsync(*reinterpret_cast<Windows::ApplicationModel::Appointments::AppointmentStoreAccessType const*>(&options)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentManagerStatics3> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentManagerStatics3>
    {
        int32_t __stdcall GetForUser(void* user, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Appointments::AppointmentManagerForUser>(this->shim().GetForUser(*reinterpret_cast<Windows::System::User const*>(&user)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentParticipant> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentParticipant>
    {
        int32_t __stdcall get_DisplayName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DisplayName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_DisplayName(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisplayName(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Address(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Address());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Address(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Address(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics>
    {
        int32_t __stdcall get_Subject(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Subject());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Location(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Location());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_StartTime(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().StartTime());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Duration(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Duration());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Reminder(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Reminder());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BusyStatus(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().BusyStatus());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Sensitivity(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Sensitivity());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_OriginalStartTime(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().OriginalStartTime());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsResponseRequested(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().IsResponseRequested());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AllowNewTimeProposal(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AllowNewTimeProposal());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AllDay(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AllDay());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Details(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Details());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_OnlineMeetingLink(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().OnlineMeetingLink());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ReplyTime(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ReplyTime());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Organizer(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Organizer());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_UserResponse(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().UserResponse());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HasInvitees(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().HasInvitees());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsCanceledMeeting(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().IsCanceledMeeting());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsOrganizedByUser(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().IsOrganizedByUser());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Recurrence(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Recurrence());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Uri(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Uri());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Invitees(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Invitees());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DefaultProperties(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<hstring>>(this->shim().DefaultProperties());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics2> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics2>
    {
        int32_t __stdcall get_ChangeNumber(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ChangeNumber());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RemoteChangeNumber(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().RemoteChangeNumber());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DetailsKind(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DetailsKind());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentRecurrence> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentRecurrence>
    {
        int32_t __stdcall get_Unit(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Appointments::AppointmentRecurrenceUnit>(this->shim().Unit());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Unit(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Unit(*reinterpret_cast<Windows::ApplicationModel::Appointments::AppointmentRecurrenceUnit const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Occurrences(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<uint32_t>>(this->shim().Occurrences());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Occurrences(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Occurrences(*reinterpret_cast<Windows::Foundation::IReference<uint32_t> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Until(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::DateTime>>(this->shim().Until());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Until(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Until(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::DateTime> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Interval(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Interval());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Interval(uint32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Interval(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DaysOfWeek(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Appointments::AppointmentDaysOfWeek>(this->shim().DaysOfWeek());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_DaysOfWeek(uint32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DaysOfWeek(*reinterpret_cast<Windows::ApplicationModel::Appointments::AppointmentDaysOfWeek const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_WeekOfMonth(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Appointments::AppointmentWeekOfMonth>(this->shim().WeekOfMonth());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_WeekOfMonth(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WeekOfMonth(*reinterpret_cast<Windows::ApplicationModel::Appointments::AppointmentWeekOfMonth const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Month(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Month());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Month(uint32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Month(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Day(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Day());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Day(uint32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Day(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentRecurrence2> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentRecurrence2>
    {
        int32_t __stdcall get_RecurrenceType(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Appointments::RecurrenceType>(this->shim().RecurrenceType());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TimeZone(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().TimeZone());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_TimeZone(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TimeZone(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentRecurrence3> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentRecurrence3>
    {
        int32_t __stdcall get_CalendarIdentifier(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().CalendarIdentifier());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentStore> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentStore>
    {
        int32_t __stdcall get_ChangeTracker(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Appointments::AppointmentStoreChangeTracker>(this->shim().ChangeTracker());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateAppointmentCalendarAsync(void* name, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentCalendar>>(this->shim().CreateAppointmentCalendarAsync(*reinterpret_cast<hstring const*>(&name)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetAppointmentCalendarAsync(void* calendarId, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentCalendar>>(this->shim().GetAppointmentCalendarAsync(*reinterpret_cast<hstring const*>(&calendarId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetAppointmentAsync(void* localId, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::Appointment>>(this->shim().GetAppointmentAsync(*reinterpret_cast<hstring const*>(&localId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetAppointmentInstanceAsync(void* localId, int64_t instanceStartTime, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::Appointment>>(this->shim().GetAppointmentInstanceAsync(*reinterpret_cast<hstring const*>(&localId), *reinterpret_cast<Windows::Foundation::DateTime const*>(&instanceStartTime)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindAppointmentCalendarsAsync(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentCalendar>>>(this->shim().FindAppointmentCalendarsAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindAppointmentCalendarsAsyncWithOptions(uint32_t options, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentCalendar>>>(this->shim().FindAppointmentCalendarsAsync(*reinterpret_cast<Windows::ApplicationModel::Appointments::FindAppointmentCalendarsOptions const*>(&options)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindAppointmentsAsync(int64_t rangeStart, int64_t rangeLength, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>>>(this->shim().FindAppointmentsAsync(*reinterpret_cast<Windows::Foundation::DateTime const*>(&rangeStart), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&rangeLength)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindAppointmentsAsyncWithOptions(int64_t rangeStart, int64_t rangeLength, void* options, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>>>(this->shim().FindAppointmentsAsync(*reinterpret_cast<Windows::Foundation::DateTime const*>(&rangeStart), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&rangeLength), *reinterpret_cast<Windows::ApplicationModel::Appointments::FindAppointmentsOptions const*>(&options)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindConflictAsync(void* appointment, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentConflictResult>>(this->shim().FindConflictAsync(*reinterpret_cast<Windows::ApplicationModel::Appointments::Appointment const*>(&appointment)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindConflictAsyncWithInstanceStart(void* appointment, int64_t instanceStartTime, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentConflictResult>>(this->shim().FindConflictAsync(*reinterpret_cast<Windows::ApplicationModel::Appointments::Appointment const*>(&appointment), *reinterpret_cast<Windows::Foundation::DateTime const*>(&instanceStartTime)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall MoveAppointmentAsync(void* appointment, void* destinationCalendar, void** asyncAction) noexcept final try
        {
            clear_abi(asyncAction);
            typename D::abi_guard guard(this->shim());
            *asyncAction = detach_from<Windows::Foundation::IAsyncAction>(this->shim().MoveAppointmentAsync(*reinterpret_cast<Windows::ApplicationModel::Appointments::Appointment const*>(&appointment), *reinterpret_cast<Windows::ApplicationModel::Appointments::AppointmentCalendar const*>(&destinationCalendar)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ShowAddAppointmentAsync(void* appointment, Windows::Foundation::Rect selection, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<hstring>>(this->shim().ShowAddAppointmentAsync(*reinterpret_cast<Windows::ApplicationModel::Appointments::Appointment const*>(&appointment), *reinterpret_cast<Windows::Foundation::Rect const*>(&selection)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ShowReplaceAppointmentAsync(void* localId, void* appointment, Windows::Foundation::Rect selection, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<hstring>>(this->shim().ShowReplaceAppointmentAsync(*reinterpret_cast<hstring const*>(&localId), *reinterpret_cast<Windows::ApplicationModel::Appointments::Appointment const*>(&appointment), *reinterpret_cast<Windows::Foundation::Rect const*>(&selection)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ShowReplaceAppointmentWithPlacementAndDateAsync(void* localId, void* appointment, Windows::Foundation::Rect selection, int32_t preferredPlacement, int64_t instanceStartDate, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<hstring>>(this->shim().ShowReplaceAppointmentAsync(*reinterpret_cast<hstring const*>(&localId), *reinterpret_cast<Windows::ApplicationModel::Appointments::Appointment const*>(&appointment), *reinterpret_cast<Windows::Foundation::Rect const*>(&selection), *reinterpret_cast<Windows::UI::Popups::Placement const*>(&preferredPlacement), *reinterpret_cast<Windows::Foundation::DateTime const*>(&instanceStartDate)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ShowRemoveAppointmentAsync(void* localId, Windows::Foundation::Rect selection, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().ShowRemoveAppointmentAsync(*reinterpret_cast<hstring const*>(&localId), *reinterpret_cast<Windows::Foundation::Rect const*>(&selection)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ShowRemoveAppointmentWithPlacementAndDateAsync(void* localId, Windows::Foundation::Rect selection, int32_t preferredPlacement, int64_t instanceStartDate, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().ShowRemoveAppointmentAsync(*reinterpret_cast<hstring const*>(&localId), *reinterpret_cast<Windows::Foundation::Rect const*>(&selection), *reinterpret_cast<Windows::UI::Popups::Placement const*>(&preferredPlacement), *reinterpret_cast<Windows::Foundation::DateTime const*>(&instanceStartDate)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ShowAppointmentDetailsAsync(void* localId, void** asyncAction) noexcept final try
        {
            clear_abi(asyncAction);
            typename D::abi_guard guard(this->shim());
            *asyncAction = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ShowAppointmentDetailsAsync(*reinterpret_cast<hstring const*>(&localId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ShowAppointmentDetailsWithDateAsync(void* localId, int64_t instanceStartDate, void** asyncAction) noexcept final try
        {
            clear_abi(asyncAction);
            typename D::abi_guard guard(this->shim());
            *asyncAction = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ShowAppointmentDetailsAsync(*reinterpret_cast<hstring const*>(&localId), *reinterpret_cast<Windows::Foundation::DateTime const*>(&instanceStartDate)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ShowEditNewAppointmentAsync(void* appointment, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<hstring>>(this->shim().ShowEditNewAppointmentAsync(*reinterpret_cast<Windows::ApplicationModel::Appointments::Appointment const*>(&appointment)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindLocalIdsFromRoamingIdAsync(void* roamingId, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>>>(this->shim().FindLocalIdsFromRoamingIdAsync(*reinterpret_cast<hstring const*>(&roamingId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentStore2> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentStore2>
    {
        int32_t __stdcall add_StoreChanged(void* pHandler, winrt::event_token* pToken) noexcept final try
        {
            zero_abi<winrt::event_token>(pToken);
            typename D::abi_guard guard(this->shim());
            *pToken = detach_from<winrt::event_token>(this->shim().StoreChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::AppointmentStore, Windows::ApplicationModel::Appointments::AppointmentStoreChangedEventArgs> const*>(&pHandler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_StoreChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StoreChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall CreateAppointmentCalendarInAccountAsync(void* name, void* userDataAccountId, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentCalendar>>(this->shim().CreateAppointmentCalendarAsync(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<hstring const*>(&userDataAccountId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentStore3> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentStore3>
    {
        int32_t __stdcall GetChangeTracker(void* identity, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Appointments::AppointmentStoreChangeTracker>(this->shim().GetChangeTracker(*reinterpret_cast<hstring const*>(&identity)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentStoreChange> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentStoreChange>
    {
        int32_t __stdcall get_Appointment(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Appointments::Appointment>(this->shim().Appointment());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ChangeType(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Appointments::AppointmentStoreChangeType>(this->shim().ChangeType());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentStoreChange2> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentStoreChange2>
    {
        int32_t __stdcall get_AppointmentCalendar(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Appointments::AppointmentCalendar>(this->shim().AppointmentCalendar());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentStoreChangeReader> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentStoreChangeReader>
    {
        int32_t __stdcall ReadBatchAsync(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentStoreChange>>>(this->shim().ReadBatchAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall AcceptChanges() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AcceptChanges();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall AcceptChangesThrough(void* lastChangeToAccept) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AcceptChangesThrough(*reinterpret_cast<Windows::ApplicationModel::Appointments::AppointmentStoreChange const*>(&lastChangeToAccept));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker>
    {
        int32_t __stdcall GetChangeReader(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Appointments::AppointmentStoreChangeReader>(this->shim().GetChangeReader());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Enable() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Enable();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Reset() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Reset();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker2> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker2>
    {
        int32_t __stdcall get_IsTracking(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsTracking());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentStoreChangedDeferral> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentStoreChangedDeferral>
    {
        int32_t __stdcall Complete() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Complete();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentStoreChangedEventArgs> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentStoreChangedEventArgs>
    {
        int32_t __stdcall GetDeferral(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Appointments::AppointmentStoreChangedDeferral>(this->shim().GetDeferral());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentStoreNotificationTriggerDetails> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentStoreNotificationTriggerDetails>
    {
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Appointments::IFindAppointmentsOptions> : produce_base<D, Windows::ApplicationModel::Appointments::IFindAppointmentsOptions>
    {
        int32_t __stdcall get_CalendarIds(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<hstring>>(this->shim().CalendarIds());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FetchProperties(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<hstring>>(this->shim().FetchProperties());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IncludeHidden(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IncludeHidden());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_IncludeHidden(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IncludeHidden(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MaxCount(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().MaxCount());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_MaxCount(uint32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxCount(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Appointments
{
    constexpr auto operator|(AppointmentDaysOfWeek const left, AppointmentDaysOfWeek const right) noexcept
    {
        return static_cast<AppointmentDaysOfWeek>(impl::to_underlying_type(left) | impl::to_underlying_type(right));
    }
    constexpr auto operator|=(AppointmentDaysOfWeek& left, AppointmentDaysOfWeek const right) noexcept
    {
        left = left | right;
        return left;
    }
    constexpr auto operator&(AppointmentDaysOfWeek const left, AppointmentDaysOfWeek const right) noexcept
    {
        return static_cast<AppointmentDaysOfWeek>(impl::to_underlying_type(left) & impl::to_underlying_type(right));
    }
    constexpr auto operator&=(AppointmentDaysOfWeek& left, AppointmentDaysOfWeek const right) noexcept
    {
        left = left & right;
        return left;
    }
    constexpr auto operator~(AppointmentDaysOfWeek const value) noexcept
    {
        return static_cast<AppointmentDaysOfWeek>(~impl::to_underlying_type(value));
    }
    constexpr auto operator^(AppointmentDaysOfWeek const left, AppointmentDaysOfWeek const right) noexcept
    {
        return static_cast<AppointmentDaysOfWeek>(impl::to_underlying_type(left) ^ impl::to_underlying_type(right));
    }
    constexpr auto operator^=(AppointmentDaysOfWeek& left, AppointmentDaysOfWeek const right) noexcept
    {
        left = left ^ right;
        return left;
    }
    constexpr auto operator|(FindAppointmentCalendarsOptions const left, FindAppointmentCalendarsOptions const right) noexcept
    {
        return static_cast<FindAppointmentCalendarsOptions>(impl::to_underlying_type(left) | impl::to_underlying_type(right));
    }
    constexpr auto operator|=(FindAppointmentCalendarsOptions& left, FindAppointmentCalendarsOptions const right) noexcept
    {
        left = left | right;
        return left;
    }
    constexpr auto operator&(FindAppointmentCalendarsOptions const left, FindAppointmentCalendarsOptions const right) noexcept
    {
        return static_cast<FindAppointmentCalendarsOptions>(impl::to_underlying_type(left) & impl::to_underlying_type(right));
    }
    constexpr auto operator&=(FindAppointmentCalendarsOptions& left, FindAppointmentCalendarsOptions const right) noexcept
    {
        left = left & right;
        return left;
    }
    constexpr auto operator~(FindAppointmentCalendarsOptions const value) noexcept
    {
        return static_cast<FindAppointmentCalendarsOptions>(~impl::to_underlying_type(value));
    }
    constexpr auto operator^(FindAppointmentCalendarsOptions const left, FindAppointmentCalendarsOptions const right) noexcept
    {
        return static_cast<FindAppointmentCalendarsOptions>(impl::to_underlying_type(left) ^ impl::to_underlying_type(right));
    }
    constexpr auto operator^=(FindAppointmentCalendarsOptions& left, FindAppointmentCalendarsOptions const right) noexcept
    {
        left = left ^ right;
        return left;
    }
    inline Appointment::Appointment() :
        Appointment(impl::call_factory_cast<Appointment(*)(Windows::Foundation::IActivationFactory const&), Appointment>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<Appointment>(); }))
    {
    }
    inline AppointmentInvitee::AppointmentInvitee() :
        AppointmentInvitee(impl::call_factory_cast<AppointmentInvitee(*)(Windows::Foundation::IActivationFactory const&), AppointmentInvitee>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<AppointmentInvitee>(); }))
    {
    }
    inline auto AppointmentManager::ShowAddAppointmentAsync(Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection)
    {
        return impl::call_factory<AppointmentManager, IAppointmentManagerStatics>([&](IAppointmentManagerStatics const& f) { return f.ShowAddAppointmentAsync(appointment, selection); });
    }
    inline auto AppointmentManager::ShowAddAppointmentAsync(Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement)
    {
        return impl::call_factory<AppointmentManager, IAppointmentManagerStatics>([&](IAppointmentManagerStatics const& f) { return f.ShowAddAppointmentAsync(appointment, selection, preferredPlacement); });
    }
    inline auto AppointmentManager::ShowReplaceAppointmentAsync(param::hstring const& appointmentId, Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection)
    {
        return impl::call_factory<AppointmentManager, IAppointmentManagerStatics>([&](IAppointmentManagerStatics const& f) { return f.ShowReplaceAppointmentAsync(appointmentId, appointment, selection); });
    }
    inline auto AppointmentManager::ShowReplaceAppointmentAsync(param::hstring const& appointmentId, Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement)
    {
        return impl::call_factory<AppointmentManager, IAppointmentManagerStatics>([&](IAppointmentManagerStatics const& f) { return f.ShowReplaceAppointmentAsync(appointmentId, appointment, selection, preferredPlacement); });
    }
    inline auto AppointmentManager::ShowReplaceAppointmentAsync(param::hstring const& appointmentId, Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement, Windows::Foundation::DateTime const& instanceStartDate)
    {
        return impl::call_factory<AppointmentManager, IAppointmentManagerStatics>([&](IAppointmentManagerStatics const& f) { return f.ShowReplaceAppointmentAsync(appointmentId, appointment, selection, preferredPlacement, instanceStartDate); });
    }
    inline auto AppointmentManager::ShowRemoveAppointmentAsync(param::hstring const& appointmentId, Windows::Foundation::Rect const& selection)
    {
        return impl::call_factory<AppointmentManager, IAppointmentManagerStatics>([&](IAppointmentManagerStatics const& f) { return f.ShowRemoveAppointmentAsync(appointmentId, selection); });
    }
    inline auto AppointmentManager::ShowRemoveAppointmentAsync(param::hstring const& appointmentId, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement)
    {
        return impl::call_factory<AppointmentManager, IAppointmentManagerStatics>([&](IAppointmentManagerStatics const& f) { return f.ShowRemoveAppointmentAsync(appointmentId, selection, preferredPlacement); });
    }
    inline auto AppointmentManager::ShowRemoveAppointmentAsync(param::hstring const& appointmentId, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement, Windows::Foundation::DateTime const& instanceStartDate)
    {
        return impl::call_factory<AppointmentManager, IAppointmentManagerStatics>([&](IAppointmentManagerStatics const& f) { return f.ShowRemoveAppointmentAsync(appointmentId, selection, preferredPlacement, instanceStartDate); });
    }
    inline auto AppointmentManager::ShowTimeFrameAsync(Windows::Foundation::DateTime const& timeToShow, Windows::Foundation::TimeSpan const& duration)
    {
        return impl::call_factory<AppointmentManager, IAppointmentManagerStatics>([&](IAppointmentManagerStatics const& f) { return f.ShowTimeFrameAsync(timeToShow, duration); });
    }
    inline auto AppointmentManager::ShowAppointmentDetailsAsync(param::hstring const& appointmentId)
    {
        return impl::call_factory<AppointmentManager, IAppointmentManagerStatics2>([&](IAppointmentManagerStatics2 const& f) { return f.ShowAppointmentDetailsAsync(appointmentId); });
    }
    inline auto AppointmentManager::ShowAppointmentDetailsAsync(param::hstring const& appointmentId, Windows::Foundation::DateTime const& instanceStartDate)
    {
        return impl::call_factory<AppointmentManager, IAppointmentManagerStatics2>([&](IAppointmentManagerStatics2 const& f) { return f.ShowAppointmentDetailsAsync(appointmentId, instanceStartDate); });
    }
    inline auto AppointmentManager::ShowEditNewAppointmentAsync(Windows::ApplicationModel::Appointments::Appointment const& appointment)
    {
        return impl::call_factory<AppointmentManager, IAppointmentManagerStatics2>([&](IAppointmentManagerStatics2 const& f) { return f.ShowEditNewAppointmentAsync(appointment); });
    }
    inline auto AppointmentManager::RequestStoreAsync(Windows::ApplicationModel::Appointments::AppointmentStoreAccessType const& options)
    {
        return impl::call_factory<AppointmentManager, IAppointmentManagerStatics2>([&](IAppointmentManagerStatics2 const& f) { return f.RequestStoreAsync(options); });
    }
    inline auto AppointmentManager::GetForUser(Windows::System::User const& user)
    {
        return impl::call_factory<AppointmentManager, IAppointmentManagerStatics3>([&](IAppointmentManagerStatics3 const& f) { return f.GetForUser(user); });
    }
    inline AppointmentOrganizer::AppointmentOrganizer() :
        AppointmentOrganizer(impl::call_factory_cast<AppointmentOrganizer(*)(Windows::Foundation::IActivationFactory const&), AppointmentOrganizer>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<AppointmentOrganizer>(); }))
    {
    }
    inline auto AppointmentProperties::Subject()
    {
        return impl::call_factory_cast<hstring(*)(IAppointmentPropertiesStatics const&), AppointmentProperties, IAppointmentPropertiesStatics>([](IAppointmentPropertiesStatics const& f) { return f.Subject(); });
    }
    inline auto AppointmentProperties::Location()
    {
        return impl::call_factory_cast<hstring(*)(IAppointmentPropertiesStatics const&), AppointmentProperties, IAppointmentPropertiesStatics>([](IAppointmentPropertiesStatics const& f) { return f.Location(); });
    }
    inline auto AppointmentProperties::StartTime()
    {
        return impl::call_factory_cast<hstring(*)(IAppointmentPropertiesStatics const&), AppointmentProperties, IAppointmentPropertiesStatics>([](IAppointmentPropertiesStatics const& f) { return f.StartTime(); });
    }
    inline auto AppointmentProperties::Duration()
    {
        return impl::call_factory_cast<hstring(*)(IAppointmentPropertiesStatics const&), AppointmentProperties, IAppointmentPropertiesStatics>([](IAppointmentPropertiesStatics const& f) { return f.Duration(); });
    }
    inline auto AppointmentProperties::Reminder()
    {
        return impl::call_factory_cast<hstring(*)(IAppointmentPropertiesStatics const&), AppointmentProperties, IAppointmentPropertiesStatics>([](IAppointmentPropertiesStatics const& f) { return f.Reminder(); });
    }
    inline auto AppointmentProperties::BusyStatus()
    {
        return impl::call_factory_cast<hstring(*)(IAppointmentPropertiesStatics const&), AppointmentProperties, IAppointmentPropertiesStatics>([](IAppointmentPropertiesStatics const& f) { return f.BusyStatus(); });
    }
    inline auto AppointmentProperties::Sensitivity()
    {
        return impl::call_factory_cast<hstring(*)(IAppointmentPropertiesStatics const&), AppointmentProperties, IAppointmentPropertiesStatics>([](IAppointmentPropertiesStatics const& f) { return f.Sensitivity(); });
    }
    inline auto AppointmentProperties::OriginalStartTime()
    {
        return impl::call_factory_cast<hstring(*)(IAppointmentPropertiesStatics const&), AppointmentProperties, IAppointmentPropertiesStatics>([](IAppointmentPropertiesStatics const& f) { return f.OriginalStartTime(); });
    }
    inline auto AppointmentProperties::IsResponseRequested()
    {
        return impl::call_factory_cast<hstring(*)(IAppointmentPropertiesStatics const&), AppointmentProperties, IAppointmentPropertiesStatics>([](IAppointmentPropertiesStatics const& f) { return f.IsResponseRequested(); });
    }
    inline auto AppointmentProperties::AllowNewTimeProposal()
    {
        return impl::call_factory_cast<hstring(*)(IAppointmentPropertiesStatics const&), AppointmentProperties, IAppointmentPropertiesStatics>([](IAppointmentPropertiesStatics const& f) { return f.AllowNewTimeProposal(); });
    }
    inline auto AppointmentProperties::AllDay()
    {
        return impl::call_factory_cast<hstring(*)(IAppointmentPropertiesStatics const&), AppointmentProperties, IAppointmentPropertiesStatics>([](IAppointmentPropertiesStatics const& f) { return f.AllDay(); });
    }
    inline auto AppointmentProperties::Details()
    {
        return impl::call_factory_cast<hstring(*)(IAppointmentPropertiesStatics const&), AppointmentProperties, IAppointmentPropertiesStatics>([](IAppointmentPropertiesStatics const& f) { return f.Details(); });
    }
    inline auto AppointmentProperties::OnlineMeetingLink()
    {
        return impl::call_factory_cast<hstring(*)(IAppointmentPropertiesStatics const&), AppointmentProperties, IAppointmentPropertiesStatics>([](IAppointmentPropertiesStatics const& f) { return f.OnlineMeetingLink(); });
    }
    inline auto AppointmentProperties::ReplyTime()
    {
        return impl::call_factory_cast<hstring(*)(IAppointmentPropertiesStatics const&), AppointmentProperties, IAppointmentPropertiesStatics>([](IAppointmentPropertiesStatics const& f) { return f.ReplyTime(); });
    }
    inline auto AppointmentProperties::Organizer()
    {
        return impl::call_factory_cast<hstring(*)(IAppointmentPropertiesStatics const&), AppointmentProperties, IAppointmentPropertiesStatics>([](IAppointmentPropertiesStatics const& f) { return f.Organizer(); });
    }
    inline auto AppointmentProperties::UserResponse()
    {
        return impl::call_factory_cast<hstring(*)(IAppointmentPropertiesStatics const&), AppointmentProperties, IAppointmentPropertiesStatics>([](IAppointmentPropertiesStatics const& f) { return f.UserResponse(); });
    }
    inline auto AppointmentProperties::HasInvitees()
    {
        return impl::call_factory_cast<hstring(*)(IAppointmentPropertiesStatics const&), AppointmentProperties, IAppointmentPropertiesStatics>([](IAppointmentPropertiesStatics const& f) { return f.HasInvitees(); });
    }
    inline auto AppointmentProperties::IsCanceledMeeting()
    {
        return impl::call_factory_cast<hstring(*)(IAppointmentPropertiesStatics const&), AppointmentProperties, IAppointmentPropertiesStatics>([](IAppointmentPropertiesStatics const& f) { return f.IsCanceledMeeting(); });
    }
    inline auto AppointmentProperties::IsOrganizedByUser()
    {
        return impl::call_factory_cast<hstring(*)(IAppointmentPropertiesStatics const&), AppointmentProperties, IAppointmentPropertiesStatics>([](IAppointmentPropertiesStatics const& f) { return f.IsOrganizedByUser(); });
    }
    inline auto AppointmentProperties::Recurrence()
    {
        return impl::call_factory_cast<hstring(*)(IAppointmentPropertiesStatics const&), AppointmentProperties, IAppointmentPropertiesStatics>([](IAppointmentPropertiesStatics const& f) { return f.Recurrence(); });
    }
    inline auto AppointmentProperties::Uri()
    {
        return impl::call_factory_cast<hstring(*)(IAppointmentPropertiesStatics const&), AppointmentProperties, IAppointmentPropertiesStatics>([](IAppointmentPropertiesStatics const& f) { return f.Uri(); });
    }
    inline auto AppointmentProperties::Invitees()
    {
        return impl::call_factory_cast<hstring(*)(IAppointmentPropertiesStatics const&), AppointmentProperties, IAppointmentPropertiesStatics>([](IAppointmentPropertiesStatics const& f) { return f.Invitees(); });
    }
    inline auto AppointmentProperties::DefaultProperties()
    {
        return impl::call_factory_cast<Windows::Foundation::Collections::IVector<hstring>(*)(IAppointmentPropertiesStatics const&), AppointmentProperties, IAppointmentPropertiesStatics>([](IAppointmentPropertiesStatics const& f) { return f.DefaultProperties(); });
    }
    inline auto AppointmentProperties::ChangeNumber()
    {
        return impl::call_factory_cast<hstring(*)(IAppointmentPropertiesStatics2 const&), AppointmentProperties, IAppointmentPropertiesStatics2>([](IAppointmentPropertiesStatics2 const& f) { return f.ChangeNumber(); });
    }
    inline auto AppointmentProperties::RemoteChangeNumber()
    {
        return impl::call_factory_cast<hstring(*)(IAppointmentPropertiesStatics2 const&), AppointmentProperties, IAppointmentPropertiesStatics2>([](IAppointmentPropertiesStatics2 const& f) { return f.RemoteChangeNumber(); });
    }
    inline auto AppointmentProperties::DetailsKind()
    {
        return impl::call_factory_cast<hstring(*)(IAppointmentPropertiesStatics2 const&), AppointmentProperties, IAppointmentPropertiesStatics2>([](IAppointmentPropertiesStatics2 const& f) { return f.DetailsKind(); });
    }
    inline AppointmentRecurrence::AppointmentRecurrence() :
        AppointmentRecurrence(impl::call_factory_cast<AppointmentRecurrence(*)(Windows::Foundation::IActivationFactory const&), AppointmentRecurrence>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<AppointmentRecurrence>(); }))
    {
    }
    inline FindAppointmentsOptions::FindAppointmentsOptions() :
        FindAppointmentsOptions(impl::call_factory_cast<FindAppointmentsOptions(*)(Windows::Foundation::IActivationFactory const&), FindAppointmentsOptions>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<FindAppointmentsOptions>(); }))
    {
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IAppointment> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IAppointment2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IAppointment3> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IAppointmentCalendar> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IAppointmentCalendar2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IAppointmentCalendar3> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IAppointmentConflictResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IAppointmentException> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IAppointmentInvitee> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IAppointmentManagerForUser> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IAppointmentManagerStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IAppointmentManagerStatics2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IAppointmentManagerStatics3> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IAppointmentParticipant> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IAppointmentRecurrence> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IAppointmentRecurrence2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IAppointmentRecurrence3> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IAppointmentStore> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IAppointmentStore2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IAppointmentStore3> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreChange> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreChange2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreChangeReader> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreChangedDeferral> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreChangedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreNotificationTriggerDetails> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IFindAppointmentsOptions> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Appointments::Appointment> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Appointments::AppointmentCalendar> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Appointments::AppointmentCalendarSyncManager> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Appointments::AppointmentConflictResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Appointments::AppointmentException> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Appointments::AppointmentInvitee> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Appointments::AppointmentManager> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Appointments::AppointmentManagerForUser> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Appointments::AppointmentOrganizer> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Appointments::AppointmentProperties> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Appointments::AppointmentRecurrence> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Appointments::AppointmentStore> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Appointments::AppointmentStoreChange> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Appointments::AppointmentStoreChangeReader> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Appointments::AppointmentStoreChangeTracker> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Appointments::AppointmentStoreChangedDeferral> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Appointments::AppointmentStoreChangedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Appointments::AppointmentStoreNotificationTriggerDetails> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Appointments::FindAppointmentsOptions> : winrt::impl::hash_base {};
#endif
}
#endif
