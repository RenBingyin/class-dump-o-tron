//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface TIAddressBook : NSObject
{
    void *_addressBook;
    NSMutableArray *_observers;
}

- (void)addressBookChanged;
- (void)receiveTransientObserver:(CDUnknownBlockType)arg1;
- (void)removeObserver:(CDUnknownBlockType)arg1;
- (void)addObserver:(CDUnknownBlockType)arg1;
- (_Bool)hasObservers;
- (id)init;
- (void)dealloc;

@end

