//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RTObject.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSString, RTIDLValidator, RTService;

@interface RTHandle : RTObject
{
    _Bool mHandleSetup;
    NSString *mContextID;
    NSString *mUniqueID;
    NSMutableDictionary *mOutstandingCalls;
    NSMutableArray *mUninvokedCalls;
    NSString *mInterfaceID;
    NSDictionary *mIDL;
    RTIDLValidator *mIDLValidator;
    RTService *mService;
}

+ (id)validSyncCallers;
- (void).cxx_destruct;
@property(retain, nonatomic) RTService *service; // @synthesize service=mService;
@property(nonatomic) _Bool handleSetup; // @synthesize handleSetup=mHandleSetup;
@property(retain, nonatomic) RTIDLValidator *IDLValidator; // @synthesize IDLValidator=mIDLValidator;
@property(retain, nonatomic) NSDictionary *IDL; // @synthesize IDL=mIDL;
@property(copy, nonatomic) NSString *interfaceID; // @synthesize interfaceID=mInterfaceID;
@property(retain, nonatomic) NSMutableArray *uninvokedCalls; // @synthesize uninvokedCalls=mUninvokedCalls;
@property(retain, nonatomic) NSMutableDictionary *outstandingCalls; // @synthesize outstandingCalls=mOutstandingCalls;
@property(copy, nonatomic) NSString *uniqueID; // @synthesize uniqueID=mUniqueID;
@property(copy, nonatomic) NSString *contextID; // @synthesize contextID=mContextID;
- (void)destroyHandle:(id)arg1 call:(id)arg2;
- (void)createHandle:(id)arg1 call:(id)arg2;
- (void)invokeCall:(id)arg1;
- (void)dealloc;
- (id)initWithID:(id)arg1 service:(id)arg2 interfaceID:(id)arg3 contextID:(id)arg4 interfaceIDL:(id)arg5 IDLValidator:(id)arg6;
- (id)description;

@end

