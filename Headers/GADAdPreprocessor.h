//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADSlotAdLoadDelegate-Protocol.h"

@class GADSlot, NSString;

@interface GADAdPreprocessor : NSObject <GADSlotAdLoadDelegate>
{
    GADSlot *_slot;
    CDUnknownBlockType _completionHandler;
    NSString *_nativeAdJSON;
}

- (void).cxx_destruct;
- (void)slotFinishedLoadingAdContent:(id)arg1;
- (void)slot:(id)arg1 didFailToLoadAdContentWithError:(id)arg2;
- (void)callAndClearCompletionHandlerWithAdConfiguration:(id)arg1 slot:(id)arg2 error:(id)arg3;
- (id)environmentJSONString;
- (void)handlePreprocessorNotification:(id)arg1;
- (void)handleJavaScriptLoadedNotification:(id)arg1;
- (void)preprocessNativeAdJSON:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithAdUnitID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

