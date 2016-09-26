//
//  ViewController.m
//  HoustonSeptember2016iOS
//
//  Created by Colby Gatte on 9/26/16.
//  Copyright © 2016 Colby Gatte. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

// Going to write actions here
- (IBAction) submitButtonPressed {
    self.greetingLabel.text = self.greetingTextField.text;
    
    
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
