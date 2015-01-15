//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface RadioArtworkCollection : NSObject
{
    NSArray *_artworks;
}

@property(readonly, nonatomic) NSArray *artworks; // @synthesize artworks=_artworks;
- (void).cxx_destruct;
- (id)_artworksBySortingArtworks:(id)arg1;
- (id)bestArtworkForPointSize:(struct CGSize)arg1;
- (id)bestArtworkForPixelSize:(struct CGSize)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithArtworkVariants:(id)arg1;
- (id)initWithArtworks:(id)arg1;

@end

