// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_UI_Core_0_H
#define WINRT_Windows_UI_Core_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    template <typename T> struct __declspec(empty_bases) EventHandler;
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename TResult> struct __declspec(empty_bases) IAsyncOperation;
    struct Point;
    struct Rect;
    struct Size;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    struct IPropertySet;
    template <typename T> struct __declspec(empty_bases) IVector;
}
WINRT_EXPORT namespace winrt::Windows::System
{
    struct DispatcherQueue;
    enum class VirtualKey : int32_t;
    enum class VirtualKeyModifiers : uint32_t;
}
WINRT_EXPORT namespace winrt::Windows::UI
{
    struct UIContext;
}
WINRT_EXPORT namespace winrt::Windows::UI::Composition
{
    struct IVisualElement;
    struct Visual;
}
WINRT_EXPORT namespace winrt::Windows::UI::Input
{
    struct PointerPoint;
}
WINRT_EXPORT namespace winrt::Windows::UI::Popups
{
    struct IUICommand;
    struct UICommandInvokedHandler;
}
WINRT_EXPORT namespace winrt::Windows::UI::Core
{
    enum class AppViewBackButtonVisibility : int32_t
    {
        Visible = 0,
        Collapsed = 1,
        Disabled = 2,
    };
    enum class CoreAcceleratorKeyEventType : int32_t
    {
        Character = 2,
        DeadCharacter = 3,
        KeyDown = 0,
        KeyUp = 1,
        SystemCharacter = 6,
        SystemDeadCharacter = 7,
        SystemKeyDown = 4,
        SystemKeyUp = 5,
        UnicodeCharacter = 8,
    };
    enum class CoreCursorType : int32_t
    {
        Arrow = 0,
        Cross = 1,
        Custom = 2,
        Hand = 3,
        Help = 4,
        IBeam = 5,
        SizeAll = 6,
        SizeNortheastSouthwest = 7,
        SizeNorthSouth = 8,
        SizeNorthwestSoutheast = 9,
        SizeWestEast = 10,
        UniversalNo = 11,
        UpArrow = 12,
        Wait = 13,
        Pin = 14,
        Person = 15,
    };
    enum class CoreDispatcherPriority : int32_t
    {
        Idle = -2,
        Low = -1,
        Normal = 0,
        High = 1,
    };
    enum class CoreIndependentInputFilters : uint32_t
    {
        None = 0,
        MouseButton = 0x1,
        MouseWheel = 0x2,
        MouseHover = 0x4,
        PenWithBarrel = 0x8,
        PenInverted = 0x10,
    };
    enum class CoreInputDeviceTypes : uint32_t
    {
        None = 0,
        Touch = 0x1,
        Pen = 0x2,
        Mouse = 0x4,
    };
    enum class CoreProcessEventsOption : int32_t
    {
        ProcessOneAndAllPending = 0,
        ProcessOneIfPresent = 1,
        ProcessUntilQuit = 2,
        ProcessAllIfPresent = 3,
    };
    enum class CoreProximityEvaluationScore : int32_t
    {
        Closest = 0,
        Farthest = 2147483647,
    };
    enum class CoreVirtualKeyStates : uint32_t
    {
        None = 0,
        Down = 0x1,
        Locked = 0x2,
    };
    enum class CoreWindowActivationMode : int32_t
    {
        None = 0,
        Deactivated = 1,
        ActivatedNotForeground = 2,
        ActivatedInForeground = 3,
    };
    enum class CoreWindowActivationState : int32_t
    {
        CodeActivated = 0,
        Deactivated = 1,
        PointerActivated = 2,
    };
    enum class CoreWindowFlowDirection : int32_t
    {
        LeftToRight = 0,
        RightToLeft = 1,
    };
    struct IAcceleratorKeyEventArgs;
    struct IAcceleratorKeyEventArgs2;
    struct IAutomationProviderRequestedEventArgs;
    struct IBackRequestedEventArgs;
    struct ICharacterReceivedEventArgs;
    struct IClosestInteractiveBoundsRequestedEventArgs;
    struct ICoreAcceleratorKeys;
    struct ICoreClosestInteractiveBoundsRequested;
    struct ICoreComponentFocusable;
    struct ICoreCursor;
    struct ICoreCursorFactory;
    struct ICoreDispatcher;
    struct ICoreDispatcher2;
    struct ICoreDispatcherWithTaskPriority;
    struct ICoreIndependentInputSourceController;
    struct ICoreIndependentInputSourceControllerStatics;
    struct ICoreInputSourceBase;
    struct ICoreKeyboardInputSource;
    struct ICoreKeyboardInputSource2;
    struct ICorePointerInputSource;
    struct ICorePointerInputSource2;
    struct ICorePointerRedirector;
    struct ICoreTouchHitTesting;
    struct ICoreWindow;
    struct ICoreWindow2;
    struct ICoreWindow3;
    struct ICoreWindow4;
    struct ICoreWindow5;
    struct ICoreWindowDialog;
    struct ICoreWindowDialogFactory;
    struct ICoreWindowEventArgs;
    struct ICoreWindowFlyout;
    struct ICoreWindowFlyoutFactory;
    struct ICoreWindowPopupShowingEventArgs;
    struct ICoreWindowResizeManager;
    struct ICoreWindowResizeManagerLayoutCapability;
    struct ICoreWindowResizeManagerStatics;
    struct ICoreWindowStatic;
    struct ICoreWindowWithContext;
    struct IIdleDispatchedHandlerArgs;
    struct IInitializeWithCoreWindow;
    struct IInputEnabledEventArgs;
    struct IKeyEventArgs;
    struct IKeyEventArgs2;
    struct IPointerEventArgs;
    struct ISystemNavigationManager;
    struct ISystemNavigationManager2;
    struct ISystemNavigationManagerStatics;
    struct ITouchHitTestingEventArgs;
    struct IVisibilityChangedEventArgs;
    struct IWindowActivatedEventArgs;
    struct IWindowSizeChangedEventArgs;
    struct AcceleratorKeyEventArgs;
    struct AutomationProviderRequestedEventArgs;
    struct BackRequestedEventArgs;
    struct CharacterReceivedEventArgs;
    struct ClosestInteractiveBoundsRequestedEventArgs;
    struct CoreAcceleratorKeys;
    struct CoreComponentInputSource;
    struct CoreCursor;
    struct CoreDispatcher;
    struct CoreIndependentInputSource;
    struct CoreIndependentInputSourceController;
    struct CoreWindow;
    struct CoreWindowDialog;
    struct CoreWindowEventArgs;
    struct CoreWindowFlyout;
    struct CoreWindowPopupShowingEventArgs;
    struct CoreWindowResizeManager;
    struct IdleDispatchedHandlerArgs;
    struct InputEnabledEventArgs;
    struct KeyEventArgs;
    struct PointerEventArgs;
    struct SystemNavigationManager;
    struct TouchHitTestingEventArgs;
    struct VisibilityChangedEventArgs;
    struct WindowActivatedEventArgs;
    struct WindowSizeChangedEventArgs;
    struct CorePhysicalKeyStatus;
    struct CoreProximityEvaluation;
    struct DispatchedHandler;
    struct IdleDispatchedHandler;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::UI::Core::IAcceleratorKeyEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Core::IAcceleratorKeyEventArgs2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Core::IAutomationProviderRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Core::IBackRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Core::ICharacterReceivedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Core::IClosestInteractiveBoundsRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Core::ICoreAcceleratorKeys>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Core::ICoreClosestInteractiveBoundsRequested>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Core::ICoreComponentFocusable>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Core::ICoreCursor>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Core::ICoreCursorFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Core::ICoreDispatcher>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Core::ICoreDispatcher2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Core::ICoreDispatcherWithTaskPriority>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Core::ICoreIndependentInputSourceController>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Core::ICoreIndependentInputSourceControllerStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Core::ICoreInputSourceBase>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Core::ICoreKeyboardInputSource>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Core::ICoreKeyboardInputSource2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Core::ICorePointerInputSource>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Core::ICorePointerInputSource2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Core::ICorePointerRedirector>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Core::ICoreTouchHitTesting>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Core::ICoreWindow>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Core::ICoreWindow2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Core::ICoreWindow3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Core::ICoreWindow4>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Core::ICoreWindow5>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Core::ICoreWindowDialog>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Core::ICoreWindowDialogFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Core::ICoreWindowEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Core::ICoreWindowFlyout>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Core::ICoreWindowFlyoutFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Core::ICoreWindowPopupShowingEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Core::ICoreWindowResizeManager>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Core::ICoreWindowResizeManagerLayoutCapability>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Core::ICoreWindowResizeManagerStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Core::ICoreWindowStatic>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Core::ICoreWindowWithContext>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Core::IIdleDispatchedHandlerArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Core::IInitializeWithCoreWindow>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Core::IInputEnabledEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Core::IKeyEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Core::IKeyEventArgs2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Core::IPointerEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Core::ISystemNavigationManager>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Core::ISystemNavigationManager2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Core::ISystemNavigationManagerStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Core::ITouchHitTestingEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Core::IVisibilityChangedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Core::IWindowActivatedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Core::IWindowSizeChangedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Core::AcceleratorKeyEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Core::AutomationProviderRequestedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Core::BackRequestedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Core::CharacterReceivedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Core::ClosestInteractiveBoundsRequestedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Core::CoreAcceleratorKeys>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Core::CoreComponentInputSource>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Core::CoreCursor>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Core::CoreDispatcher>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Core::CoreIndependentInputSource>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Core::CoreIndependentInputSourceController>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Core::CoreWindow>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Core::CoreWindowDialog>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Core::CoreWindowEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Core::CoreWindowFlyout>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Core::CoreWindowPopupShowingEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Core::CoreWindowResizeManager>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Core::IdleDispatchedHandlerArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Core::InputEnabledEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Core::KeyEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Core::PointerEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Core::SystemNavigationManager>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Core::TouchHitTestingEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Core::VisibilityChangedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Core::WindowActivatedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Core::WindowSizeChangedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Core::AppViewBackButtonVisibility>{ using type = enum_category; };
    template <> struct category<winrt::Windows::UI::Core::CoreAcceleratorKeyEventType>{ using type = enum_category; };
    template <> struct category<winrt::Windows::UI::Core::CoreCursorType>{ using type = enum_category; };
    template <> struct category<winrt::Windows::UI::Core::CoreDispatcherPriority>{ using type = enum_category; };
    template <> struct category<winrt::Windows::UI::Core::CoreIndependentInputFilters>{ using type = enum_category; };
    template <> struct category<winrt::Windows::UI::Core::CoreInputDeviceTypes>{ using type = enum_category; };
    template <> struct category<winrt::Windows::UI::Core::CoreProcessEventsOption>{ using type = enum_category; };
    template <> struct category<winrt::Windows::UI::Core::CoreProximityEvaluationScore>{ using type = enum_category; };
    template <> struct category<winrt::Windows::UI::Core::CoreVirtualKeyStates>{ using type = enum_category; };
    template <> struct category<winrt::Windows::UI::Core::CoreWindowActivationMode>{ using type = enum_category; };
    template <> struct category<winrt::Windows::UI::Core::CoreWindowActivationState>{ using type = enum_category; };
    template <> struct category<winrt::Windows::UI::Core::CoreWindowFlowDirection>{ using type = enum_category; };
    template <> struct category<winrt::Windows::UI::Core::CorePhysicalKeyStatus>{ using type = struct_category<uint32_t, uint32_t, bool, bool, bool, bool>; };
    template <> struct category<winrt::Windows::UI::Core::CoreProximityEvaluation>{ using type = struct_category<int32_t, winrt::Windows::Foundation::Point>; };
    template <> struct category<winrt::Windows::UI::Core::DispatchedHandler>{ using type = delegate_category; };
    template <> struct category<winrt::Windows::UI::Core::IdleDispatchedHandler>{ using type = delegate_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::AcceleratorKeyEventArgs> = L"Windows.UI.Core.AcceleratorKeyEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::AutomationProviderRequestedEventArgs> = L"Windows.UI.Core.AutomationProviderRequestedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::BackRequestedEventArgs> = L"Windows.UI.Core.BackRequestedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::CharacterReceivedEventArgs> = L"Windows.UI.Core.CharacterReceivedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::ClosestInteractiveBoundsRequestedEventArgs> = L"Windows.UI.Core.ClosestInteractiveBoundsRequestedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::CoreAcceleratorKeys> = L"Windows.UI.Core.CoreAcceleratorKeys";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::CoreComponentInputSource> = L"Windows.UI.Core.CoreComponentInputSource";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::CoreCursor> = L"Windows.UI.Core.CoreCursor";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::CoreDispatcher> = L"Windows.UI.Core.CoreDispatcher";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::CoreIndependentInputSource> = L"Windows.UI.Core.CoreIndependentInputSource";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::CoreIndependentInputSourceController> = L"Windows.UI.Core.CoreIndependentInputSourceController";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::CoreWindow> = L"Windows.UI.Core.CoreWindow";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::CoreWindowDialog> = L"Windows.UI.Core.CoreWindowDialog";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::CoreWindowEventArgs> = L"Windows.UI.Core.CoreWindowEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::CoreWindowFlyout> = L"Windows.UI.Core.CoreWindowFlyout";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::CoreWindowPopupShowingEventArgs> = L"Windows.UI.Core.CoreWindowPopupShowingEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::CoreWindowResizeManager> = L"Windows.UI.Core.CoreWindowResizeManager";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::IdleDispatchedHandlerArgs> = L"Windows.UI.Core.IdleDispatchedHandlerArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::InputEnabledEventArgs> = L"Windows.UI.Core.InputEnabledEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::KeyEventArgs> = L"Windows.UI.Core.KeyEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::PointerEventArgs> = L"Windows.UI.Core.PointerEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::SystemNavigationManager> = L"Windows.UI.Core.SystemNavigationManager";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::TouchHitTestingEventArgs> = L"Windows.UI.Core.TouchHitTestingEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::VisibilityChangedEventArgs> = L"Windows.UI.Core.VisibilityChangedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::WindowActivatedEventArgs> = L"Windows.UI.Core.WindowActivatedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::WindowSizeChangedEventArgs> = L"Windows.UI.Core.WindowSizeChangedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::AppViewBackButtonVisibility> = L"Windows.UI.Core.AppViewBackButtonVisibility";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::CoreAcceleratorKeyEventType> = L"Windows.UI.Core.CoreAcceleratorKeyEventType";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::CoreCursorType> = L"Windows.UI.Core.CoreCursorType";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::CoreDispatcherPriority> = L"Windows.UI.Core.CoreDispatcherPriority";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::CoreIndependentInputFilters> = L"Windows.UI.Core.CoreIndependentInputFilters";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::CoreInputDeviceTypes> = L"Windows.UI.Core.CoreInputDeviceTypes";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::CoreProcessEventsOption> = L"Windows.UI.Core.CoreProcessEventsOption";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::CoreProximityEvaluationScore> = L"Windows.UI.Core.CoreProximityEvaluationScore";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::CoreVirtualKeyStates> = L"Windows.UI.Core.CoreVirtualKeyStates";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::CoreWindowActivationMode> = L"Windows.UI.Core.CoreWindowActivationMode";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::CoreWindowActivationState> = L"Windows.UI.Core.CoreWindowActivationState";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::CoreWindowFlowDirection> = L"Windows.UI.Core.CoreWindowFlowDirection";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::CorePhysicalKeyStatus> = L"Windows.UI.Core.CorePhysicalKeyStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::CoreProximityEvaluation> = L"Windows.UI.Core.CoreProximityEvaluation";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::IAcceleratorKeyEventArgs> = L"Windows.UI.Core.IAcceleratorKeyEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::IAcceleratorKeyEventArgs2> = L"Windows.UI.Core.IAcceleratorKeyEventArgs2";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::IAutomationProviderRequestedEventArgs> = L"Windows.UI.Core.IAutomationProviderRequestedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::IBackRequestedEventArgs> = L"Windows.UI.Core.IBackRequestedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::ICharacterReceivedEventArgs> = L"Windows.UI.Core.ICharacterReceivedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::IClosestInteractiveBoundsRequestedEventArgs> = L"Windows.UI.Core.IClosestInteractiveBoundsRequestedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::ICoreAcceleratorKeys> = L"Windows.UI.Core.ICoreAcceleratorKeys";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::ICoreClosestInteractiveBoundsRequested> = L"Windows.UI.Core.ICoreClosestInteractiveBoundsRequested";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::ICoreComponentFocusable> = L"Windows.UI.Core.ICoreComponentFocusable";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::ICoreCursor> = L"Windows.UI.Core.ICoreCursor";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::ICoreCursorFactory> = L"Windows.UI.Core.ICoreCursorFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::ICoreDispatcher> = L"Windows.UI.Core.ICoreDispatcher";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::ICoreDispatcher2> = L"Windows.UI.Core.ICoreDispatcher2";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::ICoreDispatcherWithTaskPriority> = L"Windows.UI.Core.ICoreDispatcherWithTaskPriority";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::ICoreIndependentInputSourceController> = L"Windows.UI.Core.ICoreIndependentInputSourceController";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::ICoreIndependentInputSourceControllerStatics> = L"Windows.UI.Core.ICoreIndependentInputSourceControllerStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::ICoreInputSourceBase> = L"Windows.UI.Core.ICoreInputSourceBase";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::ICoreKeyboardInputSource> = L"Windows.UI.Core.ICoreKeyboardInputSource";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::ICoreKeyboardInputSource2> = L"Windows.UI.Core.ICoreKeyboardInputSource2";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::ICorePointerInputSource> = L"Windows.UI.Core.ICorePointerInputSource";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::ICorePointerInputSource2> = L"Windows.UI.Core.ICorePointerInputSource2";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::ICorePointerRedirector> = L"Windows.UI.Core.ICorePointerRedirector";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::ICoreTouchHitTesting> = L"Windows.UI.Core.ICoreTouchHitTesting";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::ICoreWindow> = L"Windows.UI.Core.ICoreWindow";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::ICoreWindow2> = L"Windows.UI.Core.ICoreWindow2";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::ICoreWindow3> = L"Windows.UI.Core.ICoreWindow3";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::ICoreWindow4> = L"Windows.UI.Core.ICoreWindow4";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::ICoreWindow5> = L"Windows.UI.Core.ICoreWindow5";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::ICoreWindowDialog> = L"Windows.UI.Core.ICoreWindowDialog";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::ICoreWindowDialogFactory> = L"Windows.UI.Core.ICoreWindowDialogFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::ICoreWindowEventArgs> = L"Windows.UI.Core.ICoreWindowEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::ICoreWindowFlyout> = L"Windows.UI.Core.ICoreWindowFlyout";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::ICoreWindowFlyoutFactory> = L"Windows.UI.Core.ICoreWindowFlyoutFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::ICoreWindowPopupShowingEventArgs> = L"Windows.UI.Core.ICoreWindowPopupShowingEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::ICoreWindowResizeManager> = L"Windows.UI.Core.ICoreWindowResizeManager";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::ICoreWindowResizeManagerLayoutCapability> = L"Windows.UI.Core.ICoreWindowResizeManagerLayoutCapability";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::ICoreWindowResizeManagerStatics> = L"Windows.UI.Core.ICoreWindowResizeManagerStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::ICoreWindowStatic> = L"Windows.UI.Core.ICoreWindowStatic";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::ICoreWindowWithContext> = L"Windows.UI.Core.ICoreWindowWithContext";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::IIdleDispatchedHandlerArgs> = L"Windows.UI.Core.IIdleDispatchedHandlerArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::IInitializeWithCoreWindow> = L"Windows.UI.Core.IInitializeWithCoreWindow";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::IInputEnabledEventArgs> = L"Windows.UI.Core.IInputEnabledEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::IKeyEventArgs> = L"Windows.UI.Core.IKeyEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::IKeyEventArgs2> = L"Windows.UI.Core.IKeyEventArgs2";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::IPointerEventArgs> = L"Windows.UI.Core.IPointerEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::ISystemNavigationManager> = L"Windows.UI.Core.ISystemNavigationManager";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::ISystemNavigationManager2> = L"Windows.UI.Core.ISystemNavigationManager2";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::ISystemNavigationManagerStatics> = L"Windows.UI.Core.ISystemNavigationManagerStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::ITouchHitTestingEventArgs> = L"Windows.UI.Core.ITouchHitTestingEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::IVisibilityChangedEventArgs> = L"Windows.UI.Core.IVisibilityChangedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::IWindowActivatedEventArgs> = L"Windows.UI.Core.IWindowActivatedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::IWindowSizeChangedEventArgs> = L"Windows.UI.Core.IWindowSizeChangedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::DispatchedHandler> = L"Windows.UI.Core.DispatchedHandler";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Core::IdleDispatchedHandler> = L"Windows.UI.Core.IdleDispatchedHandler";
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Core::IAcceleratorKeyEventArgs>{ 0xFF1C4C4A,0x9287,0x470B,{ 0x83,0x6E,0x90,0x86,0xE3,0x12,0x6A,0xDE } }; // FF1C4C4A-9287-470B-836E-9086E3126ADE
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Core::IAcceleratorKeyEventArgs2>{ 0xD300A9F6,0x2F7E,0x4873,{ 0xA5,0x55,0x16,0x6E,0x59,0x6E,0xE1,0xC5 } }; // D300A9F6-2F7E-4873-A555-166E596EE1C5
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Core::IAutomationProviderRequestedEventArgs>{ 0x961FF258,0x21BF,0x4B42,{ 0xA2,0x98,0xFA,0x47,0x9D,0x4C,0x52,0xE2 } }; // 961FF258-21BF-4B42-A298-FA479D4C52E2
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Core::IBackRequestedEventArgs>{ 0xD603D28A,0xE411,0x4A4E,{ 0xBA,0x41,0x6A,0x32,0x7A,0x86,0x75,0xBC } }; // D603D28A-E411-4A4E-BA41-6A327A8675BC
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Core::ICharacterReceivedEventArgs>{ 0xC584659F,0x99B2,0x4BCC,{ 0xBD,0x33,0x04,0xE6,0x3F,0x42,0x90,0x2E } }; // C584659F-99B2-4BCC-BD33-04E63F42902E
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Core::IClosestInteractiveBoundsRequestedEventArgs>{ 0x347C11D7,0xF6F8,0x40E3,{ 0xB2,0x9F,0xAE,0x50,0xD3,0xE8,0x64,0x86 } }; // 347C11D7-F6F8-40E3-B29F-AE50D3E86486
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Core::ICoreAcceleratorKeys>{ 0x9FFDF7F5,0xB8C9,0x4EF0,{ 0xB7,0xD2,0x1D,0xE6,0x26,0x56,0x1F,0xC8 } }; // 9FFDF7F5-B8C9-4EF0-B7D2-1DE626561FC8
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Core::ICoreClosestInteractiveBoundsRequested>{ 0xF303043A,0xE8BF,0x4E8E,{ 0xAE,0x69,0xC9,0xDA,0xDD,0x57,0xA1,0x14 } }; // F303043A-E8BF-4E8E-AE69-C9DADD57A114
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Core::ICoreComponentFocusable>{ 0x52F96FA3,0x8742,0x4411,{ 0xAE,0x69,0x79,0xA8,0x5F,0x29,0xAC,0x8B } }; // 52F96FA3-8742-4411-AE69-79A85F29AC8B
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Core::ICoreCursor>{ 0x96893ACF,0x111D,0x442C,{ 0x8A,0x77,0xB8,0x79,0x92,0xF8,0xE2,0xD6 } }; // 96893ACF-111D-442C-8A77-B87992F8E2D6
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Core::ICoreCursorFactory>{ 0xF6359621,0xA79D,0x4ED3,{ 0x8C,0x32,0xA9,0xEF,0x9D,0x6B,0x76,0xA4 } }; // F6359621-A79D-4ED3-8C32-A9EF9D6B76A4
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Core::ICoreDispatcher>{ 0x60DB2FA8,0xB705,0x4FDE,{ 0xA7,0xD6,0xEB,0xBB,0x18,0x91,0xD3,0x9E } }; // 60DB2FA8-B705-4FDE-A7D6-EBBB1891D39E
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Core::ICoreDispatcher2>{ 0x6F5E63C7,0xE3AA,0x4EAE,{ 0xB0,0xE0,0xDC,0xF3,0x21,0xCA,0x4B,0x2F } }; // 6F5E63C7-E3AA-4EAE-B0E0-DCF321CA4B2F
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Core::ICoreDispatcherWithTaskPriority>{ 0xBAFAECAD,0x484D,0x41BE,{ 0xBA,0x80,0x1D,0x58,0xC6,0x52,0x63,0xEA } }; // BAFAECAD-484D-41BE-BA80-1D58C65263EA
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Core::ICoreIndependentInputSourceController>{ 0x0963261C,0x84FE,0x578A,{ 0x83,0xCA,0x64,0x25,0x30,0x9C,0xCD,0xE4 } }; // 0963261C-84FE-578A-83CA-6425309CCDE4
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Core::ICoreIndependentInputSourceControllerStatics>{ 0x3EDC4E20,0x9A8A,0x5691,{ 0x85,0x86,0xFC,0xA4,0xCB,0x57,0x52,0x6D } }; // 3EDC4E20-9A8A-5691-8586-FCA4CB57526D
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Core::ICoreInputSourceBase>{ 0x9F488807,0x4580,0x4BE8,{ 0xBE,0x68,0x92,0xA9,0x31,0x17,0x13,0xBB } }; // 9F488807-4580-4BE8-BE68-92A9311713BB
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Core::ICoreKeyboardInputSource>{ 0x231C9088,0xE469,0x4DF1,{ 0xB2,0x08,0x6E,0x49,0x0D,0x71,0xCB,0x90 } }; // 231C9088-E469-4DF1-B208-6E490D71CB90
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Core::ICoreKeyboardInputSource2>{ 0xFA24CB94,0xF963,0x47A5,{ 0x87,0x78,0x20,0x7C,0x48,0x2B,0x0A,0xFD } }; // FA24CB94-F963-47A5-8778-207C482B0AFD
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Core::ICorePointerInputSource>{ 0xBBF1BB18,0xE47A,0x48EB,{ 0x88,0x07,0xF8,0xF8,0xD3,0xEA,0x45,0x51 } }; // BBF1BB18-E47A-48EB-8807-F8F8D3EA4551
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Core::ICorePointerInputSource2>{ 0xD703708A,0x4516,0x4786,{ 0xB1,0xE5,0x27,0x51,0xD5,0x63,0xF9,0x97 } }; // D703708A-4516-4786-B1E5-2751D563F997
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Core::ICorePointerRedirector>{ 0x8F9D0C94,0x5688,0x4B0C,{ 0xA9,0xF1,0xF9,0x31,0xF7,0xFA,0x3D,0xC3 } }; // 8F9D0C94-5688-4B0C-A9F1-F931F7FA3DC3
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Core::ICoreTouchHitTesting>{ 0xB1D8A289,0x3ACF,0x4124,{ 0x9F,0xA3,0xEA,0x8A,0xBA,0x35,0x3C,0x21 } }; // B1D8A289-3ACF-4124-9FA3-EA8ABA353C21
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Core::ICoreWindow>{ 0x79B9D5F2,0x879E,0x4B89,{ 0xB7,0x98,0x79,0xE4,0x75,0x98,0x03,0x0C } }; // 79B9D5F2-879E-4B89-B798-79E47598030C
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Core::ICoreWindow2>{ 0x7C2B1B85,0x6917,0x4361,{ 0x9C,0x02,0x0D,0x9E,0x3A,0x42,0x0B,0x95 } }; // 7C2B1B85-6917-4361-9C02-0D9E3A420B95
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Core::ICoreWindow3>{ 0x32C20DD8,0xFAEF,0x4375,{ 0xA2,0xAB,0x32,0x64,0x0E,0x48,0x15,0xC7 } }; // 32C20DD8-FAEF-4375-A2AB-32640E4815C7
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Core::ICoreWindow4>{ 0x35CAF0D0,0x47F0,0x436C,{ 0xAF,0x97,0x0D,0xD8,0x8F,0x6F,0x5F,0x02 } }; // 35CAF0D0-47F0-436C-AF97-0DD88F6F5F02
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Core::ICoreWindow5>{ 0x4B4AE1E1,0x2E6D,0x4EAA,{ 0xBD,0xA1,0x1C,0x5C,0xC1,0xBE,0xE1,0x41 } }; // 4B4AE1E1-2E6D-4EAA-BDA1-1C5CC1BEE141
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Core::ICoreWindowDialog>{ 0xE7392CE0,0xC78D,0x427E,{ 0x8B,0x2C,0x01,0xFF,0x42,0x0C,0x69,0xD5 } }; // E7392CE0-C78D-427E-8B2C-01FF420C69D5
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Core::ICoreWindowDialogFactory>{ 0xCFB2A855,0x1C59,0x4B13,{ 0xB1,0xE5,0x16,0xE2,0x98,0x05,0xF7,0xC4 } }; // CFB2A855-1C59-4B13-B1E5-16E29805F7C4
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Core::ICoreWindowEventArgs>{ 0x272B1EF3,0xC633,0x4DA5,{ 0xA2,0x6C,0xC6,0xD0,0xF5,0x6B,0x29,0xDA } }; // 272B1EF3-C633-4DA5-A26C-C6D0F56B29DA
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Core::ICoreWindowFlyout>{ 0xE89D854D,0x2050,0x40BB,{ 0xB3,0x44,0xF6,0xF3,0x55,0xEE,0xB3,0x14 } }; // E89D854D-2050-40BB-B344-F6F355EEB314
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Core::ICoreWindowFlyoutFactory>{ 0xDEC4C6C4,0x93E8,0x4F7C,{ 0xBE,0x27,0xCE,0xFA,0xA1,0xAF,0x68,0xA7 } }; // DEC4C6C4-93E8-4F7C-BE27-CEFAA1AF68A7
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Core::ICoreWindowPopupShowingEventArgs>{ 0x26155FA2,0x5BA5,0x4EA4,{ 0xA3,0xB4,0x2D,0xC7,0xD6,0x3C,0x8E,0x26 } }; // 26155FA2-5BA5-4EA4-A3B4-2DC7D63C8E26
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Core::ICoreWindowResizeManager>{ 0xB8F0B925,0xB350,0x48B3,{ 0xA1,0x98,0x5C,0x1A,0x84,0x70,0x02,0x43 } }; // B8F0B925-B350-48B3-A198-5C1A84700243
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Core::ICoreWindowResizeManagerLayoutCapability>{ 0xBB74F27B,0xA544,0x4301,{ 0x80,0xE6,0x0A,0xE0,0x33,0xEF,0x45,0x36 } }; // BB74F27B-A544-4301-80E6-0AE033EF4536
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Core::ICoreWindowResizeManagerStatics>{ 0xAE4A9045,0x6D70,0x49DB,{ 0x8E,0x68,0x46,0xFF,0xBD,0x17,0xD3,0x8D } }; // AE4A9045-6D70-49DB-8E68-46FFBD17D38D
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Core::ICoreWindowStatic>{ 0x4D239005,0x3C2A,0x41B1,{ 0x90,0x22,0x53,0x6B,0xB9,0xCF,0x93,0xB1 } }; // 4D239005-3C2A-41B1-9022-536BB9CF93B1
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Core::ICoreWindowWithContext>{ 0x9AC40241,0x3575,0x4C3B,{ 0xAF,0x66,0xE8,0xC5,0x29,0xD4,0xD0,0x6C } }; // 9AC40241-3575-4C3B-AF66-E8C529D4D06C
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Core::IIdleDispatchedHandlerArgs>{ 0x98BB6A24,0xDC1C,0x43CB,{ 0xB4,0xED,0xD1,0xC0,0xEB,0x23,0x91,0xF3 } }; // 98BB6A24-DC1C-43CB-B4ED-D1C0EB2391F3
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Core::IInitializeWithCoreWindow>{ 0x188F20D6,0x9873,0x464A,{ 0xAC,0xE5,0x57,0xE0,0x10,0xF4,0x65,0xE6 } }; // 188F20D6-9873-464A-ACE5-57E010F465E6
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Core::IInputEnabledEventArgs>{ 0x80371D4F,0x2FD8,0x4C24,{ 0xAA,0x86,0x31,0x63,0xA8,0x7B,0x4E,0x5A } }; // 80371D4F-2FD8-4C24-AA86-3163A87B4E5A
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Core::IKeyEventArgs>{ 0x5FF5E930,0x2544,0x4A17,{ 0xBD,0x78,0x1F,0x2F,0xDE,0xBB,0x10,0x6B } }; // 5FF5E930-2544-4A17-BD78-1F2FDEBB106B
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Core::IKeyEventArgs2>{ 0x583ADD98,0x0790,0x4571,{ 0x9B,0x12,0x64,0x5E,0xF9,0xD7,0x9E,0x42 } }; // 583ADD98-0790-4571-9B12-645EF9D79E42
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Core::IPointerEventArgs>{ 0x920D9CB1,0xA5FC,0x4A21,{ 0x8C,0x09,0x49,0xDF,0xE6,0xFF,0xE2,0x5F } }; // 920D9CB1-A5FC-4A21-8C09-49DFE6FFE25F
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Core::ISystemNavigationManager>{ 0x93023118,0xCF50,0x42A6,{ 0x97,0x06,0x69,0x10,0x7F,0xA1,0x22,0xE1 } }; // 93023118-CF50-42A6-9706-69107FA122E1
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Core::ISystemNavigationManager2>{ 0x8C510401,0x67BE,0x49AE,{ 0x95,0x09,0x67,0x1C,0x1E,0x54,0xA3,0x89 } }; // 8C510401-67BE-49AE-9509-671C1E54A389
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Core::ISystemNavigationManagerStatics>{ 0xDC52B5CE,0xBEE0,0x4305,{ 0x8C,0x54,0x68,0x22,0x8E,0xD6,0x83,0xB5 } }; // DC52B5CE-BEE0-4305-8C54-68228ED683B5
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Core::ITouchHitTestingEventArgs>{ 0x22F3B823,0x0B7C,0x424E,{ 0x9D,0xF7,0x33,0xD4,0xF9,0x62,0x93,0x1B } }; // 22F3B823-0B7C-424E-9DF7-33D4F962931B
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Core::IVisibilityChangedEventArgs>{ 0xBF9918EA,0xD801,0x4564,{ 0xA4,0x95,0xB1,0xE8,0x4F,0x8A,0xD0,0x85 } }; // BF9918EA-D801-4564-A495-B1E84F8AD085
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Core::IWindowActivatedEventArgs>{ 0x179D65E7,0x4658,0x4CB6,{ 0xAA,0x13,0x41,0xD0,0x94,0xEA,0x25,0x5E } }; // 179D65E7-4658-4CB6-AA13-41D094EA255E
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Core::IWindowSizeChangedEventArgs>{ 0x5A200EC7,0x0426,0x47DC,{ 0xB8,0x6C,0x6F,0x47,0x59,0x15,0xE4,0x51 } }; // 5A200EC7-0426-47DC-B86C-6F475915E451
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Core::DispatchedHandler>{ 0xD1F276C4,0x98D8,0x4636,{ 0xBF,0x49,0xEB,0x79,0x50,0x75,0x48,0xE9 } }; // D1F276C4-98D8-4636-BF49-EB79507548E9
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Core::IdleDispatchedHandler>{ 0xA42B0C24,0x7F21,0x4ABC,{ 0x99,0xC1,0x8F,0x01,0x00,0x7F,0x08,0x80 } }; // A42B0C24-7F21-4ABC-99C1-8F01007F0880
    template <> struct default_interface<winrt::Windows::UI::Core::AcceleratorKeyEventArgs>{ using type = winrt::Windows::UI::Core::IAcceleratorKeyEventArgs; };
    template <> struct default_interface<winrt::Windows::UI::Core::AutomationProviderRequestedEventArgs>{ using type = winrt::Windows::UI::Core::IAutomationProviderRequestedEventArgs; };
    template <> struct default_interface<winrt::Windows::UI::Core::BackRequestedEventArgs>{ using type = winrt::Windows::UI::Core::IBackRequestedEventArgs; };
    template <> struct default_interface<winrt::Windows::UI::Core::CharacterReceivedEventArgs>{ using type = winrt::Windows::UI::Core::ICharacterReceivedEventArgs; };
    template <> struct default_interface<winrt::Windows::UI::Core::ClosestInteractiveBoundsRequestedEventArgs>{ using type = winrt::Windows::UI::Core::IClosestInteractiveBoundsRequestedEventArgs; };
    template <> struct default_interface<winrt::Windows::UI::Core::CoreAcceleratorKeys>{ using type = winrt::Windows::UI::Core::ICoreAcceleratorKeys; };
    template <> struct default_interface<winrt::Windows::UI::Core::CoreComponentInputSource>{ using type = winrt::Windows::UI::Core::ICoreInputSourceBase; };
    template <> struct default_interface<winrt::Windows::UI::Core::CoreCursor>{ using type = winrt::Windows::UI::Core::ICoreCursor; };
    template <> struct default_interface<winrt::Windows::UI::Core::CoreDispatcher>{ using type = winrt::Windows::UI::Core::ICoreDispatcher; };
    template <> struct default_interface<winrt::Windows::UI::Core::CoreIndependentInputSource>{ using type = winrt::Windows::UI::Core::ICoreInputSourceBase; };
    template <> struct default_interface<winrt::Windows::UI::Core::CoreIndependentInputSourceController>{ using type = winrt::Windows::UI::Core::ICoreIndependentInputSourceController; };
    template <> struct default_interface<winrt::Windows::UI::Core::CoreWindow>{ using type = winrt::Windows::UI::Core::ICoreWindow; };
    template <> struct default_interface<winrt::Windows::UI::Core::CoreWindowDialog>{ using type = winrt::Windows::UI::Core::ICoreWindowDialog; };
    template <> struct default_interface<winrt::Windows::UI::Core::CoreWindowEventArgs>{ using type = winrt::Windows::UI::Core::ICoreWindowEventArgs; };
    template <> struct default_interface<winrt::Windows::UI::Core::CoreWindowFlyout>{ using type = winrt::Windows::UI::Core::ICoreWindowFlyout; };
    template <> struct default_interface<winrt::Windows::UI::Core::CoreWindowPopupShowingEventArgs>{ using type = winrt::Windows::UI::Core::ICoreWindowPopupShowingEventArgs; };
    template <> struct default_interface<winrt::Windows::UI::Core::CoreWindowResizeManager>{ using type = winrt::Windows::UI::Core::ICoreWindowResizeManager; };
    template <> struct default_interface<winrt::Windows::UI::Core::IdleDispatchedHandlerArgs>{ using type = winrt::Windows::UI::Core::IIdleDispatchedHandlerArgs; };
    template <> struct default_interface<winrt::Windows::UI::Core::InputEnabledEventArgs>{ using type = winrt::Windows::UI::Core::IInputEnabledEventArgs; };
    template <> struct default_interface<winrt::Windows::UI::Core::KeyEventArgs>{ using type = winrt::Windows::UI::Core::IKeyEventArgs; };
    template <> struct default_interface<winrt::Windows::UI::Core::PointerEventArgs>{ using type = winrt::Windows::UI::Core::IPointerEventArgs; };
    template <> struct default_interface<winrt::Windows::UI::Core::SystemNavigationManager>{ using type = winrt::Windows::UI::Core::ISystemNavigationManager; };
    template <> struct default_interface<winrt::Windows::UI::Core::TouchHitTestingEventArgs>{ using type = winrt::Windows::UI::Core::ITouchHitTestingEventArgs; };
    template <> struct default_interface<winrt::Windows::UI::Core::VisibilityChangedEventArgs>{ using type = winrt::Windows::UI::Core::IVisibilityChangedEventArgs; };
    template <> struct default_interface<winrt::Windows::UI::Core::WindowActivatedEventArgs>{ using type = winrt::Windows::UI::Core::IWindowActivatedEventArgs; };
    template <> struct default_interface<winrt::Windows::UI::Core::WindowSizeChangedEventArgs>{ using type = winrt::Windows::UI::Core::IWindowSizeChangedEventArgs; };
    template <> struct abi<winrt::Windows::UI::Core::IAcceleratorKeyEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EventType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_VirtualKey(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_KeyStatus(struct struct_Windows_UI_Core_CorePhysicalKeyStatus*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Core::IAcceleratorKeyEventArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Core::IAutomationProviderRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AutomationProvider(void**) noexcept = 0;
            virtual int32_t __stdcall put_AutomationProvider(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Core::IBackRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Handled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Handled(bool) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Core::ICharacterReceivedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_KeyCode(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_KeyStatus(struct struct_Windows_UI_Core_CorePhysicalKeyStatus*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Core::IClosestInteractiveBoundsRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PointerPosition(winrt::Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_SearchBounds(winrt::Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall get_ClosestInteractiveBounds(winrt::Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall put_ClosestInteractiveBounds(winrt::Windows::Foundation::Rect) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Core::ICoreAcceleratorKeys>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_AcceleratorKeyActivated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AcceleratorKeyActivated(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Core::ICoreClosestInteractiveBoundsRequested>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_ClosestInteractiveBoundsRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ClosestInteractiveBoundsRequested(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Core::ICoreComponentFocusable>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_HasFocus(bool*) noexcept = 0;
            virtual int32_t __stdcall add_GotFocus(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_GotFocus(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_LostFocus(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_LostFocus(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Core::ICoreCursor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Type(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Core::ICoreCursorFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateCursor(int32_t, uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Core::ICoreDispatcher>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_HasThreadAccess(bool*) noexcept = 0;
            virtual int32_t __stdcall ProcessEvents(int32_t) noexcept = 0;
            virtual int32_t __stdcall RunAsync(int32_t, void*, void**) noexcept = 0;
            virtual int32_t __stdcall RunIdleAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Core::ICoreDispatcher2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryRunAsync(int32_t, void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryRunIdleAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Core::ICoreDispatcherWithTaskPriority>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CurrentPriority(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_CurrentPriority(int32_t) noexcept = 0;
            virtual int32_t __stdcall ShouldYield(bool*) noexcept = 0;
            virtual int32_t __stdcall ShouldYieldToPriority(int32_t, bool*) noexcept = 0;
            virtual int32_t __stdcall StopProcessEvents() noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Core::ICoreIndependentInputSourceController>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsTransparentForUncontrolledInput(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsTransparentForUncontrolledInput(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsPalmRejectionEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsPalmRejectionEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_Source(void**) noexcept = 0;
            virtual int32_t __stdcall SetControlledInput(uint32_t) noexcept = 0;
            virtual int32_t __stdcall SetControlledInputWithFilters(uint32_t, uint32_t, uint32_t) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Core::ICoreIndependentInputSourceControllerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateForVisual(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateForIVisualElement(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Core::ICoreInputSourceBase>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Dispatcher(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsInputEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsInputEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall add_InputEnabled(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_InputEnabled(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Core::ICoreKeyboardInputSource>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetCurrentKeyState(int32_t, uint32_t*) noexcept = 0;
            virtual int32_t __stdcall add_CharacterReceived(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CharacterReceived(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_KeyDown(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_KeyDown(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_KeyUp(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_KeyUp(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Core::ICoreKeyboardInputSource2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetCurrentKeyEventDeviceId(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Core::ICorePointerInputSource>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ReleasePointerCapture() noexcept = 0;
            virtual int32_t __stdcall SetPointerCapture() noexcept = 0;
            virtual int32_t __stdcall get_HasCapture(bool*) noexcept = 0;
            virtual int32_t __stdcall get_PointerPosition(winrt::Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_PointerCursor(void**) noexcept = 0;
            virtual int32_t __stdcall put_PointerCursor(void*) noexcept = 0;
            virtual int32_t __stdcall add_PointerCaptureLost(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PointerCaptureLost(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PointerEntered(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PointerEntered(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PointerExited(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PointerExited(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PointerMoved(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PointerMoved(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PointerPressed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PointerPressed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PointerReleased(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PointerReleased(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PointerWheelChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PointerWheelChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Core::ICorePointerInputSource2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DispatcherQueue(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Core::ICorePointerRedirector>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_PointerRoutedAway(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PointerRoutedAway(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PointerRoutedTo(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PointerRoutedTo(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PointerRoutedReleased(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PointerRoutedReleased(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Core::ICoreTouchHitTesting>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_TouchHitTesting(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_TouchHitTesting(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Core::ICoreWindow>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AutomationHostProvider(void**) noexcept = 0;
            virtual int32_t __stdcall get_Bounds(winrt::Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall get_CustomProperties(void**) noexcept = 0;
            virtual int32_t __stdcall get_Dispatcher(void**) noexcept = 0;
            virtual int32_t __stdcall get_FlowDirection(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_FlowDirection(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_IsInputEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsInputEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_PointerCursor(void**) noexcept = 0;
            virtual int32_t __stdcall put_PointerCursor(void*) noexcept = 0;
            virtual int32_t __stdcall get_PointerPosition(winrt::Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_Visible(bool*) noexcept = 0;
            virtual int32_t __stdcall Activate() noexcept = 0;
            virtual int32_t __stdcall Close() noexcept = 0;
            virtual int32_t __stdcall GetAsyncKeyState(int32_t, uint32_t*) noexcept = 0;
            virtual int32_t __stdcall GetKeyState(int32_t, uint32_t*) noexcept = 0;
            virtual int32_t __stdcall ReleasePointerCapture() noexcept = 0;
            virtual int32_t __stdcall SetPointerCapture() noexcept = 0;
            virtual int32_t __stdcall add_Activated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Activated(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_AutomationProviderRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AutomationProviderRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_CharacterReceived(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CharacterReceived(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Closed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Closed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_InputEnabled(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_InputEnabled(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_KeyDown(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_KeyDown(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_KeyUp(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_KeyUp(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PointerCaptureLost(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PointerCaptureLost(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PointerEntered(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PointerEntered(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PointerExited(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PointerExited(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PointerMoved(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PointerMoved(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PointerPressed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PointerPressed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PointerReleased(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PointerReleased(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_TouchHitTesting(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_TouchHitTesting(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PointerWheelChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PointerWheelChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_SizeChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SizeChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_VisibilityChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_VisibilityChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Core::ICoreWindow2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_PointerPosition(winrt::Windows::Foundation::Point) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Core::ICoreWindow3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_ClosestInteractiveBoundsRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ClosestInteractiveBoundsRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall GetCurrentKeyEventDeviceId(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Core::ICoreWindow4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_ResizeStarted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ResizeStarted(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ResizeCompleted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ResizeCompleted(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Core::ICoreWindow5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DispatcherQueue(void**) noexcept = 0;
            virtual int32_t __stdcall get_ActivationMode(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Core::ICoreWindowDialog>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_Showing(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Showing(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_MaxSize(winrt::Windows::Foundation::Size*) noexcept = 0;
            virtual int32_t __stdcall get_MinSize(winrt::Windows::Foundation::Size*) noexcept = 0;
            virtual int32_t __stdcall get_Title(void**) noexcept = 0;
            virtual int32_t __stdcall put_Title(void*) noexcept = 0;
            virtual int32_t __stdcall get_IsInteractionDelayed(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_IsInteractionDelayed(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Commands(void**) noexcept = 0;
            virtual int32_t __stdcall get_DefaultCommandIndex(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_DefaultCommandIndex(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_CancelCommandIndex(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_CancelCommandIndex(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_BackButtonCommand(void**) noexcept = 0;
            virtual int32_t __stdcall put_BackButtonCommand(void*) noexcept = 0;
            virtual int32_t __stdcall ShowAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Core::ICoreWindowDialogFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateWithTitle(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Core::ICoreWindowEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Handled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Handled(bool) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Core::ICoreWindowFlyout>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_Showing(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Showing(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_MaxSize(winrt::Windows::Foundation::Size*) noexcept = 0;
            virtual int32_t __stdcall get_MinSize(winrt::Windows::Foundation::Size*) noexcept = 0;
            virtual int32_t __stdcall get_Title(void**) noexcept = 0;
            virtual int32_t __stdcall put_Title(void*) noexcept = 0;
            virtual int32_t __stdcall get_IsInteractionDelayed(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_IsInteractionDelayed(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Commands(void**) noexcept = 0;
            virtual int32_t __stdcall get_DefaultCommandIndex(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_DefaultCommandIndex(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_BackButtonCommand(void**) noexcept = 0;
            virtual int32_t __stdcall put_BackButtonCommand(void*) noexcept = 0;
            virtual int32_t __stdcall ShowAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Core::ICoreWindowFlyoutFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(winrt::Windows::Foundation::Point, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithTitle(winrt::Windows::Foundation::Point, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Core::ICoreWindowPopupShowingEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetDesiredSize(winrt::Windows::Foundation::Size) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Core::ICoreWindowResizeManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall NotifyLayoutCompleted() noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Core::ICoreWindowResizeManagerLayoutCapability>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_ShouldWaitForLayoutCompletion(bool) noexcept = 0;
            virtual int32_t __stdcall get_ShouldWaitForLayoutCompletion(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Core::ICoreWindowResizeManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForCurrentView(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Core::ICoreWindowStatic>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForCurrentThread(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Core::ICoreWindowWithContext>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_UIContext(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Core::IIdleDispatchedHandlerArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsDispatcherIdle(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Core::IInitializeWithCoreWindow>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Initialize(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Core::IInputEnabledEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_InputEnabled(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Core::IKeyEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_VirtualKey(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_KeyStatus(struct struct_Windows_UI_Core_CorePhysicalKeyStatus*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Core::IKeyEventArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Core::IPointerEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CurrentPoint(void**) noexcept = 0;
            virtual int32_t __stdcall get_KeyModifiers(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall GetIntermediatePoints(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Core::ISystemNavigationManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_BackRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_BackRequested(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Core::ISystemNavigationManager2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AppViewBackButtonVisibility(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_AppViewBackButtonVisibility(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Core::ISystemNavigationManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForCurrentView(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Core::ITouchHitTestingEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ProximityEvaluation(struct struct_Windows_UI_Core_CoreProximityEvaluation*) noexcept = 0;
            virtual int32_t __stdcall put_ProximityEvaluation(struct struct_Windows_UI_Core_CoreProximityEvaluation) noexcept = 0;
            virtual int32_t __stdcall get_Point(winrt::Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_BoundingBox(winrt::Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall EvaluateProximityToRect(winrt::Windows::Foundation::Rect, struct struct_Windows_UI_Core_CoreProximityEvaluation*) noexcept = 0;
            virtual int32_t __stdcall EvaluateProximityToPolygon(uint32_t, winrt::Windows::Foundation::Point*, struct struct_Windows_UI_Core_CoreProximityEvaluation*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Core::IVisibilityChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Visible(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Core::IWindowActivatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_WindowActivationState(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Core::IWindowSizeChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Size(winrt::Windows::Foundation::Size*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Core::DispatchedHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke() noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Core::IdleDispatchedHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_Core_IAcceleratorKeyEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Core::CoreAcceleratorKeyEventType) EventType() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::System::VirtualKey) VirtualKey() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Core::CorePhysicalKeyStatus) KeyStatus() const;
    };
    template <> struct consume<winrt::Windows::UI::Core::IAcceleratorKeyEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Core_IAcceleratorKeyEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_IAcceleratorKeyEventArgs2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DeviceId() const;
    };
    template <> struct consume<winrt::Windows::UI::Core::IAcceleratorKeyEventArgs2>
    {
        template <typename D> using type = consume_Windows_UI_Core_IAcceleratorKeyEventArgs2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_IAutomationProviderRequestedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::IInspectable) AutomationProvider() const;
        WINRT_IMPL_AUTO(void) AutomationProvider(winrt::Windows::Foundation::IInspectable const& value) const;
    };
    template <> struct consume<winrt::Windows::UI::Core::IAutomationProviderRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Core_IAutomationProviderRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_IBackRequestedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Handled() const;
        WINRT_IMPL_AUTO(void) Handled(bool value) const;
    };
    template <> struct consume<winrt::Windows::UI::Core::IBackRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Core_IBackRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_ICharacterReceivedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) KeyCode() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Core::CorePhysicalKeyStatus) KeyStatus() const;
    };
    template <> struct consume<winrt::Windows::UI::Core::ICharacterReceivedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Core_ICharacterReceivedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_IClosestInteractiveBoundsRequestedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Point) PointerPosition() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Rect) SearchBounds() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Rect) ClosestInteractiveBounds() const;
        WINRT_IMPL_AUTO(void) ClosestInteractiveBounds(winrt::Windows::Foundation::Rect const& value) const;
    };
    template <> struct consume<winrt::Windows::UI::Core::IClosestInteractiveBoundsRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Core_IClosestInteractiveBoundsRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_ICoreAcceleratorKeys
    {
        WINRT_IMPL_AUTO(winrt::event_token) AcceleratorKeyActivated(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Core::CoreDispatcher, winrt::Windows::UI::Core::AcceleratorKeyEventArgs> const& handler) const;
        using AcceleratorKeyActivated_revoker = impl::event_revoker<winrt::Windows::UI::Core::ICoreAcceleratorKeys, &impl::abi_t<winrt::Windows::UI::Core::ICoreAcceleratorKeys>::remove_AcceleratorKeyActivated>;
        [[nodiscard]] AcceleratorKeyActivated_revoker AcceleratorKeyActivated(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Core::CoreDispatcher, winrt::Windows::UI::Core::AcceleratorKeyEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) AcceleratorKeyActivated(winrt::event_token const& cookie) const noexcept;
    };
    template <> struct consume<winrt::Windows::UI::Core::ICoreAcceleratorKeys>
    {
        template <typename D> using type = consume_Windows_UI_Core_ICoreAcceleratorKeys<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_ICoreClosestInteractiveBoundsRequested
    {
        WINRT_IMPL_AUTO(winrt::event_token) ClosestInteractiveBoundsRequested(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Core::CoreComponentInputSource, winrt::Windows::UI::Core::ClosestInteractiveBoundsRequestedEventArgs> const& handler) const;
        using ClosestInteractiveBoundsRequested_revoker = impl::event_revoker<winrt::Windows::UI::Core::ICoreClosestInteractiveBoundsRequested, &impl::abi_t<winrt::Windows::UI::Core::ICoreClosestInteractiveBoundsRequested>::remove_ClosestInteractiveBoundsRequested>;
        [[nodiscard]] ClosestInteractiveBoundsRequested_revoker ClosestInteractiveBoundsRequested(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Core::CoreComponentInputSource, winrt::Windows::UI::Core::ClosestInteractiveBoundsRequestedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) ClosestInteractiveBoundsRequested(winrt::event_token const& cookie) const noexcept;
    };
    template <> struct consume<winrt::Windows::UI::Core::ICoreClosestInteractiveBoundsRequested>
    {
        template <typename D> using type = consume_Windows_UI_Core_ICoreClosestInteractiveBoundsRequested<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_ICoreComponentFocusable
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) HasFocus() const;
        WINRT_IMPL_AUTO(winrt::event_token) GotFocus(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable, winrt::Windows::UI::Core::CoreWindowEventArgs> const& handler) const;
        using GotFocus_revoker = impl::event_revoker<winrt::Windows::UI::Core::ICoreComponentFocusable, &impl::abi_t<winrt::Windows::UI::Core::ICoreComponentFocusable>::remove_GotFocus>;
        [[nodiscard]] GotFocus_revoker GotFocus(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable, winrt::Windows::UI::Core::CoreWindowEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) GotFocus(winrt::event_token const& cookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) LostFocus(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable, winrt::Windows::UI::Core::CoreWindowEventArgs> const& handler) const;
        using LostFocus_revoker = impl::event_revoker<winrt::Windows::UI::Core::ICoreComponentFocusable, &impl::abi_t<winrt::Windows::UI::Core::ICoreComponentFocusable>::remove_LostFocus>;
        [[nodiscard]] LostFocus_revoker LostFocus(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable, winrt::Windows::UI::Core::CoreWindowEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) LostFocus(winrt::event_token const& cookie) const noexcept;
    };
    template <> struct consume<winrt::Windows::UI::Core::ICoreComponentFocusable>
    {
        template <typename D> using type = consume_Windows_UI_Core_ICoreComponentFocusable<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_ICoreCursor
    {
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) Id() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Core::CoreCursorType) Type() const;
    };
    template <> struct consume<winrt::Windows::UI::Core::ICoreCursor>
    {
        template <typename D> using type = consume_Windows_UI_Core_ICoreCursor<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_ICoreCursorFactory
    {
        WINRT_IMPL_AUTO(winrt::Windows::UI::Core::CoreCursor) CreateCursor(winrt::Windows::UI::Core::CoreCursorType const& type, uint32_t id) const;
    };
    template <> struct consume<winrt::Windows::UI::Core::ICoreCursorFactory>
    {
        template <typename D> using type = consume_Windows_UI_Core_ICoreCursorFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_ICoreDispatcher
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) HasThreadAccess() const;
        WINRT_IMPL_AUTO(void) ProcessEvents(winrt::Windows::UI::Core::CoreProcessEventsOption const& options) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncAction) RunAsync(winrt::Windows::UI::Core::CoreDispatcherPriority const& priority, winrt::Windows::UI::Core::DispatchedHandler const& agileCallback) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncAction) RunIdleAsync(winrt::Windows::UI::Core::IdleDispatchedHandler const& agileCallback) const;
    };
    template <> struct consume<winrt::Windows::UI::Core::ICoreDispatcher>
    {
        template <typename D> using type = consume_Windows_UI_Core_ICoreDispatcher<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_ICoreDispatcher2
    {
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<bool>) TryRunAsync(winrt::Windows::UI::Core::CoreDispatcherPriority const& priority, winrt::Windows::UI::Core::DispatchedHandler const& agileCallback) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<bool>) TryRunIdleAsync(winrt::Windows::UI::Core::IdleDispatchedHandler const& agileCallback) const;
    };
    template <> struct consume<winrt::Windows::UI::Core::ICoreDispatcher2>
    {
        template <typename D> using type = consume_Windows_UI_Core_ICoreDispatcher2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_ICoreDispatcherWithTaskPriority
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Core::CoreDispatcherPriority) CurrentPriority() const;
        WINRT_IMPL_AUTO(void) CurrentPriority(winrt::Windows::UI::Core::CoreDispatcherPriority const& value) const;
        WINRT_IMPL_AUTO(bool) ShouldYield() const;
        WINRT_IMPL_AUTO(bool) ShouldYield(winrt::Windows::UI::Core::CoreDispatcherPriority const& priority) const;
        WINRT_IMPL_AUTO(void) StopProcessEvents() const;
    };
    template <> struct consume<winrt::Windows::UI::Core::ICoreDispatcherWithTaskPriority>
    {
        template <typename D> using type = consume_Windows_UI_Core_ICoreDispatcherWithTaskPriority<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_ICoreIndependentInputSourceController
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsTransparentForUncontrolledInput() const;
        WINRT_IMPL_AUTO(void) IsTransparentForUncontrolledInput(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsPalmRejectionEnabled() const;
        WINRT_IMPL_AUTO(void) IsPalmRejectionEnabled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Core::CoreIndependentInputSource) Source() const;
        WINRT_IMPL_AUTO(void) SetControlledInput(winrt::Windows::UI::Core::CoreInputDeviceTypes const& inputTypes) const;
        WINRT_IMPL_AUTO(void) SetControlledInput(winrt::Windows::UI::Core::CoreInputDeviceTypes const& inputTypes, winrt::Windows::UI::Core::CoreIndependentInputFilters const& required, winrt::Windows::UI::Core::CoreIndependentInputFilters const& excluded) const;
    };
    template <> struct consume<winrt::Windows::UI::Core::ICoreIndependentInputSourceController>
    {
        template <typename D> using type = consume_Windows_UI_Core_ICoreIndependentInputSourceController<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_ICoreIndependentInputSourceControllerStatics
    {
        WINRT_IMPL_AUTO(winrt::Windows::UI::Core::CoreIndependentInputSourceController) CreateForVisual(winrt::Windows::UI::Composition::Visual const& visual) const;
        WINRT_IMPL_AUTO(winrt::Windows::UI::Core::CoreIndependentInputSourceController) CreateForIVisualElement(winrt::Windows::UI::Composition::IVisualElement const& visualElement) const;
    };
    template <> struct consume<winrt::Windows::UI::Core::ICoreIndependentInputSourceControllerStatics>
    {
        template <typename D> using type = consume_Windows_UI_Core_ICoreIndependentInputSourceControllerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_ICoreInputSourceBase
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Core::CoreDispatcher) Dispatcher() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsInputEnabled() const;
        WINRT_IMPL_AUTO(void) IsInputEnabled(bool value) const;
        WINRT_IMPL_AUTO(winrt::event_token) InputEnabled(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable, winrt::Windows::UI::Core::InputEnabledEventArgs> const& handler) const;
        using InputEnabled_revoker = impl::event_revoker<winrt::Windows::UI::Core::ICoreInputSourceBase, &impl::abi_t<winrt::Windows::UI::Core::ICoreInputSourceBase>::remove_InputEnabled>;
        [[nodiscard]] InputEnabled_revoker InputEnabled(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable, winrt::Windows::UI::Core::InputEnabledEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) InputEnabled(winrt::event_token const& cookie) const noexcept;
    };
    template <> struct consume<winrt::Windows::UI::Core::ICoreInputSourceBase>
    {
        template <typename D> using type = consume_Windows_UI_Core_ICoreInputSourceBase<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_ICoreKeyboardInputSource
    {
        WINRT_IMPL_AUTO(winrt::Windows::UI::Core::CoreVirtualKeyStates) GetCurrentKeyState(winrt::Windows::System::VirtualKey const& virtualKey) const;
        WINRT_IMPL_AUTO(winrt::event_token) CharacterReceived(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable, winrt::Windows::UI::Core::CharacterReceivedEventArgs> const& handler) const;
        using CharacterReceived_revoker = impl::event_revoker<winrt::Windows::UI::Core::ICoreKeyboardInputSource, &impl::abi_t<winrt::Windows::UI::Core::ICoreKeyboardInputSource>::remove_CharacterReceived>;
        [[nodiscard]] CharacterReceived_revoker CharacterReceived(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable, winrt::Windows::UI::Core::CharacterReceivedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) CharacterReceived(winrt::event_token const& cookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) KeyDown(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable, winrt::Windows::UI::Core::KeyEventArgs> const& handler) const;
        using KeyDown_revoker = impl::event_revoker<winrt::Windows::UI::Core::ICoreKeyboardInputSource, &impl::abi_t<winrt::Windows::UI::Core::ICoreKeyboardInputSource>::remove_KeyDown>;
        [[nodiscard]] KeyDown_revoker KeyDown(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable, winrt::Windows::UI::Core::KeyEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) KeyDown(winrt::event_token const& cookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) KeyUp(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable, winrt::Windows::UI::Core::KeyEventArgs> const& handler) const;
        using KeyUp_revoker = impl::event_revoker<winrt::Windows::UI::Core::ICoreKeyboardInputSource, &impl::abi_t<winrt::Windows::UI::Core::ICoreKeyboardInputSource>::remove_KeyUp>;
        [[nodiscard]] KeyUp_revoker KeyUp(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable, winrt::Windows::UI::Core::KeyEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) KeyUp(winrt::event_token const& cookie) const noexcept;
    };
    template <> struct consume<winrt::Windows::UI::Core::ICoreKeyboardInputSource>
    {
        template <typename D> using type = consume_Windows_UI_Core_ICoreKeyboardInputSource<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_ICoreKeyboardInputSource2
    {
        WINRT_IMPL_AUTO(hstring) GetCurrentKeyEventDeviceId() const;
    };
    template <> struct consume<winrt::Windows::UI::Core::ICoreKeyboardInputSource2>
    {
        template <typename D> using type = consume_Windows_UI_Core_ICoreKeyboardInputSource2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_ICorePointerInputSource
    {
        WINRT_IMPL_AUTO(void) ReleasePointerCapture() const;
        WINRT_IMPL_AUTO(void) SetPointerCapture() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) HasCapture() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Point) PointerPosition() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Core::CoreCursor) PointerCursor() const;
        WINRT_IMPL_AUTO(void) PointerCursor(winrt::Windows::UI::Core::CoreCursor const& value) const;
        WINRT_IMPL_AUTO(winrt::event_token) PointerCaptureLost(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable, winrt::Windows::UI::Core::PointerEventArgs> const& handler) const;
        using PointerCaptureLost_revoker = impl::event_revoker<winrt::Windows::UI::Core::ICorePointerInputSource, &impl::abi_t<winrt::Windows::UI::Core::ICorePointerInputSource>::remove_PointerCaptureLost>;
        [[nodiscard]] PointerCaptureLost_revoker PointerCaptureLost(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable, winrt::Windows::UI::Core::PointerEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) PointerCaptureLost(winrt::event_token const& cookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) PointerEntered(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable, winrt::Windows::UI::Core::PointerEventArgs> const& handler) const;
        using PointerEntered_revoker = impl::event_revoker<winrt::Windows::UI::Core::ICorePointerInputSource, &impl::abi_t<winrt::Windows::UI::Core::ICorePointerInputSource>::remove_PointerEntered>;
        [[nodiscard]] PointerEntered_revoker PointerEntered(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable, winrt::Windows::UI::Core::PointerEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) PointerEntered(winrt::event_token const& cookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) PointerExited(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable, winrt::Windows::UI::Core::PointerEventArgs> const& handler) const;
        using PointerExited_revoker = impl::event_revoker<winrt::Windows::UI::Core::ICorePointerInputSource, &impl::abi_t<winrt::Windows::UI::Core::ICorePointerInputSource>::remove_PointerExited>;
        [[nodiscard]] PointerExited_revoker PointerExited(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable, winrt::Windows::UI::Core::PointerEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) PointerExited(winrt::event_token const& cookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) PointerMoved(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable, winrt::Windows::UI::Core::PointerEventArgs> const& handler) const;
        using PointerMoved_revoker = impl::event_revoker<winrt::Windows::UI::Core::ICorePointerInputSource, &impl::abi_t<winrt::Windows::UI::Core::ICorePointerInputSource>::remove_PointerMoved>;
        [[nodiscard]] PointerMoved_revoker PointerMoved(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable, winrt::Windows::UI::Core::PointerEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) PointerMoved(winrt::event_token const& cookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) PointerPressed(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable, winrt::Windows::UI::Core::PointerEventArgs> const& handler) const;
        using PointerPressed_revoker = impl::event_revoker<winrt::Windows::UI::Core::ICorePointerInputSource, &impl::abi_t<winrt::Windows::UI::Core::ICorePointerInputSource>::remove_PointerPressed>;
        [[nodiscard]] PointerPressed_revoker PointerPressed(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable, winrt::Windows::UI::Core::PointerEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) PointerPressed(winrt::event_token const& cookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) PointerReleased(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable, winrt::Windows::UI::Core::PointerEventArgs> const& handler) const;
        using PointerReleased_revoker = impl::event_revoker<winrt::Windows::UI::Core::ICorePointerInputSource, &impl::abi_t<winrt::Windows::UI::Core::ICorePointerInputSource>::remove_PointerReleased>;
        [[nodiscard]] PointerReleased_revoker PointerReleased(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable, winrt::Windows::UI::Core::PointerEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) PointerReleased(winrt::event_token const& cookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) PointerWheelChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable, winrt::Windows::UI::Core::PointerEventArgs> const& handler) const;
        using PointerWheelChanged_revoker = impl::event_revoker<winrt::Windows::UI::Core::ICorePointerInputSource, &impl::abi_t<winrt::Windows::UI::Core::ICorePointerInputSource>::remove_PointerWheelChanged>;
        [[nodiscard]] PointerWheelChanged_revoker PointerWheelChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable, winrt::Windows::UI::Core::PointerEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) PointerWheelChanged(winrt::event_token const& cookie) const noexcept;
    };
    template <> struct consume<winrt::Windows::UI::Core::ICorePointerInputSource>
    {
        template <typename D> using type = consume_Windows_UI_Core_ICorePointerInputSource<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_ICorePointerInputSource2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::System::DispatcherQueue) DispatcherQueue() const;
    };
    template <> struct consume<winrt::Windows::UI::Core::ICorePointerInputSource2>
    {
        template <typename D> using type = consume_Windows_UI_Core_ICorePointerInputSource2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_ICorePointerRedirector
    {
        WINRT_IMPL_AUTO(winrt::event_token) PointerRoutedAway(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Core::ICorePointerRedirector, winrt::Windows::UI::Core::PointerEventArgs> const& handler) const;
        using PointerRoutedAway_revoker = impl::event_revoker<winrt::Windows::UI::Core::ICorePointerRedirector, &impl::abi_t<winrt::Windows::UI::Core::ICorePointerRedirector>::remove_PointerRoutedAway>;
        [[nodiscard]] PointerRoutedAway_revoker PointerRoutedAway(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Core::ICorePointerRedirector, winrt::Windows::UI::Core::PointerEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) PointerRoutedAway(winrt::event_token const& cookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) PointerRoutedTo(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Core::ICorePointerRedirector, winrt::Windows::UI::Core::PointerEventArgs> const& handler) const;
        using PointerRoutedTo_revoker = impl::event_revoker<winrt::Windows::UI::Core::ICorePointerRedirector, &impl::abi_t<winrt::Windows::UI::Core::ICorePointerRedirector>::remove_PointerRoutedTo>;
        [[nodiscard]] PointerRoutedTo_revoker PointerRoutedTo(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Core::ICorePointerRedirector, winrt::Windows::UI::Core::PointerEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) PointerRoutedTo(winrt::event_token const& cookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) PointerRoutedReleased(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Core::ICorePointerRedirector, winrt::Windows::UI::Core::PointerEventArgs> const& handler) const;
        using PointerRoutedReleased_revoker = impl::event_revoker<winrt::Windows::UI::Core::ICorePointerRedirector, &impl::abi_t<winrt::Windows::UI::Core::ICorePointerRedirector>::remove_PointerRoutedReleased>;
        [[nodiscard]] PointerRoutedReleased_revoker PointerRoutedReleased(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Core::ICorePointerRedirector, winrt::Windows::UI::Core::PointerEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) PointerRoutedReleased(winrt::event_token const& cookie) const noexcept;
    };
    template <> struct consume<winrt::Windows::UI::Core::ICorePointerRedirector>
    {
        template <typename D> using type = consume_Windows_UI_Core_ICorePointerRedirector<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_ICoreTouchHitTesting
    {
        WINRT_IMPL_AUTO(winrt::event_token) TouchHitTesting(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable, winrt::Windows::UI::Core::TouchHitTestingEventArgs> const& handler) const;
        using TouchHitTesting_revoker = impl::event_revoker<winrt::Windows::UI::Core::ICoreTouchHitTesting, &impl::abi_t<winrt::Windows::UI::Core::ICoreTouchHitTesting>::remove_TouchHitTesting>;
        [[nodiscard]] TouchHitTesting_revoker TouchHitTesting(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable, winrt::Windows::UI::Core::TouchHitTestingEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) TouchHitTesting(winrt::event_token const& cookie) const noexcept;
    };
    template <> struct consume<winrt::Windows::UI::Core::ICoreTouchHitTesting>
    {
        template <typename D> using type = consume_Windows_UI_Core_ICoreTouchHitTesting<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_ICoreWindow
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::IInspectable) AutomationHostProvider() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Rect) Bounds() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IPropertySet) CustomProperties() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Core::CoreDispatcher) Dispatcher() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Core::CoreWindowFlowDirection) FlowDirection() const;
        WINRT_IMPL_AUTO(void) FlowDirection(winrt::Windows::UI::Core::CoreWindowFlowDirection const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsInputEnabled() const;
        WINRT_IMPL_AUTO(void) IsInputEnabled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Core::CoreCursor) PointerCursor() const;
        WINRT_IMPL_AUTO(void) PointerCursor(winrt::Windows::UI::Core::CoreCursor const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Point) PointerPosition() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Visible() const;
        WINRT_IMPL_AUTO(void) Activate() const;
        WINRT_IMPL_AUTO(void) Close() const;
        WINRT_IMPL_AUTO(winrt::Windows::UI::Core::CoreVirtualKeyStates) GetAsyncKeyState(winrt::Windows::System::VirtualKey const& virtualKey) const;
        WINRT_IMPL_AUTO(winrt::Windows::UI::Core::CoreVirtualKeyStates) GetKeyState(winrt::Windows::System::VirtualKey const& virtualKey) const;
        WINRT_IMPL_AUTO(void) ReleasePointerCapture() const;
        WINRT_IMPL_AUTO(void) SetPointerCapture() const;
        WINRT_IMPL_AUTO(winrt::event_token) Activated(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Core::CoreWindow, winrt::Windows::UI::Core::WindowActivatedEventArgs> const& handler) const;
        using Activated_revoker = impl::event_revoker<winrt::Windows::UI::Core::ICoreWindow, &impl::abi_t<winrt::Windows::UI::Core::ICoreWindow>::remove_Activated>;
        [[nodiscard]] Activated_revoker Activated(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Core::CoreWindow, winrt::Windows::UI::Core::WindowActivatedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) Activated(winrt::event_token const& cookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) AutomationProviderRequested(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Core::CoreWindow, winrt::Windows::UI::Core::AutomationProviderRequestedEventArgs> const& handler) const;
        using AutomationProviderRequested_revoker = impl::event_revoker<winrt::Windows::UI::Core::ICoreWindow, &impl::abi_t<winrt::Windows::UI::Core::ICoreWindow>::remove_AutomationProviderRequested>;
        [[nodiscard]] AutomationProviderRequested_revoker AutomationProviderRequested(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Core::CoreWindow, winrt::Windows::UI::Core::AutomationProviderRequestedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) AutomationProviderRequested(winrt::event_token const& cookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) CharacterReceived(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Core::CoreWindow, winrt::Windows::UI::Core::CharacterReceivedEventArgs> const& handler) const;
        using CharacterReceived_revoker = impl::event_revoker<winrt::Windows::UI::Core::ICoreWindow, &impl::abi_t<winrt::Windows::UI::Core::ICoreWindow>::remove_CharacterReceived>;
        [[nodiscard]] CharacterReceived_revoker CharacterReceived(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Core::CoreWindow, winrt::Windows::UI::Core::CharacterReceivedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) CharacterReceived(winrt::event_token const& cookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) Closed(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Core::CoreWindow, winrt::Windows::UI::Core::CoreWindowEventArgs> const& handler) const;
        using Closed_revoker = impl::event_revoker<winrt::Windows::UI::Core::ICoreWindow, &impl::abi_t<winrt::Windows::UI::Core::ICoreWindow>::remove_Closed>;
        [[nodiscard]] Closed_revoker Closed(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Core::CoreWindow, winrt::Windows::UI::Core::CoreWindowEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) Closed(winrt::event_token const& cookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) InputEnabled(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Core::CoreWindow, winrt::Windows::UI::Core::InputEnabledEventArgs> const& handler) const;
        using InputEnabled_revoker = impl::event_revoker<winrt::Windows::UI::Core::ICoreWindow, &impl::abi_t<winrt::Windows::UI::Core::ICoreWindow>::remove_InputEnabled>;
        [[nodiscard]] InputEnabled_revoker InputEnabled(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Core::CoreWindow, winrt::Windows::UI::Core::InputEnabledEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) InputEnabled(winrt::event_token const& cookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) KeyDown(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Core::CoreWindow, winrt::Windows::UI::Core::KeyEventArgs> const& handler) const;
        using KeyDown_revoker = impl::event_revoker<winrt::Windows::UI::Core::ICoreWindow, &impl::abi_t<winrt::Windows::UI::Core::ICoreWindow>::remove_KeyDown>;
        [[nodiscard]] KeyDown_revoker KeyDown(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Core::CoreWindow, winrt::Windows::UI::Core::KeyEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) KeyDown(winrt::event_token const& cookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) KeyUp(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Core::CoreWindow, winrt::Windows::UI::Core::KeyEventArgs> const& handler) const;
        using KeyUp_revoker = impl::event_revoker<winrt::Windows::UI::Core::ICoreWindow, &impl::abi_t<winrt::Windows::UI::Core::ICoreWindow>::remove_KeyUp>;
        [[nodiscard]] KeyUp_revoker KeyUp(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Core::CoreWindow, winrt::Windows::UI::Core::KeyEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) KeyUp(winrt::event_token const& cookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) PointerCaptureLost(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Core::CoreWindow, winrt::Windows::UI::Core::PointerEventArgs> const& handler) const;
        using PointerCaptureLost_revoker = impl::event_revoker<winrt::Windows::UI::Core::ICoreWindow, &impl::abi_t<winrt::Windows::UI::Core::ICoreWindow>::remove_PointerCaptureLost>;
        [[nodiscard]] PointerCaptureLost_revoker PointerCaptureLost(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Core::CoreWindow, winrt::Windows::UI::Core::PointerEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) PointerCaptureLost(winrt::event_token const& cookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) PointerEntered(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Core::CoreWindow, winrt::Windows::UI::Core::PointerEventArgs> const& handler) const;
        using PointerEntered_revoker = impl::event_revoker<winrt::Windows::UI::Core::ICoreWindow, &impl::abi_t<winrt::Windows::UI::Core::ICoreWindow>::remove_PointerEntered>;
        [[nodiscard]] PointerEntered_revoker PointerEntered(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Core::CoreWindow, winrt::Windows::UI::Core::PointerEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) PointerEntered(winrt::event_token const& cookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) PointerExited(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Core::CoreWindow, winrt::Windows::UI::Core::PointerEventArgs> const& handler) const;
        using PointerExited_revoker = impl::event_revoker<winrt::Windows::UI::Core::ICoreWindow, &impl::abi_t<winrt::Windows::UI::Core::ICoreWindow>::remove_PointerExited>;
        [[nodiscard]] PointerExited_revoker PointerExited(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Core::CoreWindow, winrt::Windows::UI::Core::PointerEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) PointerExited(winrt::event_token const& cookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) PointerMoved(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Core::CoreWindow, winrt::Windows::UI::Core::PointerEventArgs> const& handler) const;
        using PointerMoved_revoker = impl::event_revoker<winrt::Windows::UI::Core::ICoreWindow, &impl::abi_t<winrt::Windows::UI::Core::ICoreWindow>::remove_PointerMoved>;
        [[nodiscard]] PointerMoved_revoker PointerMoved(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Core::CoreWindow, winrt::Windows::UI::Core::PointerEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) PointerMoved(winrt::event_token const& cookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) PointerPressed(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Core::CoreWindow, winrt::Windows::UI::Core::PointerEventArgs> const& handler) const;
        using PointerPressed_revoker = impl::event_revoker<winrt::Windows::UI::Core::ICoreWindow, &impl::abi_t<winrt::Windows::UI::Core::ICoreWindow>::remove_PointerPressed>;
        [[nodiscard]] PointerPressed_revoker PointerPressed(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Core::CoreWindow, winrt::Windows::UI::Core::PointerEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) PointerPressed(winrt::event_token const& cookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) PointerReleased(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Core::CoreWindow, winrt::Windows::UI::Core::PointerEventArgs> const& handler) const;
        using PointerReleased_revoker = impl::event_revoker<winrt::Windows::UI::Core::ICoreWindow, &impl::abi_t<winrt::Windows::UI::Core::ICoreWindow>::remove_PointerReleased>;
        [[nodiscard]] PointerReleased_revoker PointerReleased(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Core::CoreWindow, winrt::Windows::UI::Core::PointerEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) PointerReleased(winrt::event_token const& cookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) TouchHitTesting(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Core::CoreWindow, winrt::Windows::UI::Core::TouchHitTestingEventArgs> const& handler) const;
        using TouchHitTesting_revoker = impl::event_revoker<winrt::Windows::UI::Core::ICoreWindow, &impl::abi_t<winrt::Windows::UI::Core::ICoreWindow>::remove_TouchHitTesting>;
        [[nodiscard]] TouchHitTesting_revoker TouchHitTesting(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Core::CoreWindow, winrt::Windows::UI::Core::TouchHitTestingEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) TouchHitTesting(winrt::event_token const& cookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) PointerWheelChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Core::CoreWindow, winrt::Windows::UI::Core::PointerEventArgs> const& handler) const;
        using PointerWheelChanged_revoker = impl::event_revoker<winrt::Windows::UI::Core::ICoreWindow, &impl::abi_t<winrt::Windows::UI::Core::ICoreWindow>::remove_PointerWheelChanged>;
        [[nodiscard]] PointerWheelChanged_revoker PointerWheelChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Core::CoreWindow, winrt::Windows::UI::Core::PointerEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) PointerWheelChanged(winrt::event_token const& cookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) SizeChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Core::CoreWindow, winrt::Windows::UI::Core::WindowSizeChangedEventArgs> const& handler) const;
        using SizeChanged_revoker = impl::event_revoker<winrt::Windows::UI::Core::ICoreWindow, &impl::abi_t<winrt::Windows::UI::Core::ICoreWindow>::remove_SizeChanged>;
        [[nodiscard]] SizeChanged_revoker SizeChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Core::CoreWindow, winrt::Windows::UI::Core::WindowSizeChangedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) SizeChanged(winrt::event_token const& cookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) VisibilityChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Core::CoreWindow, winrt::Windows::UI::Core::VisibilityChangedEventArgs> const& handler) const;
        using VisibilityChanged_revoker = impl::event_revoker<winrt::Windows::UI::Core::ICoreWindow, &impl::abi_t<winrt::Windows::UI::Core::ICoreWindow>::remove_VisibilityChanged>;
        [[nodiscard]] VisibilityChanged_revoker VisibilityChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Core::CoreWindow, winrt::Windows::UI::Core::VisibilityChangedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) VisibilityChanged(winrt::event_token const& cookie) const noexcept;
    };
    template <> struct consume<winrt::Windows::UI::Core::ICoreWindow>
    {
        template <typename D> using type = consume_Windows_UI_Core_ICoreWindow<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_ICoreWindow2
    {
        WINRT_IMPL_AUTO(void) PointerPosition(winrt::Windows::Foundation::Point const& value) const;
    };
    template <> struct consume<winrt::Windows::UI::Core::ICoreWindow2>
    {
        template <typename D> using type = consume_Windows_UI_Core_ICoreWindow2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_ICoreWindow3
    {
        WINRT_IMPL_AUTO(winrt::event_token) ClosestInteractiveBoundsRequested(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Core::CoreWindow, winrt::Windows::UI::Core::ClosestInteractiveBoundsRequestedEventArgs> const& handler) const;
        using ClosestInteractiveBoundsRequested_revoker = impl::event_revoker<winrt::Windows::UI::Core::ICoreWindow3, &impl::abi_t<winrt::Windows::UI::Core::ICoreWindow3>::remove_ClosestInteractiveBoundsRequested>;
        [[nodiscard]] ClosestInteractiveBoundsRequested_revoker ClosestInteractiveBoundsRequested(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Core::CoreWindow, winrt::Windows::UI::Core::ClosestInteractiveBoundsRequestedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) ClosestInteractiveBoundsRequested(winrt::event_token const& cookie) const noexcept;
        WINRT_IMPL_AUTO(hstring) GetCurrentKeyEventDeviceId() const;
    };
    template <> struct consume<winrt::Windows::UI::Core::ICoreWindow3>
    {
        template <typename D> using type = consume_Windows_UI_Core_ICoreWindow3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_ICoreWindow4
    {
        WINRT_IMPL_AUTO(winrt::event_token) ResizeStarted(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Core::CoreWindow, winrt::Windows::Foundation::IInspectable> const& handler) const;
        using ResizeStarted_revoker = impl::event_revoker<winrt::Windows::UI::Core::ICoreWindow4, &impl::abi_t<winrt::Windows::UI::Core::ICoreWindow4>::remove_ResizeStarted>;
        [[nodiscard]] ResizeStarted_revoker ResizeStarted(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Core::CoreWindow, winrt::Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) ResizeStarted(winrt::event_token const& cookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) ResizeCompleted(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Core::CoreWindow, winrt::Windows::Foundation::IInspectable> const& handler) const;
        using ResizeCompleted_revoker = impl::event_revoker<winrt::Windows::UI::Core::ICoreWindow4, &impl::abi_t<winrt::Windows::UI::Core::ICoreWindow4>::remove_ResizeCompleted>;
        [[nodiscard]] ResizeCompleted_revoker ResizeCompleted(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Core::CoreWindow, winrt::Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) ResizeCompleted(winrt::event_token const& cookie) const noexcept;
    };
    template <> struct consume<winrt::Windows::UI::Core::ICoreWindow4>
    {
        template <typename D> using type = consume_Windows_UI_Core_ICoreWindow4<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_ICoreWindow5
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::System::DispatcherQueue) DispatcherQueue() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Core::CoreWindowActivationMode) ActivationMode() const;
    };
    template <> struct consume<winrt::Windows::UI::Core::ICoreWindow5>
    {
        template <typename D> using type = consume_Windows_UI_Core_ICoreWindow5<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_ICoreWindowDialog
    {
        WINRT_IMPL_AUTO(winrt::event_token) Showing(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Core::CoreWindow, winrt::Windows::UI::Core::CoreWindowPopupShowingEventArgs> const& handler) const;
        using Showing_revoker = impl::event_revoker<winrt::Windows::UI::Core::ICoreWindowDialog, &impl::abi_t<winrt::Windows::UI::Core::ICoreWindowDialog>::remove_Showing>;
        [[nodiscard]] Showing_revoker Showing(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Core::CoreWindow, winrt::Windows::UI::Core::CoreWindowPopupShowingEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) Showing(winrt::event_token const& cookie) const noexcept;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Size) MaxSize() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Size) MinSize() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Title() const;
        WINRT_IMPL_AUTO(void) Title(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) IsInteractionDelayed() const;
        WINRT_IMPL_AUTO(void) IsInteractionDelayed(int32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::Popups::IUICommand>) Commands() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) DefaultCommandIndex() const;
        WINRT_IMPL_AUTO(void) DefaultCommandIndex(uint32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) CancelCommandIndex() const;
        WINRT_IMPL_AUTO(void) CancelCommandIndex(uint32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Popups::UICommandInvokedHandler) BackButtonCommand() const;
        WINRT_IMPL_AUTO(void) BackButtonCommand(winrt::Windows::UI::Popups::UICommandInvokedHandler const& value) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::UI::Popups::IUICommand>) ShowAsync() const;
    };
    template <> struct consume<winrt::Windows::UI::Core::ICoreWindowDialog>
    {
        template <typename D> using type = consume_Windows_UI_Core_ICoreWindowDialog<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_ICoreWindowDialogFactory
    {
        WINRT_IMPL_AUTO(winrt::Windows::UI::Core::CoreWindowDialog) CreateWithTitle(param::hstring const& title) const;
    };
    template <> struct consume<winrt::Windows::UI::Core::ICoreWindowDialogFactory>
    {
        template <typename D> using type = consume_Windows_UI_Core_ICoreWindowDialogFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_ICoreWindowEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Handled() const;
        WINRT_IMPL_AUTO(void) Handled(bool value) const;
    };
    template <> struct consume<winrt::Windows::UI::Core::ICoreWindowEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Core_ICoreWindowEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_ICoreWindowFlyout
    {
        WINRT_IMPL_AUTO(winrt::event_token) Showing(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Core::CoreWindow, winrt::Windows::UI::Core::CoreWindowPopupShowingEventArgs> const& handler) const;
        using Showing_revoker = impl::event_revoker<winrt::Windows::UI::Core::ICoreWindowFlyout, &impl::abi_t<winrt::Windows::UI::Core::ICoreWindowFlyout>::remove_Showing>;
        [[nodiscard]] Showing_revoker Showing(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Core::CoreWindow, winrt::Windows::UI::Core::CoreWindowPopupShowingEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) Showing(winrt::event_token const& cookie) const noexcept;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Size) MaxSize() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Size) MinSize() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Title() const;
        WINRT_IMPL_AUTO(void) Title(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) IsInteractionDelayed() const;
        WINRT_IMPL_AUTO(void) IsInteractionDelayed(int32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::Popups::IUICommand>) Commands() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) DefaultCommandIndex() const;
        WINRT_IMPL_AUTO(void) DefaultCommandIndex(uint32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Popups::UICommandInvokedHandler) BackButtonCommand() const;
        WINRT_IMPL_AUTO(void) BackButtonCommand(winrt::Windows::UI::Popups::UICommandInvokedHandler const& value) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::UI::Popups::IUICommand>) ShowAsync() const;
    };
    template <> struct consume<winrt::Windows::UI::Core::ICoreWindowFlyout>
    {
        template <typename D> using type = consume_Windows_UI_Core_ICoreWindowFlyout<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_ICoreWindowFlyoutFactory
    {
        WINRT_IMPL_AUTO(winrt::Windows::UI::Core::CoreWindowFlyout) Create(winrt::Windows::Foundation::Point const& position) const;
        WINRT_IMPL_AUTO(winrt::Windows::UI::Core::CoreWindowFlyout) CreateWithTitle(winrt::Windows::Foundation::Point const& position, param::hstring const& title) const;
    };
    template <> struct consume<winrt::Windows::UI::Core::ICoreWindowFlyoutFactory>
    {
        template <typename D> using type = consume_Windows_UI_Core_ICoreWindowFlyoutFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_ICoreWindowPopupShowingEventArgs
    {
        WINRT_IMPL_AUTO(void) SetDesiredSize(winrt::Windows::Foundation::Size const& value) const;
    };
    template <> struct consume<winrt::Windows::UI::Core::ICoreWindowPopupShowingEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Core_ICoreWindowPopupShowingEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_ICoreWindowResizeManager
    {
        WINRT_IMPL_AUTO(void) NotifyLayoutCompleted() const;
    };
    template <> struct consume<winrt::Windows::UI::Core::ICoreWindowResizeManager>
    {
        template <typename D> using type = consume_Windows_UI_Core_ICoreWindowResizeManager<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_ICoreWindowResizeManagerLayoutCapability
    {
        WINRT_IMPL_AUTO(void) ShouldWaitForLayoutCompletion(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) ShouldWaitForLayoutCompletion() const;
    };
    template <> struct consume<winrt::Windows::UI::Core::ICoreWindowResizeManagerLayoutCapability>
    {
        template <typename D> using type = consume_Windows_UI_Core_ICoreWindowResizeManagerLayoutCapability<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_ICoreWindowResizeManagerStatics
    {
        WINRT_IMPL_AUTO(winrt::Windows::UI::Core::CoreWindowResizeManager) GetForCurrentView() const;
    };
    template <> struct consume<winrt::Windows::UI::Core::ICoreWindowResizeManagerStatics>
    {
        template <typename D> using type = consume_Windows_UI_Core_ICoreWindowResizeManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_ICoreWindowStatic
    {
        WINRT_IMPL_AUTO(winrt::Windows::UI::Core::CoreWindow) GetForCurrentThread() const;
    };
    template <> struct consume<winrt::Windows::UI::Core::ICoreWindowStatic>
    {
        template <typename D> using type = consume_Windows_UI_Core_ICoreWindowStatic<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_ICoreWindowWithContext
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::UIContext) UIContext() const;
    };
    template <> struct consume<winrt::Windows::UI::Core::ICoreWindowWithContext>
    {
        template <typename D> using type = consume_Windows_UI_Core_ICoreWindowWithContext<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_IIdleDispatchedHandlerArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsDispatcherIdle() const;
    };
    template <> struct consume<winrt::Windows::UI::Core::IIdleDispatchedHandlerArgs>
    {
        template <typename D> using type = consume_Windows_UI_Core_IIdleDispatchedHandlerArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_IInitializeWithCoreWindow
    {
        WINRT_IMPL_AUTO(void) Initialize(winrt::Windows::UI::Core::CoreWindow const& window) const;
    };
    template <> struct consume<winrt::Windows::UI::Core::IInitializeWithCoreWindow>
    {
        template <typename D> using type = consume_Windows_UI_Core_IInitializeWithCoreWindow<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_IInputEnabledEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) InputEnabled() const;
    };
    template <> struct consume<winrt::Windows::UI::Core::IInputEnabledEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Core_IInputEnabledEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_IKeyEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::System::VirtualKey) VirtualKey() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Core::CorePhysicalKeyStatus) KeyStatus() const;
    };
    template <> struct consume<winrt::Windows::UI::Core::IKeyEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Core_IKeyEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_IKeyEventArgs2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DeviceId() const;
    };
    template <> struct consume<winrt::Windows::UI::Core::IKeyEventArgs2>
    {
        template <typename D> using type = consume_Windows_UI_Core_IKeyEventArgs2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_IPointerEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Input::PointerPoint) CurrentPoint() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::System::VirtualKeyModifiers) KeyModifiers() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::Input::PointerPoint>) GetIntermediatePoints() const;
    };
    template <> struct consume<winrt::Windows::UI::Core::IPointerEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Core_IPointerEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_ISystemNavigationManager
    {
        WINRT_IMPL_AUTO(winrt::event_token) BackRequested(winrt::Windows::Foundation::EventHandler<winrt::Windows::UI::Core::BackRequestedEventArgs> const& handler) const;
        using BackRequested_revoker = impl::event_revoker<winrt::Windows::UI::Core::ISystemNavigationManager, &impl::abi_t<winrt::Windows::UI::Core::ISystemNavigationManager>::remove_BackRequested>;
        [[nodiscard]] BackRequested_revoker BackRequested(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::UI::Core::BackRequestedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) BackRequested(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<winrt::Windows::UI::Core::ISystemNavigationManager>
    {
        template <typename D> using type = consume_Windows_UI_Core_ISystemNavigationManager<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_ISystemNavigationManager2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Core::AppViewBackButtonVisibility) AppViewBackButtonVisibility() const;
        WINRT_IMPL_AUTO(void) AppViewBackButtonVisibility(winrt::Windows::UI::Core::AppViewBackButtonVisibility const& value) const;
    };
    template <> struct consume<winrt::Windows::UI::Core::ISystemNavigationManager2>
    {
        template <typename D> using type = consume_Windows_UI_Core_ISystemNavigationManager2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_ISystemNavigationManagerStatics
    {
        WINRT_IMPL_AUTO(winrt::Windows::UI::Core::SystemNavigationManager) GetForCurrentView() const;
    };
    template <> struct consume<winrt::Windows::UI::Core::ISystemNavigationManagerStatics>
    {
        template <typename D> using type = consume_Windows_UI_Core_ISystemNavigationManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_ITouchHitTestingEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Core::CoreProximityEvaluation) ProximityEvaluation() const;
        WINRT_IMPL_AUTO(void) ProximityEvaluation(winrt::Windows::UI::Core::CoreProximityEvaluation const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Point) Point() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Rect) BoundingBox() const;
        WINRT_IMPL_AUTO(winrt::Windows::UI::Core::CoreProximityEvaluation) EvaluateProximity(winrt::Windows::Foundation::Rect const& controlBoundingBox) const;
        WINRT_IMPL_AUTO(winrt::Windows::UI::Core::CoreProximityEvaluation) EvaluateProximity(array_view<winrt::Windows::Foundation::Point const> controlVertices) const;
    };
    template <> struct consume<winrt::Windows::UI::Core::ITouchHitTestingEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Core_ITouchHitTestingEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_IVisibilityChangedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Visible() const;
    };
    template <> struct consume<winrt::Windows::UI::Core::IVisibilityChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Core_IVisibilityChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_IWindowActivatedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Core::CoreWindowActivationState) WindowActivationState() const;
    };
    template <> struct consume<winrt::Windows::UI::Core::IWindowActivatedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Core_IWindowActivatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_IWindowSizeChangedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Size) Size() const;
    };
    template <> struct consume<winrt::Windows::UI::Core::IWindowSizeChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Core_IWindowSizeChangedEventArgs<D>;
    };
    struct struct_Windows_UI_Core_CorePhysicalKeyStatus
    {
        uint32_t RepeatCount;
        uint32_t ScanCode;
        bool IsExtendedKey;
        bool IsMenuKeyDown;
        bool WasKeyDown;
        bool IsKeyReleased;
    };
    template <> struct abi<Windows::UI::Core::CorePhysicalKeyStatus>
    {
        using type = struct_Windows_UI_Core_CorePhysicalKeyStatus;
    };
    struct struct_Windows_UI_Core_CoreProximityEvaluation
    {
        int32_t Score;
        winrt::Windows::Foundation::Point AdjustedPoint;
    };
    template <> struct abi<Windows::UI::Core::CoreProximityEvaluation>
    {
        using type = struct_Windows_UI_Core_CoreProximityEvaluation;
    };
}
#endif
