//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBBBBulletinInfo.h"

@class NSString, SBWidgetViewController;

@interface SBBBWidgetBulletinInfo : SBBBBulletinInfo
{
    NSString *_identifier;
    double _preferredViewHeight;
    _Bool _visible;
    struct {
        unsigned int isPreferredViewHeightValid:1;
    } _widgetBulletinInfoFlags;
}

- (void)populateReusableView:(id)arg1;
- (double)heightForReusableViewForBulletinViewController:(id)arg1 layoutMode:(long long)arg2 bulletinLocation:(long long)arg3;
- (id)reusableViewIdentifier;
- (Class)reusableViewClass;
- (id)originalSectionIdentifier;
- (id)identifier;
- (id)widgetIdentifier;
@property(readonly, nonatomic) SBWidgetViewController *representedWidget;
- (id)representedBulletin;
@property(nonatomic) double preferredViewHeight;
- (void)dealloc;

@end

