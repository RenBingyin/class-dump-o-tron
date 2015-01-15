//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <InstrumentsPlugIn/XRGraphSequence.h>

@interface XRStrataGraphSequence : XRGraphSequence
{
    struct XRStrataGroup *_strataGroups;
    struct XRStrataBufferChunk *_bufferHead;
    struct XRStrataBufferChunk *_bufferTail;
    unsigned long long _strataCount;
    unsigned long long _groupIndex;
    unsigned long long _strataIndex;
    BOOL _contextIsStrataGroup;
}

- (BOOL)append:(id)arg1;
- (BOOL)combine:(id)arg1;
- (void)replaceWith:(id)arg1;
- (void)addWeight:(float)arg1 state:(unsigned long long)arg2 toStrataGroup:(struct XRStrataGroup *)arg3 atIndex:(unsigned int)arg4;
- (struct XRStrataGroup *)newStrataGroupWithComponents:(unsigned int)arg1 strata:(struct XRStrata *)arg2;
- (struct XRStrataGroup *)newStrataGroupWithComponents:(unsigned int)arg1;
- (unsigned int)components;
- (struct XRStrataGroup *)strataGroupAtIndex:(unsigned long long)arg1;
- (void)initializeStrataWithComponents:(unsigned int)arg1 contextIsStrataGroup:(BOOL)arg2;
- (void)dealloc;
- (void)_createNewBufferChunk;
- (void)_freeStrataBufferChunks;

@end

