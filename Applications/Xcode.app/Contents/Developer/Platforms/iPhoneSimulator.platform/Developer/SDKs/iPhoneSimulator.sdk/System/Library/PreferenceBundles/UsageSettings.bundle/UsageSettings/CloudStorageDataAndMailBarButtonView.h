//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface CloudStorageDataAndMailBarButtonView : UIView
{
    UILabel *_data;
    UILabel *_dataSizes;
    UILabel *_mail;
    UILabel *_mailSizes;
}

+ (id)barButtonItemWithData:(id)arg1 andMail:(id)arg2;
- (void)layoutSubviews;
- (void)sizeToFit;
- (void)dealloc;
- (id)initWithData:(id)arg1 andMail:(id)arg2;

@end

