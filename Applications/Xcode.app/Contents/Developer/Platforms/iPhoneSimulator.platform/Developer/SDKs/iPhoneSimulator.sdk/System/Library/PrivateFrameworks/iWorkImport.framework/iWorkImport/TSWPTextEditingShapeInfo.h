//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSWPShapeInfo.h>

__attribute__((visibility("hidden")))
@interface TSWPTextEditingShapeInfo : TSWPShapeInfo
{
    id <TSWPTextEditingDelegate> _delegate;
}

@property(nonatomic) id <TSWPTextEditingDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)displaysInstructionalText;
- (Class)repClass;
- (Class)layoutClass;

@end

