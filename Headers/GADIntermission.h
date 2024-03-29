//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GADSlot, NSHashTable, NSOperationQueue;

@interface GADIntermission : NSObject
{
    _Bool _publisherIdleTimerDisabled;
    GADSlot *_slot;
    _Bool _statusBarWasOriginallyHidden;
    long long _activeParticipantsCount;
    long long _deactivatingParticipantsCount;
    NSHashTable *_activeParticipants;
    NSHashTable *_deactivatingParticipants;
    NSOperationQueue *_deactivationQueue;
    _Bool _statusBarOverridden;
}

- (void).cxx_destruct;
- (void)applicationWillEnterForegroundWithNotification:(id)arg1;
- (void)participantDidRelinquishScreen:(id)arg1;
- (void)participantWillRelinquishScreen:(id)arg1;
- (void)participantWillOverrideStatusBarVisibility:(id)arg1;
- (void)addParticipant:(id)arg1;
- (void)didEnd;
- (void)willEnd;
- (void)begin;
- (void)cleanUpDeallocatedParticipants;
- (id)activeParticipants;
- (void)dealloc;
- (id)initWithSlot:(id)arg1;
- (id)init;

@end

