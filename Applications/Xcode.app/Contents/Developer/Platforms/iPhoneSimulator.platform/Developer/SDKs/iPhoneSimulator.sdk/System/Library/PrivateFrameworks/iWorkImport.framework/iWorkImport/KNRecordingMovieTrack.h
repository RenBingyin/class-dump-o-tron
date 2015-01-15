//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface KNRecordingMovieTrack : TSPObject
{
    NSArray *mMovieSegments;
}

@property(readonly, nonatomic) NSArray *movieSegments; // @synthesize movieSegments=mMovieSegments;
- (id)movieTrackByReplacingSegmentAfterTime:(double)arg1 withMovieTrack:(id)arg2;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 movieSegments:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)saveToArchive:(struct RecordingMovieTrackArchive *)arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct RecordingMovieTrackArchive *)arg1 unarchiver:(id)arg2;

@end

