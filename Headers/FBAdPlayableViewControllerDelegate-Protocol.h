//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBAdPlayableViewController, NSDictionary, NSError;

@protocol FBAdPlayableViewControllerDelegate <NSObject>
- (void)playableViewControllerDidTerminate:(FBAdPlayableViewController *)arg1;
- (void)playableViewControllerWillClose:(FBAdPlayableViewController *)arg1;
- (void)playableViewControllerWantsToLogImpression:(FBAdPlayableViewController *)arg1 withExtraData:(NSDictionary *)arg2;
- (void)playableViewControllerComplete:(FBAdPlayableViewController *)arg1;
- (void)playableViewControllerDidClick:(FBAdPlayableViewController *)arg1;
- (void)playableViewController:(FBAdPlayableViewController *)arg1 didFailWithError:(NSError *)arg2;
- (void)playableViewControllerDidLoad:(FBAdPlayableViewController *)arg1;
@end
