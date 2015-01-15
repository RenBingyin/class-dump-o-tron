//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIBarButtonItem, UIView;

@interface SKUIModalSourceViewProvider : NSObject
{
    id <SKUIModalSourceViewProviderDelegate> _delegate;
    _Bool _hideOriginalSourceView;
    UIView *_originalSourceView;
    UIBarButtonItem *_sourceButtonBarItem;
    id _userInfo;
}

@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) UIBarButtonItem *sourceButtonBarItem; // @synthesize sourceButtonBarItem=_sourceButtonBarItem;
@property(retain, nonatomic) UIView *originalSourceView; // @synthesize originalSourceView=_originalSourceView;
@property(nonatomic) __weak id <SKUIModalSourceViewProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showOriginalSourceView;
- (void)hideOriginalSourceView;
- (id)animationView;

@end

