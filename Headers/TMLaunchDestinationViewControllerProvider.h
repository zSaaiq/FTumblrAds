//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TMLaunchDestinationViewControllerProvider : NSObject
{
}

+ (id)composeFlowControllerForMilestone:(id)arg1 blogName:(id)arg2 withImageAtURL:(id)arg3 composeFlowControllerDelegate:(id)arg4 preferences:(id)arg5 session:(id)arg6 analyticsBuffer:(id)arg7 coreDataController:(id)arg8;
+ (id)composeFlowControllerForMilestoneNotification:(id)arg1 milestone:(id)arg2 withImageAtFileURL:(id)arg3 composeFlowControllerDelegate:(id)arg4 session:(id)arg5 analyticsBuffer:(id)arg6 coreDataController:(id)arg7;
+ (id)destinationViewControllerForBlogName:(id)arg1 postID:(id)arg2 tag:(id)arg3 activityPushNotificationType:(long long)arg4 isPrivateMessage:(_Bool)arg5 coreDataController:(id)arg6 analyticsBuffer:(id)arg7 linkRouter:(id)arg8 session:(id)arg9 clientSideAdSources:(id)arg10;
+ (id)destinationViewControllerForBlogName:(id)arg1 postID:(id)arg2 tag:(id)arg3 activityItemType:(long long)arg4 isPrivateMessage:(_Bool)arg5 coreDataController:(id)arg6 analyticsBuffer:(id)arg7 linkRouter:(id)arg8 session:(id)arg9 clientSideAdSources:(id)arg10;
+ (id)composeFlowControllerForRebloggingTargetPostFromNotification:(id)arg1 composeFlowControllerDelegate:(id)arg2 session:(id)arg3 analyticsBuffer:(id)arg4 coreDataController:(id)arg5;
+ (id)composeFlowControllerForAnsweringAskWithTargetPostID:(id)arg1 targetBlogName:(id)arg2 targetBlogUUID:(id)arg3 fromBlogName:(id)arg4 composeFlowControllerDelegate:(id)arg5 session:(id)arg6 analyticsBuffer:(id)arg7 coreDataController:(id)arg8;
+ (id)composeFlowControllerForAnsweringAskNotification:(id)arg1 composeFlowControllerDelegate:(id)arg2 session:(id)arg3 analyticsBuffer:(id)arg4 coreDataController:(id)arg5;
+ (id)composeFlowControllerForAnsweringAskActivityItem:(id)arg1 composeFlowControllerDelegate:(id)arg2 session:(id)arg3 analyticsBuffer:(id)arg4 coreDataController:(id)arg5;
+ (id)destinationViewControllerForActivityItem:(id)arg1 coreDataController:(id)arg2 analyticsBuffer:(id)arg3 linkRouter:(id)arg4 session:(id)arg5 clientSideAdSources:(id)arg6;
+ (id)destinationViewControllerForNotificationDictionary:(id)arg1 coreDataController:(id)arg2 analyticsBuffer:(id)arg3 linkRouter:(id)arg4 session:(id)arg5 clientSideAdSources:(id)arg6 supplyLoggingManager:(id)arg7;
+ (_Bool)activityItemUsesTargetBlogName:(id)arg1;

@end
