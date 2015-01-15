//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString, NSURL, SKUIArtworkList, UIColor;

@interface SKUICountdown : NSObject
{
    _Bool _isLoaded;
    _Bool _flapped;
    long long _type;
    NSURL *_URL;
    NSDate *_endDate;
    unsigned long long _dateFormat;
    NSDate *_startDate;
    long long _initialValue;
    long long _finalValue;
    long long _rate;
    NSString *_numberFormat;
    UIColor *_fontColor;
    UIColor *_flapTopColor;
    UIColor *_flapBottomColor;
    SKUIArtworkList *_artworkList;
    SKUIArtworkList *_endArtworkList;
}

@property(retain, nonatomic) SKUIArtworkList *endArtworkList; // @synthesize endArtworkList=_endArtworkList;
@property(retain, nonatomic) SKUIArtworkList *artworkList; // @synthesize artworkList=_artworkList;
@property(nonatomic, getter=isFlapped) _Bool flapped; // @synthesize flapped=_flapped;
@property(copy, nonatomic) UIColor *flapBottomColor; // @synthesize flapBottomColor=_flapBottomColor;
@property(copy, nonatomic) UIColor *flapTopColor; // @synthesize flapTopColor=_flapTopColor;
@property(copy, nonatomic) UIColor *fontColor; // @synthesize fontColor=_fontColor;
@property(copy, nonatomic) NSString *numberFormat; // @synthesize numberFormat=_numberFormat;
@property(nonatomic) long long rate; // @synthesize rate=_rate;
@property(nonatomic) long long finalValue; // @synthesize finalValue=_finalValue;
@property(nonatomic) long long initialValue; // @synthesize initialValue=_initialValue;
@property(copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(nonatomic) unsigned long long dateFormat; // @synthesize dateFormat=_dateFormat;
@property(copy, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (_Bool)isLoaded;
- (void)updateWithDictionary:(id)arg1;
- (id)initWithCountdownDictionary:(id)arg1;

@end

