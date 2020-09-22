//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RTObject.h"

@class NSDictionary, NSMutableDictionary, NSSet, NSString, RTHandleCreator, RTKernel;

@interface RTService : RTObject
{
    RTKernel *mKernel;
    NSDictionary *mInterfaceDescription;
    RTHandleCreator *mHandleCreator;
    NSMutableDictionary *mMutableHandles;
    NSDictionary *mCapabilitiesDefinition;
}

+ (id)validSyncCallers;
+ (id)sharedIDLValidator;
+ (id)sharedIDLCreator;
+ (id)sharedNativeContext;
+ (id)sharedKernel;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *capabilitiesDefinition; // @synthesize capabilitiesDefinition=mCapabilitiesDefinition;
@property(retain, nonatomic) NSMutableDictionary *mutableHandles; // @synthesize mutableHandles=mMutableHandles;
@property(retain, nonatomic) RTHandleCreator *handleCreator; // @synthesize handleCreator=mHandleCreator;
@property(copy, nonatomic) NSDictionary *interfaceDescription; // @synthesize interfaceDescription=mInterfaceDescription;
@property(nonatomic) RTKernel *kernel; // @synthesize kernel=mKernel;
- (id)serviceCapabilities;
- (void)unregisterServiceHandle:(id)arg1;
- (void)registerServiceHandle:(id)arg1;
- (void)leaveFocused;
- (void)enterFocused;
- (void)enterSuspend;
- (void)enterUnfocused;
- (void)setup:(int)arg1 withGroup:(id)arg2;
- (id)description;
- (id)initWithID:(id)arg1 kernel:(id)arg2 idl:(id)arg3 handleCreator:(id)arg4;
- (id)initWithID:(id)arg1 kernel:(id)arg2 idl:(id)arg3;
- (id)initWithKernel:(id)arg1 idlCreator:(id)arg2 handleCreator:(id)arg3;
- (id)initWithKernel:(id)arg1 idlCreator:(id)arg2;
- (id)initWithID:(id)arg1;
- (id)init;
@property(readonly, nonatomic) _Bool onlySetupOnMainThread; // @dynamic onlySetupOnMainThread;
@property(readonly, copy, nonatomic) NSSet *optionalServices; // @dynamic optionalServices;
@property(readonly, copy, nonatomic) NSSet *mandatoryServices; // @dynamic mandatoryServices;
@property(readonly, copy, nonatomic) NSString *extendsService; // @dynamic extendsService;
@property(readonly, copy, nonatomic) NSString *name; // @dynamic name;
@property(readonly, retain, nonatomic) NSDictionary *handles; // @dynamic handles;
- (void)obtainCapabilitiesWithGroup:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)createHandle:(id)arg1 forInterface:(id)arg2 onContext:(id)arg3;

@end

