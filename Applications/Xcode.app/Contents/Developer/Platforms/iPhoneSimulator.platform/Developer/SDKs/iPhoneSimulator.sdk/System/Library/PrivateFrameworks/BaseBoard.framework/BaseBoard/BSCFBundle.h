//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BSCFBundle : NSObject
{
    struct __CFBundle *_cfBundle;
}

- (struct __CFBundle *)cfBundle;
- (id)localizedInfoDictionary;
- (id)infoDictionary;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;
- (id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3;
- (id)_pathsForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3;
- (id)pathForResource:(id)arg1 ofType:(id)arg2;
- (id)bundlePath;
- (id)bundleIdentifier;
- (id)executablePath;
- (id)description;
- (void)dealloc;
- (id)initWithCFBundle:(struct __CFBundle *)arg1;
- (id)initWithPath:(id)arg1;

@end

