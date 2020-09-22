//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSError, NSString;

@interface TMParsedHTTPResponse : NSObject
{
    _Bool _successful;
    NSDictionary *_JSONDictionary;
    NSString *_responseDescription;
    NSError *_error;
    NSArray *_APIErrors;
    long long _statusCode;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;
@property(readonly, copy, nonatomic) NSArray *APIErrors; // @synthesize APIErrors=_APIErrors;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, copy, nonatomic) NSString *responseDescription; // @synthesize responseDescription=_responseDescription;
@property(readonly, nonatomic) _Bool successful; // @synthesize successful=_successful;
@property(readonly, copy, nonatomic) NSDictionary *JSONDictionary; // @synthesize JSONDictionary=_JSONDictionary;
- (id)initWithJSONDictionary:(id)arg1 successful:(_Bool)arg2 responseDescription:(id)arg3 error:(id)arg4 APIErrors:(id)arg5 statusCode:(long long)arg6;

@end

