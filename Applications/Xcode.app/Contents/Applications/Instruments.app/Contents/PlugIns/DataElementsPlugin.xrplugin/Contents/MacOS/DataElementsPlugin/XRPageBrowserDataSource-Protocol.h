//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString, NSView;

@protocol XRPageBrowserDataSource
- (NSString *)titleForPageIndex:(unsigned long long)arg1;
- (void)willRemoveViewForPageIndex:(unsigned long long)arg1;
- (NSView *)viewForPageIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfPages;
@end

