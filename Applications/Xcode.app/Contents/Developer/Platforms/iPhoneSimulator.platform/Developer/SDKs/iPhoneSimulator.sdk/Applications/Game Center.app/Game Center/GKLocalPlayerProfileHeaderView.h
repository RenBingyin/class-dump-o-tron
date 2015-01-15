//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKPlayerProfileHeaderView.h"

@class GKLabel;

@interface GKLocalPlayerProfileHeaderView : GKPlayerProfileHeaderView
{
    _Bool _showingPlaceholderText;
    GKLabel *_pointsLabel;
}

+ (Class)statusViewClass;
@property(retain, nonatomic) GKLabel *pointsLabel; // @synthesize pointsLabel=_pointsLabel;
@property(nonatomic, getter=isShowingPlaceholderText) _Bool showingPlaceholderText; // @synthesize showingPlaceholderText=_showingPlaceholderText;
- (void)updatePlayerPhoto;
- (void)updatePlayerStatus;
- (void)updatePlayerName;
- (double)_statusBottomToAliasBaseline;
- (void)didUpdateModel;
- (void)applyConstraints;
- (id)viewAtBottomEdge;
- (void)establishViews;
- (void)dealloc;

@end

