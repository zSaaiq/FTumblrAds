//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TMReplyParameters : NSObject
{
    int _advertisementType;
    NSString *_postID;
    NSString *_reblogKey;
    NSString *_replyText;
    NSString *_blogName;
}

- (void).cxx_destruct;
@property(nonatomic) int advertisementType; // @synthesize advertisementType=_advertisementType;
@property(readonly, copy, nonatomic) NSString *blogName; // @synthesize blogName=_blogName;
@property(copy, nonatomic) NSString *replyText; // @synthesize replyText=_replyText;
@property(copy, nonatomic) NSString *reblogKey; // @synthesize reblogKey=_reblogKey;
@property(copy, nonatomic) NSString *postID; // @synthesize postID=_postID;
- (id)initWithPostID:(id)arg1 reblogKey:(id)arg2 replyText:(id)arg3 blogName:(id)arg4;

@end

