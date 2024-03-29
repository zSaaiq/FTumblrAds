//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBAdDSLFullScreenAdViewController, FBAdDSLTouchRecord, NSDictionary, NSError;

@protocol FBAdDSLFullScreenAdViewControllerDelegate <NSObject>
- (_Bool)shouldReloadProcessForDslFullScreenAdViewController:(FBAdDSLFullScreenAdViewController *)arg1;
- (void)dslFullScreenAdViewController:(FBAdDSLFullScreenAdViewController *)arg1 notifyEvent:(unsigned long long)arg2;
- (void)dslFullScreenAdViewController:(FBAdDSLFullScreenAdViewController *)arg1 printDebugWithInfo:(id)arg2;
- (void)dslFullScreenAdViewController:(FBAdDSLFullScreenAdViewController *)arg1 funnelLogWithData:(NSDictionary *)arg2;
- (void)dslFullScreenAdViewController:(FBAdDSLFullScreenAdViewController *)arg1 logErrorType:(unsigned long long)arg2 withError:(NSError *)arg3;
- (void)dslFullScreenAdViewController:(FBAdDSLFullScreenAdViewController *)arg1 logData:(NSDictionary *)arg2;
- (void)dslFullScreenAdViewController:(FBAdDSLFullScreenAdViewController *)arg1 handleEvent:(unsigned long long)arg2 withTouch:(FBAdDSLTouchRecord *)arg3 extraData:(NSDictionary *)arg4;
@end

