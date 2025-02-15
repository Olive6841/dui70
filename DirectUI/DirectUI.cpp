// ReSharper disable CppMemberFunctionMayBeStatic
// ReSharper disable CppParameterNeverUsed
// ReSharper disable CppPossiblyUninitializedMember
#include "DirectUI.h"

#define STUB_ZERO { return {}; }
#define STUB_VOID {}

void WINAPI DumpDuiTree(DirectUI::Element* pe, BOOL fShowProperties) {}
void WINAPI DumpDuiProperties(DirectUI::Element* pe) {}


namespace DirectUI
{

DWORD g_dwElSlot;

extern "C"
{

HRESULT WINAPI InitProcessPriv(DWORD dwExpectedVersion, HMODULE hModule, bool fRegisterControls, bool fEnableUIAutomationProvider, bool fInitCommctl) STUB_ZERO;
HRESULT WINAPI UnInitProcessPriv(HMODULE hModule) STUB_ZERO;
HRESULT WINAPI InitThread(UINT nThreadMode) STUB_ZERO;
void WINAPI UnInitThread() STUB_VOID;
HRESULT WINAPI CreateDUIWrapper(Element* pe, IUnknown** ppunk) STUB_ZERO;
HRESULT WINAPI CreateDUIWrapperEx(Element* pe, IXProviderCP* pprovCP, IUnknown** ppunk) STUB_ZERO;
HRESULT WINAPI CreateDUIWrapperFromResource(HINSTANCE hRes, const WCHAR* pszResource, const WCHAR* pszResID, const WCHAR* pszFile, IUnknown** ppunk) STUB_ZERO;
HRESULT WINAPI GetScreenDPI() STUB_ZERO;
HRESULT WINAPI RegisterAllControls() STUB_ZERO;
HRESULT WINAPI RegisterBaseControls() STUB_ZERO;
HRESULT WINAPI RegisterBrowserControls() STUB_ZERO;
HRESULT WINAPI RegisterCommonControls() STUB_ZERO;
HRESULT WINAPI RegisterExtendedControls() STUB_ZERO;
HRESULT WINAPI RegisterMacroControls() STUB_ZERO;
HRESULT WINAPI RegisterMiscControls() STUB_ZERO;
HRESULT WINAPI RegisterStandardControls() STUB_ZERO;
HRESULT WINAPI RegisterXControls() STUB_ZERO;
BOOL WINAPI StartMessagePump() STUB_ZERO;
void WINAPI StopMessagePump() STUB_VOID;
ATOM WINAPI StrToID(const WCHAR* psz) STUB_ZERO;
CHAR* WINAPI UnicodeToMultiByte(const WCHAR* pszUnicode, int cChars, int* pMultiBytes) STUB_ZERO;
WCHAR* WINAPI MultiByteToUnicode(WCHAR* pszMulti, int dBytes, int* pUniChars) STUB_ZERO;
BOOL WINAPI IsAnimationsEnabled() STUB_ZERO;
bool WINAPI IsPalette(HWND hwnd) STUB_ZERO;
BOOL WINAPI IsUIAutomationProviderEnabled() STUB_ZERO;
int WINAPI DUIDrawShadowText(HDC hdc, const WCHAR* pszText, int cch, RECT* prc, DWORD dwFlags, COLORREF crText) STUB_ZERO;
void WINAPI BlurBitmap(UINT* plBitmapBits, int cx, int cy, int cxRow, COLORREF crFill) STUB_VOID;
void WINAPI BlurBitmapNormal(UINT* prgb, int cx, int cy, int cxRow, COLORREF crFill) STUB_VOID;
HBRUSH WINAPI BrushFromEnumI(int c) STUB_ZERO;
COLORREF WINAPI ARGBColorFromEnumI(int c) STUB_ZERO;
COLORREF WINAPI ColorFromEnumI(int c) STUB_ZERO;
DWORD* WINAPI DisableAnimations() STUB_ZERO;
int WINAPI DrawShadowTextEx(HDC hdc, const WCHAR* pszText, int cch, RECT* prc, DWORD dwFlags, COLORREF crText, COLORREF crShadow, int ixOffset, int iyOffset, BYTE bInitialAlpha, BOOL fAPIInit) STUB_ZERO;
Element* WINAPI ElementFromGadget(HGADGET hGadget) STUB_ZERO;
DWORD* WINAPI EnableAnimations() STUB_ZERO;
void WINAPI FlushThemeHandles(WPARAM wParam) STUB_VOID;
void WINAPI ForceDebugBreak() STUB_VOID;
IDataEntry* WINAPI GetElementDataEntry(Element* pe) STUB_ZERO;
Macro* WINAPI GetElementMacro(Element* pe) STUB_ZERO;
void* WINAPI GetFontCache() STUB_ZERO;
HRESULT WINAPI GetThemeHandle(const WCHAR* pszClass, HTHEME* phTheme) STUB_ZERO;
HRESULT WINAPI HrSysAllocString(const OLECHAR* psz, BSTR* pbstrOut) STUB_ZERO;
HRESULT WINAPI HStrDup(const WCHAR* pszSrc, WCHAR** ppszOut) STUB_ZERO;
BOOL WINAPI InitPreprocessor() STUB_ZERO;
HRESULT WINAPI SetDefAction(Element* pe, DWORD oleacc) STUB_ZERO;
BOOL WINAPI UiaHideOnGetObject(HWND hwnd, WPARAM wParam, LPARAM lParam) STUB_ZERO;
HANDLE WINAPI UiaOnDestroySink(HWND hwnd) STUB_ZERO;
HRESULT WINAPI UiaOnGetObject(Element* pe, WPARAM wParam, LPARAM lParam, bool* pfHandled, int* plResult) STUB_ZERO;
BOOL WINAPI UiaOnToolTip(Element* pe, DWORD dwFlags) STUB_ZERO;
void WINAPI NotifyAccessibilityEvent(DWORD dwEvent, Element* pe) STUB_VOID;
WCHAR* WINAPI PreprocessBuffer(const WCHAR* pszBuf, UINT cchBuf, bool fInsertMainResId) STUB_ZERO;
HBITMAP WINAPI ProcessAlphaBitmapI(HBITMAP hbmSource) STUB_ZERO;
void WINAPI PurgeThemeHandles() STUB_VOID;
HRESULT WINAPI RegisterPVLBehaviorFactory() STUB_ZERO;
void WINAPI DUIStopPVLAnimation(Element* peAnimating, UINT nDCProperty, BOOL fFinal) STUB_VOID;

} // extern "C"

DuiAccessible::DuiAccessible()
{
}

DuiAccessible::~DuiAccessible()
{
}

void DuiAccessible::Initialize(Element* pe)
{
}

HRESULT DuiAccessible::Create(Element* pe, DuiAccessible**)
{
	return E_NOTIMPL;
}

Element* DuiAccessible::GetAccessibleParent(Element* pe)
{
	return nullptr;
}

HRESULT DuiAccessible::AccNavigate(Element* pe, long, Element** ppe)
{
	return E_NOTIMPL;
}

HRESULT DuiAccessible::Disconnect()
{
	return E_NOTIMPL;
}

HRESULT DuiAccessible::QueryInterface(REFIID riid, void** ppvObject)
{
	return E_NOTIMPL;
}

ULONG DuiAccessible::AddRef()
{
	return 0;
}

ULONG DuiAccessible::Release()
{
	return 0;
}

HRESULT DuiAccessible::GetTypeInfoCount(UINT* pctinfo)
{
	return E_NOTIMPL;
}

HRESULT DuiAccessible::GetTypeInfo(UINT iTInfo, LCID lcid, ITypeInfo** ppTInfo)
{
	return E_NOTIMPL;
}

HRESULT DuiAccessible::GetIDsOfNames(REFIID riid, LPOLESTR* rgszNames, UINT cNames, LCID lcid, DISPID* rgDispId)
{
	return E_NOTIMPL;
}

HRESULT DuiAccessible::Invoke(DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS* pDispParams, VARIANT* pVarResult, EXCEPINFO* pExcepInfo, UINT* puArgErr)
{
	return E_NOTIMPL;
}

HRESULT DuiAccessible::GetIdentityString(DWORD dwIDChild, BYTE** ppIDString, DWORD* pdwIDStringLen)
{
	return E_NOTIMPL;
}

HRESULT DuiAccessible::get_accParent(IDispatch** ppdispParent)
{
	return E_NOTIMPL;
}

HRESULT DuiAccessible::get_accChildCount(long* pcountChildren)
{
	return E_NOTIMPL;
}

HRESULT DuiAccessible::get_accChild(VARIANT varChild, IDispatch** ppdispChild)
{
	return E_NOTIMPL;
}

HRESULT DuiAccessible::get_accName(VARIANT varChild, BSTR*)
{
	return E_NOTIMPL;
}

HRESULT DuiAccessible::get_accValue(VARIANT, BSTR*)
{
	return E_NOTIMPL;
}

HRESULT DuiAccessible::get_accDescription(VARIANT, BSTR*)
{
	return E_NOTIMPL;
}

HRESULT DuiAccessible::get_accRole(VARIANT, VARIANT*)
{
	return E_NOTIMPL;
}

HRESULT DuiAccessible::get_accState(VARIANT, VARIANT*)
{
	return E_NOTIMPL;
}

HRESULT DuiAccessible::get_accHelp(VARIANT, BSTR*)
{
	return E_NOTIMPL;
}

HRESULT DuiAccessible::get_accHelpTopic(BSTR*, VARIANT, long*)
{
	return E_NOTIMPL;
}

HRESULT DuiAccessible::get_accKeyboardShortcut(VARIANT, BSTR*)
{
	return E_NOTIMPL;
}

HRESULT DuiAccessible::get_accFocus(VARIANT*)
{
	return E_NOTIMPL;
}

HRESULT DuiAccessible::get_accSelection(VARIANT*)
{
	return E_NOTIMPL;
}

HRESULT DuiAccessible::get_accDefaultAction(VARIANT, BSTR*)
{
	return E_NOTIMPL;
}

HRESULT DuiAccessible::accSelect(long flagsSelect, VARIANT varID)
{
	return E_NOTIMPL;
}

HRESULT DuiAccessible::accLocation(long* pxLeft, long* pyTop, long* pcxWidth, long* pcyHeight, VARIANT varID)
{
	return E_NOTIMPL;
}

HRESULT DuiAccessible::accNavigate(long navDir, VARIANT varStart, VARIANT* pvarEnd)
{
	return E_NOTIMPL;
}

HRESULT DuiAccessible::accHitTest(long xLeft, long yTop, VARIANT* pvarID)
{
	return E_NOTIMPL;
}

HRESULT DuiAccessible::accDoDefaultAction(VARIANT varID)
{
	return E_NOTIMPL;
}

HRESULT DuiAccessible::put_accName(VARIANT varID, BSTR pszValue)
{
	return E_NOTIMPL;
}

HRESULT DuiAccessible::put_accValue(VARIANT varID, BSTR pszValue)
{
	return E_NOTIMPL;
}

HRESULT DuiAccessible::Clone(IEnumVARIANT** ppEnum)
{
	return E_NOTIMPL;
}

HRESULT DuiAccessible::Next(unsigned long celt, VARIANT* rgVar, unsigned long* pCeltFetched)
{
	return E_NOTIMPL;
}

HRESULT DuiAccessible::Reset()
{
	return E_NOTIMPL;
}

HRESULT DuiAccessible::Skip(unsigned long celt)
{
	return E_NOTIMPL;
}

HRESULT DuiAccessible::GetWindow(HWND* phwnd)
{
	return E_NOTIMPL;
}

HRESULT DuiAccessible::ContextSensitiveHelp(BOOL fEnterMode)
{
	return E_NOTIMPL;
}

HRESULT DuiAccessible::QueryService(REFGUID guidService, REFIID riid, void** ppv)
{
	return E_NOTIMPL;
}

long DuiAccessible::GetAccName(VARIANT, int, unsigned short**)
{
	return 0;
}

long DuiAccessible::GetAccNameFromContent(unsigned short**)
{
	return 0;
}

long DuiAccessible::GetDispatchFromElement(Element*, IDispatch**)
{
	return 0;
}

RefcountBase::RefcountBase()
{
}

RefcountBase::~RefcountBase()
{
}

long RefcountBase::AddRef()
{
	return 0;
}

long RefcountBase::Release()
{
	return 0;
}

Button::Button(const Button&)
{
}

Button::Button()
{
}

Button::~Button()
{
}

Button& Button::operator=(const Button&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

long Button::Initialize(unsigned int, Element*, unsigned long*)
{
	return 0;
}

long Button::Create(unsigned int, Element*, unsigned long*, Element**)
{
	return 0;
}

long Button::Create(Element*, unsigned long*, Element**)
{
	return 0;
}

UID WINAPI Button::Click()
{
	return UID();
}

UID WINAPI Button::Context()
{
	return UID();
}

void Button::OnPropertyChanged(const PropertyInfo*, int, Value*, Value*)
{
}

void Button::OnInput(InputEvent*)
{
}

IClassInfo* Button::GetClassInfoW()
{
	return nullptr;
}

long Button::DefaultAction()
{
	return 0;
}

bool Button::GetCaptured()
{
	return false;
}

IClassInfo* WINAPI Button::GetClassInfoPtr()
{
	return nullptr;
}

bool Button::GetPressed()
{
	return false;
}

bool Button::OnLostDialogFocus(DialogElement*)
{
	return false;
}

bool Button::OnReceivedDialogFocus(DialogElement*)
{
	return false;
}

long WINAPI Button::Register()
{
	return 0;
}

long Button::SetCaptured(bool)
{
	return 0;
}

void WINAPI Button::SetClassInfoPtr(IClassInfo*)
{
}

long Button::SetPressed(bool)
{
	return 0;
}

const PropertyInfo* WINAPI Button::CapturedProp()
{
	return nullptr;
}

const PropertyInfo* WINAPI Button::PressedProp()
{
	return nullptr;
}

IClassInfo* Button::s_pClassInfo;

HRESULT Element::Create(UINT nCreate, Element* pParent, DWORD* pdwDeferCookie, Element** ppElement) STUB_ZERO;
HRESULT Element::Destroy(bool fDelayed) STUB_ZERO;
HRESULT Element::DestroyAll(bool fDelayed) STUB_ZERO;
Element::Element() STUB_VOID;
Element::~Element() STUB_VOID;
HRESULT Element::Initialize(UINT nCreate, Element* peInitialParent, DWORD* pdwDeferCookie) STUB_ZERO;
Value* Element::GetRawValue(const PropertyInfo* ppi, int iIndex, UpdateCache* puc) STUB_ZERO;
Value* Element::GetValue(const PropertyInfo* ppi, int iIndex, UpdateCache* puc) STUB_ZERO;
Value* Element::GetValue(PropertyProcT pPropertyProc, int iIndex, UpdateCache* puc) STUB_ZERO;
HRESULT Element::SetValue(const PropertyInfo* ppi, int iIndex, Value* pv) STUB_ZERO;
HRESULT Element::SetValue(PropertyProcT pPropertyProc, int iIndex, Value* pv) STUB_ZERO;
HRESULT Element::RemoveLocalValue(const PropertyInfo* ppi) STUB_ZERO;
HRESULT Element::RemoveLocalValue(PropertyProcT pPropertyProc) STUB_ZERO;
void Element::StartDefer(DWORD* pdwDeferCookie) STUB_VOID;
void Element::EndDefer(DWORD dwDeferCookie) STUB_VOID;
void Element::UpdateLayout() STUB_VOID;
DeferCycle* Element::GetDeferObject() STUB_ZERO;
DeferCycle* Element::TestDeferObject() STUB_ZERO;
bool Element::IsValidAccessor(const PropertyInfo* ppi, int iIndex, bool bSetting) STUB_ZERO;
bool Element::IsValidValue(const PropertyInfo* ppi, Value* pv) STUB_ZERO;
bool Element::IsRTL() STUB_ZERO;
bool Element::IsRTLReading() STUB_ZERO;
bool Element::IsContentProtected() STUB_ZERO;
const WCHAR* Element::GetContentStringAsDisplayed(Value** ppv) STUB_ZERO;
const WCHAR* Element::GetAccNameAsDisplayed(Value** ppv) STUB_ZERO;
bool Element::OnPropertyChanging(PropertyInfo* ppi, int iIndex, Value* pvOld, Value* pvNew) STUB_ZERO;
bool Element::OnPropertyChanging(const PropertyInfo* ppi, int iIndex, Value* pvOld, Value* pvNew) STUB_ZERO;
void Element::OnPropertyChanged(PropertyInfo* ppi, int iIndex, Value* pvOld, Value* pvNew) STUB_VOID;
void Element::OnPropertyChanged(const PropertyInfo* ppi, int iIndex, Value* pvOld, Value* pvNew) STUB_VOID;
void Element::OnGroupChanged(int fGroups, bool bLowPri) STUB_VOID;
void Element::OnInput(InputEvent* pInput) STUB_VOID;
void Element::OnKeyFocusMoved(Element* peFrom, Element* peTo) STUB_VOID;
void Element::OnMouseFocusMoved(Element* peFrom, Element* peTo) STUB_VOID;
void Element::OnDestroy() STUB_VOID;
void Element::FireEvent(Event* pEvent, bool fFull, bool fUseSpecifiedTarget) STUB_VOID;
void Element::BroadcastEvent(Event* pEvent) STUB_VOID;
void Element::OnEvent(Event* pEvent) STUB_VOID;
void Element::Paint(HDC hDC, const RECT* prcBounds, const RECT* prcInvalid, RECT* prcSkipBorder, RECT* prcSkipContent) STUB_VOID;
void Element::PaintContent(HDC hDC, const RECT* prcContent) STUB_VOID;
void Element::PaintStringContent(HDC hDC, const RECT* prcContent, Value* pvContent, int dCAlign) STUB_VOID;
void Element::PaintFocusRect(HDC hDC, const RECT* prcBounds, const RECT* prcContent) STUB_VOID;
void Element::PaintBorder(HDC hDC, Value* pvBackgnd, RECT* prcPaint, const RECT& rcBorder) STUB_VOID;
void Element::PaintBackground(HDC hDC, Value* pvBackgnd, const RECT& rcBounds, const RECT& rcInvalid, const RECT& rcPadding, const RECT& rcBorder) STUB_VOID;
void Element::PaintEdgeHighlight(HDC hDC, const RECT& rcPaint, const RECT& rcInvalid) STUB_VOID;
SIZE Element::GetContentSize(int dConstW, int dConstH, Surface* psrf) STUB_ZERO;
float Element::GetTreeAlphaLevel() STUB_ZERO;
HRESULT Element::Add(Element* pe) STUB_ZERO;
HRESULT Element::Add(Element** ppe, UINT cCount) STUB_ZERO;
HRESULT Element::Add(Element* pe, CompareCallback lpfnCompare) STUB_ZERO;
HRESULT Element::Insert(Element* pe, UINT iInsertIdx) STUB_ZERO;
HRESULT Element::Insert(Element** ppe, UINT cCount, UINT iInsertIdx) STUB_ZERO;
HRESULT Element::SortChildren(CompareCallback lpfnCompare) STUB_ZERO;
HRESULT Element::ShiftChild(UINT iOldIndex, UINT iNewIndex) STUB_ZERO;
HRESULT Element::Remove(Element* pe) STUB_ZERO;
HRESULT Element::Remove(Element** ppe, UINT cCount) STUB_ZERO;
HRESULT Element::RemoveAll() STUB_ZERO;
Element* Element::FindDescendent(ATOM atomID) STUB_ZERO;
void Element::MapElementPoint(Element* peFrom, const POINT* pptFrom, POINT* pptTo) STUB_VOID;
Element* Element::GetImmediateChild(Element* peFrom) STUB_ZERO;
bool Element::IsDescendent(Element* pe) STUB_ZERO;
Element* Element::GetAdjacent(Element* peFrom, int iNavDir, const NavReference* pnr, DWORD dwFlags) STUB_ZERO;
Element* Element::GetKeyWithinChild() STUB_ZERO;
Element* Element::GetMouseWithinChild() STUB_ZERO;
bool Element::EnsureVisible() STUB_ZERO;
bool Element::EnsureVisible(UINT uChild) STUB_ZERO;
bool Element::EnsureVisible(int x, int y, int cx, int cy) STUB_ZERO;
void Element::SetKeyFocus() STUB_VOID;
HRESULT Element::AddListener(IElementListener* pel) STUB_ZERO;
void Element::RemoveListener(IElementListener* pel) STUB_VOID;
HRESULT Element::AddBehavior(IDuiBehavior* pBehavior) STUB_ZERO;
HRESULT Element::RemoveBehavior(IDuiBehavior* pBehavior) STUB_ZERO;
void Element::InvokeAnimation(int dAni, UINT nTypeMask) STUB_VOID;
void Element::InvokeAnimation(UINT nTypes, UINT nInterpol, float flDuration, float flDelay, bool fPushToChildren) STUB_VOID;
void Element::StopAnimation(UINT nTypes) STUB_VOID;
UINT Element::MessageCallback(GMSG* pgMsg) STUB_ZERO;
SIZE Element::_UpdateDesiredSize(int cxConstraint, int cyConstraint, Surface* psrf) STUB_ZERO;
void Element::_UpdateLayoutPosition(int dX, int dY) STUB_VOID;
void Element::_UpdateLayoutSize(int dWidth, int dHeight) STUB_VOID;
void Element::_StartOptimizedLayoutQ() STUB_VOID;
void Element::_EndOptimizedLayoutQ() STUB_VOID;
UINT Element::_GetNeedsLayout() STUB_ZERO;
bool Element::_SetGroupChanges(Element* pe, int fGroups, DeferCycle* pdc) STUB_ZERO;
void Element::_TransferGroupFlags(Element* pe, int fGroups) STUB_VOID;
int Element::_SetNeedsLayout(UINT fNeedsLayout) STUB_ZERO;
int Element::_MarkElementForLayout(Element* pe, UINT fNeedsLayout) STUB_ZERO;
int Element::_MarkElementForDS(Element* pe) STUB_ZERO;
void Element::_ClearNeedsLayout() STUB_VOID;
void Element::_AddDependency(Element* pe, const PropertyInfo* ppi, int iIndex, DepRecs* pdr, DeferCycle* pdc, HRESULT* phr) STUB_VOID;
HRESULT Element::_DisplayNodeCallback(HGADGET hgadCur, void* pvCur, EventMsg* pGMsg) STUB_ZERO;
HRESULT Element::QueryInterface(REFIID riid, void** ppvObject) STUB_ZERO;
ULONG Element::AddRef() STUB_ZERO;
ULONG Element::Release() STUB_ZERO;
int Element::_GetChangesUpdatePass() STUB_ZERO;
void Element::Detach(DeferCycle* pdc) STUB_VOID;
bool Element::UiaEvents() STUB_ZERO;
void Element::EnableUiaEvents(bool fEnable) STUB_VOID;
bool Element::GetClickablePoint(POINT* ptClick) STUB_ZERO;
void Element::GetImmersiveFocusRectOffsets(RECT* prc) STUB_VOID;
Element* Element::FindDescendentWorker(ATOM atomID) STUB_ZERO;
void Element::_GetBuriedSheetDependencies(const PropertyInfo* ppi, Element* peNewParent, DepRecs* pdr, DeferCycle* pdc, HRESULT* phr) STUB_VOID;
HRESULT Element::_GetDependencies(const PropertyInfo* ppi, int iIndex, DepRecs* pdr, int iPCSrcRoot, Value* pvNewRoot, DeferCycle* pdc) STUB_ZERO;
void Element::_VoidPCNotifyTree(int iPCPos, DeferCycle* pdc) STUB_VOID;
int Element::_CachedValueIsEqual(const PropertyInfo* ppi, Element* peParent) STUB_ZERO;
Value* Element::_GetLocalValueFromVM(const PropertyInfo* ppi) STUB_ZERO;
Value* Element::_GetLocalValue(const PropertyInfo* ppi) STUB_ZERO;
Value* Element::_GetSpecifiedValueIgnoreCache(const PropertyInfo* ppi) STUB_ZERO;
Value* Element::_GetSpecifiedValue(const PropertyInfo* ppi, UpdateCache* puc) STUB_ZERO;
Value* Element::_GetComputedValue(const PropertyInfo* ppi, UpdateCache* puc) STUB_ZERO;
void Element::_UpdatePropertyInCache(const PropertyInfo* ppi) STUB_VOID;
void Element::_InheritProperties() STUB_VOID;
void Element::_FlushDS(DeferCycle*) STUB_VOID;
HRESULT Element::_PreSourceChange(PropertyProcT proc, int iIndex, Value* pvOld, Value* pvNew) STUB_ZERO;
HRESULT Element::_PreSourceChange(const PropertyInfo* ppi, int iIndex, Value* pvOld, Value* pvNew) STUB_ZERO;
HRESULT Element::_PostSourceChange() STUB_ZERO;
void Element::_BroadcastEventWorker(Event* pEvent) STUB_VOID;
void Element::_PostEvent(Event* pEvent, int nMsg) STUB_VOID;
bool Element::s_HandleDUIEventMessage(Element* pe, EventMsg* pEventMsg) STUB_ZERO;
UINT Element::GetCommonDrawTextFlags(int dCAlign) STUB_ZERO;
WCHAR* Element::RemoveShortcutFromName(const WCHAR* pszName) STUB_ZERO;
void Element::_SyncVisible() STUB_VOID;
void Element::_SyncBackground() STUB_VOID;
void Element::_SyncRedrawStyle() STUB_VOID;
bool Element::IsPointValid(double x, double y) STUB_ZERO;
bool Element::TryLinePattern(POINT* pt, const RECT& rcParent) STUB_ZERO;
bool Element::TryPattern(double x, double y, POINT* pt, const RECT& rcParent) STUB_ZERO;
bool Element::TrySparsePattern(POINT* pt, const RECT& rcParent) STUB_ZERO;
HRESULT Element::_SetRelPixValue(const PropertyInfo* ppi, int nValue) STUB_ZERO;
HRESULT Element::_SetRelPixRect(const PropertyInfo* ppi, int l, int t, int r, int b) STUB_ZERO;
HRESULT Element::GetTheme(const WCHAR* pszClass, HTHEME* phTheme) STUB_ZERO;
void Element::_FlushLayout(Element* pe, DeferCycle* pdc) STUB_VOID;
void Element::_InvalidateCachedDSConstraints(Element* pe) STUB_VOID;
void Element::_SelfLayoutDoLayout(int cx, int cy) STUB_VOID;
SIZE Element::_SelfLayoutUpdateDesiredSize(int dConstW, int dConstH, Surface* psrf) STUB_ZERO;
HRESULT Element::_SetValue(const PropertyInfo* ppi, int iIndex, Value* pv, bool fInternalCall) STUB_ZERO;
HRESULT Element::_SetValue(PropertyProcT pPropertyProc, int iIndex, Value* pv, bool fInternalCall) STUB_ZERO;
HRESULT Element::_RemoveLocalValue(const PropertyInfo* ppi, bool fInternalCall) STUB_ZERO;
HRESULT Element::_RemoveLocalValue(PropertyProcT pPropertyProc, bool fInternalCall) STUB_ZERO;
void Element::OnHosted(Element* peNewRoot) STUB_VOID;
void Element::OnUnHosted(Element* peOldRoot) STUB_VOID;
void Element::MarkHosted() STUB_VOID;
void Element::MarkSelfLayout() STUB_VOID;
void Element::UpdateTooltip(Element* pe) STUB_VOID;
void Element::ActivateTooltip(Element* pe, DWORD dwFlags) STUB_VOID;
void Element::RemoveTooltip(Element* pe) STUB_VOID;
void Element::_OnFontPropChanged(Value* pvFont) STUB_VOID;
void Element::MarkNeedsDSUpdate() STUB_VOID;
bool Element::NeedsDSUpdate() STUB_ZERO;
void Element::DoubleBuffered(bool fEnabled) STUB_VOID;
int Element::IsRoot() STUB_ZERO;
Element* Element::GetRoot() STUB_ZERO;
Element* Element::GetTopLevel() STUB_ZERO;
HRESULT Element::GetRootRelativeBounds(RECT* prc) STUB_ZERO;
RTL_CRITICAL_SECTION* Element::GetFactoryLock() STUB_ZERO;
UID Element::KeyboardNavigate() STUB_ZERO;
UID Element::AnimationChange() STUB_ZERO;
UID Element::DCompDeviceRebuilt() STUB_ZERO;
const PropertyInfo* Element::ParentProp() STUB_ZERO;
const PropertyInfo* Element::ChildrenProp() STUB_ZERO;
const PropertyInfo* Element::VisibleProp() STUB_ZERO;
const PropertyInfo* Element::WidthProp() STUB_ZERO;
const PropertyInfo* Element::HeightProp() STUB_ZERO;
const PropertyInfo* Element::LocationProp() STUB_ZERO;
const PropertyInfo* Element::ExtentProp() STUB_ZERO;
const PropertyInfo* Element::XProp() STUB_ZERO;
const PropertyInfo* Element::YProp() STUB_ZERO;
const PropertyInfo* Element::PosInLayoutProp() STUB_ZERO;
const PropertyInfo* Element::SizeInLayoutProp() STUB_ZERO;
const PropertyInfo* Element::DesiredSizeProp() STUB_ZERO;
const PropertyInfo* Element::LastDSConstProp() STUB_ZERO;
const PropertyInfo* Element::LayoutProp() STUB_ZERO;
const PropertyInfo* Element::LayoutPosProp() STUB_ZERO;
const PropertyInfo* Element::BorderThicknessProp() STUB_ZERO;
const PropertyInfo* Element::BorderStyleProp() STUB_ZERO;
const PropertyInfo* Element::BorderColorProp() STUB_ZERO;
const PropertyInfo* Element::PaddingProp() STUB_ZERO;
const PropertyInfo* Element::MarginProp() STUB_ZERO;
const PropertyInfo* Element::ForegroundProp() STUB_ZERO;
const PropertyInfo* Element::BackgroundProp() STUB_ZERO;
const PropertyInfo* Element::ContentProp() STUB_ZERO;
const PropertyInfo* Element::FontFaceProp() STUB_ZERO;
const PropertyInfo* Element::FontSizeProp() STUB_ZERO;
const PropertyInfo* Element::FontWeightProp() STUB_ZERO;
const PropertyInfo* Element::FontStyleProp() STUB_ZERO;
const PropertyInfo* Element::FontQualityProp() STUB_ZERO;
const PropertyInfo* Element::ActiveProp() STUB_ZERO;
const PropertyInfo* Element::ContentAlignProp() STUB_ZERO;
const PropertyInfo* Element::KeyFocusedProp() STUB_ZERO;
const PropertyInfo* Element::KeyWithinProp() STUB_ZERO;
const PropertyInfo* Element::MouseFocusedProp() STUB_ZERO;
const PropertyInfo* Element::MouseWithinProp() STUB_ZERO;
const PropertyInfo* Element::ClassProp() STUB_ZERO;
const PropertyInfo* Element::IDProp() STUB_ZERO;
const PropertyInfo* Element::SheetProp() STUB_ZERO;
const PropertyInfo* Element::SelectedProp() STUB_ZERO;
const PropertyInfo* Element::AlphaProp() STUB_ZERO;
const PropertyInfo* Element::AnimationProp() STUB_ZERO;
const PropertyInfo* Element::CursorProp() STUB_ZERO;
const PropertyInfo* Element::DirectionProp() STUB_ZERO;
const PropertyInfo* Element::AccessibleProp() STUB_ZERO;
const PropertyInfo* Element::AccRoleProp() STUB_ZERO;
const PropertyInfo* Element::AccStateProp() STUB_ZERO;
const PropertyInfo* Element::AccNameProp() STUB_ZERO;
const PropertyInfo* Element::AccDescProp() STUB_ZERO;
const PropertyInfo* Element::AccValueProp() STUB_ZERO;
const PropertyInfo* Element::AccDefActionProp() STUB_ZERO;
const PropertyInfo* Element::AccHelpProp() STUB_ZERO;
const PropertyInfo* Element::AccItemTypeProp() STUB_ZERO;
const PropertyInfo* Element::AccItemStatusProp() STUB_ZERO;
const PropertyInfo* Element::ShortcutProp() STUB_ZERO;
const PropertyInfo* Element::EnabledProp() STUB_ZERO;
const PropertyInfo* Element::MinSizeProp() STUB_ZERO;
const PropertyInfo* Element::OverhangProp() STUB_ZERO;
const PropertyInfo* Element::TooltipProp() STUB_ZERO;
const PropertyInfo* Element::TooltipMaxWidthProp() STUB_ZERO;
const PropertyInfo* Element::FontProp() STUB_ZERO;
const PropertyInfo* Element::WindowActiveProp() STUB_ZERO;
const PropertyInfo* Element::AbsorbsShortcutProp() STUB_ZERO;
const PropertyInfo* Element::CompositedTextProp() STUB_ZERO;
const PropertyInfo* Element::TextGlowSizeProp() STUB_ZERO;
const PropertyInfo* Element::HighDPIProp() STUB_ZERO;
const PropertyInfo* Element::DPIProp() STUB_ZERO;
const PropertyInfo* Element::CustomProp() STUB_ZERO;
const PropertyInfo* Element::ShadowIntensityProp() STUB_ZERO;
const PropertyInfo* Element::EdgeHighlightThicknessProp() STUB_ZERO;
const PropertyInfo* Element::EdgeHighlightColorProp() STUB_ZERO;
const PropertyInfo* Element::ScaleFactorProp() STUB_ZERO;
const PropertyInfo* Element::UsesDesktopPerMonitorScalingProp() STUB_ZERO;
HGADGET Element::GetDisplayNode() STUB_ZERO;
int Element::GetIndex() STUB_ZERO;
bool Element::IsDestroyed() STUB_ZERO;
bool Element::IsHosted() STUB_ZERO;
bool Element::IsSelfLayout() STUB_ZERO;
bool Element::IsBehaviorLayout() const STUB_ZERO;
bool Element::HasChildren() STUB_ZERO;
bool Element::HasLayout() STUB_ZERO;
bool Element::HasBorder() STUB_ZERO;
bool Element::HasPadding() STUB_ZERO;
bool Element::HasMargin() STUB_ZERO;
bool Element::HasContent() STUB_ZERO;
bool Element::IsDefaultCAlign() STUB_ZERO;
bool Element::IsWordWrap() STUB_ZERO;
bool Element::HasAnimation() STUB_ZERO;
bool Element::IsDefaultCursor() STUB_ZERO;
bool Element::HasEdgeHighlight() STUB_ZERO;
bool Element::HasPVLAnimationState(UINT dState) STUB_ZERO;
void Element::GetRenderBorderThickness(RECT* prc) STUB_VOID;
void Element::GetRenderPadding(RECT* prc) STUB_VOID;
void Element::GetRenderMargin(RECT* prc) STUB_VOID;
void Element::GetRenderEdgeHighlightThickness(RECT* prc) STUB_VOID;
void Element::GetRenderMinSize(SIZE* prc) STUB_VOID;
Element* Element::GetParent() STUB_ZERO;
bool Element::GetVisible() STUB_ZERO;
int Element::GetWidth() STUB_ZERO;
int Element::GetHeight() STUB_ZERO;
DynamicArray<Element*>* Element::GetChildren(Value** ppv) STUB_ZERO;
int Element::GetX() STUB_ZERO;
int Element::GetY() STUB_ZERO;
Layout* Element::GetLayout(Value** ppv) STUB_ZERO;
int Element::GetLayoutPos() STUB_ZERO;
const RECT* Element::GetBorderThickness(Value** ppv) STUB_ZERO;
int Element::GetBorderStyle() STUB_ZERO;
int Element::GetBorderStdColor() STUB_ZERO;
const Fill* Element::GetBorderColor(Value** ppv) STUB_ZERO;
const RECT* Element::GetPadding(Value** ppv) STUB_ZERO;
const RECT* Element::GetMargin(Value** ppv) STUB_ZERO;
const POINT* Element::GetLocation(Value** ppv) STUB_ZERO;
const SIZE* Element::GetExtent(Value** ppv) STUB_ZERO;
const SIZE* Element::GetDesiredSize() STUB_ZERO;
int Element::GetForegroundStdColor() STUB_ZERO;
const Fill* Element::GetForegroundColor(Value** ppv) STUB_ZERO;
int Element::GetBackgroundStdColor() STUB_ZERO;
const Fill* Element::GetBackgroundColor(Value** ppv) STUB_ZERO;
const RECT* Element::GetEdgeHighlightThickness(Value** ppv) STUB_ZERO;
const Fill* Element::GetEdgeHighlightColor(Value** ppv) STUB_ZERO;
float Element::GetElementScaleFactor() STUB_ZERO;
const WCHAR* Element::GetContentString(Value** ppv) STUB_ZERO;
HRESULT Element::GetEncodedContentString(WCHAR*, size_t cchString) STUB_ZERO;
size_t Element::GetEncodedContentStringLength() STUB_ZERO;
const WCHAR* Element::GetFontFace(Value** ppv) STUB_ZERO;
int Element::GetFontSize() STUB_ZERO;
int Element::GetFontWeight() STUB_ZERO;
int Element::GetFontStyle() STUB_ZERO;
int Element::GetFontQuality() STUB_ZERO;
bool Element::IsCompositedText() STUB_ZERO;
int Element::GetTextGlowSize() STUB_ZERO;
int Element::GetActive() STUB_ZERO;
int Element::GetContentAlign() STUB_ZERO;
bool Element::GetKeyFocused() STUB_ZERO;
bool Element::GetKeyWithin() STUB_ZERO;
bool Element::GetMouseFocused() STUB_ZERO;
bool Element::GetMouseWithin() STUB_ZERO;
const WCHAR* Element::GetClass(Value** ppv) STUB_ZERO;
ATOM Element::GetID() STUB_ZERO;
StyleSheet* Element::GetSheet() STUB_ZERO;
bool Element::GetSelected() STUB_ZERO;
int Element::GetAlpha() STUB_ZERO;
bool Element::GetPreserveAlphaChannel() const STUB_ZERO;
void Element::SetPreserveAlphaChannel(bool fPreserveAlpha) STUB_VOID;
int Element::GetAnimation() STUB_ZERO;
int Element::GetPVLAnimationState() STUB_ZERO;
int Element::GetDirection() STUB_ZERO;
bool Element::GetAccessible() STUB_ZERO;
int Element::GetAccRole() STUB_ZERO;
int Element::GetAccState() STUB_ZERO;
const WCHAR* Element::GetAccName(Value** ppv) STUB_ZERO;
const WCHAR* Element::GetAccDesc(Value** ppv) STUB_ZERO;
const WCHAR* Element::GetAccValue(Value** ppv) STUB_ZERO;
const WCHAR* Element::GetAccDefAction(Value** ppv) STUB_ZERO;
const WCHAR* Element::GetAccHelp(Value** ppv) STUB_ZERO;
const WCHAR* Element::GetAccItemType(Value** ppv) STUB_ZERO;
const WCHAR* Element::GetAccItemStatus(Value** ppv) STUB_ZERO;
int Element::GetShortcut() STUB_ZERO;
bool Element::GetEnabled() STUB_ZERO;
const SIZE* Element::GetMinSize(Value** ppv) STUB_ZERO;
bool Element::GetOverhang() STUB_ZERO;
bool Element::GetTooltip() STUB_ZERO;
int Element::GetTooltipMaxWidth() STUB_ZERO;
const WCHAR* Element::GetFont(Value** ppv) STUB_ZERO;
int Element::GetColorize() STUB_ZERO;
bool Element::GetWindowActive() STUB_ZERO;
bool Element::GetAbsorbsShortcut() STUB_ZERO;
bool Element::GetHighDPI() STUB_ZERO;
int Element::GetDPI() STUB_ZERO;
int Element::GetShadowIntensity() STUB_ZERO;
void Element::SetLayoutCompletionNotify(bool v) STUB_VOID;
void Element::SetPVLAnimationState(int v) STUB_VOID;
HRESULT Element::SetVisible(bool v) STUB_ZERO;
HRESULT Element::SetWidth(int v) STUB_ZERO;
HRESULT Element::SetHeight(int v) STUB_ZERO;
HRESULT Element::SetRelPixWidth(int v) STUB_ZERO;
HRESULT Element::SetRelPixHeight(int v) STUB_ZERO;
HRESULT Element::SetX(int v) STUB_ZERO;
HRESULT Element::SetY(int v) STUB_ZERO;
HRESULT Element::SetLayout(Layout* v) STUB_ZERO;
HRESULT Element::SetLayoutPos(int v) STUB_ZERO;
HRESULT Element::SetBorderThickness(int l, int t , int r, int b) STUB_ZERO;
HRESULT Element::SetBorderStyle(int v) STUB_ZERO;
HRESULT Element::SetBorderStdColor(int v) STUB_ZERO;
HRESULT Element::SetBorderColor(COLORREF cr) STUB_ZERO;
HRESULT Element::SetBorderGradientColor(COLORREF cr0, COLORREF cr1, BYTE dType) STUB_ZERO;
HRESULT Element::SetPadding(int l, int t, int r, int b) STUB_ZERO;
HRESULT Element::SetRelPixPadding(int l, int t, int r, int b) STUB_ZERO;
HRESULT Element::SetMargin(int l, int t, int r, int b) STUB_ZERO;
HRESULT Element::SetRelPixMargin(int l, int t, int r, int b) STUB_ZERO;
HRESULT Element::SetForegroundStdColor(int v) STUB_ZERO;
HRESULT Element::SetForegroundColor(COLORREF cr) STUB_ZERO;
HRESULT Element::SetForegroundColor(COLORREF cr0, COLORREF cr1, BYTE dType) STUB_ZERO;
HRESULT Element::SetForegroundColor(COLORREF cr0, COLORREF cr1, COLORREF cr2, BYTE dType) STUB_ZERO;
HRESULT Element::SetBackgroundStdColor(int v) STUB_ZERO;
HRESULT Element::SetBackgroundColor(const Fill& fill) STUB_ZERO;
HRESULT Element::SetBackgroundColor(const WCHAR* pszClassName, int iPartId, int iStateId) STUB_ZERO;
HRESULT Element::SetBackgroundColor(COLORREF cr) STUB_ZERO;
HRESULT Element::SetBackgroundColor(COLORREF cr0, COLORREF cr1, BYTE dType) STUB_ZERO;
HRESULT Element::SetBackgroundColor(COLORREF cr0, COLORREF cr1, COLORREF cr2, BYTE dType) STUB_ZERO;
HRESULT Element::SetContentString(const WCHAR* v) STUB_ZERO;
HRESULT Element::SetEncodedContentString(const WCHAR* v) STUB_ZERO;
HRESULT Element::SetContentGraphic(const WCHAR* v, BYTE dBlendMode, UINT dBlendValue) STUB_ZERO;
HRESULT Element::SetContentGraphic(const WCHAR* v, WORD cxDesired, WORD cyDesired) STUB_ZERO;
HRESULT Element::SetFontFace(const WCHAR* v) STUB_ZERO;
HRESULT Element::SetFontSize(int v) STUB_ZERO;
HRESULT Element::SetFontWeight(int v) STUB_ZERO;
HRESULT Element::SetFontStyle(int v) STUB_ZERO;
HRESULT Element::SetFontQuality(int v) STUB_ZERO;
HRESULT Element::SetActive(int v) STUB_ZERO;
HRESULT Element::SetCompositedText(bool v) STUB_ZERO;
HRESULT Element::SetTextGlowSize(int v) STUB_ZERO;
HRESULT Element::SetContentAlign(int v) STUB_ZERO;
HRESULT Element::SetClass(const WCHAR* v) STUB_ZERO;
HRESULT Element::SetID(const WCHAR* v) STUB_ZERO;
HRESULT Element::SetSheet(StyleSheet* v) STUB_ZERO;
HRESULT Element::SetSelected(bool v) STUB_ZERO;
HRESULT Element::SetAlpha(int v) STUB_ZERO;
HRESULT Element::SetAnimation(int v) STUB_ZERO;
HRESULT Element::SetStdCursor(int v) STUB_ZERO;
HRESULT Element::SetCursor(const WCHAR* v) STUB_ZERO;
HRESULT Element::SetCursorHandle(HCURSOR hCursor) STUB_ZERO;
HRESULT Element::SetDirection(int v) STUB_ZERO;
HRESULT Element::SetAccessible(bool v) STUB_ZERO;
HRESULT Element::SetAccRole(int v) STUB_ZERO;
HRESULT Element::SetAccState(int v) STUB_ZERO;
HRESULT Element::SetAccName(const WCHAR* v) STUB_ZERO;
HRESULT Element::SetAccDesc(const WCHAR* v) STUB_ZERO;
HRESULT Element::SetAccValue(const WCHAR* v) STUB_ZERO;
HRESULT Element::SetAccDefAction(const WCHAR* v) STUB_ZERO;
HRESULT Element::SetAccHelp(const WCHAR* v) STUB_ZERO;
HRESULT Element::SetAccItemType(const WCHAR* v) STUB_ZERO;
HRESULT Element::SetAccItemStatus(const WCHAR* v) STUB_ZERO;
HRESULT Element::SetShortcut(int v) STUB_ZERO;
HRESULT Element::SetEnabled(bool v) STUB_ZERO;
HRESULT Element::SetMinSize(int cx, int cy) STUB_ZERO;
HRESULT Element::SetOverhang(bool v) STUB_ZERO;
HRESULT Element::SetTooltip(bool v) STUB_ZERO;
HRESULT Element::SetTooltipMaxWidth(int v) STUB_ZERO;
HRESULT Element::SetFont(const WCHAR* v) STUB_ZERO;
HRESULT Element::SetWindowActive(bool v) STUB_ZERO;
HRESULT Element::SetAbsorbsShortcut(bool v) STUB_ZERO;
HRESULT Element::SetEdgeHighlightThickness(int l, int t, int r, int b) STUB_ZERO;
HRESULT Element::SetEdgeHighlightColor(COLORREF cr) STUB_ZERO;
WCHAR Element::GetShortcutChar() STUB_ZERO;
HRESULT Element::SetShadowIntensity(int v) STUB_ZERO;
IClassInfo* Element::GetClassInfoPtr() STUB_ZERO;
void Element::SetClassInfoPtr(IClassInfo* pClass) STUB_VOID;
IClassInfo* Element::s_pClassInfo;
IClassInfo* Element::GetClassInfoW() STUB_ZERO;
HRESULT Element::Register() STUB_ZERO;
HRESULT Element::UnRegister(IClassInfo** ppClassInfo) STUB_ZERO;
HRESULT Element::GetAccessibleImpl(IAccessible** ppAccessible) STUB_ZERO;
HRESULT Element::QueueDefaultAction() STUB_ZERO;
HRESULT Element::DefaultAction() STUB_ZERO;
HRESULT Element::GetUIAElementProvider(REFIID riid, void** ppv) STUB_ZERO;
HRESULT Element::GetElementProviderImpl(InvokeHelper* pih, ElementProvider** ppprv) STUB_ZERO;
void Element::HandleUiaDestroyListener() STUB_VOID;
void Element::HandleUiaPropertyListener(const PropertyInfo* ppi, int iIndex, Value* pvOld, Value* pvNew) STUB_VOID;
void Element::HandleUiaPropertyChangingListener(const PropertyInfo* ppi) STUB_VOID;
void Element::HandleUiaEventListener(Event* pEvent) STUB_VOID;
Element* Element::GetUiaFocusDelegate() STUB_ZERO;
void Element::SetOverrideScaleFactor(float flscale) STUB_VOID;
void Element::_Fill(HDC hDC, DWORD crFill, int left, int top, int right, int bottom, bool fForceOpaque) STUB_VOID;

class __Element_Check final : public Element
{
#ifdef _WIN64
	static_assert(sizeof(Element) == 0xC8);
	static_assert(__builtin_offsetof(Element, _rootWindowForTheming) == 0xC0);
#else
	static_assert(sizeof(Element) == 0x84);
	static_assert(__builtin_offsetof(Element, _rootWindowForTheming) == 0x80);
#endif
};

ElementWithHWND::ElementWithHWND(const ElementWithHWND&)
{
}

ElementWithHWND::ElementWithHWND()
{
}

ElementWithHWND::~ElementWithHWND()
{
}

ElementWithHWND& ElementWithHWND::operator=(const ElementWithHWND&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

long WINAPI ElementWithHWND::Create(Element*, unsigned long*, Element**)
{
	return 0;
}

IClassInfo* WINAPI ElementWithHWND::GetClassInfoPtr()
{
	return nullptr;
}

IClassInfo* ElementWithHWND::GetClassInfoW()
{
	return nullptr;
}

long WINAPI ElementWithHWND::Register()
{
	return 0;
}

void WINAPI ElementWithHWND::SetClassInfoPtr(IClassInfo*)
{
}

IClassInfo* ElementWithHWND::s_pClassInfo;

DUIXmlParser::DUIXmlParser(const DUIXmlParser&)
{
}

DUIXmlParser::DUIXmlParser()
{
}

DUIXmlParser::~DUIXmlParser()
{
}

DUIXmlParser& DUIXmlParser::operator=(const DUIXmlParser&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

long DUIXmlParser::Create(DUIXmlParser**, GetSheetCallback, void* sheetParam, ParseErrorCallback, void* parseErrorParam)
{
	return 0;
}

long DUIXmlParser::CreateElement(UCString, Element*, Element*, unsigned long*, Element** out)
{
	return 0;
}

void DUIXmlParser::Destroy()
{
}

void DUIXmlParser::EnableDesignMode()
{
}

GetSheetCallback DUIXmlParser::GetGetSheetCallback()
{
	return GetSheetCallback();
}

HINSTANCE DUIXmlParser::GetHInstance()
{
	return HINSTANCE();
}

HINSTANCE DUIXmlParser::GetResourceHInstance()
{
	return HINSTANCE();
}

long DUIXmlParser::GetSheet(UCString, Value**)
{
	return 0;
}

void* DUIXmlParser::GetSheetContext()
{
	return nullptr;
}

long DUIXmlParser::LookupElement(IXmlReader*, UCString, HINSTANCE, IClassInfo**)
{
	return 0;
}

long DUIXmlParser::LookupElement(LINEINFO, UCString, HINSTANCE, IClassInfo**)
{
	return 0;
}

void DUIXmlParser::SetDefaultHInstance(HINSTANCE)
{
}

void DUIXmlParser::SetGetSheetCallback(GetSheetCallback, void*)
{
}

void DUIXmlParser::SetParseErrorCallback(ParseErrorCallback, void*)
{
}

void DUIXmlParser::SetUnknownAttrCallback(bool (WINAPI *)(UCString, void*), void*)
{
}

long DUIXmlParser::SetPreprocessedXML(UCString, HINSTANCE, HINSTANCE)
{
	return 0;
}

void DUIXmlParser::SetUnavailableIcon(HICON)
{
}

long DUIXmlParser::SetXML(UCString, HINSTANCE, HINSTANCE)
{
	return 0;
}

long DUIXmlParser::SetXMLFromResource(unsigned int, HINSTANCE, HINSTANCE)
{
	return 0;
}

long DUIXmlParser::SetXMLFromResource(UCString, HINSTANCE, HINSTANCE)
{
	return 0;
}

long DUIXmlParser::UpdateSheets(Element*)
{
	return 0;
}

void DUIXmlParser::_DestroyTables()
{
}

long DUIXmlParser::_InitializeTables()
{
	return 0;
}

long DUIXmlParser::_EnterOnCurrentThread()
{
	return 0;
}

LINEINFO DUIXmlParser::_GetLineInfo(IXmlReader*)
{
	return LINEINFO();
}

long DUIXmlParser::AddRulesToStyleSheet(IXmlReader*, StyleSheet*, UCString, DynamicArray<XMLParserCond, 0>*, DynamicArray<UString, 0>*)
{
	return 0;
}

long DUIXmlParser::CreateLayout(const ParserTools::ExprNode*, long (WINAPI*)(int, int*, Value**))
{
	return 0;
}

long DUIXmlParser::CreateStyleSheet(IXmlReader*, UCString, StyleSheet**)
{
	return 0;
}

long DUIXmlParser::CreateXmlReader(IXmlReader**)
{
	return 0;
}

long DUIXmlParser::CreateXmlReaderFromHGLOBAL(void*, IXmlReader**)
{
	return 0;
}

long DUIXmlParser::CreateXmlReaderInputWithEncodingName(IStream*, UCString, IUnknown**)
{
	return 0;
}

long DUIXmlParser::GetParserCommon(DUIXmlParser**)
{
	return 0;
}

long DUIXmlParser::GetPropValPairInfo(IXmlReader*, IClassInfo*, UCString, UCString, PropertyInfo const**, Value**)
{
	return 0;
}

long DUIXmlParser::GetPropValPairInfo(LINEINFO, IClassInfo*, UCString, UCString, PropertyInfo const**, Value**)
{
	return 0;
}

long DUIXmlParser::GetValueParser(ParserTools::ValueParser**)
{
	return 0;
}

long WINAPI DUIXmlParser::GetXmlLiteDll(HINSTANCE*)
{
	return 0;
}

long DUIXmlParser::Initialize()
{
	return 0;
}

long DUIXmlParser::InitializeParserFromXmlLiteReader(IXmlReader*)
{
	return 0;
}

bool WINAPI DUIXmlParser::IsThemeClassName(const ParserTools::ExprNode*)
{
	return false;
}

long DUIXmlParser::MapPropertyEnumValue(const EnumMap*, UCString, int*)
{
	return 0;
}

long DUIXmlParser::MapPropertyNameToPropertyInfo(LINEINFO, IClassInfo*, UCString, const PropertyInfo**)
{
	return 0;
}

long DUIXmlParser::ParseARGBColor(const ParserTools::ExprNode*, unsigned long*)
{
	return 0;
}

long DUIXmlParser::ParseArgs(const ParserTools::ExprNode*, ParsedArg*, unsigned int, const char*)
{
	return 0;
}

long DUIXmlParser::ParseAtomValue(const ParserTools::ExprNode*, Value**)
{
	return 0;
}

long DUIXmlParser::ParseBoolValue(const ParserTools::ExprNode*, Value**)
{
	return 0;
}

long DUIXmlParser::ParseColor(const ParserTools::ExprNode*, unsigned long*)
{
	return 0;
}

long DUIXmlParser::ParseDFCFill(const ParserTools::ExprNode*, Value**)
{
	return 0;
}

long DUIXmlParser::ParseDTBFill(const ParserTools::ExprNode*, Value**)
{
	return 0;
}

long DUIXmlParser::ParseFillValue(const ParserTools::ExprNode*, Value**)
{
	return 0;
}

long DUIXmlParser::ParseFunction(UCString, const ParserTools::ExprNode*, ParsedArg*, unsigned int, const char*)
{
	return 0;
}

long DUIXmlParser::ParseGTCColor(const ParserTools::ExprNode*, unsigned long*)
{
	return 0;
}

long DUIXmlParser::ParseGTFStr(const ParserTools::ExprNode*, Value**)
{
	return 0;
}

long DUIXmlParser::ParseGTMarRect(const ParserTools::ExprNode*, LPRECT)
{
	return 0;
}

long DUIXmlParser::ParseGTMetInt(const ParserTools::ExprNode*, int*)
{
	return 0;
}

long DUIXmlParser::ParseGradientFill(const ParserTools::ExprNode*, Value**)
{
	return 0;
}

long DUIXmlParser::ParseGraphicGraphic(const ParserTools::ExprNode*, Value**)
{
	return 0;
}

long DUIXmlParser::ParseGraphicHelper(bool, const ParserTools::ExprNode*, Value**)
{
	return 0;
}

long DUIXmlParser::ParseGraphicValue(const ParserTools::ExprNode*, Value**)
{
	return 0;
}

long DUIXmlParser::ParseIconGraphic(const ParserTools::ExprNode*, Value**)
{
	return 0;
}

long DUIXmlParser::ParseImageGraphic(const ParserTools::ExprNode*, Value**)
{
	return 0;
}

long DUIXmlParser::ParseIntValue(const ParserTools::ExprNode*, Value**)
{
	return 0;
}

long DUIXmlParser::ParseLayoutValue(const ParserTools::ExprNode*)
{
	return 0;
}

long DUIXmlParser::ParseLibrary(const ParserTools::ExprNode*, HINSTANCE*)
{
	return 0;
}

long DUIXmlParser::ParseLiteral(const ParserTools::ExprNode*, UCString*)
{
	return 0;
}

long DUIXmlParser::ParseLiteralColor(UCString, unsigned long*)
{
	return 0;
}

long DUIXmlParser::ParseLiteralColorInt(UCString, int*)
{
	return 0;
}

long DUIXmlParser::ParseLiteralNumber(UCString, int*)
{
	return 0;
}

long DUIXmlParser::ParseMagnitude(UCString, int*)
{
	return 0;
}

long DUIXmlParser::ParseNumber(const ParserTools::ExprNode*, int*)
{
	return 0;
}

long DUIXmlParser::ParsePointValue(const ParserTools::ExprNode*, Value**)
{
	return 0;
}

long DUIXmlParser::ParseQuotedString(const ParserTools::ExprNode*, UCString*)
{
	return 0;
}

long DUIXmlParser::ParseRGBColor(const ParserTools::ExprNode*, unsigned long*)
{
	return 0;
}

long DUIXmlParser::ParseRect(const ParserTools::ExprNode*, LPRECT)
{
	return 0;
}

long DUIXmlParser::ParseRectRect(const ParserTools::ExprNode*, LPRECT)
{
	return 0;
}

long DUIXmlParser::ParseRectValue(const ParserTools::ExprNode*, Value**)
{
	return 0;
}

long DUIXmlParser::ParseResStr(const ParserTools::ExprNode*, Value**)
{
	return 0;
}

long DUIXmlParser::ParseResid(const ParserTools::ExprNode*, UCString*)
{
	return 0;
}

long DUIXmlParser::ParseSGraphicGraphic(const ParserTools::ExprNode*, Value**)
{
	return 0;
}

long DUIXmlParser::ParseSGraphicHelper(bool, const ParserTools::ExprNode*, Value**)
{
	return 0;
}

long DUIXmlParser::ParseSizeValue(const ParserTools::ExprNode*, Value**)
{
	return 0;
}

long DUIXmlParser::ParseStringValue(const ParserTools::ExprNode*, Value**)
{
	return 0;
}

long DUIXmlParser::ParseStyleSheets(IXmlReader*)
{
	return 0;
}

long DUIXmlParser::ParseSysMetricInt(const ParserTools::ExprNode*, int*)
{
	return 0;
}

long DUIXmlParser::ParseSysMetricStr(const ParserTools::ExprNode*, Value**)
{
	return 0;
}

long DUIXmlParser::ParseTheme(const ParserTools::ExprNode*, void**)
{
	return 0;
}

int WINAPI DUIXmlParser::QuerySysMetric(int)
{
	return 0;
}

UCString WINAPI DUIXmlParser::QuerySysMetricStr(int, UString, unsigned int)
{
	return UString();
}

void DUIXmlParser::ReturnValueParser(ParserTools::ValueParser*)
{
}

void DUIXmlParser::SendParseError(UCString, UCString, int, int, long)
{
}

void DUIXmlParser::SendParseError(UCString, UCString, IXmlReader*, long)
{
}

void DUIXmlParser::_LeaveOnCurrentThread()
{
}

long DUIXmlParser::_RecordElementLayout(IXmlReader*, UCString)
{
	return 0;
}

long DUIXmlParser::_RecordElementStyleSheet(UCString, bool)
{
	return 0;
}

long DUIXmlParser::_RecordElementTrees(IXmlReader*)
{
	return 0;
}

long DUIXmlParser::_RecordElementWithChildren(IXmlReader*, bool, UString*)
{
	return 0;
}

long DUIXmlParser::_RecordInstantiateElement(IXmlReader*, UString*)
{
	return 0;
}

long DUIXmlParser::_RecordSetElementProperties(IXmlReader*)
{
	return 0;
}

long DUIXmlParser::_RecordSetValue(IXmlReader*, UCString, UCString)
{
	return 0;
}

void DUIXmlParser::SetParseState(_DUI_PARSE_STATE)
{
}

/*template<typename T>
DUIXmlParser::FunctionDefinition<T> & DUIXmlParser::FunctionDefinition<T>::operator=(const FunctionDefinition<T> &)
{
	// TODO: 在此处插入 return 语句
	return *this;
}*/

NativeHWNDHost::NativeHWNDHost(const NativeHWNDHost&)
{
}

NativeHWNDHost::NativeHWNDHost()
{
}

NativeHWNDHost::~NativeHWNDHost()
{
}

LRESULT NativeHWNDHost::WndProc(HWND, UINT, WPARAM, LPARAM)
{
	return LRESULT();
}

NativeHWNDHost& NativeHWNDHost::operator=(const NativeHWNDHost&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

UINT WINAPI NativeHWNDHost::AsyncDestroyMsg()
{
	return 0;
}

HRESULT NativeHWNDHost::Create(UCString lpClassName, UCString lpWindowName, HWND hWndParent, HICON hIcon, int x, int y, int nWidth, int nHeight, int dwExStyle, int dwStyle, HINSTANCE, UINT, NativeHWNDHost** out)
{
	return E_NOTIMPL;
}

HRESULT NativeHWNDHost::Create(UCString lpWindowName, HWND hWndParent, HICON hIcon, int x, int y, int nWidth, int nHeight, int dwExStyle, int dwStyle, unsigned int, NativeHWNDHost** out)
{
	return E_NOTIMPL;
}

void NativeHWNDHost::Destroy()
{
}

void NativeHWNDHost::DestroyWindow()
{
}

Element* NativeHWNDHost::GetElement()
{
	return nullptr;
}

HWND NativeHWNDHost::GetHWND()
{
	return HWND();
}

void NativeHWNDHost::HideWindow()
{
}

void NativeHWNDHost::Host(Element*)
{
}

HRESULT NativeHWNDHost::Initialize(UCString lpClassName, UCString lpWindowName, HWND hWndParent, HICON hIcon, int x, int y, int nWidth, int nHeight, int dwExStyle, int dwStyle, HINSTANCE, UINT)
{
	return E_NOTIMPL;
}

HRESULT NativeHWNDHost::Initialize(UCString, HWND, HICON, int, int, int, int, int, int, UINT)
{
	return E_NOTIMPL;
}

HRESULT NativeHWNDHost::OnMessage(UINT uMsg, WPARAM wParam, LPARAM lParam, LRESULT*)
{
	return E_NOTIMPL;
}

int NativeHWNDHost::RestoreFocus()
{
	return 0;
}

void NativeHWNDHost::SaveFocus()
{
}

void NativeHWNDHost::SetDefaultFocusID(UCString)
{
}

void NativeHWNDHost::ShowWindow(int)
{
}

HWNDHostAccessible::HWNDHostAccessible()
{
}

HWNDHostAccessible::~HWNDHostAccessible()
{
}

long HWNDHostAccessible::Initialize(Element*, IAccessible*)
{
	return 0;
}

HRESULT HWNDHostAccessible::Create(Element*, IAccessible*, DuiAccessible**)
{
	return E_NOTIMPL;
}

HRESULT HWNDHostAccessible::GetIdentityString(unsigned long, unsigned char**, unsigned long*)
{
	return E_NOTIMPL;
}

HRESULT HWNDHostAccessible::Clone(IEnumVARIANT**)
{
	return E_NOTIMPL;
}

HRESULT HWNDHostAccessible::ContextSensitiveHelp(int)
{
	return E_NOTIMPL;
}

HRESULT HWNDHostAccessible::Disconnect()
{
	return E_NOTIMPL;
}

HRESULT HWNDHostAccessible::GetWindow(HWND*)
{
	return E_NOTIMPL;
}

HRESULT HWNDHostAccessible::Next(unsigned long, VARIANT*, unsigned long*)
{
	return E_NOTIMPL;
}

HRESULT HWNDHostAccessible::QueryInterface(const IID&, void**)
{
	return E_NOTIMPL;
}

HRESULT HWNDHostAccessible::QueryService(const IID&, const IID&, void**)
{
	return E_NOTIMPL;
}

HRESULT HWNDHostAccessible::Reset()
{
	return E_NOTIMPL;
}

HRESULT HWNDHostAccessible::Skip(unsigned long)
{
	return E_NOTIMPL;
}

HRESULT HWNDHostAccessible::accDoDefaultAction(VARIANT)
{
	return E_NOTIMPL;
}

HRESULT HWNDHostAccessible::accHitTest(long, long, VARIANT*)
{
	return E_NOTIMPL;
}

HRESULT HWNDHostAccessible::accLocation(long*, long*, long*, long*, VARIANT)
{
	return E_NOTIMPL;
}

HRESULT HWNDHostAccessible::accNavigate(long, VARIANT, VARIANT*)
{
	return E_NOTIMPL;
}

HRESULT HWNDHostAccessible::accSelect(long, VARIANT)
{
	return E_NOTIMPL;
}

HRESULT HWNDHostAccessible::get_accChild(VARIANT, IDispatch**)
{
	return E_NOTIMPL;
}

HRESULT HWNDHostAccessible::get_accChildCount(long*)
{
	return E_NOTIMPL;
}

HRESULT HWNDHostAccessible::get_accDefaultAction(VARIANT, BSTR*)
{
	return E_NOTIMPL;
}

HRESULT HWNDHostAccessible::get_accDescription(VARIANT, BSTR*)
{
	return E_NOTIMPL;
}

HRESULT HWNDHostAccessible::get_accFocus(VARIANT*)
{
	return E_NOTIMPL;
}

HRESULT HWNDHostAccessible::get_accHelp(VARIANT, BSTR*)
{
	return E_NOTIMPL;
}

HRESULT HWNDHostAccessible::get_accHelpTopic(BSTR*, VARIANT, long*)
{
	return E_NOTIMPL;
}

HRESULT HWNDHostAccessible::get_accKeyboardShortcut(VARIANT, BSTR*)
{
	return E_NOTIMPL;
}

HRESULT HWNDHostAccessible::get_accName(VARIANT, BSTR*)
{
	return E_NOTIMPL;
}

HRESULT HWNDHostAccessible::get_accParent(IDispatch**)
{
	return E_NOTIMPL;
}

HRESULT HWNDHostAccessible::get_accRole(VARIANT, VARIANT*)
{
	return E_NOTIMPL;
}

HRESULT HWNDHostAccessible::get_accSelection(VARIANT*)
{
	return E_NOTIMPL;
}

HRESULT HWNDHostAccessible::get_accState(VARIANT, VARIANT*)
{
	return E_NOTIMPL;
}

HRESULT HWNDHostAccessible::get_accValue(VARIANT, BSTR*)
{
	return E_NOTIMPL;
}

HRESULT HWNDHostAccessible::put_accName(VARIANT, BSTR)
{
	return E_NOTIMPL;
}

HRESULT HWNDHostAccessible::put_accValue(VARIANT, BSTR)
{
	return E_NOTIMPL;
}

HWNDHostClientAccessible::HWNDHostClientAccessible()
{
}

HWNDHostClientAccessible::~HWNDHostClientAccessible()
{
}

HRESULT HWNDHostClientAccessible::Create(Element*, IAccessible*, DuiAccessible**)
{
	return E_NOTIMPL;
}

HRESULT HWNDHostClientAccessible::accNavigate(long, VARIANT, LPVARIANT)
{
	return E_NOTIMPL;
}

HRESULT HWNDHostClientAccessible::get_accParent(IDispatch**)
{
	return E_NOTIMPL;
}

HRESULT HWNDHostClientAccessible::get_accRole(VARIANT, VARIANT*)
{
	return E_NOTIMPL;
}

HWNDElementAccessible::HWNDElementAccessible()
{
}

HWNDElementAccessible::~HWNDElementAccessible()
{
}

long HWNDElementAccessible::Initialize(HWNDElement*)
{
	return 0;
}

HRESULT HWNDElementAccessible::Create(HWNDElement*, DuiAccessible**)
{
	return E_NOTIMPL;
}

HRESULT HWNDElementAccessible::Disconnect()
{
	return E_NOTIMPL;
}

HRESULT HWNDElementAccessible::get_accParent(IDispatch**)
{
	return E_NOTIMPL;
}

AccessibleButton::AccessibleButton(const AccessibleButton&)
{
}

AccessibleButton::AccessibleButton()
{
}

AccessibleButton::~AccessibleButton()
{
}

AccessibleButton& AccessibleButton::operator=(const AccessibleButton&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

HRESULT AccessibleButton::Create(Element*, unsigned long*, Element**)
{
	return E_NOTIMPL;
}

IClassInfo* AccessibleButton::GetClassInfoPtr()
{
	return nullptr;
}

void AccessibleButton::OnPropertyChanged(const PropertyInfo*, int, Value*, Value*)
{
}

IClassInfo* AccessibleButton::GetClassInfoW()
{
	return nullptr;
}

long AccessibleButton::Initialize(Element*, unsigned long*)
{
	return 0;
}

void AccessibleButton::Recalc()
{
}

HRESULT AccessibleButton::Register()
{
	return E_NOTIMPL;
}

void AccessibleButton::SetClassInfoPtr(IClassInfo*)
{
}

AccessibleButton::ACCESSIBLEROLE& AccessibleButton::ACCESSIBLEROLE::operator=(const AccessibleButton::ACCESSIBLEROLE&)
{
	return *this;
}

const AccessibleButton::ACCESSIBLEROLE* WINAPI AccessibleButton::FindAccessibleRole(int)
{
	return nullptr;
}

const AccessibleButton::ACCESSIBLEROLE* __ptr32 AccessibleButton::c_rgar;
IClassInfo* AccessibleButton::s_pClassInfo;

AutoButton::AutoButton(const AutoButton&)
{
}

AutoButton::AutoButton()
{
}

AutoButton& AutoButton::operator=(const AutoButton&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

AutoButton::~AutoButton()
{
}

long AutoButton::Create(Element*, unsigned long*, Element**)
{
	return 0;
}

IClassInfo* AutoButton::GetClassInfoPtr()
{
	return nullptr;
}

long AutoButton::Register()
{
	return 0;
}

void __stdcall AutoButton::SetClassInfoPtr(IClassInfo*)
{
}

UID AutoButton::Toggle()
{
	return UID();
}

IClassInfo* AutoButton::GetClassInfoW()
{
	return nullptr;
}

void AutoButton::OnEvent(Event*)
{
}

long AutoButton::Initialize(Element*, unsigned long*)
{
	return 0;
}

IClassInfo* AutoButton::s_pClassInfo;

AutoLock::AutoLock(LPCRITICAL_SECTION lpCriticalSection)
{
}

AutoLock& AutoLock::operator=(const AutoLock&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

AutoLock::~AutoLock()
{
}

AutoThread::AutoThread()
{
}

AutoThread::~AutoThread()
{
}

AutoThread& AutoThread::operator=(const AutoThread&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

HRESULT AutoThread::Init()
{
	return E_NOTIMPL;
}

AutoVariant::AutoVariant()
{
}

AutoVariant& AutoVariant::operator=(const AutoVariant&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

AutoVariant::~AutoVariant()
{
}

BorderLayout::BorderLayout(const BorderLayout&)
{
}

BorderLayout::BorderLayout(void)
{
}

BorderLayout::~BorderLayout(void)
{
}

BorderLayout& BorderLayout::operator=(const BorderLayout&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

long BorderLayout::Create(int, int*, Value**)
{
	return 0;
}

long BorderLayout::Create(Layout**)
{
	return 0;
}

void BorderLayout::DoLayout(Element*, int, int)
{
}

Element* BorderLayout::GetAdjacent(Element*, Element*, int, const NavReference*, unsigned long)
{
	return nullptr;
}

void BorderLayout::Initialize(void)
{
}

void BorderLayout::OnAdd(Element*, Element**, unsigned int)
{
}

void BorderLayout::OnLayoutPosChanged(Element*, Element*, int, int)
{
}

void BorderLayout::OnRemove(Element*, Element**, unsigned int)
{
}

SIZE BorderLayout::UpdateDesiredSize(Element*, int, int, Surface*)
{
	return SIZE();
}

void BorderLayout::SetClient(Element*)
{
}

Layout::Layout(const Layout&)
{
}

Layout::Layout()
{
}

Layout& Layout::operator=(const Layout&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

HRESULT Layout::Create(Layout**)
{
	return E_NOTIMPL;
}

void Layout::UpdateLayoutRect(Element*, int, int, Element*, int, int, int, int)
{
}

void Layout::Destroy()
{
}

Element* Layout::GetChildFromLayoutIndex(Element*, int, DynamicArray<Element*, 0>*)
{
	return nullptr;
}

unsigned int Layout::GetLayoutChildCount(Element*)
{
	return 0;
}

int Layout::GetLayoutIndexFromChild(Element*, Element*)
{
	return 0;
}

void Layout::Initialize()
{
}

void Layout::DoLayout(Element*, int, int)
{
}

SIZE Layout::UpdateDesiredSize(Element*, int, int, Surface*)
{
	return SIZE();
}

void Layout::OnAdd(Element*, Element**, unsigned int)
{
}

void Layout::OnRemove(Element*, Element**, unsigned int)
{
}

void Layout::OnLayoutPosChanged(Element*, Element*, int, int)
{
}

void Layout::Attach(Element*)
{
}

void Layout::Detach(Element*)
{
}

Element* Layout::GetAdjacent(Element*, Element*, int, NavReference const*, unsigned long)
{
	return nullptr;
}

Layout::~Layout()
{
}

void Layout::ClearCacheDirty()
{
}

bool Layout::IsCacheDirty()
{
	return false;
}

void Layout::SetCacheDirty()
{
}

FillLayout::FillLayout(FillLayout const&)
{
}

FillLayout::FillLayout()
{
}

FillLayout::~FillLayout()
{
}

FillLayout& FillLayout::operator=(FillLayout const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

HRESULT FillLayout::Create(int, int*, Value**)
{
	return E_NOTIMPL;
}

HRESULT FillLayout::Create(Layout**)
{
	return E_NOTIMPL;
}

void FillLayout::Initialize()
{
}

void FillLayout::DoLayout(Element*, int, int)
{
}

Element* FillLayout::GetAdjacent(Element*, Element*, int, NavReference const*, unsigned long)
{
	return nullptr;
}

SIZE FillLayout::UpdateDesiredSize(Element*, int, int, Surface*)
{
	return SIZE();
}

GridLayout::GridLayout(GridLayout const&)
{
}

GridLayout::GridLayout(void)
{
}

GridLayout::~GridLayout(void)
{
}

GridLayout& GridLayout::operator=(GridLayout const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

long GridLayout::Create(int, int, Layout**)
{
	return 0;
}

long GridLayout::Create(int, int*, Value**)
{
	return 0;
}

void GridLayout::Initialize(int, int)
{
}

void GridLayout::DoLayout(Element*, int, int)
{
}

Element* GridLayout::GetAdjacent(Element*, Element*, int, NavReference const*, unsigned long)
{
	return nullptr;
}

SIZE GridLayout::UpdateDesiredSize(Element*, int, int, Surface*)
{
	return SIZE();
}

unsigned int GridLayout::GetCurrentCols(int)
{
	return 0;
}

unsigned int GridLayout::GetCurrentCols(Element*)
{
	return 0;
}

unsigned int GridLayout::GetCurrentRows(int)
{
	return 0;
}

unsigned int GridLayout::GetCurrentRows(Element*)
{
	return 0;
}

FlowLayout::FlowLayout(FlowLayout const&)
{
}

FlowLayout::FlowLayout(void)
{
}

FlowLayout::~FlowLayout(void)
{
}

FlowLayout& FlowLayout::operator=(FlowLayout const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

long FlowLayout::Create(int, int*, Value**)
{
	return 0;
}

long FlowLayout::Create(bool, unsigned int, unsigned int, unsigned int, Layout**)
{
	return 0;
}

int FlowLayout::GetLine(Element*, Element*)
{
	return 0;
}

void FlowLayout::Initialize(bool, unsigned int, unsigned int, unsigned int)
{
}

void FlowLayout::DoLayout(Element*, int, int)
{
}

Element* FlowLayout::GetAdjacent(Element*, Element*, int, NavReference const*, unsigned long)
{
	return nullptr;
}

SIZE FlowLayout::UpdateDesiredSize(Element*, int, int, Surface*)
{
	return SIZE();
}

SIZE FlowLayout::SizeZero(void)
{
	return SIZE();
}

SIZE FlowLayout::BuildCacheInfo(Element*, int, int, Surface*, bool)
{
	return SIZE();
}

RowLayout::RowLayout(RowLayout const&)
{
}

RowLayout::RowLayout(void)
{
}

RowLayout::~RowLayout(void)
{
}

RowLayout& RowLayout::operator=(RowLayout const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

long RowLayout::Create(int, unsigned int, unsigned int, Layout**)
{
	return 0;
}

long RowLayout::Create(int, int*, Value**)
{
	return 0;
}

long RowLayout::Create(unsigned int, unsigned int, Layout**)
{
	return 0;
}

long RowLayout::Initialize(int, unsigned int, unsigned int)
{
	return 0;
}

void RowLayout::DoLayout(Element*, int, int)
{
}

Element* RowLayout::GetAdjacent(Element*, Element*, int, NavReference const*, unsigned long)
{
	return nullptr;
}

tagSIZE RowLayout::UpdateDesiredSize(Element*, int, int, Surface*)
{
	return tagSIZE();
}

NineGridLayout::NineGridLayout(NineGridLayout const&)
{
}

NineGridLayout::NineGridLayout(void)
{
}

NineGridLayout::~NineGridLayout(void)
{
}

NineGridLayout& NineGridLayout::operator=(NineGridLayout const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

long NineGridLayout::Create(int, int*, Value**)
{
	return 0;
}

long NineGridLayout::Create(Layout**)
{
	return 0;
}

void NineGridLayout::Initialize(void)
{
}

void NineGridLayout::DoLayout(Element*, int, int)
{
}

Element* NineGridLayout::GetAdjacent(Element*, Element*, int, NavReference const*, unsigned long)
{
	return nullptr;
}

void NineGridLayout::OnAdd(Element*, Element**, unsigned int)
{
}

void NineGridLayout::OnLayoutPosChanged(Element*, Element*, int, int)
{
}

void NineGridLayout::OnRemove(Element*, Element**, unsigned int)
{
}

SIZE NineGridLayout::UpdateDesiredSize(Element*, int, int, Surface*)
{
	return SIZE();
}

void NineGridLayout::_UpdateTileList(int, Element*)
{
}

ShellBorderLayout::ShellBorderLayout(ShellBorderLayout const&)
{
}

ShellBorderLayout::ShellBorderLayout(void)
{
}

ShellBorderLayout::~ShellBorderLayout(void)
{
}

ShellBorderLayout& ShellBorderLayout::operator=(ShellBorderLayout const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

long ShellBorderLayout::Create(int, int*, Value**)
{
	return 0;
}

long ShellBorderLayout::Create(Layout**)
{
	return 0;
}

Element* ShellBorderLayout::GetAdjacent(Element*, Element*, int, NavReference const*, unsigned long)
{
	return nullptr;
}

void ShellBorderLayout::OnAdd(Element*, Element**, unsigned int)
{
}

void ShellBorderLayout::OnLayoutPosChanged(Element*, Element*, int, int)
{
}

void ShellBorderLayout::OnRemove(Element*, Element**, unsigned int)
{
}

long ShellBorderLayout::_CalcTabOrder(Element*)
{
	return 0;
}

void ShellBorderLayout::_Reset(void)
{
}

TableLayout::TableLayout(TableLayout const&)
{
}

TableLayout::TableLayout(void)
{
}

TableLayout::~TableLayout(void)
{
}

TableLayout& TableLayout::operator=(TableLayout const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

long TableLayout::Create(int, int*, Value**)
{
	return 0;
}

long TableLayout::InternalCreate(int, int, int, int*, Layout**)
{
	return 0;
}

CellInfo* TableLayout::GetCellInfo(int)
{
	return nullptr;
}

void TableLayout::Initialize(int, int, int, int*)
{
}

void TableLayout::DoLayout(Element*, int, int)
{
}

Element* TableLayout::GetAdjacent(Element*, Element*, int, NavReference const*, unsigned long)
{
	return nullptr;
}

SIZE TableLayout::UpdateDesiredSize(Element*, int, int, Surface*)
{
	return SIZE();
}

VerticalFlowLayout::VerticalFlowLayout(VerticalFlowLayout const&)
{
}

VerticalFlowLayout::VerticalFlowLayout()
{
}

VerticalFlowLayout::~VerticalFlowLayout()
{
}

VerticalFlowLayout& VerticalFlowLayout::operator=(VerticalFlowLayout const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

HRESULT VerticalFlowLayout::Create(int, int*, Value**)
{
	return E_NOTIMPL;
}

HRESULT VerticalFlowLayout::Create(bool, unsigned int horAlign, unsigned int, unsigned int vertAlign, Layout**)
{
	return E_NOTIMPL;
}

int VerticalFlowLayout::GetLine(Element*, Element*)
{
	return 0;
}

void VerticalFlowLayout::Initialize(bool, unsigned int, unsigned int, unsigned int)
{
}

void VerticalFlowLayout::DoLayout(Element*, int, int)
{
}

Element* VerticalFlowLayout::GetAdjacent(Element*, Element*, int, NavReference const*, unsigned long)
{
	return nullptr;
}

SIZE VerticalFlowLayout::UpdateDesiredSize(Element*, int, int, Surface*)
{
	return SIZE();
}

SIZE VerticalFlowLayout::BuildCacheInfo(Element*, int, int, Surface*, bool)
{
	return SIZE();
}

SIZE VerticalFlowLayout::SizeZero(void)
{
	return SIZE();
}

AnimationStrip::AnimationStrip(const AnimationStrip&)
{
}

AnimationStrip::AnimationStrip()
{
}

AnimationStrip& AnimationStrip::operator=(const AnimationStrip&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

AnimationStrip::~AnimationStrip()
{
}

long AnimationStrip::Create(Element*, unsigned long*, Element**)
{
	return 0;
}

const PropertyInfo* AnimationStrip::FrameDurationProp()
{
	return nullptr;
}

const PropertyInfo* AnimationStrip::FrameIndexProp()
{
	return nullptr;
}

const PropertyInfo* AnimationStrip::FrameWidthProp()
{
	return nullptr;
}

IClassInfo* AnimationStrip::GetClassInfoPtr()
{
	return nullptr;
}

const PropertyInfo* AnimationStrip::PlayProp(void)
{
	return nullptr;
}

long AnimationStrip::Register()
{
	return 0;
}

void AnimationStrip::SetClassInfoPtr(IClassInfo*)
{
}

int AnimationStrip::GetFrameDuration()
{
	return 0;
}

int AnimationStrip::GetFrameIndex()
{
	return 0;
}

int AnimationStrip::GetFrameWidth()
{
	return 0;
}

bool AnimationStrip::GetPlay()
{
	return false;
}

long AnimationStrip::Initialize(unsigned int, Element*, unsigned long*)
{
	return 0;
}

long AnimationStrip::SetFrameDuration(int)
{
	return 0;
}

long AnimationStrip::SetFrameIndex(int)
{
	return 0;
}

long AnimationStrip::SetFrameWidth(int)
{
	return 0;
}

long AnimationStrip::SetPlay(bool)
{
	return 0;
}

IClassInfo* AnimationStrip::GetClassInfoW()
{
	return nullptr;
}

void AnimationStrip::OnDestroy(void)
{
}

void AnimationStrip::OnPropertyChanged(const PropertyInfo*, int, Value*, Value*)
{
}

void AnimationStrip::Paint(HDC, const RECT*, const RECT*, RECT*, RECT*)
{
}

void AnimationStrip::AdvanceFrame(void)
{
}

long AnimationStrip::LoadImagesIntoAnimationStrip()
{
	return 0;
}

void AnimationStrip::OnAction(GMA_ACTIONINFO*)
{
}

void AnimationStrip::RawActionProc(GMA_ACTIONINFO*)
{
}

long AnimationStrip::LoadCommonControlExports()
{
	return 0;
}

long AnimationStrip::Start()
{
	return 0;
}

void AnimationStrip::Stop()
{
}

void AnimationStrip::UnloadCommonControlExports()
{
}

IClassInfo* AnimationStrip::s_pClassInfo;

ClassInfoBase::ClassInfoBase() STUB_VOID;
ClassInfoBase::~ClassInfoBase() STUB_VOID;
HRESULT ClassInfoBase::Initialize(HINSTANCE hModule, const WCHAR* pszName, bool fGlobal, const PropertyInfo* const* ppPI, UINT cPI) STUB_ZERO;
HRESULT ClassInfoBase::Register() STUB_ZERO;
bool ClassInfoBase::ClassExist(IClassInfo** ppCI, const PropertyInfo* const* ppPI, UINT cPI, IClassInfo* pCIBase, HMODULE hModule, const WCHAR* pszName, bool fGlobal) STUB_ZERO;
void ClassInfoBase::AddRef() STUB_VOID;
int ClassInfoBase::Release() STUB_ZERO;
const PropertyInfo* ClassInfoBase::EnumPropertyInfo(UINT) STUB_ZERO;
const PropertyInfo* ClassInfoBase::GetByClassIndex(UINT) STUB_ZERO;
UINT ClassInfoBase::GetPICount() const STUB_ZERO;
UINT ClassInfoBase::GetGlobalIndex() const STUB_ZERO;
UCString ClassInfoBase::GetName() const STUB_ZERO;
bool ClassInfoBase::IsValidProperty(const PropertyInfo* ppi) const STUB_ZERO;
bool ClassInfoBase::IsSubclassOf(IClassInfo* pci) const STUB_ZERO;
void ClassInfoBase::Destroy() STUB_VOID;
HINSTANCE ClassInfoBase::GetModule() const STUB_ZERO;
bool ClassInfoBase::IsGlobal() const STUB_ZERO;
void ClassInfoBase::AddChild() STUB_VOID;
void ClassInfoBase::RemoveChild() STUB_VOID;
int ClassInfoBase::GetChildren() const STUB_ZERO;
void ClassInfoBase::AssertPIZeroRef() const STUB_VOID;

BaseScrollBar::BaseScrollBar(BaseScrollBar const&)
{
}

BaseScrollBar::BaseScrollBar()
{
}

BaseScrollBar& BaseScrollBar::operator=(BaseScrollBar const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

void BaseScrollBar::LineUp(unsigned int)
{
}

void BaseScrollBar::LineDown(unsigned int)
{
}

void BaseScrollBar::PageUp(unsigned int)
{
}

void BaseScrollBar::PageDown(unsigned int)
{
}

void BaseScrollBar::End()
{
}

void BaseScrollBar::Home()
{
}

bool BaseScrollBar::IsPinned()
{
	return false;
}

bool BaseScrollBar::IsScrollable()
{
	return false;
}

void BaseScrollBar::OnMaximumChanged(Value*)
{
}

void BaseScrollBar::OnMinimumChanged(Value*)
{
}

void BaseScrollBar::OnPageChanged(Value*)
{
}

bool BaseScrollBar::OnPageChanging(Value*)
{
	return false;
}

void BaseScrollBar::OnPositionChanged(Value*)
{
}

bool BaseScrollBar::OnPositionChanging(Value*)
{
	return false;
}

UID BaseScrollBar::Scroll()
{
	return UID();
}

void BaseScrollBar::SetPinned(bool)
{
}

int BaseScrollBar::GetPageInc()
{
	return 0;
}

BaseScrollViewer::BaseScrollViewer() STUB_VOID;
BaseScrollViewer::~BaseScrollViewer() STUB_VOID;
HRESULT BaseScrollViewer::Initialize(Element* pParent, DWORD* pdwDeferCookie) STUB_ZERO;
void BaseScrollViewer::OnEvent(Event* pEvent) STUB_VOID;
void BaseScrollViewer::OnInput(InputEvent* pie) STUB_VOID;
bool BaseScrollViewer::OnPropertyChanging(const PropertyInfo* ppi, int iIndex, Value* pvOld, Value* pvNew) STUB_ZERO;
void BaseScrollViewer::OnPropertyChanged(const PropertyInfo* ppi, int iIndex, Value* pvOld, Value* pvNew) STUB_VOID;
HRESULT BaseScrollViewer::Add(Element** ppe, UINT cCount) STUB_ZERO;
void BaseScrollViewer::OnListenerAttach(Element* peFrom) STUB_VOID;
void BaseScrollViewer::OnListenerDetach(Element* peFrom) STUB_VOID;
bool BaseScrollViewer::OnListenedPropertyChanging(Element* peFrom, const PropertyInfo* ppi, int iIndex, Value* pvOld, Value* pvNew) STUB_ZERO;
void BaseScrollViewer::OnListenedPropertyChanged(Element* peFrom, const PropertyInfo* ppi, int iIndex, Value* pvOld, Value* pvNew) STUB_VOID;
void BaseScrollViewer::OnListenedInput(Element* peFrom, InputEvent* pInput) STUB_VOID;
void BaseScrollViewer::OnListenedEvent(Element* peFrom, Event* pEvent) STUB_VOID;
const PropertyInfo* BaseScrollViewer::XOffsetProp() STUB_ZERO;
const PropertyInfo* BaseScrollViewer::YOffsetProp() STUB_ZERO;
const PropertyInfo* BaseScrollViewer::XScrollableProp() STUB_ZERO;
const PropertyInfo* BaseScrollViewer::YScrollableProp() STUB_ZERO;
const PropertyInfo* BaseScrollViewer::XBarVisibilityProp() STUB_ZERO;
const PropertyInfo* BaseScrollViewer::YBarVisibilityProp() STUB_ZERO;
const PropertyInfo* BaseScrollViewer::PinningProp() STUB_ZERO;
int BaseScrollViewer::GetXOffset() STUB_ZERO;
int BaseScrollViewer::GetYOffset() STUB_ZERO;
bool BaseScrollViewer::GetXScrollable() STUB_ZERO;
bool BaseScrollViewer::GetYScrollable() STUB_ZERO;
int BaseScrollViewer::GetXBarVisibility() STUB_ZERO;
int BaseScrollViewer::GetYBarVisibility() STUB_ZERO;
int BaseScrollViewer::GetPinning() STUB_ZERO;
int BaseScrollViewer::GetXScrollHeight() STUB_ZERO;
int BaseScrollViewer::GetYScrollWidth() STUB_ZERO;
HRESULT BaseScrollViewer::SetXOffset(int v) STUB_ZERO;
HRESULT BaseScrollViewer::SetYOffset(int v) STUB_ZERO;
HRESULT BaseScrollViewer::SetXScrollable(bool v) STUB_ZERO;
HRESULT BaseScrollViewer::SetYScrollable(bool v) STUB_ZERO;
HRESULT BaseScrollViewer::SetXBarVisibility(int v) STUB_ZERO;
HRESULT BaseScrollViewer::SetYBarVisibility(int v) STUB_ZERO;
HRESULT BaseScrollViewer::SetPinning(int v) STUB_ZERO;
IClassInfo* BaseScrollViewer::GetClassInfoPtr() STUB_ZERO;
void BaseScrollViewer::SetClassInfoPtr(IClassInfo* pClass) STUB_VOID;
IClassInfo* BaseScrollViewer::s_pClassInfo;
IClassInfo* BaseScrollViewer::GetClassInfoW() STUB_ZERO;
HRESULT BaseScrollViewer::Register() STUB_ZERO;
void BaseScrollViewer::FireAnimationChangeEvent(bool fStart) STUB_VOID;
void BaseScrollViewer::CheckScroll(BaseScrollBar* psb, BOOL fScrollable, int iVisibility, BOOL fPreventLoop) STUB_VOID;

Bind::Bind(const Bind&)
{
}

Bind::Bind(void)
{
}

Bind& Bind::operator=(const Bind&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

Bind::~Bind(void)
{
}

const PropertyInfo* Bind::ConnectProp(void)
{
	return nullptr;
}

long Bind::Create(Element*, unsigned long*, Element**)
{
	return 0;
}

IClassInfo* Bind::GetClassInfoPtr(void)
{
	return nullptr;
}

const PropertyInfo* Bind::PropertyProp(void)
{
	return nullptr;
}

long Bind::Register(void)
{
	return 0;
}

void Bind::SetClassInfoPtr(IClassInfo*)
{
}

IClassInfo* Bind::GetClassInfoW(void)
{
	return nullptr;
}

UCString Bind::GetConnect(Value**)
{
	return UCString();
}

UCString Bind::GetProperty(Value**)
{
	return UCString();
}

long Bind::Initialize(Element*, unsigned long*)
{
	return 0;
}

long Bind::SetConnect(UCString)
{
	return 0;
}

long Bind::SetProperty(UCString)
{
	return 0;
}

IClassInfo* Bind::s_pClassInfo;

Browser::Browser(const Browser&)
{
}

Browser::Browser(void)
{
}

Browser& Browser::operator=(const Browser&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

Browser::~Browser(void)
{
}

long Browser::Create(Element*, unsigned long*, Element**)
{
	return 0;
}

UID Browser::Entered(void)
{
	return UID();
}

IClassInfo* Browser::GetClassInfoPtr(void)
{
	return nullptr;
}

UID Browser::Leaving(void)
{
	return UID();
}

long Browser::Register(void)
{
	return 0;
}

void Browser::SetClassInfoPtr(IClassInfo*)
{
}

UID Browser::StartNavigate(void)
{
	return UID();
}

Element* Browser::GetCurrentPage(void)
{
	return nullptr;
}

unsigned short Browser::GetCurrentPageID(void)
{
	return 0;
}

Pages* Browser::GetPages(void)
{
	return nullptr;
}

long Browser::Initialize(Element*, unsigned long*)
{
	return 0;
}

IClassInfo* Browser::GetClassInfoW(void)
{
	return nullptr;
}

void Browser::OnEvent(Event*)
{
}

void Browser::OnPropertyChanged(const PropertyInfo*, int, Value*, Value*)
{
}

int Browser::FireNavigate(unsigned short)
{
	return 0;
}

IClassInfo* Browser::s_pClassInfo;

CallstackTracker::CallstackTracker(void)
{
}

CallstackTracker::~CallstackTracker(void)
{
}

CallstackTracker& CallstackTracker::operator=(CallstackTracker const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

int CallstackTracker::CaptureCallstackFrames(void)
{
	return 0;
}

int CallstackTracker::EnumCallstackFrames(void (__stdcall*)(char const*, char const*, unsigned long, unsigned long))
{
	return 0;
}

void CallstackTracker::Uninit(void)
{
}

int CallstackTracker::Init(void)
{
	return 0;
}

int CallstackTracker::InitFailed(void)
{
	return 0;
}

int CallstackTracker::InitializeDllInfo(void)
{
	return 0;
}

int CallstackTracker::InitializeSymbols(void)
{
	return 0;
}

int CallstackTracker::IsCorrectImageHlpVersion(void)
{
	return 0;
}

int CallstackTracker::DllsLoaded(void)
{
	return 0;
}

void CallstackTracker::FillSymbolInfo(CallstackTracker::STACK_SYMBOL_INFO*, unsigned __int64)
{
}

unsigned __int64 CallstackTracker::GetModuleBase(void*, unsigned __int64)
{
	return 0;
}

int const CallstackTracker::STACKDEPTH = 0;
int const CallstackTracker::INITIALSTACKSKIP = 0;
CallstackTracker::IMGHLPFN_LOAD* __ptr32 CallstackTracker::s_ImageHlpFuncList;
int CallstackTracker::s_fInitFailed;
void* CallstackTracker::s_hProcess;
HINSTANCE CallstackTracker::s_hinstImageHlp;
HINSTANCE CallstackTracker::s_hinstNtDll;
API_VERSION* (__stdcall*CallstackTracker::s_pfnImagehlpApiVersionEx)(API_VERSION*);
unsigned short (__stdcall*CallstackTracker::s_pfnRtlCaptureStackBackTrace)(unsigned long, unsigned long, void* *, unsigned long*);
int (__stdcall*CallstackTracker::s_pfnSymFromAddr)(void*, unsigned __int64, unsigned __int64*, SYMBOL_INFO*);
int (__stdcall*CallstackTracker::s_pfnSymGetModuleInfo64)(void*, unsigned __int64, IMAGEHLP_MODULE64*);
int (__stdcall*CallstackTracker::s_pfnSymInitialize)(void*, char const*, int);
unsigned __int64 (__stdcall*CallstackTracker::s_pfnSymLoadModule64)(void*, void*, char const*, char const*, unsigned __int64, unsigned long);
unsigned long (__stdcall*CallstackTracker::s_pfnSymSetOptions)(unsigned long);

CCAVI::CCAVI(const CCAVI&)
	: CCBase(0, 0)
{
}

CCAVI::CCAVI(void)
	: CCBase(0, 0)
{
}

CCAVI& CCAVI::operator=(const CCAVI&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

CCAVI::~CCAVI(void)
{
}

long CCAVI::Create(unsigned int, Element*, unsigned long*, Element**)
{
	return 0;
}

long CCAVI::Create(Element*, unsigned long*, Element**)
{
	return 0;
}

IClassInfo* CCAVI::GetClassInfoPtr(void)
{
	return nullptr;
}

long CCAVI::Register(void)
{
	return 0;
}

void CCAVI::SetClassInfoPtr(IClassInfo*)
{
}

void CCAVI::Play(HWND)
{
}

void CCAVI::Stop(void)
{
}

IClassInfo* CCAVI::GetClassInfoW(void)
{
	return nullptr;
}

void CCAVI::PostCreate(HWND)
{
}

void CCAVI::OpenAnimation(HWND)
{
}

IClassInfo* CCAVI::s_pClassInfo;


CCBase::CCBase(const CCBase&)
{
}

CCBase::CCBase(unsigned long, UCString)
{
}

CCBase& CCBase::operator=(const CCBase&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

CCBase::~CCBase(void)
{
}

long CCBase::Create(unsigned int, Element*, unsigned long*, Element**)
{
	return 0;
}

long CCBase::Create(Element*, unsigned long*, Element**)
{
	return 0;
}

long CCBase::Register(void)
{
	return 0;
}

void CCBase::SetClassInfoPtr(IClassInfo*)
{
}

IClassInfo* CCBase::GetClassInfoPtr(void)
{
	return nullptr;
}

PropertyInfo const* CCBase::WinStyleProp(void)
{
	return nullptr;
}

int CCBase::GetWinStyle(void)
{
	return 0;
}

long CCBase::Initialize(unsigned int, Element*, unsigned long*)
{
	return 0;
}

void CCBase::SetNotifyHandler(BOOL (WINAPI*)(UINT uMsg, WPARAM wParam, LPARAM lParam, LRESULT* plResult, void* pUserData), void* pUserData)
{
}

long CCBase::SetWinStyle(int)
{
	return 0;
}

void CCBase::OnPropertyChanged(PropertyInfo const*, int, Value*, Value*)
{
}

HWND CCBase::CreateHWND(HWND)
{
	return HWND();
}

long CCBase::DefaultAction(void)
{
	return 0;
}

IClassInfo* CCBase::GetClassInfoW(void)
{
	return nullptr;
}

SIZE CCBase::GetContentSize(int, int, Surface*)
{
	return SIZE();
}

void CCBase::OnInput(InputEvent*)
{
}

bool CCBase::OnNotify(UINT uMsg, WPARAM wParam, LPARAM lParam, LRESULT* plResult)
{
	return false;
}

bool CCBase::OnCustomDraw(NMCUSTOMDRAW*, LRESULT*)
{
	return false;
}

bool CCBase::OnLostDialogFocus(DialogElement*)
{
	return false;
}

bool CCBase::OnReceivedDialogFocus(DialogElement*)
{
	return false;
}

void CCBase::PostCreate(HWND)
{
}

IClassInfo* CCBase::s_pClassInfo;

CCBaseCheckRadioButton::CCBaseCheckRadioButton(const CCBaseCheckRadioButton&)
	: CCPushButton(0)
{
}

CCBaseCheckRadioButton::CCBaseCheckRadioButton(unsigned long)
	: CCPushButton(0)
{
}

CCBaseCheckRadioButton& CCBaseCheckRadioButton::operator=(const CCBaseCheckRadioButton&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

CCBaseCheckRadioButton::~CCBaseCheckRadioButton(void)
{
}

IClassInfo* CCBaseCheckRadioButton::GetClassInfoPtr(void)
{
	return nullptr;
}

long CCBaseCheckRadioButton::Register(void)
{
	return 0;
}

void CCBaseCheckRadioButton::SetClassInfoPtr(IClassInfo*)
{
}

IClassInfo* CCBaseCheckRadioButton::GetClassInfoW(void)
{
	return nullptr;
}

SIZE CCBaseCheckRadioButton::GetContentSize(int, int, Surface*)
{
	return SIZE();
}

bool CCBaseCheckRadioButton::OnLostDialogFocus(DialogElement*)
{
	return false;
}

void CCBaseCheckRadioButton::OnPropertyChanged(PropertyInfo const*, int, Value*, Value*)
{
}

bool CCBaseCheckRadioButton::OnReceivedDialogFocus(DialogElement*)
{
	return false;
}

void CCBaseCheckRadioButton::PostCreate(HWND)
{
}

IClassInfo* CCBaseCheckRadioButton::s_pClassInfo;

CCBaseScrollBar::CCBaseScrollBar(const CCBaseScrollBar&)
	: CCBase(0, 0)
{
}

CCBaseScrollBar::CCBaseScrollBar(unsigned long)
	: CCBase(0, 0)
{
}

CCBaseScrollBar& CCBaseScrollBar::operator=(const CCBaseScrollBar&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

CCBaseScrollBar::~CCBaseScrollBar(void)
{
}

IClassInfo* CCBaseScrollBar::GetClassInfoPtr(void)
{
	return nullptr;
}

const PropertyInfo* CCBaseScrollBar::LineProp(void)
{
	return nullptr;
}

const PropertyInfo* CCBaseScrollBar::MaximumProp(void)
{
	return nullptr;
}

const PropertyInfo* CCBaseScrollBar::MinimumProp(void)
{
	return nullptr;
}

const PropertyInfo* CCBaseScrollBar::PageProp(void)
{
	return nullptr;
}

const PropertyInfo* CCBaseScrollBar::PositionProp(void)
{
	return nullptr;
}

long CCBaseScrollBar::Register(void)
{
	return 0;
}

void CCBaseScrollBar::SetClassInfoPtr(IClassInfo*)
{
}

const PropertyInfo* CCBaseScrollBar::TrackingProp(void)
{
	return nullptr;
}

bool CCBaseScrollBar::GetTracking(void)
{
	return false;
}

long CCBaseScrollBar::Initialize(unsigned int, Element*, unsigned long*)
{
	return 0;
}

long CCBaseScrollBar::SetTracking(bool)
{
	return 0;
}

void CCBaseScrollBar::SyncScrollBar(void)
{
}

HWND CCBaseScrollBar::CreateHWND(HWND)
{
	return HWND();
}

IClassInfo* CCBaseScrollBar::GetClassInfoW(void)
{
	return nullptr;
}

Element* CCBaseScrollBar::GetElement(void)
{
	return nullptr;
}

int CCBaseScrollBar::GetLine(void)
{
	return 0;
}

int CCBaseScrollBar::GetMaximum(void)
{
	return 0;
}

int CCBaseScrollBar::GetMinimum(void)
{
	return 0;
}

int CCBaseScrollBar::GetPage(void)
{
	return 0;
}

int CCBaseScrollBar::GetPosition(void)
{
	return 0;
}

bool CCBaseScrollBar::GetProportional(void)
{
	return false;
}

bool CCBaseScrollBar::OnMessage(UINT message, WPARAM wParam, LPARAM lParam, LRESULT* plResult)
{
	return false;
}

void CCBaseScrollBar::OnPropertyChanged(const PropertyInfo*, int, Value*, Value*)
{
}

bool CCBaseScrollBar::OnPropertyChanging(const PropertyInfo*, int, Value*, Value*)
{
	return false;
}

long CCBaseScrollBar::SetLine(int)
{
	return 0;
}

long CCBaseScrollBar::SetMaximum(int)
{
	return 0;
}

long CCBaseScrollBar::SetMinimum(int)
{
	return 0;
}

long CCBaseScrollBar::SetPage(int)
{
	return 0;
}

long CCBaseScrollBar::SetPosition(int)
{
	return 0;
}

IClassInfo* CCBaseScrollBar::s_pClassInfo;

CCCheckBox::CCCheckBox(const CCCheckBox&)
	: CCBaseCheckRadioButton(0)
{
}

CCCheckBox::CCCheckBox(unsigned long)
	: CCBaseCheckRadioButton(0)
{
}

CCCheckBox& CCCheckBox::operator=(const CCCheckBox&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

CCCheckBox::~CCCheckBox(void)
{
}

long CCCheckBox::Create(unsigned int, Element*, unsigned long*, Element**)
{
	return 0;
}

long CCCheckBox::Create(Element*, unsigned long*, Element**)
{
	return 0;
}

long CCCheckBox::Register(void)
{
	return 0;
}

void CCCheckBox::SetClassInfoPtr(IClassInfo*)
{
}

IClassInfo* CCCheckBox::GetClassInfoPtr(void)
{
	return nullptr;
}

IClassInfo* CCCheckBox::GetClassInfoW(void)
{
	return nullptr;
}

void CCCheckBox::OnInput(InputEvent*)
{
}

bool CCCheckBox::OnNotify(UINT uMsg, WPARAM wParam, LPARAM lParam, LRESULT* plResult)
{
	return false;
}

IClassInfo* CCCheckBox::s_pClassInfo;

CCCommandLink::CCCommandLink(CCCommandLink const&)
	: CCPushButton(0)
{
}

CCCommandLink::CCCommandLink(unsigned long)
	: CCPushButton(0)
{
}

CCCommandLink::~CCCommandLink(void)
{
}

CCCommandLink& CCCommandLink::operator=(CCCommandLink const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

long CCCommandLink::Create(unsigned int, Element*, unsigned long*, Element**)
{
	return 0;
}

long CCCommandLink::Create(Element*, unsigned long*, Element**)
{
	return 0;
}

IClassInfo* CCCommandLink::GetClassInfoPtr(void)
{
	return nullptr;
}

long CCCommandLink::Register(void)
{
	return 0;
}

void CCCommandLink::SetClassInfoPtr(IClassInfo*)
{
}

PropertyInfo const* CCCommandLink::NoteProp(void)
{
	return nullptr;
}

UCString CCCommandLink::GetNote(Value**)
{
	return UCString();
}

long CCCommandLink::SetNote(UCString)
{
	return 0;
}

IClassInfo* CCCommandLink::GetClassInfoW(void)
{
	return nullptr;
}

SIZE CCCommandLink::GetContentSize(int, int, Surface*)
{
	return SIZE();
}

void CCCommandLink::OnPropertyChanged(PropertyInfo const*, int, Value*, Value*)
{
}

void CCCommandLink::OnSelectedPropertyChanged(void)
{
}

void CCCommandLink::SyncNoteAndGlyph(HWND)
{
}

void CCCommandLink::PostCreate(HWND)
{
}

IClassInfo* CCCommandLink::s_pClassInfo;

CCSysLink::CCSysLink(CCSysLink const&)
	: CCBase(0, 0)
{
}

CCSysLink::CCSysLink(void)
	: CCBase(0, 0)
{
}

CCSysLink::~CCSysLink(void)
{
}

CCSysLink& CCSysLink::operator=(CCSysLink const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

long CCSysLink::Create(unsigned int, Element*, unsigned long*, Element**)
{
	return 0;
}

long CCSysLink::Create(Element*, unsigned long*, Element**)
{
	return 0;
}

IClassInfo* CCSysLink::GetClassInfoPtr(void)
{
	return nullptr;
}

long CCSysLink::Register(void)
{
	return 0;
}

void CCSysLink::SetClassInfoPtr(IClassInfo*)
{
}

IClassInfo* CCSysLink::GetClassInfoW(void)
{
	return nullptr;
}

tagSIZE CCSysLink::GetContentSize(int, int, Surface*)
{
	return tagSIZE();
}

void CCSysLink::OnInput(InputEvent*)
{
}

bool CCSysLink::OnLostDialogFocus(DialogElement*)
{
	return false;
}

bool CCSysLink::OnReceivedDialogFocus(DialogElement*)
{
	return false;
}

IClassInfo* CCSysLink::s_pClassInfo;

CheckBoxGlyph::CheckBoxGlyph(CheckBoxGlyph const&)
{
}

CheckBoxGlyph::CheckBoxGlyph(void)
{
}

CheckBoxGlyph::~CheckBoxGlyph(void)
{
}

CheckBoxGlyph& CheckBoxGlyph::operator=(CheckBoxGlyph const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

long CheckBoxGlyph::Create(unsigned int, Element*, unsigned long*, Element**)
{
	return 0;
}

long CheckBoxGlyph::Create(Element*, unsigned long*, Element**)
{
	return 0;
}

IClassInfo* CheckBoxGlyph::GetClassInfoPtr(void)
{
	return nullptr;
}

long CheckBoxGlyph::Register(void)
{
	return 0;
}

void CheckBoxGlyph::SetClassInfoPtr(IClassInfo*)
{
}

long CheckBoxGlyph::Initialize(unsigned int, Element*, unsigned long*)
{
	return 0;
}

IClassInfo* CheckBoxGlyph::GetClassInfoW(void)
{
	return nullptr;
}

bool CheckBoxGlyph::OnLostDialogFocus(DialogElement*)
{
	return false;
}

bool CheckBoxGlyph::OnReceivedDialogFocus(DialogElement*)
{
	return false;
}

IClassInfo* CheckBoxGlyph::s_pClassInfo;

CCHScrollBar::CCHScrollBar(const CCHScrollBar&)
	: CCBaseScrollBar(0)
{
}

CCHScrollBar::CCHScrollBar(void)
	: CCBaseScrollBar(0)
{
}

CCHScrollBar& CCHScrollBar::operator=(const CCHScrollBar&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

CCHScrollBar::~CCHScrollBar(void)
{
}

long CCHScrollBar::Create(unsigned int, Element*, unsigned long*, Element**)
{
	return 0;
}

long CCHScrollBar::Create(Element*, unsigned long*, Element**)
{
	return 0;
}

IClassInfo* CCHScrollBar::GetClassInfoPtr(void)
{
	return nullptr;
}

long CCHScrollBar::Register(void)
{
	return 0;
}

void CCHScrollBar::SetClassInfoPtr(IClassInfo*)
{
}

IClassInfo* CCHScrollBar::GetClassInfoW(void)
{
	return nullptr;
}

SIZE CCHScrollBar::GetContentSize(int, int, Surface*)
{
	return SIZE();
}

IClassInfo* CCHScrollBar::s_pClassInfo;

Clipper::Clipper(Clipper const&)
{
}

Clipper::Clipper(void)
{
}

Clipper::~Clipper(void)
{
}

Clipper& Clipper::operator=(Clipper const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

long Clipper::Create(Element*, unsigned long*, Element**)
{
	return 0;
}

IClassInfo* Clipper::GetClassInfoPtr(void)
{
	return nullptr;
}

long Clipper::Register(void)
{
	return 0;
}

void Clipper::SetClassInfoPtr(IClassInfo*)
{
}

long Clipper::Initialize(Element*, unsigned long*)
{
	return 0;
}

IClassInfo* Clipper::GetClassInfoW(void)
{
	return nullptr;
}

void Clipper::_SelfLayoutDoLayout(int, int)
{
}

SIZE Clipper::_SelfLayoutUpdateDesiredSize(int, int, Surface*)
{
	return SIZE();
}

IClassInfo* Clipper::s_pClassInfo;

CCListBox::CCListBox(CCListBox const&)
	: CCBase(0, 0)
{
}

CCListBox::CCListBox(void)
	: CCBase(0, 0)
{
}

CCListBox::~CCListBox(void)
{
}

CCListBox& CCListBox::operator=(CCListBox const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

long CCListBox::Create(unsigned int, Element*, unsigned long*, Element**)
{
	return 0;
}

long CCListBox::Create(Element*, unsigned long*, Element**)
{
	return 0;
}

IClassInfo* CCListBox::GetClassInfoPtr(void)
{
	return nullptr;
}

long CCListBox::Register(void)
{
	return 0;
}

void CCListBox::SetClassInfoPtr(IClassInfo*)
{
}

int CCListBox::DeleteString(int)
{
	return 0;
}

int CCListBox::AddString(unsigned short const*)
{
	return 0;
}

int CCListBox::GetCount(void)
{
	return 0;
}

IClassInfo* CCListBox::GetClassInfoW(void)
{
	return nullptr;
}

SIZE CCListBox::GetContentSize(int, int, Surface*)
{
	return SIZE();
}

IClassInfo* CCListBox::s_pClassInfo;

CCListView::CCListView(CCListView const&)
	: CCBase(0, 0)
{
}

CCListView::CCListView(void)
	: CCBase(0, 0)
{
}

CCListView::~CCListView(void)
{
}

CCListView& CCListView::operator=(CCListView const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

long CCListView::Create(unsigned int, Element*, unsigned long*, Element**)
{
	return 0;
}

long CCListView::Create(Element*, unsigned long*, Element**)
{
	return 0;
}

IClassInfo* CCListView::GetClassInfoPtr(void)
{
	return nullptr;
}

long CCListView::Register(void)
{
	return 0;
}

void CCListView::SetClassInfoPtr(IClassInfo*)
{
}

long CCListView::Initialize(unsigned int, Element*, unsigned long*)
{
	return 0;
}

IClassInfo* CCListView::GetClassInfoW(void)
{
	return nullptr;
}

SIZE CCListView::GetContentSize(int, int, Surface*)
{
	return SIZE();
}

IClassInfo* CCListView::s_pClassInfo;

Combobox::Combobox(Combobox const&)
{
}

Combobox::Combobox(void)
{
}

Combobox::~Combobox(void)
{
}

Combobox& Combobox::operator=(Combobox const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

long Combobox::Create(unsigned int, Element*, unsigned long*, Element**)
{
	return 0;
}

long Combobox::Create(Element*, unsigned long*, Element**)
{
	return 0;
}

IClassInfo* Combobox::GetClassInfoPtr(void)
{
	return nullptr;
}

long Combobox::Register(void)
{
	return 0;
}

UID Combobox::SelectionChange(void)
{
	return UID();
}

const PropertyInfo* Combobox::SelectionProp(void)
{
	return nullptr;
}

void Combobox::SetClassInfoPtr(IClassInfo*)
{
}

long Combobox::SetSelection(int)
{
	return 0;
}

int Combobox::AddString(unsigned short const*)
{
	return 0;
}

int Combobox::GetSelection(void)
{
	return 0;
}

long Combobox::Initialize(unsigned int, Element*, unsigned long*)
{
	return 0;
}

HWND Combobox::CreateHWND(HWND)
{
	return HWND();
}

IClassInfo* Combobox::GetClassInfoW(void)
{
	return nullptr;
}

SIZE Combobox::GetContentSize(int, int, Surface*)
{
	return SIZE();
}

int Combobox::OnAdjustWindowSize(int, int, unsigned int)
{
	return 0;
}

void Combobox::OnHosted(Element*)
{
}

void Combobox::OnInput(InputEvent*)
{
}

bool Combobox::OnNotify(UINT uMsg, WPARAM wParam, LPARAM lParam, LRESULT* plResult)
{
	return false;
}

void Combobox::OnPropertyChanged(const PropertyInfo*, int, Value*, Value*)
{
}

IClassInfo* Combobox::s_pClassInfo;

CCProgressBar::CCProgressBar(CCProgressBar const&)
	: CCBase(0, 0)
{
}

CCProgressBar::CCProgressBar(void)
	: CCBase(0, 0)
{
}

CCProgressBar::~CCProgressBar(void)
{
}

CCProgressBar& CCProgressBar::operator=(CCProgressBar const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

long CCProgressBar::Create(unsigned int, Element*, unsigned long*, Element**)
{
	return 0;
}

long CCProgressBar::Create(Element*, unsigned long*, Element**)
{
	return 0;
}

IClassInfo* CCProgressBar::GetClassInfoPtr(void)
{
	return nullptr;
}

long CCProgressBar::Register(void)
{
	return 0;
}

void CCProgressBar::SetClassInfoPtr(IClassInfo*)
{
}

long CCProgressBar::Initialize(unsigned int, Element*, unsigned long*)
{
	return 0;
}

IClassInfo* CCProgressBar::GetClassInfoW(void)
{
	return nullptr;
}

void CCProgressBar::OnInput(InputEvent*)
{
}

IClassInfo* CCProgressBar::s_pClassInfo;

CCPushButton::CCPushButton(const CCPushButton&)
	: CCBase(0, 0)
{
}

CCPushButton::CCPushButton(unsigned long)
	: CCBase(0, 0)
{
}

CCPushButton& CCPushButton::operator=(const CCPushButton&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

CCPushButton::~CCPushButton(void)
{
}

long CCPushButton::Create(unsigned int, Element*, unsigned long*, Element**)
{
	return 0;
}

long CCPushButton::Create(Element*, unsigned long*, Element**)
{
	return 0;
}

const PropertyInfo* CCPushButton::OverrideButtonBackgroundProp(void)
{
	return nullptr;
}

long CCPushButton::Register(void)
{
	return 0;
}

void CCPushButton::SetClassInfoPtr(IClassInfo*)
{
}

IClassInfo* CCPushButton::GetClassInfoPtr(void)
{
	return nullptr;
}

const PropertyInfo* CCPushButton::HasShieldProp(void)
{
	return nullptr;
}

long CCPushButton::SetOverrideButtonBackground(bool)
{
	return 0;
}

bool CCPushButton::GetHasShield(void)
{
	return false;
}

bool CCPushButton::GetOverrideButtonBackground(void)
{
	return false;
}

long CCPushButton::DefaultAction(void)
{
	return 0;
}

IClassInfo* CCPushButton::GetClassInfoW(void)
{
	return nullptr;
}

SIZE CCPushButton::GetContentSize(int, int, Surface*)
{
	return SIZE();
}

void CCPushButton::OnInput(InputEvent*)
{
}

bool CCPushButton::OnLostDialogFocus(DialogElement*)
{
	return false;
}

bool CCPushButton::OnMessage(UINT message, WPARAM wParam, LPARAM lParam, LRESULT* plResult)
{
	return false;
}

bool CCPushButton::OnNotify(UINT uMsg, WPARAM wParam, LPARAM lParam, LRESULT* plResult)
{
	return false;
}

void CCPushButton::OnPropertyChanged(const PropertyInfo*, int, Value*, Value*)
{
}

bool CCPushButton::OnReceivedDialogFocus(DialogElement*)
{
	return false;
}

bool CCPushButton::GetButtonColor(HDC, HBRUSH*)
{
	return false;
}

void CCPushButton::OnSelectedPropertyChanged(void)
{
}

SIZE CCPushButton::EstimateContentSize(int, int, Surface*)
{
	return SIZE();
}

void CCPushButton::SetDefaultState(unsigned long, unsigned long)
{
}

IClassInfo* CCPushButton::s_pClassInfo;

CCRadioButton::CCRadioButton(CCRadioButton const&)
	: CCBaseCheckRadioButton(0)
{
}

CCRadioButton::CCRadioButton(void)
	: CCBaseCheckRadioButton(0)
{
}

CCRadioButton::~CCRadioButton(void)
{
}

CCRadioButton& CCRadioButton::operator=(CCRadioButton const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

PropertyInfo const* CCRadioButton::AutoGroupingProp(void)
{
	return nullptr;
}

long CCRadioButton::Create(unsigned int, Element*, unsigned long*, Element**)
{
	return 0;
}

long CCRadioButton::Create(Element*, unsigned long*, Element**)
{
	return 0;
}

void CCRadioButton::SetClassInfoPtr(IClassInfo*)
{
}

IClassInfo* CCRadioButton::GetClassInfoPtr(void)
{
	return nullptr;
}

long CCRadioButton::Register(void)
{
	return 0;
}

bool CCRadioButton::GetAutoGrouping(void)
{
	return false;
}

long CCRadioButton::SetAutoGrouping(bool)
{
	return 0;
}

IClassInfo* CCRadioButton::GetClassInfoW(void)
{
	return nullptr;
}

void CCRadioButton::OnInput(InputEvent*)
{
}

bool CCRadioButton::OnNotify(UINT uMsg, WPARAM wParam, LPARAM lParam, LRESULT* plResult)
{
	return false;
}

IClassInfo* CCRadioButton::s_pClassInfo;

CCTrackBar::CCTrackBar(CCTrackBar const&)
	: CCBase(0, 0)
{
}

CCTrackBar::CCTrackBar(void)
	: CCBase(0, 0)
{
}

CCTrackBar::~CCTrackBar(void)
{
}

CCTrackBar& CCTrackBar::operator=(CCTrackBar const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

long CCTrackBar::Create(unsigned int, Element*, unsigned long*, Element**)
{
	return 0;
}

long CCTrackBar::Create(Element*, unsigned long*, Element**)
{
	return 0;
}

IClassInfo* CCTrackBar::GetClassInfoPtr(void)
{
	return nullptr;
}

const PropertyInfo* CCTrackBar::LineSizeProp(void)
{
	return nullptr;
}

const PropertyInfo* CCTrackBar::ThumbPositionProp(void)
{
	return nullptr;
}

const PropertyInfo* CCTrackBar::RangeMaxProp(void)
{
	return nullptr;
}

const PropertyInfo* CCTrackBar::RangeMinProp(void)
{
	return nullptr;
}

long CCTrackBar::Register(void)
{
	return 0;
}

void CCTrackBar::SetClassInfoPtr(IClassInfo*)
{
}

int CCTrackBar::GetLineSize(void)
{
	return 0;
}

int CCTrackBar::GetRangeMax(void)
{
	return 0;
}

int CCTrackBar::GetRangeMin(void)
{
	return 0;
}

int CCTrackBar::GetThumbPosition(void)
{
	return 0;
}

long CCTrackBar::SetLineSize(int)
{
	return 0;
}

long CCTrackBar::SetRangeMax(int)
{
	return 0;
}

long CCTrackBar::SetRangeMin(int)
{
	return 0;
}

long CCTrackBar::SetThumbPosition(int)
{
	return 0;
}

IClassInfo* CCTrackBar::GetClassInfoW(void)
{
	return nullptr;
}

bool CCTrackBar::OnMessage(UINT message, WPARAM wParam, LPARAM lParam, LRESULT* plResult)
{
	return false;
}

void CCTrackBar::OnPropertyChanged(const PropertyInfo*, int, Value*, Value*)
{
}

bool CCTrackBar::OnPropertyChanging(const PropertyInfo*, int, Value*, Value*)
{
	return false;
}

void CCTrackBar::PostCreate(HWND)
{
}

IClassInfo* CCTrackBar::s_pClassInfo;

CCTreeView::CCTreeView(CCTreeView const&)
	: CCBase(0, 0)
{
}

CCTreeView::CCTreeView(unsigned long)
	: CCBase(0, 0)
{
}

CCTreeView::~CCTreeView(void)
{
}

CCTreeView& CCTreeView::operator=(CCTreeView const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

long CCTreeView::Create(unsigned int, Element*, unsigned long*, Element**)
{
	return 0;
}

long CCTreeView::Create(Element*, unsigned long*, Element**)
{
	return 0;
}

IClassInfo* CCTreeView::GetClassInfoPtr(void)
{
	return nullptr;
}

long CCTreeView::Register(void)
{
	return 0;
}

void CCTreeView::SetClassInfoPtr(IClassInfo*)
{
}

HTREEITEM CCTreeView::InsertItem(unsigned short*, unsigned int, const HTREEITEM, const HTREEITEM)
{
	return HTREEITEM();
}

HTREEITEM CCTreeView::InsertItem(const TVINSERTSTRUCTW*)
{
	return HTREEITEM();
}

unsigned int CCTreeView::GetItemState(HTREEITEM const)
{
	return 0;
}

unsigned long CCTreeView::GetStyle(void)
{
	return 0;
}

void CCTreeView::SetItemState(HTREEITEM, unsigned int)
{
}

IClassInfo* CCTreeView::GetClassInfoW(void)
{
	return nullptr;
}

SIZE CCTreeView::GetContentSize(int, int, Surface*)
{
	return SIZE();
}

bool CCTreeView::OnNotify(UINT uMsg, WPARAM wParam, LPARAM lParam, LRESULT* plResult)
{
	return false;
}

unsigned long CCTreeView::SetStyle(unsigned long)
{
	return 0;
}

long CCTreeView::_OnGetInfoTip(NMTVGETINFOTIPW const*)
{
	return 0;
}

long CCTreeView::_OnItemChanged(NMTVITEMCHANGE const*)
{
	return 0;
}

IClassInfo* CCTreeView::s_pClassInfo;

CCVScrollBar::CCVScrollBar(CCVScrollBar const&)
	: CCBaseScrollBar(0)
{
}

CCVScrollBar::CCVScrollBar(void)
	: CCBaseScrollBar(0)
{
}

CCVScrollBar::~CCVScrollBar(void)
{
}

CCVScrollBar& CCVScrollBar::operator=(CCVScrollBar const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

long CCVScrollBar::Create(unsigned int, Element*, unsigned long*, Element**)
{
	return 0;
}

long CCVScrollBar::Create(Element*, unsigned long*, Element**)
{
	return 0;
}

IClassInfo* CCVScrollBar::GetClassInfoPtr(void)
{
	return nullptr;
}

long CCVScrollBar::Register(void)
{
	return 0;
}

void CCVScrollBar::SetClassInfoPtr(IClassInfo*)
{
}

IClassInfo* CCVScrollBar::GetClassInfoW(void)
{
	return nullptr;
}

SIZE CCVScrollBar::GetContentSize(int, int, Surface*)
{
	return SIZE();
}

IClassInfo* CCVScrollBar::s_pClassInfo;

DialogElement::DialogElement(DialogElement const&)
{
}

DialogElement::DialogElement(void)
{
}

DialogElement::~DialogElement(void)
{
}

DialogElement& DialogElement::operator=(DialogElement const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

const PropertyInfo* DialogElement::ButtonClassAcceptsEnterKeyProp(void)
{
	return nullptr;
}

long DialogElement::Create(HWND__*, bool, unsigned int, Element*, unsigned long*, Element**)
{
	return 0;
}

const PropertyInfo* DialogElement::DefaultButtonTrackingProp(void)
{
	return nullptr;
}

IClassInfo* DialogElement::GetClassInfoPtr(void)
{
	return nullptr;
}

const PropertyInfo* DialogElement::HandleEnterKeyProp(void)
{
	return nullptr;
}

long DialogElement::Register(void)
{
	return 0;
}

const PropertyInfo* DialogElement::RegisteredDefaultButtonProp(void)
{
	return nullptr;
}

void DialogElement::SetClassInfoPtr(IClassInfo*)
{
}

bool DialogElement::GetButtonClassAcceptsEnterKey(void)
{
	return false;
}

bool DialogElement::GetDefaultButtonTracking(void)
{
	return false;
}

bool DialogElement::GetHandleEnterKey(void)
{
	return false;
}

Element* DialogElement::GetRegisteredDefaultButton(void)
{
	return nullptr;
}

long DialogElement::SetButtonClassAcceptsEnterKey(bool)
{
	return 0;
}

long DialogElement::SetDefaultButtonTracking(bool)
{
	return 0;
}

long DialogElement::SetHandleEnterKey(bool)
{
	return 0;
}

long DialogElement::SetRegisteredDefaultButton(Element*)
{
	return 0;
}

void DialogElement::OnDestroy(void)
{
}

void DialogElement::OnGetDlgCode(MSG*, LRESULT*)
{
}

void DialogElement::OnInput(InputEvent*)
{
}

void DialogElement::OnKeyFocusMoved(Element*, Element*)
{
}

void DialogElement::OnListenedEvent(Element*, Event*)
{
}

void DialogElement::OnListenedInput(Element*, InputEvent*)
{
}

void DialogElement::OnListenedPropertyChanged(Element*, const PropertyInfo*, int, Value*, Value*)
{
}

bool DialogElement::OnListenedPropertyChanging(Element*, const PropertyInfo*, int, Value*, Value*)
{
	return false;
}

void DialogElement::OnListenerAttach(Element*)
{
}

void DialogElement::OnListenerDetach(Element*)
{
}

void DialogElement::OnPropertyChanged(const PropertyInfo*, int, Value*, Value*)
{
}

IClassInfo* DialogElement::GetClassInfoW(void)
{
	return nullptr;
}

Element* DialogElement::GetDefaultButton(void)
{
	return nullptr;
}

bool DialogElement::ClickDefaultButton(void)
{
	return false;
}

void DialogElement::UpdateChildFocus(Element*, Element*)
{
}

bool DialogElement::OnChildLostFocus(Element*)
{
	return false;
}

bool DialogElement::OnChildReceivedFocus(Element*)
{
	return false;
}

void DialogElement::SetRegisteredDefaultButtonSelectedState(bool)
{
}

bool DialogElement::IsButtonEnabledAndVisible(Element*)
{
	return false;
}

IClassInfo* DialogElement::s_pClassInfo;

Element* DuiNavigate::Navigate(Element* peFrom, DynamicArray<Element*>* pelConsider, int nNavDir) STUB_ZERO;

Edit::Edit(Edit const&)
{
}

Edit::Edit(void)
{
}

Edit::~Edit(void)
{
}

Edit& Edit::operator=(Edit const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

long Edit::Create(unsigned int, Element*, unsigned long*, Element**)
{
	return 0;
}

long Edit::Create(Element*, unsigned long*, Element**)
{
	return 0;
}

const PropertyInfo* Edit::DirtyProp(void)
{
	return nullptr;
}

UID WINAPI Edit::Enter(void)
{
	return UID();
}

IClassInfo* Edit::GetClassInfoPtr(void)
{
	return nullptr;
}

const PropertyInfo* Edit::MultilineProp(void)
{
	return nullptr;
}

const PropertyInfo* Edit::MaxLengthProp(void)
{
	return nullptr;
}

const PropertyInfo* Edit::PasswordCharacterProp(void)
{
	return nullptr;
}

long Edit::Register(void)
{
	return 0;
}

void Edit::SetClassInfoPtr(IClassInfo*)
{
}

const PropertyInfo* Edit::ThemedBorderProp(void)
{
	return nullptr;
}

const PropertyInfo* Edit::WantTabsProp(void)
{
	return nullptr;
}

bool Edit::GetDirty(void)
{
	return false;
}

int Edit::GetMaxLength(void)
{
	return 0;
}

bool Edit::GetMultiline(void)
{
	return false;
}

int Edit::GetPasswordCharacter(void)
{
	return 0;
}

bool Edit::GetThemedBorder(void)
{
	return false;
}

bool Edit::GetWantTabs(void)
{
	return false;
}

long Edit::Initialize(unsigned int, Element*, unsigned long*)
{
	return 0;
}

long Edit::SetDirty(bool)
{
	return 0;
}

long Edit::SetMaxLength(int)
{
	return 0;
}

long Edit::SetMultiline(bool)
{
	return 0;
}

long Edit::SetPasswordCharacter(int)
{
	return 0;
}

long Edit::SetThemedBorder(bool)
{
	return 0;
}

long Edit::SetWantTabs(bool)
{
	return 0;
}

IClassInfo* Edit::GetClassInfoW(void)
{
	return nullptr;
}

SIZE Edit::GetContentSize(int, int, Surface*)
{
	return SIZE();
}

const WCHAR* Edit::GetContentStringAsDisplayed(Value**)
{
	return nullptr;
}

bool Edit::IsContentProtected(void)
{
	return false;
}

unsigned int Edit::MessageCallback(LPGMSG)
{
	return 0;
}

void Edit::OnInput(InputEvent*)
{
}

bool Edit::OnNotify(UINT uMsg, WPARAM wParam, LPARAM lParam, LRESULT* plResult)
{
	return false;
}

void Edit::OnPropertyChanged(const PropertyInfo*, int, Value*, Value*)
{
}

HWND Edit::CreateHWND(HWND)
{
	return HWND();
}

HWND Edit::CreateHWND(HWND, bool)
{
	return HWND();
}

unsigned int Edit::GetTextHeight(void)
{
	return 0;
}

void Edit::PropertyChangedCore(const PropertyInfo*, int, Value*, HWND)
{
}

IClassInfo* Edit::s_pClassInfo;

EventManager& EventManager::operator=(EventManager const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

long EventManager::AddRectangleChange(Element*, bool, bool)
{
	return 0;
}

long EventManager::AdviseEventAdded(int, SAFEARRAY*)
{
	return 0;
}

long EventManager::AdviseEventRemoved(int, SAFEARRAY*)
{
	return 0;
}

void EventManager::Close()
{
}

void EventManager::DestroyListener(Element*)
{
}

long EventManager::EndDefer(Element*)
{
	return 0;
}

long EventManager::EventListener(Element*, Event*)
{
	return 0;
}

bool EventManager::FWantAnyEvent(Element*)
{
	return false;
}

long EventManager::FireStructureChangedEvent(Element*, StructureChangeType)
{
	return 0;
}

long EventManager::GetBool(VARIANT*, Value*)
{
	return 0;
}

void EventManager::GetExpandCollapseState(VARIANT*)
{
}

long EventManager::GetInt(VARIANT*, Value*)
{
	return 0;
}

long EventManager::GetString(VARIANT*, Value*)
{
	return 0;
}

void EventManager::GetToggleState(VARIANT*)
{
}

long EventManager::HandleAccChange(Element*, IRawElementProviderSimple*, Value*, Value*)
{
	return 0;
}

long EventManager::HandleAccDesc(Element*, IRawElementProviderSimple*, Value*, Value*)
{
	return 0;
}

long EventManager::HandleAccPatternChange(Element*, IRawElementProviderSimple*, unsigned int, unsigned int, int, VARIANT*, VARIANT*, void (__stdcall *)(VARIANT*))
{
	return 0;
}

long EventManager::HandleAccRoleEvent(IRawElementProviderSimple*, Value*, Value*)
{
	return 0;
}

long EventManager::HandleAccStateChange(IRawElementProviderSimple*, unsigned int, unsigned int, int, VARIANT*, VARIANT*)
{
	return 0;
}

long EventManager::HandleBoolProp(Element*, bool (__stdcall *)(Element*), IRawElementProviderSimple*, int, Value*, Value*)
{
	return 0;
}

long EventManager::HandleChildrenEvent(Element*, Value*, Value*)
{
	return 0;
}

long EventManager::HandleRangeValue(Element*, IRawElementProviderSimple*, Value*, Value*)
{
	return 0;
}

long EventManager::HandleScrollPos(Element*, IRawElementProviderSimple*, Value*, Value*)
{
	return 0;
}

long EventManager::HandleSelectedChange(IRawElementProviderSimple*, Value*)
{
	return 0;
}

long EventManager::HandleStringProp(IRawElementProviderSimple*, int, Value*, Value*)
{
	return 0;
}

long EventManager::HandleVisibilityChange(Element*, unsigned int)
{
	return 0;
}

long WINAPI EventManager::Init()
{
	return 0;
}

long WINAPI EventManager::OnToolTip(Element*, unsigned long)
{
	return 0;
}

long WINAPI EventManager::PropertyChangingListener(Element*, const PropertyInfo*, bool*)
{
	return 0;
}

long WINAPI EventManager::PropertyListener(Element*, const PropertyInfo*, int, Value*, Value*)
{
	return 0;
}

long WINAPI EventManager::RaiseChildRemovedEvent(const ElementRuntimeId&, Element*)
{
	return 0;
}

long WINAPI EventManager::RaiseGeometryEventWorker(RectangleChange*, bool, bool, bool, bool)
{
	return 0;
}

long WINAPI EventManager::RaiseGeometryEvents()
{
	return 0;
}

UiaArray<int>* EventManager::g_pArrayPropertyEvent;
bool EventManager::g_fWantAnyEvent;
unsigned int* __ptr32 EventManager::g_eventRegisteredMap;
CRITICAL_SECTION EventManager::g_cs;
int const EventManager::cChangeBulk = 0;

long WINAPI EventManager::RaiseStructureChangedEvent(Element*, StructureChangeType)
{
	return 0;
}

long EventManager::RaiseStructureEvents()
{
	return 0;
}

long WINAPI EventManager::RaiseVisibilityEvents()
{
	return 0;
}

bool EventManager::WantEvent(Schema::Event)
{
	return false;
}

bool EventManager::WantEvent(Schema::Event, int)
{
	return false;
}

bool EventManager::WantPropertyEvent(int)
{
	return false;
}

Expandable::Expandable(Expandable const&)
{
}

Expandable::Expandable(void)
{
}

Expandable::~Expandable(void)
{
}

Expandable& Expandable::operator=(Expandable const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

long Expandable::Create(Element*, unsigned long*, Element**)
{
	return 0;
}

const PropertyInfo* Expandable::ExpandedProp(void)
{
	return nullptr;
}

IClassInfo* Expandable::GetClassInfoPtr(void)
{
	return nullptr;
}

long Expandable::Register(void)
{
	return 0;
}

void Expandable::SetClassInfoPtr(IClassInfo*)
{
}

bool Expandable::GetExpanded(void)
{
	return false;
}

long Expandable::SetExpanded(bool)
{
	return 0;
}

IClassInfo* Expandable::GetClassInfoW(void)
{
	return nullptr;
}

IClassInfo* Expandable::s_pClassInfo;

ExpandCollapseProvider::ExpandCollapseProvider(void)
{
}

ExpandCollapseProvider::~ExpandCollapseProvider(void)
{
}

ProviderProxyCall ExpandCollapseProvider::GetProxyCreator(void)
{
	return ProviderProxyCall();
}

HRESULT ExpandCollapseProvider::QueryInterface(REFIID riid, void** ppvObject)
{
	return E_NOTIMPL;
}

ULONG ExpandCollapseProvider::AddRef(void)
{
	return 0;
}

ULONG ExpandCollapseProvider::Release(void)
{
	return 0;
}

HRESULT ExpandCollapseProvider::Expand(void)
{
	return E_NOTIMPL;
}

HRESULT ExpandCollapseProvider::Collapse(void)
{
	return E_NOTIMPL;
}

HRESULT ExpandCollapseProvider::get_ExpandCollapseState(ExpandCollapseState* pRetVal)
{
	return E_NOTIMPL;
}

ExpandCollapseProxy::ExpandCollapseProxy(ExpandCollapseProxy const&)
{
}

ExpandCollapseProxy::ExpandCollapseProxy(void)
{
}

ExpandCollapseProxy& ExpandCollapseProxy::operator=(ExpandCollapseProxy const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

ExpandCollapseProxy* ExpandCollapseProxy::Create(Element*)
{
	return nullptr;
}

long ExpandCollapseProxy::DoMethod(int, char*)
{
	return 0;
}

bool ExpandCollapseProxy::IsPatternSupported(Element*)
{
	return false;
}

void ExpandCollapseProxy::Init(Element*)
{
}

Expando::Expando(Expando const&)
{
}

Expando::Expando(void)
{
}

Expando::~Expando(void)
{
}

Expando& Expando::operator=(Expando const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

long Expando::Register(void)
{
	return 0;
}

void Expando::SetClassInfoPtr(IClassInfo*)
{
}

long Expando::Create(Element*, unsigned long*, Element**)
{
	return 0;
}

IClassInfo* Expando::GetClassInfoPtr(void)
{
	return nullptr;
}

long Expando::Initialize(Element*, unsigned long*)
{
	return 0;
}

long Expando::Add(Element**, unsigned int)
{
	return 0;
}

IClassInfo* Expando::GetClassInfoW(void)
{
	return nullptr;
}

void Expando::OnEvent(Event*)
{
}

void Expando::OnPropertyChanged(PropertyInfo const*, int, Value*, Value*)
{
}

unsigned short Expando::Arrow(void)
{
	return 0;
}

unsigned short Expando::Clipper(void)
{
	return 0;
}

void Expando::UpdateChildren(Value*)
{
}

unsigned short Expando::_atmArrow;
unsigned short Expando::_atmClipper;
IClassInfo* Expando::s_pClassInfo;

ExpandoButtonGlyph::ExpandoButtonGlyph(ExpandoButtonGlyph const&)
{
}

ExpandoButtonGlyph::ExpandoButtonGlyph(void)
{
}

ExpandoButtonGlyph::~ExpandoButtonGlyph(void)
{
}

ExpandoButtonGlyph& ExpandoButtonGlyph::operator=(ExpandoButtonGlyph const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

long ExpandoButtonGlyph::Create(unsigned int, Element*, unsigned long*, Element**)
{
	return 0;
}

long ExpandoButtonGlyph::Create(Element*, unsigned long*, Element**)
{
	return 0;
}

IClassInfo* ExpandoButtonGlyph::GetClassInfoPtr(void)
{
	return nullptr;
}

long ExpandoButtonGlyph::Register(void)
{
	return 0;
}

void ExpandoButtonGlyph::SetClassInfoPtr(IClassInfo*)
{
}

long ExpandoButtonGlyph::Initialize(unsigned int, Element*, unsigned long*)
{
	return 0;
}

IClassInfo* ExpandoButtonGlyph::GetClassInfoW(void)
{
	return nullptr;
}

bool ExpandoButtonGlyph::OnLostDialogFocus(DialogElement*)
{
	return false;
}

bool ExpandoButtonGlyph::OnReceivedDialogFocus(DialogElement*)
{
	return false;
}

IClassInfo* ExpandoButtonGlyph::s_pClassInfo;

FontCache::FontCache(FontCache const&)
{
}

FontCache::FontCache(void)
{
}

FontCache& FontCache::operator=(FontCache const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

long FontCache::InitProcess(void)
{
	return 0;
}

long FontCache::InitThread(void)
{
	return 0;
}

void FontCache::UninitProcess(void)
{
}

void FontCache::UninitThread(void)
{
}

FontCheckOut::FontCheckOut(Element*, HDC)
{
}

FontCheckOut::~FontCheckOut(void)
{
}

FontCheckOut& FontCheckOut::operator=(FontCheckOut const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

GridProvider::GridProvider(void)
{
}

GridProvider::~GridProvider(void)
{
}

unsigned long GridProvider::AddRef(void)
{
	return 0;
}

long GridProvider::GetItem(int, int, IRawElementProviderSimple**)
{
	return 0;
}

ProviderProxyCall GridProvider::GetProxyCreator(void)
{
	return ProviderProxyCall();
}

long GridProvider::QueryInterface(GUID const&, void**)
{
	return 0;
}

unsigned long GridProvider::Release(void)
{
	return 0;
}

long GridProvider::get_ColumnCount(int*)
{
	return 0;
}

long GridProvider::get_RowCount(int*)
{
	return 0;
}

GridProxy::GridProxy(GridProxy const&)
{
}

GridProxy::GridProxy()
{
}

GridProxy& GridProxy::operator=(GridProxy const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

GridProxy* GridProxy::Create(Element*)
{
	return nullptr;
}

bool GridProxy::IsPatternSupported(Element*)
{
	return false;
}

long GridProxy::DoMethod(int, char*)
{
	return 0;
}

void GridProxy::Init(Element*)
{
}

long GridProxy::GetColumnCount(int*)
{
	return 0;
}

long GridProxy::GetItem(unsigned int, unsigned int, IRawElementProviderSimple**)
{
	return 0;
}

long GridProxy::GetRowCount(int*)
{
	return 0;
}

GridItemProvider::GridItemProvider(void)
{
}

GridItemProvider::~GridItemProvider(void)
{
}

unsigned long GridItemProvider::AddRef(void)
{
	return 0;
}

ProviderProxyCall GridItemProvider::GetProxyCreator(void)
{
	return ProviderProxyCall();
}

long GridItemProvider::QueryInterface(GUID const&, void**)
{
	return 0;
}

unsigned long GridItemProvider::Release(void)
{
	return 0;
}

long GridItemProvider::get_Column(int*)
{
	return 0;
}

long GridItemProvider::get_ColumnSpan(int*)
{
	return 0;
}

long GridItemProvider::get_ContainingGrid(IRawElementProviderSimple**)
{
	return 0;
}

long GridItemProvider::get_Row(int*)
{
	return 0;
}

long GridItemProvider::get_RowSpan(int*)
{
	return 0;
}

GridItemProxy::GridItemProxy(GridItemProxy const&)
{
}

GridItemProxy::GridItemProxy(void)
{
}

GridItemProxy& GridItemProxy::operator=(GridItemProxy const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

GridItemProxy* GridItemProxy::Create(Element*)
{
	return nullptr;
}

bool GridItemProxy::IsPatternSupported(Element*)
{
	return false;
}

long GridItemProxy::DoMethod(int, char*)
{
	return 0;
}

void GridItemProxy::Init(Element*)
{
}

long GridItemProxy::GetColumn(int*)
{
	return 0;
}

long GridItemProxy::GetContainingGrid(IRawElementProviderSimple**)
{
	return 0;
}

long GridItemProxy::GetRow(int*)
{
	return 0;
}

XHost::XHost()
{
}

XHost::~XHost()
{
}

XHost& XHost::operator=(XHost const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

long WINAPI XHost::Create(IXElementCP*, XHost**)
{
	return 0;
}

void XHost::Destroy()
{
}

void XHost::DestroyWindow()
{
}

Element* XHost::GetElement()
{
	return nullptr;
}

HWND XHost::GetHWND()
{
	return HWND();
}

void XHost::HideWindow()
{
}

void XHost::Host(Element*)
{
}

long XHost::Initialize(IXElementCP*)
{
	return 0;
}

void XHost::ShowWindow(int)
{
}

LRESULT WINAPI XHost::WndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	return LRESULT();
}

HWNDElement::HWNDElement(const HWNDElement&)
{
}

HWNDElement::HWNDElement()
{
}

HWNDElement::~HWNDElement()
{
}

HWNDElement& HWNDElement::operator=(const HWNDElement&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

void HWNDElement::OnPropertyChanged(const PropertyInfo*, int, Value*, Value*)
{
}

void HWNDElement::OnGroupChanged(int, bool)
{
}

void HWNDElement::OnInput(InputEvent*)
{
}

void HWNDElement::OnDestroy()
{
}

void HWNDElement::OnEvent(Event*)
{
}

void HWNDElement::UpdateTooltip(Element*)
{
}

void HWNDElement::ActivateTooltip(Element*, unsigned long)
{
}

void HWNDElement::RemoveTooltip(Element*)
{
}

IClassInfo* HWNDElement::GetClassInfoW()
{
	return nullptr;
}

long HWNDElement::GetAccessibleImpl(IAccessible**)
{
	return 0;
}

HWND HWNDElement::GetHWND()
{
	return HWND();
}

void HWNDElement::OnThemeChanged(ThemeChangedEvent*)
{
}

void HWNDElement::OnImmersiveColorSchemeChanged()
{
}

void HWNDElement::OnNoChildWithShortcutFound(KeyboardEvent*)
{
}

void HWNDElement::OnGetDlgCode(LPMSG, LRESULT*)
{
}

void HWNDElement::OnWmThemeChanged(WPARAM wParam, LPARAM lParam)
{
}

void HWNDElement::OnWmSettingChanged(WPARAM wParam, LPARAM lParam)
{
}

void HWNDElement::OnCompositionChanged()
{
}

bool HWNDElement::CanSetFocus()
{
	return false;
}

bool HWNDElement::IsMSAAEnabled()
{
	return false;
}

UID WINAPI HWNDElement::CompositionChange()
{
	return UID();
}

HRESULT HWNDElement::Create(HWND, bool, unsigned int, Element*, unsigned long*, Element** pOut)
{
	return E_NOTIMPL;
}

long HWNDElement::CreateStyleParser(DUIXmlParser**)
{
	return 0;
}

void HWNDElement::DelayActivateTooltip()
{
}

Element* HWNDElement::ElementFromPoint(LPPOINT)
{
	return nullptr;
}

bool WINAPI HWNDElement::FindShortcut(unsigned short, Element*, Element**, int*, int*, int)
{
	return false;
}

void HWNDElement::FlushWorkingSet()
{
}

IClassInfo* WINAPI HWNDElement::GetClassInfoPtr()
{
	return nullptr;
}

HWNDElement* WINAPI HWNDElement::GetFocusedHWNDElement()
{
	return nullptr;
}

Element* WINAPI HWNDElement::GetKeyFocusedElement()
{
	return nullptr;
}

unsigned short HWNDElement::GetUIState()
{
	return 0;
}

bool HWNDElement::GetWrapKeyboardNavigate()
{
	return false;
}

long HWNDElement::Initialize(HWND, bool, unsigned int, Element*, unsigned long*)
{
	return 0;
}

bool HWNDElement::IsFirstElement(Element*)
{
	return false;
}

bool HWNDElement::IsLastElement(Element*)
{
	return false;
}

long WINAPI HWNDElement::Register()
{
	return 0;
}

void WINAPI HWNDElement::SetClassInfoPtr(IClassInfo*)
{
}

void HWNDElement::SetFocus(bool)
{
}

void HWNDElement::SetParentSizeControl(bool)
{
}

void HWNDElement::SetScreenCenter(bool)
{
}

long HWNDElement::SetWrapKeyboardNavigate(bool)
{
	return 0;
}

bool HWNDElement::ShowAccel(void)
{
	return false;
}

bool HWNDElement::ShowFocus(void)
{
	return false;
}

void HWNDElement::ShowUIState(bool, bool)
{
}

UID WINAPI HWNDElement::ThemeChange()
{
	return UID();
}

void HWNDElement::ToggleUIState(bool, bool)
{
}

const PropertyInfo* HWNDElement::WrapKeyboardNavigateProp()
{
	return nullptr;
}

LRESULT WINAPI HWNDElement::StaticWndProc(HWND, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	return 0;
}

LRESULT HWNDElement::WndProc(HWND, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	return LRESULT();
}

void HWNDElement::GetWindowClassNameAndStyle(const unsigned short**, UINT*)
{
}

void HWNDElement::_OnUIStateChanged(WORD, WORD)
{
}

bool WINAPI HWNDElement::FindShortcutRecursive(unsigned short, Element*, Element**, int*, int*, int)
{
	return false;
}

IClassInfo* HWNDElement::s_pClassInfo;

HWNDElementProvider::HWNDElementProvider(void)
{
}

HWNDElementProvider::~HWNDElementProvider(void)
{
}

long HWNDElementProvider::Create(HWNDElement*, InvokeHelper*, HWNDElementProvider**)
{
	return 0;
}

unsigned long HWNDElementProvider::AddRef(void)
{
	return 0;
}

long HWNDElementProvider::QueryInterface(_GUID const&, void**)
{
	return 0;
}

unsigned long HWNDElementProvider::Release(void)
{
	return 0;
}

ProviderProxyCall HWNDElementProvider::GetProxyCreator(void)
{
	return ProviderProxyCall();
}

long HWNDElementProvider::ElementProviderFromPoint(double, double, IRawElementProviderFragment**)
{
	return 0;
}

long HWNDElementProvider::GetFocus(IRawElementProviderFragment**)
{
	return 0;
}

long HWNDElementProvider::Init(HWNDElement*, InvokeHelper*)
{
	return 0;
}

HWNDElementProxy::HWNDElementProxy(HWNDElementProxy const&)
{
}

HWNDElementProxy::HWNDElementProxy(void)
{
}

HWNDElementProxy& HWNDElementProxy::operator=(HWNDElementProxy const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

HWNDElementProxy* HWNDElementProxy::Create(HWNDElement*)
{
	return nullptr;
}

long HWNDElementProxy::DoMethod(int, char*)
{
	return 0;
}

void HWNDElementProxy::Init(HWNDElement*)
{
}

long HWNDElementProxy::ElementFromPoint(double, double, IRawElementProviderFragment**)
{
	return 0;
}

long HWNDElementProxy::GetFocus(IRawElementProviderFragment**)
{
	return 0;
}

HWNDHost::HWNDHost(const HWNDHost&)
{
}

HWNDHost::HWNDHost()
{
}

HWNDHost& HWNDHost::operator=(const HWNDHost&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

HWNDHost::~HWNDHost()
{
}

long HWNDHost::Initialize(unsigned int, unsigned int, Element*, unsigned long*)
{
	return 0;
}

void HWNDHost::Detach()
{
}

unsigned short HWNDHost::GetBackgroundOwnerID()
{
	return 0;
}

HWND HWNDHost::GetHWNDParent()
{
	return HWND();
}

bool HWNDHost::GetOptimizeMove()
{
	return false;
}

bool HWNDHost::GetTransparent()
{
	return false;
}

long HWNDHost::GetClientAccessibleImpl(IAccessible**)
{
	return 0;
}

long HWNDHost::SetBackgroundOwnerID(UCString)
{
	return 0;
}

long HWNDHost::SetOptimizeMove(bool)
{
	return 0;
}

long HWNDHost::SetTransparent(bool)
{
	return 0;
}

long WINAPI HWNDHost::Create(unsigned int, unsigned int, Element*, unsigned long*, Element** pOut)
{
	return 0;
}

long WINAPI HWNDHost::Create(Element*, unsigned long*, Element** pOut)
{
	return 0;
}

const PropertyInfo* WINAPI HWNDHost::BackgroundOwnerIDProp()
{
	return nullptr;
}

IClassInfo* WINAPI HWNDHost::GetClassInfoPtr()
{
	return nullptr;
}

const PropertyInfo* WINAPI HWNDHost::OptimizeMoveProp()
{
	return nullptr;
}

long WINAPI HWNDHost::Register()
{
	return 0;
}

void WINAPI HWNDHost::SetClassInfoPtr(IClassInfo*)
{
}

const PropertyInfo* WINAPI HWNDHost::ThemeChangedProp()
{
	return nullptr;
}

const PropertyInfo* WINAPI HWNDHost::TransparentProp()
{
	return nullptr;
}

IClassInfo* HWNDHost::GetClassInfoW()
{
	return nullptr;
}

long HWNDHost::GetAccessibleImpl(IAccessible**)
{
	return 0;
}

bool HWNDHost::GetKeyFocused()
{
	return false;
}

unsigned int HWNDHost::MessageCallback(LPGMSG)
{
	return 0;
}

void HWNDHost::OnDestroy()
{
}

void HWNDHost::OnEvent(Event*)
{
}

void HWNDHost::OnInput(InputEvent*)
{
}

void HWNDHost::OnPropertyChanged(const PropertyInfo*, int, Value*, Value*)
{
}

void HWNDHost::Paint(HDC, LPCRECT, LPCRECT, LPRECT, LPRECT)
{
}

void HWNDHost::SetKeyFocus()
{
}

void HWNDHost::SetWindowDirection(HWND)
{
}

HWND HWNDHost::GetHWND()
{
	return HWND();
}

bool HWNDHost::OnMessage(UINT uMsg, WPARAM wParam, LPARAM lParam, LRESULT*)
{
	return false;
}

bool HWNDHost::OnNotify(UINT uMsg, WPARAM wParam, LPARAM lParam, LRESULT*)
{
	return false;
}

bool HWNDHost::OnSysChar(UChar)
{
	return false;
}

bool HWNDHost::OnSinkThemeChanged(UINT uMsg, WPARAM wParam, LPARAM lParam, LRESULT*)
{
	return false;
}

bool HWNDHost::OnCtrlThemeChanged(UINT, WPARAM wParam, LPARAM lParam, LRESULT*)
{
	return false;
}

void HWNDHost::OnWindowStyleChanged(WPARAM, const STYLESTRUCT*)
{
}

int HWNDHost::OnAdjustWindowSize(int, int, unsigned int)
{
	return 0;
}

void WINAPI HWNDHost::AttachCtrlSubclassProc(HWND)
{
}

LRESULT WINAPI HWNDHost::CtrlSubclassProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	return 0;
}

void HWNDHost::PrintRTLControl(HDC, HDC, const RECT&)
{
}

long HWNDHost::SetThemeChanged(int)
{
	return 0;
}

void HWNDHost::SyncBackground()
{
}

void HWNDHost::SyncDirection()
{
}

void HWNDHost::SyncFont()
{
}

void HWNDHost::SyncForeground()
{
}

void HWNDHost::SyncParent()
{
}

void HWNDHost::SyncRect(unsigned int, bool)
{
}

void HWNDHost::SyncStyle()
{
}

void HWNDHost::SyncText()
{
}

void HWNDHost::SyncVisible()
{
}

int HWNDHost::VerifyParentage()
{
	return 0;
}

HWND HWNDHost::CreateAccNameLabel(HWND)
{
	return HWND();
}

Element* HWNDHost::GetBackgroundOwner()
{
	return nullptr;
}

HFONT HWNDHost::GetFont()
{
	return HFONT();
}

bool HWNDHost::GetStaticColor(HDC, HBRUSH*)
{
	return false;
}

int HWNDHost::GetThemeChanged()
{
	return 0;
}

bool HWNDHost::IsMoveDeferred()
{
	return false;
}

void HWNDHost::OnHosted(Element*)
{
}

void HWNDHost::OnUnHosted(Element*)
{
}

HWND HWNDHost::CreateHWND(HWND)
{
	return HWND();
}

bool HWNDHost::EraseBkgnd(HDC, LRESULT*)
{
	return false;
}

BOOL HWNDHost::_CtrlWndProc(void*, HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam, LRESULT* plResult)
{
	return 0;
}

BOOL WINAPI HWNDHost::_SinkWndProc(void*, HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam, LRESULT* plResult)
{
	return 0;
}

void HWNDHost::ApplySinkRegion(struct tagRECT const*, bool)
{
}

long HWNDHost::GetAccessibleImpl(IAccessible**, bool)
{
	return 0;
}

void HWNDHost::GetSinkRect(RECT const*, LPRECT)
{
}

bool HWNDHost::HaveWin32Focus()
{
	return false;
}

void HWNDHost::SyncColorsAndFonts()
{
}

void HWNDHost::UnvirtualizePosition()
{
}

void HWNDHost::_DeleteCtrlWnd()
{
}

unsigned int const (*__ptr32 HWNDHost::g_rgMouseMap)[3];

IClassInfo* HWNDHost::s_pClassInfo;

Proxy::Proxy(Proxy const&)
{
}

Proxy::Proxy(void)
{
}

Proxy::~Proxy(void)
{
}

Proxy& Proxy::operator=(Proxy const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

long Proxy::SyncCallback(HGADGET__*, void*, EventMsg*)
{
	return 0;
}

void Proxy::Invoke(unsigned int, void*)
{
}

void Proxy::OnInvoke(unsigned int, void*)
{
}

ProviderProxy::ProviderProxy(ProviderProxy const&)
{
}

ProviderProxy& ProviderProxy::operator=(ProviderProxy const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

ProviderProxy::ProviderProxy(void)
{
}

void ProviderProxy::Init(Element*)
{
}

IProvider::IProvider(IProvider const&)
{
}

IProvider::IProvider(void)
{
}

IProvider& IProvider::operator=(IProvider const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

ISBLeak::ISBLeak(ISBLeak const&)
{
}

ISBLeak::ISBLeak(void)
{
}

ISBLeak& ISBLeak::operator=(ISBLeak const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

IXProviderCP::IXProviderCP(IXProviderCP const&)
{
}

IXProviderCP::IXProviderCP(void)
{
}

IXProviderCP& IXProviderCP::operator=(IXProviderCP const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

IXElementCP::IXElementCP(IXElementCP const&)
{
}

IXElementCP::IXElementCP(void)
{
}

IXElementCP& IXElementCP::operator=(IXElementCP const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

IDataEngine::IDataEngine(IDataEngine const&)
{
}

IDataEngine::IDataEngine(void)
{
}

IDataEngine& IDataEngine::operator=(IDataEngine const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

IDataEngine::~IDataEngine(void)
{
}

StyleSheet::StyleSheet(StyleSheet const&)
{
}

StyleSheet::StyleSheet(void)
{
}

StyleSheet& StyleSheet::operator=(StyleSheet const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

long StyleSheet::Create(StyleSheet**)
{
	return 0;
}

InvokeHelper::InvokeHelper(void)
{
}

InvokeHelper::~InvokeHelper(void)
{
}

long InvokeHelper::DoInvoke(int, ElementProvider*, ProviderProxy*(__stdcall *)(Element*), char*)
{
	return 0;
}

int InvokeHelper::Init(unsigned long)
{
	return 0;
}

void InvokeHelper::Uninit(void)
{
}

int InvokeHelper::_WndProc(void*, HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam, LRESULT* plResult)
{
	return 0;
}

unsigned int const InvokeHelper::s_uInvokeHelperMsg = 0;

void InvokeHelper::OnInvoke(InvokeHelper::InvokeArgs*)
{
}

InvokeManager& InvokeManager::operator=(InvokeManager const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

void InvokeManager::Close(void)
{
}

void InvokeManager::CloseThread(void)
{
}

long InvokeManager::GetInvokeHelper(InvokeHelper**)
{
	return 0;
}

long InvokeManager::Init(void)
{
	return 0;
}

InvokeHelper* InvokeManager::FindInvokeHelper(unsigned int*)
{
	return nullptr;
}

UiaArray<InvokeHelper*>* InvokeManager::g_pArrayInvokeHelper;
CRITICAL_SECTION InvokeManager::g_cs;

InvokeProvider::InvokeProvider(void)
{
}

InvokeProvider::~InvokeProvider(void)
{
}

unsigned long InvokeProvider::AddRef(void)
{
	return 0;
}

ProviderProxyCall InvokeProvider::GetProxyCreator(void)
{
	return ProviderProxyCall();
}

long InvokeProvider::Invoke(void)
{
	return 0;
}

long InvokeProvider::QueryInterface(GUID const&, void**)
{
	return 0;
}

unsigned long InvokeProvider::Release(void)
{
	return 0;
}

InvokeProxy::InvokeProxy(InvokeProxy const&)
{
}

InvokeProxy::InvokeProxy(void)
{
}

InvokeProxy& InvokeProxy::operator=(InvokeProxy const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

InvokeProxy* InvokeProxy::Create(Element*)
{
	return nullptr;
}

bool InvokeProxy::IsPatternSupported(Element*)
{
	return false;
}

long InvokeProxy::DoMethod(int, char*)
{
	return 0;
}

void InvokeProxy::Init(Element*)
{
}

LinkedListNode& LinkedListNode::operator=(LinkedListNode const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

LinkedList::LinkedList(void)
{
}

LinkedList::~LinkedList(void)
{
}

LinkedList& LinkedList::operator=(LinkedList const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

void LinkedList::Add(LinkedListNode*)
{
}

void LinkedList::Remove(LinkedListNode*)
{
}

LinkedListNode* LinkedList::RemoveTail(void)
{
	return nullptr;
}

Macro::Macro(Macro const&)
{
}

Macro::Macro(void)
{
}

Macro::~Macro(void)
{
}

Macro& Macro::operator=(Macro const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

long Macro::Create(Element*, unsigned long*, Element**)
{
	return 0;
}

PropertyInfo const* Macro::ExpandProp(void)
{
	return nullptr;
}

IClassInfo* Macro::GetClassInfoPtr(void)
{
	return nullptr;
}

long Macro::Register(void)
{
	return 0;
}

void Macro::SetClassInfoPtr(IClassInfo*)
{
}

void Macro::SetDataEntry(IDataEntry*, Element*)
{
}

long Macro::SetExpand(unsigned short const*)
{
	return 0;
}

void Macro::SetParser(DUIXmlParser*)
{
}

IDataEntry* Macro::GetDataEntry(void)
{
	return nullptr;
}

unsigned short const* Macro::GetExpand(Value**)
{
	return nullptr;
}

long Macro::Initialize(Element*, unsigned long*)
{
	return 0;
}

long Macro::Add(Element**, unsigned int)
{
	return 0;
}

IClassInfo* Macro::GetClassInfoW(void)
{
	return nullptr;
}

void Macro::OnPropertyChanged(PropertyInfo const*, int, Value*, Value*)
{
}

long Macro::BuildElement(void)
{
	return 0;
}

void Macro::ResolveBindings(void)
{
}

IClassInfo* Macro::s_pClassInfo;

CritSecLock::CritSecLock(CRITICAL_SECTION* pacs) STUB_VOID;
CritSecLock::~CritSecLock() STUB_VOID;
void CritSecLock::Unlock() STUB_VOID;

Expression& Expression::operator=(Expression const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

void Expression::Destroy(void)
{
}

Surface::Surface(Surface const&)
{
}

Surface::Surface(void)
{
}

Surface::~Surface(void)
{
}

Surface& Surface::operator=(Surface const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

Surface::EType Surface::GetSurfaceType(unsigned int)
{
	return Surface::EType();
}

unsigned int Surface::GetSurfaceType(Surface::EType)
{
	return 0;
}

DCSurface::DCSurface(DCSurface const&)
{
}

DCSurface::DCSurface(HDC)
{
}

DCSurface::~DCSurface(void)
{
}

DCSurface& DCSurface::operator=(DCSurface const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

HDC DCSurface::GetHDC(void)
{
	return HDC();
}

Surface::EType DCSurface::GetType(void) const
{
	return Surface::EType();
}

ResourceModuleHandles::ResourceModuleHandles(void)
{
}

ResourceModuleHandles::~ResourceModuleHandles(void)
{
}

ResourceModuleHandles& ResourceModuleHandles::operator=(ResourceModuleHandles const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

long ResourceModuleHandles::GetHandle(unsigned short const*, HINSTANCE*)
{
	return 0;
}

long volatile ResourceModuleHandles::g_cRefCount;

Movie::Movie(Movie const&)
{
}

Movie::Movie()
{
}

Movie::~Movie()
{
}

Movie& Movie::operator=(Movie const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

long Movie::Create(unsigned int, Element*, unsigned long*, Element**)
{
	return 0;
}

long Movie::Create(Element*, unsigned long*, Element**)
{
	return 0;
}

UID Movie::AdvanceFrame()
{
	return UID();
}

void Movie::SetClassInfoPtr(IClassInfo*)
{
}

void Movie::RawActionProc(GMA_ACTIONINFO*)
{
}

long Movie::Register()
{
	return 0;
}

IClassInfo* Movie::GetClassInfoPtr()
{
	return nullptr;
}

const PropertyInfo* Movie::AutoStartProp()
{
	return nullptr;
}

const PropertyInfo* Movie::AutoStopProp()
{
	return nullptr;
}

const PropertyInfo* Movie::CompositingQualityProp()
{
	return nullptr;
}

const PropertyInfo* Movie::DrawOutlinesProp()
{
	return nullptr;
}

const PropertyInfo* Movie::InterpolationModeProp()
{
	return nullptr;
}

const PropertyInfo* Movie::PathProp()
{
	return nullptr;
}

const PropertyInfo* Movie::PixelOffsetModeProp()
{
	return nullptr;
}

const PropertyInfo* Movie::PlayAllFramesModeProp()
{
	return nullptr;
}

const PropertyInfo* Movie::RepeatProp()
{
	return nullptr;
}

const PropertyInfo* Movie::SmoothingModeProp()
{
	return nullptr;
}

void Movie::Forward()
{
}

bool Movie::GetAutoStart()
{
	return false;
}

bool Movie::GetAutoStop()
{
	return false;
}

int Movie::GetCompositingQuality()
{
	return 0;
}

bool Movie::GetDrawOutlines()
{
	return false;
}

int Movie::GetInterpolationMode()
{
	return 0;
}

UCString Movie::GetPath(Value**)
{
	return UCString();
}

int Movie::GetPixelOffsetMode()
{
	return 0;
}

bool Movie::GetPlayAllFramesMode()
{
	return false;
}

bool Movie::GetRepeat()
{
	return false;
}

int Movie::GetSmoothingMode()
{
	return 0;
}

HRESULT Movie::LoadFromPath(UCString)
{
	return E_NOTIMPL;
}

HRESULT Movie::LoadFromResource(HINSTANCE, int)
{
	return E_NOTIMPL;
}

void Movie::Pause()
{
}

void Movie::Play()
{
}

void Movie::Resume()
{
}

void Movie::Rewind()
{
}

long Movie::SetAutoStart(bool)
{
	return 0;
}

long Movie::SetAutoStop(bool)
{
	return 0;
}

long Movie::SetCompositingQuality(int)
{
	return 0;
}

long Movie::SetDrawOutlines(bool)
{
	return 0;
}

long Movie::SetInterpolationMode(int)
{
	return 0;
}

long Movie::SetPath(UCString)
{
	return 0;
}

long Movie::SetPixelOffsetMode(int)
{
	return 0;
}

long Movie::SetPlayAllFramesMode(bool)
{
	return 0;
}

long Movie::SetRepeat(bool)
{
	return 0;
}

long Movie::SetSmoothingMode(int)
{
	return 0;
}

void Movie::doAction(GMA_ACTIONINFO*)
{
}

IClassInfo* Movie::GetClassInfoW()
{
	return nullptr;
}

void Movie::OnDestroy()
{
}

void Movie::OnEvent(Event*)
{
}

void Movie::OnHosted(Element*)
{
}

void Movie::Paint(HDC, LPCRECT, LPCRECT, LPRECT, LPRECT)
{
}

void Movie::advanceFrameActionStart()
{
}

void Movie::advanceFrameActionStop()
{
}

IClassInfo* Movie::s_pClassInfo;

Navigator::Navigator(Navigator const&)
{
}

Navigator::Navigator(void)
{
}

Navigator::~Navigator(void)
{
}

Navigator& Navigator::operator=(Navigator const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

UID Navigator::ActionInitiated(void)
{
	return UID();
}

long Navigator::Create(Element*, unsigned long*, Element**)
{
	return 0;
}

long Navigator::Register(void)
{
	return 0;
}

void Navigator::SetClassInfoPtr(IClassInfo*)
{
}

IClassInfo* Navigator::GetClassInfoPtr(void)
{
	return nullptr;
}

PropertyInfo const* Navigator::TargetPageProp(void)
{
	return nullptr;
}

Browser* Navigator::GetBrowser(void)
{
	return nullptr;
}

unsigned short const* Navigator::GetTargetPage(Value**)
{
	return nullptr;
}

long Navigator::Initialize(Element*, unsigned long*)
{
	return 0;
}

long Navigator::SetTargetPage(unsigned short const*)
{
	return 0;
}

IClassInfo* Navigator::GetClassInfoW(void)
{
	return nullptr;
}

void Navigator::OnEvent(Event*)
{
}

void Navigator::FireNavigationEvent(void)
{
}

IClassInfo* Navigator::s_pClassInfo;

NavigatorSelectionItemProxy::NavigatorSelectionItemProxy(NavigatorSelectionItemProxy const&)
{
}

NavigatorSelectionItemProxy::NavigatorSelectionItemProxy(void)
{
}

NavigatorSelectionItemProxy& NavigatorSelectionItemProxy::operator=(NavigatorSelectionItemProxy const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

long NavigatorSelectionItemProxy::DoMethod(int, char*)
{
	return 0;
}

void NavigatorSelectionItemProxy::Init(Element*)
{
}

long NavigatorSelectionItemProxy::AddToSelection(Browser*)
{
	return 0;
}

long NavigatorSelectionItemProxy::GetIsSelected(Browser*, int*)
{
	return 0;
}

void NavScoring::Init(Element*, int, NavReference const*)
{
}

NavScoring& NavScoring::operator=(NavScoring const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

int NavScoring::TrackScore(Element*, Element*)
{
	return 0;
}

int NavScoring::Try(Element*, int, NavReference const*, unsigned long)
{
	return 0;
}

Page::Page(Page const&)
{
}

Page::Page(void)
{
}

Page::~Page(void)
{
}

Page& Page::operator=(Page const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

long Page::Create(Element*, unsigned long*, Element**)
{
	return 0;
}

IClassInfo* Page::GetClassInfoPtr(void)
{
	return nullptr;
}

long Page::Register(void)
{
	return 0;
}

void Page::SetClassInfoPtr(IClassInfo*)
{
}

long Page::Initialize(Element*, unsigned long*)
{
	return 0;
}

IClassInfo* Page::GetClassInfoW(void)
{
	return nullptr;
}

IClassInfo* Page::s_pClassInfo;

Pages::Pages(Pages const&)
{
}

Pages::Pages(void)
{
}

Pages::~Pages(void)
{
}

Pages& Pages::operator=(Pages const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

long Pages::Create(Element*, unsigned long*, Element**)
{
	return 0;
}

IClassInfo* Pages::GetClassInfoPtr(void)
{
	return nullptr;
}

long Pages::Register(void)
{
	return 0;
}

void Pages::SetClassInfoPtr(IClassInfo*)
{
}

unsigned int Pages::GetCount(void)
{
	return 0;
}

Element* Pages::GetPage(unsigned int)
{
	return nullptr;
}

Element* Pages::GetPage(unsigned short const*)
{
	return nullptr;
}

long Pages::Initialize(Element*, unsigned long*)
{
	return 0;
}

void Pages::SetNoBrowseOnFirstAdd(void)
{
}

long Pages::Add(Element**, unsigned int)
{
	return 0;
}

IClassInfo* Pages::GetClassInfoW(void)
{
	return nullptr;
}

IClassInfo* Pages::s_pClassInfo;

Schema& Schema::operator=(Schema const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

long Schema::CreatePatternProvider(Pattern, ElementProvider*, IUnknown**)
{
	return 0;
}

Schema::Event Schema::EventFromEventId(int)
{
	return Schema::Event();
}

long Schema::Init(void)
{
	return 0;
}

int Schema::LookupAccessibleRole(int, bool*)
{
	return 0;
}

Schema::Pattern Schema::PatternFromPatternId(int)
{
	return Schema::Pattern();
}

Unknow3Call Schema::PfnIsSupportedFromPattern(Pattern)
{
	return Unknow3Call();
}

long Schema::LookupControlInfos(void)
{
	return 0;
}

long Schema::LookupEventInfos(void)
{
	return 0;
}

long Schema::LookupPatternInfos(void)
{
	return 0;
}

long Schema::LookupPropertyInfos(void)
{
	return 0;
}

long Schema::GetProcs(void)
{
	return 0;
}

int Schema::AcceleratorKeyProperty;
int Schema::AccessKeyProperty;
int Schema::AsyncContentLoadedEvent;
int Schema::AutomationFocusChangedEvent;
int Schema::AutomationIdProperty;
int Schema::AutomationPropertyChangedEvent;
int Schema::BoundingRectangleProperty;
int Schema::ButtonControlType;
int Schema::CalendarControlType;
int Schema::CheckBoxControlType;
int Schema::ClassNameProperty;
int Schema::ClickablePointProperty;
int Schema::ComboBoxControlType;
int Schema::ControlTypeProperty;
int Schema::CultureProperty;
int Schema::CustomControlType;
int Schema::DataGridControlType;
int Schema::DataItemControlType;
int Schema::DockPattern;
int Schema::DocumentControlType;
int Schema::EditControlType;
int Schema::ExpandCollapsePattern;
int Schema::ExpandCollapse_ExpandCollapseState_Property;
int Schema::FrameworkId;
int Schema::GridItemPattern;
int Schema::GridItem_ColumnSpan_Property;
int Schema::GridItem_Column_Property;
int Schema::GridItem_Parent_Property;
int Schema::GridItem_RowSpan_Property;
int Schema::GridItem_Row_Property;
int Schema::GridPattern;
int Schema::Grid_ColumnCount_Property;
int Schema::Grid_RowCount_Property;
int Schema::GroupControlType;
int Schema::HasKeyboardFocusProperty;
int Schema::HeaderControlType;
int Schema::HeaderItemControlType;
int Schema::HelpTextProperty;
int Schema::HyperlinkControlType;
int Schema::ImageControlType;
int Schema::InvokeInvokedEvent;
int Schema::InvokePattern;
int Schema::IsContentElementProperty;
int Schema::IsControlElementProperty;
int Schema::IsEnabledProperty;
int Schema::IsKeyboardFocusableProperty;
int Schema::IsOffscreen;
int Schema::IsPasswordProperty;
int Schema::ItemContainerPattern;
int Schema::ItemStatusProperty;
int Schema::ItemTypeProperty;
int Schema::LabeledByProperty;
int Schema::LayoutInvalidatedEvent;
int Schema::ListControlType;
int Schema::ListItemControlType;
int Schema::LocalizedControlTypeProperty;
int Schema::MenuBarControlType;
int Schema::MenuClosedEvent;
int Schema::MenuControlType;
int Schema::MenuItemControlType;
int Schema::MenuOpenedEvent;
int Schema::MultipleViewPattern;
int Schema::NameProperty;
int Schema::NewNativeWindowHandleProperty;
int Schema::NullControlType;
int Schema::Orientation;
int Schema::PaneControlType;
int Schema::ProcessIdProperty;
int Schema::ProgressBarControlType;
int Schema::RadioButtonControlType;
int Schema::RangeValuePattern;
int Schema::RangeValue_IsReadOnly_Property;
int Schema::RangeValue_LargeChange_Property;
int Schema::RangeValue_Maximum_Property;
int Schema::RangeValue_Minimum_Property;
int Schema::RangeValue_SmallChange_Property;
int Schema::RangeValue_Value_Property;
int Schema::RuntimeIdProperty;
int Schema::ScrollBarControlType;
int Schema::ScrollItemPattern;
int Schema::ScrollPattern;
int Schema::Scroll_HorizontalScrollPercent_Property;
int Schema::Scroll_HorizontalViewSize_Property;
int Schema::Scroll_HorizontallyScrollable_Property;
int Schema::Scroll_VerticalScrollPercent_Property;
int Schema::Scroll_VerticalViewSize_Property;
int Schema::Scroll_VerticallyScrollable_Property;
int Schema::SelectionInvalidatedEvent;
int Schema::SelectionItemElementAddedToSelectionEvent;
int Schema::SelectionItemElementRemovedFromSelectionEvent;
int Schema::SelectionItemElementSelectedEvent;
int Schema::SelectionItemPattern;
int Schema::SelectionItem_IsSelected_Property;
int Schema::SelectionItem_SelectionContainer_Property;
int Schema::SelectionPattern;
int Schema::Selection_CanSelectMultiple_Property;
int Schema::Selection_IsSelectionRequired_Property;
int Schema::Selection_Selection_Property;
int Schema::SeparatorControlType;
int Schema::SliderControlType;
int Schema::SpinnerControlType;
int Schema::SplitButtonControlType;
int Schema::StatusBarControlType;
int Schema::StructureChangedEvent;
int Schema::TabControlType;
int Schema::TabItemControlType;
int Schema::TableControlType;
int Schema::TableItemPattern;
int Schema::TableItem_ColumnHeaderItems_Property;
int Schema::TableItem_RowHeaderItems_Property;
int Schema::TablePattern;
int Schema::Table_ColumnHeaders_Property;
int Schema::Table_RowHeaders_Property;
int Schema::Table_RowOrColumnMajor_Property;
int Schema::TextControlType;
int Schema::TextPattern;
int Schema::TextTextSelectionChangedEvent;
int Schema::ThumbControlType;
int Schema::TitleBarControlType;
int Schema::TogglePattern;
int Schema::Toggle_ToggleState_Property;
int Schema::ToolBarControlType;
int Schema::ToolTipClosedEvent;
int Schema::ToolTipControlType;
int Schema::ToolTipOpenedEvent;
int Schema::TransformPattern;
int Schema::TreeControlType;
int Schema::TreeItemControlType;
long (__stdcall*Schema::UiaHostProviderFromHwnd)(HWND hwnd, IRawElementProviderSimple** ppProvider);
int (__stdcall*Schema::UiaLookupId)(AutomationIdentifierType type, const GUID* pGuid);
long (__stdcall*Schema::UiaRaiseAutomationEvent)(IRawElementProviderSimple* pProvider, EVENTID id);
long (__stdcall*Schema::UiaRaiseAutomationPropertyChangedEvent)(IRawElementProviderSimple* pProvider, PROPERTYID id, VARIANT oldValue, VARIANT newValue);
long (__stdcall*Schema::UiaRaiseStructureChangedEvent)(IRawElementProviderSimple* pProvider, StructureChangeType structureChangeType, int* pRuntimeId, int cRuntimeIdLen);
LRESULT (__stdcall*Schema::UiaReturnRawElementProvider)(HWND hwnd, WPARAM wParam, LPARAM lParam, IRawElementProviderSimple* el);
int Schema::ValuePattern;
int Schema::Value_IsReadOnly_Property;
int Schema::Value_Value_Property;
int Schema::VirtualizedItemPattern;
int Schema::WindowControlType;
int Schema::WindowPattern;
int Schema::WindowWindowClosedEvent;
int Schema::WindowWindowOpenedEvent;

Schema::RoleMap const* __ptr32 const Schema::_roleMapping = NULL;
Schema::ControlInfo const* __ptr32 const Schema::g_controlInfoTable = NULL;
Schema::EventInfo const* __ptr32 const Schema::g_eventInfoTable = NULL;
Schema::EventMap const* __ptr32 const Schema::g_eventMapping = NULL;
bool Schema::g_fInited;
Schema::PatternInfo const* __ptr32 const Schema::g_patternInfoTable = NULL;
Schema::PatternMap const* __ptr32 const Schema::g_patternMapping = NULL;
const Schema::PropertyInfo* __ptr32 const Schema::g_propertyInfoTable = NULL;


void NavReference::Init(Element* pe, RECT* prc) STUB_VOID;

Progress::Progress(Progress const&)
{
}

Progress::Progress(void)
{
}

Progress::~Progress(void)
{
}

Progress& Progress::operator=(Progress const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

long Progress::Create(Element*, unsigned long*, Element**)
{
	return 0;
}

IClassInfo* Progress::GetClassInfoPtr(void)
{
	return nullptr;
}

PropertyInfo const* Progress::PositionProp(void)
{
	return nullptr;
}

long Progress::Register(void)
{
	return 0;
}

void Progress::SetClassInfoPtr(IClassInfo*)
{
}

PropertyInfo const* Progress::MaximumProp(void)
{
	return nullptr;
}

PropertyInfo const* Progress::MinimumProp(void)
{
	return nullptr;
}

int Progress::GetMaximum(void)
{
	return 0;
}

int Progress::GetMinimum(void)
{
	return 0;
}

int Progress::GetPosition(void)
{
	return 0;
}

long Progress::Initialize(Element*, unsigned long*)
{
	return 0;
}

long Progress::SetMaximum(int)
{
	return 0;
}

long Progress::SetMinimum(int)
{
	return 0;
}

long Progress::SetPosition(int)
{
	return 0;
}

IClassInfo* Progress::GetClassInfoW(void)
{
	return nullptr;
}

SIZE Progress::GetContentSize(int, int, Surface*)
{
	return SIZE();
}

void Progress::Paint(HDC, RECT const*, RECT const*, RECT*, RECT*)
{
}

IClassInfo* Progress::s_pClassInfo;

ProgressRangeValueProxy::ProgressRangeValueProxy(ProgressRangeValueProxy const&)
{
}

ProgressRangeValueProxy::ProgressRangeValueProxy(void)
{
}

ProgressRangeValueProxy& ProgressRangeValueProxy::operator=(ProgressRangeValueProxy const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

long ProgressRangeValueProxy::DoMethod(int, char*)
{
	return 0;
}

void ProgressRangeValueProxy::Init(Element*)
{
}

template <class X, class Y, int i>
inline DirectUI::PatternProvider<X, Y, i>::PatternProvider()
{
}

template <class X, class Y, int i>
PatternProvider<X, Y, i>::~PatternProvider()
{
}

template <class X, class Y, int i>
long PatternProvider<X, Y, i>::Create(ElementProvider*, IUnknown**)
{
	return 0;
}

template <class X, class Y, int i>
void PatternProvider<X, Y, i>::Init(ElementProvider*)
{
}

template <class X, class Y, int i>
ProviderProxyCall PatternProvider<X, Y, i>::GetProxyCreator(void)
{
	return ProviderProxyCall();
}

template <class X, class Y, int i>
long PatternProvider<X, Y, i>::DoInvoke(int, ...)
{
	return 0;
}

XResourceProvider::XResourceProvider()
{
}

XResourceProvider::XResourceProvider(const XResourceProvider&)
{
}

XResourceProvider& XResourceProvider::operator=(const XResourceProvider&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

long WINAPI XResourceProvider::Create(XResourceProvider** pOut)
{
	return 0;
}

long WINAPI XResourceProvider::Create(HINSTANCE, UCString, UCString, UCString, XResourceProvider** pOut)
{
	return 0;
}

long XResourceProvider::Initialize(HINSTANCE h, UCString s1, UCString s2, UCString s3)
{
	return 0;
}

long XResourceProvider::CreateDUICP(HWNDElement*, HWND, HWND, Element**, DUIXmlParser**)
{
	return 0;
}

long XResourceProvider::CreateParserCP(DUIXmlParser** pOut)
{
	return 0;
}

void XResourceProvider::DestroyCP()
{
}

PText::PText(PText const&)
{
}

PText::PText(void)
{
}

PText::~PText(void)
{
}

PText& PText::operator=(PText const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

long PText::Create(Element*, unsigned long*, Element**)
{
	return 0;
}

IClassInfo* PText::GetClassInfoPtr(void)
{
	return nullptr;
}

long PText::Register(void)
{
	return 0;
}

void PText::SetClassInfoPtr(IClassInfo*)
{
}

long PText::Initialize(Element*, unsigned long*)
{
	return 0;
}

void PText::SetDataEntry(IDataEntry*)
{
}

IClassInfo* PText::GetClassInfoW(void)
{
	return nullptr;
}

bool PText::OnPropertyChanging(PropertyInfo const*, int, Value*, Value*)
{
	return false;
}

IClassInfo* PText::s_pClassInfo;

PushButton::PushButton(PushButton const&)
{
}

PushButton::PushButton(void)
{
}

PushButton::~PushButton(void)
{
}

PushButton& PushButton::operator=(PushButton const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

long PushButton::Create(Element*, unsigned long*, Element**)
{
	return 0;
}

PropertyInfo const* PushButton::EnforceSizeProp(void)
{
	return nullptr;
}

IClassInfo* PushButton::GetClassInfoPtr(void)
{
	return nullptr;
}

UID PushButton::Hosted(void)
{
	return UID();
}

long PushButton::Register(void)
{
	return 0;
}

void PushButton::SetClassInfoPtr(IClassInfo*)
{
}

bool PushButton::GetEnforceSize(void)
{
	return false;
}

long PushButton::SetEnforceSize(bool)
{
	return 0;
}

IClassInfo* PushButton::GetClassInfoW(void)
{
	return nullptr;
}

SIZE PushButton::GetContentSize(int, int, Surface*)
{
	return SIZE();
}

void PushButton::OnHosted(Element*)
{
}

void PushButton::OnUnHosted(Element*)
{
}

void PushButton::FireHostEvent(Element*, bool)
{
}

IClassInfo* PushButton::s_pClassInfo;

RadioButtonGlyph::RadioButtonGlyph(RadioButtonGlyph const&)
{
}

RadioButtonGlyph::RadioButtonGlyph(void)
{
}

RadioButtonGlyph::~RadioButtonGlyph(void)
{
}

RadioButtonGlyph& RadioButtonGlyph::operator=(RadioButtonGlyph const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

long RadioButtonGlyph::Create(unsigned int, Element*, unsigned long*, Element**)
{
	return 0;
}

long RadioButtonGlyph::Create(Element*, unsigned long*, Element**)
{
	return 0;
}

IClassInfo* RadioButtonGlyph::GetClassInfoPtr(void)
{
	return nullptr;
}

long RadioButtonGlyph::Register(void)
{
	return 0;
}

void RadioButtonGlyph::SetClassInfoPtr(IClassInfo*)
{
}

long RadioButtonGlyph::Initialize(unsigned int, Element*, unsigned long*)
{
	return 0;
}

IClassInfo* RadioButtonGlyph::GetClassInfoW(void)
{
	return nullptr;
}

bool RadioButtonGlyph::OnLostDialogFocus(DialogElement*)
{
	return false;
}

bool RadioButtonGlyph::OnReceivedDialogFocus(DialogElement*)
{
	return false;
}

IClassInfo* RadioButtonGlyph::s_pClassInfo;

RangeValueProvider::RangeValueProvider(void)
{
}

RangeValueProvider::~RangeValueProvider(void)
{
}

unsigned long RangeValueProvider::AddRef(void)
{
	return 0;
}

ProviderProxyCall RangeValueProvider::GetProxyCreator(void)
{
	return ProviderProxyCall();
}

long RangeValueProvider::QueryInterface(GUID const&, void**)
{
	return 0;
}

unsigned long RangeValueProvider::Release(void)
{
	return 0;
}

long RangeValueProvider::SetValue(double)
{
	return 0;
}

long RangeValueProvider::get_IsReadOnly(int*)
{
	return 0;
}

long RangeValueProvider::get_LargeChange(double*)
{
	return 0;
}

long RangeValueProvider::get_Maximum(double*)
{
	return 0;
}

long RangeValueProvider::get_Minimum(double*)
{
	return 0;
}

long RangeValueProvider::get_SmallChange(double*)
{
	return 0;
}

long RangeValueProvider::get_Value(double*)
{
	return 0;
}

RangeValueProxy::RangeValueProxy(RangeValueProxy const&)
{
}

RangeValueProxy& RangeValueProxy::operator=(RangeValueProxy const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

RangeValueProxy* RangeValueProxy::Create(Element*)
{
	return nullptr;
}

long RangeValueProxy::DoMethod(int, char*)
{
	return 0;
}

RangeValueProxy::RangeValueProxy(void)
{
}

bool RangeValueProxy::IsPatternSupported(Element*)
{
	return false;
}

void RangeValueProxy::Init(Element*)
{
}

RefPointElement::RefPointElement(RefPointElement const&)
{
}

RefPointElement::RefPointElement(void)
{
}

RefPointElement::~RefPointElement(void)
{
}

RefPointElement& RefPointElement::operator=(RefPointElement const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

PropertyInfo const* RefPointElement::ActualReferencePointProp(void)
{
	return nullptr;
}

long RefPointElement::Create(unsigned int, Element*, unsigned long*, Element**)
{
	return 0;
}

long RefPointElement::Create(Element*, unsigned long*, Element**)
{
	return 0;
}

Element* RefPointElement::FindRefPoint(Element*, POINT*)
{
	return nullptr;
}

IClassInfo* RefPointElement::GetClassInfoPtr(void)
{
	return nullptr;
}

PropertyInfo const* RefPointElement::ReferencePointProp(void)
{
	return nullptr;
}

long RefPointElement::Register(void)
{
	return 0;
}

void RefPointElement::SetClassInfoPtr(IClassInfo*)
{
}

RefPointElement* RefPointElement::Locate(Element*)
{
	return nullptr;
}

POINT const* RefPointElement::GetActualReferencePoint(Value**)
{
	return nullptr;
}

POINT const* RefPointElement::GetReferencePoint(Value**)
{
	return nullptr;
}

long RefPointElement::Initialize(unsigned int, Element*, unsigned long*)
{
	return 0;
}

long RefPointElement::SetReferencePoint(int, int)
{
	return 0;
}

IClassInfo* RefPointElement::GetClassInfoW(void)
{
	return nullptr;
}

void RefPointElement::OnPropertyChanged(PropertyInfo const*, int, Value*, Value*)
{
}

IClassInfo* RefPointElement::s_pClassInfo;

RepeatButton::RepeatButton(RepeatButton const&)
{
}

RepeatButton::RepeatButton(void)
{
}

RepeatButton::~RepeatButton(void)
{
}

RepeatButton& RepeatButton::operator=(RepeatButton const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

long RepeatButton::Create(unsigned int, Element*, unsigned long*, Element**)
{
	return 0;
}

long RepeatButton::Create(Element*, unsigned long*, Element**)
{
	return 0;
}

IClassInfo* RepeatButton::GetClassInfoPtr(void)
{
	return nullptr;
}

long RepeatButton::Register(void)
{
	return 0;
}

void RepeatButton::SetClassInfoPtr(IClassInfo*)
{
}

long RepeatButton::Initialize(unsigned int, Element*, unsigned long*)
{
	return 0;
}

IClassInfo* RepeatButton::GetClassInfoW(void)
{
	return nullptr;
}

void RepeatButton::OnInput(InputEvent*)
{
}

void RepeatButton::_RepeatButtonActionCallback(GMA_ACTIONINFO*)
{
}

IClassInfo* RepeatButton::s_pClassInfo;

Repeater::Repeater(Repeater const&)
{
}

Repeater::Repeater(void)
{
}

Repeater::~Repeater(void)
{
}

Repeater& Repeater::operator=(Repeater const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

long Repeater::Create(Element*, unsigned long*, Element**)
{
	return 0;
}

IClassInfo* Repeater::GetClassInfoPtr(void)
{
	return nullptr;
}

long Repeater::Register(void)
{
	return 0;
}

void Repeater::SetClassInfoPtr(IClassInfo*)
{
}

long Repeater::Initialize(Element*, unsigned long*)
{
	return 0;
}

void Repeater::SetDataEngine(IDataEngine*)
{
}

IClassInfo* Repeater::GetClassInfoW(void)
{
	return nullptr;
}

long Repeater::BuildElement(void)
{
	return 0;
}

IClassInfo* Repeater::s_pClassInfo;

ScrollProvider::ScrollProvider(void)
{
}

ScrollProvider::~ScrollProvider(void)
{
}

unsigned long ScrollProvider::AddRef(void)
{
	return 0;
}

ProviderProxyCall ScrollProvider::GetProxyCreator(void)
{
	return ProviderProxyCall();
}

long ScrollProvider::QueryInterface(_GUID const&, void**)
{
	return 0;
}

unsigned long ScrollProvider::Release(void)
{
	return 0;
}

long ScrollProvider::Scroll(ScrollAmount, ScrollAmount)
{
	return 0;
}

long ScrollProvider::SetScrollPercent(double, double)
{
	return 0;
}

long ScrollProvider::get_HorizontalScrollPercent(double*)
{
	return 0;
}

long ScrollProvider::get_HorizontalViewSize(double*)
{
	return 0;
}

long ScrollProvider::get_HorizontallyScrollable(int*)
{
	return 0;
}

long ScrollProvider::get_VerticalScrollPercent(double*)
{
	return 0;
}

long ScrollProvider::get_VerticalViewSize(double*)
{
	return 0;
}

long ScrollProvider::get_VerticallyScrollable(int*)
{
	return 0;
}

ScrollProxy::ScrollProxy(ScrollProxy const&)
{
}

ScrollProxy::ScrollProxy(void)
{
}

ScrollProxy& ScrollProxy::operator=(ScrollProxy const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

ScrollProxy* ScrollProxy::Create(Element*)
{
	return nullptr;
}

bool ScrollProxy::IsPatternSupported(Element*)
{
	return false;
}

long ScrollProxy::DoMethod(int, char*)
{
	return 0;
}

void ScrollProxy::Init(Element*)
{
}

BaseScrollBar* ScrollProxy::GetScrollBar(bool)
{
	return nullptr;
}

long ScrollProxy::GetScrollPercent(bool, double*)
{
	return 0;
}

long ScrollProxy::GetScrollable(bool, int*)
{
	return 0;
}

long ScrollProxy::GetViewSize(bool, double*)
{
	return 0;
}

long ScrollProxy::GetViewer(Viewer**)
{
	return 0;
}

long ScrollProxy::Scroll(ScrollAmount, ScrollAmount)
{
	return 0;
}

long ScrollProxy::ScrollLine(bool, bool)
{
	return 0;
}

long ScrollProxy::ScrollPage(bool, bool)
{
	return 0;
}

long ScrollProxy::ScrollToHorizontalPosition(int, bool)
{
	return 0;
}

long ScrollProxy::ScrollToVerticalPosition(int, bool)
{
	return 0;
}

long ScrollProxy::SetPercent(BaseScrollBar*, double)
{
	return 0;
}

long ScrollProxy::SetScrollPercent(double, double)
{
	return 0;
}

ScrollBar::ScrollBar(ScrollBar const&)
{
}

ScrollBar::ScrollBar(void)
{
}

ScrollBar::~ScrollBar(void)
{
}

ScrollBar& ScrollBar::operator=(ScrollBar const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

long ScrollBar::Create(Element*, unsigned long*, Element**)
{
	return 0;
}

long ScrollBar::Create(bool, Element*, unsigned long*, Element**)
{
	return 0;
}

IClassInfo* ScrollBar::GetClassInfoPtr(void)
{
	return nullptr;
}

PropertyInfo const* ScrollBar::LineProp(void)
{
	return nullptr;
}

PropertyInfo const* ScrollBar::MaximumProp(void)
{
	return nullptr;
}

PropertyInfo const* ScrollBar::MinimumProp(void)
{
	return nullptr;
}

PropertyInfo const* ScrollBar::OrderProp(void)
{
	return nullptr;
}

PropertyInfo const* ScrollBar::PageProp(void)
{
	return nullptr;
}

PropertyInfo const* ScrollBar::PositionProp(void)
{
	return nullptr;
}

PropertyInfo const* ScrollBar::ProportionalProp(void)
{
	return nullptr;
}

long ScrollBar::Register(void)
{
	return 0;
}

void ScrollBar::SetClassInfoPtr(IClassInfo*)
{
}

PropertyInfo const* ScrollBar::VerticalProp(void)
{
	return nullptr;
}

int ScrollBar::GetOrder(void)
{
	return 0;
}

bool ScrollBar::GetVertical(void)
{
	return false;
}

long ScrollBar::Initialize(bool, Element*, unsigned long*)
{
	return 0;
}

long ScrollBar::SetOrder(int)
{
	return 0;
}

long ScrollBar::SetProportional(bool)
{
	return 0;
}

long ScrollBar::SetVertical(bool)
{
	return 0;
}

IClassInfo* ScrollBar::GetClassInfoW(void)
{
	return nullptr;
}

Element* ScrollBar::GetElement(void)
{
	return nullptr;
}

int ScrollBar::GetLine(void)
{
	return 0;
}

int ScrollBar::GetMaximum(void)
{
	return 0;
}

int ScrollBar::GetMinimum(void)
{
	return 0;
}

int ScrollBar::GetPage(void)
{
	return 0;
}

int ScrollBar::GetPosition(void)
{
	return 0;
}

bool ScrollBar::GetProportional(void)
{
	return false;
}

void ScrollBar::OnEvent(Event*)
{
}

void ScrollBar::OnPropertyChanged(PropertyInfo const*, int, Value*, Value*)
{
}

bool ScrollBar::OnPropertyChanging(PropertyInfo const*, int, Value*, Value*)
{
	return false;
}

long ScrollBar::SetLine(int)
{
	return 0;
}

long ScrollBar::SetMaximum(int)
{
	return 0;
}

long ScrollBar::SetMinimum(int)
{
	return 0;
}

long ScrollBar::SetPage(int)
{
	return 0;
}

long ScrollBar::SetPosition(int)
{
	return 0;
}

void ScrollBar::_SelfLayoutDoLayout(int, int)
{
}

SIZE ScrollBar::_SelfLayoutUpdateDesiredSize(int, int, Surface*)
{
	return SIZE();
}

long ScrollBar::CreateButtons(void)
{
	return 0;
}

IClassInfo* ScrollBar::s_pClassInfo;

ScrollBarRangeValueProxy::ScrollBarRangeValueProxy(ScrollBarRangeValueProxy const&)
{
}

ScrollBarRangeValueProxy::ScrollBarRangeValueProxy(void)
{
}

ScrollBarRangeValueProxy& ScrollBarRangeValueProxy::operator=(ScrollBarRangeValueProxy const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

long ScrollBarRangeValueProxy::DoMethod(int, char*)
{
	return 0;
}

void ScrollBarRangeValueProxy::Init(Element*)
{
}

ScrollItemProvider::ScrollItemProvider(void)
{
}

ScrollItemProvider::~ScrollItemProvider(void)
{
}

unsigned long ScrollItemProvider::AddRef(void)
{
	return 0;
}

ProviderProxyCall ScrollItemProvider::GetProxyCreator(void)
{
	return ProviderProxyCall();
}

long ScrollItemProvider::QueryInterface(_GUID const&, void**)
{
	return 0;
}

unsigned long ScrollItemProvider::Release(void)
{
	return 0;
}

long ScrollItemProvider::ScrollIntoView(void)
{
	return 0;
}

ScrollItemProxy::ScrollItemProxy(ScrollItemProxy const&)
{
}

ScrollItemProxy::ScrollItemProxy(void)
{
}

ScrollItemProxy& ScrollItemProxy::operator=(ScrollItemProxy const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

ScrollItemProxy* ScrollItemProxy::Create(Element*)
{
	return nullptr;
}

bool ScrollItemProxy::IsPatternSupported(Element*)
{
	return false;
}

long ScrollItemProxy::DoMethod(int, char*)
{
	return 0;
}

void ScrollItemProxy::Init(Element*)
{
}

ScrollViewer::ScrollViewer(ScrollViewer const&)
{
}

ScrollViewer::ScrollViewer(void)
{
}

ScrollViewer::~ScrollViewer(void)
{
}

ScrollViewer& ScrollViewer::operator=(ScrollViewer const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

long ScrollViewer::Create(Element*, unsigned long*, Element**)
{
	return 0;
}

IClassInfo* ScrollViewer::GetClassInfoPtr(void)
{
	return nullptr;
}

long ScrollViewer::Register(void)
{
	return 0;
}

void ScrollViewer::SetClassInfoPtr(IClassInfo*)
{
}

IClassInfo* ScrollViewer::GetClassInfoW(void)
{
	return nullptr;
}

void ScrollViewer::OnListenedPropertyChanged(Element*, PropertyInfo const*, int, Value*, Value*)
{
}

void ScrollViewer::OnPropertyChanged(PropertyInfo const*, int, Value*, Value*)
{
}

long ScrollViewer::CreateScrollBars(void)
{
	return 0;
}

long ScrollViewer::AddChildren(void)
{
	return 0;
}

BaseScrollBar* ScrollViewer::GetHScroll(void)
{
	return nullptr;
}

BaseScrollBar* ScrollViewer::GetVScroll(void)
{
	return nullptr;
}

IClassInfo* ScrollViewer::s_pClassInfo;

SelectionProvider::SelectionProvider(void)
{
}

SelectionProvider::~SelectionProvider(void)
{
}

unsigned long SelectionProvider::AddRef(void)
{
	return 0;
}

ProviderProxyCall SelectionProvider::GetProxyCreator(void)
{
	return ProviderProxyCall();
}

long SelectionProvider::GetSelection(SAFEARRAY**)
{
	return 0;
}

long SelectionProvider::QueryInterface(GUID const&, void**)
{
	return 0;
}

unsigned long SelectionProvider::Release(void)
{
	return 0;
}

long SelectionProvider::get_CanSelectMultiple(int*)
{
	return 0;
}

long SelectionProvider::get_IsSelectionRequired(int*)
{
	return 0;
}

SelectionProxy::SelectionProxy(void)
{
}

SelectionProxy::SelectionProxy(SelectionProxy const&)
{
}

SelectionProxy& SelectionProxy::operator=(SelectionProxy const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

SelectionProxy* SelectionProxy::Create(Element*)
{
	return nullptr;
}

bool SelectionProxy::IsPatternSupported(Element*)
{
	return false;
}

long SelectionProxy::DoMethod(int, char*)
{
	return 0;
}

void SelectionProxy::Init(Element*)
{
}

SelectionItemProvider::SelectionItemProvider(void)
{
}

SelectionItemProvider::~SelectionItemProvider(void)
{
}

unsigned long SelectionItemProvider::AddRef(void)
{
	return 0;
}

long SelectionItemProvider::AddToSelection(void)
{
	return 0;
}

ProviderProxyCall SelectionItemProvider::GetProxyCreator(void)
{
	return ProviderProxyCall();
}

long SelectionItemProvider::QueryInterface(GUID const&, void**)
{
	return 0;
}

unsigned long SelectionItemProvider::Release(void)
{
	return 0;
}

long SelectionItemProvider::RemoveFromSelection(void)
{
	return 0;
}

long SelectionItemProvider::Select(void)
{
	return 0;
}

long SelectionItemProvider::get_IsSelected(int*)
{
	return 0;
}

long SelectionItemProvider::get_SelectionContainer(IRawElementProviderSimple**)
{
	return 0;
}

SelectionItemProxy::SelectionItemProxy(void)
{
}

SelectionItemProxy::SelectionItemProxy(SelectionItemProxy const&)
{
}

SelectionItemProxy& SelectionItemProxy::operator=(SelectionItemProxy const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

SelectionItemProxy* SelectionItemProxy::Create(Element*)
{
	return nullptr;
}

bool SelectionItemProxy::IsPatternSupported(Element*)
{
	return false;
}

long SelectionItemProxy::DoMethod(int, char*)
{
	return 0;
}

void SelectionItemProxy::Init(Element*)
{
}

Selector::Selector(Selector const&)
{
}

Selector::Selector(void)
{
}

Selector::~Selector(void)
{
}

Selector& Selector::operator=(Selector const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

long Selector::Create(Element*, unsigned long*, Element**)
{
	return 0;
}

long Selector::Register(void)
{
	return 0;
}

UID Selector::SelectionChange(void)
{
	return UID();
}

PropertyInfo const* Selector::SelectionProp(void)
{
	return nullptr;
}

void Selector::SetClassInfoPtr(IClassInfo*)
{
}

IClassInfo* Selector::GetClassInfoPtr(void)
{
	return nullptr;
}

Element* Selector::GetSelection(void)
{
	return nullptr;
}

long Selector::Initialize(Element*, unsigned long*)
{
	return 0;
}

Element* Selector::GetAdjacent(Element*, int, NavReference const*, unsigned long)
{
	return nullptr;
}

IClassInfo* Selector::GetClassInfoW(void)
{
	return nullptr;
}

void Selector::OnEvent(Event*)
{
}

void Selector::OnInput(InputEvent*)
{
}

void Selector::OnKeyFocusMoved(Element*, Element*)
{
}

void Selector::OnPropertyChanged(PropertyInfo const*, int, Value*, Value*)
{
}

long Selector::SetSelection(Element*)
{
	return 0;
}

IClassInfo* Selector::s_pClassInfo;

SelectorNoDefault::SelectorNoDefault(SelectorNoDefault const&)
{
}

SelectorNoDefault::SelectorNoDefault(void)
{
}

SelectorNoDefault::~SelectorNoDefault(void)
{
}

SelectorNoDefault& SelectorNoDefault::operator=(SelectorNoDefault const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

long SelectorNoDefault::Create(Element*, unsigned long*, Element**)
{
	return 0;
}

IClassInfo* SelectorNoDefault::GetClassInfoPtr(void)
{
	return nullptr;
}

long SelectorNoDefault::Register(void)
{
	return 0;
}

void SelectorNoDefault::SetClassInfoPtr(IClassInfo*)
{
}

long SelectorNoDefault::Initialize(Element*, unsigned long*)
{
	return 0;
}

IClassInfo* SelectorNoDefault::GetClassInfoW(void)
{
	return nullptr;
}

void SelectorNoDefault::OnEvent(Event*)
{
}

void SelectorNoDefault::OnKeyFocusMoved(Element*, Element*)
{
}

long SelectorNoDefault::SetSelection(Element*)
{
	return 0;
}

IClassInfo* SelectorNoDefault::s_pClassInfo;


SelectorSelectionProxy::SelectorSelectionProxy(SelectorSelectionProxy const&)
{
}

SelectorSelectionProxy::SelectorSelectionProxy(void)
{
}

SelectorSelectionProxy& SelectorSelectionProxy::operator=(SelectorSelectionProxy const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

long SelectorSelectionProxy::DoMethod(int, char*)
{
	return 0;
}

void SelectorSelectionProxy::Init(Element*)
{
}

long SelectorSelectionProxy::GetIsSelectionRequired(int*)
{
	return 0;
}

SelectorSelectionItemProxy::SelectorSelectionItemProxy(SelectorSelectionItemProxy const&)
{
}

SelectorSelectionItemProxy::SelectorSelectionItemProxy(void)
{
}

SelectorSelectionItemProxy& SelectorSelectionItemProxy::operator=(SelectorSelectionItemProxy const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

long SelectorSelectionItemProxy::DoMethod(int, char*)
{
	return 0;
}

void SelectorSelectionItemProxy::Init(Element*)
{
}

long SelectorSelectionItemProxy::AddToSelection(void)
{
	return 0;
}

long SelectorSelectionItemProxy::GetSelectionContainer(IRawElementProviderSimple**)
{
	return 0;
}

long SelectorSelectionItemProxy::Select(void)
{
	return 0;
}

StyledScrollViewer::StyledScrollViewer(StyledScrollViewer const&)
{
}

StyledScrollViewer::StyledScrollViewer(void)
{
}

StyledScrollViewer::~StyledScrollViewer(void)
{
}

StyledScrollViewer& StyledScrollViewer::operator=(StyledScrollViewer const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

long StyledScrollViewer::Create(Element*, unsigned long*, Element**)
{
	return 0;
}

IClassInfo* StyledScrollViewer::GetClassInfoPtr(void)
{
	return nullptr;
}

long StyledScrollViewer::Register(void)
{
	return 0;
}

void StyledScrollViewer::SetClassInfoPtr(IClassInfo*)
{
}

IClassInfo* StyledScrollViewer::GetClassInfoW(void)
{
	return nullptr;
}

void StyledScrollViewer::OnListenedPropertyChanged(Element*, PropertyInfo const*, int, Value*, Value*)
{
}

long StyledScrollViewer::AddChildren(void)
{
	return 0;
}

long StyledScrollViewer::CreateScrollBars(void)
{
	return 0;
}

BaseScrollBar* StyledScrollViewer::GetHScroll(void)
{
	return nullptr;
}

BaseScrollBar* StyledScrollViewer::GetVScroll(void)
{
	return nullptr;
}

IClassInfo* StyledScrollViewer::s_pClassInfo;

TableProvider::TableProvider(void)
{
}

TableProvider::~TableProvider(void)
{
}

unsigned long TableProvider::AddRef(void)
{
	return 0;
}

long TableProvider::GetColumnHeaders(SAFEARRAY**)
{
	return 0;
}

ProviderProxyCall TableProvider::GetProxyCreator(void)
{
	return ProviderProxyCall();
}

long TableProvider::GetRowHeaders(SAFEARRAY**)
{
	return 0;
}

long TableProvider::QueryInterface(GUID const&, void**)
{
	return 0;
}

unsigned long TableProvider::Release(void)
{
	return 0;
}

long TableProvider::get_RowOrColumnMajor(RowOrColumnMajor*)
{
	return 0;
}

TableProxy::TableProxy(TableProxy const&)
{
}

TableProxy::TableProxy()
{
}

TableProxy& TableProxy::operator=(TableProxy const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

TableProxy* TableProxy::Create(Element*)
{
	return nullptr;
}

bool TableProxy::IsPatternSupported(Element*)
{
	return false;
}

long TableProxy::DoMethod(int, char*)
{
	return 0;
}

void TableProxy::Init(Element*)
{
}

TableItemProvider::TableItemProvider()
{
}

TableItemProvider::~TableItemProvider(void)
{
}

unsigned long TableItemProvider::AddRef(void)
{
	return 0;
}

long TableItemProvider::GetColumnHeaderItems(SAFEARRAY**)
{
	return 0;
}

ProviderProxyCall TableItemProvider::GetProxyCreator(void)
{
	return ProviderProxyCall();
}

long TableItemProvider::GetRowHeaderItems(SAFEARRAY**)
{
	return 0;
}

long TableItemProvider::QueryInterface(GUID const&, void**)
{
	return 0;
}

unsigned long TableItemProvider::Release(void)
{
	return 0;
}

TableItemProxy::TableItemProxy(TableItemProxy const&)
{
}

TableItemProxy::TableItemProxy()
{
}

TableItemProxy& TableItemProxy::operator=(TableItemProxy const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

TableItemProxy* TableItemProxy::Create(Element*)
{
	return nullptr;
}

bool TableItemProxy::IsPatternSupported(Element*)
{
	return false;
}

long TableItemProxy::DoMethod(int, char*)
{
	return 0;
}

void TableItemProxy::Init(Element*)
{
}

TaskPage::TaskPage(TaskPage const&)
{
}

TaskPage::TaskPage()
{
}

TaskPage::~TaskPage(void)
{
}

TaskPage& TaskPage::operator=(TaskPage const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

TaskPage::operator struct _PSP*(void)
{
	return NULL;
}

long TaskPage::DUICreatePropertySheetPage(HINSTANCE)
{
	return 0;
}

HWND TaskPage::GetParentHWND(void)
{
	return HWND();
}

Element* TaskPage::GetElement(void)
{
	return nullptr;
}

LONG_PTR TaskPage::PropSheet_SendMessage(UINT message, WPARAM, LPARAM)
{
	return 0;
}

void TaskPage::OnListenerAttach(Element*)
{
}

void TaskPage::OnListenerDetach(Element*)
{
}

bool TaskPage::OnListenedPropertyChanging(Element*, PropertyInfo const*, int, Value*, Value*)
{
	return false;
}

void TaskPage::OnListenedPropertyChanged(Element*, PropertyInfo const*, int, Value*, Value*)
{
}

void TaskPage::OnListenedEvent(Element*, Event*)
{
}

void TaskPage::OnListenedInput(Element*, InputEvent*)
{
}

long TaskPage::LoadParser(DUIXmlParser**)
{
	return 0;
}

long TaskPage::LoadPage(HWNDElement*, HINSTANCE, Element**, DUIXmlParser**)
{
	return 0;
}

unsigned int TaskPage::GetPageRCID(void)
{
	return 0;
}

unsigned short const* TaskPage::GetPageResID(void)
{
	return nullptr;
}

void TaskPage::InitPropSheetPage(PROPSHEETPAGEW*)
{
}

LRESULT TaskPage::OnKillActive(void)
{
	return 0;
}

LRESULT TaskPage::OnQueryCancel(void)
{
	return 0;
}

Element* TaskPage::OnQueryInitialFocus(void)
{
	return nullptr;
}

LRESULT TaskPage::OnReset(void)
{
	return 0;
}

LRESULT TaskPage::OnSetActive(void)
{
	return 0;
}

LRESULT TaskPage::OnWizBack(void)
{
	return 0;
}

LRESULT TaskPage::OnWizFinish(void)
{
	return 0;
}

LRESULT TaskPage::OnWizNext(void)
{
	return 0;
}

bool TaskPage::OnMessage(UINT message, WPARAM wParam, LPARAM lParam, LRESULT* plResult)
{
	return false;
}

LONG_PTR TaskPage::StaticXHostSubclassProc(HWND, UINT message, WPARAM wParam, LPARAM lParam)
{
	return 0;
}

void TaskPage::StaticXmlParserError(unsigned short const*, unsigned short const*, int, void*)
{
}

void TaskPage::FreeComCtl32(void)
{
}

int TaskPage::OnWndMsg(UINT message, WPARAM wParam, LPARAM lParam, LRESULT* plResult)
{
	return 0;
}

long TaskPage::LoadComCtl32(void)
{
	return 0;
}

long TaskPage::LoadPage(Element**, Element*, DUIXmlParser**)
{
	return 0;
}

long TaskPage::CreateDUICP(HWNDElement*, HWND, HWND, Element**, DUIXmlParser**)
{
	return 0;
}

long TaskPage::CreateParserCP(DUIXmlParser**)
{
	return 0;
}

void TaskPage::DestroyCP(void)
{
}

TextGraphic::TextGraphic(TextGraphic const&)
{
}

TextGraphic::TextGraphic()
{
}

TextGraphic::~TextGraphic(void)
{
}

TextGraphic& TextGraphic::operator=(TextGraphic const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

long TextGraphic::Create(Element*, unsigned long*, Element**)
{
	return 0;
}

IClassInfo* TextGraphic::GetClassInfoPtr(void)
{
	return nullptr;
}

long TextGraphic::Register(void)
{
	return 0;
}

void TextGraphic::SetClassInfoPtr(IClassInfo*)
{
}

PropertyInfo const* TextGraphic::SideGraphicProp(void)
{
	return nullptr;
}

long TextGraphic::Initialize(Element*, unsigned long*)
{
	return 0;
}

IClassInfo* TextGraphic::GetClassInfoW(void)
{
	return nullptr;
}

const WCHAR* TextGraphic::GetContentStringAsDisplayed(Value**)
{
	return nullptr;
}

void TextGraphic::OnPropertyChanged(PropertyInfo const*, int, Value*, Value*)
{
}

bool TextGraphic::OnPropertyChanging(PropertyInfo const*, int, Value*, Value*)
{
	return false;
}

IClassInfo* TextGraphic::s_pClassInfo;

Thumb::Thumb(Thumb const&)
{
}

Thumb::Thumb()
{
}

Thumb::~Thumb(void)
{
}

Thumb& Thumb::operator=(Thumb const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

long Thumb::Create(unsigned int, Element*, unsigned long*, Element**)
{
	return 0;
}

long Thumb::Create(Element*, unsigned long*, Element**)
{
	return 0;
}

UID Thumb::Drag(void)
{
	return UID();
}

IClassInfo* Thumb::GetClassInfoPtr(void)
{
	return nullptr;
}

long Thumb::Register(void)
{
	return 0;
}

void Thumb::SetClassInfoPtr(IClassInfo*)
{
}

long Thumb::Initialize(unsigned int, Element*, unsigned long*)
{
	return 0;
}

IClassInfo* Thumb::GetClassInfoW(void)
{
	return nullptr;
}

void Thumb::OnInput(InputEvent*)
{
}

IClassInfo* Thumb::s_pClassInfo;

ToggleProvider::ToggleProvider()
{
}

ToggleProvider::~ToggleProvider(void)
{
}

unsigned long ToggleProvider::AddRef(void)
{
	return 0;
}

ProviderProxyCall ToggleProvider::GetProxyCreator(void)
{
	return ProviderProxyCall();
}

long ToggleProvider::QueryInterface(GUID const&, void**)
{
	return 0;
}

unsigned long ToggleProvider::Release(void)
{
	return 0;
}

long ToggleProvider::Toggle(void)
{
	return 0;
}

long ToggleProvider::get_ToggleState(ToggleState*)
{
	return 0;
}

ToggleProxy::ToggleProxy(ToggleProxy const&)
{
}

ToggleProxy::ToggleProxy()
{
}

ToggleProxy& ToggleProxy::operator=(ToggleProxy const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

ToggleProxy* ToggleProxy::Create(Element*)
{
	return nullptr;
}

bool ToggleProxy::IsPatternSupported(Element*)
{
	return false;
}

long ToggleProxy::DoMethod(int, char*)
{
	return 0;
}

void ToggleProxy::Init(Element*)
{
}

long ToggleProxy::GetToggleState(ToggleState*)
{
	return 0;
}

UnknownElement::UnknownElement(UnknownElement const&)
{
}

UnknownElement::UnknownElement()
{
}

UnknownElement::~UnknownElement(void)
{
}

UnknownElement& UnknownElement::operator=(UnknownElement const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

long UnknownElement::Create(unsigned int, Element*, unsigned long*, Element**)
{
	return 0;
}

long UnknownElement::Create(Element*, unsigned long*, Element**)
{
	return 0;
}

IClassInfo* UnknownElement::GetClassInfoPtr(void)
{
	return nullptr;
}

long UnknownElement::Register(void)
{
	return 0;
}

void UnknownElement::SetClassInfoPtr(IClassInfo*)
{
}

long UnknownElement::Initialize(unsigned int, Element*, unsigned long*)
{
	return 0;
}

IClassInfo* UnknownElement::GetClassInfoW(void)
{
	return nullptr;
}

IClassInfo* UnknownElement::s_pClassInfo;


//~ Begin DirectUI::Value Class
Value& Value::operator=(const Value&) = default;

void Value::AddRef()
{
}

Value* WINAPI Value::CreateAtom(ATOM atom) { return {}; }
Value* WINAPI Value::CreateAtom(const WCHAR* pszValue) { return {}; }
Value* WINAPI Value::CreateBool(bool bValue) { return {}; }
Value* WINAPI Value::CreateColor(COLORREF cr) { return {}; }
Value* WINAPI Value::CreateColor(COLORREF cr0, COLORREF cr1, BYTE dType) { return {}; }
Value* WINAPI Value::CreateColor(COLORREF cr0, COLORREF cr1, COLORREF cr2, UCHAR dType) { return {}; }
Value* WINAPI Value::CreateCursor(HICON hValue) { return {}; }
Value* WINAPI Value::CreateCursor(const WCHAR* pszValue) { return {}; }
Value* WINAPI Value::CreateDFCFill(UINT uType, UINT uState) { return {}; }
Value* WINAPI Value::CreateDTBFill(const WCHAR* pszClassName, int iPartId, int iStateId) { return {}; }
Value* WINAPI Value::CreateElementList(DynamicArray<Element*, 0>* peListValue) { return {}; }
Value* WINAPI Value::CreateElementRef(Element* pe) { return {}; }
Value* WINAPI Value::CreateEncodedString(const WCHAR* pszValue) { return {}; }
Value* WINAPI Value::CreateExpression(Expression* pexValue) { return {}; }
Value* WINAPI Value::CreateFill(const Fill&) { return {}; }

Value* WINAPI Value::CreateGraphic(HBITMAP hBitmap, BYTE dBlendMode, UINT dBlendValue, bool bFlip, bool bRTL, bool bPreMultiplied) { return {}; }
Value* WINAPI Value::CreateGraphic(HENHMETAFILE hEnhMetaFile, HENHMETAFILE hAltEnhMetaFile) { return {}; }
Value* WINAPI Value::CreateGraphic(HICON hIcon, bool bFlip, bool bRTL, bool bShared) { return {}; }
Value* WINAPI Value::CreateGraphic(ISharedBitmap* pBitmap, BYTE dBlendMode, UINT dBlendValue) { return {}; }
Value* WINAPI Value::CreateGraphic(const WCHAR* pszICO, ScaledSIZE szDesired, HINSTANCE hResLoad, bool bFlip, bool bRTL) { return {}; }
Value* WINAPI Value::CreateGraphic(const WCHAR* pszBMP, BYTE dBlendMode, UINT dBlendValue, int cx, int cy, HINSTANCE hResLoad, bool bFlip, bool bRTL) { return {}; }
Value* WINAPI Value::CreateGraphic(const WCHAR* pszICO, int cxDesired, int cyDesired, HINSTANCE hResLoad, bool bFlip, bool bRTL) { return {}; }

Value* WINAPI Value::CreateInt(int dValue, DynamicScaleValue dsv) { return {}; }
Value* WINAPI Value::CreateLayout(Layout*) { return {}; }
Value* WINAPI Value::CreatePoint(int x, int y, DynamicScaleValue dsv) { return {}; }
Value* WINAPI Value::CreateRect(int left, int top, int right, int bottom, DynamicScaleValue dsv) { return {}; }
Value* WINAPI Value::CreateSize(int cx, int cy, DynamicScaleValue dsv) { return {}; }
Value* WINAPI Value::CreateString(const WCHAR* psz, HINSTANCE hinstance) { return {}; }
Value* WINAPI Value::CreateStyleSheet(StyleSheet* ppsValue) { return {}; }

bool Value::GetBool() { return {}; }
Cursor* Value::GetCursor() { return {}; }
Element* Value::GetElement() { return {}; }
DynamicArray<Element*, 0>* Value::GetElementList() { return {}; }
Expression* Value::GetExpression() { return {}; }
const Fill* Value::GetFill() { return {}; }
Graphic* Value::GetGraphic() { return {}; }
void* Value::GetImage(bool bValue) { return {}; }
int Value::GetInt() { return {}; }
Layout* Value::GetLayout() { return {}; }
const POINT* Value::GetPoint() { return {}; }
const RECT* Value::GetRect() { return {}; }
int Value::GetRefCount() const { return {}; }
const SIZE* Value::GetSize() { return {}; }
const WCHAR* Value::GetString() { return {}; }
StyleSheet* Value::GetStyleSheet() { return {}; }
int Value::GetType() const { return {}; }
ATOM Value::GetAtom() { return {}; }

Value* WINAPI Value::GetAtomZero() { return {}; }
Value* WINAPI Value::GetBoolFalse() { return {}; }
Value* WINAPI Value::GetBoolTrue() { return {}; }
Value* WINAPI Value::GetColorTrans() { return {}; }
Value* WINAPI Value::GetCursorNull() { return {}; }
Value* WINAPI Value::GetElListNull() { return {}; }
Value* WINAPI Value::GetElementNull() { return {}; }
Value* WINAPI Value::GetExprNull() { return {}; }
Value* WINAPI Value::GetIntZero() { return {}; }
Value* WINAPI Value::GetLayoutNull() { return {}; }
Value* WINAPI Value::GetNull() { return {}; }
Value* WINAPI Value::GetPointZero() { return {}; }
Value* WINAPI Value::GetRectZero() { return {}; }
Value* WINAPI Value::GetSheetNull() { return {}; }
Value* WINAPI Value::GetSizeZero() { return {}; }
Value* WINAPI Value::GetStringNull() { return {}; }
Value* WINAPI Value::GetUnavailable() { return {}; }
Value* WINAPI Value::GetUnset() { return {}; }
bool Value::IsEqual(Value*) { return {}; }

void Value::Release()
{
}

WCHAR* Value::ToString(WCHAR* psz, UINT c) const { return {}; }

void Value::_ZeroRelease()
{
}

HRESULT WINAPI Value::StrDupW(const WCHAR* pszIn, WCHAR** pszOut) { return {}; }
//~ End DirectUI::Value Class

//~ Begin DirectUI::ValueProvider Class
ValueProvider::ValueProvider() STUB_VOID;
ProviderProxyCall ValueProvider::GetProxyCreator() STUB_ZERO;
HRESULT ValueProvider::QueryInterface(REFIID riid, void** ppvObject) STUB_ZERO;
ULONG ValueProvider::AddRef() STUB_ZERO;
ULONG ValueProvider::Release() STUB_ZERO;
HRESULT ValueProvider::SetValue(LPCWSTR val) STUB_ZERO;
HRESULT ValueProvider::get_Value(BSTR* pRetVal) STUB_ZERO;
HRESULT ValueProvider::get_IsReadOnly(BOOL* pRetVal) STUB_ZERO;
//~ End DirectUI::ValueProvider Class

//~ Begin DirectUI::ValueProxy Class
ValueProxy::ValueProxy(ValueProxy const&)
{
}

ValueProxy::ValueProxy()
{
}

ValueProxy& ValueProxy::operator=(ValueProxy const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

ValueProxy* ValueProxy::Create(Element* pe)
{
	return nullptr;
}

bool ValueProxy::IsPatternSupported(Element* pe)
{
	return false;
}

HRESULT ValueProxy::DoMethod(int, char*)
{
	return 0;
}

void ValueProxy::Init(Element* pe)
{
}

HRESULT ValueProxy::GetIsReadOnly(int*)
{
	return 0;
}

HRESULT ValueProxy::GetValue(WCHAR* pRetVal)
{
	return 0;
}

HRESULT ValueProxy::SetValue(const unsigned short*)
{
	return 0;
}

//~ End ValueProxy Class

Viewer::Viewer(Viewer const&)
{
}

Viewer::Viewer()
{
}

Viewer::~Viewer(void)
{
}

Viewer& Viewer::operator=(Viewer const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

long Viewer::Create(Element*, unsigned long*, Element**)
{
	return 0;
}

long Viewer::Register(void)
{
	return 0;
}

void Viewer::SetClassInfoPtr(IClassInfo*)
{
}

PropertyInfo const* Viewer::XOffsetProp(void)
{
	return nullptr;
}

PropertyInfo const* Viewer::XScrollableProp(void)
{
	return nullptr;
}

PropertyInfo const* Viewer::YOffsetProp(void)
{
	return nullptr;
}

PropertyInfo const* Viewer::YScrollableProp(void)
{
	return nullptr;
}

IClassInfo* Viewer::GetClassInfoPtr(void)
{
	return nullptr;
}

int Viewer::GetXOffset(void)
{
	return 0;
}

bool Viewer::GetXScrollable(void)
{
	return false;
}

int Viewer::GetYOffset(void)
{
	return 0;
}

bool Viewer::GetYScrollable(void)
{
	return false;
}

long Viewer::Initialize(Element*, unsigned long*)
{
	return 0;
}

long Viewer::SetXOffset(int)
{
	return 0;
}

long Viewer::SetXScrollable(bool)
{
	return 0;
}

long Viewer::SetYOffset(int)
{
	return 0;
}

long Viewer::SetYScrollable(bool)
{
	return 0;
}

bool Viewer::EnsureVisible(int, int, int, int)
{
	return false;
}

IClassInfo* Viewer::GetClassInfoW(void)
{
	return nullptr;
}

void Viewer::OnEvent(Event*)
{
}

void Viewer::OnInput(InputEvent*)
{
}

void Viewer::OnPropertyChanged(PropertyInfo const*, int, Value*, Value*)
{
}

bool Viewer::OnPropertyChanging(PropertyInfo const*, int, Value*, Value*)
{
	return false;
}

void Viewer::_SelfLayoutDoLayout(int, int)
{
}

SIZE Viewer::_SelfLayoutUpdateDesiredSize(int, int, Surface*)
{
	return SIZE();
}

Element* Viewer::GetContent(void)
{
	return nullptr;
}

bool Viewer::InternalEnsureVisible(int, int, int, int)
{
	return false;
}

IClassInfo* Viewer::s_pClassInfo;

XBaby::XBaby(XBaby const&)
{
}

XBaby::XBaby()
{
}

XBaby::~XBaby(void)
{
}

XBaby& XBaby::operator=(XBaby const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

void XBaby::CacheParser(DUIXmlParser*)
{
}

long XBaby::Create(Element*, unsigned long*, Element**)
{
	return 0;
}

long XBaby::Create(IXElementCP*, XProvider*, HWND, Element*, unsigned long*, Element**)
{
	return 0;
}

IClassInfo* XBaby::GetClassInfoPtr(void)
{
	return nullptr;
}

long XBaby::Register(void)
{
	return 0;
}

void XBaby::SetClassInfoPtr(IClassInfo*)
{
}

void XBaby::ForceThemeChange(UINT_PTR, LONG_PTR)
{
}

SIZE XBaby::GetContentDesiredSize(int, int)
{
	return SIZE();
}

long XBaby::GetHostedElementID(unsigned short*)
{
	return 0;
}

long XBaby::SetToHost(Element*)
{
	return 0;
}

bool XBaby::CanSetFocus(void)
{
	return false;
}

long XBaby::CreateStyleParser(DUIXmlParser**)
{
	return 0;
}

Element* XBaby::GetAdjacent(Element*, int, NavReference const*, unsigned long)
{
	return nullptr;
}

IClassInfo* XBaby::GetClassInfoW(void)
{
	return nullptr;
}

bool XBaby::OnChildLostFocus(Element*)
{
	return false;
}

bool XBaby::OnChildReceivedFocus(Element*)
{
	return false;
}

void XBaby::OnEvent(Event*)
{
}

void XBaby::OnNoChildWithShortcutFound(KeyboardEvent*)
{
}

void XBaby::OnThemeChanged(ThemeChangedEvent*)
{
}

void XBaby::OnWmThemeChanged(WPARAM wParam, LPARAM lParam)
{
}

void XBaby::SetKeyFocus(void)
{
}

Element* XBaby::GetFocusableElement(void)
{
	return nullptr;
}

long XBaby::Initialize(IXElementCP*, XProvider*, HWND, Element*, unsigned long*)
{
	return 0;
}

IClassInfo* XBaby::s_pClassInfo;

XElement::XElement(XElement const&)
{
}

XElement::XElement()
{
}

XElement::~XElement(void)
{
}

XElement& XElement::operator=(XElement const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

long XElement::Create(unsigned int, Element*, unsigned long*, Element**)
{
	return 0;
}

long XElement::Create(Element*, unsigned long*, Element**)
{
	return 0;
}

unsigned int const XElement::s_uButtonFocusChangeMsg = 0;
unsigned int const XElement::s_uNavigateOutMsg = 0;
unsigned int const XElement::s_uUnhandledSyscharMsg = 0;


UID XElement::UnhandledSyschar(void)
{
	return UID();
}

IClassInfo* XElement::GetClassInfoPtr(void)
{
	return nullptr;
}

long XElement::Register(void)
{
	return 0;
}

void XElement::SetClassInfoPtr(IClassInfo*)
{
}

void XElement::FreeProvider(void)
{
}

HWND XElement::GetInnerHWND(void)
{
	return HWND();
}

IXProvider* XElement::GetProvider(void)
{
	return nullptr;
}

long XElement::Initialize(unsigned int, Element*, unsigned long*)
{
	return 0;
}

bool XElement::IsDescendent(Element*)
{
	return false;
}

long XElement::SetProvider(IUnknown*)
{
	return 0;
}

HWND XElement::CreateHWND(HWND)
{
	return HWND();
}

IClassInfo* XElement::GetClassInfoW(void)
{
	return nullptr;
}

void XElement::OnEvent(Event*)
{
}

void XElement::OnInput(InputEvent*)
{
}

bool XElement::OnMessage(UINT uMsg, WPARAM wParam, LPARAM lParam, LRESULT*)
{
	return false;
}

bool XElement::OnSinkThemeChanged(UINT uMsg, WPARAM wParam, LPARAM lParam, LRESULT*)
{
	return false;
}

bool XElement::OnSysChar(unsigned short)
{
	return false;
}

void XElement::SetKeyFocus(void)
{
}

HWND XElement::GetNotificationSinkHWND(void)
{
	return HWND();
}

IClassInfo* XElement::s_pClassInfo;

HRESULT XProvider::QueryInterface(REFIID iid, void** ppv) STUB_ZERO;
ULONG XProvider::AddRef() STUB_ZERO;
ULONG XProvider::Release() STUB_ZERO;
HRESULT XProvider::CreateDUI(IXElementCP* pcp, HWND* phwnd) STUB_ZERO;
HRESULT XProvider::SetParameter(REFGUID, void*) STUB_ZERO;
HRESULT XProvider::GetDesiredSize(int cxConstraint, int cyConstraint, SIZE* ps) STUB_ZERO;
HRESULT XProvider::IsDescendent(Element* pe, bool* pbHandled) STUB_ZERO;
HRESULT XProvider::SetFocus(Element* pe) STUB_ZERO;
HRESULT XProvider::Navigate(int iNavDir, bool* pbHandled) STUB_ZERO;
HRESULT XProvider::CanSetFocus(bool* pfCanSetFocus) STUB_ZERO;
BOOL XProvider::FindElementWithShortcutAndDoDefaultAction(WCHAR ch, BOOL fSysKey) STUB_ZERO;
HRESULT XProvider::GetHostedElementID(ATOM* patomID) STUB_ZERO;
HRESULT XProvider::ForceThemeChange(WPARAM wParam, LPARAM lParam) STUB_ZERO;
HRESULT XProvider::SetDefaultButtonTracking(bool fEnabled) STUB_ZERO;
BOOL XProvider::ClickDefaultButton() STUB_ZERO;
HRESULT XProvider::SetRegisteredDefaultButton(Element* peDefaultButton) STUB_ZERO;
HRESULT XProvider::SetButtonClassAcceptsEnterKey(bool fEnabled) STUB_ZERO;
HRESULT XProvider::Create(Element* pe, IXProviderCP* pprovCP, XProvider** ppxp) STUB_ZERO;
HRESULT XProvider::Initialize(Element* pe, IXProviderCP* pprovCP) STUB_ZERO;
HRESULT XProvider::CreateXBaby(IXElementCP* pcp, HWND hwndParent, Element* pParent, DWORD* pdwDeferCookie, IXBaby** ppIXBaby) STUB_ZERO;
HRESULT XProvider::CreateParser(DUIXmlParser** ppParser) STUB_ZERO;
XProvider::XProvider() STUB_VOID;
XProvider::~XProvider() STUB_VOID;
Element* XProvider::GetRoot() STUB_ZERO;
void XProvider::SetHandleEnterKey(bool fHandle) STUB_VOID;

ElementProvider::ElementProvider()
{
}

ElementProvider::~ElementProvider()
{
}

long WINAPI ElementProvider::Create(Element*, class InvokeHelper*, ElementProvider** out)
{
	return 0;
}

long ElementProvider::DoInvokeArgs(int, ProviderProxyCall, char*)
{
	return 0;
}

const Element* ElementProvider::GetElementKey()
{
	return NULL;
}

void ElementProvider::TossElement()
{
}

void ElementProvider::TossPatternProvider(Schema::Pattern)
{
}


//IUnknown
unsigned long WINAPI ElementProvider::AddRef()
{
	return 0;
}

unsigned long WINAPI ElementProvider::Release()
{
	return 0;
}

long WINAPI ElementProvider::QueryInterface(const GUID&, void**)
{
	return 0;
}

//IRawElementProviderSimple
/* [propget] */
HRESULT STDMETHODCALLTYPE ElementProvider::get_ProviderOptions(
	/* [retval][out] */ __RPC__out enum ProviderOptions* pRetVal)
{
	return 0;
}

HRESULT STDMETHODCALLTYPE ElementProvider::GetPatternProvider(
	/* [in] */ PATTERNID patternId,
			   /* [retval][out] */ __RPC__deref_out_opt IUnknown** pRetVal)
{
	return 0;
}

HRESULT STDMETHODCALLTYPE ElementProvider::GetPropertyValue(
	/* [in] */ PROPERTYID propertyId,
			   /* [retval][out] */ __RPC__out VARIANT* pRetVal)
{
	return 0;
}

/* [propget] */
HRESULT STDMETHODCALLTYPE ElementProvider::get_HostRawElementProvider(
	/* [retval][out] */ __RPC__deref_out_opt IRawElementProviderSimple** pRetVal)
{
	return 0;
}

//IRawElementProviderFragment
HRESULT STDMETHODCALLTYPE ElementProvider::Navigate(
	/* [in] */ enum NavigateDirection direction,
			   /* [retval][out] */ __RPC__deref_out_opt IRawElementProviderFragment** pRetVal)
{
	return 0;
}

HRESULT STDMETHODCALLTYPE ElementProvider::GetRuntimeId(
	/* [retval][out] */ __RPC__deref_out_opt SAFEARRAY* * pRetVal)
{
	return 0;
}

HRESULT STDMETHODCALLTYPE ElementProvider::get_BoundingRectangle(
	/* [retval][out] */ __RPC__out UiaRect* pRetVal)
{
	return 0;
}

HRESULT STDMETHODCALLTYPE ElementProvider::GetEmbeddedFragmentRoots(
	/* [retval][out] */ __RPC__deref_out_opt SAFEARRAY* * pRetVal)
{
	return 0;
}

HRESULT STDMETHODCALLTYPE ElementProvider::SetFocus(void)
{
	return 0;
}

/* [propget] */
HRESULT STDMETHODCALLTYPE ElementProvider::get_FragmentRoot(
	/* [retval][out] */ __RPC__deref_out_opt IRawElementProviderFragmentRoot** pRetVal)
{
	return 0;
}

//IRawElementProviderAdviseEvents
HRESULT STDMETHODCALLTYPE ElementProvider::AdviseEventAdded(
	/* [in] */ EVENTID eventId,
			   /* [in] */ __RPC__in SAFEARRAY* propertyIDs)
{
	return 0;
}

HRESULT STDMETHODCALLTYPE ElementProvider::AdviseEventRemoved(
	/* [in] */ EVENTID eventId,
			   /* [in] */ __RPC__in SAFEARRAY* propertyIDs)
{
	return 0;
}

//1 此函数似乎声明不正确
ProviderProxyCall ElementProvider::GetProxyCreator()
{
	return NULL;
}

//2
volatile const Element* ElementProvider::GetElement()
{
	return NULL;
}

long ElementProvider::Init(Element*, InvokeHelper*)
{
	return 0;
}

long ElementProvider::DoInvoke(int, ...)
{
	return 0;
}

ElementProxy::ElementProxy(ElementProxy const&)
{
}

ElementProxy::ElementProxy(void)
{
}

ElementProxy& ElementProxy::operator=(ElementProxy const&)
{
	return *this;
}

ElementProxy* __stdcall ElementProxy::Create(Element*)
{
	return NULL;
}

//1
long ElementProxy::DoMethod(int, char*)
{
	return 0;
}

long ElementProxy::GetAutomationId(VARIANT*)
{
	return 0;
}

long ElementProxy::GetBoundingRect(struct UiaRect*)
{
	return 0;
}

long ElementProxy::GetContent(VARIANT*, IAccessible*)
{
	return 0;
}

void ElementProxy::GetControlType(VARIANT*, IAccessible*)
{
}

long ElementProxy::GetFragmentRoot(IRawElementProviderFragmentRoot* *)
{
	return 0;
}

long ElementProxy::GetHwnd(HWND*)
{
	return 0;
}

long ElementProxy::GetLabel(VARIANT*)
{
	return 0;
}

long ElementProxy::GetProperty(VARIANT*, int)
{
	return 0;
}

long ElementProxy::GetProviderOptions(ProviderOptions*)
{
	return 0;
}

long ElementProxy::GetRuntimeId(SAFEARRAY* *)
{
	return 0;
}

long ElementProxy::IsPatternSupported(Schema::Pattern, bool*)
{
	return 0;
}

long ElementProxy::Navigate(NavigateDirection, IRawElementProviderFragment**)
{
	return 0;
}

long ElementProxy::SetString(VARIANT*, UCString (Element::*)(Value* *))
{
	return 0;
}

int ElementProxy::_UsesUIAProxies(void)
{
	return 0;
}

//2
void ElementProxy::Init(Element*)
{
}

ElementProviderManager& ElementProviderManager::operator=(class DirectUI::ElementProviderManager const&)
{
	return *this;
}

long WINAPI ElementProviderManager::Add(ElementProvider*)
{
	return 0;
}

void __stdcall ElementProviderManager::Close()
{
}

ElementProvider*__stdcall ElementProviderManager::Find(Element*)
{
	return NULL;
}

bool __stdcall ElementProviderManager::FindProviderCallback(ElementProvider*, void*)
{
	return 0;
}

long __stdcall ElementProviderManager::Init()
{
	return 0;
}

void __stdcall ElementProviderManager::Remove(ElementProvider*)
{
}

CRITICAL_SECTION ElementProviderManager::g_cs;
UiaArray<class ElementProvider*>* ElementProviderManager::g_pArrayPprv;


DUIFactory::DUIFactory(HWND)
{
}

DUIFactory::~DUIFactory(void)
{
}

DUIFactory& DUIFactory::operator=(DUIFactory const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

long DUIFactory::CreateParser(void)
{
	return 0;
}

DUIXmlParser* DUIFactory::DetachParser(void)
{
	return nullptr;
}

DUIXmlParser* DUIFactory::GetParser(void)
{
	return nullptr;
}

long DUIFactory::LoadFromBuffer(UCString, UINT_PTR, UCString, Element*, unsigned long*, Element**)
{
	return 0;
}

long DUIFactory::LoadFromFile(UCString, UCString, Element*, unsigned long*, Element**)
{
	return 0;
}

long DUIFactory::LoadFromResource(HINSTANCE, UCString, UCString, Element*, unsigned long*, Element**, UCString)
{
	return 0;
}

void DUIFactory::SetError(UCString, ...)
{
}

void DUIFactory::s_XMLParseError(UCString, UCString, int, void*)
{
}

void DUIFactory::ClearParser(void)
{
}

BrowserSelectionProxy::BrowserSelectionProxy(BrowserSelectionProxy const&)
{
}

BrowserSelectionProxy::BrowserSelectionProxy(void)
{
}

BrowserSelectionProxy& BrowserSelectionProxy::operator=(BrowserSelectionProxy const&)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

long BrowserSelectionProxy::DoMethod(int, char*)
{
	return 0;
}

void BrowserSelectionProxy::Init(Element*)
{
}

long BrowserSelectionProxy::GetIsSelectionRequired(int*)
{
	return 0;
}

long BrowserSelectionProxy::GetSelection(SAFEARRAY**)
{
	return 0;
}

IClassInfo* RichText::GetClassInfoPtr() STUB_ZERO;
IClassInfo* RichText::GetClassInfoW() STUB_ZERO;
RichText::RichText() STUB_VOID;
RichText::~RichText() STUB_VOID;
HRESULT RichText::Register() STUB_ZERO;
HRESULT RichText::Create(Element* pParent, DWORD* pdwDeferCookie, Element** ppElement) STUB_ZERO;
HRESULT RichText::Initialize(Element* pParent, DWORD* pdwDeferCookie) STUB_ZERO;
void RichText::OnPropertyChanged(const PropertyInfo* ppi, int iIndex, Value* pvOld, Value* pvNew) STUB_VOID;
void RichText::OnEvent(Event* pEvent) STUB_VOID;
void RichText::OnHosted(Element* peNew) STUB_VOID;
void RichText::Paint(HDC hDC, const RECT* prcBounds, const RECT* prcInvalid, RECT* prcSkipBorder, RECT* prcSkipContent) STUB_VOID;
SIZE RichText::GetContentSize(int pxConstW, int pxConstH, Surface* psrf) STUB_ZERO;
const PropertyInfo* RichText::FontColorRunsProp() STUB_ZERO;
const PropertyInfo* RichText::FontSizeRunsProp() STUB_ZERO;
const PropertyInfo* RichText::FontWeightRunsProp() STUB_ZERO;
const PropertyInfo* RichText::OverhangOffsetProp() STUB_ZERO;
const PropertyInfo* RichText::TypographyProp() STUB_ZERO;
const PropertyInfo* RichText::TypographyRunsProp() STUB_ZERO;
const PropertyInfo* RichText::LocaleProp() STUB_ZERO;
const PropertyInfo* RichText::BaselineProp() STUB_ZERO;
const PropertyInfo* RichText::LineSpacingProp() STUB_ZERO;
const PropertyInfo* RichText::AliasedRenderingProp() STUB_ZERO;
const PropertyInfo* RichText::DisableAccTextExtendProp() STUB_ZERO;
const PropertyInfo* RichText::MapRunsToClustersProp() STUB_ZERO;
const PropertyInfo* RichText::VerticalScriptProp() STUB_ZERO;
const PropertyInfo* RichText::ConstrainLayoutProp() STUB_ZERO;
const PropertyInfo* RichText::ColorFontPaletteIndexProp() STUB_ZERO;
HRESULT RichText::SetFontColorRuns(const WCHAR* v) STUB_ZERO;
HRESULT RichText::SetFontSizeRuns(const WCHAR* v) STUB_ZERO;
HRESULT RichText::SetFontWeightRuns(const WCHAR* v) STUB_ZERO;
HRESULT RichText::SetTypography(const WCHAR* v) STUB_ZERO;
HRESULT RichText::SetTypographyRuns(const WCHAR* v) STUB_ZERO;
HRESULT RichText::SetLocale(const WCHAR* v) STUB_ZERO;
HRESULT RichText::SetBaseline(int v) STUB_ZERO;
HRESULT RichText::SetLineSpacing(int v) STUB_ZERO;
HRESULT RichText::SetOverhangOffset(int v) STUB_ZERO;
HRESULT RichText::SetAliasedRendering(bool v) STUB_ZERO;
HRESULT RichText::SetDisableAccTextExtend(bool v) STUB_ZERO;
HRESULT RichText::SetMapRunsToClusters(bool v) STUB_ZERO;
HRESULT RichText::SetVerticalScript(bool v) STUB_ZERO;
HRESULT RichText::SetConstrainLayout(int v) STUB_ZERO;
HRESULT RichText::SetColorFontPaletteIndex(int v) STUB_ZERO;
HRESULT RichText::GetForegroundColorRef(COLORREF* pclrForeground) STUB_ZERO;
WCHAR RichText::GetShortcutChar() STUB_ZERO;
void RichText::SetDWriteTextLayout(IDWriteTextLayout* pdwTextLayout) STUB_VOID;
DWORD RichText::GetTrimmedLineCount() STUB_ZERO;
DWORD RichText::GetLineCount() STUB_ZERO;
IDWriteFactory* RichText::GetFactory() STUB_ZERO;
void RichText::SetDWriteFontCollection(IDWriteFontCollection* pdwFontCollection) STUB_VOID;
void RichText::SetMaxLineCount(UINT cLinesMax) STUB_VOID;
HRESULT RichText::CreateCache(UINT cAverageNumberOfEntries, IDUIRichTextCache** ppCache) STUB_ZERO;
void RichText::SetCache(DWORD dwKey, IDUIRichTextCache* pCache) STUB_VOID;
void RichText::StopUsingCache() STUB_VOID;

HRESULT TouchButton::Create(UINT nActive, Element* pParent, DWORD* pdwDeferCookie, Element** ppElement) STUB_ZERO;
HRESULT TouchButton::Create(Element* pParent, DWORD* pdwDeferCookie, Element** ppElement) STUB_ZERO;
void TouchButton::OnHosted(Element* peNewRoot) STUB_VOID;
void TouchButton::OnUnHosted(Element* peOldRoot) STUB_VOID;
void TouchButton::OnInput(InputEvent* pie) STUB_VOID;
void TouchButton::OnPropertyChanged(const PropertyInfo* ppi, int iIndex, Value* pvOld, Value* pvNew) STUB_VOID;
void TouchButton::OnEvent(Event* pEvent) STUB_VOID;
HRESULT TouchButton::DefaultAction() STUB_ZERO;
void TouchButton::GetImmersiveFocusRectOffsets(RECT* prc) STUB_VOID;
HRESULT TouchButton::GetForegroundColorRef(COLORREF* pclrForeground) STUB_ZERO;
UID TouchButton::Click() STUB_ZERO;
UID TouchButton::MultipleClick() STUB_ZERO;
UID TouchButton::RightClick() STUB_ZERO;
const PropertyInfo* TouchButton::PressedProp() STUB_ZERO;
bool TouchButton::GetPressed() STUB_ZERO;
HRESULT TouchButton::SetPressed(bool v) STUB_ZERO;
const PropertyInfo* TouchButton::CapturedProp() STUB_ZERO;
bool TouchButton::GetCaptured() STUB_ZERO;
HRESULT TouchButton::SetCaptured(bool v) STUB_ZERO;
const PropertyInfo* TouchButton::HandleEnterProp() STUB_ZERO;
bool TouchButton::GetHandleEnter() STUB_ZERO;
HRESULT TouchButton::SetHandleEnter(bool v) STUB_ZERO;
const PropertyInfo* TouchButton::ShowKeyFocusProp() STUB_ZERO;
bool TouchButton::GetShowKeyFocus() STUB_ZERO;
HRESULT TouchButton::SetShowKeyFocus(bool v) STUB_ZERO;
const PropertyInfo* TouchButton::TreatRightMouseButtonAsLeftProp() STUB_ZERO;
bool TouchButton::GetTreatRightMouseButtonAsLeft() STUB_ZERO;
HRESULT TouchButton::SetTreatRightMouseButtonAsLeft(bool v) STUB_ZERO;
const PropertyInfo* TouchButton::HandleGlobalEnterProp() STUB_ZERO;
bool TouchButton::GetHandleGlobalEnter() STUB_ZERO;
HRESULT TouchButton::SetHandleGlobalEnter(bool v) STUB_ZERO;
IClassInfo* TouchButton::GetClassInfoPtr() STUB_ZERO;
void TouchButton::SetClassInfoPtr(IClassInfo*) STUB_VOID;
IClassInfo* TouchButton::GetClassInfoW() STUB_ZERO;
HRESULT TouchButton::Register() STUB_ZERO;
TouchButton::TouchButton() STUB_VOID;
HRESULT TouchButton::Initialize(UINT nActive, Element* pParent, DWORD* pdwDeferCookie) STUB_ZERO;
bool TouchButton::CancelClick(ClickDevice nClickDevice) STUB_ZERO;
TouchButton::ClickDevice TouchButton::GetClickDevice() STUB_ZERO;
TouchButton::~TouchButton() STUB_VOID;
void TouchButton::FireClickEvent(UINT cClick, UINT uModifiers, ClickDevice clickDevice, POINT* ppt) STUB_VOID;
void TouchButton::FireRightClickEvent(UINT uModifiers, POINT* ppt) STUB_VOID;
TouchButton::TouchButtonListenerHelper::TouchButtonListenerHelper() STUB_VOID
void TouchButton::TouchButtonListenerHelper::OnListenedInput(Element* peFrom, InputEvent* pInput) STUB_VOID;

HRESULT TouchCheckBox::Create(Element* pParent, DWORD* pdwDeferCookie, Element** ppElement) STUB_ZERO;
HRESULT TouchCheckBox::Create(UINT nActive, Element* pParent, DWORD* pdwDeferCookie, Element** ppElement) STUB_ZERO;
void TouchCheckBox::Paint(HDC hDC, const RECT* prcBounds, const RECT* prcInvalid, RECT* prcSkipBorder, RECT* prcSkipContent) STUB_VOID;
bool TouchCheckBox::OnPropertyChanging(const PropertyInfo* ppi, int iIndex, Value* pvOld, Value* pvNew) STUB_ZERO;
void TouchCheckBox::OnPropertyChanged(const PropertyInfo* ppi, int iIndex, Value* pvOld, Value* pvNew) STUB_VOID;
void TouchCheckBox::OnEvent(Event* pEvent) STUB_VOID;
HRESULT TouchCheckBox::Insert(Element** ppe, UINT cCount, UINT iInsertIdx) STUB_ZERO;
void TouchCheckBox::GetImmersiveFocusRectOffsets(RECT* prc) STUB_VOID;
const PropertyInfo* TouchCheckBox::CheckedStateProp() STUB_ZERO;
CheckedStateFlags TouchCheckBox::GetCheckedState() STUB_ZERO;
HRESULT TouchCheckBox::SetCheckedState(CheckedStateFlags v) STUB_ZERO;
const PropertyInfo* TouchCheckBox::ToggleOnClickProp() STUB_ZERO;
bool TouchCheckBox::GetToggleOnClick() STUB_ZERO;
HRESULT TouchCheckBox::SetToggleOnClick(bool v) STUB_ZERO;
IClassInfo* TouchCheckBox::GetClassInfoPtr() STUB_ZERO;
IClassInfo* TouchCheckBox::GetClassInfoW() STUB_ZERO;
HRESULT TouchCheckBox::Register() STUB_ZERO;
TouchCheckBox::TouchCheckBox() STUB_VOID;
HRESULT TouchCheckBox::Initialize(UINT nActive, Element* pParent, DWORD* pdwDeferCookie) STUB_ZERO;
TouchCheckBox::~TouchCheckBox() STUB_VOID;

UID SemanticZoomToggle::Toggle() STUB_ZERO;
HRESULT SemanticZoomToggle::Register() STUB_ZERO;
IClassInfo* SemanticZoomToggle::GetClassInfoPtr() STUB_ZERO;
IClassInfo* SemanticZoomToggle::GetClassInfoW() override STUB_ZERO;
HRESULT SemanticZoomToggle::Create(Element* pParent, DWORD* pdwDeferCookie, Element** ppElement) STUB_ZERO;
HRESULT SemanticZoomToggle::Initialize(Element* pParent, DWORD* pdwDeferCookie) STUB_ZERO;
void SemanticZoomToggle::UpdateToggleState(SemanticZoomToggleState sztsNew, bool fEnabled) STUB_VOID;
HRESULT SemanticZoomToggle::DefaultAction() override STUB_ZERO;

} // namespace DirectUI
