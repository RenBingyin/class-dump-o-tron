//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PurplePageLoadTestRunner.h"

@interface ReplayPagesTestRunner : PurplePageLoadTestRunner
{
    struct __sFILE {
        char *_field1;
        int _field2;
        int _field3;
        short _field4;
        short _field5;
        struct __sbuf _field6;
        int _field7;
        void *_field8;
        CDUnknownFunctionPointerType _field9;
        CDUnknownFunctionPointerType _field10;
        CDUnknownFunctionPointerType _field11;
        CDUnknownFunctionPointerType _field12;
        struct __sbuf _field13;
        struct __sFILEX *_field14;
        int _field15;
        unsigned char _field16[3];
        unsigned char _field17[1];
        struct __sbuf _field18;
        int _field19;
        long long _field20;
    } *_suiteFile;
    unsigned long long _attemptCount;
    unsigned long long _successCount;
    _Bool _eternal;
}

@property(nonatomic) _Bool eternal; // @synthesize eternal=_eternal;
- (void)startNextPage;
- (void)finishedTestPage:(id)arg1;
- (_Bool)loadTestSuiteFile:(id)arg1;
- (void)dealloc;

@end

