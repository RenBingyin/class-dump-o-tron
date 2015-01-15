//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSDRep.h>

#import "TSDContainerRep.h"
#import "TSWPStorageObserver.h"

@class NSObject<TSDContainerInfo>, NSString, TSWPRep;

__attribute__((visibility("hidden")))
@interface KNNoteRep : TSDRep <TSDContainerRep, TSWPStorageObserver>
{
    TSWPRep *mContainedRep;
}

@property(readonly, nonatomic) TSWPRep *containedRep; // @synthesize containedRep=mContainedRep;
- (void)storage:(id)arg1 didChangeRange:(struct _NSRange)arg2 delta:(long long)arg3 broadcastKind:(int)arg4;
- (void)willEndEditingContainedRep;
- (void)willBeginEditingContainedRep;
@property(readonly, nonatomic) NSObject<TSDContainerInfo> *containerInfo;
- (void)recursivelyPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)recursivelyPerformSelector:(SEL)arg1;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 withObject:(id)arg2;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1;
- (id)editingRep;
- (double)columnHeight;
- (id)hitRep:(struct CGPoint)arg1;
- (id)childReps;
- (void)updateChildrenFromLayout;
- (void)addAdditionalChildLayersToArray:(id)arg1;
- (_Bool)canSelectChildRep:(id)arg1;
- (_Bool)canBeginEditingChildRepOnDoubleTap:(id)arg1;
- (void)selectChildRep:(id)arg1;
- (void)willBeRemoved;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

