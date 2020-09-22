//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface VDMSPlayerStateChange : NSObject
{
    id _object;
    NSString *_keyPath;
    id _value;
    CDUnknownBlockType _changeBlock;
}

+ (id)stateChangeWithObject:(id)arg1 keyPath:(id)arg2 changeBlock:(CDUnknownBlockType)arg3;
+ (id)stateChangeWithObject:(id)arg1 keyPath:(id)arg2 value:(id)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType changeBlock; // @synthesize changeBlock=_changeBlock;
@property(readonly, nonatomic) id value; // @synthesize value=_value;
@property(readonly, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(readonly, nonatomic) id object; // @synthesize object=_object;
- (id)initWithObject:(id)arg1 keyPath:(id)arg2 value:(id)arg3 changeBlock:(CDUnknownBlockType)arg4;

@end

