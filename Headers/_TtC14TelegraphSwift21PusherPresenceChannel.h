//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_TtC14TelegraphSwift13PusherChannel.h"

@class MISSING_TYPE, NSArray, NSString;

@interface _TtC14TelegraphSwift21PusherPresenceChannel : _TtC14TelegraphSwift13PusherChannel
{
    MISSING_TYPE *members;
    MISSING_TYPE *onMemberAdded;
    MISSING_TYPE *onMemberRemoved;
    MISSING_TYPE *myId;
}

- (void).cxx_destruct;
- (id)initWithName:(id)arg1 connection:(id)arg2 auth:(id)arg3;
- (id)me;
- (id)findMemberWithUserId:(id)arg1;
- (void)setMyUserIdWithChannelData:(id)arg1;
- (void)removeMemberWithMemberJSON:(id)arg1;
- (void)addExistingMembersWithMemberHash:(id)arg1;
- (void)addMemberWithMemberJSON:(id)arg1;
- (id)initWithName:(id)arg1 connection:(id)arg2 auth:(id)arg3 onMemberAdded:(CDUnknownBlockType)arg4 onMemberRemoved:(CDUnknownBlockType)arg5;
@property(nonatomic, copy) NSString *myId;
@property(nonatomic, copy) CDUnknownBlockType onMemberRemoved;
@property(nonatomic, copy) CDUnknownBlockType onMemberAdded;
@property(nonatomic, copy) NSArray *members;

@end

