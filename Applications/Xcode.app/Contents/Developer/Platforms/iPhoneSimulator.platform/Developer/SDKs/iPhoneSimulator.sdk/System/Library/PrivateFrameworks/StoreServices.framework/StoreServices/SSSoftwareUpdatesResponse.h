//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSError;

@interface SSSoftwareUpdatesResponse : NSObject
{
    NSError *_error;
    _Bool _failed;
    NSArray *_updateItems;
}

- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (void)setUpdateItemsWithItemDictionaries:(id)arg1;
- (id)copyUpdateItemDictionaries;
- (id)description;
@property(readonly) NSArray *updateItems;
@property(readonly, getter=isFailed) _Bool failed;
@property(readonly) NSError *error;
- (void)dealloc;
- (id)initWithError:(id)arg1;

@end

