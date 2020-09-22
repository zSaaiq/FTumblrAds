//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface O2AdVerification : NSObject
{
    NSString *_vendorKey;
    NSURL *_javaScriptResource;
    NSURL *_verificationParameters;
    NSURL *_verificationNotExecuted;
}

+ (id)verificationWithVendorKey:(id)arg1 javaScriptResource:(id)arg2 verificationParameters:(id)arg3 verificationNotExecuted:(id)arg4;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSURL *verificationNotExecuted; // @synthesize verificationNotExecuted=_verificationNotExecuted;
@property(readonly, copy, nonatomic) NSURL *verificationParameters; // @synthesize verificationParameters=_verificationParameters;
@property(readonly, copy, nonatomic) NSURL *javaScriptResource; // @synthesize javaScriptResource=_javaScriptResource;
@property(readonly, copy, nonatomic) NSString *vendorKey; // @synthesize vendorKey=_vendorKey;
- (id)initWithVendorKey:(id)arg1 javaScriptResource:(id)arg2 verificationParameters:(id)arg3 verificationNotExecuted:(id)arg4;

@end
