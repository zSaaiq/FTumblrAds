//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface O2TrackingInfoSelector : NSObject
{
}

+ (id)rCodeForItemID:(id)arg1 fromErroredItems:(id)arg2 andTimeoutItems:(id)arg3;
+ (id)trackingInfoFromState:(id)arg1 forItemID:(id)arg2;
+ (id)finalAdTrackingInfoFromState:(id)arg1;
+ (id)trackingInfoFromState:(id)arg1 model:(id)arg2 itemID:(id)arg3;
+ (id)calculateServerSideCallStatusFromItemID:(id)arg1 groupItem:(id)arg2 andRetriableItems:(id)arg3;

@end

