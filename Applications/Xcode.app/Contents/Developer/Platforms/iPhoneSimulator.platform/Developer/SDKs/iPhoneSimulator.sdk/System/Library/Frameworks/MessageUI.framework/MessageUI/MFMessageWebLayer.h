//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIWebBrowserView.h"

@class DOMRange, MFLibraryMessage, MFMessageReformattingContext, NSMutableDictionary, NSObject<MFMessageWebLayerDelegate>, NSString, NSTimer;

@interface MFMessageWebLayer : UIWebBrowserView
{
    NSString *_currentUUID;
    NSTimer *_ignorePendingStylesheetsTimer;
    NSObject<MFMessageWebLayerDelegate> *_mwlDelegate;
    int _displayStyle;
    unsigned int _shouldReformat:1;
    unsigned int _unitTests:1;
    unsigned int _isFromEntourage:1;
    _Bool _prePrintDataDetectionPending;
    _Bool _showRemoteImages;
    _Bool _hasUnloadedRemoteImages;
    _Bool _isReformatting;
    CDUnknownBlockType _postDisplayOperationBlock;
    CDUnknownBlockType _postDisplayCancellationBlock;
    NSString *_mainFrameURL;
    MFLibraryMessage *_displayInfoCacheLibraryMessage;
    NSMutableDictionary *_displayInfoCache;
    _Bool _stoppedLoading;
    _Bool _didReformatMessage;
    NSString *_originalHTMLString;
    MFMessageReformattingContext *_reformattingContext;
    DOMRange *_bottomReplyRange;
    unsigned long long _bottomReplyLastQuoteLevel;
}

+ (void)initialize;
+ (void)clearMessageContentCache;
+ (void)clearUnblockedRemoteImagesCache;
+ (void)endBlockingRemoteImages;
+ (void)beginBlockingRemoteImagesExceptForMessageWebLayer:(id)arg1;
@property unsigned long long bottomReplyLastQuoteLevel; // @synthesize bottomReplyLastQuoteLevel=_bottomReplyLastQuoteLevel;
@property(retain) DOMRange *bottomReplyRange; // @synthesize bottomReplyRange=_bottomReplyRange;
@property(retain) MFMessageReformattingContext *reformattingContext; // @synthesize reformattingContext=_reformattingContext;
@property(copy) NSString *originalHTMLString; // @synthesize originalHTMLString=_originalHTMLString;
@property _Bool hasUnloadedRemoteImages; // @synthesize hasUnloadedRemoteImages=_hasUnloadedRemoteImages;
@property _Bool showRemoteImages; // @synthesize showRemoteImages=_showRemoteImages;
@property _Bool prePrintDataDetectionPending; // @synthesize prePrintDataDetectionPending=_prePrintDataDetectionPending;
- (id)attachmentDownloadProgressObserversByUniqueIdentifiers;
- (int)displayStyle;
- (_Bool)hasPluginWithUninitializedSize;
- (_Bool)isCancelled;
- (void)displayDidEnd;
- (void)cancelPostDisplayOperation;
- (void)setPostDisplayOperationBlock:(CDUnknownBlockType)arg1 cancellationBlock:(CDUnknownBlockType)arg2;
- (void)stopLoadingAndClear;
- (void)reload;
- (void)loadFragments:(id)arg1 forLibraryMessage:(id)arg2;
- (void)stopLoading:(id)arg1;
- (void)_schedulePendingIgnoreStylesheets;
- (void)_cancelPendingIgnoreStylesheets;
- (void)_ignorePendingStylesheets:(id)arg1;
- (_Bool)webView:(id)arg1 shouldPaintBrokenImageForURL:(id)arg2;
- (void)webView:(id)arg1 didFirstVisuallyNonEmptyLayoutInFrame:(id)arg2;
- (void)_webthread_webView:(id)arg1 tileDidDraw:(id)arg2;
- (void)attemptEarlyMessageReformat;
- (_Bool)reformatMessageOnce;
- (void)_webthread_webView:(id)arg1 didFinishDocumentLoadForFrame:(id)arg2;
- (void)_webthread_webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)parseDocument:(id)arg1;
- (id)newQuoteSubparser;
- (void)setMessageIsFromEntourage:(_Bool)arg1;
- (void)_frameDidFinishPrePrintURLification:(id)arg1;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)adjustSizeBasedOnMainFrame:(id)arg1;
- (void)addMessageContentURL:(id)arg1;
- (void)addUnblockedRemoteImageURL:(id)arg1;
- (void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
- (void)webThreadWebView:(id)arg1 resource:(id)arg2 didFailLoadingWithError:(id)arg3 fromDataSource:(id)arg4;
- (void)webThreadWebView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3;
- (id)webThreadWebView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;
- (id)webThreadWebView:(id)arg1 identifierForInitialRequest:(id)arg2 fromDataSource:(id)arg3;
- (void)_replaceElement:(id)arg1 with:(id)arg2;
- (id)_createInlinePluginElementWithHTMLRepresentation:(id)arg1 inDocument:(id)arg2;
- (void)updateImageWithSource:(id)arg1 withHTMLRepresentation:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)updateInlinePluginWithContentID:(id)arg1 withHTMLRepresentation:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)updateImageURL:(id)arg1 withURL:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)appendMarkupString:(id)arg1 baseURL:(id)arg2;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)_sendDelegateSizeDidChange;
- (void)_preferredContentSizeDidChangeNotification:(id)arg1;
- (void)copy:(id)arg1;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 decidePolicyForNewWindowAction:(id)arg2 request:(id)arg3 newFrameName:(id)arg4 decisionListener:(id)arg5;
- (double)maximumDoubleTapScale;
- (void)dealloc;
- (id)messageWebLayerDelegate;
- (void)setMessageWebLayerDelegate:(id)arg1;
- (double)defaultWidth;
- (_Bool)usePadDisplayStyle;
- (id)initWithFrame:(struct CGRect)arg1 visibleSize:(struct CGSize)arg2 viewportWidth:(double)arg3 displayStyle:(int)arg4;
- (void)saveDisplayInfoCache;
- (void)invalidateDisplayInfoCache;
- (void)setBool:(_Bool)arg1 forDisplayInfoCacheKey:(id)arg2;
- (_Bool)boolForDisplayInfoCacheKey:(id)arg1;
- (void)setObject:(id)arg1 forDisplayInfoCacheKey:(id)arg2;
- (id)objectForDisplayInfoCacheKey:(id)arg1;
- (void)prepareDisplayInfoCacheWithLibraryMessage:(id)arg1;
- (_Bool)_elementHasDefinedWidth:(id)arg1;
- (id)_reformatOneElementUsingMethod:(CDUnknownBlockType)arg1 shouldCancel:(_Bool *)arg2;
- (id)_rangeOfFirstText;
- (_Bool)_rescaleTopLevelElements;
- (_Bool)_shouldRescaleMessage;
- (_Bool)_shouldContinueResizingMessage;
- (_Bool)_shouldResizeMessage;
- (void)_didFinishReformattingMessage;
- (void)_reformattingDidFail;
- (void)_willBeginReformattingMessage;
- (void)clearMessageReformattingCache;
- (void)reformatMessage:(id)arg1;
- (void)reformatAttachments:(id)arg1;
- (_Bool)canReformatMessageWithoutSubresources:(id)arg1 resultCanBeCached:(_Bool *)arg2;

@end

