//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TMPostCompletionHandler-Protocol.h"

@class NSString;

@interface TMMainApplicationPostCompletionHandler : NSObject <TMPostCompletionHandler>
{
}

- (void)userDidCompletePosting:(id)arg1 presentingViewController:(id)arg2 analyticsBuffer:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

