//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ITunesPackage/AbstractElement.h>

@class NSArray, NSString, SoftwareMetadataElement;

@interface SoftwareContainerElementBase : AbstractElement
{
    NSString *_vendorId;
    SoftwareMetadataElement *_metadata;
    NSArray *_softwareAssets;
}

+ (id)allKnownKeyPaths;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
@property(retain, nonatomic) NSArray *softwareAssets;
@property(retain, nonatomic) SoftwareMetadataElement *metadata;
@property(retain, nonatomic) NSString *vendorId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

