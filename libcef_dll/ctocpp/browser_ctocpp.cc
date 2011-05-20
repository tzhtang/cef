// Copyright (c) 2011 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// A portion of this file was generated by the CEF translator tool.  When
// making changes by hand only do so within the body of existing static and
// virtual method implementations. See the translator.README.txt file in the
// tools directory for more information.
//

#include "libcef_dll/cpptoc/client_cpptoc.h"
#include "libcef_dll/ctocpp/browser_ctocpp.h"
#include "libcef_dll/ctocpp/frame_ctocpp.h"
#include "libcef_dll/transfer_util.h"


// STATIC METHODS - Body may be edited by hand.

bool CefBrowser::CreateBrowser(CefWindowInfo& windowInfo,
    CefRefPtr<CefClient> client, const CefString& url,
    const CefBrowserSettings& settings)
{
  return cef_browser_create(&windowInfo, CefClientCppToC::Wrap(client),
      url.GetStruct(), &settings)?true:false;
}

CefRefPtr<CefBrowser> CefBrowser::CreateBrowserSync(CefWindowInfo& windowInfo,
    CefRefPtr<CefClient> client, const CefString& url,
    const CefBrowserSettings& settings)
{
  cef_browser_t* impl = cef_browser_create_sync(&windowInfo,
      CefClientCppToC::Wrap(client), url.GetStruct(), &settings);
  if(impl)
    return CefBrowserCToCpp::Wrap(impl);
  return NULL;
}


// VIRTUAL METHODS - Body may be edited by hand.

void CefBrowserCToCpp::CloseBrowser()
{
  if(CEF_MEMBER_MISSING(struct_, close_browser))
    return;

  struct_->close_browser(struct_);
}

bool CefBrowserCToCpp::CanGoBack()
{
  if(CEF_MEMBER_MISSING(struct_, can_go_back))
    return false;

  return struct_->can_go_back(struct_) ? true : false;
}

void CefBrowserCToCpp::GoBack()
{
  if(CEF_MEMBER_MISSING(struct_, go_back))
    return;

  struct_->go_back(struct_);
}

bool CefBrowserCToCpp::CanGoForward()
{
  if(CEF_MEMBER_MISSING(struct_, can_go_forward))
    return false;
  
  return struct_->can_go_forward(struct_)?true:false;
}

void CefBrowserCToCpp::GoForward()
{
  if(CEF_MEMBER_MISSING(struct_, go_forward))
    return;

  struct_->go_forward(struct_);
}

void CefBrowserCToCpp::Reload()
{
  if(CEF_MEMBER_MISSING(struct_, reload))
    return;

  struct_->reload(struct_);
}

void CefBrowserCToCpp::ReloadIgnoreCache()
{
  if(CEF_MEMBER_MISSING(struct_, reload))
    return;

  struct_->reload_ignore_cache(struct_);
}

void CefBrowserCToCpp::StopLoad()
{
  if(CEF_MEMBER_MISSING(struct_, stop_load))
    return;
  
  struct_->stop_load(struct_);
}

void CefBrowserCToCpp::SetFocus(bool enable)
{
  if(CEF_MEMBER_MISSING(struct_, set_focus))
    return;
  
  struct_->set_focus(struct_, enable);
}

CefWindowHandle CefBrowserCToCpp::GetWindowHandle()
{
  if(CEF_MEMBER_MISSING(struct_, get_window_handle))
      return 0;
  
  return struct_->get_window_handle(struct_);
}

bool CefBrowserCToCpp::IsPopup()
{
  if(CEF_MEMBER_MISSING(struct_, is_popup))
    return false;
  
  return struct_->is_popup(struct_)?true:false;
}

CefRefPtr<CefClient> CefBrowserCToCpp::GetClient()
{
  if (CEF_MEMBER_MISSING(struct_, get_client))
    return NULL;

  cef_client_t* clientStruct = struct_->get_client(struct_);
  if(clientStruct)
    return CefClientCppToC::Unwrap(clientStruct);

  return NULL;
}

CefRefPtr<CefFrame> CefBrowserCToCpp::GetMainFrame()
{
  if(CEF_MEMBER_MISSING(struct_, get_main_frame))
    return NULL;

  cef_frame_t* frameStruct = struct_->get_main_frame(struct_);
  if(frameStruct)
    return CefFrameCToCpp::Wrap(frameStruct);

  return NULL;
}

CefRefPtr<CefFrame> CefBrowserCToCpp::GetFocusedFrame()
{
   if(CEF_MEMBER_MISSING(struct_, get_main_frame))
    return NULL;

  cef_frame_t* frameStruct = struct_->get_focused_frame(struct_);
  if(frameStruct)
    return CefFrameCToCpp::Wrap(frameStruct);

  return NULL;
}

CefRefPtr<CefFrame> CefBrowserCToCpp::GetFrame(const CefString& name)
{
  if(CEF_MEMBER_MISSING(struct_, get_main_frame))
    return NULL;

  cef_frame_t* frameStruct = struct_->get_frame(struct_, name.GetStruct());
  if(frameStruct)
    return CefFrameCToCpp::Wrap(frameStruct);

  return NULL;
}

void CefBrowserCToCpp::GetFrameNames(std::vector<CefString>& names)
{
  if(CEF_MEMBER_MISSING(struct_, get_frame_names))
    return;

  cef_string_list_t list = cef_string_list_alloc();
  struct_->get_frame_names(struct_, list);

  transfer_string_list_contents(list, names);
  cef_string_list_free(list);
}

void CefBrowserCToCpp::Find(int identifier, const CefString& searchText,
    bool forward, bool matchCase, bool findNext)
{
  if(CEF_MEMBER_MISSING(struct_, find))
    return;

  struct_->find(struct_, identifier, searchText.GetStruct(), forward,
      matchCase, findNext);
}

void CefBrowserCToCpp::StopFinding(bool clearSelection)
{
  if(CEF_MEMBER_MISSING(struct_, stop_finding))
    return;

  struct_->stop_finding(struct_, clearSelection);
}

double CefBrowserCToCpp::GetZoomLevel()
{
  if(CEF_MEMBER_MISSING(struct_, get_zoom_level))
    return 0.0;

  return struct_->get_zoom_level(struct_);
}

void CefBrowserCToCpp::SetZoomLevel(double zoomLevel)
{
  if(CEF_MEMBER_MISSING(struct_, set_zoom_level))
    return;

  return struct_->set_zoom_level(struct_, zoomLevel);
}

void CefBrowserCToCpp::ShowDevTools()
{
  if (CEF_MEMBER_MISSING(struct_, show_dev_tools))
    return;

  struct_->show_dev_tools(struct_);
}

void CefBrowserCToCpp::CloseDevTools()
{
  if (CEF_MEMBER_MISSING(struct_, close_dev_tools))
    return;

  struct_->close_dev_tools(struct_);
}

bool CefBrowserCToCpp::IsWindowRenderingDisabled()
{
  if (CEF_MEMBER_MISSING(struct_, is_window_rendering_disabled))
    return false;

  return struct_->is_window_rendering_disabled(struct_)?true:false;
}

bool CefBrowserCToCpp::GetSize(PaintElementType type, int& width, int& height)
{
  if (CEF_MEMBER_MISSING(struct_, get_size))
    return false;

  return struct_->get_size(struct_, type, &width, &height)?true:false;
}

void CefBrowserCToCpp::SetSize(PaintElementType type, int width, int height)
{
  if (CEF_MEMBER_MISSING(struct_, set_size))
    return;

  struct_->set_size(struct_, type, width, height);
}

bool CefBrowserCToCpp::IsPopupVisible()
{
  if (CEF_MEMBER_MISSING(struct_, is_popup_visible))
    return false;

  return struct_->is_popup_visible(struct_)?true:false;
}

void CefBrowserCToCpp::HidePopup()
{
  if (CEF_MEMBER_MISSING(struct_, hide_popup))
    return;

  struct_->hide_popup(struct_);
}

void CefBrowserCToCpp::Invalidate(const CefRect& dirtyRect)
{
  if (CEF_MEMBER_MISSING(struct_, invalidate))
    return;

  struct_->invalidate(struct_, &dirtyRect);
}

bool CefBrowserCToCpp::GetImage(PaintElementType type, int width, int height,
    void* buffer)
{
  if (CEF_MEMBER_MISSING(struct_, get_image))
    return false;

  return struct_->get_image(struct_, type, width, height, buffer)?true:false;
}

void CefBrowserCToCpp::SendKeyEvent(KeyType type, int key, int modifiers,
    bool sysChar, bool imeChar)
{
  struct_->send_key_event(struct_, type, key, modifiers, sysChar, imeChar);
}

void CefBrowserCToCpp::SendMouseClickEvent(int x, int y, MouseButtonType type,
    bool mouseUp, int clickCount)
{
  if (CEF_MEMBER_MISSING(struct_, send_mouse_click_event))
    return;

  struct_->send_mouse_click_event(struct_, x, y, type, mouseUp, clickCount);
}

void CefBrowserCToCpp::SendMouseMoveEvent(int x, int y, bool mouseLeave)
{
  if (CEF_MEMBER_MISSING(struct_, send_mouse_move_event))
    return;

  struct_->send_mouse_move_event(struct_, x, y, mouseLeave);
}

void CefBrowserCToCpp::SendMouseWheelEvent(int x, int y, int delta)
{
  if (CEF_MEMBER_MISSING(struct_, send_mouse_wheel_event))
    return;

  struct_->send_mouse_wheel_event(struct_, x, y, delta);
}

void CefBrowserCToCpp::SendFocusEvent(bool setFocus)
{
  if (CEF_MEMBER_MISSING(struct_, send_focus_event))
    return;

  struct_->send_focus_event(struct_, setFocus);
}

void CefBrowserCToCpp::SendCaptureLostEvent()
{
  if (CEF_MEMBER_MISSING(struct_, send_capture_lost_event))
    return;

  struct_->send_capture_lost_event(struct_);
}


#ifndef NDEBUG
template<> long CefCToCpp<CefBrowserCToCpp, CefBrowser,
    cef_browser_t>::DebugObjCt = 0;
#endif

