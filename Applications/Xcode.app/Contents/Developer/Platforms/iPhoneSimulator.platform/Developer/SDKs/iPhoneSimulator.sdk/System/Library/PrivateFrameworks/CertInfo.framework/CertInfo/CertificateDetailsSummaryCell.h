//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CertInfo/CertUIItemDetailsSummaryCell.h>

@class NSArray;

@interface CertificateDetailsSummaryCell : CertUIItemDetailsSummaryCell
{
    NSArray *_details;
}

@property(retain, nonatomic) NSArray *details; // @synthesize details=_details;
- (void).cxx_destruct;
- (void)setDetailsWithCertificateTrust:(struct __SecTrust *)arg1 certificateExpiration:(id)arg2 certificateIsTrusted:(_Bool)arg3;
- (void)setCertificateTrust:(struct __SecTrust *)arg1 certificateExpiration:(id)arg2 certificateIsTrusted:(_Bool)arg3;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

