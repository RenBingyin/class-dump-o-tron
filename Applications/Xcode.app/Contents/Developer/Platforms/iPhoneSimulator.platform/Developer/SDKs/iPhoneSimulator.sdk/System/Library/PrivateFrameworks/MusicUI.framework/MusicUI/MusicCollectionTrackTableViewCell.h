//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MusicUI/MusicMediaTableViewCell.h>

@class NSString;

@interface MusicCollectionTrackTableViewCell : MusicMediaTableViewCell
{
}

+ (struct CGSize)sizeForDuration:(double)arg1;
+ (Class)contentViewClass;
- (id)_collectionTrackContentView;
@property(copy, nonatomic) NSString *trackNumberText;
@property(nonatomic) double maximumDurationWidth;
@property(copy, nonatomic) NSString *durationText;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

