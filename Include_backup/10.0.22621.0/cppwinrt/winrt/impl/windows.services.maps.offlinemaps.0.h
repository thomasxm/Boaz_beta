// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Services_Maps_OfflineMaps_0_H
#define WINRT_Windows_Services_Maps_OfflineMaps_0_H
WINRT_EXPORT namespace winrt::Windows::Devices::Geolocation
{
    struct GeoboundingBox;
    struct Geocircle;
    struct Geopoint;
}
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    template <typename TResult> struct __declspec(empty_bases) IAsyncOperation;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IVectorView;
}
WINRT_EXPORT namespace winrt::Windows::Services::Maps::OfflineMaps
{
    enum class OfflineMapPackageQueryStatus : int32_t
    {
        Success = 0,
        UnknownError = 1,
        InvalidCredentials = 2,
        NetworkFailure = 3,
    };
    enum class OfflineMapPackageStartDownloadStatus : int32_t
    {
        Success = 0,
        UnknownError = 1,
        InvalidCredentials = 2,
        DeniedWithoutCapability = 3,
    };
    enum class OfflineMapPackageStatus : int32_t
    {
        NotDownloaded = 0,
        Downloading = 1,
        Downloaded = 2,
        Deleting = 3,
    };
    struct IOfflineMapPackage;
    struct IOfflineMapPackageQueryResult;
    struct IOfflineMapPackageStartDownloadResult;
    struct IOfflineMapPackageStatics;
    struct OfflineMapPackage;
    struct OfflineMapPackageQueryResult;
    struct OfflineMapPackageStartDownloadResult;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::Services::Maps::OfflineMaps::IOfflineMapPackage>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Services::Maps::OfflineMaps::IOfflineMapPackageQueryResult>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStartDownloadResult>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Services::Maps::OfflineMaps::OfflineMapPackage>{ using type = class_category; };
    template <> struct category<winrt::Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult>{ using type = class_category; };
    template <> struct category<winrt::Windows::Services::Maps::OfflineMaps::OfflineMapPackageStartDownloadResult>{ using type = class_category; };
    template <> struct category<winrt::Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryStatus>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Services::Maps::OfflineMaps::OfflineMapPackageStartDownloadStatus>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Services::Maps::OfflineMaps::OfflineMapPackageStatus>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Maps::OfflineMaps::OfflineMapPackage> = L"Windows.Services.Maps.OfflineMaps.OfflineMapPackage";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult> = L"Windows.Services.Maps.OfflineMaps.OfflineMapPackageQueryResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Maps::OfflineMaps::OfflineMapPackageStartDownloadResult> = L"Windows.Services.Maps.OfflineMaps.OfflineMapPackageStartDownloadResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryStatus> = L"Windows.Services.Maps.OfflineMaps.OfflineMapPackageQueryStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Maps::OfflineMaps::OfflineMapPackageStartDownloadStatus> = L"Windows.Services.Maps.OfflineMaps.OfflineMapPackageStartDownloadStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Maps::OfflineMaps::OfflineMapPackageStatus> = L"Windows.Services.Maps.OfflineMaps.OfflineMapPackageStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Maps::OfflineMaps::IOfflineMapPackage> = L"Windows.Services.Maps.OfflineMaps.IOfflineMapPackage";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Maps::OfflineMaps::IOfflineMapPackageQueryResult> = L"Windows.Services.Maps.OfflineMaps.IOfflineMapPackageQueryResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStartDownloadResult> = L"Windows.Services.Maps.OfflineMaps.IOfflineMapPackageStartDownloadResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStatics> = L"Windows.Services.Maps.OfflineMaps.IOfflineMapPackageStatics";
    template <> inline constexpr guid guid_v<winrt::Windows::Services::Maps::OfflineMaps::IOfflineMapPackage>{ 0xA797673B,0xA5B5,0x4144,{ 0xB5,0x25,0xE6,0x8C,0x88,0x62,0x66,0x4B } }; // A797673B-A5B5-4144-B525-E68C8862664B
    template <> inline constexpr guid guid_v<winrt::Windows::Services::Maps::OfflineMaps::IOfflineMapPackageQueryResult>{ 0x55585411,0x39E1,0x4E41,{ 0xA4,0xE1,0x5F,0x48,0x72,0xBE,0xE1,0x99 } }; // 55585411-39E1-4E41-A4E1-5F4872BEE199
    template <> inline constexpr guid guid_v<winrt::Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStartDownloadResult>{ 0xD965B918,0xD4D6,0x4AFE,{ 0x93,0x78,0x3E,0xC7,0x1E,0xF1,0x1C,0x3D } }; // D965B918-D4D6-4AFE-9378-3EC71EF11C3D
    template <> inline constexpr guid guid_v<winrt::Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStatics>{ 0x185E7922,0xA831,0x4AB0,{ 0x94,0x1F,0x69,0x98,0xFA,0x92,0x92,0x85 } }; // 185E7922-A831-4AB0-941F-6998FA929285
    template <> struct default_interface<winrt::Windows::Services::Maps::OfflineMaps::OfflineMapPackage>{ using type = winrt::Windows::Services::Maps::OfflineMaps::IOfflineMapPackage; };
    template <> struct default_interface<winrt::Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult>{ using type = winrt::Windows::Services::Maps::OfflineMaps::IOfflineMapPackageQueryResult; };
    template <> struct default_interface<winrt::Windows::Services::Maps::OfflineMaps::OfflineMapPackageStartDownloadResult>{ using type = winrt::Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStartDownloadResult; };
    template <> struct abi<winrt::Windows::Services::Maps::OfflineMaps::IOfflineMapPackage>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_EnclosingRegionName(void**) noexcept = 0;
            virtual int32_t __stdcall get_EstimatedSizeInBytes(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall remove_StatusChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_StatusChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall RequestStartDownloadAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Services::Maps::OfflineMaps::IOfflineMapPackageQueryResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Packages(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStartDownloadResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FindPackagesAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindPackagesInBoundingBoxAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindPackagesInGeocircleAsync(void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Services_Maps_OfflineMaps_IOfflineMapPackage
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Services::Maps::OfflineMaps::OfflineMapPackageStatus) Status() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DisplayName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) EnclosingRegionName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint64_t) EstimatedSizeInBytes() const;
        WINRT_IMPL_AUTO(void) StatusChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) StatusChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Services::Maps::OfflineMaps::OfflineMapPackage, winrt::Windows::Foundation::IInspectable> const& value) const;
        using StatusChanged_revoker = impl::event_revoker<winrt::Windows::Services::Maps::OfflineMaps::IOfflineMapPackage, &impl::abi_t<winrt::Windows::Services::Maps::OfflineMaps::IOfflineMapPackage>::remove_StatusChanged>;
        [[nodiscard]] StatusChanged_revoker StatusChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Services::Maps::OfflineMaps::OfflineMapPackage, winrt::Windows::Foundation::IInspectable> const& value) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Services::Maps::OfflineMaps::OfflineMapPackageStartDownloadResult>) RequestStartDownloadAsync() const;
    };
    template <> struct consume<winrt::Windows::Services::Maps::OfflineMaps::IOfflineMapPackage>
    {
        template <typename D> using type = consume_Windows_Services_Maps_OfflineMaps_IOfflineMapPackage<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Maps_OfflineMaps_IOfflineMapPackageQueryResult
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryStatus) Status() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Services::Maps::OfflineMaps::OfflineMapPackage>) Packages() const;
    };
    template <> struct consume<winrt::Windows::Services::Maps::OfflineMaps::IOfflineMapPackageQueryResult>
    {
        template <typename D> using type = consume_Windows_Services_Maps_OfflineMaps_IOfflineMapPackageQueryResult<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Maps_OfflineMaps_IOfflineMapPackageStartDownloadResult
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Services::Maps::OfflineMaps::OfflineMapPackageStartDownloadStatus) Status() const;
    };
    template <> struct consume<winrt::Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStartDownloadResult>
    {
        template <typename D> using type = consume_Windows_Services_Maps_OfflineMaps_IOfflineMapPackageStartDownloadResult<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Maps_OfflineMaps_IOfflineMapPackageStatics
    {
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult>) FindPackagesAsync(winrt::Windows::Devices::Geolocation::Geopoint const& queryPoint) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult>) FindPackagesInBoundingBoxAsync(winrt::Windows::Devices::Geolocation::GeoboundingBox const& queryBoundingBox) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult>) FindPackagesInGeocircleAsync(winrt::Windows::Devices::Geolocation::Geocircle const& queryCircle) const;
    };
    template <> struct consume<winrt::Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStatics>
    {
        template <typename D> using type = consume_Windows_Services_Maps_OfflineMaps_IOfflineMapPackageStatics<D>;
    };
}
#endif
