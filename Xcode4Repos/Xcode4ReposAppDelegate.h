//
//  Xcode4ReposAppDelegate.h
//  Xcode4Repos
//
//  Created by Kerry Brockway on 3/17/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Xcode4ReposViewController;

@interface Xcode4ReposAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet Xcode4ReposViewController *viewController;

@end
