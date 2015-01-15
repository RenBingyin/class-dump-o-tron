//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XRAnalysisCoreQueryHandler.h"

@class NSString, XRAnalysisCoreRowArray;

__attribute__((visibility("hidden")))
@interface _XRAnalysisCoreRowArrayQueryHandler : NSObject <XRAnalysisCoreQueryHandler>
{
    unsigned int _tableID;
    XRAnalysisCoreRowArray *_product;
}

@property(retain, nonatomic) XRAnalysisCoreRowArray *product; // @synthesize product=_product;
- (void).cxx_destruct;
- (void)reduceFromLocalResults:(id)arg1;
- (void)runWorkgroup:(unsigned short)arg1 of:(unsigned int)arg2 withLocalResults:(id)arg3 core:(id)arg4 registry:(id)arg5 rowIterator:(struct XRAnalysisCoreReadCursor *)arg6;
- (id)initWithTableID:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
