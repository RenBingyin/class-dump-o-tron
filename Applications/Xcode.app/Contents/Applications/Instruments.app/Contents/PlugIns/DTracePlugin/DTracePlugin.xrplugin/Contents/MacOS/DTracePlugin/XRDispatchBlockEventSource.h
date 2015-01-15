//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XRDispatchBrushSource.h"

@interface XRDispatchBlockEventSource : XRDispatchBrushSource
{
    int _statType;
}

+ (id)validBrushNames;
- (BOOL)stackGraphsForRun:(id)arg1;
- (id)run:(id)arg1 labelForGraphAtIndex:(long long)arg2;
- (void)run:(id)arg1 provideLabel:(id *)arg2 andLabelPosition:(struct XRGraphPoint *)arg3 forLabelIndex:(long long)arg4 forInspectionTimeStamp:(unsigned long long)arg5 graphAtIndex:(long long)arg6;
- (BOOL)run:(id)arg1 hasImagesForGraphAtIndex:(long long)arg2;
- (void)run:(id)arg1 providePoints:(struct XRGraphPoint **)arg2 count:(long long *)arg3 graphSequence:(id)arg4 forTimeRange:(struct XRTimeRange)arg5 minimumInterval:(unsigned long long)arg6 graphAtIndex:(long long)arg7;
- (id)run:(id)arg1 graphedDataKeypath:(id *)arg2;
- (unsigned long long)numberOfGraphsForRun:(id)arg1;
- (id)_blockGraphLabel:(float)arg1;
- (float)_blockStatisticToGraph:(id)arg1;
- (id)initWithBrushType:(id)arg1 name:(id)arg2;

@end

