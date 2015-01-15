//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer;

@interface TIPreferencesController : NSObject
{
    NSTimer *_synchronizePreferencesTimer;
    _Bool dontSynchronizePreferences;
    _Bool isInternalInstall;
}

+ (id)sharedPreferencesController;
@property(nonatomic) _Bool isInternalInstall; // @synthesize isInternalInstall;
@property(nonatomic) _Bool dontSynchronizePreferences; // @synthesize dontSynchronizePreferences;
- (void)setValue:(id)arg1 forKey:(int)arg2;
- (void)touchSynchronizePreferencesTimer;
- (void)synchronizePreferences;
- (void)releaseDontSynchronizePreferences;
- (void)clearSynchronizePreferencesTimer;
- (_Bool)boolForKey:(int)arg1;
- (id)valueForKey:(int)arg1;
- (id)defaultForKey:(int)arg1;
- (CDStruct_5072e809 *)domainForType:(int)arg1;
- (void)dealloc;
- (id)init;
- (void)preferencesChangedCallback:(id)arg1;
- (CDStruct_982099be *)preferences;
- (CDStruct_5072e809 *)domains;

@end

