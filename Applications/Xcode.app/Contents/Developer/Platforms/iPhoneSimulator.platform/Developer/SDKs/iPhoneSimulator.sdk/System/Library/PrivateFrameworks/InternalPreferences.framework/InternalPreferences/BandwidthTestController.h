//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSListController.h"

@class NSString, PSSpecifier;

@interface BandwidthTestController : PSListController
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
    } *_downloadTestFile;
    PSSpecifier *_resultsSpecifier;
    PSSpecifier *_statusSpecifier;
    NSString *_testName;
}

- (void)dealloc;
- (void)testHTTPBandwidth:(id)arg1;
- (void)testAppleBandwidthWithMovie:(id)arg1;
- (void)testAppleBandwidth:(id)arg1;
- (void)testGoogleBandwidth:(id)arg1;
- (void)_testBandwidth:(char *)arg1;
- (void)_insertKBPSSpecifier:(id)arg1;
- (void)suspend;
- (void)_downloadTestComplete:(id)arg1;
- (void)_downloadTestFileInBackground;
- (char *)createBandwidthLogPath;
- (id)specifiers;

@end

