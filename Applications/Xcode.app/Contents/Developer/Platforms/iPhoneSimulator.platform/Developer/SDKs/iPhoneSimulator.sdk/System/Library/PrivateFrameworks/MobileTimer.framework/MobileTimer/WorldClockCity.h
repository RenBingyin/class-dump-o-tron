//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ALCity, City, NSDictionary, NSNumber, NSString, NSURL;

@interface WorldClockCity : NSObject
{
    ALCity *_alCity;
    City *_weatherCity;
    NSString *_timeZone;
    NSString *_name;
    NSString *_countryName;
    NSString *_countryCode;
    NSString *_unlocalizedName;
    NSString *_unlocalizedCountryName;
}

+ (_Bool)isWorldClockCityProperties:(id)arg1;
@property(retain, nonatomic) City *weatherCity; // @synthesize weatherCity=_weatherCity;
@property(readonly, nonatomic) ALCity *alCity; // @synthesize alCity=_alCity;
@property(readonly, nonatomic) NSURL *idUrl;
@property(readonly, nonatomic) NSString *countryCode;
@property(readonly, nonatomic) NSString *unlocalizedCountryName;
@property(readonly, nonatomic) NSString *unlocalizedCityName;
@property(readonly, nonatomic) NSString *countryName;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *timeZone;
@property(readonly, nonatomic) NSNumber *alCityId;
@property(readonly, nonatomic) NSDictionary *properties;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithProperties:(id)arg1;
- (id)initWithTimeZone:(id)arg1 countryCode:(id)arg2 name:(id)arg3 countryName:(id)arg4 unlocalizedName:(id)arg5 unlocalizedCountryName:(id)arg6;
- (id)initWithALCityIdentifier:(int)arg1;
- (id)initWithALCity:(id)arg1;

@end

