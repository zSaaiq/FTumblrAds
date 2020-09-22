//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "YMAdAssetedPolicy.h"

@class UINib, YMAdRenderingPolicy;

@interface YMAdAssetedRenderingPolicy : YMAdAssetedPolicy
{
    YMAdRenderingPolicy *_renderingPolicy;
    UINib *_layoutNib;
    long long _layout;
}

+ (id)createWithPolicy:(id)arg1 layout:(long long)arg2;
- (void).cxx_destruct;
@property(nonatomic) long long layout; // @synthesize layout=_layout;
@property(retain, nonatomic) UINib *layoutNib; // @synthesize layoutNib=_layoutNib;
@property(retain, nonatomic) YMAdRenderingPolicy *renderingPolicy; // @synthesize renderingPolicy=_renderingPolicy;
- (void)getExpandIcon:(CDUnknownBlockType)arg1;
- (void)getTileLightningIcon:(CDUnknownBlockType)arg1;
- (void)getInfoIcon:(CDUnknownBlockType)arg1;
- (id)layoutNibForKey:(id)arg1;
- (id)initWithPolicy:(id)arg1 cache:(id)arg2 layout:(long long)arg3;

@end
