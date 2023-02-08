// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Networking_0_H
#define WINRT_Windows_Networking_0_H
WINRT_EXPORT namespace winrt::Windows::Networking::Connectivity
{
    struct IPInformation;
}
WINRT_EXPORT namespace winrt::Windows::Networking
{
    enum class DomainNameType : int32_t
    {
        Suffix = 0,
        FullyQualified = 1,
    };
    enum class HostNameSortOptions : uint32_t
    {
        None = 0,
        OptimizeForLongConnections = 0x2,
    };
    enum class HostNameType : int32_t
    {
        DomainName = 0,
        Ipv4 = 1,
        Ipv6 = 2,
        Bluetooth = 3,
    };
    struct IEndpointPair;
    struct IEndpointPairFactory;
    struct IHostName;
    struct IHostNameFactory;
    struct IHostNameStatics;
    struct EndpointPair;
    struct HostName;
}
namespace winrt::impl
{
    template <> struct category<Windows::Networking::IEndpointPair>{ using type = interface_category; };
    template <> struct category<Windows::Networking::IEndpointPairFactory>{ using type = interface_category; };
    template <> struct category<Windows::Networking::IHostName>{ using type = interface_category; };
    template <> struct category<Windows::Networking::IHostNameFactory>{ using type = interface_category; };
    template <> struct category<Windows::Networking::IHostNameStatics>{ using type = interface_category; };
    template <> struct category<Windows::Networking::EndpointPair>{ using type = class_category; };
    template <> struct category<Windows::Networking::HostName>{ using type = class_category; };
    template <> struct category<Windows::Networking::DomainNameType>{ using type = enum_category; };
    template <> struct category<Windows::Networking::HostNameSortOptions>{ using type = enum_category; };
    template <> struct category<Windows::Networking::HostNameType>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<Windows::Networking::EndpointPair> = L"Windows.Networking.EndpointPair";
    template <> inline constexpr auto& name_v<Windows::Networking::HostName> = L"Windows.Networking.HostName";
    template <> inline constexpr auto& name_v<Windows::Networking::DomainNameType> = L"Windows.Networking.DomainNameType";
    template <> inline constexpr auto& name_v<Windows::Networking::HostNameSortOptions> = L"Windows.Networking.HostNameSortOptions";
    template <> inline constexpr auto& name_v<Windows::Networking::HostNameType> = L"Windows.Networking.HostNameType";
    template <> inline constexpr auto& name_v<Windows::Networking::IEndpointPair> = L"Windows.Networking.IEndpointPair";
    template <> inline constexpr auto& name_v<Windows::Networking::IEndpointPairFactory> = L"Windows.Networking.IEndpointPairFactory";
    template <> inline constexpr auto& name_v<Windows::Networking::IHostName> = L"Windows.Networking.IHostName";
    template <> inline constexpr auto& name_v<Windows::Networking::IHostNameFactory> = L"Windows.Networking.IHostNameFactory";
    template <> inline constexpr auto& name_v<Windows::Networking::IHostNameStatics> = L"Windows.Networking.IHostNameStatics";
    template <> inline constexpr guid guid_v<Windows::Networking::IEndpointPair>{ 0x33A0AA36,0xF8FA,0x4B30,{ 0xB8,0x56,0x76,0x51,0x7C,0x3B,0xD0,0x6D } }; // 33A0AA36-F8FA-4B30-B856-76517C3BD06D
    template <> inline constexpr guid guid_v<Windows::Networking::IEndpointPairFactory>{ 0xB609D971,0x64E0,0x442B,{ 0xAA,0x6F,0xCC,0x8C,0x8F,0x18,0x1F,0x78 } }; // B609D971-64E0-442B-AA6F-CC8C8F181F78
    template <> inline constexpr guid guid_v<Windows::Networking::IHostName>{ 0xBF8ECAAD,0xED96,0x49A7,{ 0x90,0x84,0xD4,0x16,0xCA,0xE8,0x8D,0xCB } }; // BF8ECAAD-ED96-49A7-9084-D416CAE88DCB
    template <> inline constexpr guid guid_v<Windows::Networking::IHostNameFactory>{ 0x458C23ED,0x712F,0x4576,{ 0xAD,0xF1,0xC2,0x0B,0x2C,0x64,0x35,0x58 } }; // 458C23ED-712F-4576-ADF1-C20B2C643558
    template <> inline constexpr guid guid_v<Windows::Networking::IHostNameStatics>{ 0xF68CD4BF,0xA388,0x4E8B,{ 0x91,0xEA,0x54,0xDD,0x6D,0xD9,0x01,0xC0 } }; // F68CD4BF-A388-4E8B-91EA-54DD6DD901C0
    template <> struct default_interface<Windows::Networking::EndpointPair>{ using type = Windows::Networking::IEndpointPair; };
    template <> struct default_interface<Windows::Networking::HostName>{ using type = Windows::Networking::IHostName; };
    template <> struct abi<Windows::Networking::IEndpointPair>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LocalHostName(void**) noexcept = 0;
            virtual int32_t __stdcall put_LocalHostName(void*) noexcept = 0;
            virtual int32_t __stdcall get_LocalServiceName(void**) noexcept = 0;
            virtual int32_t __stdcall put_LocalServiceName(void*) noexcept = 0;
            virtual int32_t __stdcall get_RemoteHostName(void**) noexcept = 0;
            virtual int32_t __stdcall put_RemoteHostName(void*) noexcept = 0;
            virtual int32_t __stdcall get_RemoteServiceName(void**) noexcept = 0;
            virtual int32_t __stdcall put_RemoteServiceName(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::IEndpointPairFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateEndpointPair(void*, void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::IHostName>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IPInformation(void**) noexcept = 0;
            virtual int32_t __stdcall get_RawName(void**) noexcept = 0;
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_CanonicalName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Type(int32_t*) noexcept = 0;
            virtual int32_t __stdcall IsEqual(void*, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::IHostNameFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateHostName(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::IHostNameStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Compare(void*, void*, int32_t*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Networking_IEndpointPair
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::HostName) LocalHostName() const;
        WINRT_IMPL_AUTO(void) LocalHostName(Windows::Networking::HostName const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) LocalServiceName() const;
        WINRT_IMPL_AUTO(void) LocalServiceName(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::HostName) RemoteHostName() const;
        WINRT_IMPL_AUTO(void) RemoteHostName(Windows::Networking::HostName const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) RemoteServiceName() const;
        WINRT_IMPL_AUTO(void) RemoteServiceName(param::hstring const& value) const;
    };
    template <> struct consume<Windows::Networking::IEndpointPair>
    {
        template <typename D> using type = consume_Windows_Networking_IEndpointPair<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_IEndpointPairFactory
    {
        WINRT_IMPL_AUTO(Windows::Networking::EndpointPair) CreateEndpointPair(Windows::Networking::HostName const& localHostName, param::hstring const& localServiceName, Windows::Networking::HostName const& remoteHostName, param::hstring const& remoteServiceName) const;
    };
    template <> struct consume<Windows::Networking::IEndpointPairFactory>
    {
        template <typename D> using type = consume_Windows_Networking_IEndpointPairFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_IHostName
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::Connectivity::IPInformation) IPInformation() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) RawName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DisplayName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) CanonicalName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::HostNameType) Type() const;
        WINRT_IMPL_AUTO(bool) IsEqual(Windows::Networking::HostName const& hostName) const;
    };
    template <> struct consume<Windows::Networking::IHostName>
    {
        template <typename D> using type = consume_Windows_Networking_IHostName<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_IHostNameFactory
    {
        WINRT_IMPL_AUTO(Windows::Networking::HostName) CreateHostName(param::hstring const& hostName) const;
    };
    template <> struct consume<Windows::Networking::IHostNameFactory>
    {
        template <typename D> using type = consume_Windows_Networking_IHostNameFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_IHostNameStatics
    {
        WINRT_IMPL_AUTO(int32_t) Compare(param::hstring const& value1, param::hstring const& value2) const;
    };
    template <> struct consume<Windows::Networking::IHostNameStatics>
    {
        template <typename D> using type = consume_Windows_Networking_IHostNameStatics<D>;
    };
}
#endif
