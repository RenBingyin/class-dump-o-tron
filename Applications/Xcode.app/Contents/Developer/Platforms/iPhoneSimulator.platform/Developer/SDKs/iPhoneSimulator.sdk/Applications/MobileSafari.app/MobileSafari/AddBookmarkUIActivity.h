//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIActivity.h"

#import "SingleBookmarkNavigationControllerDelegate.h"

@class SingleBookmarkNavigationController;

@interface AddBookmarkUIActivity : UIActivity <SingleBookmarkNavigationControllerDelegate>
{
    SingleBookmarkNavigationController *_bookmarkNavController;
}

- (void).cxx_destruct;
- (void)addBookmarkNavController:(id)arg1 didFinishWithResult:(_Bool)arg2;
- (id)aggregateDKey;
- (id)parentBookmark;
- (void)activityDidFinish:(_Bool)arg1;
- (id)_embeddedActivityViewController;
- (id)activityViewController;
- (void)prepareWithActivityItems:(id)arg1;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)_beforeActivity;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;

@end

