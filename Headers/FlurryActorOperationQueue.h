//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperationQueue.h>

@class FlurryActor;

@interface FlurryActorOperationQueue : NSOperationQueue
{
    FlurryActor *_owner;
}

+ (void)initialize;
@property(retain, nonatomic) FlurryActor *owner; // @synthesize owner=_owner;
- (void).cxx_destruct;
- (void)addOperations:(id)arg1 waitUntilFinished:(_Bool)arg2;
- (void)addOperation:(id)arg1;
- (id)initWithActor:(id)arg1;

@end

