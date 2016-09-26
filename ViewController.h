//
//  ViewController.h
//  HoustonSeptember2016iOS
//
//  Created by Colby Gatte on 9/26/16.
//  Copyright © 2016 Colby Gatte. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

// Hook up text field into code
// Property: anything that tells us about objects
// Like, how many legs a table has, what someone's height is
// Properties can be applied to anything
//
// nonatomic: that in a threading scenario, this property will become a little bit slower
// weak: it is for memory management.
// automatic memory management introduced in 2010/2011
// IBOutlet is to connect to the screen?
// the last part, behind the *, can be anything
// You are expressing what the textfield on the screen is
// the * is saying that it is a reference type. (* is called static)
@property (nonatomic, weak) IBOutlet UITextField *greetingTextField;
@property (nonatomic, weak) IBOutlet UILabel *greetingLabel;

@end

