//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface XRKEventsIndex : NSObject
{
    struct _XRKEventsIndexPrivate *_p;
}

- (BOOL)getMemoryUsage:(struct XRKEventsIndexMemStats *)arg1;
- (id)histogramForQuery:(id)arg1 intervalDuration:(unsigned long long)arg2;
- (void)insertEventRefs:(const struct XRKEventRef *)arg1 count:(unsigned long long)arg2;
- (BOOL)advanceCursor:(id)arg1;
- (BOOL)getEventRef:(struct XRKEventRef *)arg1 atCursor:(id)arg2;
- (id)cursorForQuery:(id)arg1;
- (void)executeQueryBatch:(id)arg1;
- (void)enumerateEventRefsForQuery:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end
