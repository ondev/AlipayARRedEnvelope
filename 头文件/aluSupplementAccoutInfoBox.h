//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextFieldDelegate.h"

@class NSDictionary, NSString, UITextField;

@interface aluSupplementAccoutInfoBox : UIView <UITextFieldDelegate>
{
    UITextField *_nameField;
    UITextField *_iDCardField;
    NSDictionary *_dataDic;
}

@property(retain, nonatomic) NSDictionary *dataDic; // @synthesize dataDic=_dataDic;
@property(retain, nonatomic) UITextField *iDCardField; // @synthesize iDCardField=_iDCardField;
@property(retain, nonatomic) UITextField *nameField; // @synthesize nameField=_nameField;
- (void).cxx_destruct;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (id)valueOfElement:(long long)arg1;
- (id)titleOfElement:(int)arg1;
- (long long)maxRowsNum;
- (void)addAccountInfo:(id)arg1 startPosition:(struct CGPoint)arg2;
- (id)initWithFrame:(struct CGRect)arg1 infoDic:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

