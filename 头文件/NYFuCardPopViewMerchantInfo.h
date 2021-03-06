//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface NYFuCardPopViewMerchantInfo : NSObject
{
    _Bool _isFromWanneng;
    NSString *_cardId;
    NSString *_type;
    NSString *_merchantId;
    NSString *_merchantLogo;
    NSString *_merchantWishes;
    NSString *_merchantFollowDesc;
    NSString *_merchantFollowId;
    NSString *_frontAdImage;
    NSString *_frontAdVideo;
    NSString *_brandHomeUrl;
    NSString *_backAdImage;
    NSString *_backAdImageRedirectUrl;
    NSString *_btnTitle;
    NSString *_statusDisplayInfo;
    NSString *_resultCode;
    NSString *_prompt;
    NSString *_transPicUrl;
}

@property(retain, nonatomic) NSString *transPicUrl; // @synthesize transPicUrl=_transPicUrl;
@property(retain, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
@property(retain, nonatomic) NSString *resultCode; // @synthesize resultCode=_resultCode;
@property(retain, nonatomic) NSString *statusDisplayInfo; // @synthesize statusDisplayInfo=_statusDisplayInfo;
@property(retain, nonatomic) NSString *btnTitle; // @synthesize btnTitle=_btnTitle;
@property(retain, nonatomic) NSString *backAdImageRedirectUrl; // @synthesize backAdImageRedirectUrl=_backAdImageRedirectUrl;
@property(retain, nonatomic) NSString *backAdImage; // @synthesize backAdImage=_backAdImage;
@property(nonatomic) _Bool isFromWanneng; // @synthesize isFromWanneng=_isFromWanneng;
@property(retain, nonatomic) NSString *brandHomeUrl; // @synthesize brandHomeUrl=_brandHomeUrl;
@property(retain, nonatomic) NSString *frontAdVideo; // @synthesize frontAdVideo=_frontAdVideo;
@property(retain, nonatomic) NSString *frontAdImage; // @synthesize frontAdImage=_frontAdImage;
@property(retain, nonatomic) NSString *merchantFollowId; // @synthesize merchantFollowId=_merchantFollowId;
@property(retain, nonatomic) NSString *merchantFollowDesc; // @synthesize merchantFollowDesc=_merchantFollowDesc;
@property(retain, nonatomic) NSString *merchantWishes; // @synthesize merchantWishes=_merchantWishes;
@property(retain, nonatomic) NSString *merchantLogo; // @synthesize merchantLogo=_merchantLogo;
@property(retain, nonatomic) NSString *merchantId; // @synthesize merchantId=_merchantId;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *cardId; // @synthesize cardId=_cardId;
- (void).cxx_destruct;
- (_Bool)isRandomCard;
- (_Bool)isSuperAbilityCard;

@end

