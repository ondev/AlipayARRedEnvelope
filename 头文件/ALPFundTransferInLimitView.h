//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class UIImageView, UILabel;

@interface ALPFundTransferInLimitView : UIControl
{
    UILabel *_limitLabel;
    UIImageView *_tipImageView;
    CDUnknownBlockType _clickBlock;
}

@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
@property(retain, nonatomic) UIImageView *tipImageView; // @synthesize tipImageView=_tipImageView;
@property(retain, nonatomic) UILabel *limitLabel; // @synthesize limitLabel=_limitLabel;
- (void).cxx_destruct;
- (void)didClickSelf;
- (void)setLimitExtMsg:(id)arg1 linkText:(id)arg2 clickedOnLink:(CDUnknownBlockType)arg3;
- (void)reset;
- (void)setLimitAmount:(id)arg1 extMsg:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

