//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSTextContainer, UIImage;

@protocol NSTextAttachmentContainer <NSObject>
- (struct CGRect)attachmentBoundsForTextContainer:(NSTextContainer *)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;
- (UIImage *)imageForBounds:(struct CGRect)arg1 textContainer:(NSTextContainer *)arg2 characterIndex:(unsigned long long)arg3;
@end

