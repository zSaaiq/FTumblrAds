//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FlurryVASTLinear, NSString;

@interface FlurryVASTCreative : NSObject
{
    int sequence;
    int depth;
    NSString *cId;
    long long creativeFormatType;
    FlurryVASTLinear *linear;
    NSString *apiFramework;
    NSString *adId;
}

@property(nonatomic) int depth; // @synthesize depth;
@property(retain, nonatomic) NSString *adId; // @synthesize adId;
@property(retain, nonatomic) NSString *apiFramework; // @synthesize apiFramework;
@property(retain, nonatomic) FlurryVASTLinear *linear; // @synthesize linear;
@property(nonatomic) long long creativeFormatType; // @synthesize creativeFormatType;
@property(nonatomic) int sequence; // @synthesize sequence;
@property(retain, nonatomic) NSString *cId; // @synthesize cId;
- (void).cxx_destruct;

@end
