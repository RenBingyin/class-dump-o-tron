//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImage, UIImageView, UILabel;

@interface DeviceIdentificationView : UIView
{
    UIImageView *_deviceImageView;
    UILabel *_deviceNameLabel;
    UILabel *_deviceModelLabel;
}

+ (void)initialize;
- (void)layoutSubviews;
@property(nonatomic) UIImage *deviceImage; // @dynamic deviceImage;
- (void)loadImageForDeviceIdentifier:(id)arg1 URL:(id)arg2;
- (void)sizeToFit;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 deviceName:(id)arg2 deviceIdentifier:(id)arg3 imageURL:(id)arg4 isCurrentDevice:(_Bool)arg5;

@end

