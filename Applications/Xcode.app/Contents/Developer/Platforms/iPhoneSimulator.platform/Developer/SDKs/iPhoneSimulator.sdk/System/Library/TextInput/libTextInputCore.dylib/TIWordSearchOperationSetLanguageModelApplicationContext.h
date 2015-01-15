//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TextInputCore/TIWordSearchOperation.h>

@class NSString, TIMecabraWrapper;

@interface TIWordSearchOperationSetLanguageModelApplicationContext : TIWordSearchOperation
{
    TIMecabraWrapper *_mecabraWrapper;
    NSString *_context;
}

@property(copy, nonatomic) NSString *context; // @synthesize context=_context;
@property(retain, nonatomic) TIMecabraWrapper *mecabraWrapper; // @synthesize mecabraWrapper=_mecabraWrapper;
- (void)perform;
- (void)cancel;
- (void)dealloc;
- (id)initWithWordSearch:(id)arg1 context:(id)arg2;

@end
