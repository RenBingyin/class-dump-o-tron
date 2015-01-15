//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ITunesPackage/AbstractElement.h>

@class NSString;

@interface AttributeElementBase : AbstractElement
{
    NSString *_name;
    NSString *_value;
}

+ (id)allKnownKeyPaths;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
@property(retain, nonatomic) NSString *value;
@property(retain, nonatomic) NSString *name;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

