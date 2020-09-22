//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface FBAdAssetListLoader : NSObject
{
    int _loadCounter;
    NSArray *_assets;
    long long _loadingState;
    CDUnknownBlockType _assetsLoadFailHandler;
    CDUnknownBlockType _assetsLoadSuccessHandler;
}

@property int loadCounter; // @synthesize loadCounter=_loadCounter;
@property(copy, nonatomic) CDUnknownBlockType assetsLoadSuccessHandler; // @synthesize assetsLoadSuccessHandler=_assetsLoadSuccessHandler;
@property(copy, nonatomic) CDUnknownBlockType assetsLoadFailHandler; // @synthesize assetsLoadFailHandler=_assetsLoadFailHandler;
@property(nonatomic) long long loadingState; // @synthesize loadingState=_loadingState;
@property(readonly, copy, nonatomic) NSArray *assets; // @synthesize assets=_assets;
- (void).cxx_destruct;
- (void)assetFailedToLoad:(id)arg1;
- (void)assetLoaded:(id)arg1;
- (void)load;
- (id)initWithAssetsData:(id)arg1 successHandler:(CDUnknownBlockType)arg2 failHandler:(CDUnknownBlockType)arg3;
- (id)init;

@end

