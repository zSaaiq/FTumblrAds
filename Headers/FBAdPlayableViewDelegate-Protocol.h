//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBAdPlayableView, NSDictionary;

@protocol FBAdPlayableViewDelegate <NSObject>
- (void)playableViewDidTerminate:(FBAdPlayableView *)arg1;
- (void)playableViewWillClose:(FBAdPlayableView *)arg1;
- (void)playableViewClicked:(FBAdPlayableView *)arg1;
- (void)playableViewDidCompleteForcedView:(FBAdPlayableView *)arg1;
- (void)playableViewWantsToLogImpression:(FBAdPlayableView *)arg1 withExtraData:(NSDictionary *)arg2;
@end

