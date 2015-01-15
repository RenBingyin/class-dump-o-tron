//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XRStreamedPowerParser.h"

@class NSString, XRMeasurementStreamDefinition;

@interface XRStreamedMeasurementParser : NSObject <XRStreamedPowerParser>
{
    XRMeasurementStreamDefinition *_definition;
}

- (void).cxx_destruct;
- (BOOL)getTimeRange:(struct XRTimeRange *)arg1 andLength:(unsigned long long *)arg2 forStreamOffset:(unsigned long long)arg3 inStream:(id)arg4;
- (id)objectForEntry:(const struct XRPowerTimelineEntry *)arg1 inFile:(id)arg2;
- (void)setDefinition:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

