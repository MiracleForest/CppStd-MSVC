// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Perception_Automation_Core_1_H
#define WINRT_Windows_Perception_Automation_Core_1_H
#include "winrt/impl/Windows.Perception.Automation.Core.0.h"
WINRT_EXPORT namespace winrt::Windows::Perception::Automation::Core
{
    struct __declspec(empty_bases) ICorePerceptionAutomationStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICorePerceptionAutomationStatics>
    {
        ICorePerceptionAutomationStatics(std::nullptr_t = nullptr) noexcept {}
        ICorePerceptionAutomationStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
