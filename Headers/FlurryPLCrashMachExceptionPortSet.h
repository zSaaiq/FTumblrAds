//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSFastEnumeration-Protocol.h"

@class NSSet;

@interface FlurryPLCrashMachExceptionPortSet : NSObject <NSFastEnumeration>
{
    NSSet *_state_set;
    struct plcrash_mach_exception_port_set _asyncSafeRepresentation;
}

@property(readonly, nonatomic) NSSet *set; // @synthesize set=_state_set;
@property(readonly, nonatomic) struct plcrash_mach_exception_port_set asyncSafeRepresentation; // @synthesize asyncSafeRepresentation=_asyncSafeRepresentation;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)initWithAsyncSafeRepresentation:(struct plcrash_mach_exception_port_set)arg1;
- (id)initWithSet:(id)arg1;

@end

