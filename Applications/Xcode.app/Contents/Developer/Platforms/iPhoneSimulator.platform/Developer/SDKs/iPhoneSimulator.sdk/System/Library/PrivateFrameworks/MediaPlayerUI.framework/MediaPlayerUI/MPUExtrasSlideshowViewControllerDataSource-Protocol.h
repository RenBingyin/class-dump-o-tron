//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPUExtrasSlideshowViewController;

@protocol MPUExtrasSlideshowViewControllerDataSource <NSObject>
- (void)slideshowViewController:(MPUExtrasSlideshowViewController *)arg1 loadImageAtIndex:(unsigned long long)arg2 withCompletionHandler:(void (^)(UIImage *))arg3;
- (unsigned long long)numberOfImagesForSlideshowViewController:(MPUExtrasSlideshowViewController *)arg1;
@end

