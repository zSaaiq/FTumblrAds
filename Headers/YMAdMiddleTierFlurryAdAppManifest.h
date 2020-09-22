//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "YMAdMiddleTierAdAppManifest.h"

@class NSDictionary, YMAdMiddleTierFlurryAdImageManifest;

@interface YMAdMiddleTierFlurryAdAppManifest : YMAdMiddleTierAdAppManifest
{
    YMAdMiddleTierFlurryAdImageManifest *_iconManifest;
    NSDictionary *_adInfo;
}

+ (id)createWithAdInfoDictionary:(id)arg1 adAssetList:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *adInfo; // @synthesize adInfo=_adInfo;
@property(retain, nonatomic) YMAdMiddleTierFlurryAdImageManifest *iconManifest; // @synthesize iconManifest=_iconManifest;
- (id)fieldFromDictionary:(id)arg1 forKey:(id)arg2 ifOfType:(Class)arg3;
- (id)enableInstallCheck;
- (id)appStoreURL;
- (id)name;
- (id)category;
- (id)storeIdentifier;
- (id)ratingCount;
- (id)ratingPercent;
- (id)ratingRaw;
- (void)parseIconManifest:(id)arg1;
- (id)initWithAdInfoDictionary:(id)arg1 adAssetList:(id)arg2;

@end

