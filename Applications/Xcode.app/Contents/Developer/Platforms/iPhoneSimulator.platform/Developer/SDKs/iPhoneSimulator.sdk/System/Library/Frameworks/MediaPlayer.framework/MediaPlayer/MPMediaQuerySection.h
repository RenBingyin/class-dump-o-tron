//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface MPMediaQuerySection : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_title;
    unsigned long long _sectionIndexTitleIndex;
    struct _NSRange _range;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long sectionIndexTitleIndex; // @synthesize sectionIndexTitleIndex=_sectionIndexTitleIndex;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)_init;
- (id)init;

@end

