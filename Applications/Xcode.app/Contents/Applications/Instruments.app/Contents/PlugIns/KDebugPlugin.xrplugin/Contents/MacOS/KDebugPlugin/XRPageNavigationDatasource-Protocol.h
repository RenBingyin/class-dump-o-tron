//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol XRPageNavigationDatasource <NSObject>
- (BOOL)canShowConstruct;
- (BOOL)canHideConstruct;
- (BOOL)constructVisible;
- (BOOL)hasConfigPage;
- (void)setSelectedPageIndex:(long long)arg1;
- (long long)selectedPageIndex;
- (long long)pageCount;
@end

