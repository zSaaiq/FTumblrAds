//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "O2Action-Protocol.h"

@class NSString, O2IconID;

@interface O2DidIconViewDisplayed : NSObject <O2Action>
{
    O2IconID *_iconId;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) O2IconID *iconId; // @synthesize iconId=_iconId;
- (id)initWithIconId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

