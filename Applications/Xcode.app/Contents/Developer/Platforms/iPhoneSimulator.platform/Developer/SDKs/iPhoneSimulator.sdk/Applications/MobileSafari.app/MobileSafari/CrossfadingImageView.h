//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImage;

@interface CrossfadingImageView : UIView
{
    UIImage *_fromImage;
    UIImage *_toImage;
    double _progress;
}

@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) UIImage *toImage; // @synthesize toImage=_toImage;
@property(retain, nonatomic) UIImage *fromImage; // @synthesize fromImage=_fromImage;
- (void).cxx_destruct;
- (void)_updateCrossfade;

@end

