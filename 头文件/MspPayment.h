//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class MspChannelValue, NSString;

@interface MspPayment : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasPaymentFlag;
    _Bool _hasLogo;
    _Bool _hasName;
    _Bool _hasTail;
    _Bool _hasDetailAction;
    _Bool _hasValue;
    _Bool _hasDetail;
    _Bool _hasDlg;
    _Bool _hasChildren;
    _Bool _hasCloseMsg;
    _Bool _hasAvailableTitle;
    _Bool _hasDiscountTitle;
    _Bool _hasFanTitle;
    _Bool _hasHuiTitle;
    _Bool _hasEndCode;
    _Bool _hasChannelValue;
    _Bool _hasExtinfo;
    int _paymentFlag;
    NSString *_logo;
    NSString *_name;
    NSString *_tail;
    NSString *_detailAction;
    NSString *_value;
    NSString *_detail;
    NSString *_dlg;
    NSString *_children;
    NSString *_closeMsg;
    NSString *_availableTitle;
    NSString *_discountTitle;
    NSString *_fanTitle;
    NSString *_huiTitle;
    NSString *_endCode;
    MspChannelValue *_channelValue;
    NSString *_extinfo;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *extinfo; // @synthesize extinfo=_extinfo;
@property(retain, nonatomic) MspChannelValue *channelValue; // @synthesize channelValue=_channelValue;
@property(retain, nonatomic) NSString *endCode; // @synthesize endCode=_endCode;
@property(retain, nonatomic) NSString *huiTitle; // @synthesize huiTitle=_huiTitle;
@property(retain, nonatomic) NSString *fanTitle; // @synthesize fanTitle=_fanTitle;
@property(retain, nonatomic) NSString *discountTitle; // @synthesize discountTitle=_discountTitle;
@property(retain, nonatomic) NSString *availableTitle; // @synthesize availableTitle=_availableTitle;
@property(retain, nonatomic) NSString *closeMsg; // @synthesize closeMsg=_closeMsg;
@property(retain, nonatomic) NSString *children; // @synthesize children=_children;
@property(retain, nonatomic) NSString *dlg; // @synthesize dlg=_dlg;
@property(retain, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *detailAction; // @synthesize detailAction=_detailAction;
@property(retain, nonatomic) NSString *tail; // @synthesize tail=_tail;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *logo; // @synthesize logo=_logo;
@property(nonatomic) int paymentFlag; // @synthesize paymentFlag=_paymentFlag;
@property(readonly) _Bool hasExtinfo; // @synthesize hasExtinfo=_hasExtinfo;
@property(readonly) _Bool hasChannelValue; // @synthesize hasChannelValue=_hasChannelValue;
@property(readonly) _Bool hasEndCode; // @synthesize hasEndCode=_hasEndCode;
@property(readonly) _Bool hasHuiTitle; // @synthesize hasHuiTitle=_hasHuiTitle;
@property(readonly) _Bool hasFanTitle; // @synthesize hasFanTitle=_hasFanTitle;
@property(readonly) _Bool hasDiscountTitle; // @synthesize hasDiscountTitle=_hasDiscountTitle;
@property(readonly) _Bool hasAvailableTitle; // @synthesize hasAvailableTitle=_hasAvailableTitle;
@property(readonly) _Bool hasCloseMsg; // @synthesize hasCloseMsg=_hasCloseMsg;
@property(readonly) _Bool hasChildren; // @synthesize hasChildren=_hasChildren;
@property(readonly) _Bool hasDlg; // @synthesize hasDlg=_hasDlg;
@property(readonly) _Bool hasDetail; // @synthesize hasDetail=_hasDetail;
@property(readonly) _Bool hasValue; // @synthesize hasValue=_hasValue;
@property(readonly) _Bool hasDetailAction; // @synthesize hasDetailAction=_hasDetailAction;
@property(readonly) _Bool hasTail; // @synthesize hasTail=_hasTail;
@property(readonly) _Bool hasName; // @synthesize hasName=_hasName;
@property(readonly) _Bool hasLogo; // @synthesize hasLogo=_hasLogo;
@property(readonly) _Bool hasPaymentFlag; // @synthesize hasPaymentFlag=_hasPaymentFlag;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

