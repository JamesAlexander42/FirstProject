//
//  DetailViewController.h
//  FirstProject
//
//  Created by James Alexander on 10/4/13.
//  Copyright (c) 2013 James Alexander. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
