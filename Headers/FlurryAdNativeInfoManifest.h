//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FlurryAdJSONManifest.h"

@class NSArray, NSNumber, NSString;

@interface FlurryAdNativeInfoManifest : FlurryAdJSONManifest
{
    NSArray *_adNativeAssetManifests;
}

@property(copy, nonatomic) NSArray *adNativeAssetManifests; // @synthesize adNativeAssetManifests=_adNativeAssetManifests;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *templateInfo;
@property(readonly, copy, nonatomic) NSString *uiParams;
@property(readonly, copy, nonatomic) NSString *appInfo;
@property(readonly, copy, nonatomic) NSString *carouselGroup;
@property(readonly, copy, nonatomic) NSString *feedbackDomain;
@property(readonly, copy, nonatomic) NSNumber *style;

@end

