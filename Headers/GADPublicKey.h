//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GADPublicKey : NSObject
{
    struct __SecCertificate *_certificate;
    struct __SecTrust *_trustStore;
    struct __SecKey *_key;
}

- (_Bool)isSignatureValid:(id)arg1 forMessage:(id)arg2;
- (void)dealloc;
- (id)initWithCertificateData:(id)arg1;

@end

