//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "YMAdUnitSingleContainerController.h"

@interface YMAdUnitRotaterContainerController : YMAdUnitSingleContainerController
{
    unsigned long long _currentAdIndex;
}

+ (id)createWithAdUnit:(id)arg1 containerWidth:(double)arg2 diagnostics:(id)arg3;
@property(nonatomic) unsigned long long currentAdIndex; // @synthesize currentAdIndex=_currentAdIndex;
- (_Bool)shouldThrottle;
- (id)currentAd;
- (_Bool)hasNextAd;
- (void)nextAd;
- (id)initWithAdUnit:(id)arg1 containerWidth:(double)arg2 diagnostics:(id)arg3;

@end
