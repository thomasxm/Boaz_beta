// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_ApplicationModel_Resources_0_H
#define WINRT_Windows_ApplicationModel_Resources_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct Uri;
}
WINRT_EXPORT namespace winrt::Windows::UI
{
    struct UIContext;
}
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Resources
{
    struct IResourceLoader;
    struct IResourceLoader2;
    struct IResourceLoaderFactory;
    struct IResourceLoaderStatics;
    struct IResourceLoaderStatics2;
    struct IResourceLoaderStatics3;
    struct IResourceLoaderStatics4;
    struct ResourceLoader;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::ApplicationModel::Resources::IResourceLoader>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Resources::IResourceLoader2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Resources::IResourceLoaderFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Resources::IResourceLoaderStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Resources::IResourceLoaderStatics2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Resources::IResourceLoaderStatics3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Resources::IResourceLoaderStatics4>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Resources::ResourceLoader>{ using type = class_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Resources::ResourceLoader> = L"Windows.ApplicationModel.Resources.ResourceLoader";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Resources::IResourceLoader> = L"Windows.ApplicationModel.Resources.IResourceLoader";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Resources::IResourceLoader2> = L"Windows.ApplicationModel.Resources.IResourceLoader2";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Resources::IResourceLoaderFactory> = L"Windows.ApplicationModel.Resources.IResourceLoaderFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Resources::IResourceLoaderStatics> = L"Windows.ApplicationModel.Resources.IResourceLoaderStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Resources::IResourceLoaderStatics2> = L"Windows.ApplicationModel.Resources.IResourceLoaderStatics2";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Resources::IResourceLoaderStatics3> = L"Windows.ApplicationModel.Resources.IResourceLoaderStatics3";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Resources::IResourceLoaderStatics4> = L"Windows.ApplicationModel.Resources.IResourceLoaderStatics4";
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Resources::IResourceLoader>{ 0x08524908,0x16EF,0x45AD,{ 0xA6,0x02,0x29,0x36,0x37,0xD7,0xE6,0x1A } }; // 08524908-16EF-45AD-A602-293637D7E61A
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Resources::IResourceLoader2>{ 0x10EB6EC6,0x8138,0x48C1,{ 0xBC,0x65,0xE1,0xF1,0x42,0x07,0x36,0x7C } }; // 10EB6EC6-8138-48C1-BC65-E1F14207367C
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Resources::IResourceLoaderFactory>{ 0xC33A3603,0x69DC,0x4285,{ 0xA0,0x77,0xD5,0xC0,0xE4,0x7C,0xCB,0xE8 } }; // C33A3603-69DC-4285-A077-D5C0E47CCBE8
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Resources::IResourceLoaderStatics>{ 0xBF777CE1,0x19C8,0x49C2,{ 0x95,0x3C,0x47,0xE9,0x22,0x7B,0x33,0x4E } }; // BF777CE1-19C8-49C2-953C-47E9227B334E
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Resources::IResourceLoaderStatics2>{ 0x0CC04141,0x6466,0x4989,{ 0x94,0x94,0x0B,0x82,0xDF,0xC5,0x3F,0x1F } }; // 0CC04141-6466-4989-9494-0B82DFC53F1F
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Resources::IResourceLoaderStatics3>{ 0x64609DFB,0x64AC,0x491B,{ 0x81,0x00,0x0E,0x55,0x8D,0x61,0xC1,0xD0 } }; // 64609DFB-64AC-491B-8100-0E558D61C1D0
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Resources::IResourceLoaderStatics4>{ 0x9FB36C32,0x6C8C,0x4316,{ 0x96,0x2E,0x90,0x95,0x39,0xB5,0xC2,0x59 } }; // 9FB36C32-6C8C-4316-962E-909539B5C259
    template <> struct default_interface<winrt::Windows::ApplicationModel::Resources::ResourceLoader>{ using type = winrt::Windows::ApplicationModel::Resources::IResourceLoader; };
    template <> struct abi<winrt::Windows::ApplicationModel::Resources::IResourceLoader>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetString(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Resources::IResourceLoader2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetStringForUri(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Resources::IResourceLoaderFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateResourceLoaderByName(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Resources::IResourceLoaderStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetStringForReference(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Resources::IResourceLoaderStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForCurrentView(void**) noexcept = 0;
            virtual int32_t __stdcall GetForCurrentViewWithName(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetForViewIndependentUse(void**) noexcept = 0;
            virtual int32_t __stdcall GetForViewIndependentUseWithName(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Resources::IResourceLoaderStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForUIContext(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Resources::IResourceLoaderStatics4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefaultPriPath(void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Resources_IResourceLoader
    {
        WINRT_IMPL_AUTO(hstring) GetString(param::hstring const& resource) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Resources::IResourceLoader>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Resources_IResourceLoader<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Resources_IResourceLoader2
    {
        WINRT_IMPL_AUTO(hstring) GetStringForUri(winrt::Windows::Foundation::Uri const& uri) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Resources::IResourceLoader2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Resources_IResourceLoader2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Resources_IResourceLoaderFactory
    {
        WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Resources::ResourceLoader) CreateResourceLoaderByName(param::hstring const& name) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Resources::IResourceLoaderFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Resources_IResourceLoaderFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Resources_IResourceLoaderStatics
    {
        WINRT_IMPL_AUTO(hstring) GetStringForReference(winrt::Windows::Foundation::Uri const& uri) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Resources::IResourceLoaderStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Resources_IResourceLoaderStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Resources_IResourceLoaderStatics2
    {
        WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Resources::ResourceLoader) GetForCurrentView() const;
        WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Resources::ResourceLoader) GetForCurrentView(param::hstring const& name) const;
        WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Resources::ResourceLoader) GetForViewIndependentUse() const;
        WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Resources::ResourceLoader) GetForViewIndependentUse(param::hstring const& name) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Resources::IResourceLoaderStatics2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Resources_IResourceLoaderStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Resources_IResourceLoaderStatics3
    {
        WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Resources::ResourceLoader) GetForUIContext(winrt::Windows::UI::UIContext const& context) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Resources::IResourceLoaderStatics3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Resources_IResourceLoaderStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Resources_IResourceLoaderStatics4
    {
        WINRT_IMPL_AUTO(hstring) GetDefaultPriPath(param::hstring const& packageFullName) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Resources::IResourceLoaderStatics4>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Resources_IResourceLoaderStatics4<D>;
    };
}
#endif
