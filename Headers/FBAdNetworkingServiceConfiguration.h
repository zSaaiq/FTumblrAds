//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBAdRequestConfiguration, NSString;

@interface FBAdNetworkingServiceConfiguration : NSObject
{
    NSString *_hostPrefix;
    FBAdRequestConfiguration *_requestConfiguration;
}

+ (id)configurationWithHostPrefix:(id)arg1 requestConfiguration:(id)arg2;
@property(retain, nonatomic) FBAdRequestConfiguration *requestConfiguration; // @synthesize requestConfiguration=_requestConfiguration;
@property(copy, nonatomic) NSString *hostPrefix; // @synthesize hostPrefix=_hostPrefix;
- (void).cxx_destruct;

@end

