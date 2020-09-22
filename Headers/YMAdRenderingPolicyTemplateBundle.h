//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface YMAdRenderingPolicyTemplateBundle : NSObject
{
    NSURL *_templateURL;
    NSString *_templateSignatureY64;
    NSString *_reuseID;
}

+ (id)createWithURL:(id)arg1 signature:(id)arg2 reuseID:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *reuseID; // @synthesize reuseID=_reuseID;
@property(retain, nonatomic) NSString *templateSignatureY64; // @synthesize templateSignatureY64=_templateSignatureY64;
@property(retain, nonatomic) NSURL *templateURL; // @synthesize templateURL=_templateURL;
- (id)initWithURL:(id)arg1 signature:(id)arg2 reuseID:(id)arg3;

@end
