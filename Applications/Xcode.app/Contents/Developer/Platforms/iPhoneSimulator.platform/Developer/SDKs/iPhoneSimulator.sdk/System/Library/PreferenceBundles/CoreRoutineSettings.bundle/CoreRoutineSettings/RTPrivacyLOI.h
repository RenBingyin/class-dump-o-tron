//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MKCircle.h"

#import "RTMapAndTableRowItem.h"

@class NSArray, NSString, RTLocationOfInterest;

@interface RTPrivacyLOI : MKCircle <RTMapAndTableRowItem>
{
    long long state;
    RTLocationOfInterest *loi;
    NSArray *destinations;
}

@property(retain, nonatomic) NSArray *destinations; // @synthesize destinations;
@property(retain, nonatomic) RTLocationOfInterest *loi; // @synthesize loi;
@property(nonatomic) long long state; // @synthesize state;
- (void).cxx_destruct;
- (long long)frequencyCompare:(id)arg1;
- (long long)recentCompare:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)populateSubtitleStyleCell:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

