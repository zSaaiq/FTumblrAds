//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class YMAdAssetCache;

@interface YMAdAssetedPolicy : NSObject
{
    YMAdAssetCache *_assetCache;
}

- (void).cxx_destruct;
@property(retain, nonatomic) YMAdAssetCache *assetCache; // @synthesize assetCache=_assetCache;
- (void)getImageAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getNibFromURL:(id)arg1 signature:(id)arg2;
- (id)initWithCache:(id)arg1;

@end

