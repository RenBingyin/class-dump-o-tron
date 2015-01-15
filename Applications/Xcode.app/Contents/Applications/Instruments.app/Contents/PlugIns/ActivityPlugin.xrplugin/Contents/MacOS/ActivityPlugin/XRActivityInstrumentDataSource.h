//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XRBrushDataSource.h"

@class NSString;

@interface XRActivityInstrumentDataSource : NSObject <XRBrushDataSource>
{
    NSString *_brushType;
}

- (void).cxx_destruct;
- (void)run:(id)arg1 userFocusedOnPoint:(struct XRGraphPoint *)arg2 forInspectionTimeStamp:(unsigned long long)arg3;
- (void)run:(id)arg1 provideLabel:(id *)arg2 andLabelPosition:(struct XRGraphPoint *)arg3 forLabelIndex:(long long)arg4 forInspectionTimeStamp:(unsigned long long)arg5 graphAtIndex:(long long)arg6;
- (id)run:(id)arg1 labelForGraphAtIndex:(long long)arg2;
- (id)run:(id)arg1 colorForGraphAtIndex:(long long)arg2;
- (id)run:(id)arg1 imageForPoint:(struct XRGraphPoint *)arg2 graphAtIndex:(long long)arg3;
- (BOOL)run:(id)arg1 hasImagesForGraphAtIndex:(long long)arg2;
- (void)run:(id)arg1 providePoints:(struct XRGraphPoint **)arg2 count:(long long *)arg3 graphSequence:(id)arg4 forTimeRange:(struct XRTimeRange)arg5 minimumInterval:(unsigned long long)arg6 graphAtIndex:(long long)arg7;
- (id)run:(id)arg1 graphedDataKeypath:(id *)arg2;
- (unsigned long long)numberOfGraphsForRun:(id)arg1;
- (id)graphStyleForRun:(id)arg1;
- (void)dealloc;
- (id)initWithBrushType:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

