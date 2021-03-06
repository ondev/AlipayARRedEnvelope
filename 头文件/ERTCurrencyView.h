//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextFieldDelegate.h"

@class ERTCurrencyInfo, ERTTextField, NSString, UIControl, UIImageView, UILabel;

@interface ERTCurrencyView : UIView <UITextFieldDelegate>
{
    ERTTextField *_inputTextField;
    ERTCurrencyInfo *_currencyInfo;
    id <ERTCurrencyViewDelegate> _delegate;
    UIImageView *_flag;
    UILabel *_name;
    UIImageView *_gpsIcon;
    UIControl *_selectView;
    UILabel *_chnName;
}

@property(retain, nonatomic) UILabel *chnName; // @synthesize chnName=_chnName;
@property(retain, nonatomic) UIControl *selectView; // @synthesize selectView=_selectView;
@property(retain, nonatomic) UIImageView *gpsIcon; // @synthesize gpsIcon=_gpsIcon;
@property(retain, nonatomic) UILabel *name; // @synthesize name=_name;
@property(retain, nonatomic) UIImageView *flag; // @synthesize flag=_flag;
@property(nonatomic) __weak id <ERTCurrencyViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) ERTCurrencyInfo *currencyInfo; // @synthesize currencyInfo=_currencyInfo;
@property(retain, nonatomic) ERTTextField *inputTextField; // @synthesize inputTextField=_inputTextField;
- (void).cxx_destruct;
- (void)animationTextField;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (id)clearDecimal:(id)arg1;
- (_Bool)isTextValid:(id)arg1 withReplacement:(id)arg2;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)valueDidChange:(id)arg1;
- (void)select:(id)arg1;
- (void)ertResignFirstResponder;
- (void)markLocalCurrency:(id)arg1;
- (void)refreshWithCurrency:(id)arg1;
- (void)refreshWithCurrencyInfo:(id)arg1;
- (void)updateText:(id)arg1;
- (void)setPlaceHolder:(id)arg1;
- (void)setDefaultValue;
- (void)initSubView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

