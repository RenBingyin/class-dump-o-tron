//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "RUTrackDownloadViewDelegate.h"

@class MPAVItem, NSString, RUTrackDownloadView, UIButton, UIImageView, UILabel, UITapGestureRecognizer, UIViewController;

@interface RUStationTrackInfoView : UIView <RUTrackDownloadViewDelegate>
{
    UILabel *_albumLabel;
    UILabel *_artistLabel;
    UIImageView *_imageView;
    UITapGestureRecognizer *_imageViewTapGestureRecognizer;
    UIButton *_storeButton;
    UILabel *_titleLabel;
    RUTrackDownloadView *_trackDownloadView;
    id <RUStationTrackInfoViewDelegate> _delegate;
    MPAVItem *_avItem;
}

+ (id)_albumLabelFont;
+ (id)_titleLabelFont;
+ (id)_artistLabelFont;
+ (double)defaultHeightForTraitCollection:(id)arg1;
@property(retain, nonatomic, setter=setAVItem:) MPAVItem *avItem; // @synthesize avItem=_avItem;
@property(nonatomic) __weak id <RUStationTrackInfoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_unregisterForAVItemNotifications;
- (void)_registerForAVItemNotifications;
- (id)_newTrackDownloadView;
- (void)_avItemTitlesDidChangeNotification:(id)arg1;
- (void)_avItemAlbumStoreIDDidChangeNotification:(id)arg1;
- (void)_avItemArtworkDidChangeNotification:(id)arg1;
@property(nonatomic) __weak UIViewController *trackDownloadPresentingViewController;
@property(nonatomic) long long stationID;
@property(copy, nonatomic) NSString *stationHash;
- (void)_storeButtonTapAction:(id)arg1;
- (void)_imageViewTapAction:(id)arg1;
- (void)trackDownloadViewWillTransition:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

