//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PFTInstrumentType.h"

@class NSDictionary, NSMutableArray, NSURL, PFTDTraceInstrumentPlugin;

@interface PFTDTraceInstrumentType : PFTInstrumentType
{
    NSDictionary *_probe;
    NSMutableArray *_eventTypes;
    NSURL *_fileURL;
}

+ (id)dTraceTypeBaseExtension;
+ (id)typeWithPlugIn:(id)arg1 XMLElement:(id)arg2 baseExtension:(id)arg3 fileURL:(id)arg4;
- (void).cxx_destruct;
- (BOOL)isEditable;
- (id)eventTypes;
@property(readonly) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (id)probeCopy;
- (id)probe;
- (void)setProbe:(id)arg1;
@property(readonly) PFTDTraceInstrumentPlugin *dTracePlugIn;
- (id)initWithPlugIn:(id)arg1 data:(id)arg2 fileURL:(id)arg3;

@end

