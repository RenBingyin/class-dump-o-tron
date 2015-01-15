//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SSProtocolConditionalContext : NSObject <NSCopying>
{
    CDUnknownBlockType _itemLookupBlock;
    NSString *_platformName;
    NSString *_systemVersion;
}

@property(copy, nonatomic) NSString *systemVersion; // @synthesize systemVersion=_systemVersion;
@property(copy, nonatomic) NSString *platformName; // @synthesize platformName=_platformName;
@property(copy, nonatomic) CDUnknownBlockType itemLookupBlock; // @synthesize itemLookupBlock=_itemLookupBlock;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

