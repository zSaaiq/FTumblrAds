//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSData, NSString, NSURL, UIImageView;
@protocol _TtP11ImageLoader10Cancelable_;

@protocol _TtP11ImageLoader11ImageLoader_
- (NSData *)cachedDataFromDiskFor:(NSURL *)arg1;
- (NSString *)cachedImageFilePathFor:(NSURL *)arg1;
- (_Bool)hasCachedImageFor:(NSURL *)arg1;
- (id <_TtP11ImageLoader10Cancelable_>)loadImageAt:(NSURL *)arg1 OAuth:(_Bool)arg2 imageView:(UIImageView *)arg3 displayImageImmediately:(_Bool)arg4 preloadAllFrames:(_Bool)arg5 completion:(void (^)(UIImage *, NSError *))arg6;
@end

