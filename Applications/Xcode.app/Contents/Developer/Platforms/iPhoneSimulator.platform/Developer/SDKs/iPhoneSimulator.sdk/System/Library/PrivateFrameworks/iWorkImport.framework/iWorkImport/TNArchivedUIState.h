//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

@class TNUIState;

__attribute__((visibility("hidden")))
@interface TNArchivedUIState : TSPObject
{
    TNUIState *mUIState;
}

@property(readonly, nonatomic) TNUIState *uiState; // @synthesize uiState=mUIState;
- (void)saveToArchiver:(id)arg1;
- (void)dealloc;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithUIState:(id)arg1 context:(id)arg2;

@end

