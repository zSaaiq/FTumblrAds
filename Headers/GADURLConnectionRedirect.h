//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURLRequest, NSURLResponse;

@interface GADURLConnectionRedirect : NSObject
{
    NSURLResponse *_response;
    NSURLRequest *_request;
}

@property(readonly, copy, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(readonly, copy, nonatomic) NSURLResponse *response; // @synthesize response=_response;
- (void).cxx_destruct;
- (id)initWithResponse:(id)arg1 request:(id)arg2;

@end

