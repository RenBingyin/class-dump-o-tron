//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUI/PUPhotosAlbumViewController.h>

@class NSArray, PUUIImagePickerControllerHelper, UIBarButtonItem;

@interface PUUIPhotosAlbumViewController : PUPhotosAlbumViewController
{
    UIBarButtonItem *_imagePickerCancelButton;
    UIBarButtonItem *_imagePickerMultipleSelectionDoneButton;
    int __albumFilter;
    PUUIImagePickerControllerHelper *__imagePickerControllerHelper;
    NSArray *__imagePickerMediaTypes;
}

@property(nonatomic, setter=_setAlbumFilter:) int _albumFilter; // @synthesize _albumFilter=__albumFilter;
@property(copy, nonatomic, setter=_setImagePickerMediaTypes:) NSArray *_imagePickerMediaTypes; // @synthesize _imagePickerMediaTypes=__imagePickerMediaTypes;
@property(readonly) PUUIImagePickerControllerHelper *_imagePickerControllerHelper; // @synthesize _imagePickerControllerHelper=__imagePickerControllerHelper;
- (void).cxx_destruct;
- (_Bool)pu_wantsNavigationBarVisible;
- (void)viewDidLoad;
- (void)loadView;
- (void)handleNavigateToAsset:(id)arg1 inContainer:(id)arg2;
- (void)handleToggleSelectionOfItemAtIndexPath:(id)arg1;
- (_Bool)canBeginStackCollapseTransition;
- (_Bool)canNavigateToPhotoInteractively:(_Bool)arg1;
- (void)getTitle:(out id *)arg1 prompt:(out id *)arg2 shouldHideBackButton:(out _Bool *)arg3 leftBarButtonItems:(out id *)arg4 rightBarButtonItems:(out id *)arg5;
- (void)setAlbum:(id)arg1;
- (void)_handleImagePickerMultipleSelectionDone:(id)arg1;
- (void)_handleImagePickerCancel:(id)arg1;
- (id)filterPredicateForAlbum:(struct NSObject *)arg1;
- (id)init;
- (id)initWithSpec:(id)arg1;

@end

