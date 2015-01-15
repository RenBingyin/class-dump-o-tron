//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTViewController.h"

#import "IDESourceControlLogDetailDelegate.h"
#import "NSPopoverDelegate.h"

@class CALayer, IDEBlameAnnotationAgeBarView, IDEBlameAnnotationBorderedView, IDESourceCodeBlameController, IDESourceControlLogDetailViewController, NSButton, NSColor, NSNib, NSPopUpButton, NSPopover, NSString, NSTextField, NSView;

@interface IDEBlameAnnotationViewController : DVTViewController <NSPopoverDelegate, IDESourceControlLogDetailDelegate>
{
    IDEBlameAnnotationBorderedView *_borderedView;
    NSView *_primaryView;
    NSTextField *_messageTextField;
    NSTextField *_dateTextField;
    IDEBlameAnnotationAgeBarView *_ageBar;
    NSButton *_actionButton;
    long long _fontSize;
    id _viewFrameObserver;
    id _themeObserver;
    double _relativeAge;
    NSNib *_nibUsedForLoading;
    IDESourceCodeBlameController *_blameController;
    NSPopover *_logPopover;
    id _blameShowInfoPanelObserver;
    id _blameHideInfoPanelObserver;
    NSPopUpButton *_detailPopUpButton;
    NSTextField *_committerTextField;
    IDESourceControlLogDetailViewController *_detailController;
    long long _trackingTag;
    CALayer *_highlightLayer;
    BOOL _uncommitted;
    NSColor *_titleColor;
    NSColor *_subtitleColor;
}

+ (id)keyPathsForValuesAffectingDisplayLogItemDate;
+ (id)keyPathsForValuesAffectingDisplayLogItemAuthorName;
+ (id)keyPathsForValuesAffectingDisplayLogItemMessage;
+ (BOOL)_hasLightBackround;
+ (id)annotationHighlightGradient;
+ (id)annotationHighlightColor;
+ (id)annotationActiveHighlightGradient;
+ (id)annotationActiveHighlightColor;
+ (double)defaultWidth;
+ (id)_fontWithDefaultMessageFontSize;
+ (double)_defaultMessageFontSize;
+ (id)defaultViewNibName;
@property(retain) NSColor *subtitleColor; // @synthesize subtitleColor=_subtitleColor;
@property(retain) NSColor *titleColor; // @synthesize titleColor=_titleColor;
@property BOOL uncommitted; // @synthesize uncommitted=_uncommitted;
@property(retain) IDESourceCodeBlameController *blameController; // @synthesize blameController=_blameController;
@property long long fontSize; // @synthesize fontSize=_fontSize;
@property(retain) IDEBlameAnnotationAgeBarView *ageBar; // @synthesize ageBar=_ageBar;
@property(retain) NSButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain) NSTextField *messageTextField; // @synthesize messageTextField=_messageTextField;
@property(retain) IDEBlameAnnotationBorderedView *borderedView; // @synthesize borderedView=_borderedView;
@property(retain) NSView *primaryView; // @synthesize primaryView=_primaryView;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)_layoutView;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)goToDiff:(id)arg1;
- (void)goToCompare:(id)arg1;
- (void)goToRevision:(id)arg1;
- (void)popoverWillClose:(id)arg1;
- (void)showBlameMenu:(id)arg1;
- (id)viewWindow;
- (void)showInfoPanel;
- (void)compareToCurrentRevision;
- (BOOL)detailShouldShowOpenBlameView;
- (void)openBlameView;
- (void)openComparisonView;
@property double relativeAge; // @synthesize relativeAge=_relativeAge;
- (id)displayLogItemDate;
- (id)displayLogItemAuthorName;
- (id)displayLogItemMessage;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)loadView;
- (void)_updateFontAndTheme;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

