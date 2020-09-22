//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSError, NSURL;
@protocol SDWebImageOperation;

@protocol SDImageLoader <NSObject>
- (_Bool)shouldBlockFailedURLWithURL:(NSURL *)arg1 error:(NSError *)arg2;
- (id <SDWebImageOperation>)requestImageWithURL:(NSURL *)arg1 options:(unsigned long long)arg2 context:(NSDictionary *)arg3 progress:(void (^)(long long, long long, NSURL *))arg4 completed:(void (^)(UIImage *, NSData *, NSError *, _Bool))arg5;
- (_Bool)canRequestImageForURL:(NSURL *)arg1;
@end

