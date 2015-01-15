//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XCElementDisplayDelegateP.h"

@class NSString, XCElementSpacings;

@interface XCElementDisplay : NSObject <XCElementDisplayDelegateP>
{
    XCElementSpacings *_spacings;
}

- (void)dealloc;
- (void)clearViewForDisplayer:(struct NSObject *)arg1;
- (void)_releaseValuesDisplay;
- (id)defaultDataBinding;
- (id)dataDelegateDataForDisplayer:(struct NSObject *)arg1;
- (void)displayer:(struct NSObject *)arg1 setDataDelegateData:(id)arg2;
- (BOOL)storesDataForDisplayer:(struct NSObject *)arg1;
- (void)displayer:(struct NSObject *)arg1 swapView:(id)arg2;
- (id)viewForDisplayer:(struct NSObject *)arg1;
- (void)removeFromViewForDisplayer:(struct NSObject *)arg1;
- (void)addToViewForDisplayer:(struct NSObject *)arg1;
- (id)configurationForDisplayer:(struct NSObject *)arg1;
- (void)displayer:(struct NSObject *)arg1 setConfiguration:(id)arg2;
- (void)displayer:(struct NSObject *)arg1 installWithConfiguration:(id)arg2 useLocalData:(BOOL)arg3 initialData:(id)arg4;
- (void)installLocalDataDelegateForDisplayer:(struct NSObject *)arg1;
- (void)dataChangedForDisplayer:(struct NSObject *)arg1;
- (void)variableStateChangedForDisplayer:(struct NSObject *)arg1;
- (struct CGSize)sizeProposalForDisplayer:(struct NSObject *)arg1;
- (void)discardEditingForDisplayer:(struct NSObject *)arg1;
- (BOOL)commitEditingForDisplayer:(struct NSObject *)arg1;
- (BOOL)isEditingForDisplayer:(struct NSObject *)arg1;
- (void)abortEditingForDisplayer:(struct NSObject *)arg1;
- (BOOL)isInEditingStateForDisplayer:(struct NSObject *)arg1;
- (BOOL)displayer:(struct NSObject *)arg1 isTabCandidateWithExtendedTabbing:(BOOL)arg2;
- (void)displayer:(struct NSObject *)arg1 finishPositioningInContentFrame:(struct CGRect)arg2;
- (struct CGSize)sizeToFitForDisplayer:(struct NSObject *)arg1;
- (id)displayer:(struct NSObject *)arg1 cursorAt:(struct CGPoint)arg2;
- (void)displayer:(struct NSObject *)arg1 performDelegateAction:(id)arg2;
- (void)selectTabCandidateForDisplayer:(struct NSObject *)arg1;
- (void)displayer:(struct NSObject *)arg1 selectAll:(BOOL)arg2;
- (BOOL)displayer:(struct NSObject *)arg1 validMouseDownLoc:(struct CGPoint)arg2 inFrame:(struct CGRect)arg3;
- (BOOL)displayer:(struct NSObject *)arg1 handleMouseDownOnElement:(struct NSObject *)arg2 event:(id)arg3;
- (void)drawFocusRingForDisplayer:(struct NSObject *)arg1;
- (void)displayer:(struct NSObject *)arg1 drawBackground:(struct CGRect)arg2 forFrame:(struct CGRect)arg3;
- (void)displayer:(struct NSObject *)arg1 drawForeground:(struct CGRect)arg2 forFrame:(struct CGRect)arg3;
- (void)configureSpacingsWithEnclosure:(struct _XCElementInset)arg1;
- (void)configureSpacingsWithContentOffset:(struct _XCElementInset)arg1 defaultSpace:(struct _XCElementInset)arg2;
- (void)configureSpacingsWithContentOffset:(struct _XCElementInset)arg1 enclosure:(struct _XCElementInset)arg2 defaultSpace:(struct _XCElementInset)arg3;
- (id)localSpacingsCreateIfNecessary;
- (id)spacings;
- (void)setSpacings:(id)arg1;
- (void)configureForControlSize:(unsigned long long)arg1 font:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

