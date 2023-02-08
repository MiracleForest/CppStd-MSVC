// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Security_Cryptography_0_H
#define WINRT_Windows_Security_Cryptography_0_H
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct IBuffer;
}
WINRT_EXPORT namespace winrt::Windows::Security::Cryptography
{
    enum class BinaryStringEncoding : int32_t
    {
        Utf8 = 0,
        Utf16LE = 1,
        Utf16BE = 2,
    };
    struct ICryptographicBufferStatics;
    struct CryptographicBuffer;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::Security::Cryptography::ICryptographicBufferStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Security::Cryptography::CryptographicBuffer>{ using type = class_category; };
    template <> struct category<winrt::Windows::Security::Cryptography::BinaryStringEncoding>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::Security::Cryptography::CryptographicBuffer> = L"Windows.Security.Cryptography.CryptographicBuffer";
    template <> inline constexpr auto& name_v<winrt::Windows::Security::Cryptography::BinaryStringEncoding> = L"Windows.Security.Cryptography.BinaryStringEncoding";
    template <> inline constexpr auto& name_v<winrt::Windows::Security::Cryptography::ICryptographicBufferStatics> = L"Windows.Security.Cryptography.ICryptographicBufferStatics";
    template <> inline constexpr guid guid_v<winrt::Windows::Security::Cryptography::ICryptographicBufferStatics>{ 0x320B7E22,0x3CB0,0x4CDF,{ 0x86,0x63,0x1D,0x28,0x91,0x00,0x65,0xEB } }; // 320B7E22-3CB0-4CDF-8663-1D28910065EB
    template <> struct abi<winrt::Windows::Security::Cryptography::ICryptographicBufferStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Compare(void*, void*, bool*) noexcept = 0;
            virtual int32_t __stdcall GenerateRandom(uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GenerateRandomNumber(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall CreateFromByteArray(uint32_t, uint8_t*, void**) noexcept = 0;
            virtual int32_t __stdcall CopyToByteArray(void*, uint32_t*, uint8_t**) noexcept = 0;
            virtual int32_t __stdcall DecodeFromHexString(void*, void**) noexcept = 0;
            virtual int32_t __stdcall EncodeToHexString(void*, void**) noexcept = 0;
            virtual int32_t __stdcall DecodeFromBase64String(void*, void**) noexcept = 0;
            virtual int32_t __stdcall EncodeToBase64String(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ConvertStringToBinary(void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall ConvertBinaryToString(int32_t, void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_ICryptographicBufferStatics
    {
        WINRT_IMPL_AUTO(bool) Compare(winrt::Windows::Storage::Streams::IBuffer const& object1, winrt::Windows::Storage::Streams::IBuffer const& object2) const;
        WINRT_IMPL_AUTO(winrt::Windows::Storage::Streams::IBuffer) GenerateRandom(uint32_t length) const;
        WINRT_IMPL_AUTO(uint32_t) GenerateRandomNumber() const;
        WINRT_IMPL_AUTO(winrt::Windows::Storage::Streams::IBuffer) CreateFromByteArray(array_view<uint8_t const> value) const;
        WINRT_IMPL_AUTO(void) CopyToByteArray(winrt::Windows::Storage::Streams::IBuffer const& buffer, com_array<uint8_t>& value) const;
        WINRT_IMPL_AUTO(winrt::Windows::Storage::Streams::IBuffer) DecodeFromHexString(param::hstring const& value) const;
        WINRT_IMPL_AUTO(hstring) EncodeToHexString(winrt::Windows::Storage::Streams::IBuffer const& buffer) const;
        WINRT_IMPL_AUTO(winrt::Windows::Storage::Streams::IBuffer) DecodeFromBase64String(param::hstring const& value) const;
        WINRT_IMPL_AUTO(hstring) EncodeToBase64String(winrt::Windows::Storage::Streams::IBuffer const& buffer) const;
        WINRT_IMPL_AUTO(winrt::Windows::Storage::Streams::IBuffer) ConvertStringToBinary(param::hstring const& value, winrt::Windows::Security::Cryptography::BinaryStringEncoding const& encoding) const;
        WINRT_IMPL_AUTO(hstring) ConvertBinaryToString(winrt::Windows::Security::Cryptography::BinaryStringEncoding const& encoding, winrt::Windows::Storage::Streams::IBuffer const& buffer) const;
    };
    template <> struct consume<winrt::Windows::Security::Cryptography::ICryptographicBufferStatics>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_ICryptographicBufferStatics<D>;
    };
}
#endif
