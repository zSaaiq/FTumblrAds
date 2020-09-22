//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol RTLogComponent;

@protocol RTLogDelegate <NSObject>
- (_Bool)setSeverity:(int)arg1 forComponent:(id <RTLogComponent>)arg2;
- (_Bool)unregisterComponent:(id <RTLogComponent>)arg1;
- (_Bool)registerComponent:(id <RTLogComponent>)arg1 initialSeverity:(int)arg2;
- (void)log:(id <RTLogComponent>)arg1 severity:(int)arg2 time:(double)arg3 line:(int)arg4 file:(const void *)arg5 message:(NSString *)arg6;
@end
