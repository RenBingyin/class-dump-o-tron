//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSDDecorator.h"
#import "TSKChangeSourceObserver.h"

@class NSArray, NSString, TSDInteractiveCanvasController;

__attribute__((visibility("hidden")))
@interface TSDUserDefinedGuideController : NSObject <TSDDecorator, TSKChangeSourceObserver>
{
    TSDInteractiveCanvasController *_icc;
    _Bool _editingGuides;
    _Bool _tornDown;
    NSArray *_currentGuides;
}

@property(readonly, nonatomic) TSDInteractiveCanvasController *interactiveCanvasController; // @synthesize interactiveCanvasController=_icc;
- (id)decoratorOverlayLayers;
- (void)deleteGuide:(id)arg1 atUnscaledPoint:(struct CGPoint)arg2;
- (void)changeOrientationOfGuide:(id)arg1 toType:(int)arg2 atUnscaledPoint:(struct CGPoint)arg3;
- (void)replaceGuide:(id)arg1 fromStorage:(id)arg2 atUnscaledPoint:(struct CGPoint)arg3;
- (double)positionForGuideType:(int)arg1 atPoint:(struct CGPoint)arg2 inStorage:(id)arg3;
- (id)guideStorageAtPoint:(struct CGPoint)arg1;
- (void)updateCurrentGuides;
@property(readonly, nonatomic) NSArray *currentGuides; // @synthesize currentGuides=_currentGuides;
- (_Bool)shouldShowUserDefinedGuides;
- (void)hideGuides;
- (void)showGuides;
- (void)endEditingGuides;
- (void)beginEditingGuides;
- (id)guideClosestToPoint:(struct CGPoint)arg1 distance:(double *)arg2 requiresSpecifiedType:(_Bool)arg3 desiredType:(int)arg4;
- (id)currentGuidesForHitTestingAtPoint:(struct CGPoint)arg1;
- (void)p_hideUserDefinedGuides;
- (void)p_showUserDefinedGuides;
- (void)asyncProcessChanges:(id)arg1 forChangeSource:(id)arg2;
- (void)dealloc;
- (void)teardown;
- (id)initWithInteractiveCanvasController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

