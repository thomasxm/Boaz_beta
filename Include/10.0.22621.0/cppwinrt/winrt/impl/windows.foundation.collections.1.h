// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Foundation_Collections_1_H
#define WINRT_Windows_Foundation_Collections_1_H
#include "winrt/impl/Windows.Foundation.Collections.0.h"
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T>
    struct __declspec(empty_bases) IIterable :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<winrt::Windows::Foundation::Collections::IIterable<T>>
    {
        static_assert(impl::has_category_v<T>, "T must be WinRT type.");
        IIterable(std::nullptr_t = nullptr) noexcept {}
        IIterable(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    template <typename T>
    struct __declspec(empty_bases) IIterator :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<winrt::Windows::Foundation::Collections::IIterator<T>>
    {
        static_assert(impl::has_category_v<T>, "T must be WinRT type.");
        IIterator(std::nullptr_t = nullptr) noexcept {}
        IIterator(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}

        using iterator_concept = std::input_iterator_tag;
        using iterator_category = std::input_iterator_tag;
        using value_type = T;
        using difference_type = ptrdiff_t;
        using pointer = void;
        using reference = T;
    };
    template <typename K, typename V>
    struct __declspec(empty_bases) IKeyValuePair :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<winrt::Windows::Foundation::Collections::IKeyValuePair<K, V>>
    {
        static_assert(impl::has_category_v<K>, "K must be WinRT type.");
        static_assert(impl::has_category_v<V>, "V must be WinRT type.");
        IKeyValuePair(std::nullptr_t = nullptr) noexcept {}
        IKeyValuePair(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    template <typename K>
    struct __declspec(empty_bases) IMapChangedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<winrt::Windows::Foundation::Collections::IMapChangedEventArgs<K>>
    {
        static_assert(impl::has_category_v<K>, "K must be WinRT type.");
        IMapChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IMapChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    template <typename K, typename V>
    struct __declspec(empty_bases) IMapView :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<winrt::Windows::Foundation::Collections::IMapView<K, V>>,
        impl::require<winrt::Windows::Foundation::Collections::IMapView<K, V>, winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Collections::IKeyValuePair<K, V>>>
    {
        static_assert(impl::has_category_v<K>, "K must be WinRT type.");
        static_assert(impl::has_category_v<V>, "V must be WinRT type.");
        IMapView(std::nullptr_t = nullptr) noexcept {}
        IMapView(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    template <typename K, typename V>
    struct __declspec(empty_bases) IMap :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<winrt::Windows::Foundation::Collections::IMap<K, V>>,
        impl::require<winrt::Windows::Foundation::Collections::IMap<K, V>, winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Collections::IKeyValuePair<K, V>>>
    {
        static_assert(impl::has_category_v<K>, "K must be WinRT type.");
        static_assert(impl::has_category_v<V>, "V must be WinRT type.");
        IMap(std::nullptr_t = nullptr) noexcept {}
        IMap(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    template <typename K, typename V>
    struct __declspec(empty_bases) IObservableMap :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<winrt::Windows::Foundation::Collections::IObservableMap<K, V>>,
        impl::require<winrt::Windows::Foundation::Collections::IObservableMap<K, V>, winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Collections::IKeyValuePair<K, V>>, winrt::Windows::Foundation::Collections::IMap<K, V>>
    {
        static_assert(impl::has_category_v<K>, "K must be WinRT type.");
        static_assert(impl::has_category_v<V>, "V must be WinRT type.");
        IObservableMap(std::nullptr_t = nullptr) noexcept {}
        IObservableMap(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    template <typename T>
    struct __declspec(empty_bases) IObservableVector :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<winrt::Windows::Foundation::Collections::IObservableVector<T>>,
        impl::require<winrt::Windows::Foundation::Collections::IObservableVector<T>, winrt::Windows::Foundation::Collections::IIterable<T>, winrt::Windows::Foundation::Collections::IVector<T>>
    {
        static_assert(impl::has_category_v<T>, "T must be WinRT type.");
        IObservableVector(std::nullptr_t = nullptr) noexcept {}
        IObservableVector(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPropertySet :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPropertySet>,
        impl::require<winrt::Windows::Foundation::Collections::IPropertySet, winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Collections::IKeyValuePair<hstring, winrt::Windows::Foundation::IInspectable>>, winrt::Windows::Foundation::Collections::IMap<hstring, winrt::Windows::Foundation::IInspectable>, winrt::Windows::Foundation::Collections::IObservableMap<hstring, winrt::Windows::Foundation::IInspectable>>
    {
        IPropertySet(std::nullptr_t = nullptr) noexcept {}
        IPropertySet(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVectorChangedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IVectorChangedEventArgs>
    {
        IVectorChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IVectorChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    template <typename T>
    struct __declspec(empty_bases) IVectorView :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<winrt::Windows::Foundation::Collections::IVectorView<T>>,
        impl::require<winrt::Windows::Foundation::Collections::IVectorView<T>, winrt::Windows::Foundation::Collections::IIterable<T>>
    {
        static_assert(impl::has_category_v<T>, "T must be WinRT type.");
        IVectorView(std::nullptr_t = nullptr) noexcept {}
        IVectorView(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    template <typename T>
    struct __declspec(empty_bases) IVector :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<winrt::Windows::Foundation::Collections::IVector<T>>,
        impl::require<winrt::Windows::Foundation::Collections::IVector<T>, winrt::Windows::Foundation::Collections::IIterable<T>>
    {
        static_assert(impl::has_category_v<T>, "T must be WinRT type.");
        IVector(std::nullptr_t = nullptr) noexcept {}
        IVector(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
