//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ITunesPackage/AbstractCopyrightableElement.h>

@class NSArray, NSString;

@interface AbstractMusicElementBase : AbstractCopyrightableElement
{
    NSString *_labelName;
    NSString *_grid;
    NSArray *_titles;
    NSString *_phoneticTitle;
    NSArray *_titleVersions;
    NSString *_phoneticTitleVersion;
    NSArray *_locales;
}

+ (id)allKnownKeyPaths;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
@property(retain, nonatomic) NSArray *locales;
@property(retain, nonatomic) NSString *phoneticTitleVersion;
@property(retain, nonatomic) NSArray *titleVersions;
@property(retain, nonatomic) NSString *phoneticTitle;
@property(retain, nonatomic) NSArray *titles;
@property(retain, nonatomic) NSString *grid;
@property(retain, nonatomic) NSString *labelName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

