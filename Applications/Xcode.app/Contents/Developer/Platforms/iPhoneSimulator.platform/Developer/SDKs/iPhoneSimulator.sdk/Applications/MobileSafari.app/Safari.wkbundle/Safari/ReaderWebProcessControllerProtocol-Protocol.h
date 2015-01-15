//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSNumber, WKBrowsingContextHandle;

@protocol ReaderWebProcessControllerProtocol <NSObject>
- (void)setReaderShouldUseNarrowLayout:(_Bool)arg1;
- (void)collectReaderContentForMail;
- (void)collectReadingListItemInfoWithBookmarkID:(NSNumber *)arg1;
- (void)decreaseReaderTextSize;
- (void)increaseReaderTextSize;
- (void)setInitalArticleScrollPositionAsDictionary:(NSDictionary *)arg1;
- (void)setReaderInitialTopScrollOffset:(long long)arg1 textZoomIndex:(unsigned long long)arg2 useNarrowLayout:(_Bool)arg3 isViewingArchive:(_Bool)arg4;
- (void)loadNewReaderArticle;
- (void)didCreateReaderPageContextHandle:(WKBrowsingContextHandle *)arg1;
- (void)prepareToTransitionToReader;
@end
