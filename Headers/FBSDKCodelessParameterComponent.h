//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface FBSDKCodelessParameterComponent : NSObject
{
    NSString *_name;
    NSString *_value;
    NSArray *_path;
    NSString *_pathType;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *pathType; // @synthesize pathType=_pathType;
@property(readonly, nonatomic) NSArray *path; // @synthesize path=_path;
@property(readonly, copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (_Bool)isEqualToParameter:(id)arg1;
- (id)initWithJSON:(id)arg1;

@end

