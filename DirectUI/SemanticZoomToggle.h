#pragma once

enum SemanticZoomToggleState
{
	SZTS_NORMAL_VIEW = 0,
	SZTS_SEMANTIC_VIEW = 1,
};

namespace DirectUI
{
	struct ActiveStateChangedEvent : Event
	{
		ActiveState asPrevious;
		ActiveState asCurrent;
	};

	class SemanticZoomToggle : public Element
	{
	public:
		UILIB_API static UID Toggle();

		SemanticZoomToggle();
		SemanticZoomToggle(const SemanticZoomToggle&) = default;

		~SemanticZoomToggle() override;

		UILIB_API static HRESULT Register();

		UILIB_API static IClassInfo* GetClassInfoPtr();
		static void SetClassInfoPtr(IClassInfo* pClass);

	private:
		static IClassInfo* s_pClassInfo;

	public:
		UILIB_API IClassInfo* GetClassInfoW() override;

		UILIB_API static HRESULT Create(Element* pParent, DWORD* pdwDeferCookie, Element** ppElement);
		UILIB_API static HRESULT Initialize(Element* pParent, DWORD* pdwDeferCookie);

		UILIB_API void UpdateToggleState(SemanticZoomToggleState sztsNew, bool fEnabled);

		UILIB_API HRESULT DefaultAction() override;

	private:
		SemanticZoomToggleState _szts;
		bool _fEnabled;
	};
}
