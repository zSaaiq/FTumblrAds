//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;

@protocol TMBlogAlertControllerDelegate
- (void)report:(NSString *)arg1;
- (void)unblock:(NSString *)arg1;
- (void)block:(NSString *)arg1;
- (void)shareBlog:(NSString *)arg1;
- (void)unsubscribe:(NSString *)arg1;
- (void)subscribeFrom:(long long)arg1 forBlogWithName:(NSString *)arg2;
- (void)unfollow:(NSString *)arg1;
- (void)composeSubmission:(NSString *)arg1;
- (void)initiateConversation:(NSString *)arg1;
- (void)composeAsk:(NSString *)arg1;
@end
