//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TMShakeToEditValueManager-Protocol.h"

@class NSString;

@interface TMApplicationShakeToEditValueManager : NSObject <TMShakeToEditValueManager>
{
    _Bool _applicationSupportsShakeToEditOriginalValue;
}

@property(nonatomic) _Bool applicationSupportsShakeToEditOriginalValue; // @synthesize applicationSupportsShakeToEditOriginalValue=_applicationSupportsShakeToEditOriginalValue;
- (void)restoreShakeToEdit;
- (void)disableShakeToEdit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

