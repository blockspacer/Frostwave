#pragma once
#include <Engine/Core/Types.h>
#include <Engine/Core/Math/Vec.h>
#include <string>

struct ID3D11Texture2D;
struct ID3D11ShaderResourceView;
struct ID3D11RenderTargetView;
struct ID3D11DepthStencilView;

namespace frostwave
{
	enum class ImageFormat
	{
		DXGI_FORMAT_UNKNOWN,
		DXGI_FORMAT_R32G32B32A32_TYPELESS,
		DXGI_FORMAT_R32G32B32A32_FLOAT,
		DXGI_FORMAT_R32G32B32A32_UINT,
		DXGI_FORMAT_R32G32B32A32_SINT,
		DXGI_FORMAT_R32G32B32_TYPELESS,
		DXGI_FORMAT_R32G32B32_FLOAT,
		DXGI_FORMAT_R32G32B32_UINT,
		DXGI_FORMAT_R32G32B32_SINT,
		DXGI_FORMAT_R16G16B16A16_TYPELESS,
		DXGI_FORMAT_R16G16B16A16_FLOAT,
		DXGI_FORMAT_R16G16B16A16_UNORM,
		DXGI_FORMAT_R16G16B16A16_UINT,
		DXGI_FORMAT_R16G16B16A16_SNORM,
		DXGI_FORMAT_R16G16B16A16_SINT,
		DXGI_FORMAT_R32G32_TYPELESS,
		DXGI_FORMAT_R32G32_FLOAT,
		DXGI_FORMAT_R32G32_UINT,
		DXGI_FORMAT_R32G32_SINT,
		DXGI_FORMAT_R32G8X24_TYPELESS,
		DXGI_FORMAT_D32_FLOAT_S8X24_UINT,
		DXGI_FORMAT_R32_FLOAT_X8X24_TYPELESS,
		DXGI_FORMAT_X32_TYPELESS_G8X24_UINT,
		DXGI_FORMAT_R10G10B10A2_TYPELESS,
		DXGI_FORMAT_R10G10B10A2_UNORM,
		DXGI_FORMAT_R10G10B10A2_UINT,
		DXGI_FORMAT_R11G11B10_FLOAT,
		DXGI_FORMAT_R8G8B8A8_TYPELESS,
		DXGI_FORMAT_R8G8B8A8_UNORM,
		DXGI_FORMAT_R8G8B8A8_UNORM_SRGB,
		DXGI_FORMAT_R8G8B8A8_UINT,
		DXGI_FORMAT_R8G8B8A8_SNORM,
		DXGI_FORMAT_R8G8B8A8_SINT,
		DXGI_FORMAT_R16G16_TYPELESS,
		DXGI_FORMAT_R16G16_FLOAT,
		DXGI_FORMAT_R16G16_UNORM,
		DXGI_FORMAT_R16G16_UINT,
		DXGI_FORMAT_R16G16_SNORM,
		DXGI_FORMAT_R16G16_SINT,
		DXGI_FORMAT_R32_TYPELESS,
		DXGI_FORMAT_D32_FLOAT,
		DXGI_FORMAT_R32_FLOAT,
		DXGI_FORMAT_R32_UINT,
		DXGI_FORMAT_R32_SINT,
		DXGI_FORMAT_R24G8_TYPELESS,
		DXGI_FORMAT_D24_UNORM_S8_UINT,
		DXGI_FORMAT_R24_UNORM_X8_TYPELESS,
		DXGI_FORMAT_X24_TYPELESS_G8_UINT,
		DXGI_FORMAT_R8G8_TYPELESS,
		DXGI_FORMAT_R8G8_UNORM,
		DXGI_FORMAT_R8G8_UINT,
		DXGI_FORMAT_R8G8_SNORM,
		DXGI_FORMAT_R8G8_SINT,
		DXGI_FORMAT_R16_TYPELESS,
		DXGI_FORMAT_R16_FLOAT,
		DXGI_FORMAT_D16_UNORM,
		DXGI_FORMAT_R16_UNORM,
		DXGI_FORMAT_R16_UINT,
		DXGI_FORMAT_R16_SNORM,
		DXGI_FORMAT_R16_SINT,
		DXGI_FORMAT_R8_TYPELESS,
		DXGI_FORMAT_R8_UNORM,
		DXGI_FORMAT_R8_UINT,
		DXGI_FORMAT_R8_SNORM,
		DXGI_FORMAT_R8_SINT,
		DXGI_FORMAT_A8_UNORM,
		DXGI_FORMAT_R1_UNORM,
		DXGI_FORMAT_R9G9B9E5_SHAREDEXP,
		DXGI_FORMAT_R8G8_B8G8_UNORM,
		DXGI_FORMAT_G8R8_G8B8_UNORM,
		DXGI_FORMAT_BC1_TYPELESS,
		DXGI_FORMAT_BC1_UNORM,
		DXGI_FORMAT_BC1_UNORM_SRGB,
		DXGI_FORMAT_BC2_TYPELESS,
		DXGI_FORMAT_BC2_UNORM,
		DXGI_FORMAT_BC2_UNORM_SRGB,
		DXGI_FORMAT_BC3_TYPELESS,
		DXGI_FORMAT_BC3_UNORM,
		DXGI_FORMAT_BC3_UNORM_SRGB,
		DXGI_FORMAT_BC4_TYPELESS,
		DXGI_FORMAT_BC4_UNORM,
		DXGI_FORMAT_BC4_SNORM,
		DXGI_FORMAT_BC5_TYPELESS,
		DXGI_FORMAT_BC5_UNORM,
		DXGI_FORMAT_BC5_SNORM,
		DXGI_FORMAT_B5G6R5_UNORM,
		DXGI_FORMAT_B5G5R5A1_UNORM,
		DXGI_FORMAT_B8G8R8A8_UNORM,
		DXGI_FORMAT_B8G8R8X8_UNORM,
		DXGI_FORMAT_R10G10B10_XR_BIAS_A2_UNORM,
		DXGI_FORMAT_B8G8R8A8_TYPELESS,
		DXGI_FORMAT_B8G8R8A8_UNORM_SRGB,
		DXGI_FORMAT_B8G8R8X8_TYPELESS,
		DXGI_FORMAT_B8G8R8X8_UNORM_SRGB,
		DXGI_FORMAT_BC6H_TYPELESS,
		DXGI_FORMAT_BC6H_UF16,
		DXGI_FORMAT_BC6H_SF16,
		DXGI_FORMAT_BC7_TYPELESS,
		DXGI_FORMAT_BC7_UNORM,
		DXGI_FORMAT_BC7_UNORM_SRGB,
		DXGI_FORMAT_AYUV,
		DXGI_FORMAT_Y410,
		DXGI_FORMAT_Y416,
		DXGI_FORMAT_NV12,
		DXGI_FORMAT_P010,
		DXGI_FORMAT_P016,
		DXGI_FORMAT_420_OPAQUE,
		DXGI_FORMAT_YUY2,
		DXGI_FORMAT_Y210,
		DXGI_FORMAT_Y216,
		DXGI_FORMAT_NV11,
		DXGI_FORMAT_AI44,
		DXGI_FORMAT_IA44,
		DXGI_FORMAT_P8,
		DXGI_FORMAT_A8P8,
		DXGI_FORMAT_B4G4R4A4_UNORM,
		DXGI_FORMAT_P208,
		DXGI_FORMAT_V208,
		DXGI_FORMAT_V408,
		DXGI_FORMAT_FORCE_UINT
	};

	class Texture
	{
	public:
		Texture();
		Texture(const std::string& path);
		Texture(Vec2i size, ImageFormat format = ImageFormat::DXGI_FORMAT_R8G8B8A8_UNORM, void* data = nullptr, bool renderTarget = true);
		Texture(const Texture& other);
		Texture(Texture&& other);

		Texture& operator=(const Texture& other);
		Texture& operator=(Texture&& other);
		~Texture();

		bool Valid();

		bool Load(const std::string& path);
		void Create(Vec2i size, ImageFormat format = ImageFormat::DXGI_FORMAT_R8G8B8A8_UNORM, void* data = nullptr, bool renderTarget = true);
		void CreateFromTexture(ID3D11Texture2D* texture, bool renderTarget = true);
		void CreateDepth(Vec2i size, ImageFormat format = ImageFormat::DXGI_FORMAT_D32_FLOAT);

		void Clear(Vec4f color = Vec4f());
		void ClearDepth(f32 depth = 1.0f, u32 stencil = 0);
		void SetAsActiveTarget(Texture* depth = nullptr);
		void SetViewport();
		static void UnsetActiveTarget();
		static void Unbind(u32 slot);
		static void UnbindAll();
		void Bind(u32 slot) const;
		void Release();

		ID3D11Texture2D* GetTexture() const;
		ID3D11DepthStencilView* GetDepth() const;
		ID3D11RenderTargetView* GetRenderTarget() const;
		ID3D11ShaderResourceView* GetShaderResourceView() const;
		Vec2i GetSize() const;

	private:
		struct Data;
		Data* m_Data;
	};
}
namespace fw = frostwave;