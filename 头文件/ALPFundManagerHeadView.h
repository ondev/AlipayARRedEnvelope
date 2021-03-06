//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class ALPFundHeaderGradientBackgroundView, NSNumberFormatter, NSString, UIControl, UILabel, WWCountingLabel;

@interface ALPFundManagerHeadView : UIView
{
    WWCountingLabel *_profitLabel;
    UILabel *_profitTitleLabel;
    UILabel *_sumAmountTitleLabel;
    UILabel *_sevenDaysRateTitleLabel;
    UILabel *_freezeTitleLabel;
    UILabel *_sumAmountLabel;
    UILabel *_sevenDaysRateLabel;
    UILabel *_freezeLabel;
    UILabel *_avaliableLabel;
    UIView *_bottomView;
    ALPFundHeaderGradientBackgroundView *_backgroundView;
    _Bool _amountIsHidden;
    NSString *_originAmount;
    NSString *_originAvaliableAmount;
    NSString *_originFreeze;
    UIControl *_topControl;
    UIControl *_sumAmountControl;
    UIControl *_freezeAmountControl;
    UIControl *_availableControl;
    UIControl *_sevenDaysControl;
    NSNumberFormatter *_numberFormatter;
    id <ALPFundManagerHeadViewDelegate> _clickDelegate;
}

@property(nonatomic) __weak id <ALPFundManagerHeadViewDelegate> clickDelegate; // @synthesize clickDelegate=_clickDelegate;
@property(retain, nonatomic) NSNumberFormatter *numberFormatter; // @synthesize numberFormatter=_numberFormatter;
- (void).cxx_destruct;
- (_Bool)containsFreezeAmount;
- (void)layoutSubviews;
- (void)startAnimation;
- (void)updateLastProfit:(id)arg1 amount:(id)arg2 availiableAmount:(id)arg3 freezeAmount:(id)arg4 sevenDays:(id)arg5;
- (void)updateFreezeAmount;
- (void)updateTotalAmount;
- (void)updateAvaliableAmount;
- (void)updateAmountDidHidden:(_Bool)arg1;
- (id)formatString:(id)arg1;
- (id)formatNumber:(id)arg1 number:(id)arg2;
- (void)didClickControl:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)init;

@end

