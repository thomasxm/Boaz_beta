// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Services_Store_0_H
#define WINRT_Windows_Services_Store_0_H
WINRT_EXPORT namespace winrt::Windows::ApplicationModel
{
    struct Package;
}
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct HResult;
    struct IAsyncAction;
    template <typename TResult, typename TProgress> struct __declspec(empty_bases) IAsyncOperationWithProgress;
    template <typename TResult> struct __declspec(empty_bases) IAsyncOperation;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
    struct Uri;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IIterable;
    template <typename K, typename V> struct __declspec(empty_bases) IMapView;
    template <typename T> struct __declspec(empty_bases) IVectorView;
    template <typename T> struct __declspec(empty_bases) IVector;
}
WINRT_EXPORT namespace winrt::Windows::System
{
    struct User;
}
WINRT_EXPORT namespace winrt::Windows::Web::Http
{
    enum class HttpStatusCode : int32_t;
}
WINRT_EXPORT namespace winrt::Windows::Services::Store
{
    enum class StoreCanLicenseStatus : int32_t
    {
        NotLicensableToUser = 0,
        Licensable = 1,
        LicenseActionNotApplicableToProduct = 2,
        NetworkError = 3,
        ServerError = 4,
    };
    enum class StoreConsumableStatus : int32_t
    {
        Succeeded = 0,
        InsufficentQuantity = 1,
        NetworkError = 2,
        ServerError = 3,
    };
    enum class StoreDurationUnit : int32_t
    {
        Minute = 0,
        Hour = 1,
        Day = 2,
        Week = 3,
        Month = 4,
        Year = 5,
    };
    enum class StorePackageUpdateState : int32_t
    {
        Pending = 0,
        Downloading = 1,
        Deploying = 2,
        Completed = 3,
        Canceled = 4,
        OtherError = 5,
        ErrorLowBattery = 6,
        ErrorWiFiRecommended = 7,
        ErrorWiFiRequired = 8,
    };
    enum class StorePurchaseStatus : int32_t
    {
        Succeeded = 0,
        AlreadyPurchased = 1,
        NotPurchased = 2,
        NetworkError = 3,
        ServerError = 4,
    };
    enum class StoreQueueItemExtendedState : int32_t
    {
        ActivePending = 0,
        ActiveStarting = 1,
        ActiveAcquiringLicense = 2,
        ActiveDownloading = 3,
        ActiveRestoringData = 4,
        ActiveInstalling = 5,
        Completed = 6,
        Canceled = 7,
        Paused = 8,
        Error = 9,
        PausedPackagesInUse = 10,
        PausedLowBattery = 11,
        PausedWiFiRecommended = 12,
        PausedWiFiRequired = 13,
        PausedReadyToInstall = 14,
    };
    enum class StoreQueueItemKind : int32_t
    {
        Install = 0,
        Update = 1,
        Repair = 2,
    };
    enum class StoreQueueItemState : int32_t
    {
        Active = 0,
        Completed = 1,
        Canceled = 2,
        Error = 3,
        Paused = 4,
    };
    enum class StoreRateAndReviewStatus : int32_t
    {
        Succeeded = 0,
        CanceledByUser = 1,
        NetworkError = 2,
        Error = 3,
    };
    enum class StoreUninstallStorePackageStatus : int32_t
    {
        Succeeded = 0,
        CanceledByUser = 1,
        NetworkError = 2,
        UninstallNotApplicable = 3,
        Error = 4,
    };
    struct IStoreAcquireLicenseResult;
    struct IStoreAppLicense;
    struct IStoreAppLicense2;
    struct IStoreAvailability;
    struct IStoreCanAcquireLicenseResult;
    struct IStoreCollectionData;
    struct IStoreConsumableResult;
    struct IStoreContext;
    struct IStoreContext2;
    struct IStoreContext3;
    struct IStoreContext4;
    struct IStoreContext5;
    struct IStoreContextStatics;
    struct IStoreImage;
    struct IStoreLicense;
    struct IStorePackageInstallOptions;
    struct IStorePackageLicense;
    struct IStorePackageUpdate;
    struct IStorePackageUpdateResult;
    struct IStorePackageUpdateResult2;
    struct IStorePrice;
    struct IStorePrice2;
    struct IStoreProduct;
    struct IStoreProductOptions;
    struct IStoreProductPagedQueryResult;
    struct IStoreProductQueryResult;
    struct IStoreProductResult;
    struct IStorePurchaseProperties;
    struct IStorePurchasePropertiesFactory;
    struct IStorePurchaseResult;
    struct IStoreQueueItem;
    struct IStoreQueueItem2;
    struct IStoreQueueItemCompletedEventArgs;
    struct IStoreQueueItemStatus;
    struct IStoreRateAndReviewResult;
    struct IStoreRequestHelperStatics;
    struct IStoreSendRequestResult;
    struct IStoreSendRequestResult2;
    struct IStoreSku;
    struct IStoreSubscriptionInfo;
    struct IStoreUninstallStorePackageResult;
    struct IStoreVideo;
    struct StoreAcquireLicenseResult;
    struct StoreAppLicense;
    struct StoreAvailability;
    struct StoreCanAcquireLicenseResult;
    struct StoreCollectionData;
    struct StoreConsumableResult;
    struct StoreContext;
    struct StoreImage;
    struct StoreLicense;
    struct StorePackageInstallOptions;
    struct StorePackageLicense;
    struct StorePackageUpdate;
    struct StorePackageUpdateResult;
    struct StorePrice;
    struct StoreProduct;
    struct StoreProductOptions;
    struct StoreProductPagedQueryResult;
    struct StoreProductQueryResult;
    struct StoreProductResult;
    struct StorePurchaseProperties;
    struct StorePurchaseResult;
    struct StoreQueueItem;
    struct StoreQueueItemCompletedEventArgs;
    struct StoreQueueItemStatus;
    struct StoreRateAndReviewResult;
    struct StoreRequestHelper;
    struct StoreSendRequestResult;
    struct StoreSku;
    struct StoreSubscriptionInfo;
    struct StoreUninstallStorePackageResult;
    struct StoreVideo;
    struct StorePackageUpdateStatus;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::Services::Store::IStoreAcquireLicenseResult>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Services::Store::IStoreAppLicense>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Services::Store::IStoreAppLicense2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Services::Store::IStoreAvailability>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Services::Store::IStoreCanAcquireLicenseResult>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Services::Store::IStoreCollectionData>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Services::Store::IStoreConsumableResult>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Services::Store::IStoreContext>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Services::Store::IStoreContext2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Services::Store::IStoreContext3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Services::Store::IStoreContext4>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Services::Store::IStoreContext5>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Services::Store::IStoreContextStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Services::Store::IStoreImage>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Services::Store::IStoreLicense>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Services::Store::IStorePackageInstallOptions>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Services::Store::IStorePackageLicense>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Services::Store::IStorePackageUpdate>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Services::Store::IStorePackageUpdateResult>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Services::Store::IStorePackageUpdateResult2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Services::Store::IStorePrice>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Services::Store::IStorePrice2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Services::Store::IStoreProduct>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Services::Store::IStoreProductOptions>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Services::Store::IStoreProductPagedQueryResult>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Services::Store::IStoreProductQueryResult>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Services::Store::IStoreProductResult>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Services::Store::IStorePurchaseProperties>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Services::Store::IStorePurchasePropertiesFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Services::Store::IStorePurchaseResult>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Services::Store::IStoreQueueItem>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Services::Store::IStoreQueueItem2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Services::Store::IStoreQueueItemCompletedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Services::Store::IStoreQueueItemStatus>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Services::Store::IStoreRateAndReviewResult>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Services::Store::IStoreRequestHelperStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Services::Store::IStoreSendRequestResult>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Services::Store::IStoreSendRequestResult2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Services::Store::IStoreSku>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Services::Store::IStoreSubscriptionInfo>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Services::Store::IStoreUninstallStorePackageResult>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Services::Store::IStoreVideo>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Services::Store::StoreAcquireLicenseResult>{ using type = class_category; };
    template <> struct category<winrt::Windows::Services::Store::StoreAppLicense>{ using type = class_category; };
    template <> struct category<winrt::Windows::Services::Store::StoreAvailability>{ using type = class_category; };
    template <> struct category<winrt::Windows::Services::Store::StoreCanAcquireLicenseResult>{ using type = class_category; };
    template <> struct category<winrt::Windows::Services::Store::StoreCollectionData>{ using type = class_category; };
    template <> struct category<winrt::Windows::Services::Store::StoreConsumableResult>{ using type = class_category; };
    template <> struct category<winrt::Windows::Services::Store::StoreContext>{ using type = class_category; };
    template <> struct category<winrt::Windows::Services::Store::StoreImage>{ using type = class_category; };
    template <> struct category<winrt::Windows::Services::Store::StoreLicense>{ using type = class_category; };
    template <> struct category<winrt::Windows::Services::Store::StorePackageInstallOptions>{ using type = class_category; };
    template <> struct category<winrt::Windows::Services::Store::StorePackageLicense>{ using type = class_category; };
    template <> struct category<winrt::Windows::Services::Store::StorePackageUpdate>{ using type = class_category; };
    template <> struct category<winrt::Windows::Services::Store::StorePackageUpdateResult>{ using type = class_category; };
    template <> struct category<winrt::Windows::Services::Store::StorePrice>{ using type = class_category; };
    template <> struct category<winrt::Windows::Services::Store::StoreProduct>{ using type = class_category; };
    template <> struct category<winrt::Windows::Services::Store::StoreProductOptions>{ using type = class_category; };
    template <> struct category<winrt::Windows::Services::Store::StoreProductPagedQueryResult>{ using type = class_category; };
    template <> struct category<winrt::Windows::Services::Store::StoreProductQueryResult>{ using type = class_category; };
    template <> struct category<winrt::Windows::Services::Store::StoreProductResult>{ using type = class_category; };
    template <> struct category<winrt::Windows::Services::Store::StorePurchaseProperties>{ using type = class_category; };
    template <> struct category<winrt::Windows::Services::Store::StorePurchaseResult>{ using type = class_category; };
    template <> struct category<winrt::Windows::Services::Store::StoreQueueItem>{ using type = class_category; };
    template <> struct category<winrt::Windows::Services::Store::StoreQueueItemCompletedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Services::Store::StoreQueueItemStatus>{ using type = class_category; };
    template <> struct category<winrt::Windows::Services::Store::StoreRateAndReviewResult>{ using type = class_category; };
    template <> struct category<winrt::Windows::Services::Store::StoreRequestHelper>{ using type = class_category; };
    template <> struct category<winrt::Windows::Services::Store::StoreSendRequestResult>{ using type = class_category; };
    template <> struct category<winrt::Windows::Services::Store::StoreSku>{ using type = class_category; };
    template <> struct category<winrt::Windows::Services::Store::StoreSubscriptionInfo>{ using type = class_category; };
    template <> struct category<winrt::Windows::Services::Store::StoreUninstallStorePackageResult>{ using type = class_category; };
    template <> struct category<winrt::Windows::Services::Store::StoreVideo>{ using type = class_category; };
    template <> struct category<winrt::Windows::Services::Store::StoreCanLicenseStatus>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Services::Store::StoreConsumableStatus>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Services::Store::StoreDurationUnit>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Services::Store::StorePackageUpdateState>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Services::Store::StorePurchaseStatus>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Services::Store::StoreQueueItemExtendedState>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Services::Store::StoreQueueItemKind>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Services::Store::StoreQueueItemState>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Services::Store::StoreRateAndReviewStatus>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Services::Store::StoreUninstallStorePackageStatus>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Services::Store::StorePackageUpdateStatus>{ using type = struct_category<hstring, uint64_t, uint64_t, double, double, winrt::Windows::Services::Store::StorePackageUpdateState>; };
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::StoreAcquireLicenseResult> = L"Windows.Services.Store.StoreAcquireLicenseResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::StoreAppLicense> = L"Windows.Services.Store.StoreAppLicense";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::StoreAvailability> = L"Windows.Services.Store.StoreAvailability";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::StoreCanAcquireLicenseResult> = L"Windows.Services.Store.StoreCanAcquireLicenseResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::StoreCollectionData> = L"Windows.Services.Store.StoreCollectionData";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::StoreConsumableResult> = L"Windows.Services.Store.StoreConsumableResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::StoreContext> = L"Windows.Services.Store.StoreContext";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::StoreImage> = L"Windows.Services.Store.StoreImage";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::StoreLicense> = L"Windows.Services.Store.StoreLicense";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::StorePackageInstallOptions> = L"Windows.Services.Store.StorePackageInstallOptions";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::StorePackageLicense> = L"Windows.Services.Store.StorePackageLicense";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::StorePackageUpdate> = L"Windows.Services.Store.StorePackageUpdate";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::StorePackageUpdateResult> = L"Windows.Services.Store.StorePackageUpdateResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::StorePrice> = L"Windows.Services.Store.StorePrice";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::StoreProduct> = L"Windows.Services.Store.StoreProduct";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::StoreProductOptions> = L"Windows.Services.Store.StoreProductOptions";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::StoreProductPagedQueryResult> = L"Windows.Services.Store.StoreProductPagedQueryResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::StoreProductQueryResult> = L"Windows.Services.Store.StoreProductQueryResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::StoreProductResult> = L"Windows.Services.Store.StoreProductResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::StorePurchaseProperties> = L"Windows.Services.Store.StorePurchaseProperties";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::StorePurchaseResult> = L"Windows.Services.Store.StorePurchaseResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::StoreQueueItem> = L"Windows.Services.Store.StoreQueueItem";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::StoreQueueItemCompletedEventArgs> = L"Windows.Services.Store.StoreQueueItemCompletedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::StoreQueueItemStatus> = L"Windows.Services.Store.StoreQueueItemStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::StoreRateAndReviewResult> = L"Windows.Services.Store.StoreRateAndReviewResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::StoreRequestHelper> = L"Windows.Services.Store.StoreRequestHelper";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::StoreSendRequestResult> = L"Windows.Services.Store.StoreSendRequestResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::StoreSku> = L"Windows.Services.Store.StoreSku";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::StoreSubscriptionInfo> = L"Windows.Services.Store.StoreSubscriptionInfo";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::StoreUninstallStorePackageResult> = L"Windows.Services.Store.StoreUninstallStorePackageResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::StoreVideo> = L"Windows.Services.Store.StoreVideo";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::StoreCanLicenseStatus> = L"Windows.Services.Store.StoreCanLicenseStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::StoreConsumableStatus> = L"Windows.Services.Store.StoreConsumableStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::StoreDurationUnit> = L"Windows.Services.Store.StoreDurationUnit";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::StorePackageUpdateState> = L"Windows.Services.Store.StorePackageUpdateState";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::StorePurchaseStatus> = L"Windows.Services.Store.StorePurchaseStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::StoreQueueItemExtendedState> = L"Windows.Services.Store.StoreQueueItemExtendedState";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::StoreQueueItemKind> = L"Windows.Services.Store.StoreQueueItemKind";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::StoreQueueItemState> = L"Windows.Services.Store.StoreQueueItemState";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::StoreRateAndReviewStatus> = L"Windows.Services.Store.StoreRateAndReviewStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::StoreUninstallStorePackageStatus> = L"Windows.Services.Store.StoreUninstallStorePackageStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::StorePackageUpdateStatus> = L"Windows.Services.Store.StorePackageUpdateStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::IStoreAcquireLicenseResult> = L"Windows.Services.Store.IStoreAcquireLicenseResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::IStoreAppLicense> = L"Windows.Services.Store.IStoreAppLicense";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::IStoreAppLicense2> = L"Windows.Services.Store.IStoreAppLicense2";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::IStoreAvailability> = L"Windows.Services.Store.IStoreAvailability";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::IStoreCanAcquireLicenseResult> = L"Windows.Services.Store.IStoreCanAcquireLicenseResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::IStoreCollectionData> = L"Windows.Services.Store.IStoreCollectionData";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::IStoreConsumableResult> = L"Windows.Services.Store.IStoreConsumableResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::IStoreContext> = L"Windows.Services.Store.IStoreContext";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::IStoreContext2> = L"Windows.Services.Store.IStoreContext2";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::IStoreContext3> = L"Windows.Services.Store.IStoreContext3";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::IStoreContext4> = L"Windows.Services.Store.IStoreContext4";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::IStoreContext5> = L"Windows.Services.Store.IStoreContext5";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::IStoreContextStatics> = L"Windows.Services.Store.IStoreContextStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::IStoreImage> = L"Windows.Services.Store.IStoreImage";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::IStoreLicense> = L"Windows.Services.Store.IStoreLicense";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::IStorePackageInstallOptions> = L"Windows.Services.Store.IStorePackageInstallOptions";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::IStorePackageLicense> = L"Windows.Services.Store.IStorePackageLicense";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::IStorePackageUpdate> = L"Windows.Services.Store.IStorePackageUpdate";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::IStorePackageUpdateResult> = L"Windows.Services.Store.IStorePackageUpdateResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::IStorePackageUpdateResult2> = L"Windows.Services.Store.IStorePackageUpdateResult2";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::IStorePrice> = L"Windows.Services.Store.IStorePrice";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::IStorePrice2> = L"Windows.Services.Store.IStorePrice2";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::IStoreProduct> = L"Windows.Services.Store.IStoreProduct";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::IStoreProductOptions> = L"Windows.Services.Store.IStoreProductOptions";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::IStoreProductPagedQueryResult> = L"Windows.Services.Store.IStoreProductPagedQueryResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::IStoreProductQueryResult> = L"Windows.Services.Store.IStoreProductQueryResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::IStoreProductResult> = L"Windows.Services.Store.IStoreProductResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::IStorePurchaseProperties> = L"Windows.Services.Store.IStorePurchaseProperties";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::IStorePurchasePropertiesFactory> = L"Windows.Services.Store.IStorePurchasePropertiesFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::IStorePurchaseResult> = L"Windows.Services.Store.IStorePurchaseResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::IStoreQueueItem> = L"Windows.Services.Store.IStoreQueueItem";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::IStoreQueueItem2> = L"Windows.Services.Store.IStoreQueueItem2";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::IStoreQueueItemCompletedEventArgs> = L"Windows.Services.Store.IStoreQueueItemCompletedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::IStoreQueueItemStatus> = L"Windows.Services.Store.IStoreQueueItemStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::IStoreRateAndReviewResult> = L"Windows.Services.Store.IStoreRateAndReviewResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::IStoreRequestHelperStatics> = L"Windows.Services.Store.IStoreRequestHelperStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::IStoreSendRequestResult> = L"Windows.Services.Store.IStoreSendRequestResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::IStoreSendRequestResult2> = L"Windows.Services.Store.IStoreSendRequestResult2";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::IStoreSku> = L"Windows.Services.Store.IStoreSku";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::IStoreSubscriptionInfo> = L"Windows.Services.Store.IStoreSubscriptionInfo";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::IStoreUninstallStorePackageResult> = L"Windows.Services.Store.IStoreUninstallStorePackageResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Store::IStoreVideo> = L"Windows.Services.Store.IStoreVideo";
    template <> inline constexpr guid guid_v<winrt::Windows::Services::Store::IStoreAcquireLicenseResult>{ 0xFBD7946D,0xF040,0x4CB3,{ 0x9A,0x39,0x29,0xBC,0xEC,0xDB,0xE2,0x2D } }; // FBD7946D-F040-4CB3-9A39-29BCECDBE22D
    template <> inline constexpr guid guid_v<winrt::Windows::Services::Store::IStoreAppLicense>{ 0xF389F9DE,0x73C0,0x45CE,{ 0x9B,0xAB,0xB2,0xFE,0x3E,0x5E,0xAF,0xD3 } }; // F389F9DE-73C0-45CE-9BAB-B2FE3E5EAFD3
    template <> inline constexpr guid guid_v<winrt::Windows::Services::Store::IStoreAppLicense2>{ 0xB4666E91,0x4443,0x40B3,{ 0x99,0x3F,0x28,0x90,0x44,0x35,0xBD,0xC6 } }; // B4666E91-4443-40B3-993F-28904435BDC6
    template <> inline constexpr guid guid_v<winrt::Windows::Services::Store::IStoreAvailability>{ 0xFA060325,0x0FFD,0x4493,{ 0xAD,0x43,0xF1,0xF9,0x91,0x8F,0x69,0xFA } }; // FA060325-0FFD-4493-AD43-F1F9918F69FA
    template <> inline constexpr guid guid_v<winrt::Windows::Services::Store::IStoreCanAcquireLicenseResult>{ 0x3A693DB3,0x0088,0x482F,{ 0x86,0xD5,0xBD,0x46,0x52,0x26,0x63,0xAD } }; // 3A693DB3-0088-482F-86D5-BD46522663AD
    template <> inline constexpr guid guid_v<winrt::Windows::Services::Store::IStoreCollectionData>{ 0x8AA4C3B3,0x5BB3,0x441A,{ 0x2A,0xB4,0x4D,0xAB,0x73,0xD5,0xCE,0x67 } }; // 8AA4C3B3-5BB3-441A-2AB4-4DAB73D5CE67
    template <> inline constexpr guid guid_v<winrt::Windows::Services::Store::IStoreConsumableResult>{ 0xEA5DAB72,0x6A00,0x4052,{ 0xBE,0x5B,0xBF,0xDA,0xB4,0x43,0x33,0x52 } }; // EA5DAB72-6A00-4052-BE5B-BFDAB4433352
    template <> inline constexpr guid guid_v<winrt::Windows::Services::Store::IStoreContext>{ 0xAC98B6BE,0xF4FD,0x4912,{ 0xBA,0xBD,0x50,0x35,0xE5,0xE8,0xBC,0xAB } }; // AC98B6BE-F4FD-4912-BABD-5035E5E8BCAB
    template <> inline constexpr guid guid_v<winrt::Windows::Services::Store::IStoreContext2>{ 0x18BC54DA,0x7BD9,0x452C,{ 0x91,0x16,0x3B,0xBD,0x06,0xFF,0xC6,0x3A } }; // 18BC54DA-7BD9-452C-9116-3BBD06FFC63A
    template <> inline constexpr guid guid_v<winrt::Windows::Services::Store::IStoreContext3>{ 0xE26226CA,0x1A01,0x4730,{ 0x85,0xA6,0xEC,0xC8,0x96,0xE4,0xAE,0x38 } }; // E26226CA-1A01-4730-85A6-ECC896E4AE38
    template <> inline constexpr guid guid_v<winrt::Windows::Services::Store::IStoreContext4>{ 0xAF9C6F69,0xBEA1,0x4BF4,{ 0x8E,0x74,0xAE,0x03,0xE2,0x06,0xC6,0xB0 } }; // AF9C6F69-BEA1-4BF4-8E74-AE03E206C6B0
    template <> inline constexpr guid guid_v<winrt::Windows::Services::Store::IStoreContext5>{ 0x6DE6C52B,0xC43A,0x5953,{ 0xB3,0x9A,0x71,0x64,0x3C,0x57,0xD9,0x6E } }; // 6DE6C52B-C43A-5953-B39A-71643C57D96E
    template <> inline constexpr guid guid_v<winrt::Windows::Services::Store::IStoreContextStatics>{ 0x9C06EE5F,0x15C0,0x4E72,{ 0x93,0x30,0xD6,0x19,0x1C,0xEB,0xD1,0x9C } }; // 9C06EE5F-15C0-4E72-9330-D6191CEBD19C
    template <> inline constexpr guid guid_v<winrt::Windows::Services::Store::IStoreImage>{ 0x081FD248,0xADB4,0x4B64,{ 0xA9,0x93,0x78,0x47,0x89,0x92,0x6E,0xD5 } }; // 081FD248-ADB4-4B64-A993-784789926ED5
    template <> inline constexpr guid guid_v<winrt::Windows::Services::Store::IStoreLicense>{ 0x26DC9579,0x4C4F,0x4F30,{ 0xBC,0x89,0x64,0x9F,0x60,0xE3,0x60,0x55 } }; // 26DC9579-4C4F-4F30-BC89-649F60E36055
    template <> inline constexpr guid guid_v<winrt::Windows::Services::Store::IStorePackageInstallOptions>{ 0x1D3D630C,0x0CCD,0x44DD,{ 0x8C,0x59,0x80,0x81,0x0A,0x72,0x99,0x73 } }; // 1D3D630C-0CCD-44DD-8C59-80810A729973
    template <> inline constexpr guid guid_v<winrt::Windows::Services::Store::IStorePackageLicense>{ 0x0C465714,0x14E1,0x4973,{ 0xBD,0x14,0xF7,0x77,0x24,0x27,0x1E,0x99 } }; // 0C465714-14E1-4973-BD14-F77724271E99
    template <> inline constexpr guid guid_v<winrt::Windows::Services::Store::IStorePackageUpdate>{ 0x140FA150,0x3CBF,0x4A35,{ 0xB9,0x1F,0x48,0x27,0x1C,0x31,0xB0,0x72 } }; // 140FA150-3CBF-4A35-B91F-48271C31B072
    template <> inline constexpr guid guid_v<winrt::Windows::Services::Store::IStorePackageUpdateResult>{ 0xE79142ED,0x61F9,0x4893,{ 0xB4,0xFE,0xCF,0x19,0x16,0x03,0xAF,0x7B } }; // E79142ED-61F9-4893-B4FE-CF191603AF7B
    template <> inline constexpr guid guid_v<winrt::Windows::Services::Store::IStorePackageUpdateResult2>{ 0x071D012E,0xBC62,0x4F2E,{ 0x87,0xEA,0x99,0xD8,0x01,0xAE,0xAF,0x98 } }; // 071D012E-BC62-4F2E-87EA-99D801AEAF98
    template <> inline constexpr guid guid_v<winrt::Windows::Services::Store::IStorePrice>{ 0x55BA94C4,0x15F1,0x407C,{ 0x8F,0x06,0x00,0x63,0x80,0xF4,0xDF,0x0B } }; // 55BA94C4-15F1-407C-8F06-006380F4DF0B
    template <> inline constexpr guid guid_v<winrt::Windows::Services::Store::IStorePrice2>{ 0xF711573C,0x40E6,0x5641,{ 0xB0,0x63,0xF1,0xDF,0x42,0xB2,0xB1,0x2A } }; // F711573C-40E6-5641-B063-F1DF42B2B12A
    template <> inline constexpr guid guid_v<winrt::Windows::Services::Store::IStoreProduct>{ 0x320E2C52,0xD760,0x450A,{ 0xA4,0x2B,0x67,0xD1,0xE9,0x01,0xAC,0x90 } }; // 320E2C52-D760-450A-A42B-67D1E901AC90
    template <> inline constexpr guid guid_v<winrt::Windows::Services::Store::IStoreProductOptions>{ 0x5B34A0F9,0xA113,0x4811,{ 0x83,0x26,0x16,0x19,0x9C,0x92,0x7F,0x31 } }; // 5B34A0F9-A113-4811-8326-16199C927F31
    template <> inline constexpr guid guid_v<winrt::Windows::Services::Store::IStoreProductPagedQueryResult>{ 0xC92718C5,0x4DD5,0x4869,{ 0xA4,0x62,0xEC,0xC6,0x87,0x2E,0x43,0xC5 } }; // C92718C5-4DD5-4869-A462-ECC6872E43C5
    template <> inline constexpr guid guid_v<winrt::Windows::Services::Store::IStoreProductQueryResult>{ 0xD805E6C5,0xD456,0x4FF6,{ 0x80,0x49,0x90,0x76,0xD5,0x16,0x5F,0x73 } }; // D805E6C5-D456-4FF6-8049-9076D5165F73
    template <> inline constexpr guid guid_v<winrt::Windows::Services::Store::IStoreProductResult>{ 0xB7674F73,0x3C87,0x4EE1,{ 0x82,0x01,0xF4,0x28,0x35,0x9B,0xD3,0xAF } }; // B7674F73-3C87-4EE1-8201-F428359BD3AF
    template <> inline constexpr guid guid_v<winrt::Windows::Services::Store::IStorePurchaseProperties>{ 0x836278F3,0xFF87,0x4364,{ 0xA5,0xB4,0xFD,0x21,0x53,0xEB,0xE4,0x3B } }; // 836278F3-FF87-4364-A5B4-FD2153EBE43B
    template <> inline constexpr guid guid_v<winrt::Windows::Services::Store::IStorePurchasePropertiesFactory>{ 0xA768F59E,0xFEFD,0x489F,{ 0x9A,0x17,0x22,0xA5,0x93,0xE6,0x8B,0x9D } }; // A768F59E-FEFD-489F-9A17-22A593E68B9D
    template <> inline constexpr guid guid_v<winrt::Windows::Services::Store::IStorePurchaseResult>{ 0xADD28552,0xF96A,0x463D,{ 0xA7,0xBB,0xC2,0x0B,0x4F,0xCA,0x69,0x52 } }; // ADD28552-F96A-463D-A7BB-C20B4FCA6952
    template <> inline constexpr guid guid_v<winrt::Windows::Services::Store::IStoreQueueItem>{ 0x56D5C32B,0xF830,0x4293,{ 0x91,0x88,0xCA,0xD2,0xDC,0xDE,0x73,0x57 } }; // 56D5C32B-F830-4293-9188-CAD2DCDE7357
    template <> inline constexpr guid guid_v<winrt::Windows::Services::Store::IStoreQueueItem2>{ 0x69491CA8,0x1AD4,0x447C,{ 0xAD,0x8C,0xA9,0x50,0x35,0xF6,0x4D,0x82 } }; // 69491CA8-1AD4-447C-AD8C-A95035F64D82
    template <> inline constexpr guid guid_v<winrt::Windows::Services::Store::IStoreQueueItemCompletedEventArgs>{ 0x1247DF6C,0xB44A,0x439B,{ 0xBB,0x07,0x1D,0x30,0x03,0xD0,0x05,0xC2 } }; // 1247DF6C-B44A-439B-BB07-1D3003D005C2
    template <> inline constexpr guid guid_v<winrt::Windows::Services::Store::IStoreQueueItemStatus>{ 0x9BD6796F,0x9CC3,0x4EC3,{ 0xB2,0xEF,0x7B,0xE4,0x33,0xB3,0x01,0x74 } }; // 9BD6796F-9CC3-4EC3-B2EF-7BE433B30174
    template <> inline constexpr guid guid_v<winrt::Windows::Services::Store::IStoreRateAndReviewResult>{ 0x9D209D56,0xA6B5,0x4121,{ 0x9B,0x61,0xEE,0x6D,0x0F,0xBD,0xBD,0xBB } }; // 9D209D56-A6B5-4121-9B61-EE6D0FBDBDBB
    template <> inline constexpr guid guid_v<winrt::Windows::Services::Store::IStoreRequestHelperStatics>{ 0x6CE5E5F9,0xA0C9,0x4B2C,{ 0x96,0xA6,0xA1,0x71,0xC6,0x30,0x03,0x8D } }; // 6CE5E5F9-A0C9-4B2C-96A6-A171C630038D
    template <> inline constexpr guid guid_v<winrt::Windows::Services::Store::IStoreSendRequestResult>{ 0xC73ABE60,0x8272,0x4502,{ 0x8A,0x69,0x6E,0x75,0x15,0x3A,0x42,0x99 } }; // C73ABE60-8272-4502-8A69-6E75153A4299
    template <> inline constexpr guid guid_v<winrt::Windows::Services::Store::IStoreSendRequestResult2>{ 0x2901296F,0xC0B0,0x49D0,{ 0x8E,0x8D,0xAA,0x94,0x0A,0xF9,0xC1,0x0B } }; // 2901296F-C0B0-49D0-8E8D-AA940AF9C10B
    template <> inline constexpr guid guid_v<winrt::Windows::Services::Store::IStoreSku>{ 0x397E6F55,0x4440,0x4F03,{ 0x86,0x3C,0x91,0xF3,0xFE,0xC8,0x3D,0x79 } }; // 397E6F55-4440-4F03-863C-91F3FEC83D79
    template <> inline constexpr guid guid_v<winrt::Windows::Services::Store::IStoreSubscriptionInfo>{ 0x4189776A,0x0559,0x43AC,{ 0xA9,0xC6,0x3A,0xB0,0x01,0x1F,0xB8,0xEB } }; // 4189776A-0559-43AC-A9C6-3AB0011FB8EB
    template <> inline constexpr guid guid_v<winrt::Windows::Services::Store::IStoreUninstallStorePackageResult>{ 0x9FCA39FD,0x126F,0x4CDA,{ 0xB8,0x01,0x13,0x46,0xB8,0xD0,0xA2,0x60 } }; // 9FCA39FD-126F-4CDA-B801-1346B8D0A260
    template <> inline constexpr guid guid_v<winrt::Windows::Services::Store::IStoreVideo>{ 0xF26CB184,0x6F5E,0x4DC2,{ 0x88,0x6C,0x3C,0x63,0x08,0x3C,0x2F,0x94 } }; // F26CB184-6F5E-4DC2-886C-3C63083C2F94
    template <> struct default_interface<winrt::Windows::Services::Store::StoreAcquireLicenseResult>{ using type = winrt::Windows::Services::Store::IStoreAcquireLicenseResult; };
    template <> struct default_interface<winrt::Windows::Services::Store::StoreAppLicense>{ using type = winrt::Windows::Services::Store::IStoreAppLicense; };
    template <> struct default_interface<winrt::Windows::Services::Store::StoreAvailability>{ using type = winrt::Windows::Services::Store::IStoreAvailability; };
    template <> struct default_interface<winrt::Windows::Services::Store::StoreCanAcquireLicenseResult>{ using type = winrt::Windows::Services::Store::IStoreCanAcquireLicenseResult; };
    template <> struct default_interface<winrt::Windows::Services::Store::StoreCollectionData>{ using type = winrt::Windows::Services::Store::IStoreCollectionData; };
    template <> struct default_interface<winrt::Windows::Services::Store::StoreConsumableResult>{ using type = winrt::Windows::Services::Store::IStoreConsumableResult; };
    template <> struct default_interface<winrt::Windows::Services::Store::StoreContext>{ using type = winrt::Windows::Services::Store::IStoreContext; };
    template <> struct default_interface<winrt::Windows::Services::Store::StoreImage>{ using type = winrt::Windows::Services::Store::IStoreImage; };
    template <> struct default_interface<winrt::Windows::Services::Store::StoreLicense>{ using type = winrt::Windows::Services::Store::IStoreLicense; };
    template <> struct default_interface<winrt::Windows::Services::Store::StorePackageInstallOptions>{ using type = winrt::Windows::Services::Store::IStorePackageInstallOptions; };
    template <> struct default_interface<winrt::Windows::Services::Store::StorePackageLicense>{ using type = winrt::Windows::Services::Store::IStorePackageLicense; };
    template <> struct default_interface<winrt::Windows::Services::Store::StorePackageUpdate>{ using type = winrt::Windows::Services::Store::IStorePackageUpdate; };
    template <> struct default_interface<winrt::Windows::Services::Store::StorePackageUpdateResult>{ using type = winrt::Windows::Services::Store::IStorePackageUpdateResult; };
    template <> struct default_interface<winrt::Windows::Services::Store::StorePrice>{ using type = winrt::Windows::Services::Store::IStorePrice; };
    template <> struct default_interface<winrt::Windows::Services::Store::StoreProduct>{ using type = winrt::Windows::Services::Store::IStoreProduct; };
    template <> struct default_interface<winrt::Windows::Services::Store::StoreProductOptions>{ using type = winrt::Windows::Services::Store::IStoreProductOptions; };
    template <> struct default_interface<winrt::Windows::Services::Store::StoreProductPagedQueryResult>{ using type = winrt::Windows::Services::Store::IStoreProductPagedQueryResult; };
    template <> struct default_interface<winrt::Windows::Services::Store::StoreProductQueryResult>{ using type = winrt::Windows::Services::Store::IStoreProductQueryResult; };
    template <> struct default_interface<winrt::Windows::Services::Store::StoreProductResult>{ using type = winrt::Windows::Services::Store::IStoreProductResult; };
    template <> struct default_interface<winrt::Windows::Services::Store::StorePurchaseProperties>{ using type = winrt::Windows::Services::Store::IStorePurchaseProperties; };
    template <> struct default_interface<winrt::Windows::Services::Store::StorePurchaseResult>{ using type = winrt::Windows::Services::Store::IStorePurchaseResult; };
    template <> struct default_interface<winrt::Windows::Services::Store::StoreQueueItem>{ using type = winrt::Windows::Services::Store::IStoreQueueItem; };
    template <> struct default_interface<winrt::Windows::Services::Store::StoreQueueItemCompletedEventArgs>{ using type = winrt::Windows::Services::Store::IStoreQueueItemCompletedEventArgs; };
    template <> struct default_interface<winrt::Windows::Services::Store::StoreQueueItemStatus>{ using type = winrt::Windows::Services::Store::IStoreQueueItemStatus; };
    template <> struct default_interface<winrt::Windows::Services::Store::StoreRateAndReviewResult>{ using type = winrt::Windows::Services::Store::IStoreRateAndReviewResult; };
    template <> struct default_interface<winrt::Windows::Services::Store::StoreSendRequestResult>{ using type = winrt::Windows::Services::Store::IStoreSendRequestResult; };
    template <> struct default_interface<winrt::Windows::Services::Store::StoreSku>{ using type = winrt::Windows::Services::Store::IStoreSku; };
    template <> struct default_interface<winrt::Windows::Services::Store::StoreSubscriptionInfo>{ using type = winrt::Windows::Services::Store::IStoreSubscriptionInfo; };
    template <> struct default_interface<winrt::Windows::Services::Store::StoreUninstallStorePackageResult>{ using type = winrt::Windows::Services::Store::IStoreUninstallStorePackageResult; };
    template <> struct default_interface<winrt::Windows::Services::Store::StoreVideo>{ using type = winrt::Windows::Services::Store::IStoreVideo; };
    template <> struct abi<winrt::Windows::Services::Store::IStoreAcquireLicenseResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_StorePackageLicense(void**) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedError(winrt::hresult*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Services::Store::IStoreAppLicense>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SkuStoreId(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsActive(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsTrial(bool*) noexcept = 0;
            virtual int32_t __stdcall get_ExpirationDate(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedJsonData(void**) noexcept = 0;
            virtual int32_t __stdcall get_AddOnLicenses(void**) noexcept = 0;
            virtual int32_t __stdcall get_TrialTimeRemaining(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsTrialOwnedByThisUser(bool*) noexcept = 0;
            virtual int32_t __stdcall get_TrialUniqueId(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Services::Store::IStoreAppLicense2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsDiscLicense(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Services::Store::IStoreAvailability>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_StoreId(void**) noexcept = 0;
            virtual int32_t __stdcall get_EndDate(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_Price(void**) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedJsonData(void**) noexcept = 0;
            virtual int32_t __stdcall RequestPurchaseAsync(void**) noexcept = 0;
            virtual int32_t __stdcall RequestPurchaseWithPurchasePropertiesAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Services::Store::IStoreCanAcquireLicenseResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ExtendedError(winrt::hresult*) noexcept = 0;
            virtual int32_t __stdcall get_LicensableSku(void**) noexcept = 0;
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Services::Store::IStoreCollectionData>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsTrial(bool*) noexcept = 0;
            virtual int32_t __stdcall get_CampaignId(void**) noexcept = 0;
            virtual int32_t __stdcall get_DeveloperOfferId(void**) noexcept = 0;
            virtual int32_t __stdcall get_AcquiredDate(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_StartDate(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_EndDate(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_TrialTimeRemaining(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedJsonData(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Services::Store::IStoreConsumableResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_TrackingId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_BalanceRemaining(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedError(winrt::hresult*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Services::Store::IStoreContext>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_User(void**) noexcept = 0;
            virtual int32_t __stdcall add_OfflineLicensesChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_OfflineLicensesChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall GetCustomerPurchaseIdAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetCustomerCollectionsIdAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetAppLicenseAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetStoreProductForCurrentAppAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetStoreProductsAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetAssociatedStoreProductsAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetAssociatedStoreProductsWithPagingAsync(void*, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetUserCollectionAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetUserCollectionWithPagingAsync(void*, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall ReportConsumableFulfillmentAsync(void*, uint32_t, winrt::guid, void**) noexcept = 0;
            virtual int32_t __stdcall GetConsumableBalanceRemainingAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall AcquireStoreLicenseForOptionalPackageAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestPurchaseAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestPurchaseWithPurchasePropertiesAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetAppAndOptionalStorePackageUpdatesAsync(void**) noexcept = 0;
            virtual int32_t __stdcall RequestDownloadStorePackageUpdatesAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestDownloadAndInstallStorePackageUpdatesAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestDownloadAndInstallStorePackagesAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Services::Store::IStoreContext2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FindStoreProductForPackageAsync(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Services::Store::IStoreContext3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CanSilentlyDownloadStorePackageUpdates(bool*) noexcept = 0;
            virtual int32_t __stdcall TrySilentDownloadStorePackageUpdatesAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TrySilentDownloadAndInstallStorePackageUpdatesAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CanAcquireStoreLicenseForOptionalPackageAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CanAcquireStoreLicenseAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetStoreProductsWithOptionsAsync(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetAssociatedStoreQueueItemsAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetStoreQueueItemsAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestDownloadAndInstallStorePackagesWithInstallOptionsAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall DownloadAndInstallStorePackagesAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestUninstallStorePackageAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestUninstallStorePackageByStoreIdAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall UninstallStorePackageAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall UninstallStorePackageByStoreIdAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Services::Store::IStoreContext4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RequestRateAndReviewAppAsync(void**) noexcept = 0;
            virtual int32_t __stdcall SetInstallOrderForAssociatedStoreQueueItemsAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Services::Store::IStoreContext5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetUserPurchaseHistoryAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetAssociatedStoreProductsByInAppOfferTokenAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestPurchaseByInAppOfferTokenAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Services::Store::IStoreContextStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefault(void**) noexcept = 0;
            virtual int32_t __stdcall GetForUser(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Services::Store::IStoreImage>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Uri(void**) noexcept = 0;
            virtual int32_t __stdcall get_ImagePurposeTag(void**) noexcept = 0;
            virtual int32_t __stdcall get_Width(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Height(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Caption(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Services::Store::IStoreLicense>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SkuStoreId(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsActive(bool*) noexcept = 0;
            virtual int32_t __stdcall get_ExpirationDate(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedJsonData(void**) noexcept = 0;
            virtual int32_t __stdcall get_InAppOfferToken(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Services::Store::IStorePackageInstallOptions>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AllowForcedAppRestart(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AllowForcedAppRestart(bool) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Services::Store::IStorePackageLicense>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_LicenseLost(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_LicenseLost(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_Package(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsValid(bool*) noexcept = 0;
            virtual int32_t __stdcall ReleaseLicense() noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Services::Store::IStorePackageUpdate>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Package(void**) noexcept = 0;
            virtual int32_t __stdcall get_Mandatory(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Services::Store::IStorePackageUpdateResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OverallState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_StorePackageUpdateStatuses(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Services::Store::IStorePackageUpdateResult2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_StoreQueueItems(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Services::Store::IStorePrice>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FormattedBasePrice(void**) noexcept = 0;
            virtual int32_t __stdcall get_FormattedPrice(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsOnSale(bool*) noexcept = 0;
            virtual int32_t __stdcall get_SaleEndDate(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_CurrencyCode(void**) noexcept = 0;
            virtual int32_t __stdcall get_FormattedRecurrencePrice(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Services::Store::IStorePrice2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_UnformattedBasePrice(void**) noexcept = 0;
            virtual int32_t __stdcall get_UnformattedPrice(void**) noexcept = 0;
            virtual int32_t __stdcall get_UnformattedRecurrencePrice(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Services::Store::IStoreProduct>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_StoreId(void**) noexcept = 0;
            virtual int32_t __stdcall get_Language(void**) noexcept = 0;
            virtual int32_t __stdcall get_Title(void**) noexcept = 0;
            virtual int32_t __stdcall get_Description(void**) noexcept = 0;
            virtual int32_t __stdcall get_ProductKind(void**) noexcept = 0;
            virtual int32_t __stdcall get_HasDigitalDownload(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Keywords(void**) noexcept = 0;
            virtual int32_t __stdcall get_Images(void**) noexcept = 0;
            virtual int32_t __stdcall get_Videos(void**) noexcept = 0;
            virtual int32_t __stdcall get_Skus(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsInUserCollection(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Price(void**) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedJsonData(void**) noexcept = 0;
            virtual int32_t __stdcall get_LinkUri(void**) noexcept = 0;
            virtual int32_t __stdcall GetIsAnySkuInstalledAsync(void**) noexcept = 0;
            virtual int32_t __stdcall RequestPurchaseAsync(void**) noexcept = 0;
            virtual int32_t __stdcall RequestPurchaseWithPurchasePropertiesAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall get_InAppOfferToken(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Services::Store::IStoreProductOptions>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ActionFilters(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Services::Store::IStoreProductPagedQueryResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Products(void**) noexcept = 0;
            virtual int32_t __stdcall get_HasMoreResults(bool*) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedError(winrt::hresult*) noexcept = 0;
            virtual int32_t __stdcall GetNextAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Services::Store::IStoreProductQueryResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Products(void**) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedError(winrt::hresult*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Services::Store::IStoreProductResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Product(void**) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedError(winrt::hresult*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Services::Store::IStorePurchaseProperties>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall put_Name(void*) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedJsonData(void**) noexcept = 0;
            virtual int32_t __stdcall put_ExtendedJsonData(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Services::Store::IStorePurchasePropertiesFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Services::Store::IStorePurchaseResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedError(winrt::hresult*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Services::Store::IStoreQueueItem>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ProductId(void**) noexcept = 0;
            virtual int32_t __stdcall get_PackageFamilyName(void**) noexcept = 0;
            virtual int32_t __stdcall get_InstallKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetCurrentStatus(void**) noexcept = 0;
            virtual int32_t __stdcall add_Completed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Completed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_StatusChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_StatusChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Services::Store::IStoreQueueItem2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CancelInstallAsync(void**) noexcept = 0;
            virtual int32_t __stdcall PauseInstallAsync(void**) noexcept = 0;
            virtual int32_t __stdcall ResumeInstallAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Services::Store::IStoreQueueItemCompletedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Services::Store::IStoreQueueItemStatus>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PackageInstallState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PackageInstallExtendedState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_UpdateStatus(struct struct_Windows_Services_Store_StorePackageUpdateStatus*) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedError(winrt::hresult*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Services::Store::IStoreRateAndReviewResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ExtendedError(winrt::hresult*) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedJsonData(void**) noexcept = 0;
            virtual int32_t __stdcall get_WasUpdated(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Services::Store::IStoreRequestHelperStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SendRequestAsync(void*, uint32_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Services::Store::IStoreSendRequestResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Response(void**) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedError(winrt::hresult*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Services::Store::IStoreSendRequestResult2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_HttpStatusCode(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Services::Store::IStoreSku>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_StoreId(void**) noexcept = 0;
            virtual int32_t __stdcall get_Language(void**) noexcept = 0;
            virtual int32_t __stdcall get_Title(void**) noexcept = 0;
            virtual int32_t __stdcall get_Description(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsTrial(bool*) noexcept = 0;
            virtual int32_t __stdcall get_CustomDeveloperData(void**) noexcept = 0;
            virtual int32_t __stdcall get_Images(void**) noexcept = 0;
            virtual int32_t __stdcall get_Videos(void**) noexcept = 0;
            virtual int32_t __stdcall get_Availabilities(void**) noexcept = 0;
            virtual int32_t __stdcall get_Price(void**) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedJsonData(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsInUserCollection(bool*) noexcept = 0;
            virtual int32_t __stdcall get_BundledSkus(void**) noexcept = 0;
            virtual int32_t __stdcall get_CollectionData(void**) noexcept = 0;
            virtual int32_t __stdcall GetIsInstalledAsync(void**) noexcept = 0;
            virtual int32_t __stdcall RequestPurchaseAsync(void**) noexcept = 0;
            virtual int32_t __stdcall RequestPurchaseWithPurchasePropertiesAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall get_IsSubscription(bool*) noexcept = 0;
            virtual int32_t __stdcall get_SubscriptionInfo(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Services::Store::IStoreSubscriptionInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BillingPeriod(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_BillingPeriodUnit(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_HasTrialPeriod(bool*) noexcept = 0;
            virtual int32_t __stdcall get_TrialPeriod(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_TrialPeriodUnit(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Services::Store::IStoreUninstallStorePackageResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ExtendedError(winrt::hresult*) noexcept = 0;
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Services::Store::IStoreVideo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Uri(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoPurposeTag(void**) noexcept = 0;
            virtual int32_t __stdcall get_Width(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Height(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Caption(void**) noexcept = 0;
            virtual int32_t __stdcall get_PreviewImage(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Services_Store_IStoreAcquireLicenseResult
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Services::Store::StorePackageLicense) StorePackageLicense() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::hresult) ExtendedError() const;
    };
    template <> struct consume<winrt::Windows::Services::Store::IStoreAcquireLicenseResult>
    {
        template <typename D> using type = consume_Windows_Services_Store_IStoreAcquireLicenseResult<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Store_IStoreAppLicense
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) SkuStoreId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsActive() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsTrial() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::DateTime) ExpirationDate() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ExtendedJsonData() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Windows::Services::Store::StoreLicense>) AddOnLicenses() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::TimeSpan) TrialTimeRemaining() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsTrialOwnedByThisUser() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) TrialUniqueId() const;
    };
    template <> struct consume<winrt::Windows::Services::Store::IStoreAppLicense>
    {
        template <typename D> using type = consume_Windows_Services_Store_IStoreAppLicense<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Store_IStoreAppLicense2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsDiscLicense() const;
    };
    template <> struct consume<winrt::Windows::Services::Store::IStoreAppLicense2>
    {
        template <typename D> using type = consume_Windows_Services_Store_IStoreAppLicense2<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Store_IStoreAvailability
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) StoreId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::DateTime) EndDate() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Services::Store::StorePrice) Price() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ExtendedJsonData() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Services::Store::StorePurchaseResult>) RequestPurchaseAsync() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Services::Store::StorePurchaseResult>) RequestPurchaseAsync(winrt::Windows::Services::Store::StorePurchaseProperties const& storePurchaseProperties) const;
    };
    template <> struct consume<winrt::Windows::Services::Store::IStoreAvailability>
    {
        template <typename D> using type = consume_Windows_Services_Store_IStoreAvailability<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Store_IStoreCanAcquireLicenseResult
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::hresult) ExtendedError() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) LicensableSku() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Services::Store::StoreCanLicenseStatus) Status() const;
    };
    template <> struct consume<winrt::Windows::Services::Store::IStoreCanAcquireLicenseResult>
    {
        template <typename D> using type = consume_Windows_Services_Store_IStoreCanAcquireLicenseResult<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Store_IStoreCollectionData
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsTrial() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) CampaignId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DeveloperOfferId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::DateTime) AcquiredDate() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::DateTime) StartDate() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::DateTime) EndDate() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::TimeSpan) TrialTimeRemaining() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ExtendedJsonData() const;
    };
    template <> struct consume<winrt::Windows::Services::Store::IStoreCollectionData>
    {
        template <typename D> using type = consume_Windows_Services_Store_IStoreCollectionData<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Store_IStoreConsumableResult
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Services::Store::StoreConsumableStatus) Status() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::guid) TrackingId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) BalanceRemaining() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::hresult) ExtendedError() const;
    };
    template <> struct consume<winrt::Windows::Services::Store::IStoreConsumableResult>
    {
        template <typename D> using type = consume_Windows_Services_Store_IStoreConsumableResult<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Store_IStoreContext
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::System::User) User() const;
        WINRT_IMPL_AUTO(winrt::event_token) OfflineLicensesChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Services::Store::StoreContext, winrt::Windows::Foundation::IInspectable> const& handler) const;
        using OfflineLicensesChanged_revoker = impl::event_revoker<winrt::Windows::Services::Store::IStoreContext, &impl::abi_t<winrt::Windows::Services::Store::IStoreContext>::remove_OfflineLicensesChanged>;
        [[nodiscard]] OfflineLicensesChanged_revoker OfflineLicensesChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Services::Store::StoreContext, winrt::Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) OfflineLicensesChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<hstring>) GetCustomerPurchaseIdAsync(param::hstring const& serviceTicket, param::hstring const& publisherUserId) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<hstring>) GetCustomerCollectionsIdAsync(param::hstring const& serviceTicket, param::hstring const& publisherUserId) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Services::Store::StoreAppLicense>) GetAppLicenseAsync() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Services::Store::StoreProductResult>) GetStoreProductForCurrentAppAsync() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Services::Store::StoreProductQueryResult>) GetStoreProductsAsync(param::async_iterable<hstring> const& productKinds, param::async_iterable<hstring> const& storeIds) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Services::Store::StoreProductQueryResult>) GetAssociatedStoreProductsAsync(param::async_iterable<hstring> const& productKinds) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Services::Store::StoreProductPagedQueryResult>) GetAssociatedStoreProductsWithPagingAsync(param::async_iterable<hstring> const& productKinds, uint32_t maxItemsToRetrievePerPage) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Services::Store::StoreProductQueryResult>) GetUserCollectionAsync(param::async_iterable<hstring> const& productKinds) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Services::Store::StoreProductPagedQueryResult>) GetUserCollectionWithPagingAsync(param::async_iterable<hstring> const& productKinds, uint32_t maxItemsToRetrievePerPage) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Services::Store::StoreConsumableResult>) ReportConsumableFulfillmentAsync(param::hstring const& productStoreId, uint32_t quantity, winrt::guid const& trackingId) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Services::Store::StoreConsumableResult>) GetConsumableBalanceRemainingAsync(param::hstring const& productStoreId) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Services::Store::StoreAcquireLicenseResult>) AcquireStoreLicenseForOptionalPackageAsync(winrt::Windows::ApplicationModel::Package const& optionalPackage) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Services::Store::StorePurchaseResult>) RequestPurchaseAsync(param::hstring const& storeId) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Services::Store::StorePurchaseResult>) RequestPurchaseAsync(param::hstring const& storeId, winrt::Windows::Services::Store::StorePurchaseProperties const& storePurchaseProperties) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Services::Store::StorePackageUpdate>>) GetAppAndOptionalStorePackageUpdatesAsync() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Services::Store::StorePackageUpdateResult, winrt::Windows::Services::Store::StorePackageUpdateStatus>) RequestDownloadStorePackageUpdatesAsync(param::async_iterable<winrt::Windows::Services::Store::StorePackageUpdate> const& storePackageUpdates) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Services::Store::StorePackageUpdateResult, winrt::Windows::Services::Store::StorePackageUpdateStatus>) RequestDownloadAndInstallStorePackageUpdatesAsync(param::async_iterable<winrt::Windows::Services::Store::StorePackageUpdate> const& storePackageUpdates) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Services::Store::StorePackageUpdateResult, winrt::Windows::Services::Store::StorePackageUpdateStatus>) RequestDownloadAndInstallStorePackagesAsync(param::async_iterable<hstring> const& storeIds) const;
    };
    template <> struct consume<winrt::Windows::Services::Store::IStoreContext>
    {
        template <typename D> using type = consume_Windows_Services_Store_IStoreContext<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Store_IStoreContext2
    {
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Services::Store::StoreProductResult>) FindStoreProductForPackageAsync(param::async_iterable<hstring> const& productKinds, winrt::Windows::ApplicationModel::Package const& package) const;
    };
    template <> struct consume<winrt::Windows::Services::Store::IStoreContext2>
    {
        template <typename D> using type = consume_Windows_Services_Store_IStoreContext2<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Store_IStoreContext3
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) CanSilentlyDownloadStorePackageUpdates() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Services::Store::StorePackageUpdateResult, winrt::Windows::Services::Store::StorePackageUpdateStatus>) TrySilentDownloadStorePackageUpdatesAsync(param::async_iterable<winrt::Windows::Services::Store::StorePackageUpdate> const& storePackageUpdates) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Services::Store::StorePackageUpdateResult, winrt::Windows::Services::Store::StorePackageUpdateStatus>) TrySilentDownloadAndInstallStorePackageUpdatesAsync(param::async_iterable<winrt::Windows::Services::Store::StorePackageUpdate> const& storePackageUpdates) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Services::Store::StoreCanAcquireLicenseResult>) CanAcquireStoreLicenseForOptionalPackageAsync(winrt::Windows::ApplicationModel::Package const& optionalPackage) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Services::Store::StoreCanAcquireLicenseResult>) CanAcquireStoreLicenseAsync(param::hstring const& productStoreId) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Services::Store::StoreProductQueryResult>) GetStoreProductsAsync(param::async_iterable<hstring> const& productKinds, param::async_iterable<hstring> const& storeIds, winrt::Windows::Services::Store::StoreProductOptions const& storeProductOptions) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Services::Store::StoreQueueItem>>) GetAssociatedStoreQueueItemsAsync() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Services::Store::StoreQueueItem>>) GetStoreQueueItemsAsync(param::async_iterable<hstring> const& storeIds) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Services::Store::StorePackageUpdateResult, winrt::Windows::Services::Store::StorePackageUpdateStatus>) RequestDownloadAndInstallStorePackagesAsync(param::async_iterable<hstring> const& storeIds, winrt::Windows::Services::Store::StorePackageInstallOptions const& storePackageInstallOptions) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Services::Store::StorePackageUpdateResult, winrt::Windows::Services::Store::StorePackageUpdateStatus>) DownloadAndInstallStorePackagesAsync(param::async_iterable<hstring> const& storeIds) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Services::Store::StoreUninstallStorePackageResult>) RequestUninstallStorePackageAsync(winrt::Windows::ApplicationModel::Package const& package) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Services::Store::StoreUninstallStorePackageResult>) RequestUninstallStorePackageByStoreIdAsync(param::hstring const& storeId) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Services::Store::StoreUninstallStorePackageResult>) UninstallStorePackageAsync(winrt::Windows::ApplicationModel::Package const& package) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Services::Store::StoreUninstallStorePackageResult>) UninstallStorePackageByStoreIdAsync(param::hstring const& storeId) const;
    };
    template <> struct consume<winrt::Windows::Services::Store::IStoreContext3>
    {
        template <typename D> using type = consume_Windows_Services_Store_IStoreContext3<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Store_IStoreContext4
    {
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Services::Store::StoreRateAndReviewResult>) RequestRateAndReviewAppAsync() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Services::Store::StoreQueueItem>>) SetInstallOrderForAssociatedStoreQueueItemsAsync(param::async_iterable<winrt::Windows::Services::Store::StoreQueueItem> const& items) const;
    };
    template <> struct consume<winrt::Windows::Services::Store::IStoreContext4>
    {
        template <typename D> using type = consume_Windows_Services_Store_IStoreContext4<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Store_IStoreContext5
    {
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Services::Store::StoreProductQueryResult>) GetUserPurchaseHistoryAsync(param::async_iterable<hstring> const& productKinds) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Services::Store::StoreProductQueryResult>) GetAssociatedStoreProductsByInAppOfferTokenAsync(param::async_iterable<hstring> const& inAppOfferTokens) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Services::Store::StorePurchaseResult>) RequestPurchaseByInAppOfferTokenAsync(param::hstring const& inAppOfferToken) const;
    };
    template <> struct consume<winrt::Windows::Services::Store::IStoreContext5>
    {
        template <typename D> using type = consume_Windows_Services_Store_IStoreContext5<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Store_IStoreContextStatics
    {
        WINRT_IMPL_AUTO(winrt::Windows::Services::Store::StoreContext) GetDefault() const;
        WINRT_IMPL_AUTO(winrt::Windows::Services::Store::StoreContext) GetForUser(winrt::Windows::System::User const& user) const;
    };
    template <> struct consume<winrt::Windows::Services::Store::IStoreContextStatics>
    {
        template <typename D> using type = consume_Windows_Services_Store_IStoreContextStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Store_IStoreImage
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Uri) Uri() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ImagePurposeTag() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) Width() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) Height() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Caption() const;
    };
    template <> struct consume<winrt::Windows::Services::Store::IStoreImage>
    {
        template <typename D> using type = consume_Windows_Services_Store_IStoreImage<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Store_IStoreLicense
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) SkuStoreId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsActive() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::DateTime) ExpirationDate() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ExtendedJsonData() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) InAppOfferToken() const;
    };
    template <> struct consume<winrt::Windows::Services::Store::IStoreLicense>
    {
        template <typename D> using type = consume_Windows_Services_Store_IStoreLicense<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Store_IStorePackageInstallOptions
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) AllowForcedAppRestart() const;
        WINRT_IMPL_AUTO(void) AllowForcedAppRestart(bool value) const;
    };
    template <> struct consume<winrt::Windows::Services::Store::IStorePackageInstallOptions>
    {
        template <typename D> using type = consume_Windows_Services_Store_IStorePackageInstallOptions<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Store_IStorePackageLicense
    {
        WINRT_IMPL_AUTO(winrt::event_token) LicenseLost(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Services::Store::StorePackageLicense, winrt::Windows::Foundation::IInspectable> const& handler) const;
        using LicenseLost_revoker = impl::event_revoker<winrt::Windows::Services::Store::IStorePackageLicense, &impl::abi_t<winrt::Windows::Services::Store::IStorePackageLicense>::remove_LicenseLost>;
        [[nodiscard]] LicenseLost_revoker LicenseLost(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Services::Store::StorePackageLicense, winrt::Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) LicenseLost(winrt::event_token const& token) const noexcept;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Package) Package() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsValid() const;
        WINRT_IMPL_AUTO(void) ReleaseLicense() const;
    };
    template <> struct consume<winrt::Windows::Services::Store::IStorePackageLicense>
    {
        template <typename D> using type = consume_Windows_Services_Store_IStorePackageLicense<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Store_IStorePackageUpdate
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Package) Package() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Mandatory() const;
    };
    template <> struct consume<winrt::Windows::Services::Store::IStorePackageUpdate>
    {
        template <typename D> using type = consume_Windows_Services_Store_IStorePackageUpdate<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Store_IStorePackageUpdateResult
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Services::Store::StorePackageUpdateState) OverallState() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Services::Store::StorePackageUpdateStatus>) StorePackageUpdateStatuses() const;
    };
    template <> struct consume<winrt::Windows::Services::Store::IStorePackageUpdateResult>
    {
        template <typename D> using type = consume_Windows_Services_Store_IStorePackageUpdateResult<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Store_IStorePackageUpdateResult2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Services::Store::StoreQueueItem>) StoreQueueItems() const;
    };
    template <> struct consume<winrt::Windows::Services::Store::IStorePackageUpdateResult2>
    {
        template <typename D> using type = consume_Windows_Services_Store_IStorePackageUpdateResult2<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Store_IStorePrice
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) FormattedBasePrice() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) FormattedPrice() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsOnSale() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::DateTime) SaleEndDate() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) CurrencyCode() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) FormattedRecurrencePrice() const;
    };
    template <> struct consume<winrt::Windows::Services::Store::IStorePrice>
    {
        template <typename D> using type = consume_Windows_Services_Store_IStorePrice<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Store_IStorePrice2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) UnformattedBasePrice() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) UnformattedPrice() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) UnformattedRecurrencePrice() const;
    };
    template <> struct consume<winrt::Windows::Services::Store::IStorePrice2>
    {
        template <typename D> using type = consume_Windows_Services_Store_IStorePrice2<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Store_IStoreProduct
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) StoreId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Language() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Title() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Description() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ProductKind() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) HasDigitalDownload() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<hstring>) Keywords() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Services::Store::StoreImage>) Images() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Services::Store::StoreVideo>) Videos() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Services::Store::StoreSku>) Skus() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsInUserCollection() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Services::Store::StorePrice) Price() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ExtendedJsonData() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Uri) LinkUri() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<bool>) GetIsAnySkuInstalledAsync() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Services::Store::StorePurchaseResult>) RequestPurchaseAsync() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Services::Store::StorePurchaseResult>) RequestPurchaseAsync(winrt::Windows::Services::Store::StorePurchaseProperties const& storePurchaseProperties) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) InAppOfferToken() const;
    };
    template <> struct consume<winrt::Windows::Services::Store::IStoreProduct>
    {
        template <typename D> using type = consume_Windows_Services_Store_IStoreProduct<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Store_IStoreProductOptions
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<hstring>) ActionFilters() const;
    };
    template <> struct consume<winrt::Windows::Services::Store::IStoreProductOptions>
    {
        template <typename D> using type = consume_Windows_Services_Store_IStoreProductOptions<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Store_IStoreProductPagedQueryResult
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Windows::Services::Store::StoreProduct>) Products() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) HasMoreResults() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::hresult) ExtendedError() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Services::Store::StoreProductPagedQueryResult>) GetNextAsync() const;
    };
    template <> struct consume<winrt::Windows::Services::Store::IStoreProductPagedQueryResult>
    {
        template <typename D> using type = consume_Windows_Services_Store_IStoreProductPagedQueryResult<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Store_IStoreProductQueryResult
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Windows::Services::Store::StoreProduct>) Products() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::hresult) ExtendedError() const;
    };
    template <> struct consume<winrt::Windows::Services::Store::IStoreProductQueryResult>
    {
        template <typename D> using type = consume_Windows_Services_Store_IStoreProductQueryResult<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Store_IStoreProductResult
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Services::Store::StoreProduct) Product() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::hresult) ExtendedError() const;
    };
    template <> struct consume<winrt::Windows::Services::Store::IStoreProductResult>
    {
        template <typename D> using type = consume_Windows_Services_Store_IStoreProductResult<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Store_IStorePurchaseProperties
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Name() const;
        WINRT_IMPL_AUTO(void) Name(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ExtendedJsonData() const;
        WINRT_IMPL_AUTO(void) ExtendedJsonData(param::hstring const& value) const;
    };
    template <> struct consume<winrt::Windows::Services::Store::IStorePurchaseProperties>
    {
        template <typename D> using type = consume_Windows_Services_Store_IStorePurchaseProperties<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Store_IStorePurchasePropertiesFactory
    {
        WINRT_IMPL_AUTO(winrt::Windows::Services::Store::StorePurchaseProperties) Create(param::hstring const& name) const;
    };
    template <> struct consume<winrt::Windows::Services::Store::IStorePurchasePropertiesFactory>
    {
        template <typename D> using type = consume_Windows_Services_Store_IStorePurchasePropertiesFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Store_IStorePurchaseResult
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Services::Store::StorePurchaseStatus) Status() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::hresult) ExtendedError() const;
    };
    template <> struct consume<winrt::Windows::Services::Store::IStorePurchaseResult>
    {
        template <typename D> using type = consume_Windows_Services_Store_IStorePurchaseResult<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Store_IStoreQueueItem
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ProductId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) PackageFamilyName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Services::Store::StoreQueueItemKind) InstallKind() const;
        WINRT_IMPL_AUTO(winrt::Windows::Services::Store::StoreQueueItemStatus) GetCurrentStatus() const;
        WINRT_IMPL_AUTO(winrt::event_token) Completed(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Services::Store::StoreQueueItem, winrt::Windows::Services::Store::StoreQueueItemCompletedEventArgs> const& handler) const;
        using Completed_revoker = impl::event_revoker<winrt::Windows::Services::Store::IStoreQueueItem, &impl::abi_t<winrt::Windows::Services::Store::IStoreQueueItem>::remove_Completed>;
        [[nodiscard]] Completed_revoker Completed(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Services::Store::StoreQueueItem, winrt::Windows::Services::Store::StoreQueueItemCompletedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) Completed(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) StatusChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Services::Store::StoreQueueItem, winrt::Windows::Foundation::IInspectable> const& handler) const;
        using StatusChanged_revoker = impl::event_revoker<winrt::Windows::Services::Store::IStoreQueueItem, &impl::abi_t<winrt::Windows::Services::Store::IStoreQueueItem>::remove_StatusChanged>;
        [[nodiscard]] StatusChanged_revoker StatusChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Services::Store::StoreQueueItem, winrt::Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) StatusChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<winrt::Windows::Services::Store::IStoreQueueItem>
    {
        template <typename D> using type = consume_Windows_Services_Store_IStoreQueueItem<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Store_IStoreQueueItem2
    {
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncAction) CancelInstallAsync() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncAction) PauseInstallAsync() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncAction) ResumeInstallAsync() const;
    };
    template <> struct consume<winrt::Windows::Services::Store::IStoreQueueItem2>
    {
        template <typename D> using type = consume_Windows_Services_Store_IStoreQueueItem2<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Store_IStoreQueueItemCompletedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Services::Store::StoreQueueItemStatus) Status() const;
    };
    template <> struct consume<winrt::Windows::Services::Store::IStoreQueueItemCompletedEventArgs>
    {
        template <typename D> using type = consume_Windows_Services_Store_IStoreQueueItemCompletedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Store_IStoreQueueItemStatus
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Services::Store::StoreQueueItemState) PackageInstallState() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Services::Store::StoreQueueItemExtendedState) PackageInstallExtendedState() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Services::Store::StorePackageUpdateStatus) UpdateStatus() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::hresult) ExtendedError() const;
    };
    template <> struct consume<winrt::Windows::Services::Store::IStoreQueueItemStatus>
    {
        template <typename D> using type = consume_Windows_Services_Store_IStoreQueueItemStatus<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Store_IStoreRateAndReviewResult
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::hresult) ExtendedError() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ExtendedJsonData() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) WasUpdated() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Services::Store::StoreRateAndReviewStatus) Status() const;
    };
    template <> struct consume<winrt::Windows::Services::Store::IStoreRateAndReviewResult>
    {
        template <typename D> using type = consume_Windows_Services_Store_IStoreRateAndReviewResult<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Store_IStoreRequestHelperStatics
    {
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Services::Store::StoreSendRequestResult>) SendRequestAsync(winrt::Windows::Services::Store::StoreContext const& context, uint32_t requestKind, param::hstring const& parametersAsJson) const;
    };
    template <> struct consume<winrt::Windows::Services::Store::IStoreRequestHelperStatics>
    {
        template <typename D> using type = consume_Windows_Services_Store_IStoreRequestHelperStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Store_IStoreSendRequestResult
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Response() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::hresult) ExtendedError() const;
    };
    template <> struct consume<winrt::Windows::Services::Store::IStoreSendRequestResult>
    {
        template <typename D> using type = consume_Windows_Services_Store_IStoreSendRequestResult<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Store_IStoreSendRequestResult2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Web::Http::HttpStatusCode) HttpStatusCode() const;
    };
    template <> struct consume<winrt::Windows::Services::Store::IStoreSendRequestResult2>
    {
        template <typename D> using type = consume_Windows_Services_Store_IStoreSendRequestResult2<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Store_IStoreSku
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) StoreId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Language() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Title() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Description() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsTrial() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) CustomDeveloperData() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Services::Store::StoreImage>) Images() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Services::Store::StoreVideo>) Videos() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Services::Store::StoreAvailability>) Availabilities() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Services::Store::StorePrice) Price() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ExtendedJsonData() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsInUserCollection() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<hstring>) BundledSkus() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Services::Store::StoreCollectionData) CollectionData() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<bool>) GetIsInstalledAsync() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Services::Store::StorePurchaseResult>) RequestPurchaseAsync() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Services::Store::StorePurchaseResult>) RequestPurchaseAsync(winrt::Windows::Services::Store::StorePurchaseProperties const& storePurchaseProperties) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsSubscription() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Services::Store::StoreSubscriptionInfo) SubscriptionInfo() const;
    };
    template <> struct consume<winrt::Windows::Services::Store::IStoreSku>
    {
        template <typename D> using type = consume_Windows_Services_Store_IStoreSku<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Store_IStoreSubscriptionInfo
    {
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) BillingPeriod() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Services::Store::StoreDurationUnit) BillingPeriodUnit() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) HasTrialPeriod() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) TrialPeriod() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Services::Store::StoreDurationUnit) TrialPeriodUnit() const;
    };
    template <> struct consume<winrt::Windows::Services::Store::IStoreSubscriptionInfo>
    {
        template <typename D> using type = consume_Windows_Services_Store_IStoreSubscriptionInfo<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Store_IStoreUninstallStorePackageResult
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::hresult) ExtendedError() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Services::Store::StoreUninstallStorePackageStatus) Status() const;
    };
    template <> struct consume<winrt::Windows::Services::Store::IStoreUninstallStorePackageResult>
    {
        template <typename D> using type = consume_Windows_Services_Store_IStoreUninstallStorePackageResult<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Store_IStoreVideo
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Uri) Uri() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) VideoPurposeTag() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) Width() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) Height() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Caption() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Services::Store::StoreImage) PreviewImage() const;
    };
    template <> struct consume<winrt::Windows::Services::Store::IStoreVideo>
    {
        template <typename D> using type = consume_Windows_Services_Store_IStoreVideo<D>;
    };
    struct struct_Windows_Services_Store_StorePackageUpdateStatus
    {
        void* PackageFamilyName;
        uint64_t PackageDownloadSizeInBytes;
        uint64_t PackageBytesDownloaded;
        double PackageDownloadProgress;
        double TotalDownloadProgress;
        int32_t PackageUpdateState;
    };
    template <> struct abi<Windows::Services::Store::StorePackageUpdateStatus>
    {
        using type = struct_Windows_Services_Store_StorePackageUpdateStatus;
    };
}
#endif
