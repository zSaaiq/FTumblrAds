//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FBAdInitResults : NSObject
{
    _Bool _success;
    NSString *_message;
}

+ (void)initialize;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic, getter=isSuccess) _Bool success; // @synthesize success=_success;
- (void).cxx_destruct;
- (id)initWithSuccess:(_Bool)arg1 message:(id)arg2;

@end

