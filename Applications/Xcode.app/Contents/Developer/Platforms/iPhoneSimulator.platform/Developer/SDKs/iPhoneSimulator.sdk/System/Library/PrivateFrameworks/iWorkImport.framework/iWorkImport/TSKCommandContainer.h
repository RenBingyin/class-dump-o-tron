//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import "TSKInnerCommandsProvider.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface TSKCommandContainer : TSPObject <TSKInnerCommandsProvider>
{
    NSMutableArray *mCommands;
}

- (void)redo;
- (void)undo;
- (_Bool)hasCommands;
- (void)addCommand:(id)arg1;
- (void)dealloc;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;
- (void)populateChangePropagationMapAfterCommit:(id)arg1;
- (_Bool)modifiesAnyObjectPassingTest:(CDUnknownBlockType)arg1;

@end

