//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FlurryActorStreamComponent.h"

#import "IFlurryStreamFlushSource-Protocol.h"

@class NSString;

@interface FlurryStreamFlushSource : FlurryActorStreamComponent <IFlurryStreamFlushSource>
{
}

+ (id)streamFlushSource;
- (void)onqueue_flush;
- (void)flush;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

