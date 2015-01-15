//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DTInstrumentsX/XRImportableDataElement.h>

#import "NSCoding.h"

@class NSDate, NSString, NSURL;

@interface XRPerformanceSessionTraceElement : XRImportableDataElement <NSCoding>
{
    BOOL _beenSeenByUserApp;
    BOOL _failed;
    NSString *_sessionTitle;
    NSDate *_creationDate;
    NSDate *_finalizationDate;
}

@property(readonly, nonatomic) BOOL failed; // @synthesize failed=_failed;
@property(readonly, nonatomic) NSDate *finalizationDate; // @synthesize finalizationDate=_finalizationDate;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, nonatomic) BOOL beenSeenByUserApp; // @synthesize beenSeenByUserApp=_beenSeenByUserApp;
@property(readonly, nonatomic) NSString *sessionTitle; // @synthesize sessionTitle=_sessionTitle;
- (void).cxx_destruct;
- (id)fullDescription;
- (BOOL)isEqual:(id)arg1;
- (id)elementWithFailedStatus:(BOOL)arg1;
- (id)elementWithFinalizationDate:(id)arg1;
- (id)elementWithSeenByUserApp:(BOOL)arg1;
@property(readonly, nonatomic) NSURL *dtpsURL;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBaseURL:(id)arg1 sessionTitle:(id)arg2 beenSeenByUserApp:(BOOL)arg3 creationDate:(id)arg4 failed:(BOOL)arg5;
- (id)initWithPerformanceSessionTraceElement:(id)arg1;

@end

