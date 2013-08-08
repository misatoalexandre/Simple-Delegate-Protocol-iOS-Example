//
//  SecondViewController.h
//  Delegation
//
//  Created by Misato Tina Alexandre on 8/8/13.
//  Copyright (c) 2013 Misato Tina Alexandre. All rights reserved.
//

#import <UIKit/UIKit.h>
@protocol secondViewControllerDelegate;

@interface SecondViewController : UIViewController
@property (weak, nonatomic) id<secondViewControllerDelegate>delegate;
- (IBAction)cancel:(id)sender;

@end

@protocol secondViewControllerDelegate

-(void)secondViewControllerDidCancel;

@end