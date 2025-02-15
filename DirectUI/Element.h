#pragma once

#include "InvokeHelper.h"

typedef const DirectUI::PropertyInfo* (WINAPI *PropertyProcT)();

namespace DirectUI
{
	struct UpdateCache
	{
	};

	struct ElementIndexPair
	{
		Element* pElement;
		UINT uIndex;
	};

	class BehaviorStore;

	template <typename TKey, typename TValue>
	class BTreeLookup
	{
	};

	namespace Internal
	{
		struct ListenerData;
	}

	class DuiAccessible;

	typedef int (__cdecl *CompareCallback)(const void*, const void*);

	class UILIB_API Element
	{
	public:
		static HRESULT Create(UINT nCreate, Element* pParent, DWORD* pdwDeferCookie, Element** ppElement);

		HRESULT Destroy(bool fDelayed);
		HRESULT DestroyAll(bool fDelayed);

		Element();
		Element(const Element&) = default;

		virtual ~Element();

		// ReSharper disable once CppHiddenFunction
		HRESULT Initialize(UINT nCreate, Element* peInitialParent, DWORD* pdwDeferCookie);

		Value* GetRawValue(const PropertyInfo* ppi, int iIndex, UpdateCache* puc); // TODO Check when was this added

		Value* GetValue(const PropertyInfo* ppi, int iIndex, UpdateCache* puc);
		Value* GetValue(PropertyProcT pPropertyProc, int iIndex, UpdateCache* puc);

		HRESULT SetValue(const PropertyInfo* ppi, int iIndex, Value* pv);
		HRESULT SetValue(PropertyProcT pPropertyProc, int iIndex, Value* pv);

		HRESULT RemoveLocalValue(const PropertyInfo* ppi);
		HRESULT RemoveLocalValue(PropertyProcT pPropertyProc);

		void StartDefer(DWORD* pdwDeferCookie);
		void EndDefer(DWORD dwDeferCookie);
		void UpdateLayout();

		DeferCycle* GetDeferObject();
		DeferCycle* TestDeferObject();

		bool IsValidAccessor(const PropertyInfo* ppi, int iIndex, bool bSetting);
		static bool IsValidValue(const PropertyInfo* ppi, Value* pv);

		bool IsRTL();
		virtual bool IsRTLReading();
		virtual bool IsContentProtected();
		virtual const WCHAR* GetContentStringAsDisplayed(Value** ppv);
		const WCHAR* GetAccNameAsDisplayed(Value** ppv);

		virtual bool OnPropertyChanging(PropertyInfo* ppi, int iIndex, Value* pvOld, Value* pvNew);
		virtual bool OnPropertyChanging(const PropertyInfo* ppi, int iIndex, Value* pvOld, Value* pvNew);
		virtual void OnPropertyChanged(PropertyInfo* ppi, int iIndex, Value* pvOld, Value* pvNew);
		virtual void OnPropertyChanged(const PropertyInfo* ppi, int iIndex, Value* pvOld, Value* pvNew);

		virtual void OnGroupChanged(int fGroups, bool bLowPri);
		virtual void OnInput(InputEvent* pInput);
		virtual void OnKeyFocusMoved(Element* peFrom, Element* peTo);
		virtual void OnMouseFocusMoved(Element* peFrom, Element* peTo);
		virtual void OnDestroy();

		void FireEvent(Event* pEvent, bool fFull, bool fUseSpecifiedTarget);
		void BroadcastEvent(Event* pEvent);
		virtual void OnEvent(Event* pEvent);

		virtual void Paint(HDC hDC, const RECT* prcBounds, const RECT* prcInvalid, RECT* prcSkipBorder, RECT* prcSkipContent);
		void PaintContent(HDC hDC, const RECT* prcContent);
		void PaintStringContent(HDC hDC, const RECT* prcContent, Value* pvContent, int dCAlign);
		void PaintFocusRect(HDC hDC, const RECT* prcBounds, const RECT* prcContent);
		void PaintBorder(HDC hDC, Value* pvBackgnd, RECT* prcPaint, const RECT& rcBorder);
		void PaintBackground(HDC hDC, Value* pvBackgnd, const RECT& rcBounds, const RECT& rcInvalid, const RECT& rcPadding, const RECT& rcBorder);
		void PaintEdgeHighlight(HDC hDC, const RECT& rcPaint, const RECT& rcInvalid); // TODO Check when was this added

		virtual SIZE GetContentSize(int dConstW, int dConstH, Surface* psrf);

		float GetTreeAlphaLevel();

		HRESULT Add(Element* pe);
		virtual HRESULT Add(Element** ppe, UINT cCount);
		HRESULT Add(Element* pe, CompareCallback lpfnCompare); // TODO Check when was this added

		HRESULT Insert(Element* pe, UINT iInsertIdx);
		virtual HRESULT Insert(Element** ppe, UINT cCount, UINT iInsertIdx);

		HRESULT SortChildren(CompareCallback lpfnCompare);
		HRESULT ShiftChild(UINT iOldIndex, UINT iNewIndex); // TODO Check when was this added

		HRESULT Remove(Element* pe);
		virtual HRESULT Remove(Element** ppe, UINT cCount);
		HRESULT RemoveAll();

		Element* FindDescendent(ATOM atomID);
		void MapElementPoint(Element* peFrom, const POINT* pptFrom, POINT* pptTo);
		Element* GetImmediateChild(Element* peFrom);
		bool IsDescendent(Element* pe);
		virtual Element* GetAdjacent(Element* peFrom, int iNavDir, const NavReference* pnr, DWORD dwFlags);
		Element* GetKeyWithinChild();
		Element* GetMouseWithinChild();

		bool EnsureVisible();
		bool EnsureVisible(UINT uChild);
		virtual bool EnsureVisible(int x, int y, int cx, int cy);

		virtual void SetKeyFocus();

		HRESULT AddListener(IElementListener* pel);
		void RemoveListener(IElementListener* pel);

		virtual HRESULT AddBehavior(IDuiBehavior* pBehavior);
		virtual HRESULT RemoveBehavior(IDuiBehavior* pBehavior);

		void InvokeAnimation(int dAni, UINT nTypeMask);
		void InvokeAnimation(UINT nTypes, UINT nInterpol, float flDuration, float flDelay, bool fPushToChildren);
		void StopAnimation(UINT nTypes);

		virtual UINT MessageCallback(GMSG* pgMsg);

		SIZE _UpdateDesiredSize(int cxConstraint, int cyConstraint, Surface* psrf);
		void _UpdateLayoutPosition(int dX, int dY);
		void _UpdateLayoutSize(int dWidth, int dHeight);
		void _StartOptimizedLayoutQ();
		void _EndOptimizedLayoutQ();
		UINT _GetNeedsLayout();
		static bool _SetGroupChanges(Element* pe, int fGroups, DeferCycle* pdc);
		static void _TransferGroupFlags(Element* pe, int fGroups);
		int _SetNeedsLayout(UINT fNeedsLayout);
		static int _MarkElementForLayout(Element* pe, UINT fNeedsLayout);
		static int _MarkElementForDS(Element* pe);
		void _ClearNeedsLayout();
		static void _AddDependency(Element* pe, const PropertyInfo* ppi, int iIndex, DepRecs* pdr, DeferCycle* pdc, HRESULT* phr);
		static HRESULT _DisplayNodeCallback(HGADGET hgadCur, void* pvCur, EventMsg* pGMsg);

		virtual STDMETHODIMP QueryInterface(REFIID riid, void** ppvObject);
		STDMETHODIMP_(ULONG) AddRef(); // @Note: Not virtual
		STDMETHODIMP_(ULONG) Release(); // @Note: Not virtual

		int _GetChangesUpdatePass();
		void Detach(DeferCycle* pdc);
		bool UiaEvents();
		void EnableUiaEvents(bool fEnable);
		bool GetClickablePoint(POINT* ptClick);
		virtual void GetImmersiveFocusRectOffsets(RECT* prc);

		template <typename T>
		void PostEvent(T* pEvent) { _PostEvent(pEvent, 0x83F8); }

	private:
		Element* FindDescendentWorker(ATOM atomID);
		void _GetBuriedSheetDependencies(const PropertyInfo* ppi, Element* peNewParent, DepRecs* pdr, DeferCycle* pdc, HRESULT* phr);
		HRESULT _GetDependencies(const PropertyInfo* ppi, int iIndex, DepRecs* pdr, int iPCSrcRoot, Value* pvNewRoot, DeferCycle* pdc);
		static void _VoidPCNotifyTree(int iPCPos, DeferCycle* pdc);
		int _CachedValueIsEqual(const PropertyInfo* ppi, Element* peParent);
		Value* _GetLocalValueFromVM(const PropertyInfo* ppi);
		Value* _GetLocalValue(const PropertyInfo* ppi);
		Value* _GetSpecifiedValueIgnoreCache(const PropertyInfo* ppi);
		Value* _GetSpecifiedValue(const PropertyInfo* ppi, UpdateCache* puc);
		Value* _GetComputedValue(const PropertyInfo* ppi, UpdateCache* puc);
		void _UpdatePropertyInCache(const PropertyInfo* ppi);
		void _InheritProperties();
		void _FlushDS(DeferCycle*);
		HRESULT _PreSourceChange(PropertyProcT proc, int iIndex, Value* pvOld, Value* pvNew);
		HRESULT _PreSourceChange(const PropertyInfo* ppi, int iIndex, Value* pvOld, Value* pvNew);
		HRESULT _PostSourceChange();
		void _BroadcastEventWorker(Event* pEvent);
		void _PostEvent(Event* pEvent, int nMsg); // TODO Check when was this added
		static bool CALLBACK s_HandleDUIEventMessage(Element* pe, EventMsg* pEventMsg); // TODO Check when was this added
		UINT GetCommonDrawTextFlags(int dCAlign);
		WCHAR* RemoveShortcutFromName(const WCHAR* pszName);
		void _SyncVisible();
		void _SyncBackground();
		void _SyncRedrawStyle();
		bool IsPointValid(double x, double y);
		bool TryLinePattern(POINT* pt, const RECT& rcParent);
		bool TryPattern(double x, double y, POINT* pt, const RECT& rcParent);
		bool TrySparsePattern(POINT* pt, const RECT& rcParent);
		HRESULT _SetRelPixValue(const PropertyInfo* ppi, int nValue); // TODO Check when was this added
		HRESULT _SetRelPixRect(const PropertyInfo* ppi, int l, int t, int r, int b); // TODO Check when was this added
		HRESULT GetTheme(const WCHAR* pszClass, HTHEME* phTheme); // TODO Check when was this added

	protected:
		static void _FlushLayout(Element* pe, DeferCycle* pdc);
		static void _InvalidateCachedDSConstraints(Element* pe);
		virtual void _SelfLayoutDoLayout(int cx, int cy);
		virtual SIZE _SelfLayoutUpdateDesiredSize(int dConstW, int dConstH, Surface* psrf);
		HRESULT _SetValue(const PropertyInfo* ppi, int iIndex, Value* pv, bool fInternalCall);
		HRESULT _SetValue(PropertyProcT pPropertyProc, int iIndex, Value* pv, bool fInternalCall);
		HRESULT _RemoveLocalValue(const PropertyInfo* ppi, bool fInternalCall);
		HRESULT _RemoveLocalValue(PropertyProcT pPropertyProc, bool fInternalCall);
		virtual void OnHosted(Element* peNewRoot);
		virtual void OnUnHosted(Element* peOldRoot);
		void MarkHosted();
		void MarkSelfLayout();
		virtual void UpdateTooltip(Element* pe);
		virtual void ActivateTooltip(Element* pe, DWORD dwFlags);
		virtual void RemoveTooltip(Element* pe);
		void _OnFontPropChanged(Value* pvFont);

	public:
		void MarkNeedsDSUpdate();
		bool NeedsDSUpdate();
		void DoubleBuffered(bool fEnabled);
		int IsRoot();
		Element* GetRoot();
		Element* GetTopLevel();
		HRESULT GetRootRelativeBounds(RECT* prc);

		static RTL_CRITICAL_SECTION* GetFactoryLock();

		static UID KeyboardNavigate();
		static UID AnimationChange();
		static UID DCompDeviceRebuilt(); // TODO Check when was this added

		static const PropertyInfo* ParentProp();
		static const PropertyInfo* ChildrenProp();
		static const PropertyInfo* VisibleProp();
		static const PropertyInfo* WidthProp();
		static const PropertyInfo* HeightProp();
		static const PropertyInfo* LocationProp();
		static const PropertyInfo* ExtentProp();
		static const PropertyInfo* XProp();
		static const PropertyInfo* YProp();
		static const PropertyInfo* PosInLayoutProp();
		static const PropertyInfo* SizeInLayoutProp();
		static const PropertyInfo* DesiredSizeProp();
		static const PropertyInfo* LastDSConstProp();
		static const PropertyInfo* LayoutProp();
		static const PropertyInfo* LayoutPosProp();
		static const PropertyInfo* BorderThicknessProp();
		static const PropertyInfo* BorderStyleProp();
		static const PropertyInfo* BorderColorProp();
		static const PropertyInfo* PaddingProp();
		static const PropertyInfo* MarginProp();
		static const PropertyInfo* ForegroundProp();
		static const PropertyInfo* BackgroundProp();
		static const PropertyInfo* ContentProp();
		static const PropertyInfo* FontFaceProp();
		static const PropertyInfo* FontSizeProp();
		static const PropertyInfo* FontWeightProp();
		static const PropertyInfo* FontStyleProp();
		static const PropertyInfo* FontQualityProp();
		static const PropertyInfo* ActiveProp();
		static const PropertyInfo* ContentAlignProp();
		static const PropertyInfo* KeyFocusedProp();
		static const PropertyInfo* KeyWithinProp();
		static const PropertyInfo* MouseFocusedProp();
		static const PropertyInfo* MouseWithinProp();
		static const PropertyInfo* ClassProp();
		static const PropertyInfo* IDProp();
		static const PropertyInfo* SheetProp();
		static const PropertyInfo* SelectedProp();
		static const PropertyInfo* AlphaProp();
		static const PropertyInfo* AnimationProp();
		static const PropertyInfo* CursorProp();
		static const PropertyInfo* DirectionProp();
		static const PropertyInfo* AccessibleProp();
		static const PropertyInfo* AccRoleProp();
		static const PropertyInfo* AccStateProp();
		static const PropertyInfo* AccNameProp();
		static const PropertyInfo* AccDescProp();
		static const PropertyInfo* AccValueProp();
		static const PropertyInfo* AccDefActionProp();
		static const PropertyInfo* AccHelpProp();
		static const PropertyInfo* AccItemTypeProp();
		static const PropertyInfo* AccItemStatusProp();
		static const PropertyInfo* ShortcutProp();
		static const PropertyInfo* EnabledProp();
		static const PropertyInfo* MinSizeProp();
		static const PropertyInfo* OverhangProp();
		static const PropertyInfo* TooltipProp();
		static const PropertyInfo* TooltipMaxWidthProp();
		static const PropertyInfo* FontProp();
		static const PropertyInfo* WindowActiveProp();
		static const PropertyInfo* AbsorbsShortcutProp();
		static const PropertyInfo* CompositedTextProp();
		static const PropertyInfo* TextGlowSizeProp();
		static const PropertyInfo* HighDPIProp();
		static const PropertyInfo* DPIProp();
		static const PropertyInfo* CustomProp();
		static const PropertyInfo* ShadowIntensityProp();
		static const PropertyInfo* EdgeHighlightThicknessProp(); // TODO Check when was this added
		static const PropertyInfo* EdgeHighlightColorProp(); // TODO Check when was this added
		static const PropertyInfo* ScaleFactorProp(); // TODO Check when was this added
		static const PropertyInfo* UsesDesktopPerMonitorScalingProp(); // TODO Check when was this added

	protected:
		HGADGET _hgDisplayNode;
		BehaviorStore* _pBehaviorStore;

	private:
		int _iIndex;
		BTreeLookup<const PropertyInfo*, Value*>* _pvmLocal;
		int _iGCSlot;
		int _iGCLPSlot;
		int _iPCTail;
		DeferCycle* _pDeferCycle;
		Internal::ListenerData* _pld;
		Element* _peInitialParent;
		Element* _peLocParent;
		POINT _ptLocPosInLayt;
		SIZE _sizeLocSizeInLayt;
		SIZE _sizeLocLastDSConst;
		SIZE _sizeLocDesiredSize;
		int _dSpecLayoutPos;
		Value* _pvSpecSheet;
		int _dSpecAlpha;
		int _dPVLAnimationState;
		ATOM _atomSpecID;

		struct _BitMap
		{
			bool bLocKeyWithin : 1;
			bool bLocMouseWithin : 1;
			bool bCmpVisible : 1;
			bool bSpecVisible : 1;
			bool bSpecSelected : 1;
			bool bSpecKeyFocused : 1;
			bool bSpecMouseFocused : 1;
			bool bSpecAccessible : 1;
			bool bSpecEnabled : 1;
			bool bHasChildren : 1;
			bool bHasLayout : 1;
			bool bHasBorder : 1;
			bool bHasPadding : 1;
			bool bHasMargin : 1;
			bool bHasContent : 1;
			bool bDefaultCAlign : 1;
			bool bWordWrap : 1;
			bool bHasAnimation : 1;
			bool bDefaultCursor : 1;
			bool bDefaultBorderColor : 1;
			bool bDefaultForeground : 1;
			bool bDefaultFontWeight : 1;
			bool bDefaultFontStyle : 1;
			bool bDefaultFontQuality : 1;
			bool bSelfLayout : 1;
			bool bNeedsDSUpdate : 1;
			bool bDestroyed : 1;
			bool bHosted : 1;
			bool bHasTooltip : 1;
			bool bCompositedText : 1;
			bool bUiaEvents : 1;
			bool bPreserveAlphaChannel : 1;
			UINT fNeedsLayout : 2;
			UINT fSpecActive : 4;
			UINT nSpecDirection : 1;
			UINT nUseDefaultFontSize : 1;
			UINT bHasEdgeHighlight : 1;
			UINT nGetsLayoutCompleteGC : 1;
			UINT fFontSizeInRP : 1;
			UINT nScaleFactor : 10;
			UINT bUsesDesktopPerMonitorScaling : 1;
		};

		_BitMap _fBit;
		int _dSpecFontSize;
		Value* _pvSpecFontFace;
		Value* _pvSpecBackground;

	public:
		DuiAccessible* _pDuiAccessible;

		HGADGET GetDisplayNode();
		int GetIndex();
		bool IsDestroyed();
		bool IsHosted();
		bool IsSelfLayout();
		bool IsBehaviorLayout() const; // TODO Check when was this added
		bool HasChildren();
		bool HasLayout();
		bool HasBorder();
		bool HasPadding();
		bool HasMargin();
		bool HasContent();
		bool IsDefaultCAlign();
		bool IsWordWrap();
		bool HasAnimation();
		bool IsDefaultCursor();
		bool HasEdgeHighlight(); // TODO Check when was this added
		bool HasPVLAnimationState(UINT dState); // TODO Check when was this added
		void GetRenderBorderThickness(RECT* prc); // TODO Check when was this added
		void GetRenderPadding(RECT* prc); // TODO Check when was this added
		void GetRenderMargin(RECT* prc); // TODO Check when was this added
		void GetRenderEdgeHighlightThickness(RECT* prc); // TODO Check when was this added
		void GetRenderMinSize(SIZE* prc); // TODO Check when was this added
		Element* GetParent();
		bool GetVisible();
		int GetWidth();
		int GetHeight();
		DynamicArray<Element*>* GetChildren(Value** ppv);
		int GetX();
		int GetY();
		Layout* GetLayout(Value** ppv);
		int GetLayoutPos();
		const RECT* GetBorderThickness(Value** ppv);
		int GetBorderStyle();
		int GetBorderStdColor();
		const Fill* GetBorderColor(Value** ppv);
		const RECT* GetPadding(Value** ppv);
		const RECT* GetMargin(Value** ppv);
		const POINT* GetLocation(Value** ppv);
		const SIZE* GetExtent(Value** ppv);
		const SIZE* GetDesiredSize();
		int GetForegroundStdColor();
		const Fill* GetForegroundColor(Value** ppv);
		int GetBackgroundStdColor();
		const Fill* GetBackgroundColor(Value** ppv);
		const RECT* GetEdgeHighlightThickness(Value** ppv); // TODO Check when was this added
		const Fill* GetEdgeHighlightColor(Value** ppv); // TODO Check when was this added
		float GetElementScaleFactor(); // TODO Check when was this added
		const WCHAR* GetContentString(Value** ppv);
		HRESULT GetEncodedContentString(WCHAR*, size_t cchString);
		size_t GetEncodedContentStringLength(); // TODO Check when was this added
		const WCHAR* GetFontFace(Value** ppv);
		int GetFontSize();
		int GetFontWeight();
		int GetFontStyle();
		int GetFontQuality();
		bool IsCompositedText();
		int GetTextGlowSize();
		int GetActive();
		int GetContentAlign();
		virtual bool GetKeyFocused();
		bool GetKeyWithin();
		bool GetMouseFocused();
		bool GetMouseWithin();
		const WCHAR* GetClass(Value** ppv);
		ATOM GetID();
		StyleSheet* GetSheet();
		bool GetSelected();
		int GetAlpha();
		bool GetPreserveAlphaChannel() const; // TODO Check when was this added
		void SetPreserveAlphaChannel(bool fPreserveAlpha); // TODO Check when was this added
		int GetAnimation();
		int GetPVLAnimationState(); // TODO Check when was this added
		int GetDirection();
		bool GetAccessible();
		int GetAccRole();
		int GetAccState();
		const WCHAR* GetAccName(Value** ppv);
		const WCHAR* GetAccDesc(Value** ppv);
		const WCHAR* GetAccValue(Value** ppv);
		const WCHAR* GetAccDefAction(Value** ppv);
		const WCHAR* GetAccHelp(Value** ppv);
		const WCHAR* GetAccItemType(Value** ppv);
		const WCHAR* GetAccItemStatus(Value** ppv);
		int GetShortcut();
		bool GetEnabled();
		const SIZE* GetMinSize(Value** ppv);
		bool GetOverhang();
		bool GetTooltip();
		int GetTooltipMaxWidth();
		const WCHAR* GetFont(Value** ppv);
		int GetColorize();
		bool GetWindowActive();
		bool GetAbsorbsShortcut();
		bool GetHighDPI();
		int GetDPI();
		int GetShadowIntensity();

		void SetLayoutCompletionNotify(bool v); // TODO Check when was this added
		void SetPVLAnimationState(int v); // TODO Check when was this added
		HRESULT SetVisible(bool v);
		HRESULT SetWidth(int v);
		HRESULT SetHeight(int v);
		HRESULT SetRelPixWidth(int v); // TODO Check when was this added
		HRESULT SetRelPixHeight(int v); // TODO Check when was this added
		HRESULT SetX(int v);
		HRESULT SetY(int v);
		HRESULT SetLayout(Layout* v);
		HRESULT SetLayoutPos(int v);
		HRESULT SetBorderThickness(int l, int t , int r, int b);
		HRESULT SetBorderStyle(int v);
		HRESULT SetBorderStdColor(int v);
		HRESULT SetBorderColor(COLORREF cr);
		HRESULT SetBorderGradientColor(COLORREF cr0, COLORREF cr1, BYTE dType);
		HRESULT SetPadding(int l, int t, int r, int b);
		HRESULT SetRelPixPadding(int l, int t, int r, int b); // TODO Check when was this added
		HRESULT SetMargin(int l, int t, int r, int b);
		HRESULT SetRelPixMargin(int l, int t, int r, int b); // TODO Check when was this added
		HRESULT SetForegroundStdColor(int v);
		HRESULT SetForegroundColor(COLORREF cr);
		HRESULT SetForegroundColor(COLORREF cr0, COLORREF cr1, BYTE dType);
		HRESULT SetForegroundColor(COLORREF cr0, COLORREF cr1, COLORREF cr2, BYTE dType);
		HRESULT SetBackgroundStdColor(int v);
		HRESULT SetBackgroundColor(const Fill& fill);
		HRESULT SetBackgroundColor(const WCHAR* pszClassName, int iPartId, int iStateId);
		HRESULT SetBackgroundColor(COLORREF cr);
		HRESULT SetBackgroundColor(COLORREF cr0, COLORREF cr1, BYTE dType);
		HRESULT SetBackgroundColor(COLORREF cr0, COLORREF cr1, COLORREF cr2, BYTE dType);
		HRESULT SetContentString(const WCHAR* v);
		HRESULT SetEncodedContentString(const WCHAR* v);
		HRESULT SetContentGraphic(const WCHAR* v, BYTE dBlendMode, UINT dBlendValue);
		HRESULT SetContentGraphic(const WCHAR* v, WORD cxDesired, WORD cyDesired);
		HRESULT SetFontFace(const WCHAR* v);
		HRESULT SetFontSize(int v);
		HRESULT SetFontWeight(int v);
		HRESULT SetFontStyle(int v);
		HRESULT SetFontQuality(int v);
		HRESULT SetActive(int v);
		HRESULT SetCompositedText(bool v);
		HRESULT SetTextGlowSize(int v);
		HRESULT SetContentAlign(int v);
		HRESULT SetClass(const WCHAR* v);
		HRESULT SetID(const WCHAR* v);
		HRESULT SetSheet(StyleSheet* v);
		HRESULT SetSelected(bool v);
		HRESULT SetAlpha(int v);
		HRESULT SetAnimation(int v);
		HRESULT SetStdCursor(int v);
		HRESULT SetCursor(const WCHAR* v);
		HRESULT SetCursorHandle(HCURSOR hCursor);
		HRESULT SetDirection(int v);
		HRESULT SetAccessible(bool v);
		HRESULT SetAccRole(int v);
		HRESULT SetAccState(int v);
		HRESULT SetAccName(const WCHAR* v);
		HRESULT SetAccDesc(const WCHAR* v);
		HRESULT SetAccValue(const WCHAR* v);
		HRESULT SetAccDefAction(const WCHAR* v);
		HRESULT SetAccHelp(const WCHAR* v);
		HRESULT SetAccItemType(const WCHAR* v);
		HRESULT SetAccItemStatus(const WCHAR* v);
		HRESULT SetShortcut(int v);
		HRESULT SetEnabled(bool v);
		HRESULT SetMinSize(int cx, int cy);
		HRESULT SetOverhang(bool v);
		HRESULT SetTooltip(bool v);
		HRESULT SetTooltipMaxWidth(int v);
		HRESULT SetFont(const WCHAR* v);
		HRESULT SetWindowActive(bool v);
		HRESULT SetAbsorbsShortcut(bool v);
		HRESULT SetEdgeHighlightThickness(int l, int t, int r, int b); // TODO Check when was this added
		HRESULT SetEdgeHighlightColor(COLORREF cr); // TODO Check when was this added
		// ReSharper disable once CppHiddenFunction
		WCHAR GetShortcutChar();
		HRESULT SetShadowIntensity(int v);

		static IClassInfo* GetClassInfoPtr();
		static void SetClassInfoPtr(IClassInfo* pClass);

	private:
		static IClassInfo* s_pClassInfo;

	public:
		virtual IClassInfo* GetClassInfoW();

		static HRESULT Register();
		static HRESULT UnRegister(IClassInfo** ppClassInfo);
		virtual HRESULT GetAccessibleImpl(IAccessible** ppAccessible);
		HRESULT QueueDefaultAction();
		virtual HRESULT DefaultAction();
		virtual HRESULT GetUIAElementProvider(REFIID riid, void** ppv);
		virtual HRESULT GetElementProviderImpl(InvokeHelper* pih, ElementProvider** ppprv);
		virtual void HandleUiaDestroyListener();
		virtual void HandleUiaPropertyListener(const PropertyInfo* ppi, int iIndex, Value* pvOld, Value* pvNew);
		virtual void HandleUiaPropertyChangingListener(const PropertyInfo* ppi);
		virtual void HandleUiaEventListener(Event* pEvent);
		virtual Element* GetUiaFocusDelegate();

		void SetOverrideScaleFactor(float flscale); // TODO Check when was this added

	protected:
		void _Fill(HDC hDC, DWORD crFill, int left, int top, int right, int bottom, bool fForceOpaque); // TODO Check when was this added

	private:
		class Impl
		{
		};

		Impl* _pImpl;
		HWND _rootWindowForTheming;

		friend class __Element_Check;
	};

	class UILIB_API ElementProxy : public IProxy
	{
	public:
		ElementProxy(ElementProxy const &);
		ElementProxy();
		ElementProxy & operator=(ElementProxy const &);

		static ElementProxy * __stdcall Create(Element *);
		//1
		virtual long DoMethod(int, char *);
	protected:
		long GetAutomationId(VARIANT *);
		long GetBoundingRect(UiaRect *);
		long GetContent(VARIANT *, IAccessible *);
		void GetControlType(VARIANT *, IAccessible *);
		long GetFragmentRoot(IRawElementProviderFragmentRoot * *);
		long GetHwnd(HWND *);
		long GetLabel(VARIANT *);
		long GetProperty(VARIANT *, int);
		long GetProviderOptions(ProviderOptions *);
		long GetRuntimeId(SAFEARRAY * *);
		long IsPatternSupported(Schema::Pattern, bool *);
		long Navigate(NavigateDirection, IRawElementProviderFragment**);
		long SetString(VARIANT *, UCString (Element::*)(Value * *));
		int _UsesUIAProxies();

		//2
		virtual void Init(Element *);

	};

	//此类的声明很可能错误
	class UILIB_API ElementProvider
		: public RefcountBase
		, public IRawElementProviderSimple
		, public IRawElementProviderFragment
		, public IRawElementProviderAdviseEvents
	{
	public:
		ElementProvider();
		ElementProvider(const ElementProvider&) = delete;
		virtual ~ElementProvider();

		static long WINAPI Create(Element*, InvokeHelper*, ElementProvider**out);

		long DoInvokeArgs(int, ProviderProxyCall, char*);
		const Element* GetElementKey();
		void TossElement();
		void TossPatternProvider(Schema::Pattern);


		//IUnknown
		virtual ULONG WINAPI AddRef();
		virtual ULONG WINAPI Release();
		virtual long WINAPI QueryInterface(const GUID&, void**);

		//IRawElementProviderSimple
		virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ProviderOptions(
			/* [retval][out] */ __RPC__out ProviderOptions *pRetVal);

		virtual HRESULT STDMETHODCALLTYPE GetPatternProvider(
			/* [in] */ PATTERNID patternId,
			/* [retval][out] */ __RPC__deref_out_opt IUnknown **pRetVal);

		virtual HRESULT STDMETHODCALLTYPE GetPropertyValue(
			/* [in] */ PROPERTYID propertyId,
			/* [retval][out] */ __RPC__out VARIANT *pRetVal);

		virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_HostRawElementProvider(
			/* [retval][out] */ __RPC__deref_out_opt IRawElementProviderSimple **pRetVal);

		//IRawElementProviderFragment
		virtual HRESULT STDMETHODCALLTYPE Navigate(
			/* [in] */ NavigateDirection direction,
			           /* [retval][out] */ __RPC__deref_out_opt IRawElementProviderFragment **pRetVal);

		virtual HRESULT STDMETHODCALLTYPE GetRuntimeId(
			/* [retval][out] */ __RPC__deref_out_opt SAFEARRAY * *pRetVal);

		virtual HRESULT STDMETHODCALLTYPE get_BoundingRectangle(
			/* [retval][out] */ __RPC__out UiaRect *pRetVal);

		virtual HRESULT STDMETHODCALLTYPE GetEmbeddedFragmentRoots(
			/* [retval][out] */ __RPC__deref_out_opt SAFEARRAY * *pRetVal);

		virtual HRESULT STDMETHODCALLTYPE SetFocus();

		virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_FragmentRoot(
			/* [retval][out] */ __RPC__deref_out_opt IRawElementProviderFragmentRoot **pRetVal);

		//IRawElementProviderAdviseEvents
		virtual HRESULT STDMETHODCALLTYPE AdviseEventAdded(
			/* [in] */ EVENTID eventId,
			/* [in] */ __RPC__in SAFEARRAY * propertyIDs);

		virtual HRESULT STDMETHODCALLTYPE AdviseEventRemoved(
			/* [in] */ EVENTID eventId,
			/* [in] */ __RPC__in SAFEARRAY * propertyIDs);

		//1 此函数似乎声明不正确
		virtual ProviderProxyCall GetProxyCreator();
		//2
		virtual volatile const Element* GetElement();

	protected:
		//3
		virtual long Init(Element*, InvokeHelper*);
		long DoInvoke(int, ...);
	};
}
