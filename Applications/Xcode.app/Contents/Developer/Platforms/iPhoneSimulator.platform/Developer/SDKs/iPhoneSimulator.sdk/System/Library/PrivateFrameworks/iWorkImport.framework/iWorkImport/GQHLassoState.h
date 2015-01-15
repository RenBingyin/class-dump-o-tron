//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/GQHState.h>

@class GQHXML;

__attribute__((visibility("hidden")))
@interface GQHLassoState : GQHState
{
    GQHXML *mNavigation;
    int mSheetCount;
    int mTableCount;
    struct __CFString *mCssUri;
    struct __CFString *mCurrentSheetFilename;
    struct __CFString *mCurrentSheetUri;
    struct CGPoint mMaxCanvasPoint;
    unsigned int mCurrentDrawableZOrder;
    unsigned int mZOrderedDrawableCount;
    struct __CFDictionary *mDrawableUidToCssZOrderClassMap;
    struct __CFArray *mSheetCssUriList;
    struct __CFString *mSheetCssFilename;
    struct __CFString *mSheetOneCss;
    struct __CFString *mSheetOneLastCSS;
    char *mFirstWorkspaceName;
    _Bool mIsProgressiveMode;
    GQHXML *mIndex;
    struct __CFArray *mSheetFilenameList;
    struct __CFArray *mSheetUriList;
    struct __CFArray *mSheetCssLastUriList;
    struct __CFString *mSheetCssLastFilename;
}

- (id).cxx_construct;
- (struct __CFString *)writeTabsJS;
- (_Bool)inProgressiveMode;
- (void)writeNavigationPage:(id)arg1;
- (_Bool)writeIndexPageWithIFrame:(id)arg1;
- (void)writeIndexPageWithDocumentSize:(struct CGSize)arg1;
- (unsigned int)currentDrawableZOrder;
- (struct __CFString *)cssZOrderClassForDrawableUid:(const char *)arg1;
- (_Bool)drawablesNeedCssZOrdering;
- (void)addedDrawableWithBounds:(struct CGRect)arg1;
- (struct CGPoint)maxCanvasPoint;
- (_Bool)finishMainHtml;
- (void)addCachedStyle:(struct __CFString *)arg1;
- (struct __CFString *)makeInlineStyle:(struct __CFString *)arg1;
- (void)addStyle:(struct __CFString *)arg1 className:(struct __CFString *)arg2 srcStyle:(id)arg3;
- (int)endSheet;
- (void)cacheAnchorForIndexPage:(char *)arg1;
- (void)writeAnchorInNavigationPage:(char *)arg1;
- (void)beginNewSheet:(const char *)arg1 processorState:(id)arg2;
- (void)dealloc;
- (id)initWithState:(id)arg1;

@end

