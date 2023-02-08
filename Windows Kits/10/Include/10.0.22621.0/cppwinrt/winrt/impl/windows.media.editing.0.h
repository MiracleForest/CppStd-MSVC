// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Media_Editing_0_H
#define WINRT_Windows_Media_Editing_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct IAsyncAction;
    template <typename TResult, typename TProgress> struct __declspec(empty_bases) IAsyncOperationWithProgress;
    template <typename TResult> struct __declspec(empty_bases) IAsyncOperation;
    struct Rect;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IIterable;
    template <typename K, typename V> struct __declspec(empty_bases) IMap;
    template <typename T> struct __declspec(empty_bases) IVectorView;
    template <typename T> struct __declspec(empty_bases) IVector;
}
WINRT_EXPORT namespace winrt::Windows::Graphics::DirectX::Direct3D11
{
    struct IDirect3DSurface;
}
WINRT_EXPORT namespace winrt::Windows::Graphics::Imaging
{
    struct ImageStream;
}
WINRT_EXPORT namespace winrt::Windows::Media::Core
{
    struct MediaStreamSource;
}
WINRT_EXPORT namespace winrt::Windows::Media::Effects
{
    struct IAudioEffectDefinition;
    struct IVideoCompositorDefinition;
    struct IVideoEffectDefinition;
}
WINRT_EXPORT namespace winrt::Windows::Media::MediaProperties
{
    struct AudioEncodingProperties;
    struct MediaEncodingProfile;
    struct VideoEncodingProperties;
}
WINRT_EXPORT namespace winrt::Windows::Media::Transcoding
{
    enum class TranscodeFailureReason : int32_t;
}
WINRT_EXPORT namespace winrt::Windows::Storage
{
    struct IStorageFile;
    struct StorageFile;
}
WINRT_EXPORT namespace winrt::Windows::UI
{
    struct Color;
}
WINRT_EXPORT namespace winrt::Windows::Media::Editing
{
    enum class MediaTrimmingPreference : int32_t
    {
        Fast = 0,
        Precise = 1,
    };
    enum class VideoFramePrecision : int32_t
    {
        NearestFrame = 0,
        NearestKeyFrame = 1,
    };
    struct IBackgroundAudioTrack;
    struct IBackgroundAudioTrackStatics;
    struct IEmbeddedAudioTrack;
    struct IMediaClip;
    struct IMediaClipStatics;
    struct IMediaClipStatics2;
    struct IMediaComposition;
    struct IMediaComposition2;
    struct IMediaCompositionStatics;
    struct IMediaOverlay;
    struct IMediaOverlayFactory;
    struct IMediaOverlayLayer;
    struct IMediaOverlayLayerFactory;
    struct BackgroundAudioTrack;
    struct EmbeddedAudioTrack;
    struct MediaClip;
    struct MediaComposition;
    struct MediaOverlay;
    struct MediaOverlayLayer;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::Media::Editing::IBackgroundAudioTrack>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Editing::IBackgroundAudioTrackStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Editing::IEmbeddedAudioTrack>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Editing::IMediaClip>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Editing::IMediaClipStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Editing::IMediaClipStatics2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Editing::IMediaComposition>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Editing::IMediaComposition2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Editing::IMediaCompositionStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Editing::IMediaOverlay>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Editing::IMediaOverlayFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Editing::IMediaOverlayLayer>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Editing::IMediaOverlayLayerFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Editing::BackgroundAudioTrack>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Editing::EmbeddedAudioTrack>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Editing::MediaClip>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Editing::MediaComposition>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Editing::MediaOverlay>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Editing::MediaOverlayLayer>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Editing::MediaTrimmingPreference>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::Editing::VideoFramePrecision>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Editing::BackgroundAudioTrack> = L"Windows.Media.Editing.BackgroundAudioTrack";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Editing::EmbeddedAudioTrack> = L"Windows.Media.Editing.EmbeddedAudioTrack";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Editing::MediaClip> = L"Windows.Media.Editing.MediaClip";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Editing::MediaComposition> = L"Windows.Media.Editing.MediaComposition";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Editing::MediaOverlay> = L"Windows.Media.Editing.MediaOverlay";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Editing::MediaOverlayLayer> = L"Windows.Media.Editing.MediaOverlayLayer";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Editing::MediaTrimmingPreference> = L"Windows.Media.Editing.MediaTrimmingPreference";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Editing::VideoFramePrecision> = L"Windows.Media.Editing.VideoFramePrecision";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Editing::IBackgroundAudioTrack> = L"Windows.Media.Editing.IBackgroundAudioTrack";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Editing::IBackgroundAudioTrackStatics> = L"Windows.Media.Editing.IBackgroundAudioTrackStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Editing::IEmbeddedAudioTrack> = L"Windows.Media.Editing.IEmbeddedAudioTrack";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Editing::IMediaClip> = L"Windows.Media.Editing.IMediaClip";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Editing::IMediaClipStatics> = L"Windows.Media.Editing.IMediaClipStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Editing::IMediaClipStatics2> = L"Windows.Media.Editing.IMediaClipStatics2";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Editing::IMediaComposition> = L"Windows.Media.Editing.IMediaComposition";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Editing::IMediaComposition2> = L"Windows.Media.Editing.IMediaComposition2";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Editing::IMediaCompositionStatics> = L"Windows.Media.Editing.IMediaCompositionStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Editing::IMediaOverlay> = L"Windows.Media.Editing.IMediaOverlay";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Editing::IMediaOverlayFactory> = L"Windows.Media.Editing.IMediaOverlayFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Editing::IMediaOverlayLayer> = L"Windows.Media.Editing.IMediaOverlayLayer";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Editing::IMediaOverlayLayerFactory> = L"Windows.Media.Editing.IMediaOverlayLayerFactory";
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Editing::IBackgroundAudioTrack>{ 0x4B91B3BD,0x9E21,0x4266,{ 0xA9,0xC2,0x67,0xDD,0x01,0x1A,0x23,0x57 } }; // 4B91B3BD-9E21-4266-A9C2-67DD011A2357
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Editing::IBackgroundAudioTrackStatics>{ 0xD9B1C0D7,0xD018,0x42A8,{ 0xA5,0x59,0xCB,0x4D,0x9E,0x97,0xE6,0x64 } }; // D9B1C0D7-D018-42A8-A559-CB4D9E97E664
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Editing::IEmbeddedAudioTrack>{ 0x55EE5A7A,0x2D30,0x3FBA,{ 0xA1,0x90,0x4F,0x1A,0x64,0x54,0xF8,0x8F } }; // 55EE5A7A-2D30-3FBA-A190-4F1A6454F88F
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Editing::IMediaClip>{ 0x53F25366,0x5FBA,0x3EA4,{ 0x86,0x93,0x24,0x76,0x18,0x11,0x14,0x0A } }; // 53F25366-5FBA-3EA4-8693-24761811140A
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Editing::IMediaClipStatics>{ 0xFA402B68,0x928F,0x43C4,{ 0xBC,0x6E,0x78,0x3A,0x1A,0x35,0x96,0x56 } }; // FA402B68-928F-43C4-BC6E-783A1A359656
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Editing::IMediaClipStatics2>{ 0x5B1DD7B3,0x854E,0x4D9B,{ 0x87,0x7D,0x47,0x74,0xA5,0x56,0xCD,0x12 } }; // 5B1DD7B3-854E-4D9B-877D-4774A556CD12
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Editing::IMediaComposition>{ 0x2E06E605,0xDC71,0x41D6,{ 0xB8,0x37,0x2D,0x2B,0xC1,0x4A,0x29,0x47 } }; // 2E06E605-DC71-41D6-B837-2D2BC14A2947
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Editing::IMediaComposition2>{ 0xA59E5372,0x2366,0x492C,{ 0xBE,0xC8,0xE6,0xDF,0xBA,0x6D,0x02,0x81 } }; // A59E5372-2366-492C-BEC8-E6DFBA6D0281
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Editing::IMediaCompositionStatics>{ 0x87A08F04,0xE32A,0x45CE,{ 0x8F,0x66,0xA3,0x0D,0xF0,0x76,0x62,0x24 } }; // 87A08F04-E32A-45CE-8F66-A30DF0766224
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Editing::IMediaOverlay>{ 0xA902AE5D,0x7869,0x4830,{ 0x8A,0xB1,0x94,0xDC,0x01,0xC0,0x5F,0xA4 } }; // A902AE5D-7869-4830-8AB1-94DC01C05FA4
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Editing::IMediaOverlayFactory>{ 0xB584828A,0x6188,0x4F8F,{ 0xA2,0xE0,0xAA,0x55,0x2D,0x59,0x8E,0x18 } }; // B584828A-6188-4F8F-A2E0-AA552D598E18
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Editing::IMediaOverlayLayer>{ 0xA6D9BA57,0xEEDA,0x46C6,{ 0xBB,0xE5,0xE3,0x98,0xC8,0x41,0x68,0xAC } }; // A6D9BA57-EEDA-46C6-BBE5-E398C84168AC
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Editing::IMediaOverlayLayerFactory>{ 0x947CB473,0xA39E,0x4362,{ 0xAB,0xBF,0x9F,0x8B,0x50,0x70,0xA0,0x62 } }; // 947CB473-A39E-4362-ABBF-9F8B5070A062
    template <> struct default_interface<winrt::Windows::Media::Editing::BackgroundAudioTrack>{ using type = winrt::Windows::Media::Editing::IBackgroundAudioTrack; };
    template <> struct default_interface<winrt::Windows::Media::Editing::EmbeddedAudioTrack>{ using type = winrt::Windows::Media::Editing::IEmbeddedAudioTrack; };
    template <> struct default_interface<winrt::Windows::Media::Editing::MediaClip>{ using type = winrt::Windows::Media::Editing::IMediaClip; };
    template <> struct default_interface<winrt::Windows::Media::Editing::MediaComposition>{ using type = winrt::Windows::Media::Editing::IMediaComposition; };
    template <> struct default_interface<winrt::Windows::Media::Editing::MediaOverlay>{ using type = winrt::Windows::Media::Editing::IMediaOverlay; };
    template <> struct default_interface<winrt::Windows::Media::Editing::MediaOverlayLayer>{ using type = winrt::Windows::Media::Editing::IMediaOverlayLayer; };
    template <> struct abi<winrt::Windows::Media::Editing::IBackgroundAudioTrack>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TrimTimeFromStart(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_TrimTimeFromStart(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_TrimTimeFromEnd(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_TrimTimeFromEnd(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_OriginalDuration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_TrimmedDuration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_UserData(void**) noexcept = 0;
            virtual int32_t __stdcall put_Delay(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_Delay(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_Volume(double) noexcept = 0;
            virtual int32_t __stdcall get_Volume(double*) noexcept = 0;
            virtual int32_t __stdcall Clone(void**) noexcept = 0;
            virtual int32_t __stdcall GetAudioEncodingProperties(void**) noexcept = 0;
            virtual int32_t __stdcall get_AudioEffectDefinitions(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Editing::IBackgroundAudioTrackStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromEmbeddedAudioTrack(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromFileAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Editing::IEmbeddedAudioTrack>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetAudioEncodingProperties(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Editing::IMediaClip>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TrimTimeFromStart(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_TrimTimeFromStart(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_TrimTimeFromEnd(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_TrimTimeFromEnd(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_OriginalDuration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_TrimmedDuration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_UserData(void**) noexcept = 0;
            virtual int32_t __stdcall Clone(void**) noexcept = 0;
            virtual int32_t __stdcall get_StartTimeInComposition(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_EndTimeInComposition(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_EmbeddedAudioTracks(void**) noexcept = 0;
            virtual int32_t __stdcall get_SelectedEmbeddedAudioTrackIndex(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_SelectedEmbeddedAudioTrackIndex(uint32_t) noexcept = 0;
            virtual int32_t __stdcall put_Volume(double) noexcept = 0;
            virtual int32_t __stdcall get_Volume(double*) noexcept = 0;
            virtual int32_t __stdcall GetVideoEncodingProperties(void**) noexcept = 0;
            virtual int32_t __stdcall get_AudioEffectDefinitions(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoEffectDefinitions(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Editing::IMediaClipStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromColor(struct struct_Windows_UI_Color, int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromFileAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromImageFileAsync(void*, int64_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Editing::IMediaClipStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromSurface(void*, int64_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Editing::IMediaComposition>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Duration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_Clips(void**) noexcept = 0;
            virtual int32_t __stdcall get_BackgroundAudioTracks(void**) noexcept = 0;
            virtual int32_t __stdcall get_UserData(void**) noexcept = 0;
            virtual int32_t __stdcall Clone(void**) noexcept = 0;
            virtual int32_t __stdcall SaveAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetThumbnailAsync(int64_t, int32_t, int32_t, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetThumbnailsAsync(void*, int32_t, int32_t, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall RenderToFileAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RenderToFileWithTrimmingPreferenceAsync(void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall RenderToFileWithProfileAsync(void*, int32_t, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateDefaultEncodingProfile(void**) noexcept = 0;
            virtual int32_t __stdcall GenerateMediaStreamSource(void**) noexcept = 0;
            virtual int32_t __stdcall GenerateMediaStreamSourceWithProfile(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GeneratePreviewMediaStreamSource(int32_t, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Editing::IMediaComposition2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OverlayLayers(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Editing::IMediaCompositionStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall LoadAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Editing::IMediaOverlay>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Position(winrt::Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall put_Position(winrt::Windows::Foundation::Rect) noexcept = 0;
            virtual int32_t __stdcall put_Delay(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_Delay(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_Opacity(double*) noexcept = 0;
            virtual int32_t __stdcall put_Opacity(double) noexcept = 0;
            virtual int32_t __stdcall Clone(void**) noexcept = 0;
            virtual int32_t __stdcall get_Clip(void**) noexcept = 0;
            virtual int32_t __stdcall get_AudioEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AudioEnabled(bool) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Editing::IMediaOverlayFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithPositionAndOpacity(void*, winrt::Windows::Foundation::Rect, double, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Editing::IMediaOverlayLayer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Clone(void**) noexcept = 0;
            virtual int32_t __stdcall get_Overlays(void**) noexcept = 0;
            virtual int32_t __stdcall get_CustomCompositorDefinition(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Editing::IMediaOverlayLayerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateWithCompositorDefinition(void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Media_Editing_IBackgroundAudioTrack
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::TimeSpan) TrimTimeFromStart() const;
        WINRT_IMPL_AUTO(void) TrimTimeFromStart(winrt::Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::TimeSpan) TrimTimeFromEnd() const;
        WINRT_IMPL_AUTO(void) TrimTimeFromEnd(winrt::Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::TimeSpan) OriginalDuration() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::TimeSpan) TrimmedDuration() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IMap<hstring, hstring>) UserData() const;
        WINRT_IMPL_AUTO(void) Delay(winrt::Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::TimeSpan) Delay() const;
        WINRT_IMPL_AUTO(void) Volume(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) Volume() const;
        WINRT_IMPL_AUTO(winrt::Windows::Media::Editing::BackgroundAudioTrack) Clone() const;
        WINRT_IMPL_AUTO(winrt::Windows::Media::MediaProperties::AudioEncodingProperties) GetAudioEncodingProperties() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Media::Effects::IAudioEffectDefinition>) AudioEffectDefinitions() const;
    };
    template <> struct consume<winrt::Windows::Media::Editing::IBackgroundAudioTrack>
    {
        template <typename D> using type = consume_Windows_Media_Editing_IBackgroundAudioTrack<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Editing_IBackgroundAudioTrackStatics
    {
        WINRT_IMPL_AUTO(winrt::Windows::Media::Editing::BackgroundAudioTrack) CreateFromEmbeddedAudioTrack(winrt::Windows::Media::Editing::EmbeddedAudioTrack const& embeddedAudioTrack) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Media::Editing::BackgroundAudioTrack>) CreateFromFileAsync(winrt::Windows::Storage::IStorageFile const& file) const;
    };
    template <> struct consume<winrt::Windows::Media::Editing::IBackgroundAudioTrackStatics>
    {
        template <typename D> using type = consume_Windows_Media_Editing_IBackgroundAudioTrackStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Editing_IEmbeddedAudioTrack
    {
        WINRT_IMPL_AUTO(winrt::Windows::Media::MediaProperties::AudioEncodingProperties) GetAudioEncodingProperties() const;
    };
    template <> struct consume<winrt::Windows::Media::Editing::IEmbeddedAudioTrack>
    {
        template <typename D> using type = consume_Windows_Media_Editing_IEmbeddedAudioTrack<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Editing_IMediaClip
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::TimeSpan) TrimTimeFromStart() const;
        WINRT_IMPL_AUTO(void) TrimTimeFromStart(winrt::Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::TimeSpan) TrimTimeFromEnd() const;
        WINRT_IMPL_AUTO(void) TrimTimeFromEnd(winrt::Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::TimeSpan) OriginalDuration() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::TimeSpan) TrimmedDuration() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IMap<hstring, hstring>) UserData() const;
        WINRT_IMPL_AUTO(winrt::Windows::Media::Editing::MediaClip) Clone() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::TimeSpan) StartTimeInComposition() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::TimeSpan) EndTimeInComposition() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Editing::EmbeddedAudioTrack>) EmbeddedAudioTracks() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) SelectedEmbeddedAudioTrackIndex() const;
        WINRT_IMPL_AUTO(void) SelectedEmbeddedAudioTrackIndex(uint32_t value) const;
        WINRT_IMPL_AUTO(void) Volume(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) Volume() const;
        WINRT_IMPL_AUTO(winrt::Windows::Media::MediaProperties::VideoEncodingProperties) GetVideoEncodingProperties() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Media::Effects::IAudioEffectDefinition>) AudioEffectDefinitions() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Media::Effects::IVideoEffectDefinition>) VideoEffectDefinitions() const;
    };
    template <> struct consume<winrt::Windows::Media::Editing::IMediaClip>
    {
        template <typename D> using type = consume_Windows_Media_Editing_IMediaClip<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Editing_IMediaClipStatics
    {
        WINRT_IMPL_AUTO(winrt::Windows::Media::Editing::MediaClip) CreateFromColor(winrt::Windows::UI::Color const& color, winrt::Windows::Foundation::TimeSpan const& originalDuration) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Media::Editing::MediaClip>) CreateFromFileAsync(winrt::Windows::Storage::IStorageFile const& file) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Media::Editing::MediaClip>) CreateFromImageFileAsync(winrt::Windows::Storage::IStorageFile const& file, winrt::Windows::Foundation::TimeSpan const& originalDuration) const;
    };
    template <> struct consume<winrt::Windows::Media::Editing::IMediaClipStatics>
    {
        template <typename D> using type = consume_Windows_Media_Editing_IMediaClipStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Editing_IMediaClipStatics2
    {
        WINRT_IMPL_AUTO(winrt::Windows::Media::Editing::MediaClip) CreateFromSurface(winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& surface, winrt::Windows::Foundation::TimeSpan const& originalDuration) const;
    };
    template <> struct consume<winrt::Windows::Media::Editing::IMediaClipStatics2>
    {
        template <typename D> using type = consume_Windows_Media_Editing_IMediaClipStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Editing_IMediaComposition
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::TimeSpan) Duration() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Media::Editing::MediaClip>) Clips() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Media::Editing::BackgroundAudioTrack>) BackgroundAudioTracks() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IMap<hstring, hstring>) UserData() const;
        WINRT_IMPL_AUTO(winrt::Windows::Media::Editing::MediaComposition) Clone() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncAction) SaveAsync(winrt::Windows::Storage::IStorageFile const& file) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Graphics::Imaging::ImageStream>) GetThumbnailAsync(winrt::Windows::Foundation::TimeSpan const& timeFromStart, int32_t scaledWidth, int32_t scaledHeight, winrt::Windows::Media::Editing::VideoFramePrecision const& framePrecision) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Graphics::Imaging::ImageStream>>) GetThumbnailsAsync(param::async_iterable<winrt::Windows::Foundation::TimeSpan> const& timesFromStart, int32_t scaledWidth, int32_t scaledHeight, winrt::Windows::Media::Editing::VideoFramePrecision const& framePrecision) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Media::Transcoding::TranscodeFailureReason, double>) RenderToFileAsync(winrt::Windows::Storage::IStorageFile const& destination) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Media::Transcoding::TranscodeFailureReason, double>) RenderToFileAsync(winrt::Windows::Storage::IStorageFile const& destination, winrt::Windows::Media::Editing::MediaTrimmingPreference const& trimmingPreference) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Media::Transcoding::TranscodeFailureReason, double>) RenderToFileAsync(winrt::Windows::Storage::IStorageFile const& destination, winrt::Windows::Media::Editing::MediaTrimmingPreference const& trimmingPreference, winrt::Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile) const;
        WINRT_IMPL_AUTO(winrt::Windows::Media::MediaProperties::MediaEncodingProfile) CreateDefaultEncodingProfile() const;
        WINRT_IMPL_AUTO(winrt::Windows::Media::Core::MediaStreamSource) GenerateMediaStreamSource() const;
        WINRT_IMPL_AUTO(winrt::Windows::Media::Core::MediaStreamSource) GenerateMediaStreamSource(winrt::Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile) const;
        WINRT_IMPL_AUTO(winrt::Windows::Media::Core::MediaStreamSource) GeneratePreviewMediaStreamSource(int32_t scaledWidth, int32_t scaledHeight) const;
    };
    template <> struct consume<winrt::Windows::Media::Editing::IMediaComposition>
    {
        template <typename D> using type = consume_Windows_Media_Editing_IMediaComposition<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Editing_IMediaComposition2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Media::Editing::MediaOverlayLayer>) OverlayLayers() const;
    };
    template <> struct consume<winrt::Windows::Media::Editing::IMediaComposition2>
    {
        template <typename D> using type = consume_Windows_Media_Editing_IMediaComposition2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Editing_IMediaCompositionStatics
    {
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Media::Editing::MediaComposition>) LoadAsync(winrt::Windows::Storage::StorageFile const& file) const;
    };
    template <> struct consume<winrt::Windows::Media::Editing::IMediaCompositionStatics>
    {
        template <typename D> using type = consume_Windows_Media_Editing_IMediaCompositionStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Editing_IMediaOverlay
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Rect) Position() const;
        WINRT_IMPL_AUTO(void) Position(winrt::Windows::Foundation::Rect const& value) const;
        WINRT_IMPL_AUTO(void) Delay(winrt::Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::TimeSpan) Delay() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) Opacity() const;
        WINRT_IMPL_AUTO(void) Opacity(double value) const;
        WINRT_IMPL_AUTO(winrt::Windows::Media::Editing::MediaOverlay) Clone() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::Editing::MediaClip) Clip() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) AudioEnabled() const;
        WINRT_IMPL_AUTO(void) AudioEnabled(bool value) const;
    };
    template <> struct consume<winrt::Windows::Media::Editing::IMediaOverlay>
    {
        template <typename D> using type = consume_Windows_Media_Editing_IMediaOverlay<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Editing_IMediaOverlayFactory
    {
        WINRT_IMPL_AUTO(winrt::Windows::Media::Editing::MediaOverlay) Create(winrt::Windows::Media::Editing::MediaClip const& clip) const;
        WINRT_IMPL_AUTO(winrt::Windows::Media::Editing::MediaOverlay) CreateWithPositionAndOpacity(winrt::Windows::Media::Editing::MediaClip const& clip, winrt::Windows::Foundation::Rect const& position, double opacity) const;
    };
    template <> struct consume<winrt::Windows::Media::Editing::IMediaOverlayFactory>
    {
        template <typename D> using type = consume_Windows_Media_Editing_IMediaOverlayFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Editing_IMediaOverlayLayer
    {
        WINRT_IMPL_AUTO(winrt::Windows::Media::Editing::MediaOverlayLayer) Clone() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Media::Editing::MediaOverlay>) Overlays() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::Effects::IVideoCompositorDefinition) CustomCompositorDefinition() const;
    };
    template <> struct consume<winrt::Windows::Media::Editing::IMediaOverlayLayer>
    {
        template <typename D> using type = consume_Windows_Media_Editing_IMediaOverlayLayer<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Editing_IMediaOverlayLayerFactory
    {
        WINRT_IMPL_AUTO(winrt::Windows::Media::Editing::MediaOverlayLayer) CreateWithCompositorDefinition(winrt::Windows::Media::Effects::IVideoCompositorDefinition const& compositorDefinition) const;
    };
    template <> struct consume<winrt::Windows::Media::Editing::IMediaOverlayLayerFactory>
    {
        template <typename D> using type = consume_Windows_Media_Editing_IMediaOverlayLayerFactory<D>;
    };
}
#endif
