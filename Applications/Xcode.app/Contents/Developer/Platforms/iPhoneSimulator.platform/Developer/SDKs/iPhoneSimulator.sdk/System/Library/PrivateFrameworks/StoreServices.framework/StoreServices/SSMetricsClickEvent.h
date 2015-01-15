//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreServices/SSMetricsBaseEvent.h>

@class NSNumber, NSString;

@interface SSMetricsClickEvent : SSMetricsBaseEvent
{
}

- (id)description;
@property(retain, nonatomic) NSString *targetURL;
@property(retain, nonatomic) NSString *targetType;
@property(retain, nonatomic) NSString *targetIdentifier;
@property(retain, nonatomic) NSNumber *positionY;
@property(retain, nonatomic) NSNumber *positionX;
- (void)setLocationWithEventLocations:(id)arg1;
@property(retain, nonatomic) NSString *locationDescription;
@property(retain, nonatomic) id impressions;
@property(retain, nonatomic) NSString *actionType;
@property(retain, nonatomic) id actionDetails;
- (id)init;

@end

