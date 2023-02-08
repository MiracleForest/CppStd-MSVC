// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Data_Pdf_0_H
#define WINRT_Windows_Data_Pdf_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct IAsyncAction;
    template <typename TResult> struct __declspec(empty_bases) IAsyncOperation;
    struct Rect;
    struct Size;
}
WINRT_EXPORT namespace winrt::Windows::Storage
{
    struct IStorageFile;
}
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct IRandomAccessStream;
}
WINRT_EXPORT namespace winrt::Windows::UI
{
    struct Color;
}
WINRT_EXPORT namespace winrt::Windows::Data::Pdf
{
    enum class PdfPageRotation : int32_t
    {
        Normal = 0,
        Rotate90 = 1,
        Rotate180 = 2,
        Rotate270 = 3,
    };
    struct IPdfDocument;
    struct IPdfDocumentStatics;
    struct IPdfPage;
    struct IPdfPageDimensions;
    struct IPdfPageRenderOptions;
    struct PdfDocument;
    struct PdfPage;
    struct PdfPageDimensions;
    struct PdfPageRenderOptions;
}
namespace winrt::impl
{
    template <> struct category<Windows::Data::Pdf::IPdfDocument>{ using type = interface_category; };
    template <> struct category<Windows::Data::Pdf::IPdfDocumentStatics>{ using type = interface_category; };
    template <> struct category<Windows::Data::Pdf::IPdfPage>{ using type = interface_category; };
    template <> struct category<Windows::Data::Pdf::IPdfPageDimensions>{ using type = interface_category; };
    template <> struct category<Windows::Data::Pdf::IPdfPageRenderOptions>{ using type = interface_category; };
    template <> struct category<Windows::Data::Pdf::PdfDocument>{ using type = class_category; };
    template <> struct category<Windows::Data::Pdf::PdfPage>{ using type = class_category; };
    template <> struct category<Windows::Data::Pdf::PdfPageDimensions>{ using type = class_category; };
    template <> struct category<Windows::Data::Pdf::PdfPageRenderOptions>{ using type = class_category; };
    template <> struct category<Windows::Data::Pdf::PdfPageRotation>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<Windows::Data::Pdf::PdfDocument> = L"Windows.Data.Pdf.PdfDocument";
    template <> inline constexpr auto& name_v<Windows::Data::Pdf::PdfPage> = L"Windows.Data.Pdf.PdfPage";
    template <> inline constexpr auto& name_v<Windows::Data::Pdf::PdfPageDimensions> = L"Windows.Data.Pdf.PdfPageDimensions";
    template <> inline constexpr auto& name_v<Windows::Data::Pdf::PdfPageRenderOptions> = L"Windows.Data.Pdf.PdfPageRenderOptions";
    template <> inline constexpr auto& name_v<Windows::Data::Pdf::PdfPageRotation> = L"Windows.Data.Pdf.PdfPageRotation";
    template <> inline constexpr auto& name_v<Windows::Data::Pdf::IPdfDocument> = L"Windows.Data.Pdf.IPdfDocument";
    template <> inline constexpr auto& name_v<Windows::Data::Pdf::IPdfDocumentStatics> = L"Windows.Data.Pdf.IPdfDocumentStatics";
    template <> inline constexpr auto& name_v<Windows::Data::Pdf::IPdfPage> = L"Windows.Data.Pdf.IPdfPage";
    template <> inline constexpr auto& name_v<Windows::Data::Pdf::IPdfPageDimensions> = L"Windows.Data.Pdf.IPdfPageDimensions";
    template <> inline constexpr auto& name_v<Windows::Data::Pdf::IPdfPageRenderOptions> = L"Windows.Data.Pdf.IPdfPageRenderOptions";
    template <> inline constexpr guid guid_v<Windows::Data::Pdf::IPdfDocument>{ 0xAC7EBEDD,0x80FA,0x4089,{ 0x84,0x6E,0x81,0xB7,0x7F,0xF5,0xA8,0x6C } }; // AC7EBEDD-80FA-4089-846E-81B77FF5A86C
    template <> inline constexpr guid guid_v<Windows::Data::Pdf::IPdfDocumentStatics>{ 0x433A0B5F,0xC007,0x4788,{ 0x90,0xF2,0x08,0x14,0x3D,0x92,0x25,0x99 } }; // 433A0B5F-C007-4788-90F2-08143D922599
    template <> inline constexpr guid guid_v<Windows::Data::Pdf::IPdfPage>{ 0x9DB4B0C8,0x5320,0x4CFC,{ 0xAD,0x76,0x49,0x3F,0xDA,0xD0,0xE5,0x94 } }; // 9DB4B0C8-5320-4CFC-AD76-493FDAD0E594
    template <> inline constexpr guid guid_v<Windows::Data::Pdf::IPdfPageDimensions>{ 0x22170471,0x313E,0x44E8,{ 0x83,0x5D,0x63,0xA3,0xE7,0x62,0x4A,0x10 } }; // 22170471-313E-44E8-835D-63A3E7624A10
    template <> inline constexpr guid guid_v<Windows::Data::Pdf::IPdfPageRenderOptions>{ 0x3C98056F,0xB7CF,0x4C29,{ 0x9A,0x04,0x52,0xD9,0x02,0x67,0xF4,0x25 } }; // 3C98056F-B7CF-4C29-9A04-52D90267F425
    template <> struct default_interface<Windows::Data::Pdf::PdfDocument>{ using type = Windows::Data::Pdf::IPdfDocument; };
    template <> struct default_interface<Windows::Data::Pdf::PdfPage>{ using type = Windows::Data::Pdf::IPdfPage; };
    template <> struct default_interface<Windows::Data::Pdf::PdfPageDimensions>{ using type = Windows::Data::Pdf::IPdfPageDimensions; };
    template <> struct default_interface<Windows::Data::Pdf::PdfPageRenderOptions>{ using type = Windows::Data::Pdf::IPdfPageRenderOptions; };
    template <> struct abi<Windows::Data::Pdf::IPdfDocument>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetPage(uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall get_PageCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsPasswordProtected(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Data::Pdf::IPdfDocumentStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall LoadFromFileAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall LoadFromFileWithPasswordAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall LoadFromStreamAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall LoadFromStreamWithPasswordAsync(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Data::Pdf::IPdfPage>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RenderToStreamAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RenderWithOptionsToStreamAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall PreparePageAsync(void**) noexcept = 0;
            virtual int32_t __stdcall get_Index(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Size(Windows::Foundation::Size*) noexcept = 0;
            virtual int32_t __stdcall get_Dimensions(void**) noexcept = 0;
            virtual int32_t __stdcall get_Rotation(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PreferredZoom(float*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Data::Pdf::IPdfPageDimensions>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MediaBox(Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall get_CropBox(Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall get_BleedBox(Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall get_TrimBox(Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall get_ArtBox(Windows::Foundation::Rect*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Data::Pdf::IPdfPageRenderOptions>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SourceRect(Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall put_SourceRect(Windows::Foundation::Rect) noexcept = 0;
            virtual int32_t __stdcall get_DestinationWidth(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_DestinationWidth(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_DestinationHeight(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_DestinationHeight(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_BackgroundColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_BackgroundColor(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_IsIgnoringHighContrast(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsIgnoringHighContrast(bool) noexcept = 0;
            virtual int32_t __stdcall get_BitmapEncoderId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall put_BitmapEncoderId(winrt::guid) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Data_Pdf_IPdfDocument
    {
        WINRT_IMPL_AUTO(Windows::Data::Pdf::PdfPage) GetPage(uint32_t pageIndex) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) PageCount() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsPasswordProtected() const;
    };
    template <> struct consume<Windows::Data::Pdf::IPdfDocument>
    {
        template <typename D> using type = consume_Windows_Data_Pdf_IPdfDocument<D>;
    };
    template <typename D>
    struct consume_Windows_Data_Pdf_IPdfDocumentStatics
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Data::Pdf::PdfDocument>) LoadFromFileAsync(Windows::Storage::IStorageFile const& file) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Data::Pdf::PdfDocument>) LoadFromFileAsync(Windows::Storage::IStorageFile const& file, param::hstring const& password) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Data::Pdf::PdfDocument>) LoadFromStreamAsync(Windows::Storage::Streams::IRandomAccessStream const& inputStream) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Data::Pdf::PdfDocument>) LoadFromStreamAsync(Windows::Storage::Streams::IRandomAccessStream const& inputStream, param::hstring const& password) const;
    };
    template <> struct consume<Windows::Data::Pdf::IPdfDocumentStatics>
    {
        template <typename D> using type = consume_Windows_Data_Pdf_IPdfDocumentStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Data_Pdf_IPdfPage
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) RenderToStreamAsync(Windows::Storage::Streams::IRandomAccessStream const& outputStream) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) RenderToStreamAsync(Windows::Storage::Streams::IRandomAccessStream const& outputStream, Windows::Data::Pdf::PdfPageRenderOptions const& options) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) PreparePageAsync() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) Index() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Size) Size() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Data::Pdf::PdfPageDimensions) Dimensions() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Data::Pdf::PdfPageRotation) Rotation() const;
        [[nodiscard]] WINRT_IMPL_AUTO(float) PreferredZoom() const;
    };
    template <> struct consume<Windows::Data::Pdf::IPdfPage>
    {
        template <typename D> using type = consume_Windows_Data_Pdf_IPdfPage<D>;
    };
    template <typename D>
    struct consume_Windows_Data_Pdf_IPdfPageDimensions
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Rect) MediaBox() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Rect) CropBox() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Rect) BleedBox() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Rect) TrimBox() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Rect) ArtBox() const;
    };
    template <> struct consume<Windows::Data::Pdf::IPdfPageDimensions>
    {
        template <typename D> using type = consume_Windows_Data_Pdf_IPdfPageDimensions<D>;
    };
    template <typename D>
    struct consume_Windows_Data_Pdf_IPdfPageRenderOptions
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Rect) SourceRect() const;
        WINRT_IMPL_AUTO(void) SourceRect(Windows::Foundation::Rect const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) DestinationWidth() const;
        WINRT_IMPL_AUTO(void) DestinationWidth(uint32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) DestinationHeight() const;
        WINRT_IMPL_AUTO(void) DestinationHeight(uint32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) BackgroundColor() const;
        WINRT_IMPL_AUTO(void) BackgroundColor(Windows::UI::Color const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsIgnoringHighContrast() const;
        WINRT_IMPL_AUTO(void) IsIgnoringHighContrast(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::guid) BitmapEncoderId() const;
        WINRT_IMPL_AUTO(void) BitmapEncoderId(winrt::guid const& value) const;
    };
    template <> struct consume<Windows::Data::Pdf::IPdfPageRenderOptions>
    {
        template <typename D> using type = consume_Windows_Data_Pdf_IPdfPageRenderOptions<D>;
    };
}
#endif
