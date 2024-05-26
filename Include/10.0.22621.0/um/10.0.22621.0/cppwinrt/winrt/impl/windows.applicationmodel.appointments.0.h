// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_ApplicationModel_Appointments_0_H
#define WINRT_Windows_ApplicationModel_Appointments_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename TResult> struct __declspec(empty_bases) IAsyncOperation;
    template <typename T> struct __declspec(empty_bases) IReference;
    struct Rect;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
    struct Uri;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IIterable;
    template <typename T> struct __declspec(empty_bases) IVectorView;
    template <typename T> struct __declspec(empty_bases) IVector;
}
WINRT_EXPORT namespace winrt::Windows::System
{
    struct User;
}
WINRT_EXPORT namespace winrt::Windows::UI
{
    struct Color;
}
WINRT_EXPORT namespace winrt::Windows::UI::Popups
{
    enum class Placement : int32_t;
}
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Appointments
{
    enum class AppointmentBusyStatus : int32_t
    {
        Busy = 0,
        Tentative = 1,
        Free = 2,
        OutOfOffice = 3,
        WorkingElsewhere = 4,
    };
    enum class AppointmentCalendarOtherAppReadAccess : int32_t
    {
        SystemOnly = 0,
        Limited = 1,
        Full = 2,
        None = 3,
    };
    enum class AppointmentCalendarOtherAppWriteAccess : int32_t
    {
        None = 0,
        SystemOnly = 1,
        Limited = 2,
    };
    enum class AppointmentCalendarSyncStatus : int32_t
    {
        Idle = 0,
        Syncing = 1,
        UpToDate = 2,
        AuthenticationError = 3,
        PolicyError = 4,
        UnknownError = 5,
        ManualAccountRemovalRequired = 6,
    };
    enum class AppointmentConflictType : int32_t
    {
        None = 0,
        Adjacent = 1,
        Overlap = 2,
    };
    enum class AppointmentDaysOfWeek : uint32_t
    {
        None = 0,
        Sunday = 0x1,
        Monday = 0x2,
        Tuesday = 0x4,
        Wednesday = 0x8,
        Thursday = 0x10,
        Friday = 0x20,
        Saturday = 0x40,
    };
    enum class AppointmentDetailsKind : int32_t
    {
        PlainText = 0,
        Html = 1,
    };
    enum class AppointmentParticipantResponse : int32_t
    {
        None = 0,
        Tentative = 1,
        Accepted = 2,
        Declined = 3,
        Unknown = 4,
    };
    enum class AppointmentParticipantRole : int32_t
    {
        RequiredAttendee = 0,
        OptionalAttendee = 1,
        Resource = 2,
    };
    enum class AppointmentRecurrenceUnit : int32_t
    {
        Daily = 0,
        Weekly = 1,
        Monthly = 2,
        MonthlyOnDay = 3,
        Yearly = 4,
        YearlyOnDay = 5,
    };
    enum class AppointmentSensitivity : int32_t
    {
        Public = 0,
        Private = 1,
    };
    enum class AppointmentStoreAccessType : int32_t
    {
        AppCalendarsReadWrite = 0,
        AllCalendarsReadOnly = 1,
        AllCalendarsReadWrite = 2,
    };
    enum class AppointmentStoreChangeType : int32_t
    {
        AppointmentCreated = 0,
        AppointmentModified = 1,
        AppointmentDeleted = 2,
        ChangeTrackingLost = 3,
        CalendarCreated = 4,
        CalendarModified = 5,
        CalendarDeleted = 6,
    };
    enum class AppointmentSummaryCardView : int32_t
    {
        System = 0,
        App = 1,
    };
    enum class AppointmentWeekOfMonth : int32_t
    {
        First = 0,
        Second = 1,
        Third = 2,
        Fourth = 3,
        Last = 4,
    };
    enum class FindAppointmentCalendarsOptions : uint32_t
    {
        None = 0,
        IncludeHidden = 0x1,
    };
    enum class RecurrenceType : int32_t
    {
        Master = 0,
        Instance = 1,
        ExceptionInstance = 2,
    };
    struct IAppointment;
    struct IAppointment2;
    struct IAppointment3;
    struct IAppointmentCalendar;
    struct IAppointmentCalendar2;
    struct IAppointmentCalendar3;
    struct IAppointmentCalendarSyncManager;
    struct IAppointmentCalendarSyncManager2;
    struct IAppointmentConflictResult;
    struct IAppointmentException;
    struct IAppointmentInvitee;
    struct IAppointmentManagerForUser;
    struct IAppointmentManagerStatics;
    struct IAppointmentManagerStatics2;
    struct IAppointmentManagerStatics3;
    struct IAppointmentParticipant;
    struct IAppointmentPropertiesStatics;
    struct IAppointmentPropertiesStatics2;
    struct IAppointmentRecurrence;
    struct IAppointmentRecurrence2;
    struct IAppointmentRecurrence3;
    struct IAppointmentStore;
    struct IAppointmentStore2;
    struct IAppointmentStore3;
    struct IAppointmentStoreChange;
    struct IAppointmentStoreChange2;
    struct IAppointmentStoreChangeReader;
    struct IAppointmentStoreChangeTracker;
    struct IAppointmentStoreChangeTracker2;
    struct IAppointmentStoreChangedDeferral;
    struct IAppointmentStoreChangedEventArgs;
    struct IAppointmentStoreNotificationTriggerDetails;
    struct IFindAppointmentsOptions;
    struct Appointment;
    struct AppointmentCalendar;
    struct AppointmentCalendarSyncManager;
    struct AppointmentConflictResult;
    struct AppointmentException;
    struct AppointmentInvitee;
    struct AppointmentManager;
    struct AppointmentManagerForUser;
    struct AppointmentOrganizer;
    struct AppointmentProperties;
    struct AppointmentRecurrence;
    struct AppointmentStore;
    struct AppointmentStoreChange;
    struct AppointmentStoreChangeReader;
    struct AppointmentStoreChangeTracker;
    struct AppointmentStoreChangedDeferral;
    struct AppointmentStoreChangedEventArgs;
    struct AppointmentStoreNotificationTriggerDetails;
    struct FindAppointmentsOptions;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::IAppointment>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::IAppointment2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::IAppointment3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::IAppointmentCalendar>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::IAppointmentCalendar2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::IAppointmentCalendar3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::IAppointmentConflictResult>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::IAppointmentException>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::IAppointmentInvitee>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::IAppointmentManagerForUser>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::IAppointmentManagerStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::IAppointmentManagerStatics2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::IAppointmentManagerStatics3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::IAppointmentParticipant>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::IAppointmentRecurrence>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::IAppointmentRecurrence2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::IAppointmentRecurrence3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::IAppointmentStore>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::IAppointmentStore2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::IAppointmentStore3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreChange>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreChange2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreChangeReader>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreChangedDeferral>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreChangedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreNotificationTriggerDetails>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::IFindAppointmentsOptions>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::Appointment>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::AppointmentCalendar>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::AppointmentCalendarSyncManager>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::AppointmentConflictResult>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::AppointmentException>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::AppointmentInvitee>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::AppointmentManager>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::AppointmentManagerForUser>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::AppointmentOrganizer>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::AppointmentProperties>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::AppointmentRecurrence>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::AppointmentStore>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::AppointmentStoreChange>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::AppointmentStoreChangeReader>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::AppointmentStoreChangeTracker>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::AppointmentStoreChangedDeferral>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::AppointmentStoreChangedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::AppointmentStoreNotificationTriggerDetails>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::FindAppointmentsOptions>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::AppointmentBusyStatus>{ using type = enum_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppReadAccess>{ using type = enum_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppWriteAccess>{ using type = enum_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::AppointmentCalendarSyncStatus>{ using type = enum_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::AppointmentConflictType>{ using type = enum_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::AppointmentDaysOfWeek>{ using type = enum_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::AppointmentDetailsKind>{ using type = enum_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::AppointmentParticipantResponse>{ using type = enum_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::AppointmentParticipantRole>{ using type = enum_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::AppointmentRecurrenceUnit>{ using type = enum_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::AppointmentSensitivity>{ using type = enum_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::AppointmentStoreAccessType>{ using type = enum_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::AppointmentStoreChangeType>{ using type = enum_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::AppointmentSummaryCardView>{ using type = enum_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::AppointmentWeekOfMonth>{ using type = enum_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::FindAppointmentCalendarsOptions>{ using type = enum_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::RecurrenceType>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::Appointment> = L"Windows.ApplicationModel.Appointments.Appointment";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::AppointmentCalendar> = L"Windows.ApplicationModel.Appointments.AppointmentCalendar";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::AppointmentCalendarSyncManager> = L"Windows.ApplicationModel.Appointments.AppointmentCalendarSyncManager";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::AppointmentConflictResult> = L"Windows.ApplicationModel.Appointments.AppointmentConflictResult";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::AppointmentException> = L"Windows.ApplicationModel.Appointments.AppointmentException";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::AppointmentInvitee> = L"Windows.ApplicationModel.Appointments.AppointmentInvitee";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::AppointmentManager> = L"Windows.ApplicationModel.Appointments.AppointmentManager";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::AppointmentManagerForUser> = L"Windows.ApplicationModel.Appointments.AppointmentManagerForUser";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::AppointmentOrganizer> = L"Windows.ApplicationModel.Appointments.AppointmentOrganizer";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::AppointmentProperties> = L"Windows.ApplicationModel.Appointments.AppointmentProperties";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::AppointmentRecurrence> = L"Windows.ApplicationModel.Appointments.AppointmentRecurrence";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::AppointmentStore> = L"Windows.ApplicationModel.Appointments.AppointmentStore";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::AppointmentStoreChange> = L"Windows.ApplicationModel.Appointments.AppointmentStoreChange";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::AppointmentStoreChangeReader> = L"Windows.ApplicationModel.Appointments.AppointmentStoreChangeReader";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::AppointmentStoreChangeTracker> = L"Windows.ApplicationModel.Appointments.AppointmentStoreChangeTracker";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::AppointmentStoreChangedDeferral> = L"Windows.ApplicationModel.Appointments.AppointmentStoreChangedDeferral";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::AppointmentStoreChangedEventArgs> = L"Windows.ApplicationModel.Appointments.AppointmentStoreChangedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::AppointmentStoreNotificationTriggerDetails> = L"Windows.ApplicationModel.Appointments.AppointmentStoreNotificationTriggerDetails";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::FindAppointmentsOptions> = L"Windows.ApplicationModel.Appointments.FindAppointmentsOptions";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::AppointmentBusyStatus> = L"Windows.ApplicationModel.Appointments.AppointmentBusyStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppReadAccess> = L"Windows.ApplicationModel.Appointments.AppointmentCalendarOtherAppReadAccess";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppWriteAccess> = L"Windows.ApplicationModel.Appointments.AppointmentCalendarOtherAppWriteAccess";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::AppointmentCalendarSyncStatus> = L"Windows.ApplicationModel.Appointments.AppointmentCalendarSyncStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::AppointmentConflictType> = L"Windows.ApplicationModel.Appointments.AppointmentConflictType";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::AppointmentDaysOfWeek> = L"Windows.ApplicationModel.Appointments.AppointmentDaysOfWeek";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::AppointmentDetailsKind> = L"Windows.ApplicationModel.Appointments.AppointmentDetailsKind";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::AppointmentParticipantResponse> = L"Windows.ApplicationModel.Appointments.AppointmentParticipantResponse";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::AppointmentParticipantRole> = L"Windows.ApplicationModel.Appointments.AppointmentParticipantRole";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::AppointmentRecurrenceUnit> = L"Windows.ApplicationModel.Appointments.AppointmentRecurrenceUnit";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::AppointmentSensitivity> = L"Windows.ApplicationModel.Appointments.AppointmentSensitivity";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::AppointmentStoreAccessType> = L"Windows.ApplicationModel.Appointments.AppointmentStoreAccessType";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::AppointmentStoreChangeType> = L"Windows.ApplicationModel.Appointments.AppointmentStoreChangeType";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::AppointmentSummaryCardView> = L"Windows.ApplicationModel.Appointments.AppointmentSummaryCardView";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::AppointmentWeekOfMonth> = L"Windows.ApplicationModel.Appointments.AppointmentWeekOfMonth";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::FindAppointmentCalendarsOptions> = L"Windows.ApplicationModel.Appointments.FindAppointmentCalendarsOptions";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::RecurrenceType> = L"Windows.ApplicationModel.Appointments.RecurrenceType";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::IAppointment> = L"Windows.ApplicationModel.Appointments.IAppointment";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::IAppointment2> = L"Windows.ApplicationModel.Appointments.IAppointment2";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::IAppointment3> = L"Windows.ApplicationModel.Appointments.IAppointment3";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::IAppointmentCalendar> = L"Windows.ApplicationModel.Appointments.IAppointmentCalendar";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::IAppointmentCalendar2> = L"Windows.ApplicationModel.Appointments.IAppointmentCalendar2";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::IAppointmentCalendar3> = L"Windows.ApplicationModel.Appointments.IAppointmentCalendar3";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager> = L"Windows.ApplicationModel.Appointments.IAppointmentCalendarSyncManager";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager2> = L"Windows.ApplicationModel.Appointments.IAppointmentCalendarSyncManager2";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::IAppointmentConflictResult> = L"Windows.ApplicationModel.Appointments.IAppointmentConflictResult";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::IAppointmentException> = L"Windows.ApplicationModel.Appointments.IAppointmentException";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::IAppointmentInvitee> = L"Windows.ApplicationModel.Appointments.IAppointmentInvitee";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::IAppointmentManagerForUser> = L"Windows.ApplicationModel.Appointments.IAppointmentManagerForUser";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::IAppointmentManagerStatics> = L"Windows.ApplicationModel.Appointments.IAppointmentManagerStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::IAppointmentManagerStatics2> = L"Windows.ApplicationModel.Appointments.IAppointmentManagerStatics2";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::IAppointmentManagerStatics3> = L"Windows.ApplicationModel.Appointments.IAppointmentManagerStatics3";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::IAppointmentParticipant> = L"Windows.ApplicationModel.Appointments.IAppointmentParticipant";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics> = L"Windows.ApplicationModel.Appointments.IAppointmentPropertiesStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics2> = L"Windows.ApplicationModel.Appointments.IAppointmentPropertiesStatics2";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::IAppointmentRecurrence> = L"Windows.ApplicationModel.Appointments.IAppointmentRecurrence";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::IAppointmentRecurrence2> = L"Windows.ApplicationModel.Appointments.IAppointmentRecurrence2";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::IAppointmentRecurrence3> = L"Windows.ApplicationModel.Appointments.IAppointmentRecurrence3";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::IAppointmentStore> = L"Windows.ApplicationModel.Appointments.IAppointmentStore";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::IAppointmentStore2> = L"Windows.ApplicationModel.Appointments.IAppointmentStore2";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::IAppointmentStore3> = L"Windows.ApplicationModel.Appointments.IAppointmentStore3";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreChange> = L"Windows.ApplicationModel.Appointments.IAppointmentStoreChange";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreChange2> = L"Windows.ApplicationModel.Appointments.IAppointmentStoreChange2";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreChangeReader> = L"Windows.ApplicationModel.Appointments.IAppointmentStoreChangeReader";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker> = L"Windows.ApplicationModel.Appointments.IAppointmentStoreChangeTracker";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker2> = L"Windows.ApplicationModel.Appointments.IAppointmentStoreChangeTracker2";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreChangedDeferral> = L"Windows.ApplicationModel.Appointments.IAppointmentStoreChangedDeferral";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreChangedEventArgs> = L"Windows.ApplicationModel.Appointments.IAppointmentStoreChangedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreNotificationTriggerDetails> = L"Windows.ApplicationModel.Appointments.IAppointmentStoreNotificationTriggerDetails";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::IFindAppointmentsOptions> = L"Windows.ApplicationModel.Appointments.IFindAppointmentsOptions";
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Appointments::IAppointment>{ 0xDD002F2F,0x2BDD,0x4076,{ 0x90,0xA3,0x22,0xC2,0x75,0x31,0x29,0x65 } }; // DD002F2F-2BDD-4076-90A3-22C275312965
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Appointments::IAppointment2>{ 0x5E85983C,0x540F,0x3452,{ 0x9B,0x5C,0x0D,0xD7,0xAD,0x4C,0x65,0xA2 } }; // 5E85983C-540F-3452-9B5C-0DD7AD4C65A2
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Appointments::IAppointment3>{ 0xBFCC45A9,0x8961,0x4991,{ 0x93,0x4B,0xC4,0x87,0x68,0xE5,0xA9,0x6C } }; // BFCC45A9-8961-4991-934B-C48768E5A96C
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Appointments::IAppointmentCalendar>{ 0x5273819D,0x8339,0x3D4F,{ 0xA0,0x2F,0x64,0x08,0x44,0x52,0xBB,0x5D } }; // 5273819D-8339-3D4F-A02F-64084452BB5D
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Appointments::IAppointmentCalendar2>{ 0x18E7E422,0x2467,0x4E1C,{ 0xA4,0x59,0xD8,0xA2,0x93,0x03,0xD0,0x92 } }; // 18E7E422-2467-4E1C-A459-D8A29303D092
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Appointments::IAppointmentCalendar3>{ 0xEB23D22B,0xA685,0x42AE,{ 0x84,0x95,0xB3,0x11,0x9A,0xDB,0x41,0x67 } }; // EB23D22B-A685-42AE-8495-B3119ADB4167
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager>{ 0x2B21B3A0,0x4AFF,0x4392,{ 0xBC,0x5F,0x56,0x45,0xFF,0xCF,0xFB,0x17 } }; // 2B21B3A0-4AFF-4392-BC5F-5645FFCFFB17
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager2>{ 0x647528AD,0x0D29,0x4C7C,{ 0xAA,0xA7,0xBF,0x99,0x68,0x05,0x53,0x7C } }; // 647528AD-0D29-4C7C-AAA7-BF996805537C
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Appointments::IAppointmentConflictResult>{ 0xD5CDF0BE,0x2F2F,0x3B7D,{ 0xAF,0x0A,0xA7,0xE2,0x0F,0x3A,0x46,0xE3 } }; // D5CDF0BE-2F2F-3B7D-AF0A-A7E20F3A46E3
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Appointments::IAppointmentException>{ 0xA2076767,0x16F6,0x4BCE,{ 0x9F,0x5A,0x86,0x00,0xB8,0x01,0x9F,0xCB } }; // A2076767-16F6-4BCE-9F5A-8600B8019FCB
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Appointments::IAppointmentInvitee>{ 0x13BF0796,0x9842,0x495B,{ 0xB0,0xE7,0xEF,0x8F,0x79,0xC0,0x70,0x1D } }; // 13BF0796-9842-495B-B0E7-EF8F79C0701D
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Appointments::IAppointmentManagerForUser>{ 0x70261423,0x73CC,0x4660,{ 0xB3,0x18,0xB0,0x13,0x65,0x30,0x2A,0x03 } }; // 70261423-73CC-4660-B318-B01365302A03
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Appointments::IAppointmentManagerStatics>{ 0x3A30FA01,0x5C40,0x499D,{ 0xB3,0x3F,0xA4,0x30,0x50,0xF7,0x4F,0xC4 } }; // 3A30FA01-5C40-499D-B33F-A43050F74FC4
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Appointments::IAppointmentManagerStatics2>{ 0x0A81F60D,0xD04F,0x4034,{ 0xAF,0x72,0xA3,0x65,0x73,0xB4,0x5F,0xF0 } }; // 0A81F60D-D04F-4034-AF72-A36573B45FF0
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Appointments::IAppointmentManagerStatics3>{ 0x2F9AE09C,0xB34C,0x4DC7,{ 0xA3,0x5D,0xCA,0xFD,0x88,0xAE,0x3E,0xC6 } }; // 2F9AE09C-B34C-4DC7-A35D-CAFD88AE3EC6
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Appointments::IAppointmentParticipant>{ 0x615E2902,0x9718,0x467B,{ 0x83,0xFB,0xB2,0x93,0xA1,0x91,0x21,0xDE } }; // 615E2902-9718-467B-83FB-B293A19121DE
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics>{ 0x25141FE9,0x68AE,0x3AAE,{ 0x85,0x5F,0xBC,0x44,0x41,0xCA,0xA2,0x34 } }; // 25141FE9-68AE-3AAE-855F-BC4441CAA234
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics2>{ 0xDFFC434B,0xB017,0x45DD,{ 0x8A,0xF5,0xD1,0x63,0xD1,0x08,0x01,0xBB } }; // DFFC434B-B017-45DD-8AF5-D163D10801BB
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Appointments::IAppointmentRecurrence>{ 0xD87B3E83,0x15A6,0x487B,{ 0xB9,0x59,0x0C,0x36,0x1E,0x60,0xE9,0x54 } }; // D87B3E83-15A6-487B-B959-0C361E60E954
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Appointments::IAppointmentRecurrence2>{ 0x3DF3A2E0,0x05A7,0x4F50,{ 0x9F,0x86,0xB0,0x3F,0x94,0x36,0x25,0x4D } }; // 3DF3A2E0-05A7-4F50-9F86-B03F9436254D
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Appointments::IAppointmentRecurrence3>{ 0x89FF96D9,0xDA4D,0x4A17,{ 0x8D,0xD2,0x1C,0xEB,0xC2,0xB5,0xFF,0x9D } }; // 89FF96D9-DA4D-4A17-8DD2-1CEBC2B5FF9D
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Appointments::IAppointmentStore>{ 0xA461918C,0x7A47,0x4D96,{ 0x96,0xC9,0x15,0xCD,0x8A,0x05,0xA7,0x35 } }; // A461918C-7A47-4D96-96C9-15CD8A05A735
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Appointments::IAppointmentStore2>{ 0x25C48C20,0x1C41,0x424F,{ 0x80,0x84,0x67,0xC1,0xCF,0xE0,0xA8,0x54 } }; // 25C48C20-1C41-424F-8084-67C1CFE0A854
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Appointments::IAppointmentStore3>{ 0x4251940B,0xB078,0x470A,{ 0x9A,0x40,0xC2,0xE0,0x17,0x61,0xF7,0x2F } }; // 4251940B-B078-470A-9A40-C2E01761F72F
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreChange>{ 0xA5A6E035,0x0A33,0x3654,{ 0x84,0x63,0xB5,0x43,0xE9,0x0C,0x3B,0x79 } }; // A5A6E035-0A33-3654-8463-B543E90C3B79
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreChange2>{ 0xB37D0DCE,0x5211,0x4402,{ 0xA6,0x08,0xA9,0x6F,0xE7,0x0B,0x8E,0xE2 } }; // B37D0DCE-5211-4402-A608-A96FE70B8EE2
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreChangeReader>{ 0x8B2409F1,0x65F3,0x42A0,{ 0x96,0x1D,0x4C,0x20,0x9B,0xF3,0x03,0x70 } }; // 8B2409F1-65F3-42A0-961D-4C209BF30370
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker>{ 0x1B25F4B1,0x8ECE,0x4F17,{ 0x93,0xC8,0xE6,0x41,0x24,0x58,0xFD,0x5C } }; // 1B25F4B1-8ECE-4F17-93C8-E6412458FD5C
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker2>{ 0xB66AAF45,0x9542,0x4CF7,{ 0x85,0x50,0xEB,0x37,0x0E,0x0C,0x08,0xD3 } }; // B66AAF45-9542-4CF7-8550-EB370E0C08D3
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreChangedDeferral>{ 0x4CB82026,0xFEDB,0x4BC3,{ 0x96,0x62,0x95,0xA9,0xBE,0xFD,0xF4,0xDF } }; // 4CB82026-FEDB-4BC3-9662-95A9BEFDF4DF
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreChangedEventArgs>{ 0x2285F8B9,0x0791,0x417E,{ 0xBF,0xEA,0xCC,0x6D,0x41,0x63,0x6C,0x8C } }; // 2285F8B9-0791-417E-BFEA-CC6D41636C8C
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreNotificationTriggerDetails>{ 0x9B33CB11,0xC301,0x421E,{ 0xAF,0xEF,0x04,0x7E,0xCF,0xA7,0x6A,0xDB } }; // 9B33CB11-C301-421E-AFEF-047ECFA76ADB
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Appointments::IFindAppointmentsOptions>{ 0x55F7DC55,0x9942,0x3086,{ 0x82,0xB5,0x2C,0xB2,0x9F,0x64,0xD5,0xF5 } }; // 55F7DC55-9942-3086-82B5-2CB29F64D5F5
    template <> struct default_interface<winrt::Windows::ApplicationModel::Appointments::Appointment>{ using type = winrt::Windows::ApplicationModel::Appointments::IAppointment; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Appointments::AppointmentCalendar>{ using type = winrt::Windows::ApplicationModel::Appointments::IAppointmentCalendar; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Appointments::AppointmentCalendarSyncManager>{ using type = winrt::Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Appointments::AppointmentConflictResult>{ using type = winrt::Windows::ApplicationModel::Appointments::IAppointmentConflictResult; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Appointments::AppointmentException>{ using type = winrt::Windows::ApplicationModel::Appointments::IAppointmentException; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Appointments::AppointmentInvitee>{ using type = winrt::Windows::ApplicationModel::Appointments::IAppointmentInvitee; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Appointments::AppointmentManagerForUser>{ using type = winrt::Windows::ApplicationModel::Appointments::IAppointmentManagerForUser; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Appointments::AppointmentOrganizer>{ using type = winrt::Windows::ApplicationModel::Appointments::IAppointmentParticipant; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Appointments::AppointmentRecurrence>{ using type = winrt::Windows::ApplicationModel::Appointments::IAppointmentRecurrence; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Appointments::AppointmentStore>{ using type = winrt::Windows::ApplicationModel::Appointments::IAppointmentStore; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Appointments::AppointmentStoreChange>{ using type = winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreChange; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Appointments::AppointmentStoreChangeReader>{ using type = winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreChangeReader; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Appointments::AppointmentStoreChangeTracker>{ using type = winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Appointments::AppointmentStoreChangedDeferral>{ using type = winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreChangedDeferral; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Appointments::AppointmentStoreChangedEventArgs>{ using type = winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreChangedEventArgs; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Appointments::AppointmentStoreNotificationTriggerDetails>{ using type = winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreNotificationTriggerDetails; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Appointments::FindAppointmentsOptions>{ using type = winrt::Windows::ApplicationModel::Appointments::IFindAppointmentsOptions; };
    template <> struct abi<winrt::Windows::ApplicationModel::Appointments::IAppointment>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_StartTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_StartTime(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_Duration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_Duration(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_Location(void**) noexcept = 0;
            virtual int32_t __stdcall put_Location(void*) noexcept = 0;
            virtual int32_t __stdcall get_Subject(void**) noexcept = 0;
            virtual int32_t __stdcall put_Subject(void*) noexcept = 0;
            virtual int32_t __stdcall get_Details(void**) noexcept = 0;
            virtual int32_t __stdcall put_Details(void*) noexcept = 0;
            virtual int32_t __stdcall get_Reminder(void**) noexcept = 0;
            virtual int32_t __stdcall put_Reminder(void*) noexcept = 0;
            virtual int32_t __stdcall get_Organizer(void**) noexcept = 0;
            virtual int32_t __stdcall put_Organizer(void*) noexcept = 0;
            virtual int32_t __stdcall get_Invitees(void**) noexcept = 0;
            virtual int32_t __stdcall get_Recurrence(void**) noexcept = 0;
            virtual int32_t __stdcall put_Recurrence(void*) noexcept = 0;
            virtual int32_t __stdcall get_BusyStatus(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_BusyStatus(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_AllDay(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AllDay(bool) noexcept = 0;
            virtual int32_t __stdcall get_Sensitivity(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Sensitivity(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Uri(void**) noexcept = 0;
            virtual int32_t __stdcall put_Uri(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Appointments::IAppointment2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LocalId(void**) noexcept = 0;
            virtual int32_t __stdcall get_CalendarId(void**) noexcept = 0;
            virtual int32_t __stdcall get_RoamingId(void**) noexcept = 0;
            virtual int32_t __stdcall put_RoamingId(void*) noexcept = 0;
            virtual int32_t __stdcall get_OriginalStartTime(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsResponseRequested(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsResponseRequested(bool) noexcept = 0;
            virtual int32_t __stdcall get_AllowNewTimeProposal(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AllowNewTimeProposal(bool) noexcept = 0;
            virtual int32_t __stdcall get_OnlineMeetingLink(void**) noexcept = 0;
            virtual int32_t __stdcall put_OnlineMeetingLink(void*) noexcept = 0;
            virtual int32_t __stdcall get_ReplyTime(void**) noexcept = 0;
            virtual int32_t __stdcall put_ReplyTime(void*) noexcept = 0;
            virtual int32_t __stdcall get_UserResponse(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_UserResponse(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_HasInvitees(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsCanceledMeeting(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsCanceledMeeting(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsOrganizedByUser(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsOrganizedByUser(bool) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Appointments::IAppointment3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ChangeNumber(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall get_RemoteChangeNumber(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall put_RemoteChangeNumber(uint64_t) noexcept = 0;
            virtual int32_t __stdcall get_DetailsKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_DetailsKind(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Appointments::IAppointmentCalendar>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DisplayColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall put_DisplayName(void*) noexcept = 0;
            virtual int32_t __stdcall get_LocalId(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsHidden(bool*) noexcept = 0;
            virtual int32_t __stdcall get_OtherAppReadAccess(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_OtherAppReadAccess(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_OtherAppWriteAccess(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_OtherAppWriteAccess(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_SourceDisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_SummaryCardView(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_SummaryCardView(int32_t) noexcept = 0;
            virtual int32_t __stdcall FindAppointmentsAsync(int64_t, int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall FindAppointmentsAsyncWithOptions(int64_t, int64_t, void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindExceptionsFromMasterAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindAllInstancesAsync(void*, int64_t, int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall FindAllInstancesAsyncWithOptions(void*, int64_t, int64_t, void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetAppointmentAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetAppointmentInstanceAsync(void*, int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall FindUnexpandedAppointmentsAsync(void**) noexcept = 0;
            virtual int32_t __stdcall FindUnexpandedAppointmentsAsyncWithOptions(void*, void**) noexcept = 0;
            virtual int32_t __stdcall DeleteAsync(void**) noexcept = 0;
            virtual int32_t __stdcall SaveAsync(void**) noexcept = 0;
            virtual int32_t __stdcall DeleteAppointmentAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall DeleteAppointmentInstanceAsync(void*, int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall SaveAppointmentAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Appointments::IAppointmentCalendar2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SyncManager(void**) noexcept = 0;
            virtual int32_t __stdcall get_RemoteId(void**) noexcept = 0;
            virtual int32_t __stdcall put_RemoteId(void*) noexcept = 0;
            virtual int32_t __stdcall put_DisplayColor(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall put_IsHidden(bool) noexcept = 0;
            virtual int32_t __stdcall get_UserDataAccountId(void**) noexcept = 0;
            virtual int32_t __stdcall get_CanCreateOrUpdateAppointments(bool*) noexcept = 0;
            virtual int32_t __stdcall put_CanCreateOrUpdateAppointments(bool) noexcept = 0;
            virtual int32_t __stdcall get_CanCancelMeetings(bool*) noexcept = 0;
            virtual int32_t __stdcall put_CanCancelMeetings(bool) noexcept = 0;
            virtual int32_t __stdcall get_CanForwardMeetings(bool*) noexcept = 0;
            virtual int32_t __stdcall put_CanForwardMeetings(bool) noexcept = 0;
            virtual int32_t __stdcall get_CanProposeNewTimeForMeetings(bool*) noexcept = 0;
            virtual int32_t __stdcall put_CanProposeNewTimeForMeetings(bool) noexcept = 0;
            virtual int32_t __stdcall get_CanUpdateMeetingResponses(bool*) noexcept = 0;
            virtual int32_t __stdcall put_CanUpdateMeetingResponses(bool) noexcept = 0;
            virtual int32_t __stdcall get_CanNotifyInvitees(bool*) noexcept = 0;
            virtual int32_t __stdcall put_CanNotifyInvitees(bool) noexcept = 0;
            virtual int32_t __stdcall get_MustNofityInvitees(bool*) noexcept = 0;
            virtual int32_t __stdcall put_MustNofityInvitees(bool) noexcept = 0;
            virtual int32_t __stdcall TryCreateOrUpdateAppointmentAsync(void*, bool, void**) noexcept = 0;
            virtual int32_t __stdcall TryCancelMeetingAsync(void*, void*, void*, bool, void**) noexcept = 0;
            virtual int32_t __stdcall TryForwardMeetingAsync(void*, void*, void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryProposeNewTimeForMeetingAsync(void*, int64_t, int64_t, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryUpdateMeetingResponseAsync(void*, int32_t, void*, void*, bool, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Appointments::IAppointmentCalendar3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RegisterSyncManagerAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_LastSuccessfulSyncTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_LastAttemptedSyncTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall SyncAsync(void**) noexcept = 0;
            virtual int32_t __stdcall add_SyncStatusChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SyncStatusChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_Status(int32_t) noexcept = 0;
            virtual int32_t __stdcall put_LastSuccessfulSyncTime(int64_t) noexcept = 0;
            virtual int32_t __stdcall put_LastAttemptedSyncTime(int64_t) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Appointments::IAppointmentConflictResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Type(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Date(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Appointments::IAppointmentException>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Appointment(void**) noexcept = 0;
            virtual int32_t __stdcall get_ExceptionProperties(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsDeleted(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Appointments::IAppointmentInvitee>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Role(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Role(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Response(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Response(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Appointments::IAppointmentManagerForUser>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ShowAddAppointmentAsync(void*, winrt::Windows::Foundation::Rect, void**) noexcept = 0;
            virtual int32_t __stdcall ShowAddAppointmentWithPlacementAsync(void*, winrt::Windows::Foundation::Rect, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall ShowReplaceAppointmentAsync(void*, void*, winrt::Windows::Foundation::Rect, void**) noexcept = 0;
            virtual int32_t __stdcall ShowReplaceAppointmentWithPlacementAsync(void*, void*, winrt::Windows::Foundation::Rect, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall ShowReplaceAppointmentWithPlacementAndDateAsync(void*, void*, winrt::Windows::Foundation::Rect, int32_t, int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall ShowRemoveAppointmentAsync(void*, winrt::Windows::Foundation::Rect, void**) noexcept = 0;
            virtual int32_t __stdcall ShowRemoveAppointmentWithPlacementAsync(void*, winrt::Windows::Foundation::Rect, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall ShowRemoveAppointmentWithPlacementAndDateAsync(void*, winrt::Windows::Foundation::Rect, int32_t, int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall ShowTimeFrameAsync(int64_t, int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall ShowAppointmentDetailsAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ShowAppointmentDetailsWithDateAsync(void*, int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall ShowEditNewAppointmentAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestStoreAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall get_User(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Appointments::IAppointmentManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ShowAddAppointmentAsync(void*, winrt::Windows::Foundation::Rect, void**) noexcept = 0;
            virtual int32_t __stdcall ShowAddAppointmentWithPlacementAsync(void*, winrt::Windows::Foundation::Rect, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall ShowReplaceAppointmentAsync(void*, void*, winrt::Windows::Foundation::Rect, void**) noexcept = 0;
            virtual int32_t __stdcall ShowReplaceAppointmentWithPlacementAsync(void*, void*, winrt::Windows::Foundation::Rect, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall ShowReplaceAppointmentWithPlacementAndDateAsync(void*, void*, winrt::Windows::Foundation::Rect, int32_t, int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall ShowRemoveAppointmentAsync(void*, winrt::Windows::Foundation::Rect, void**) noexcept = 0;
            virtual int32_t __stdcall ShowRemoveAppointmentWithPlacementAsync(void*, winrt::Windows::Foundation::Rect, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall ShowRemoveAppointmentWithPlacementAndDateAsync(void*, winrt::Windows::Foundation::Rect, int32_t, int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall ShowTimeFrameAsync(int64_t, int64_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Appointments::IAppointmentManagerStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ShowAppointmentDetailsAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ShowAppointmentDetailsWithDateAsync(void*, int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall ShowEditNewAppointmentAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestStoreAsync(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Appointments::IAppointmentManagerStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForUser(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Appointments::IAppointmentParticipant>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall put_DisplayName(void*) noexcept = 0;
            virtual int32_t __stdcall get_Address(void**) noexcept = 0;
            virtual int32_t __stdcall put_Address(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Subject(void**) noexcept = 0;
            virtual int32_t __stdcall get_Location(void**) noexcept = 0;
            virtual int32_t __stdcall get_StartTime(void**) noexcept = 0;
            virtual int32_t __stdcall get_Duration(void**) noexcept = 0;
            virtual int32_t __stdcall get_Reminder(void**) noexcept = 0;
            virtual int32_t __stdcall get_BusyStatus(void**) noexcept = 0;
            virtual int32_t __stdcall get_Sensitivity(void**) noexcept = 0;
            virtual int32_t __stdcall get_OriginalStartTime(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsResponseRequested(void**) noexcept = 0;
            virtual int32_t __stdcall get_AllowNewTimeProposal(void**) noexcept = 0;
            virtual int32_t __stdcall get_AllDay(void**) noexcept = 0;
            virtual int32_t __stdcall get_Details(void**) noexcept = 0;
            virtual int32_t __stdcall get_OnlineMeetingLink(void**) noexcept = 0;
            virtual int32_t __stdcall get_ReplyTime(void**) noexcept = 0;
            virtual int32_t __stdcall get_Organizer(void**) noexcept = 0;
            virtual int32_t __stdcall get_UserResponse(void**) noexcept = 0;
            virtual int32_t __stdcall get_HasInvitees(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsCanceledMeeting(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsOrganizedByUser(void**) noexcept = 0;
            virtual int32_t __stdcall get_Recurrence(void**) noexcept = 0;
            virtual int32_t __stdcall get_Uri(void**) noexcept = 0;
            virtual int32_t __stdcall get_Invitees(void**) noexcept = 0;
            virtual int32_t __stdcall get_DefaultProperties(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ChangeNumber(void**) noexcept = 0;
            virtual int32_t __stdcall get_RemoteChangeNumber(void**) noexcept = 0;
            virtual int32_t __stdcall get_DetailsKind(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Appointments::IAppointmentRecurrence>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Unit(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Unit(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Occurrences(void**) noexcept = 0;
            virtual int32_t __stdcall put_Occurrences(void*) noexcept = 0;
            virtual int32_t __stdcall get_Until(void**) noexcept = 0;
            virtual int32_t __stdcall put_Until(void*) noexcept = 0;
            virtual int32_t __stdcall get_Interval(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Interval(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_DaysOfWeek(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_DaysOfWeek(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_WeekOfMonth(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_WeekOfMonth(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Month(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Month(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_Day(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Day(uint32_t) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Appointments::IAppointmentRecurrence2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RecurrenceType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_TimeZone(void**) noexcept = 0;
            virtual int32_t __stdcall put_TimeZone(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Appointments::IAppointmentRecurrence3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CalendarIdentifier(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Appointments::IAppointmentStore>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ChangeTracker(void**) noexcept = 0;
            virtual int32_t __stdcall CreateAppointmentCalendarAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetAppointmentCalendarAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetAppointmentAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetAppointmentInstanceAsync(void*, int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall FindAppointmentCalendarsAsync(void**) noexcept = 0;
            virtual int32_t __stdcall FindAppointmentCalendarsAsyncWithOptions(uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall FindAppointmentsAsync(int64_t, int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall FindAppointmentsAsyncWithOptions(int64_t, int64_t, void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindConflictAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindConflictAsyncWithInstanceStart(void*, int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall MoveAppointmentAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall ShowAddAppointmentAsync(void*, winrt::Windows::Foundation::Rect, void**) noexcept = 0;
            virtual int32_t __stdcall ShowReplaceAppointmentAsync(void*, void*, winrt::Windows::Foundation::Rect, void**) noexcept = 0;
            virtual int32_t __stdcall ShowReplaceAppointmentWithPlacementAndDateAsync(void*, void*, winrt::Windows::Foundation::Rect, int32_t, int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall ShowRemoveAppointmentAsync(void*, winrt::Windows::Foundation::Rect, void**) noexcept = 0;
            virtual int32_t __stdcall ShowRemoveAppointmentWithPlacementAndDateAsync(void*, winrt::Windows::Foundation::Rect, int32_t, int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall ShowAppointmentDetailsAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ShowAppointmentDetailsWithDateAsync(void*, int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall ShowEditNewAppointmentAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindLocalIdsFromRoamingIdAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Appointments::IAppointmentStore2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_StoreChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_StoreChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall CreateAppointmentCalendarInAccountAsync(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Appointments::IAppointmentStore3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetChangeTracker(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreChange>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Appointment(void**) noexcept = 0;
            virtual int32_t __stdcall get_ChangeType(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreChange2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AppointmentCalendar(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreChangeReader>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ReadBatchAsync(void**) noexcept = 0;
            virtual int32_t __stdcall AcceptChanges() noexcept = 0;
            virtual int32_t __stdcall AcceptChangesThrough(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetChangeReader(void**) noexcept = 0;
            virtual int32_t __stdcall Enable() noexcept = 0;
            virtual int32_t __stdcall Reset() noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsTracking(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreChangedDeferral>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Complete() noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreNotificationTriggerDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Appointments::IFindAppointmentsOptions>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CalendarIds(void**) noexcept = 0;
            virtual int32_t __stdcall get_FetchProperties(void**) noexcept = 0;
            virtual int32_t __stdcall get_IncludeHidden(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IncludeHidden(bool) noexcept = 0;
            virtual int32_t __stdcall get_MaxCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_MaxCount(uint32_t) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IAppointment
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::DateTime) StartTime() const;
        WINRT_IMPL_AUTO(void) StartTime(winrt::Windows::Foundation::DateTime const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::TimeSpan) Duration() const;
        WINRT_IMPL_AUTO(void) Duration(winrt::Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Location() const;
        WINRT_IMPL_AUTO(void) Location(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Subject() const;
        WINRT_IMPL_AUTO(void) Subject(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Details() const;
        WINRT_IMPL_AUTO(void) Details(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::TimeSpan>) Reminder() const;
        WINRT_IMPL_AUTO(void) Reminder(winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::TimeSpan> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Appointments::AppointmentOrganizer) Organizer() const;
        WINRT_IMPL_AUTO(void) Organizer(winrt::Windows::ApplicationModel::Appointments::AppointmentOrganizer const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<winrt::Windows::ApplicationModel::Appointments::AppointmentInvitee>) Invitees() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Appointments::AppointmentRecurrence) Recurrence() const;
        WINRT_IMPL_AUTO(void) Recurrence(winrt::Windows::ApplicationModel::Appointments::AppointmentRecurrence const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Appointments::AppointmentBusyStatus) BusyStatus() const;
        WINRT_IMPL_AUTO(void) BusyStatus(winrt::Windows::ApplicationModel::Appointments::AppointmentBusyStatus const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) AllDay() const;
        WINRT_IMPL_AUTO(void) AllDay(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Appointments::AppointmentSensitivity) Sensitivity() const;
        WINRT_IMPL_AUTO(void) Sensitivity(winrt::Windows::ApplicationModel::Appointments::AppointmentSensitivity const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Uri) Uri() const;
        WINRT_IMPL_AUTO(void) Uri(winrt::Windows::Foundation::Uri const& value) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Appointments::IAppointment>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointment<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IAppointment2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) LocalId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) CalendarId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) RoamingId() const;
        WINRT_IMPL_AUTO(void) RoamingId(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::DateTime>) OriginalStartTime() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsResponseRequested() const;
        WINRT_IMPL_AUTO(void) IsResponseRequested(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) AllowNewTimeProposal() const;
        WINRT_IMPL_AUTO(void) AllowNewTimeProposal(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) OnlineMeetingLink() const;
        WINRT_IMPL_AUTO(void) OnlineMeetingLink(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::DateTime>) ReplyTime() const;
        WINRT_IMPL_AUTO(void) ReplyTime(winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::DateTime> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Appointments::AppointmentParticipantResponse) UserResponse() const;
        WINRT_IMPL_AUTO(void) UserResponse(winrt::Windows::ApplicationModel::Appointments::AppointmentParticipantResponse const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) HasInvitees() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsCanceledMeeting() const;
        WINRT_IMPL_AUTO(void) IsCanceledMeeting(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsOrganizedByUser() const;
        WINRT_IMPL_AUTO(void) IsOrganizedByUser(bool value) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Appointments::IAppointment2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointment2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IAppointment3
    {
        [[nodiscard]] WINRT_IMPL_AUTO(uint64_t) ChangeNumber() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint64_t) RemoteChangeNumber() const;
        WINRT_IMPL_AUTO(void) RemoteChangeNumber(uint64_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Appointments::AppointmentDetailsKind) DetailsKind() const;
        WINRT_IMPL_AUTO(void) DetailsKind(winrt::Windows::ApplicationModel::Appointments::AppointmentDetailsKind const& value) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Appointments::IAppointment3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointment3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) DisplayColor() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DisplayName() const;
        WINRT_IMPL_AUTO(void) DisplayName(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) LocalId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsHidden() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppReadAccess) OtherAppReadAccess() const;
        WINRT_IMPL_AUTO(void) OtherAppReadAccess(winrt::Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppReadAccess const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppWriteAccess) OtherAppWriteAccess() const;
        WINRT_IMPL_AUTO(void) OtherAppWriteAccess(winrt::Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppWriteAccess const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) SourceDisplayName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Appointments::AppointmentSummaryCardView) SummaryCardView() const;
        WINRT_IMPL_AUTO(void) SummaryCardView(winrt::Windows::ApplicationModel::Appointments::AppointmentSummaryCardView const& value) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::ApplicationModel::Appointments::Appointment>>) FindAppointmentsAsync(winrt::Windows::Foundation::DateTime const& rangeStart, winrt::Windows::Foundation::TimeSpan const& rangeLength) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::ApplicationModel::Appointments::Appointment>>) FindAppointmentsAsync(winrt::Windows::Foundation::DateTime const& rangeStart, winrt::Windows::Foundation::TimeSpan const& rangeLength, winrt::Windows::ApplicationModel::Appointments::FindAppointmentsOptions const& options) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::ApplicationModel::Appointments::AppointmentException>>) FindExceptionsFromMasterAsync(param::hstring const& masterLocalId) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::ApplicationModel::Appointments::Appointment>>) FindAllInstancesAsync(param::hstring const& masterLocalId, winrt::Windows::Foundation::DateTime const& rangeStart, winrt::Windows::Foundation::TimeSpan const& rangeLength) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::ApplicationModel::Appointments::Appointment>>) FindAllInstancesAsync(param::hstring const& masterLocalId, winrt::Windows::Foundation::DateTime const& rangeStart, winrt::Windows::Foundation::TimeSpan const& rangeLength, winrt::Windows::ApplicationModel::Appointments::FindAppointmentsOptions const& pOptions) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Appointments::Appointment>) GetAppointmentAsync(param::hstring const& localId) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Appointments::Appointment>) GetAppointmentInstanceAsync(param::hstring const& localId, winrt::Windows::Foundation::DateTime const& instanceStartTime) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::ApplicationModel::Appointments::Appointment>>) FindUnexpandedAppointmentsAsync() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::ApplicationModel::Appointments::Appointment>>) FindUnexpandedAppointmentsAsync(winrt::Windows::ApplicationModel::Appointments::FindAppointmentsOptions const& options) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncAction) DeleteAsync() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncAction) SaveAsync() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncAction) DeleteAppointmentAsync(param::hstring const& localId) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncAction) DeleteAppointmentInstanceAsync(param::hstring const& localId, winrt::Windows::Foundation::DateTime const& instanceStartTime) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncAction) SaveAppointmentAsync(winrt::Windows::ApplicationModel::Appointments::Appointment const& pAppointment) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Appointments::IAppointmentCalendar>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Appointments::AppointmentCalendarSyncManager) SyncManager() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) RemoteId() const;
        WINRT_IMPL_AUTO(void) RemoteId(param::hstring const& value) const;
        WINRT_IMPL_AUTO(void) DisplayColor(winrt::Windows::UI::Color const& value) const;
        WINRT_IMPL_AUTO(void) IsHidden(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) UserDataAccountId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) CanCreateOrUpdateAppointments() const;
        WINRT_IMPL_AUTO(void) CanCreateOrUpdateAppointments(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) CanCancelMeetings() const;
        WINRT_IMPL_AUTO(void) CanCancelMeetings(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) CanForwardMeetings() const;
        WINRT_IMPL_AUTO(void) CanForwardMeetings(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) CanProposeNewTimeForMeetings() const;
        WINRT_IMPL_AUTO(void) CanProposeNewTimeForMeetings(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) CanUpdateMeetingResponses() const;
        WINRT_IMPL_AUTO(void) CanUpdateMeetingResponses(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) CanNotifyInvitees() const;
        WINRT_IMPL_AUTO(void) CanNotifyInvitees(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) MustNofityInvitees() const;
        WINRT_IMPL_AUTO(void) MustNofityInvitees(bool value) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<bool>) TryCreateOrUpdateAppointmentAsync(winrt::Windows::ApplicationModel::Appointments::Appointment const& appointment, bool notifyInvitees) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<bool>) TryCancelMeetingAsync(winrt::Windows::ApplicationModel::Appointments::Appointment const& meeting, param::hstring const& subject, param::hstring const& comment, bool notifyInvitees) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<bool>) TryForwardMeetingAsync(winrt::Windows::ApplicationModel::Appointments::Appointment const& meeting, param::async_iterable<winrt::Windows::ApplicationModel::Appointments::AppointmentInvitee> const& invitees, param::hstring const& subject, param::hstring const& forwardHeader, param::hstring const& comment) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<bool>) TryProposeNewTimeForMeetingAsync(winrt::Windows::ApplicationModel::Appointments::Appointment const& meeting, winrt::Windows::Foundation::DateTime const& newStartTime, winrt::Windows::Foundation::TimeSpan const& newDuration, param::hstring const& subject, param::hstring const& comment) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<bool>) TryUpdateMeetingResponseAsync(winrt::Windows::ApplicationModel::Appointments::Appointment const& meeting, winrt::Windows::ApplicationModel::Appointments::AppointmentParticipantResponse const& response, param::hstring const& subject, param::hstring const& comment, bool sendUpdate) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Appointments::IAppointmentCalendar2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar3
    {
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncAction) RegisterSyncManagerAsync() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Appointments::IAppointmentCalendar3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IAppointmentCalendarSyncManager
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Appointments::AppointmentCalendarSyncStatus) Status() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::DateTime) LastSuccessfulSyncTime() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::DateTime) LastAttemptedSyncTime() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<bool>) SyncAsync() const;
        WINRT_IMPL_AUTO(winrt::event_token) SyncStatusChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Appointments::AppointmentCalendarSyncManager, winrt::Windows::Foundation::IInspectable> const& handler) const;
        using SyncStatusChanged_revoker = impl::event_revoker<winrt::Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager, &impl::abi_t<winrt::Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager>::remove_SyncStatusChanged>;
        [[nodiscard]] SyncStatusChanged_revoker SyncStatusChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Appointments::AppointmentCalendarSyncManager, winrt::Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) SyncStatusChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentCalendarSyncManager<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IAppointmentCalendarSyncManager2
    {
        WINRT_IMPL_AUTO(void) Status(winrt::Windows::ApplicationModel::Appointments::AppointmentCalendarSyncStatus const& value) const;
        WINRT_IMPL_AUTO(void) LastSuccessfulSyncTime(winrt::Windows::Foundation::DateTime const& value) const;
        WINRT_IMPL_AUTO(void) LastAttemptedSyncTime(winrt::Windows::Foundation::DateTime const& value) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentCalendarSyncManager2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IAppointmentConflictResult
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Appointments::AppointmentConflictType) Type() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::DateTime) Date() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Appointments::IAppointmentConflictResult>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentConflictResult<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IAppointmentException
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Appointments::Appointment) Appointment() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<hstring>) ExceptionProperties() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsDeleted() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Appointments::IAppointmentException>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentException<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IAppointmentInvitee
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Appointments::AppointmentParticipantRole) Role() const;
        WINRT_IMPL_AUTO(void) Role(winrt::Windows::ApplicationModel::Appointments::AppointmentParticipantRole const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Appointments::AppointmentParticipantResponse) Response() const;
        WINRT_IMPL_AUTO(void) Response(winrt::Windows::ApplicationModel::Appointments::AppointmentParticipantResponse const& value) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Appointments::IAppointmentInvitee>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentInvitee<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IAppointmentManagerForUser
    {
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<hstring>) ShowAddAppointmentAsync(winrt::Windows::ApplicationModel::Appointments::Appointment const& appointment, winrt::Windows::Foundation::Rect const& selection) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<hstring>) ShowAddAppointmentAsync(winrt::Windows::ApplicationModel::Appointments::Appointment const& appointment, winrt::Windows::Foundation::Rect const& selection, winrt::Windows::UI::Popups::Placement const& preferredPlacement) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<hstring>) ShowReplaceAppointmentAsync(param::hstring const& appointmentId, winrt::Windows::ApplicationModel::Appointments::Appointment const& appointment, winrt::Windows::Foundation::Rect const& selection) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<hstring>) ShowReplaceAppointmentAsync(param::hstring const& appointmentId, winrt::Windows::ApplicationModel::Appointments::Appointment const& appointment, winrt::Windows::Foundation::Rect const& selection, winrt::Windows::UI::Popups::Placement const& preferredPlacement) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<hstring>) ShowReplaceAppointmentAsync(param::hstring const& appointmentId, winrt::Windows::ApplicationModel::Appointments::Appointment const& appointment, winrt::Windows::Foundation::Rect const& selection, winrt::Windows::UI::Popups::Placement const& preferredPlacement, winrt::Windows::Foundation::DateTime const& instanceStartDate) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<bool>) ShowRemoveAppointmentAsync(param::hstring const& appointmentId, winrt::Windows::Foundation::Rect const& selection) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<bool>) ShowRemoveAppointmentAsync(param::hstring const& appointmentId, winrt::Windows::Foundation::Rect const& selection, winrt::Windows::UI::Popups::Placement const& preferredPlacement) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<bool>) ShowRemoveAppointmentAsync(param::hstring const& appointmentId, winrt::Windows::Foundation::Rect const& selection, winrt::Windows::UI::Popups::Placement const& preferredPlacement, winrt::Windows::Foundation::DateTime const& instanceStartDate) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncAction) ShowTimeFrameAsync(winrt::Windows::Foundation::DateTime const& timeToShow, winrt::Windows::Foundation::TimeSpan const& duration) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncAction) ShowAppointmentDetailsAsync(param::hstring const& appointmentId) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncAction) ShowAppointmentDetailsAsync(param::hstring const& appointmentId, winrt::Windows::Foundation::DateTime const& instanceStartDate) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<hstring>) ShowEditNewAppointmentAsync(winrt::Windows::ApplicationModel::Appointments::Appointment const& appointment) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Appointments::AppointmentStore>) RequestStoreAsync(winrt::Windows::ApplicationModel::Appointments::AppointmentStoreAccessType const& options) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::System::User) User() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Appointments::IAppointmentManagerForUser>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentManagerForUser<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IAppointmentManagerStatics
    {
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<hstring>) ShowAddAppointmentAsync(winrt::Windows::ApplicationModel::Appointments::Appointment const& appointment, winrt::Windows::Foundation::Rect const& selection) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<hstring>) ShowAddAppointmentAsync(winrt::Windows::ApplicationModel::Appointments::Appointment const& appointment, winrt::Windows::Foundation::Rect const& selection, winrt::Windows::UI::Popups::Placement const& preferredPlacement) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<hstring>) ShowReplaceAppointmentAsync(param::hstring const& appointmentId, winrt::Windows::ApplicationModel::Appointments::Appointment const& appointment, winrt::Windows::Foundation::Rect const& selection) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<hstring>) ShowReplaceAppointmentAsync(param::hstring const& appointmentId, winrt::Windows::ApplicationModel::Appointments::Appointment const& appointment, winrt::Windows::Foundation::Rect const& selection, winrt::Windows::UI::Popups::Placement const& preferredPlacement) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<hstring>) ShowReplaceAppointmentAsync(param::hstring const& appointmentId, winrt::Windows::ApplicationModel::Appointments::Appointment const& appointment, winrt::Windows::Foundation::Rect const& selection, winrt::Windows::UI::Popups::Placement const& preferredPlacement, winrt::Windows::Foundation::DateTime const& instanceStartDate) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<bool>) ShowRemoveAppointmentAsync(param::hstring const& appointmentId, winrt::Windows::Foundation::Rect const& selection) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<bool>) ShowRemoveAppointmentAsync(param::hstring const& appointmentId, winrt::Windows::Foundation::Rect const& selection, winrt::Windows::UI::Popups::Placement const& preferredPlacement) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<bool>) ShowRemoveAppointmentAsync(param::hstring const& appointmentId, winrt::Windows::Foundation::Rect const& selection, winrt::Windows::UI::Popups::Placement const& preferredPlacement, winrt::Windows::Foundation::DateTime const& instanceStartDate) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncAction) ShowTimeFrameAsync(winrt::Windows::Foundation::DateTime const& timeToShow, winrt::Windows::Foundation::TimeSpan const& duration) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Appointments::IAppointmentManagerStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IAppointmentManagerStatics2
    {
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncAction) ShowAppointmentDetailsAsync(param::hstring const& appointmentId) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncAction) ShowAppointmentDetailsAsync(param::hstring const& appointmentId, winrt::Windows::Foundation::DateTime const& instanceStartDate) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<hstring>) ShowEditNewAppointmentAsync(winrt::Windows::ApplicationModel::Appointments::Appointment const& appointment) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Appointments::AppointmentStore>) RequestStoreAsync(winrt::Windows::ApplicationModel::Appointments::AppointmentStoreAccessType const& options) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Appointments::IAppointmentManagerStatics2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentManagerStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IAppointmentManagerStatics3
    {
        WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Appointments::AppointmentManagerForUser) GetForUser(winrt::Windows::System::User const& user) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Appointments::IAppointmentManagerStatics3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentManagerStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IAppointmentParticipant
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DisplayName() const;
        WINRT_IMPL_AUTO(void) DisplayName(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Address() const;
        WINRT_IMPL_AUTO(void) Address(param::hstring const& value) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Appointments::IAppointmentParticipant>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentParticipant<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Subject() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Location() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) StartTime() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Duration() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Reminder() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) BusyStatus() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Sensitivity() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) OriginalStartTime() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) IsResponseRequested() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AllowNewTimeProposal() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AllDay() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Details() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) OnlineMeetingLink() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ReplyTime() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Organizer() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) UserResponse() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) HasInvitees() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) IsCanceledMeeting() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) IsOrganizedByUser() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Recurrence() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Uri() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Invitees() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<hstring>) DefaultProperties() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ChangeNumber() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) RemoteChangeNumber() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DetailsKind() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IAppointmentRecurrence
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Appointments::AppointmentRecurrenceUnit) Unit() const;
        WINRT_IMPL_AUTO(void) Unit(winrt::Windows::ApplicationModel::Appointments::AppointmentRecurrenceUnit const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::IReference<uint32_t>) Occurrences() const;
        WINRT_IMPL_AUTO(void) Occurrences(winrt::Windows::Foundation::IReference<uint32_t> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::DateTime>) Until() const;
        WINRT_IMPL_AUTO(void) Until(winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::DateTime> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) Interval() const;
        WINRT_IMPL_AUTO(void) Interval(uint32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Appointments::AppointmentDaysOfWeek) DaysOfWeek() const;
        WINRT_IMPL_AUTO(void) DaysOfWeek(winrt::Windows::ApplicationModel::Appointments::AppointmentDaysOfWeek const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Appointments::AppointmentWeekOfMonth) WeekOfMonth() const;
        WINRT_IMPL_AUTO(void) WeekOfMonth(winrt::Windows::ApplicationModel::Appointments::AppointmentWeekOfMonth const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) Month() const;
        WINRT_IMPL_AUTO(void) Month(uint32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) Day() const;
        WINRT_IMPL_AUTO(void) Day(uint32_t value) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Appointments::IAppointmentRecurrence>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentRecurrence<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IAppointmentRecurrence2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Appointments::RecurrenceType) RecurrenceType() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) TimeZone() const;
        WINRT_IMPL_AUTO(void) TimeZone(param::hstring const& value) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Appointments::IAppointmentRecurrence2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentRecurrence2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IAppointmentRecurrence3
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) CalendarIdentifier() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Appointments::IAppointmentRecurrence3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentRecurrence3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IAppointmentStore
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Appointments::AppointmentStoreChangeTracker) ChangeTracker() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Appointments::AppointmentCalendar>) CreateAppointmentCalendarAsync(param::hstring const& name) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Appointments::AppointmentCalendar>) GetAppointmentCalendarAsync(param::hstring const& calendarId) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Appointments::Appointment>) GetAppointmentAsync(param::hstring const& localId) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Appointments::Appointment>) GetAppointmentInstanceAsync(param::hstring const& localId, winrt::Windows::Foundation::DateTime const& instanceStartTime) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::ApplicationModel::Appointments::AppointmentCalendar>>) FindAppointmentCalendarsAsync() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::ApplicationModel::Appointments::AppointmentCalendar>>) FindAppointmentCalendarsAsync(winrt::Windows::ApplicationModel::Appointments::FindAppointmentCalendarsOptions const& options) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::ApplicationModel::Appointments::Appointment>>) FindAppointmentsAsync(winrt::Windows::Foundation::DateTime const& rangeStart, winrt::Windows::Foundation::TimeSpan const& rangeLength) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::ApplicationModel::Appointments::Appointment>>) FindAppointmentsAsync(winrt::Windows::Foundation::DateTime const& rangeStart, winrt::Windows::Foundation::TimeSpan const& rangeLength, winrt::Windows::ApplicationModel::Appointments::FindAppointmentsOptions const& options) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Appointments::AppointmentConflictResult>) FindConflictAsync(winrt::Windows::ApplicationModel::Appointments::Appointment const& appointment) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Appointments::AppointmentConflictResult>) FindConflictAsync(winrt::Windows::ApplicationModel::Appointments::Appointment const& appointment, winrt::Windows::Foundation::DateTime const& instanceStartTime) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncAction) MoveAppointmentAsync(winrt::Windows::ApplicationModel::Appointments::Appointment const& appointment, winrt::Windows::ApplicationModel::Appointments::AppointmentCalendar const& destinationCalendar) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<hstring>) ShowAddAppointmentAsync(winrt::Windows::ApplicationModel::Appointments::Appointment const& appointment, winrt::Windows::Foundation::Rect const& selection) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<hstring>) ShowReplaceAppointmentAsync(param::hstring const& localId, winrt::Windows::ApplicationModel::Appointments::Appointment const& appointment, winrt::Windows::Foundation::Rect const& selection) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<hstring>) ShowReplaceAppointmentAsync(param::hstring const& localId, winrt::Windows::ApplicationModel::Appointments::Appointment const& appointment, winrt::Windows::Foundation::Rect const& selection, winrt::Windows::UI::Popups::Placement const& preferredPlacement, winrt::Windows::Foundation::DateTime const& instanceStartDate) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<bool>) ShowRemoveAppointmentAsync(param::hstring const& localId, winrt::Windows::Foundation::Rect const& selection) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<bool>) ShowRemoveAppointmentAsync(param::hstring const& localId, winrt::Windows::Foundation::Rect const& selection, winrt::Windows::UI::Popups::Placement const& preferredPlacement, winrt::Windows::Foundation::DateTime const& instanceStartDate) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncAction) ShowAppointmentDetailsAsync(param::hstring const& localId) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncAction) ShowAppointmentDetailsAsync(param::hstring const& localId, winrt::Windows::Foundation::DateTime const& instanceStartDate) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<hstring>) ShowEditNewAppointmentAsync(winrt::Windows::ApplicationModel::Appointments::Appointment const& appointment) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<hstring>>) FindLocalIdsFromRoamingIdAsync(param::hstring const& roamingId) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Appointments::IAppointmentStore>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentStore<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IAppointmentStore2
    {
        WINRT_IMPL_AUTO(winrt::event_token) StoreChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Appointments::AppointmentStore, winrt::Windows::ApplicationModel::Appointments::AppointmentStoreChangedEventArgs> const& pHandler) const;
        using StoreChanged_revoker = impl::event_revoker<winrt::Windows::ApplicationModel::Appointments::IAppointmentStore2, &impl::abi_t<winrt::Windows::ApplicationModel::Appointments::IAppointmentStore2>::remove_StoreChanged>;
        [[nodiscard]] StoreChanged_revoker StoreChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Appointments::AppointmentStore, winrt::Windows::ApplicationModel::Appointments::AppointmentStoreChangedEventArgs> const& pHandler) const;
        WINRT_IMPL_AUTO(void) StoreChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Appointments::AppointmentCalendar>) CreateAppointmentCalendarAsync(param::hstring const& name, param::hstring const& userDataAccountId) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Appointments::IAppointmentStore2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentStore2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IAppointmentStore3
    {
        WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Appointments::AppointmentStoreChangeTracker) GetChangeTracker(param::hstring const& identity) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Appointments::IAppointmentStore3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentStore3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IAppointmentStoreChange
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Appointments::Appointment) Appointment() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Appointments::AppointmentStoreChangeType) ChangeType() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreChange>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentStoreChange<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IAppointmentStoreChange2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Appointments::AppointmentCalendar) AppointmentCalendar() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreChange2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentStoreChange2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IAppointmentStoreChangeReader
    {
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::ApplicationModel::Appointments::AppointmentStoreChange>>) ReadBatchAsync() const;
        WINRT_IMPL_AUTO(void) AcceptChanges() const;
        WINRT_IMPL_AUTO(void) AcceptChangesThrough(winrt::Windows::ApplicationModel::Appointments::AppointmentStoreChange const& lastChangeToAccept) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreChangeReader>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentStoreChangeReader<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IAppointmentStoreChangeTracker
    {
        WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Appointments::AppointmentStoreChangeReader) GetChangeReader() const;
        WINRT_IMPL_AUTO(void) Enable() const;
        WINRT_IMPL_AUTO(void) Reset() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentStoreChangeTracker<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IAppointmentStoreChangeTracker2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsTracking() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentStoreChangeTracker2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IAppointmentStoreChangedDeferral
    {
        WINRT_IMPL_AUTO(void) Complete() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreChangedDeferral>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentStoreChangedDeferral<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IAppointmentStoreChangedEventArgs
    {
        WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Appointments::AppointmentStoreChangedDeferral) GetDeferral() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentStoreChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IAppointmentStoreNotificationTriggerDetails
    {
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreNotificationTriggerDetails>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentStoreNotificationTriggerDetails<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IFindAppointmentsOptions
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<hstring>) CalendarIds() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<hstring>) FetchProperties() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IncludeHidden() const;
        WINRT_IMPL_AUTO(void) IncludeHidden(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) MaxCount() const;
        WINRT_IMPL_AUTO(void) MaxCount(uint32_t value) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Appointments::IFindAppointmentsOptions>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IFindAppointmentsOptions<D>;
    };
}
#endif
