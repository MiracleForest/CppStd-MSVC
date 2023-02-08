// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Data_Json_2_H
#define WINRT_Windows_Data_Json_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Data.Json.1.h"
WINRT_EXPORT namespace winrt::Windows::Data::Json
{
    struct __declspec(empty_bases) JsonArray : winrt::Windows::Data::Json::IJsonArray,
        impl::require<JsonArray, winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Data::Json::IJsonValue>, winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Data::Json::IJsonValue>, winrt::Windows::Foundation::IStringable>
    {
        JsonArray(std::nullptr_t) noexcept {}
        JsonArray(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Data::Json::IJsonArray(ptr, take_ownership_from_abi) {}
        JsonArray();
        static auto Parse(param::hstring const& input);
        static auto TryParse(param::hstring const& input, winrt::Windows::Data::Json::JsonArray& result);
    };
    struct JsonError
    {
        JsonError() = delete;
        static auto GetJsonStatus(int32_t hresult);
    };
    struct __declspec(empty_bases) JsonObject : winrt::Windows::Data::Json::IJsonObject,
        impl::require<JsonObject, winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Collections::IKeyValuePair<hstring, winrt::Windows::Data::Json::IJsonValue>>, winrt::Windows::Foundation::Collections::IMap<hstring, winrt::Windows::Data::Json::IJsonValue>, winrt::Windows::Data::Json::IJsonObjectWithDefaultValues, winrt::Windows::Foundation::IStringable>
    {
        JsonObject(std::nullptr_t) noexcept {}
        JsonObject(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Data::Json::IJsonObject(ptr, take_ownership_from_abi) {}
        JsonObject();
        using winrt::Windows::Data::Json::IJsonObject::GetNamedArray;
        using impl::consume_t<JsonObject, winrt::Windows::Data::Json::IJsonObjectWithDefaultValues>::GetNamedArray;
        using winrt::Windows::Data::Json::IJsonObject::GetNamedBoolean;
        using impl::consume_t<JsonObject, winrt::Windows::Data::Json::IJsonObjectWithDefaultValues>::GetNamedBoolean;
        using winrt::Windows::Data::Json::IJsonObject::GetNamedNumber;
        using impl::consume_t<JsonObject, winrt::Windows::Data::Json::IJsonObjectWithDefaultValues>::GetNamedNumber;
        using winrt::Windows::Data::Json::IJsonObject::GetNamedObject;
        using impl::consume_t<JsonObject, winrt::Windows::Data::Json::IJsonObjectWithDefaultValues>::GetNamedObject;
        using winrt::Windows::Data::Json::IJsonObject::GetNamedString;
        using impl::consume_t<JsonObject, winrt::Windows::Data::Json::IJsonObjectWithDefaultValues>::GetNamedString;
        using winrt::Windows::Data::Json::IJsonObject::GetNamedValue;
        using impl::consume_t<JsonObject, winrt::Windows::Data::Json::IJsonObjectWithDefaultValues>::GetNamedValue;
        static auto Parse(param::hstring const& input);
        static auto TryParse(param::hstring const& input, winrt::Windows::Data::Json::JsonObject& result);
    };
    struct __declspec(empty_bases) JsonValue : winrt::Windows::Data::Json::IJsonValue,
        impl::require<JsonValue, winrt::Windows::Foundation::IStringable>
    {
        JsonValue(std::nullptr_t) noexcept {}
        JsonValue(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Data::Json::IJsonValue(ptr, take_ownership_from_abi) {}
        static auto Parse(param::hstring const& input);
        static auto TryParse(param::hstring const& input, winrt::Windows::Data::Json::JsonValue& result);
        static auto CreateBooleanValue(bool input);
        static auto CreateNumberValue(double input);
        static auto CreateStringValue(param::hstring const& input);
        static auto CreateNullValue();
    };
}
#endif
