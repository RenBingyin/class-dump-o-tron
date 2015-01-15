//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CUIRenditionKey, NSData, NSString;

__attribute__((visibility("hidden")))
@interface CUINamedData : NSObject
{
    CUIRenditionKey *_key;
    unsigned long long _storageRef;
    NSString *_name;
}

@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;
- (id)_renditionName;
@property(readonly, nonatomic) NSString *utiType;
@property(readonly, nonatomic) NSData *data;
- (id)_rendition;
- (id)_renditionForSpecificKey:(id)arg1;
- (id)_themeStore;
- (void)dealloc;
- (id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3;

@end

