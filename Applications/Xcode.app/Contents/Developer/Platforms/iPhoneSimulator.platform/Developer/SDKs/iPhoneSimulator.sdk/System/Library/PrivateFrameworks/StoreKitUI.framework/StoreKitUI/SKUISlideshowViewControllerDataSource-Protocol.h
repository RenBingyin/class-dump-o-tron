//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL, UIImage, UIViewController;

@protocol SKUISlideshowViewControllerDataSource <NSObject>
- (long long)numberOfItemsInSlideshowViewController:(UIViewController *)arg1;

@optional
- (NSURL *)slideshowViewController:(UIViewController *)arg1 imageURLAtIndex:(long long)arg2 size:(struct CGSize *)arg3;
- (UIImage *)slideshowViewController:(UIViewController *)arg1 imageAtIndex:(long long)arg2;
@end

