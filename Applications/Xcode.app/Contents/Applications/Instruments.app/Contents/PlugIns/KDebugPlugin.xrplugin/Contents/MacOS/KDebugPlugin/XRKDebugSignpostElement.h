//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PFTDataElement.h"

#import "XRKDebugSignpostEditorDelegate.h"

@class XRKDebugSignpostViewController;

@interface XRKDebugSignpostElement : PFTDataElement <XRKDebugSignpostEditorDelegate>
{
    XRKDebugSignpostViewController *_myViewController;
}

- (void).cxx_destruct;
- (void)signpostEditor:(id)arg1 finishedEditingMap:(id)arg2;
- (id)signpostMapForEditor:(id)arg1;
- (id)createView;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 editable:(BOOL)arg2 value:(id)arg3 viewer:(Class)arg4;

@end

