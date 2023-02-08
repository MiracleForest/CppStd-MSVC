// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_UI_Xaml_2_H
#define WINRT_Windows_UI_Xaml_2_H
#include "winrt/impl/Windows.ApplicationModel.2.h"
#include "winrt/impl/Windows.ApplicationModel.Activation.2.h"
#include "winrt/impl/Windows.ApplicationModel.Core.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.UI.Composition.2.h"
#include "winrt/impl/Windows.UI.Core.2.h"
#include "winrt/impl/Windows.UI.Xaml.Automation.Peers.2.h"
#include "winrt/impl/Windows.UI.Xaml.Controls.2.h"
#include "winrt/impl/Windows.UI.Xaml.Controls.Primitives.2.h"
#include "winrt/impl/Windows.UI.Xaml.Input.2.h"
#include "winrt/impl/Windows.UI.Xaml.Interop.2.h"
#include "winrt/impl/Windows.UI.Xaml.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::Xaml
{
    struct ApplicationInitializationCallback : winrt::Windows::Foundation::IUnknown
    {
        ApplicationInitializationCallback(std::nullptr_t = nullptr) noexcept {}
        ApplicationInitializationCallback(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> ApplicationInitializationCallback(L lambda);
        template <typename F> ApplicationInitializationCallback(F* function);
        template <typename O, typename M> ApplicationInitializationCallback(O* object, M method);
        template <typename O, typename M> ApplicationInitializationCallback(com_ptr<O>&& object, M method);
        template <typename O, typename M> ApplicationInitializationCallback(weak_ref<O>&& object, M method);
        auto operator()(winrt::Windows::UI::Xaml::ApplicationInitializationCallbackParams const& p) const;
    };
    struct BindingFailedEventHandler : winrt::Windows::Foundation::IUnknown
    {
        BindingFailedEventHandler(std::nullptr_t = nullptr) noexcept {}
        BindingFailedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> BindingFailedEventHandler(L lambda);
        template <typename F> BindingFailedEventHandler(F* function);
        template <typename O, typename M> BindingFailedEventHandler(O* object, M method);
        template <typename O, typename M> BindingFailedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> BindingFailedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::BindingFailedEventArgs const& e) const;
    };
    struct CreateDefaultValueCallback : winrt::Windows::Foundation::IUnknown
    {
        CreateDefaultValueCallback(std::nullptr_t = nullptr) noexcept {}
        CreateDefaultValueCallback(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> CreateDefaultValueCallback(L lambda);
        template <typename F> CreateDefaultValueCallback(F* function);
        template <typename O, typename M> CreateDefaultValueCallback(O* object, M method);
        template <typename O, typename M> CreateDefaultValueCallback(com_ptr<O>&& object, M method);
        template <typename O, typename M> CreateDefaultValueCallback(weak_ref<O>&& object, M method);
        auto operator()() const;
    };
    struct DependencyPropertyChangedCallback : winrt::Windows::Foundation::IUnknown
    {
        DependencyPropertyChangedCallback(std::nullptr_t = nullptr) noexcept {}
        DependencyPropertyChangedCallback(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> DependencyPropertyChangedCallback(L lambda);
        template <typename F> DependencyPropertyChangedCallback(F* function);
        template <typename O, typename M> DependencyPropertyChangedCallback(O* object, M method);
        template <typename O, typename M> DependencyPropertyChangedCallback(com_ptr<O>&& object, M method);
        template <typename O, typename M> DependencyPropertyChangedCallback(weak_ref<O>&& object, M method);
        auto operator()(winrt::Windows::UI::Xaml::DependencyObject const& sender, winrt::Windows::UI::Xaml::DependencyProperty const& dp) const;
    };
    struct DependencyPropertyChangedEventHandler : winrt::Windows::Foundation::IUnknown
    {
        DependencyPropertyChangedEventHandler(std::nullptr_t = nullptr) noexcept {}
        DependencyPropertyChangedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> DependencyPropertyChangedEventHandler(L lambda);
        template <typename F> DependencyPropertyChangedEventHandler(F* function);
        template <typename O, typename M> DependencyPropertyChangedEventHandler(O* object, M method);
        template <typename O, typename M> DependencyPropertyChangedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> DependencyPropertyChangedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::DependencyPropertyChangedEventArgs const& e) const;
    };
    struct DragEventHandler : winrt::Windows::Foundation::IUnknown
    {
        DragEventHandler(std::nullptr_t = nullptr) noexcept {}
        DragEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> DragEventHandler(L lambda);
        template <typename F> DragEventHandler(F* function);
        template <typename O, typename M> DragEventHandler(O* object, M method);
        template <typename O, typename M> DragEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> DragEventHandler(weak_ref<O>&& object, M method);
        auto operator()(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::DragEventArgs const& e) const;
    };
    struct EnteredBackgroundEventHandler : winrt::Windows::Foundation::IUnknown
    {
        EnteredBackgroundEventHandler(std::nullptr_t = nullptr) noexcept {}
        EnteredBackgroundEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> EnteredBackgroundEventHandler(L lambda);
        template <typename F> EnteredBackgroundEventHandler(F* function);
        template <typename O, typename M> EnteredBackgroundEventHandler(O* object, M method);
        template <typename O, typename M> EnteredBackgroundEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> EnteredBackgroundEventHandler(weak_ref<O>&& object, M method);
        auto operator()(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::ApplicationModel::EnteredBackgroundEventArgs const& e) const;
    };
    struct ExceptionRoutedEventHandler : winrt::Windows::Foundation::IUnknown
    {
        ExceptionRoutedEventHandler(std::nullptr_t = nullptr) noexcept {}
        ExceptionRoutedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> ExceptionRoutedEventHandler(L lambda);
        template <typename F> ExceptionRoutedEventHandler(F* function);
        template <typename O, typename M> ExceptionRoutedEventHandler(O* object, M method);
        template <typename O, typename M> ExceptionRoutedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> ExceptionRoutedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::ExceptionRoutedEventArgs const& e) const;
    };
    struct LeavingBackgroundEventHandler : winrt::Windows::Foundation::IUnknown
    {
        LeavingBackgroundEventHandler(std::nullptr_t = nullptr) noexcept {}
        LeavingBackgroundEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> LeavingBackgroundEventHandler(L lambda);
        template <typename F> LeavingBackgroundEventHandler(F* function);
        template <typename O, typename M> LeavingBackgroundEventHandler(O* object, M method);
        template <typename O, typename M> LeavingBackgroundEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> LeavingBackgroundEventHandler(weak_ref<O>&& object, M method);
        auto operator()(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::ApplicationModel::LeavingBackgroundEventArgs const& e) const;
    };
    struct PropertyChangedCallback : winrt::Windows::Foundation::IUnknown
    {
        PropertyChangedCallback(std::nullptr_t = nullptr) noexcept {}
        PropertyChangedCallback(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> PropertyChangedCallback(L lambda);
        template <typename F> PropertyChangedCallback(F* function);
        template <typename O, typename M> PropertyChangedCallback(O* object, M method);
        template <typename O, typename M> PropertyChangedCallback(com_ptr<O>&& object, M method);
        template <typename O, typename M> PropertyChangedCallback(weak_ref<O>&& object, M method);
        auto operator()(winrt::Windows::UI::Xaml::DependencyObject const& d, winrt::Windows::UI::Xaml::DependencyPropertyChangedEventArgs const& e) const;
    };
    struct RoutedEventHandler : winrt::Windows::Foundation::IUnknown
    {
        RoutedEventHandler(std::nullptr_t = nullptr) noexcept {}
        RoutedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> RoutedEventHandler(L lambda);
        template <typename F> RoutedEventHandler(F* function);
        template <typename O, typename M> RoutedEventHandler(O* object, M method);
        template <typename O, typename M> RoutedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> RoutedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::RoutedEventArgs const& e) const;
    };
    struct SizeChangedEventHandler : winrt::Windows::Foundation::IUnknown
    {
        SizeChangedEventHandler(std::nullptr_t = nullptr) noexcept {}
        SizeChangedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> SizeChangedEventHandler(L lambda);
        template <typename F> SizeChangedEventHandler(F* function);
        template <typename O, typename M> SizeChangedEventHandler(O* object, M method);
        template <typename O, typename M> SizeChangedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> SizeChangedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::SizeChangedEventArgs const& e) const;
    };
    struct SuspendingEventHandler : winrt::Windows::Foundation::IUnknown
    {
        SuspendingEventHandler(std::nullptr_t = nullptr) noexcept {}
        SuspendingEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> SuspendingEventHandler(L lambda);
        template <typename F> SuspendingEventHandler(F* function);
        template <typename O, typename M> SuspendingEventHandler(O* object, M method);
        template <typename O, typename M> SuspendingEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> SuspendingEventHandler(weak_ref<O>&& object, M method);
        auto operator()(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::ApplicationModel::SuspendingEventArgs const& e) const;
    };
    struct UnhandledExceptionEventHandler : winrt::Windows::Foundation::IUnknown
    {
        UnhandledExceptionEventHandler(std::nullptr_t = nullptr) noexcept {}
        UnhandledExceptionEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> UnhandledExceptionEventHandler(L lambda);
        template <typename F> UnhandledExceptionEventHandler(F* function);
        template <typename O, typename M> UnhandledExceptionEventHandler(O* object, M method);
        template <typename O, typename M> UnhandledExceptionEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> UnhandledExceptionEventHandler(weak_ref<O>&& object, M method);
        auto operator()(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::UnhandledExceptionEventArgs const& e) const;
    };
    struct VisualStateChangedEventHandler : winrt::Windows::Foundation::IUnknown
    {
        VisualStateChangedEventHandler(std::nullptr_t = nullptr) noexcept {}
        VisualStateChangedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> VisualStateChangedEventHandler(L lambda);
        template <typename F> VisualStateChangedEventHandler(F* function);
        template <typename O, typename M> VisualStateChangedEventHandler(O* object, M method);
        template <typename O, typename M> VisualStateChangedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> VisualStateChangedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::VisualStateChangedEventArgs const& e) const;
    };
    struct WindowActivatedEventHandler : winrt::Windows::Foundation::IUnknown
    {
        WindowActivatedEventHandler(std::nullptr_t = nullptr) noexcept {}
        WindowActivatedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> WindowActivatedEventHandler(L lambda);
        template <typename F> WindowActivatedEventHandler(F* function);
        template <typename O, typename M> WindowActivatedEventHandler(O* object, M method);
        template <typename O, typename M> WindowActivatedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> WindowActivatedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Core::WindowActivatedEventArgs const& e) const;
    };
    struct WindowClosedEventHandler : winrt::Windows::Foundation::IUnknown
    {
        WindowClosedEventHandler(std::nullptr_t = nullptr) noexcept {}
        WindowClosedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> WindowClosedEventHandler(L lambda);
        template <typename F> WindowClosedEventHandler(F* function);
        template <typename O, typename M> WindowClosedEventHandler(O* object, M method);
        template <typename O, typename M> WindowClosedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> WindowClosedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Core::CoreWindowEventArgs const& e) const;
    };
    struct WindowSizeChangedEventHandler : winrt::Windows::Foundation::IUnknown
    {
        WindowSizeChangedEventHandler(std::nullptr_t = nullptr) noexcept {}
        WindowSizeChangedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> WindowSizeChangedEventHandler(L lambda);
        template <typename F> WindowSizeChangedEventHandler(F* function);
        template <typename O, typename M> WindowSizeChangedEventHandler(O* object, M method);
        template <typename O, typename M> WindowSizeChangedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> WindowSizeChangedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Core::WindowSizeChangedEventArgs const& e) const;
    };
    struct WindowVisibilityChangedEventHandler : winrt::Windows::Foundation::IUnknown
    {
        WindowVisibilityChangedEventHandler(std::nullptr_t = nullptr) noexcept {}
        WindowVisibilityChangedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> WindowVisibilityChangedEventHandler(L lambda);
        template <typename F> WindowVisibilityChangedEventHandler(F* function);
        template <typename O, typename M> WindowVisibilityChangedEventHandler(O* object, M method);
        template <typename O, typename M> WindowVisibilityChangedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> WindowVisibilityChangedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Core::VisibilityChangedEventArgs const& e) const;
    };
    struct CornerRadius
    {
        double TopLeft;
        double TopRight;
        double BottomRight;
        double BottomLeft;
    };
    inline bool operator==(CornerRadius const& left, CornerRadius const& right) noexcept
    {
        return left.TopLeft == right.TopLeft && left.TopRight == right.TopRight && left.BottomRight == right.BottomRight && left.BottomLeft == right.BottomLeft;
    }
    inline bool operator!=(CornerRadius const& left, CornerRadius const& right) noexcept
    {
        return !(left == right);
    }
    struct Duration
    {
        winrt::Windows::Foundation::TimeSpan TimeSpan;
        winrt::Windows::UI::Xaml::DurationType Type;
    };
    inline bool operator==(Duration const& left, Duration const& right) noexcept
    {
        return left.TimeSpan == right.TimeSpan && left.Type == right.Type;
    }
    inline bool operator!=(Duration const& left, Duration const& right) noexcept
    {
        return !(left == right);
    }
    struct GridLength
    {
        double Value;
        winrt::Windows::UI::Xaml::GridUnitType GridUnitType;
    };
    inline bool operator==(GridLength const& left, GridLength const& right) noexcept
    {
        return left.Value == right.Value && left.GridUnitType == right.GridUnitType;
    }
    inline bool operator!=(GridLength const& left, GridLength const& right) noexcept
    {
        return !(left == right);
    }
    struct Thickness
    {
        double Left;
        double Top;
        double Right;
        double Bottom;
    };
    inline bool operator==(Thickness const& left, Thickness const& right) noexcept
    {
        return left.Left == right.Left && left.Top == right.Top && left.Right == right.Right && left.Bottom == right.Bottom;
    }
    inline bool operator!=(Thickness const& left, Thickness const& right) noexcept
    {
        return !(left == right);
    }
    struct __declspec(empty_bases) AdaptiveTrigger : winrt::Windows::UI::Xaml::IAdaptiveTrigger,
        impl::base<AdaptiveTrigger, winrt::Windows::UI::Xaml::StateTriggerBase, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<AdaptiveTrigger, winrt::Windows::UI::Xaml::IStateTriggerBase, winrt::Windows::UI::Xaml::IStateTriggerBaseProtected, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        AdaptiveTrigger(std::nullptr_t) noexcept {}
        AdaptiveTrigger(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::IAdaptiveTrigger(ptr, take_ownership_from_abi) {}
        AdaptiveTrigger();
        [[nodiscard]] static auto MinWindowWidthProperty();
        [[nodiscard]] static auto MinWindowHeightProperty();
    };
    struct __declspec(empty_bases) Application : winrt::Windows::UI::Xaml::IApplication,
        impl::require<Application, winrt::Windows::UI::Xaml::IApplication2, winrt::Windows::UI::Xaml::IApplication3, winrt::Windows::UI::Xaml::IApplicationOverrides, winrt::Windows::UI::Xaml::IApplicationOverrides2>
    {
        Application(std::nullptr_t) noexcept {}
        Application(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::IApplication(ptr, take_ownership_from_abi) {}
        Application();
        [[nodiscard]] static auto Current();
        static auto Start(winrt::Windows::UI::Xaml::ApplicationInitializationCallback const& callback);
        static auto LoadComponent(winrt::Windows::Foundation::IInspectable const& component, winrt::Windows::Foundation::Uri const& resourceLocator);
        static auto LoadComponent(winrt::Windows::Foundation::IInspectable const& component, winrt::Windows::Foundation::Uri const& resourceLocator, winrt::Windows::UI::Xaml::Controls::Primitives::ComponentResourceLocation const& componentResourceLocation);
    };
    struct __declspec(empty_bases) ApplicationInitializationCallbackParams : winrt::Windows::UI::Xaml::IApplicationInitializationCallbackParams
    {
        ApplicationInitializationCallbackParams(std::nullptr_t) noexcept {}
        ApplicationInitializationCallbackParams(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::IApplicationInitializationCallbackParams(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) BindingFailedEventArgs : winrt::Windows::UI::Xaml::IBindingFailedEventArgs
    {
        BindingFailedEventArgs(std::nullptr_t) noexcept {}
        BindingFailedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::IBindingFailedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) BringIntoViewOptions : winrt::Windows::UI::Xaml::IBringIntoViewOptions,
        impl::require<BringIntoViewOptions, winrt::Windows::UI::Xaml::IBringIntoViewOptions2>
    {
        BringIntoViewOptions(std::nullptr_t) noexcept {}
        BringIntoViewOptions(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::IBringIntoViewOptions(ptr, take_ownership_from_abi) {}
        BringIntoViewOptions();
    };
    struct __declspec(empty_bases) BringIntoViewRequestedEventArgs : winrt::Windows::UI::Xaml::IBringIntoViewRequestedEventArgs,
        impl::base<BringIntoViewRequestedEventArgs, winrt::Windows::UI::Xaml::RoutedEventArgs>,
        impl::require<BringIntoViewRequestedEventArgs, winrt::Windows::UI::Xaml::IRoutedEventArgs>
    {
        BringIntoViewRequestedEventArgs(std::nullptr_t) noexcept {}
        BringIntoViewRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::IBringIntoViewRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) BrushTransition : winrt::Windows::UI::Xaml::IBrushTransition
    {
        BrushTransition(std::nullptr_t) noexcept {}
        BrushTransition(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::IBrushTransition(ptr, take_ownership_from_abi) {}
        BrushTransition();
    };
    struct __declspec(empty_bases) ColorPaletteResources : winrt::Windows::UI::Xaml::IColorPaletteResources,
        impl::base<ColorPaletteResources, winrt::Windows::UI::Xaml::ResourceDictionary, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<ColorPaletteResources, winrt::Windows::UI::Xaml::IResourceDictionary, winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::Windows::Foundation::IInspectable, winrt::Windows::Foundation::IInspectable>>, winrt::Windows::Foundation::Collections::IMap<winrt::Windows::Foundation::IInspectable, winrt::Windows::Foundation::IInspectable>, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        ColorPaletteResources(std::nullptr_t) noexcept {}
        ColorPaletteResources(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::IColorPaletteResources(ptr, take_ownership_from_abi) {}
        ColorPaletteResources();
    };
    struct __declspec(empty_bases) CornerRadiusHelper : winrt::Windows::UI::Xaml::ICornerRadiusHelper
    {
        CornerRadiusHelper(std::nullptr_t) noexcept {}
        CornerRadiusHelper(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::ICornerRadiusHelper(ptr, take_ownership_from_abi) {}
        static auto FromRadii(double topLeft, double topRight, double bottomRight, double bottomLeft);
        static auto FromUniformRadius(double uniformRadius);
    };
    struct __declspec(empty_bases) DataContextChangedEventArgs : winrt::Windows::UI::Xaml::IDataContextChangedEventArgs
    {
        DataContextChangedEventArgs(std::nullptr_t) noexcept {}
        DataContextChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::IDataContextChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DataTemplate : winrt::Windows::UI::Xaml::IDataTemplate,
        impl::base<DataTemplate, winrt::Windows::UI::Xaml::FrameworkTemplate, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<DataTemplate, winrt::Windows::UI::Xaml::IElementFactory, winrt::Windows::UI::Xaml::IFrameworkTemplate, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        DataTemplate(std::nullptr_t) noexcept {}
        DataTemplate(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::IDataTemplate(ptr, take_ownership_from_abi) {}
        DataTemplate();
        [[nodiscard]] static auto ExtensionInstanceProperty();
        static auto GetExtensionInstance(winrt::Windows::UI::Xaml::FrameworkElement const& element);
        static auto SetExtensionInstance(winrt::Windows::UI::Xaml::FrameworkElement const& element, winrt::Windows::UI::Xaml::IDataTemplateExtension const& value);
    };
    struct __declspec(empty_bases) DataTemplateKey : winrt::Windows::UI::Xaml::IDataTemplateKey
    {
        DataTemplateKey(std::nullptr_t) noexcept {}
        DataTemplateKey(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::IDataTemplateKey(ptr, take_ownership_from_abi) {}
        DataTemplateKey();
        explicit DataTemplateKey(winrt::Windows::Foundation::IInspectable const& dataType);
    };
    struct __declspec(empty_bases) DebugSettings : winrt::Windows::UI::Xaml::IDebugSettings,
        impl::require<DebugSettings, winrt::Windows::UI::Xaml::IDebugSettings2, winrt::Windows::UI::Xaml::IDebugSettings3, winrt::Windows::UI::Xaml::IDebugSettings4>
    {
        DebugSettings(std::nullptr_t) noexcept {}
        DebugSettings(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::IDebugSettings(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DependencyObject : winrt::Windows::UI::Xaml::IDependencyObject,
        impl::require<DependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        DependencyObject(std::nullptr_t) noexcept {}
        DependencyObject(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::IDependencyObject(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DependencyObjectCollection : winrt::Windows::Foundation::Collections::IObservableVector<winrt::Windows::UI::Xaml::DependencyObject>,
        impl::base<DependencyObjectCollection, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<DependencyObjectCollection, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        DependencyObjectCollection(std::nullptr_t) noexcept {}
        DependencyObjectCollection(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::Collections::IObservableVector<winrt::Windows::UI::Xaml::DependencyObject>(ptr, take_ownership_from_abi) {}
        DependencyObjectCollection();
    };
    struct __declspec(empty_bases) DependencyProperty : winrt::Windows::UI::Xaml::IDependencyProperty
    {
        DependencyProperty(std::nullptr_t) noexcept {}
        DependencyProperty(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::IDependencyProperty(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto UnsetValue();
        static auto Register(param::hstring const& name, winrt::Windows::UI::Xaml::Interop::TypeName const& propertyType, winrt::Windows::UI::Xaml::Interop::TypeName const& ownerType, winrt::Windows::UI::Xaml::PropertyMetadata const& typeMetadata);
        static auto RegisterAttached(param::hstring const& name, winrt::Windows::UI::Xaml::Interop::TypeName const& propertyType, winrt::Windows::UI::Xaml::Interop::TypeName const& ownerType, winrt::Windows::UI::Xaml::PropertyMetadata const& defaultMetadata);
    };
    struct __declspec(empty_bases) DependencyPropertyChangedEventArgs : winrt::Windows::UI::Xaml::IDependencyPropertyChangedEventArgs
    {
        DependencyPropertyChangedEventArgs(std::nullptr_t) noexcept {}
        DependencyPropertyChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::IDependencyPropertyChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DispatcherTimer : winrt::Windows::UI::Xaml::IDispatcherTimer
    {
        DispatcherTimer(std::nullptr_t) noexcept {}
        DispatcherTimer(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::IDispatcherTimer(ptr, take_ownership_from_abi) {}
        DispatcherTimer();
    };
    struct __declspec(empty_bases) DragEventArgs : winrt::Windows::UI::Xaml::IDragEventArgs,
        impl::base<DragEventArgs, winrt::Windows::UI::Xaml::RoutedEventArgs>,
        impl::require<DragEventArgs, winrt::Windows::UI::Xaml::IDragEventArgs2, winrt::Windows::UI::Xaml::IDragEventArgs3, winrt::Windows::UI::Xaml::IRoutedEventArgs>
    {
        DragEventArgs(std::nullptr_t) noexcept {}
        DragEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::IDragEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DragOperationDeferral : winrt::Windows::UI::Xaml::IDragOperationDeferral
    {
        DragOperationDeferral(std::nullptr_t) noexcept {}
        DragOperationDeferral(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::IDragOperationDeferral(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DragStartingEventArgs : winrt::Windows::UI::Xaml::IDragStartingEventArgs,
        impl::base<DragStartingEventArgs, winrt::Windows::UI::Xaml::RoutedEventArgs>,
        impl::require<DragStartingEventArgs, winrt::Windows::UI::Xaml::IDragStartingEventArgs2, winrt::Windows::UI::Xaml::IRoutedEventArgs>
    {
        DragStartingEventArgs(std::nullptr_t) noexcept {}
        DragStartingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::IDragStartingEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DragUI : winrt::Windows::UI::Xaml::IDragUI
    {
        DragUI(std::nullptr_t) noexcept {}
        DragUI(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::IDragUI(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DragUIOverride : winrt::Windows::UI::Xaml::IDragUIOverride
    {
        DragUIOverride(std::nullptr_t) noexcept {}
        DragUIOverride(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::IDragUIOverride(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DropCompletedEventArgs : winrt::Windows::UI::Xaml::IDropCompletedEventArgs,
        impl::base<DropCompletedEventArgs, winrt::Windows::UI::Xaml::RoutedEventArgs>,
        impl::require<DropCompletedEventArgs, winrt::Windows::UI::Xaml::IRoutedEventArgs>
    {
        DropCompletedEventArgs(std::nullptr_t) noexcept {}
        DropCompletedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::IDropCompletedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DurationHelper : winrt::Windows::UI::Xaml::IDurationHelper
    {
        DurationHelper(std::nullptr_t) noexcept {}
        DurationHelper(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::IDurationHelper(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto Automatic();
        [[nodiscard]] static auto Forever();
        static auto Compare(winrt::Windows::UI::Xaml::Duration const& duration1, winrt::Windows::UI::Xaml::Duration const& duration2);
        static auto FromTimeSpan(winrt::Windows::Foundation::TimeSpan const& timeSpan);
        static auto GetHasTimeSpan(winrt::Windows::UI::Xaml::Duration const& target);
        static auto Add(winrt::Windows::UI::Xaml::Duration const& target, winrt::Windows::UI::Xaml::Duration const& duration);
        static auto Equals(winrt::Windows::UI::Xaml::Duration const& target, winrt::Windows::UI::Xaml::Duration const& value);
        static auto Subtract(winrt::Windows::UI::Xaml::Duration const& target, winrt::Windows::UI::Xaml::Duration const& duration);
    };
    struct __declspec(empty_bases) EffectiveViewportChangedEventArgs : winrt::Windows::UI::Xaml::IEffectiveViewportChangedEventArgs
    {
        EffectiveViewportChangedEventArgs(std::nullptr_t) noexcept {}
        EffectiveViewportChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::IEffectiveViewportChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ElementFactoryGetArgs : winrt::Windows::UI::Xaml::IElementFactoryGetArgs
    {
        ElementFactoryGetArgs(std::nullptr_t) noexcept {}
        ElementFactoryGetArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::IElementFactoryGetArgs(ptr, take_ownership_from_abi) {}
        ElementFactoryGetArgs();
    };
    struct __declspec(empty_bases) ElementFactoryRecycleArgs : winrt::Windows::UI::Xaml::IElementFactoryRecycleArgs
    {
        ElementFactoryRecycleArgs(std::nullptr_t) noexcept {}
        ElementFactoryRecycleArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::IElementFactoryRecycleArgs(ptr, take_ownership_from_abi) {}
        ElementFactoryRecycleArgs();
    };
    struct __declspec(empty_bases) ElementSoundPlayer : winrt::Windows::UI::Xaml::IElementSoundPlayer
    {
        ElementSoundPlayer(std::nullptr_t) noexcept {}
        ElementSoundPlayer(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::IElementSoundPlayer(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto Volume();
        static auto Volume(double value);
        [[nodiscard]] static auto State();
        static auto State(winrt::Windows::UI::Xaml::ElementSoundPlayerState const& value);
        static auto Play(winrt::Windows::UI::Xaml::ElementSoundKind const& sound);
        [[nodiscard]] static auto SpatialAudioMode();
        static auto SpatialAudioMode(winrt::Windows::UI::Xaml::ElementSpatialAudioMode const& value);
    };
    struct __declspec(empty_bases) EventTrigger : winrt::Windows::UI::Xaml::IEventTrigger,
        impl::base<EventTrigger, winrt::Windows::UI::Xaml::TriggerBase, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<EventTrigger, winrt::Windows::UI::Xaml::ITriggerBase, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        EventTrigger(std::nullptr_t) noexcept {}
        EventTrigger(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::IEventTrigger(ptr, take_ownership_from_abi) {}
        EventTrigger();
    };
    struct __declspec(empty_bases) ExceptionRoutedEventArgs : winrt::Windows::UI::Xaml::IExceptionRoutedEventArgs,
        impl::base<ExceptionRoutedEventArgs, winrt::Windows::UI::Xaml::RoutedEventArgs>,
        impl::require<ExceptionRoutedEventArgs, winrt::Windows::UI::Xaml::IRoutedEventArgs>
    {
        ExceptionRoutedEventArgs(std::nullptr_t) noexcept {}
        ExceptionRoutedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::IExceptionRoutedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) FrameworkElement : winrt::Windows::UI::Xaml::IFrameworkElement,
        impl::base<FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<FrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        FrameworkElement(std::nullptr_t) noexcept {}
        FrameworkElement(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::IFrameworkElement(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto TagProperty();
        [[nodiscard]] static auto LanguageProperty();
        [[nodiscard]] static auto ActualWidthProperty();
        [[nodiscard]] static auto ActualHeightProperty();
        [[nodiscard]] static auto WidthProperty();
        [[nodiscard]] static auto HeightProperty();
        [[nodiscard]] static auto MinWidthProperty();
        [[nodiscard]] static auto MaxWidthProperty();
        [[nodiscard]] static auto MinHeightProperty();
        [[nodiscard]] static auto MaxHeightProperty();
        [[nodiscard]] static auto HorizontalAlignmentProperty();
        [[nodiscard]] static auto VerticalAlignmentProperty();
        [[nodiscard]] static auto MarginProperty();
        [[nodiscard]] static auto NameProperty();
        [[nodiscard]] static auto DataContextProperty();
        [[nodiscard]] static auto StyleProperty();
        [[nodiscard]] static auto FlowDirectionProperty();
        [[nodiscard]] static auto RequestedThemeProperty();
        [[nodiscard]] static auto AllowFocusOnInteractionProperty();
        [[nodiscard]] static auto FocusVisualMarginProperty();
        [[nodiscard]] static auto FocusVisualSecondaryThicknessProperty();
        [[nodiscard]] static auto FocusVisualPrimaryThicknessProperty();
        [[nodiscard]] static auto FocusVisualSecondaryBrushProperty();
        [[nodiscard]] static auto FocusVisualPrimaryBrushProperty();
        [[nodiscard]] static auto AllowFocusWhenDisabledProperty();
        static auto DeferTree(winrt::Windows::UI::Xaml::DependencyObject const& element);
        [[nodiscard]] static auto ActualThemeProperty();
    };
    struct __declspec(empty_bases) FrameworkTemplate : winrt::Windows::UI::Xaml::IFrameworkTemplate,
        impl::base<FrameworkTemplate, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<FrameworkTemplate, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        FrameworkTemplate(std::nullptr_t) noexcept {}
        FrameworkTemplate(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::IFrameworkTemplate(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) FrameworkView : winrt::Windows::UI::Xaml::IFrameworkView,
        impl::require<FrameworkView, winrt::Windows::ApplicationModel::Core::IFrameworkView>
    {
        FrameworkView(std::nullptr_t) noexcept {}
        FrameworkView(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::IFrameworkView(ptr, take_ownership_from_abi) {}
        FrameworkView();
    };
    struct __declspec(empty_bases) FrameworkViewSource : winrt::Windows::UI::Xaml::IFrameworkViewSource,
        impl::require<FrameworkViewSource, winrt::Windows::ApplicationModel::Core::IFrameworkViewSource>
    {
        FrameworkViewSource(std::nullptr_t) noexcept {}
        FrameworkViewSource(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::IFrameworkViewSource(ptr, take_ownership_from_abi) {}
        FrameworkViewSource();
    };
    struct __declspec(empty_bases) GridLengthHelper : winrt::Windows::UI::Xaml::IGridLengthHelper
    {
        GridLengthHelper(std::nullptr_t) noexcept {}
        GridLengthHelper(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::IGridLengthHelper(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto Auto();
        static auto FromPixels(double pixels);
        static auto FromValueAndType(double value, winrt::Windows::UI::Xaml::GridUnitType const& type);
        static auto GetIsAbsolute(winrt::Windows::UI::Xaml::GridLength const& target);
        static auto GetIsAuto(winrt::Windows::UI::Xaml::GridLength const& target);
        static auto GetIsStar(winrt::Windows::UI::Xaml::GridLength const& target);
        static auto Equals(winrt::Windows::UI::Xaml::GridLength const& target, winrt::Windows::UI::Xaml::GridLength const& value);
    };
    struct __declspec(empty_bases) MediaFailedRoutedEventArgs : winrt::Windows::UI::Xaml::IMediaFailedRoutedEventArgs,
        impl::base<MediaFailedRoutedEventArgs, winrt::Windows::UI::Xaml::ExceptionRoutedEventArgs, winrt::Windows::UI::Xaml::RoutedEventArgs>,
        impl::require<MediaFailedRoutedEventArgs, winrt::Windows::UI::Xaml::IExceptionRoutedEventArgs, winrt::Windows::UI::Xaml::IRoutedEventArgs>
    {
        MediaFailedRoutedEventArgs(std::nullptr_t) noexcept {}
        MediaFailedRoutedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::IMediaFailedRoutedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PointHelper : winrt::Windows::UI::Xaml::IPointHelper
    {
        PointHelper(std::nullptr_t) noexcept {}
        PointHelper(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::IPointHelper(ptr, take_ownership_from_abi) {}
        static auto FromCoordinates(float x, float y);
    };
    struct __declspec(empty_bases) PropertyMetadata : winrt::Windows::UI::Xaml::IPropertyMetadata
    {
        PropertyMetadata(std::nullptr_t) noexcept {}
        PropertyMetadata(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::IPropertyMetadata(ptr, take_ownership_from_abi) {}
        explicit PropertyMetadata(winrt::Windows::Foundation::IInspectable const& defaultValue);
        PropertyMetadata(winrt::Windows::Foundation::IInspectable const& defaultValue, winrt::Windows::UI::Xaml::PropertyChangedCallback const& propertyChangedCallback);
        static auto Create(winrt::Windows::Foundation::IInspectable const& defaultValue);
        static auto Create(winrt::Windows::Foundation::IInspectable const& defaultValue, winrt::Windows::UI::Xaml::PropertyChangedCallback const& propertyChangedCallback);
        static auto Create(winrt::Windows::UI::Xaml::CreateDefaultValueCallback const& createDefaultValueCallback);
        static auto Create(winrt::Windows::UI::Xaml::CreateDefaultValueCallback const& createDefaultValueCallback, winrt::Windows::UI::Xaml::PropertyChangedCallback const& propertyChangedCallback);
    };
    struct __declspec(empty_bases) PropertyPath : winrt::Windows::UI::Xaml::IPropertyPath,
        impl::base<PropertyPath, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<PropertyPath, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        PropertyPath(std::nullptr_t) noexcept {}
        PropertyPath(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::IPropertyPath(ptr, take_ownership_from_abi) {}
        explicit PropertyPath(param::hstring const& path);
    };
    struct __declspec(empty_bases) RectHelper : winrt::Windows::UI::Xaml::IRectHelper
    {
        RectHelper(std::nullptr_t) noexcept {}
        RectHelper(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::IRectHelper(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto Empty();
        static auto FromCoordinatesAndDimensions(float x, float y, float width, float height);
        static auto FromPoints(winrt::Windows::Foundation::Point const& point1, winrt::Windows::Foundation::Point const& point2);
        static auto FromLocationAndSize(winrt::Windows::Foundation::Point const& location, winrt::Windows::Foundation::Size const& size);
        static auto GetIsEmpty(winrt::Windows::Foundation::Rect const& target);
        static auto GetBottom(winrt::Windows::Foundation::Rect const& target);
        static auto GetLeft(winrt::Windows::Foundation::Rect const& target);
        static auto GetRight(winrt::Windows::Foundation::Rect const& target);
        static auto GetTop(winrt::Windows::Foundation::Rect const& target);
        static auto Contains(winrt::Windows::Foundation::Rect const& target, winrt::Windows::Foundation::Point const& point);
        static auto Equals(winrt::Windows::Foundation::Rect const& target, winrt::Windows::Foundation::Rect const& value);
        static auto Intersect(winrt::Windows::Foundation::Rect const& target, winrt::Windows::Foundation::Rect const& rect);
        static auto Union(winrt::Windows::Foundation::Rect const& target, winrt::Windows::Foundation::Point const& point);
        static auto Union(winrt::Windows::Foundation::Rect const& target, winrt::Windows::Foundation::Rect const& rect);
    };
    struct __declspec(empty_bases) ResourceDictionary : winrt::Windows::UI::Xaml::IResourceDictionary,
        impl::base<ResourceDictionary, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<ResourceDictionary, winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::Windows::Foundation::IInspectable, winrt::Windows::Foundation::IInspectable>>, winrt::Windows::Foundation::Collections::IMap<winrt::Windows::Foundation::IInspectable, winrt::Windows::Foundation::IInspectable>, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        ResourceDictionary(std::nullptr_t) noexcept {}
        ResourceDictionary(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::IResourceDictionary(ptr, take_ownership_from_abi) {}
        ResourceDictionary();
    };
    struct __declspec(empty_bases) RoutedEvent : winrt::Windows::UI::Xaml::IRoutedEvent
    {
        RoutedEvent(std::nullptr_t) noexcept {}
        RoutedEvent(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::IRoutedEvent(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) RoutedEventArgs : winrt::Windows::UI::Xaml::IRoutedEventArgs
    {
        RoutedEventArgs(std::nullptr_t) noexcept {}
        RoutedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::IRoutedEventArgs(ptr, take_ownership_from_abi) {}
        RoutedEventArgs();
    };
    struct __declspec(empty_bases) ScalarTransition : winrt::Windows::UI::Xaml::IScalarTransition
    {
        ScalarTransition(std::nullptr_t) noexcept {}
        ScalarTransition(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::IScalarTransition(ptr, take_ownership_from_abi) {}
        ScalarTransition();
    };
    struct __declspec(empty_bases) Setter : winrt::Windows::UI::Xaml::ISetter,
        impl::base<Setter, winrt::Windows::UI::Xaml::SetterBase, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<Setter, winrt::Windows::UI::Xaml::ISetter2, winrt::Windows::UI::Xaml::ISetterBase, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        Setter(std::nullptr_t) noexcept {}
        Setter(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::ISetter(ptr, take_ownership_from_abi) {}
        Setter();
        Setter(winrt::Windows::UI::Xaml::DependencyProperty const& targetProperty, winrt::Windows::Foundation::IInspectable const& value);
    };
    struct __declspec(empty_bases) SetterBase : winrt::Windows::UI::Xaml::ISetterBase,
        impl::base<SetterBase, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<SetterBase, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        SetterBase(std::nullptr_t) noexcept {}
        SetterBase(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::ISetterBase(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SetterBaseCollection : winrt::Windows::UI::Xaml::ISetterBaseCollection,
        impl::require<SetterBaseCollection, winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::UI::Xaml::SetterBase>, winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::Xaml::SetterBase>>
    {
        SetterBaseCollection(std::nullptr_t) noexcept {}
        SetterBaseCollection(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::ISetterBaseCollection(ptr, take_ownership_from_abi) {}
        SetterBaseCollection();
    };
    struct __declspec(empty_bases) SizeChangedEventArgs : winrt::Windows::UI::Xaml::ISizeChangedEventArgs,
        impl::base<SizeChangedEventArgs, winrt::Windows::UI::Xaml::RoutedEventArgs>,
        impl::require<SizeChangedEventArgs, winrt::Windows::UI::Xaml::IRoutedEventArgs>
    {
        SizeChangedEventArgs(std::nullptr_t) noexcept {}
        SizeChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::ISizeChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SizeHelper : winrt::Windows::UI::Xaml::ISizeHelper
    {
        SizeHelper(std::nullptr_t) noexcept {}
        SizeHelper(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::ISizeHelper(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto Empty();
        static auto FromDimensions(float width, float height);
        static auto GetIsEmpty(winrt::Windows::Foundation::Size const& target);
        static auto Equals(winrt::Windows::Foundation::Size const& target, winrt::Windows::Foundation::Size const& value);
    };
    struct __declspec(empty_bases) StateTrigger : winrt::Windows::UI::Xaml::IStateTrigger,
        impl::base<StateTrigger, winrt::Windows::UI::Xaml::StateTriggerBase, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<StateTrigger, winrt::Windows::UI::Xaml::IStateTriggerBase, winrt::Windows::UI::Xaml::IStateTriggerBaseProtected, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        StateTrigger(std::nullptr_t) noexcept {}
        StateTrigger(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::IStateTrigger(ptr, take_ownership_from_abi) {}
        StateTrigger();
        [[nodiscard]] static auto IsActiveProperty();
    };
    struct __declspec(empty_bases) StateTriggerBase : winrt::Windows::UI::Xaml::IStateTriggerBase,
        impl::base<StateTriggerBase, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<StateTriggerBase, winrt::Windows::UI::Xaml::IStateTriggerBaseProtected, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        StateTriggerBase(std::nullptr_t) noexcept {}
        StateTriggerBase(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::IStateTriggerBase(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) Style : winrt::Windows::UI::Xaml::IStyle,
        impl::base<Style, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<Style, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        Style(std::nullptr_t) noexcept {}
        Style(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::IStyle(ptr, take_ownership_from_abi) {}
        Style();
        explicit Style(winrt::Windows::UI::Xaml::Interop::TypeName const& targetType);
    };
    struct __declspec(empty_bases) TargetPropertyPath : winrt::Windows::UI::Xaml::ITargetPropertyPath
    {
        TargetPropertyPath(std::nullptr_t) noexcept {}
        TargetPropertyPath(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::ITargetPropertyPath(ptr, take_ownership_from_abi) {}
        TargetPropertyPath();
        explicit TargetPropertyPath(winrt::Windows::UI::Xaml::DependencyProperty const& targetProperty);
    };
    struct __declspec(empty_bases) ThicknessHelper : winrt::Windows::UI::Xaml::IThicknessHelper
    {
        ThicknessHelper(std::nullptr_t) noexcept {}
        ThicknessHelper(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::IThicknessHelper(ptr, take_ownership_from_abi) {}
        static auto FromLengths(double left, double top, double right, double bottom);
        static auto FromUniformLength(double uniformLength);
    };
    struct __declspec(empty_bases) TriggerAction : winrt::Windows::UI::Xaml::ITriggerAction,
        impl::base<TriggerAction, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<TriggerAction, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        TriggerAction(std::nullptr_t) noexcept {}
        TriggerAction(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::ITriggerAction(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) TriggerActionCollection : winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::Xaml::TriggerAction>
    {
        TriggerActionCollection(std::nullptr_t) noexcept {}
        TriggerActionCollection(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::Xaml::TriggerAction>(ptr, take_ownership_from_abi) {}
        TriggerActionCollection();
    };
    struct __declspec(empty_bases) TriggerBase : winrt::Windows::UI::Xaml::ITriggerBase,
        impl::base<TriggerBase, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<TriggerBase, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        TriggerBase(std::nullptr_t) noexcept {}
        TriggerBase(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::ITriggerBase(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) TriggerCollection : winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::Xaml::TriggerBase>
    {
        TriggerCollection(std::nullptr_t) noexcept {}
        TriggerCollection(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::Xaml::TriggerBase>(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) UIElement : winrt::Windows::UI::Xaml::IUIElement,
        impl::base<UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<UIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        UIElement(std::nullptr_t) noexcept {}
        UIElement(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::IUIElement(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto KeyDownEvent();
        [[nodiscard]] static auto KeyUpEvent();
        [[nodiscard]] static auto PointerEnteredEvent();
        [[nodiscard]] static auto PointerPressedEvent();
        [[nodiscard]] static auto PointerMovedEvent();
        [[nodiscard]] static auto PointerReleasedEvent();
        [[nodiscard]] static auto PointerExitedEvent();
        [[nodiscard]] static auto PointerCaptureLostEvent();
        [[nodiscard]] static auto PointerCanceledEvent();
        [[nodiscard]] static auto PointerWheelChangedEvent();
        [[nodiscard]] static auto TappedEvent();
        [[nodiscard]] static auto DoubleTappedEvent();
        [[nodiscard]] static auto HoldingEvent();
        [[nodiscard]] static auto RightTappedEvent();
        [[nodiscard]] static auto ManipulationStartingEvent();
        [[nodiscard]] static auto ManipulationInertiaStartingEvent();
        [[nodiscard]] static auto ManipulationStartedEvent();
        [[nodiscard]] static auto ManipulationDeltaEvent();
        [[nodiscard]] static auto ManipulationCompletedEvent();
        [[nodiscard]] static auto DragEnterEvent();
        [[nodiscard]] static auto DragLeaveEvent();
        [[nodiscard]] static auto DragOverEvent();
        [[nodiscard]] static auto DropEvent();
        [[nodiscard]] static auto AllowDropProperty();
        [[nodiscard]] static auto OpacityProperty();
        [[nodiscard]] static auto ClipProperty();
        [[nodiscard]] static auto RenderTransformProperty();
        [[nodiscard]] static auto ProjectionProperty();
        [[nodiscard]] static auto RenderTransformOriginProperty();
        [[nodiscard]] static auto IsHitTestVisibleProperty();
        [[nodiscard]] static auto VisibilityProperty();
        [[nodiscard]] static auto UseLayoutRoundingProperty();
        [[nodiscard]] static auto TransitionsProperty();
        [[nodiscard]] static auto CacheModeProperty();
        [[nodiscard]] static auto IsTapEnabledProperty();
        [[nodiscard]] static auto IsDoubleTapEnabledProperty();
        [[nodiscard]] static auto IsRightTapEnabledProperty();
        [[nodiscard]] static auto IsHoldingEnabledProperty();
        [[nodiscard]] static auto ManipulationModeProperty();
        [[nodiscard]] static auto PointerCapturesProperty();
        [[nodiscard]] static auto ShadowProperty();
        [[nodiscard]] static auto CompositeModeProperty();
        [[nodiscard]] static auto Transform3DProperty();
        [[nodiscard]] static auto CanDragProperty();
        static auto TryStartDirectManipulation(winrt::Windows::UI::Xaml::Input::Pointer const& value);
        [[nodiscard]] static auto ContextFlyoutProperty();
        [[nodiscard]] static auto ExitDisplayModeOnAccessKeyInvokedProperty();
        [[nodiscard]] static auto IsAccessKeyScopeProperty();
        [[nodiscard]] static auto AccessKeyScopeOwnerProperty();
        [[nodiscard]] static auto AccessKeyProperty();
        [[nodiscard]] static auto LightsProperty();
        [[nodiscard]] static auto KeyTipPlacementModeProperty();
        [[nodiscard]] static auto KeyTipHorizontalOffsetProperty();
        [[nodiscard]] static auto KeyTipVerticalOffsetProperty();
        [[nodiscard]] static auto XYFocusKeyboardNavigationProperty();
        [[nodiscard]] static auto XYFocusUpNavigationStrategyProperty();
        [[nodiscard]] static auto XYFocusDownNavigationStrategyProperty();
        [[nodiscard]] static auto XYFocusLeftNavigationStrategyProperty();
        [[nodiscard]] static auto XYFocusRightNavigationStrategyProperty();
        [[nodiscard]] static auto HighContrastAdjustmentProperty();
        [[nodiscard]] static auto TabFocusNavigationProperty();
        [[nodiscard]] static auto GettingFocusEvent();
        [[nodiscard]] static auto LosingFocusEvent();
        [[nodiscard]] static auto NoFocusCandidateFoundEvent();
        [[nodiscard]] static auto PreviewKeyDownEvent();
        [[nodiscard]] static auto CharacterReceivedEvent();
        [[nodiscard]] static auto PreviewKeyUpEvent();
        [[nodiscard]] static auto BringIntoViewRequestedEvent();
        [[nodiscard]] static auto ContextRequestedEvent();
        [[nodiscard]] static auto KeyTipTargetProperty();
        [[nodiscard]] static auto KeyboardAcceleratorPlacementTargetProperty();
        [[nodiscard]] static auto KeyboardAcceleratorPlacementModeProperty();
        static auto RegisterAsScrollPort(winrt::Windows::UI::Xaml::UIElement const& element);
        [[nodiscard]] static auto CanBeScrollAnchorProperty();
    };
    struct __declspec(empty_bases) UIElementWeakCollection : winrt::Windows::UI::Xaml::IUIElementWeakCollection,
        impl::require<UIElementWeakCollection, winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::UI::Xaml::UIElement>, winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::Xaml::UIElement>>
    {
        UIElementWeakCollection(std::nullptr_t) noexcept {}
        UIElementWeakCollection(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::IUIElementWeakCollection(ptr, take_ownership_from_abi) {}
        UIElementWeakCollection();
    };
    struct __declspec(empty_bases) UnhandledExceptionEventArgs : winrt::Windows::UI::Xaml::IUnhandledExceptionEventArgs
    {
        UnhandledExceptionEventArgs(std::nullptr_t) noexcept {}
        UnhandledExceptionEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::IUnhandledExceptionEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) Vector3Transition : winrt::Windows::UI::Xaml::IVector3Transition
    {
        Vector3Transition(std::nullptr_t) noexcept {}
        Vector3Transition(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::IVector3Transition(ptr, take_ownership_from_abi) {}
        Vector3Transition();
    };
    struct __declspec(empty_bases) VisualState : winrt::Windows::UI::Xaml::IVisualState,
        impl::base<VisualState, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<VisualState, winrt::Windows::UI::Xaml::IVisualState2, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        VisualState(std::nullptr_t) noexcept {}
        VisualState(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::IVisualState(ptr, take_ownership_from_abi) {}
        VisualState();
    };
    struct __declspec(empty_bases) VisualStateChangedEventArgs : winrt::Windows::UI::Xaml::IVisualStateChangedEventArgs
    {
        VisualStateChangedEventArgs(std::nullptr_t) noexcept {}
        VisualStateChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::IVisualStateChangedEventArgs(ptr, take_ownership_from_abi) {}
        VisualStateChangedEventArgs();
    };
    struct __declspec(empty_bases) VisualStateGroup : winrt::Windows::UI::Xaml::IVisualStateGroup,
        impl::base<VisualStateGroup, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<VisualStateGroup, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        VisualStateGroup(std::nullptr_t) noexcept {}
        VisualStateGroup(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::IVisualStateGroup(ptr, take_ownership_from_abi) {}
        VisualStateGroup();
    };
    struct __declspec(empty_bases) VisualStateManager : winrt::Windows::UI::Xaml::IVisualStateManager,
        impl::base<VisualStateManager, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<VisualStateManager, winrt::Windows::UI::Xaml::IVisualStateManagerProtected, winrt::Windows::UI::Xaml::IVisualStateManagerOverrides, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        VisualStateManager(std::nullptr_t) noexcept {}
        VisualStateManager(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::IVisualStateManager(ptr, take_ownership_from_abi) {}
        VisualStateManager();
        static auto GetVisualStateGroups(winrt::Windows::UI::Xaml::FrameworkElement const& obj);
        [[nodiscard]] static auto CustomVisualStateManagerProperty();
        static auto GetCustomVisualStateManager(winrt::Windows::UI::Xaml::FrameworkElement const& obj);
        static auto SetCustomVisualStateManager(winrt::Windows::UI::Xaml::FrameworkElement const& obj, winrt::Windows::UI::Xaml::VisualStateManager const& value);
        static auto GoToState(winrt::Windows::UI::Xaml::Controls::Control const& control, param::hstring const& stateName, bool useTransitions);
    };
    struct __declspec(empty_bases) VisualTransition : winrt::Windows::UI::Xaml::IVisualTransition,
        impl::base<VisualTransition, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<VisualTransition, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        VisualTransition(std::nullptr_t) noexcept {}
        VisualTransition(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::IVisualTransition(ptr, take_ownership_from_abi) {}
        VisualTransition();
    };
    struct __declspec(empty_bases) Window : winrt::Windows::UI::Xaml::IWindow,
        impl::require<Window, winrt::Windows::UI::Xaml::IWindow2, winrt::Windows::UI::Xaml::IWindow3, winrt::Windows::UI::Xaml::IWindow4>
    {
        Window(std::nullptr_t) noexcept {}
        Window(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::IWindow(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto Current();
    };
    struct __declspec(empty_bases) WindowCreatedEventArgs : winrt::Windows::UI::Xaml::IWindowCreatedEventArgs
    {
        WindowCreatedEventArgs(std::nullptr_t) noexcept {}
        WindowCreatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::IWindowCreatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) XamlRoot : winrt::Windows::UI::Xaml::IXamlRoot
    {
        XamlRoot(std::nullptr_t) noexcept {}
        XamlRoot(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::IXamlRoot(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) XamlRootChangedEventArgs : winrt::Windows::UI::Xaml::IXamlRootChangedEventArgs
    {
        XamlRootChangedEventArgs(std::nullptr_t) noexcept {}
        XamlRootChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::IXamlRootChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    template <typename D>
    class IApplicationOverridesT
    {
        D& shim() noexcept { return *static_cast<D*>(this); }
        D const& shim() const noexcept { return *static_cast<const D*>(this); }
    public:
        using IApplicationOverrides = winrt::Windows::UI::Xaml::IApplicationOverrides;
        WINRT_IMPL_AUTO(void) OnActivated(winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs const& args) const;
        WINRT_IMPL_AUTO(void) OnLaunched(winrt::Windows::ApplicationModel::Activation::LaunchActivatedEventArgs const& args) const;
        WINRT_IMPL_AUTO(void) OnFileActivated(winrt::Windows::ApplicationModel::Activation::FileActivatedEventArgs const& args) const;
        WINRT_IMPL_AUTO(void) OnSearchActivated(winrt::Windows::ApplicationModel::Activation::SearchActivatedEventArgs const& args) const;
        WINRT_IMPL_AUTO(void) OnShareTargetActivated(winrt::Windows::ApplicationModel::Activation::ShareTargetActivatedEventArgs const& args) const;
        WINRT_IMPL_AUTO(void) OnFileOpenPickerActivated(winrt::Windows::ApplicationModel::Activation::FileOpenPickerActivatedEventArgs const& args) const;
        WINRT_IMPL_AUTO(void) OnFileSavePickerActivated(winrt::Windows::ApplicationModel::Activation::FileSavePickerActivatedEventArgs const& args) const;
        WINRT_IMPL_AUTO(void) OnCachedFileUpdaterActivated(winrt::Windows::ApplicationModel::Activation::CachedFileUpdaterActivatedEventArgs const& args) const;
        WINRT_IMPL_AUTO(void) OnWindowCreated(winrt::Windows::UI::Xaml::WindowCreatedEventArgs const& args) const;
    };
    template <typename D>
    class IApplicationOverrides2T
    {
        D& shim() noexcept { return *static_cast<D*>(this); }
        D const& shim() const noexcept { return *static_cast<const D*>(this); }
    public:
        using IApplicationOverrides2 = winrt::Windows::UI::Xaml::IApplicationOverrides2;
        WINRT_IMPL_AUTO(void) OnBackgroundActivated(winrt::Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs const& args) const;
    };
    template <typename D>
    class IFrameworkElementOverridesT
    {
        D& shim() noexcept { return *static_cast<D*>(this); }
        D const& shim() const noexcept { return *static_cast<const D*>(this); }
    public:
        using IFrameworkElementOverrides = winrt::Windows::UI::Xaml::IFrameworkElementOverrides;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::Size) MeasureOverride(winrt::Windows::Foundation::Size const& availableSize) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::Size) ArrangeOverride(winrt::Windows::Foundation::Size const& finalSize) const;
        WINRT_IMPL_AUTO(void) OnApplyTemplate() const;
    };
    template <typename D>
    class IFrameworkElementOverrides2T
    {
        D& shim() noexcept { return *static_cast<D*>(this); }
        D const& shim() const noexcept { return *static_cast<const D*>(this); }
    public:
        using IFrameworkElementOverrides2 = winrt::Windows::UI::Xaml::IFrameworkElementOverrides2;
        WINRT_IMPL_AUTO(bool) GoToElementStateCore(param::hstring const& stateName, bool useTransitions) const;
    };
    template <typename D>
    class IUIElementOverridesT
    {
        D& shim() noexcept { return *static_cast<D*>(this); }
        D const& shim() const noexcept { return *static_cast<const D*>(this); }
    public:
        using IUIElementOverrides = winrt::Windows::UI::Xaml::IUIElementOverrides;
        WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::Automation::Peers::AutomationPeer) OnCreateAutomationPeer() const;
        WINRT_IMPL_AUTO(void) OnDisconnectVisualChildren() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Point>>) FindSubElementsForTouchTargeting(winrt::Windows::Foundation::Point const& point, winrt::Windows::Foundation::Rect const& boundingRect) const;
    };
    template <typename D>
    class IUIElementOverrides7T
    {
        D& shim() noexcept { return *static_cast<D*>(this); }
        D const& shim() const noexcept { return *static_cast<const D*>(this); }
    public:
        using IUIElementOverrides7 = winrt::Windows::UI::Xaml::IUIElementOverrides7;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::UI::Xaml::DependencyObject>) GetChildrenInTabFocusOrder() const;
        WINRT_IMPL_AUTO(void) OnProcessKeyboardAccelerators(winrt::Windows::UI::Xaml::Input::ProcessKeyboardAcceleratorEventArgs const& args) const;
    };
    template <typename D>
    class IUIElementOverrides8T
    {
        D& shim() noexcept { return *static_cast<D*>(this); }
        D const& shim() const noexcept { return *static_cast<const D*>(this); }
    public:
        using IUIElementOverrides8 = winrt::Windows::UI::Xaml::IUIElementOverrides8;
        WINRT_IMPL_AUTO(void) OnKeyboardAcceleratorInvoked(winrt::Windows::UI::Xaml::Input::KeyboardAcceleratorInvokedEventArgs const& args) const;
        WINRT_IMPL_AUTO(void) OnBringIntoViewRequested(winrt::Windows::UI::Xaml::BringIntoViewRequestedEventArgs const& e) const;
    };
    template <typename D>
    class IUIElementOverrides9T
    {
        D& shim() noexcept { return *static_cast<D*>(this); }
        D const& shim() const noexcept { return *static_cast<const D*>(this); }
    public:
        using IUIElementOverrides9 = winrt::Windows::UI::Xaml::IUIElementOverrides9;
        WINRT_IMPL_AUTO(void) PopulatePropertyInfoOverride(param::hstring const& propertyName, winrt::Windows::UI::Composition::AnimationPropertyInfo const& animationPropertyInfo) const;
    };
    template <typename D>
    class IVisualStateManagerOverridesT
    {
        D& shim() noexcept { return *static_cast<D*>(this); }
        D const& shim() const noexcept { return *static_cast<const D*>(this); }
    public:
        using IVisualStateManagerOverrides = winrt::Windows::UI::Xaml::IVisualStateManagerOverrides;
        WINRT_IMPL_AUTO(bool) GoToStateCore(winrt::Windows::UI::Xaml::Controls::Control const& control, winrt::Windows::UI::Xaml::FrameworkElement const& templateRoot, param::hstring const& stateName, winrt::Windows::UI::Xaml::VisualStateGroup const& group, winrt::Windows::UI::Xaml::VisualState const& state, bool useTransitions) const;
    };
}
#endif
