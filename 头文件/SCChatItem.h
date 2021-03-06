//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SCChatItem : NSObject
{
    _Bool _displayWhole;
    NSString *_senderName;
    NSString *_msgBody;
    struct CGRect _nameRect;
    struct CGRect _msgRect;
    struct CGRect _wholeRect;
}

@property(nonatomic) struct CGRect wholeRect; // @synthesize wholeRect=_wholeRect;
@property(nonatomic) _Bool displayWhole; // @synthesize displayWhole=_displayWhole;
@property(nonatomic) struct CGRect msgRect; // @synthesize msgRect=_msgRect;
@property(nonatomic) struct CGRect nameRect; // @synthesize nameRect=_nameRect;
@property(retain, nonatomic) NSString *msgBody; // @synthesize msgBody=_msgBody;
@property(retain, nonatomic) NSString *senderName; // @synthesize senderName=_senderName;
- (void).cxx_destruct;
- (_Bool)isEqualTo:(id)arg1;

@end

