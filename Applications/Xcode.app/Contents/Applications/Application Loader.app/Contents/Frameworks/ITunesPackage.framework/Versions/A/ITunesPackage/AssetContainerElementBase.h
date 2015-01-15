//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ITunesPackage/AbstractElement.h>

@class NSArray, NSString;

@interface AssetContainerElementBase : AbstractElement
{
    NSString *_type;
    NSString *_productId;
    NSArray *_territories;
    NSArray *_dataFiles;
}

+ (id)allKnownKeyPaths;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
@property(retain, nonatomic) NSArray *dataFiles;
@property(retain, nonatomic) NSArray *territories;
@property(retain, nonatomic) NSString *productId;
@property(retain, nonatomic) NSString *type;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

