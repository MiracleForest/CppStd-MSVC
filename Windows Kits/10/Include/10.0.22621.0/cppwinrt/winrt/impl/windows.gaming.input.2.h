// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Gaming_Input_2_H
#define WINRT_Windows_Gaming_Input_2_H
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Gaming.Input.1.h"
WINRT_EXPORT namespace winrt::Windows::Gaming::Input
{
    struct ArcadeStickReading
    {
        uint64_t Timestamp;
        winrt::Windows::Gaming::Input::ArcadeStickButtons Buttons;
    };
    inline bool operator==(ArcadeStickReading const& left, ArcadeStickReading const& right) noexcept
    {
        return left.Timestamp == right.Timestamp && left.Buttons == right.Buttons;
    }
    inline bool operator!=(ArcadeStickReading const& left, ArcadeStickReading const& right) noexcept
    {
        return !(left == right);
    }
    struct FlightStickReading
    {
        uint64_t Timestamp;
        winrt::Windows::Gaming::Input::FlightStickButtons Buttons;
        winrt::Windows::Gaming::Input::GameControllerSwitchPosition HatSwitch;
        double Roll;
        double Pitch;
        double Yaw;
        double Throttle;
    };
    inline bool operator==(FlightStickReading const& left, FlightStickReading const& right) noexcept
    {
        return left.Timestamp == right.Timestamp && left.Buttons == right.Buttons && left.HatSwitch == right.HatSwitch && left.Roll == right.Roll && left.Pitch == right.Pitch && left.Yaw == right.Yaw && left.Throttle == right.Throttle;
    }
    inline bool operator!=(FlightStickReading const& left, FlightStickReading const& right) noexcept
    {
        return !(left == right);
    }
    struct GamepadReading
    {
        uint64_t Timestamp;
        winrt::Windows::Gaming::Input::GamepadButtons Buttons;
        double LeftTrigger;
        double RightTrigger;
        double LeftThumbstickX;
        double LeftThumbstickY;
        double RightThumbstickX;
        double RightThumbstickY;
    };
    inline bool operator==(GamepadReading const& left, GamepadReading const& right) noexcept
    {
        return left.Timestamp == right.Timestamp && left.Buttons == right.Buttons && left.LeftTrigger == right.LeftTrigger && left.RightTrigger == right.RightTrigger && left.LeftThumbstickX == right.LeftThumbstickX && left.LeftThumbstickY == right.LeftThumbstickY && left.RightThumbstickX == right.RightThumbstickX && left.RightThumbstickY == right.RightThumbstickY;
    }
    inline bool operator!=(GamepadReading const& left, GamepadReading const& right) noexcept
    {
        return !(left == right);
    }
    struct GamepadVibration
    {
        double LeftMotor;
        double RightMotor;
        double LeftTrigger;
        double RightTrigger;
    };
    inline bool operator==(GamepadVibration const& left, GamepadVibration const& right) noexcept
    {
        return left.LeftMotor == right.LeftMotor && left.RightMotor == right.RightMotor && left.LeftTrigger == right.LeftTrigger && left.RightTrigger == right.RightTrigger;
    }
    inline bool operator!=(GamepadVibration const& left, GamepadVibration const& right) noexcept
    {
        return !(left == right);
    }
    struct RacingWheelReading
    {
        uint64_t Timestamp;
        winrt::Windows::Gaming::Input::RacingWheelButtons Buttons;
        int32_t PatternShifterGear;
        double Wheel;
        double Throttle;
        double Brake;
        double Clutch;
        double Handbrake;
    };
    inline bool operator==(RacingWheelReading const& left, RacingWheelReading const& right) noexcept
    {
        return left.Timestamp == right.Timestamp && left.Buttons == right.Buttons && left.PatternShifterGear == right.PatternShifterGear && left.Wheel == right.Wheel && left.Throttle == right.Throttle && left.Brake == right.Brake && left.Clutch == right.Clutch && left.Handbrake == right.Handbrake;
    }
    inline bool operator!=(RacingWheelReading const& left, RacingWheelReading const& right) noexcept
    {
        return !(left == right);
    }
    struct UINavigationReading
    {
        uint64_t Timestamp;
        winrt::Windows::Gaming::Input::RequiredUINavigationButtons RequiredButtons;
        winrt::Windows::Gaming::Input::OptionalUINavigationButtons OptionalButtons;
    };
    inline bool operator==(UINavigationReading const& left, UINavigationReading const& right) noexcept
    {
        return left.Timestamp == right.Timestamp && left.RequiredButtons == right.RequiredButtons && left.OptionalButtons == right.OptionalButtons;
    }
    inline bool operator!=(UINavigationReading const& left, UINavigationReading const& right) noexcept
    {
        return !(left == right);
    }
    struct __declspec(empty_bases) ArcadeStick : winrt::Windows::Gaming::Input::IArcadeStick,
        impl::require<ArcadeStick, winrt::Windows::Gaming::Input::IGameControllerBatteryInfo>
    {
        ArcadeStick(std::nullptr_t) noexcept {}
        ArcadeStick(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Gaming::Input::IArcadeStick(ptr, take_ownership_from_abi) {}
        static auto ArcadeStickAdded(winrt::Windows::Foundation::EventHandler<winrt::Windows::Gaming::Input::ArcadeStick> const& value);
        using ArcadeStickAdded_revoker = impl::factory_event_revoker<winrt::Windows::Gaming::Input::IArcadeStickStatics, &impl::abi_t<winrt::Windows::Gaming::Input::IArcadeStickStatics>::remove_ArcadeStickAdded>;
        [[nodiscard]] static ArcadeStickAdded_revoker ArcadeStickAdded(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Gaming::Input::ArcadeStick> const& value);
        static auto ArcadeStickAdded(winrt::event_token const& token);
        static auto ArcadeStickRemoved(winrt::Windows::Foundation::EventHandler<winrt::Windows::Gaming::Input::ArcadeStick> const& value);
        using ArcadeStickRemoved_revoker = impl::factory_event_revoker<winrt::Windows::Gaming::Input::IArcadeStickStatics, &impl::abi_t<winrt::Windows::Gaming::Input::IArcadeStickStatics>::remove_ArcadeStickRemoved>;
        [[nodiscard]] static ArcadeStickRemoved_revoker ArcadeStickRemoved(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Gaming::Input::ArcadeStick> const& value);
        static auto ArcadeStickRemoved(winrt::event_token const& token);
        [[nodiscard]] static auto ArcadeSticks();
        static auto FromGameController(winrt::Windows::Gaming::Input::IGameController const& gameController);
    };
    struct __declspec(empty_bases) FlightStick : winrt::Windows::Gaming::Input::IFlightStick,
        impl::require<FlightStick, winrt::Windows::Gaming::Input::IGameControllerBatteryInfo>
    {
        FlightStick(std::nullptr_t) noexcept {}
        FlightStick(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Gaming::Input::IFlightStick(ptr, take_ownership_from_abi) {}
        static auto FlightStickAdded(winrt::Windows::Foundation::EventHandler<winrt::Windows::Gaming::Input::FlightStick> const& value);
        using FlightStickAdded_revoker = impl::factory_event_revoker<winrt::Windows::Gaming::Input::IFlightStickStatics, &impl::abi_t<winrt::Windows::Gaming::Input::IFlightStickStatics>::remove_FlightStickAdded>;
        [[nodiscard]] static FlightStickAdded_revoker FlightStickAdded(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Gaming::Input::FlightStick> const& value);
        static auto FlightStickAdded(winrt::event_token const& token);
        static auto FlightStickRemoved(winrt::Windows::Foundation::EventHandler<winrt::Windows::Gaming::Input::FlightStick> const& value);
        using FlightStickRemoved_revoker = impl::factory_event_revoker<winrt::Windows::Gaming::Input::IFlightStickStatics, &impl::abi_t<winrt::Windows::Gaming::Input::IFlightStickStatics>::remove_FlightStickRemoved>;
        [[nodiscard]] static FlightStickRemoved_revoker FlightStickRemoved(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Gaming::Input::FlightStick> const& value);
        static auto FlightStickRemoved(winrt::event_token const& token);
        [[nodiscard]] static auto FlightSticks();
        static auto FromGameController(winrt::Windows::Gaming::Input::IGameController const& gameController);
    };
    struct __declspec(empty_bases) Gamepad : winrt::Windows::Gaming::Input::IGamepad,
        impl::require<Gamepad, winrt::Windows::Gaming::Input::IGamepad2, winrt::Windows::Gaming::Input::IGameControllerBatteryInfo>
    {
        Gamepad(std::nullptr_t) noexcept {}
        Gamepad(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Gaming::Input::IGamepad(ptr, take_ownership_from_abi) {}
        static auto GamepadAdded(winrt::Windows::Foundation::EventHandler<winrt::Windows::Gaming::Input::Gamepad> const& value);
        using GamepadAdded_revoker = impl::factory_event_revoker<winrt::Windows::Gaming::Input::IGamepadStatics, &impl::abi_t<winrt::Windows::Gaming::Input::IGamepadStatics>::remove_GamepadAdded>;
        [[nodiscard]] static GamepadAdded_revoker GamepadAdded(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Gaming::Input::Gamepad> const& value);
        static auto GamepadAdded(winrt::event_token const& token);
        static auto GamepadRemoved(winrt::Windows::Foundation::EventHandler<winrt::Windows::Gaming::Input::Gamepad> const& value);
        using GamepadRemoved_revoker = impl::factory_event_revoker<winrt::Windows::Gaming::Input::IGamepadStatics, &impl::abi_t<winrt::Windows::Gaming::Input::IGamepadStatics>::remove_GamepadRemoved>;
        [[nodiscard]] static GamepadRemoved_revoker GamepadRemoved(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Gaming::Input::Gamepad> const& value);
        static auto GamepadRemoved(winrt::event_token const& token);
        [[nodiscard]] static auto Gamepads();
        static auto FromGameController(winrt::Windows::Gaming::Input::IGameController const& gameController);
    };
    struct __declspec(empty_bases) Headset : winrt::Windows::Gaming::Input::IHeadset,
        impl::require<Headset, winrt::Windows::Gaming::Input::IGameControllerBatteryInfo>
    {
        Headset(std::nullptr_t) noexcept {}
        Headset(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Gaming::Input::IHeadset(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) RacingWheel : winrt::Windows::Gaming::Input::IRacingWheel,
        impl::require<RacingWheel, winrt::Windows::Gaming::Input::IGameControllerBatteryInfo>
    {
        RacingWheel(std::nullptr_t) noexcept {}
        RacingWheel(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Gaming::Input::IRacingWheel(ptr, take_ownership_from_abi) {}
        static auto RacingWheelAdded(winrt::Windows::Foundation::EventHandler<winrt::Windows::Gaming::Input::RacingWheel> const& value);
        using RacingWheelAdded_revoker = impl::factory_event_revoker<winrt::Windows::Gaming::Input::IRacingWheelStatics, &impl::abi_t<winrt::Windows::Gaming::Input::IRacingWheelStatics>::remove_RacingWheelAdded>;
        [[nodiscard]] static RacingWheelAdded_revoker RacingWheelAdded(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Gaming::Input::RacingWheel> const& value);
        static auto RacingWheelAdded(winrt::event_token const& token);
        static auto RacingWheelRemoved(winrt::Windows::Foundation::EventHandler<winrt::Windows::Gaming::Input::RacingWheel> const& value);
        using RacingWheelRemoved_revoker = impl::factory_event_revoker<winrt::Windows::Gaming::Input::IRacingWheelStatics, &impl::abi_t<winrt::Windows::Gaming::Input::IRacingWheelStatics>::remove_RacingWheelRemoved>;
        [[nodiscard]] static RacingWheelRemoved_revoker RacingWheelRemoved(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Gaming::Input::RacingWheel> const& value);
        static auto RacingWheelRemoved(winrt::event_token const& token);
        [[nodiscard]] static auto RacingWheels();
        static auto FromGameController(winrt::Windows::Gaming::Input::IGameController const& gameController);
    };
    struct __declspec(empty_bases) RawGameController : winrt::Windows::Gaming::Input::IRawGameController,
        impl::require<RawGameController, winrt::Windows::Gaming::Input::IGameControllerBatteryInfo, winrt::Windows::Gaming::Input::IRawGameController2>
    {
        RawGameController(std::nullptr_t) noexcept {}
        RawGameController(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Gaming::Input::IRawGameController(ptr, take_ownership_from_abi) {}
        static auto RawGameControllerAdded(winrt::Windows::Foundation::EventHandler<winrt::Windows::Gaming::Input::RawGameController> const& value);
        using RawGameControllerAdded_revoker = impl::factory_event_revoker<winrt::Windows::Gaming::Input::IRawGameControllerStatics, &impl::abi_t<winrt::Windows::Gaming::Input::IRawGameControllerStatics>::remove_RawGameControllerAdded>;
        [[nodiscard]] static RawGameControllerAdded_revoker RawGameControllerAdded(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Gaming::Input::RawGameController> const& value);
        static auto RawGameControllerAdded(winrt::event_token const& token);
        static auto RawGameControllerRemoved(winrt::Windows::Foundation::EventHandler<winrt::Windows::Gaming::Input::RawGameController> const& value);
        using RawGameControllerRemoved_revoker = impl::factory_event_revoker<winrt::Windows::Gaming::Input::IRawGameControllerStatics, &impl::abi_t<winrt::Windows::Gaming::Input::IRawGameControllerStatics>::remove_RawGameControllerRemoved>;
        [[nodiscard]] static RawGameControllerRemoved_revoker RawGameControllerRemoved(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Gaming::Input::RawGameController> const& value);
        static auto RawGameControllerRemoved(winrt::event_token const& token);
        [[nodiscard]] static auto RawGameControllers();
        static auto FromGameController(winrt::Windows::Gaming::Input::IGameController const& gameController);
    };
    struct __declspec(empty_bases) UINavigationController : winrt::Windows::Gaming::Input::IUINavigationController,
        impl::require<UINavigationController, winrt::Windows::Gaming::Input::IGameControllerBatteryInfo>
    {
        UINavigationController(std::nullptr_t) noexcept {}
        UINavigationController(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Gaming::Input::IUINavigationController(ptr, take_ownership_from_abi) {}
        static auto UINavigationControllerAdded(winrt::Windows::Foundation::EventHandler<winrt::Windows::Gaming::Input::UINavigationController> const& value);
        using UINavigationControllerAdded_revoker = impl::factory_event_revoker<winrt::Windows::Gaming::Input::IUINavigationControllerStatics, &impl::abi_t<winrt::Windows::Gaming::Input::IUINavigationControllerStatics>::remove_UINavigationControllerAdded>;
        [[nodiscard]] static UINavigationControllerAdded_revoker UINavigationControllerAdded(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Gaming::Input::UINavigationController> const& value);
        static auto UINavigationControllerAdded(winrt::event_token const& token);
        static auto UINavigationControllerRemoved(winrt::Windows::Foundation::EventHandler<winrt::Windows::Gaming::Input::UINavigationController> const& value);
        using UINavigationControllerRemoved_revoker = impl::factory_event_revoker<winrt::Windows::Gaming::Input::IUINavigationControllerStatics, &impl::abi_t<winrt::Windows::Gaming::Input::IUINavigationControllerStatics>::remove_UINavigationControllerRemoved>;
        [[nodiscard]] static UINavigationControllerRemoved_revoker UINavigationControllerRemoved(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Gaming::Input::UINavigationController> const& value);
        static auto UINavigationControllerRemoved(winrt::event_token const& token);
        [[nodiscard]] static auto UINavigationControllers();
        static auto FromGameController(winrt::Windows::Gaming::Input::IGameController const& gameController);
    };
}
#endif
