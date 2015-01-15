//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BBUniquableObject.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class BBColor, BBImage, NSString;

@interface BBAppearance : NSObject <BBUniquableObject, NSSecureCoding, NSCopying>
{
    NSString *_title;
    BBColor *_titleColor;
    BBImage *_image;
    BBColor *_color;
    long long _style;
    NSString *_viewClassName;
}

+ (_Bool)supportsSecureCoding;
+ (id)appearanceWithTitle:(id)arg1;
@property(copy, nonatomic) NSString *viewClassName; // @synthesize viewClassName=_viewClassName;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(copy, nonatomic) BBColor *color; // @synthesize color=_color;
@property(copy, nonatomic) BBImage *image; // @synthesize image=_image;
@property(copy, nonatomic) BBColor *titleColor; // @synthesize titleColor=_titleColor;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)uniqueIdentifier;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

