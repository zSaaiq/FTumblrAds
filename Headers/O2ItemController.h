//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface O2ItemController : NSObject
{
    CDUnknownBlockType _dispatch;
    NSMutableSet *_dispatchedActions;
}

+ (id)controllerWithDispatcher:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSMutableSet *dispatchedActions; // @synthesize dispatchedActions=_dispatchedActions;
@property(readonly, copy, nonatomic) CDUnknownBlockType dispatch; // @synthesize dispatch=_dispatch;
- (void)processScheduledIDs:(id)arg1 allItems:(id)arg2 history:(id)arg3;
- (void)processState:(id)arg1;
- (id)initWithDispatch:(CDUnknownBlockType)arg1;

@end
