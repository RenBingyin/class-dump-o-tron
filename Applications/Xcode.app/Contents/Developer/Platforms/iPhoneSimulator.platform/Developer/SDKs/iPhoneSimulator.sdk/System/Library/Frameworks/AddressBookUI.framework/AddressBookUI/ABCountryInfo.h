//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ABCountryInfo : NSObject
{
    NSString *_countryCode;
    NSString *_countryName;
    NSString *_phoneticCountryName;
}

@property(copy, nonatomic) NSString *phoneticCountryName; // @synthesize phoneticCountryName=_phoneticCountryName;
@property(copy, nonatomic) NSString *countryName; // @synthesize countryName=_countryName;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;

@end

