//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIBannerItem.h"

@class NSArray, NSDate, NSString, UIImage;

@interface MNBannerItem : SBUIBannerItem
{
    int _maneuver;
    int _drivingSide;
    NSArray *_instructions;
    NSString *_distanceText;
    NSDate *_sortDate;
    _Bool _withinManeuver;
    UIImage *_shieldImage;
    struct CGPoint _shieldCenterPoint;
}

@property(nonatomic) struct CGPoint shieldCenterPoint; // @synthesize shieldCenterPoint=_shieldCenterPoint;
@property(copy, nonatomic) UIImage *shieldImage; // @synthesize shieldImage=_shieldImage;
@property(nonatomic, getter=isWithinManeuver) _Bool withinManeuver; // @synthesize withinManeuver=_withinManeuver;
@property(retain, nonatomic) NSDate *sortDate; // @synthesize sortDate=_sortDate;
@property(copy, nonatomic) NSString *distanceText; // @synthesize distanceText=_distanceText;
@property(copy, nonatomic) NSArray *instructions; // @synthesize instructions=_instructions;
@property(nonatomic) int drivingSide; // @synthesize drivingSide=_drivingSide;
@property(nonatomic) int maneuver; // @synthesize maneuver=_maneuver;
- (void).cxx_destruct;
- (id)description;
- (CDUnknownBlockType)action;
- (_Bool)isSticky;
- (_Bool)canShowInAssistant;
- (unsigned long long)priority;

@end

