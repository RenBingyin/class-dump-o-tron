//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IBDocumentArchiving.h"
#import "IBUISimulatedMetrics.h"

@class NSString;

@interface IBUISimulatedMetricsInferredSentinel : NSObject <IBUISimulatedMetrics, IBDocumentArchiving>
{
}

+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
+ (id)sharedInstance;
@property(readonly) NSString *displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (id)init;
- (id)initSharedInstance;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

