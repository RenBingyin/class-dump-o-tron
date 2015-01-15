//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class NSBox, NSButton, NSSegmentedControl, NSTextField, NSView;

@interface XRPageBrowserViewController : NSViewController
{
    id <XRPageBrowserDataSource> _datasource;
    NSButton *_pageBackButton;
    NSButton *_pageForwardButton;
    NSSegmentedControl *_pageMarkers;
    NSBox *_box;
    NSTextField *_label;
    unsigned long long _pageIndex;
    unsigned long long _pageCount;
    NSView *_currentView;
}

@property(retain) NSView *currentView; // @synthesize currentView=_currentView;
@property unsigned long long pageCount; // @synthesize pageCount=_pageCount;
@property unsigned long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property __weak NSTextField *label; // @synthesize label=_label;
@property __weak NSBox *box; // @synthesize box=_box;
@property __weak NSSegmentedControl *pageMarkers; // @synthesize pageMarkers=_pageMarkers;
@property __weak NSButton *pageForwardButton; // @synthesize pageForwardButton=_pageForwardButton;
@property __weak NSButton *pageBackButton; // @synthesize pageBackButton=_pageBackButton;
- (void).cxx_destruct;
- (void)pageForwardAction:(id)arg1;
- (void)pageBackAction:(id)arg1;
- (void)pageMarkersCallback:(id)arg1;
@property __weak id <XRPageBrowserDataSource> datasource; // @synthesize datasource=_datasource;
- (void)updatePage;
- (void)awakeFromNib;
- (id)init;

@end

