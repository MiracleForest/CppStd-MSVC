// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_ExtendedExecution_0_H
#define WINRT_Windows_ApplicationModel_ExtendedExecution_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    template <typename TResult> struct __declspec(empty_bases) IAsyncOperation;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::ExtendedExecution
{
    enum class ExtendedExecutionReason : int32_t
    {
        Unspecified = 0,
        LocationTracking = 1,
        SavingData = 2,
    };
    enum class ExtendedExecutionResult : int32_t
    {
        Allowed = 0,
        Denied = 1,
    };
    enum class ExtendedExecutionRevokedReason : int32_t
    {
        Resumed = 0,
        SystemPolicy = 1,
    };
    struct IExtendedExecutionRevokedEventArgs;
    struct IExtendedExecutionSession;
    struct ExtendedExecutionRevokedEventArgs;
    struct ExtendedExecutionSession;
}
namespace winrt::impl
{
    template <> struct category<Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionRevokedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionSession>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionSession>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionReason>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionResult>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedReason>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs> = L"Windows.ApplicationModel.ExtendedExecution.ExtendedExecutionRevokedEventArgs";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionSession> = L"Windows.ApplicationModel.ExtendedExecution.ExtendedExecutionSession";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionReason> = L"Windows.ApplicationModel.ExtendedExecution.ExtendedExecutionReason";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionResult> = L"Windows.ApplicationModel.ExtendedExecution.ExtendedExecutionResult";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedReason> = L"Windows.ApplicationModel.ExtendedExecution.ExtendedExecutionRevokedReason";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionRevokedEventArgs> = L"Windows.ApplicationModel.ExtendedExecution.IExtendedExecutionRevokedEventArgs";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionSession> = L"Windows.ApplicationModel.ExtendedExecution.IExtendedExecutionSession";
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionRevokedEventArgs>{ 0xBFBC9F16,0x63B5,0x4C0B,{ 0xAA,0xD6,0x82,0x8A,0xF5,0x37,0x3E,0xC3 } }; // BFBC9F16-63B5-4C0B-AAD6-828AF5373EC3
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionSession>{ 0xAF908A2D,0x118B,0x48F1,{ 0x93,0x08,0x0C,0x4F,0xC4,0x1E,0x20,0x0F } }; // AF908A2D-118B-48F1-9308-0C4FC41E200F
    template <> struct default_interface<Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs>{ using type = Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionRevokedEventArgs; };
    template <> struct default_interface<Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionSession>{ using type = Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionSession; };
    template <> struct abi<Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionRevokedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Reason(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionSession>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Reason(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Reason(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Description(void**) noexcept = 0;
            virtual int32_t __stdcall put_Description(void*) noexcept = 0;
            virtual int32_t __stdcall get_PercentProgress(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_PercentProgress(uint32_t) noexcept = 0;
            virtual int32_t __stdcall add_Revoked(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Revoked(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall RequestExtensionAsync(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_ExtendedExecution_IExtendedExecutionRevokedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedReason) Reason() const;
    };
    template <> struct consume<Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionRevokedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_ExtendedExecution_IExtendedExecutionRevokedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_ExtendedExecution_IExtendedExecutionSession
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionReason) Reason() const;
        WINRT_IMPL_AUTO(void) Reason(Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionReason const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Description() const;
        WINRT_IMPL_AUTO(void) Description(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) PercentProgress() const;
        WINRT_IMPL_AUTO(void) PercentProgress(uint32_t value) const;
        WINRT_IMPL_AUTO(winrt::event_token) Revoked(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs> const& handler) const;
        using Revoked_revoker = impl::event_revoker<Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionSession, &impl::abi_t<Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionSession>::remove_Revoked>;
        [[nodiscard]] Revoked_revoker Revoked(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) Revoked(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionResult>) RequestExtensionAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionSession>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_ExtendedExecution_IExtendedExecutionSession<D>;
    };
}
#endif
