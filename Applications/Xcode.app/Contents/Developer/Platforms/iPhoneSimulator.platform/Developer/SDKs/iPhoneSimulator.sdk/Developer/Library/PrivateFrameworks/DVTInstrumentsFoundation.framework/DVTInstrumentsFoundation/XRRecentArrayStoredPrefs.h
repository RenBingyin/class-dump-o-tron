//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTInstrumentsFoundation/XRRecentArray.h>

@class NSString;

@interface XRRecentArrayStoredPrefs : XRRecentArray
{
    NSString *_preferencePathArray;
    NSString *_preferencePathMaxCount;
}

+ (id)sharedInstanceForPreferencePath:(id)arg1;
- (void).cxx_destruct;
- (void)synchronize;
- (void)_readUserDefaults;
- (void)dealloc;
- (id)initWithMaximumRecentCount:(unsigned long long)arg1 preferencePath:(id)arg2;

@end

