//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKABObject.h"

@interface GKABAddressBook : GKABObject
{
}

+ (id)addressBook;
- (void)save;
- (void)findPeopleWithEmailAddresses:(id)arg1 onQueue:(id)arg2 complete:(CDUnknownBlockType)arg3;
- (void)enumeratePersonsUsingBlock:(CDUnknownBlockType)arg1;
- (id)personWithUniqueID:(id)arg1;
- (void *)ABAddressBook;

@end

