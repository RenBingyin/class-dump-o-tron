//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIImage, UIPDFPage, UIPDFPageRenderOperation;

@interface UIPDFPageRenderJob : NSObject
{
    UIPDFPage *_page;
    unsigned long long _pageIndex;
    struct CGSize _size;
    long long _priority;
    UIImage *_image;
    UIPDFPageRenderOperation *_operation;
    id _target;
    SEL _callback;
    id _userData;
    _Bool _sendPending;
    _Bool _releaseWhenDone;
    int _lock;
}

@property(readonly) struct CGSize size; // @synthesize size=_size;
@property _Bool releaseWhenDone; // @synthesize releaseWhenDone=_releaseWhenDone;
@property(readonly) long long priority; // @synthesize priority=_priority;
@property(readonly) unsigned long long pageIndex; // @synthesize pageIndex=_pageIndex;
- (void)sendImageTo:(id)arg1 callback:(SEL)arg2 userData:(id)arg3;
- (void)sendImage;
- (void)renderImage;
@property(readonly, retain) UIImage *image; // @dynamic image;
- (void)releaseOperation;
@property UIPDFPageRenderOperation *operation; // @dynamic operation;
- (void)setTarget:(id)arg1 callback:(SEL)arg2 userData:(id)arg3;
- (void)cancelOperationForTarget:(id)arg1;
- (void)cancelOperation;
- (void)cancel;
- (void)dealloc;
- (id)initWithPage:(id)arg1 maxSize:(struct CGSize)arg2 queuePriority:(long long)arg3;
- (_Bool)hasPage;

@end

