//
//  RootViewController.h
//  literate-telegram
//
//  Created by Shane Doulen on 10/24/16.
//  Copyright © 2016 Shane Doulen. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RootViewController : UIViewController <UIPageViewControllerDelegate>

@property (strong, nonatomic) UIPageViewController *pageViewController;

@end

