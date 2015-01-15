//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EDKeyedObject.h"

@class EDResources, NSString;

__attribute__((visibility("hidden")))
@interface EDRun : NSObject <EDKeyedObject>
{
    EDResources *mResources;
    unsigned long long mCharIndex;
    unsigned long long mFontIndex;
}

+ (id)runWithCharIndex:(unsigned long long)arg1 font:(id)arg2 resources:(id)arg3;
+ (id)runWithResources:(id)arg1;
+ (id)runWithCharIndex:(unsigned long long)arg1 fontIndex:(unsigned long long)arg2 resources:(id)arg3;
- (id)font;
- (void)setCharIndex:(unsigned long long)arg1;
- (void)adjustIndex:(unsigned long long)arg1;
- (unsigned long long)charIndex;
- (long long)key;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToRun:(id)arg1;
- (id)initWithCharIndex:(unsigned long long)arg1 font:(id)arg2 resources:(id)arg3;
- (id)initWithResources:(id)arg1;
- (void)setFontIndex:(unsigned long long)arg1;
- (unsigned long long)fontIndex;
- (id)initWithCharIndex:(unsigned long long)arg1 fontIndex:(unsigned long long)arg2 resources:(id)arg3;
- (void)setFont:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

