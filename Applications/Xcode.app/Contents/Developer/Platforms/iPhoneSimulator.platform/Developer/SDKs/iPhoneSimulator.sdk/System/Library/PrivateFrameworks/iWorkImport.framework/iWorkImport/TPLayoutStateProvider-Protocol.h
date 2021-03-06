//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@protocol TPLayoutStateProvider <NSObject>
- (NSArray *)sectionHintsForArchivedLayoutState:(id <TPArchivedLayoutStateProtocol>)arg1;
- (unsigned long long)lastPageCountForArchivedLayoutState:(id <TPArchivedLayoutStateProtocol>)arg1;
- (unsigned long long)documentPageIndexForArchivedLayoutState:(id <TPArchivedLayoutStateProtocol>)arg1;
- (unsigned long long)sectionPageIndexForArchivedLayoutState:(id <TPArchivedLayoutStateProtocol>)arg1;
- (unsigned long long)sectionIndexForArchivedLayoutState:(id <TPArchivedLayoutStateProtocol>)arg1;
@end

